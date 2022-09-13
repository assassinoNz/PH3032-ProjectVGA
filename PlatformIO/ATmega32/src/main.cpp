//EXTERNAL DEPENDENCIES
#include <avr/io.h>
#include <avr/interrupt.h>
#include <avr/pgmspace.h>

//LOCAL DEPENDENCIES
#include <640x480/1bit/UoCLogo.h>

//LOCAL DEFINITIONS
#define nop5 asm volatile("nop\n\t");asm volatile("nop\n\t");asm volatile("nop\n\t");asm volatile("nop\n\t");asm volatile("nop\n\t")
#ifdef OUTPUT_USART
    #define OUT_REGISTER UDR
#endif
#ifdef OUTPUT_PORT
    #define OUT_REGISTER PORTC
#endif

//GLOBALS
unsigned char row;

//INTERRUPT SERVICE ROUTINES
ISR(TIMER0_OVF_vect) {
    //CASE: Painting of a new line started
    
    //NOTE: Within the horizontal sync pulse, all R,G,B channels must be at 0V
    #ifdef OUTPUT_PORT
        OUT_REGISTER = 0; //Clear the output register
    #endif

    /*NOTE:
    currentVisibleScanLineIndex = currentScanLineIndex - nonVisibleScanLines
    rowIter increments once per every 2**(vRes/vPixels-1) scan lines
    */
    #ifdef RESOLUTION_800x600
        row = (TCNT1-27)>>((vRes/vPixels)/2); //Pre-calculate row iterator for current visible scan line
    #endif
    #ifdef RESOLUTION_640x480
        row = (TCNT1-35)>>((vRes/vPixels)/2); //Pre-calculate row iterator for current visible scan line
    #endif

    #ifdef OUTPUT_USART
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][0]); //Pre-load the first column to transmission buffer
    #endif
}

ISR(TIMER0_COMP_vect) {
    //CASE: Non-sync region of the currently painting line started

    #ifdef OUTPUT_USART
        /*NOTE:
        USART protocol requires small HIGH(5V) time on the transmitter pin to establish connection.
        Therfore, enabling USART transmission on pin that is LOW(0V) may need to be made HIGH for a few microseconds for it to be ready.
        */
        //WARNING: Since we are enabling USART on a LOW pin, few starting pixels on each scan line will turn white
        UCSRB = (1<<TXEN); //Turn USART transmitter on

        //WARNING: Since we have preloaded the 0th index column, next column is at 1st index
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][1]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][2]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][3]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][4]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][5]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][6]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][7]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][8]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][9]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][10]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][11]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][12]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][13]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][14]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][15]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][16]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][17]);
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][18]);
        nop5;
        OUT_REGISTER = pgm_read_byte(&frameBuffer[row][19]);

        #ifdef RESOLUTION_640x480
            OUT_REGISTER = pgm_read_byte(&frameBuffer[row][20]);
            nop5;
            OUT_REGISTER = pgm_read_byte(&frameBuffer[row][21]);
            OUT_REGISTER = pgm_read_byte(&frameBuffer[row][22]);
            nop5;
            OUT_REGISTER = pgm_read_byte(&frameBuffer[row][23]);
        #endif

        UCSRB = 0; //Turn USART transmitter off to blank all R,G,B channels
    #endif
    #ifdef OUTPUT_PORT
        const unsigned char* pixelIndexPtr = &frameBuffer[row][0]; //Get the pointer to the first pixel of the current row

        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
        OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);

        #ifdef RESOLUTION_640x480
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr++);
            OUT_REGISTER = pgm_read_byte(pixelIndexPtr);
        #endif
    #endif
}

//METHODS
void setupHorizontalSignal() {
    //HORIZONTAL SIGNAL (counter0, clocked by system 16/8MHz clock)
    //====IO=========================
    DDRD |= (1<<PD5); //Set PD5/OC0B/T1/D5 as output

    //====TCCR0A,TCCR0B==============
    TCCR0 |= (1<<WGM01) | (1<<WGM00); //Use mode: CTC when TCNT0=OCR0
    TCCRA |= (1<<COMB1) | (1<<COM0B0); //Use mode: When in fast PWM, clear OC0B at 0, set OC0B when TCNT0=OCR0B (inverting mode)

    //====TCNT0,OCR0A,OCR0B==========
    #ifdef RESOLUTION_800x600
        /*NOTE:
        The counter0 has milestones 0-6(LOW), 6-53(HIGH)
        0-6.4 is the sync pulse (3.2us)
        6.4-10.8 is the back porch (2.2us)
        10.8-50.8 is the visible time (20us)
        50.8-52.8 is the front porch (1us)

        0-53 is the total (26.4us)
        */
        TCNT0 = 0; //Set the initial counter0 value
        OCR0B = (unsigned char) 6; //Set OC0B level change value for counter0
        OCR0A = (unsigned char) 53; //Set counter0 TOP value
    #endif
    #ifdef RESOLUTION_640x480
        /*NOTE:
        The counter0 has milestones 0-7.6(LOW), 7.6-63.55(HIGH)
        0-7.6 is the sync pulse (3.8133us)
        7.6-11.43 is the back porch (1.9066us)
        11.43-62.28 is the visible time (25.4220us)
        62.28-63.55 is the front porch (31.7775us)

        0-63.55 is the total (16.5792ms)
        */
        TCNT0 = 0; //Set the initial counter0 value
        OCR0B = (unsigned char) 7; //Set OC0B level change value for counter0
        OCR0A = (unsigned char) 63; //Set counter0 TOP value
    #endif

    //====TIMSK0==============
    TIMSK |= (1<<TOIE0) | (1<<OCIE0); //Enable counter0 overflow and compareB interrupts
}

void setupVerticalSignal() {
    //VERTICAL SIGNAL (counter1, clocked by counter0's output on PD5/OC0B/T1/D5)
    //====IO=========================
    DDRB |= (1<<PB2); //Set PB2/OC1B/D10 as output

    //====TCCR1A,TCCR1B==============
    TCCR1B |= (1<<WGM13) | (1<<WGM12); TCCR1A |= (1<<WGM11) | (1<<WGM10); //Use mode: Fast PWM, clear counter when TCNT1=OCR1A
    TCCR1A |= (1<<COM1B1) | (1<<COM1B0); //Use mode: When in fast PWM, clear OC1B at 0, set OC1B when TCNT1=OCR1B (inverting mode)

    //====TCNT1,OCR1A,OCR1B==========
    #ifdef RESOLUTION_800x600
        /*NOTE:
        The counter1 has milestones 0-4(LOW), 4-628(HIGH)
        0-4 is the sync pulse (0.1056ms)
        4-27 is the back porch (0.6072ms)
        27-627 is the visible time (15.84ms)
        627-628 is the front porch (0.0264ms)

        0-628 is the total (16.5792ms)
        */
        TCNT1 = 0; //Set the initial counter1 value
        OCR1B = (unsigned short) 3; //Set OC1B level change value for counter1
        OCR1A = (unsigned short) 627; //Set counter1 TOP
    #endif
    #ifdef RESOLUTION_640x480
        /*NOTE:
        The counter1 has milestones 0-2(LOW), 2-525(HIGH)
        0-2 is the sync pulse (0.0635ms)
        2-35 is the back porch (1.0486ms)
        35-515.70 is the visible time (15.2532ms)
        515-525 is the front porch (0.6355ms)

        0-525 is the total (16.5792ms)
        */
        TCNT1 = 0; //Set the initial counter1 value
        OCR1B = (unsigned short) 1; //Set OC1B level change value for counter1
        OCR1A = (unsigned short) 524; //Set counter1 TOP
    #endif
}

void setupOutput() {
    #ifdef OUTPUT_USART
        //====UBRR=======================
        //NOTE: Baud Rate = 16MHz/(2*(1+UBRR))
        UBRRH = 0; UBRRL = 0; //Must be set to zero for maximum baud rate

        //====IO==========================
        DDRD |= (1<<PD4); //Set PD4/XCK/D4 as output

        //====UCSRC======================
        UCSRC |= (1<<UMSEL); //Use mode: Synchronous master mode
        UCSRC |= (1<<UCPOL);
        // UCSRC &= ~(1<<UDORD); //MSB first transfer mode
    #endif
    #ifdef OUTPUT_PORT
        //====IO==========================
        DDRC |= 0b00111111; //Set PD0:5 as output
    #endif
}

int main(void) {
    //====SIGNALS=====================
    setupHorizontalSignal();
    setupVerticalSignal();
    setupOutput();
    
    //====INTERRUPTS==================
    sei(); //Enable global interrupts

    //COUNTER INITIALIZATION
    TCCR0 |= (1<<CS01); //Start counter0 with a pre-scaler of 8
    TCCR1B |= (1<<CS12) | (1<<CS11); //Start counter1 with NGT clock on PD5/OC0B/T1/D5 (Output of counter0)
    
    while (1) {
        
    }
}