/**Auto generated by Monochromer. Don't edit by hand**/

//CONDITIONAL COMPILATION DEFINITIONS
#define RESOLUTION_640x480
#define PALETTE_1BIT

const unsigned short hPixels = 640; //Number of horizontal pixels in the targeted VGA mode
const unsigned short vPixels = 480; //Number of vertical pixels in the targeted VGA mode
const unsigned char cols = 24; //Number of columns/bytes horizontally supported by the current display mode
const unsigned char rows = 240; //Number of rows vertically supported by the current display mode

//NOTE: The following frame buffer maps directly to the frame buffer displayed
const unsigned char frameBuffer[rows][cols] PROGMEM = {
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x07,0x83,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xC1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x0F,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x1F,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xF0,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x7F,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0xFF,0xFC,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFE,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0xFF,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0x83,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x0F,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3F,0xFF,0xFF,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0xFF,0xF8,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xFE,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC1,0xFF,0xFF,0xFF,0xFE,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xC1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x0F,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xF8,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0x7F,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0x3F,0xBF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xBF,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x3E,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0x9F,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xDF,0x9F,0x9F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x07,0xC1,0xCF,0xCF,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xC7,0xC7,0xCF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0xE3,0xE7,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x1F,0x07,0xF1,0xE3,0xE7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x3F,0x0E,0xF8,0x71,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x7E,0x0E,0x3C,0x38,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x7C,0x1F,0x0E,0x08,0x71,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xFC,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0x83,0x00,0x30,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7C,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x01,0xF8,0x67,0xE0,0xC0,0x18,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7E,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x03,0xF0,0x70,0x70,0x00,0x08,0x7F,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x03,0xE0,0xF8,0x00,0x00,0x00,0x3F,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x1F,0x80,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x07,0xE1,0xFE,0x00,0x00,0x00,0x3F,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0x80,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0x80,0x00,0x00,0x1F,0xDF,0xFF,0xFF,0xFF,0x3F,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0xF0,0x00,0x00,0x0F,0xDF,0xFF,0xFF,0xFF,0x9F,0xFF,0xFF,0x07,0xE0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFC,0x00,0x00,0x07,0xCF,0xFF,0xFF,0xFF,0xCF,0xFF,0xFF,0x83,0xE0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0x80,0x00,0x03,0xCF,0xFF,0xFF,0x9F,0xC7,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x3E,0x0F,0xFF,0xFF,0xC0,0x00,0x01,0xCF,0xFF,0xFF,0xCF,0xE7,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xF0,0x00,0x00,0xCF,0xFF,0xFF,0xE7,0xE3,0xFF,0xFF,0xE0,0xF8,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFF,0xF8,0x00,0x00,0x47,0xFF,0xFF,0xF3,0xF3,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x01,0xF8,0x3F,0xFF,0xFF,0xFC,0x00,0x00,0x07,0xFF,0xFF,0xF9,0xF3,0xDF,0xFF,0xF8,0x7E,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0xFF,0xFE,0x00,0x00,0x03,0xFF,0xFF,0xF8,0xF1,0xDF,0xFF,0xF8,0x3F,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x03,0xFF,0xE1,0xFC,0x71,0xDF,0xFF,0xFC,0x1F,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0xFF,0xF0,0x7C,0x71,0x9F,0xFF,0xFE,0x1F,0x80,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x07,0xC1,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x00,0xFF,0xFC,0x1C,0x31,0x9F,0xFF,0xFE,0x0F,0xC0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x7F,0xFE,0x0C,0x11,0x9F,0xFF,0xFF,0x07,0xC0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x00,0x7F,0xFF,0x04,0x00,0x9F,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x1F,0x07,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0x83,0x80,0x00,0x1F,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xE0,0x40,0x00,0x1F,0xFF,0xFF,0xC1,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xF0,0x00,0x00,0x3F,0xFF,0xFF,0xE1,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x7F,0xF8,0x00,0x00,0x3F,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x01},
    {0x00,0x00,0x00,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x3F,0xFF,0xFF,0xF0,0x7E,0x00,0x00,0x01},
    {0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x00,0x3F,0xF8,0x00,0x00,0x7F,0xFF,0xFF,0xF8,0x3E,0x00,0x00,0x01},
    {0x00,0x00,0x03,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x3F,0xF8,0x00,0x00,0x7F,0xFF,0xFF,0xFC,0x3F,0x00,0x00,0x01},
    {0x00,0x00,0x03,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x1F,0xF0,0x00,0x00,0xFF,0xFF,0xFF,0xFC,0x1F,0x80,0x00,0x01},
    {0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x1F,0xC0,0x00,0x01,0xFF,0xFF,0xFF,0xFE,0x0F,0x80,0x00,0x01},
    {0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x18,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0x0F,0xC0,0x00,0x01},
    {0x00,0x00,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x08,0x00,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x01},
    {0x00,0x00,0x1F,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x08,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x00,0x01},
    {0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xBF,0x00,0x00,0x04,0x00,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xC3,0xF0,0x00,0x01},
    {0x00,0x00,0x3E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0x9F,0x00,0x00,0x04,0x00,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xE1,0xF8,0x00,0x01},
    {0x00,0x00,0x7C,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0x80,0x00,0x02,0x00,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x00,0x01},
    {0x00,0x00,0x7C,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xC3,0xC0,0x00,0x01,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7C,0x00,0x01},
    {0x00,0x00,0x78,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xF8,0x00,0x01,0x18,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7C,0x00,0x01},
    {0x00,0x00,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x00,0x00,0x82,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7C,0x00,0x01},
    {0x00,0x00,0xF8,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x1F,0x80,0x00,0x40,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7C,0x00,0x01},
    {0x00,0x00,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x07,0xE0,0x00,0x20,0x4F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x7C,0x00,0x01},
    {0x00,0x00,0x78,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xF0,0x00,0x10,0x2F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x7C,0x00,0x01},
    {0x00,0x00,0x7C,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0x78,0xC3,0x08,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x7C,0x00,0x01},
    {0x00,0x00,0x7C,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x0E,0x00,0x64,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x00,0x01},
    {0x00,0x00,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x00,0x18,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xE1,0xF8,0x00,0x01},
    {0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x01,0xC0,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0xC1,0xF0,0x00,0x01},
    {0x00,0x00,0x1F,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x00,0x00,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0xF0,0x00,0x01},
    {0x00,0x00,0x1F,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x80,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x01},
    {0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x00,0x40,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0x0F,0xC0,0x00,0x01},
    {0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x00,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xC0,0x00,0x01},
    {0x00,0x00,0x03,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0xE0,0x00,0x00,0x01,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0x80,0x00,0x01},
    {0x00,0x00,0x03,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x81,0xC0,0x03,0xC0,0x01,0xFF,0xFF,0xFF,0xFF,0xFC,0x3F,0x00,0x00,0x01},
    {0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0x83,0x80,0x00,0x00,0x23,0xFF,0xFF,0xFF,0xFF,0xF8,0x3E,0x00,0x00,0x01},
    {0x00,0x00,0x00,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xCE,0x00,0x00,0x02,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0x7E,0x00,0x00,0x01},
    {0x00,0x00,0x00,0xFC,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x00,0x00,0x07,0x03,0xFF,0xFF,0xFF,0xFF,0xF0,0xFC,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x07,0x47,0xFF,0xFF,0xFF,0xFF,0xE0,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x3E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x07,0xC7,0xFF,0xFF,0xFF,0xFF,0xC1,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x07,0x87,0xFF,0xFF,0xFF,0xFF,0xC3,0xF0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x07,0x9F,0xFF,0xFF,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x06,0x03,0xFF,0xFF,0xFF,0xFF,0xFF,0x07,0xC0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x07,0xC1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x07,0x03,0xFF,0xFF,0xFF,0xFF,0xFE,0x0F,0xC0,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x01,0xF3,0x83,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0x80,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x07,0xF0,0xC0,0x7F,0xFF,0xFF,0xFF,0xFC,0x1F,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0xFF,0xFF,0xFF,0xFE,0x1C,0x02,0x60,0x1F,0xFF,0xFF,0xFF,0xF8,0x3F,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x01,0xF8,0x3F,0xFF,0xFF,0xFF,0xFF,0xFC,0x70,0x03,0x31,0xEF,0xFF,0xFF,0xFF,0xF8,0x7E,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFC,0xC0,0x00,0xB8,0xEF,0xFF,0x7F,0xFF,0xF0,0x7C,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x7C,0x1F,0xFF,0xFF,0xFF,0xFF,0xFD,0x80,0x00,0x78,0x00,0x00,0x3F,0xFF,0xE0,0xFC,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x7E,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0x1F,0xC0,0x38,0x00,0x00,0x7F,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF,0x3F,0xE0,0x38,0x00,0x00,0x7F,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF8,0x18,0x00,0x00,0xFF,0xFF,0x83,0xE0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0xFF,0xFF,0xFF,0xFE,0x7F,0xF8,0x08,0x00,0x00,0xFF,0xFF,0x07,0xE0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,0xFC,0x0C,0x00,0x19,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFF,0xFF,0xFC,0x7F,0xFE,0x07,0xFF,0xF1,0xFF,0xFE,0x0F,0x80,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x03,0xE0,0xFF,0xFF,0xFF,0xFF,0xF8,0xFF,0xFE,0x07,0xFF,0xF3,0xFF,0xFC,0x1F,0x80,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x03,0xF0,0x7F,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0x07,0xFF,0xE3,0xFF,0xFC,0x3F,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFF,0xFF,0xF8,0xFF,0xFF,0x03,0xFF,0xE3,0xFF,0xF8,0x3E,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0x83,0xFF,0xC7,0xFF,0xF0,0x7E,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0x83,0xFF,0xC7,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0x83,0xFF,0x8F,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0x81,0xFF,0x8F,0xFF,0xC1,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x1F,0x07,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFF,0x1F,0xFF,0x83,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFF,0x1F,0xFF,0x87,0xE0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFE,0x3F,0xFF,0x07,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x07,0xC1,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFE,0x3F,0xFE,0x0F,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFC,0x3F,0xFE,0x1F,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xF0,0xFF,0xFF,0xC1,0xFC,0x7F,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0xFF,0xF0,0xFF,0xFF,0xE1,0xFC,0x7F,0xF8,0x3F,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3F,0xFF,0xFF,0xF0,0xFF,0xFF,0xE1,0xF8,0x7F,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFF,0xF0,0xFF,0xFF,0xE1,0xF8,0xFF,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xF0,0xFF,0xFF,0xE1,0xF8,0xFF,0xE0,0xF8,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x0F,0xFF,0xFF,0xF0,0x7F,0xFF,0xE1,0xF0,0xFF,0xC1,0xF8,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0xF0,0x7F,0xFF,0xE1,0xF1,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xF0,0x7F,0xFF,0xE1,0xF1,0xFF,0x83,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0xFF,0xF0,0x7F,0xFF,0xE1,0xE1,0xFF,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0xFF,0xF8,0x3F,0xFF,0xE1,0xE1,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xF8,0x3F,0xFF,0xE1,0xE3,0xFE,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xF8,0x1F,0xFF,0xC1,0xC3,0xFC,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x7F,0xFF,0xF8,0x1F,0xFF,0xC3,0xC3,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFC,0x0F,0xFF,0xC3,0xC3,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xFF,0xFC,0x07,0xFF,0x83,0xC3,0xF0,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x1F,0xFF,0xFE,0x01,0xFE,0x03,0x87,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x0F,0xFF,0xFE,0x00,0x00,0x03,0x87,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xFF,0xFF,0x00,0x00,0x07,0x87,0xC1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x07,0xFF,0xFF,0x80,0x00,0x87,0x87,0x83,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0xFF,0xFF,0xC0,0x03,0x87,0x87,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xE0,0x0F,0x87,0x87,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xFC,0x7F,0x8F,0x86,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0xFF,0xFF,0xFF,0xFF,0x0F,0x86,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0xFF,0xFF,0x0F,0xC4,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xFF,0xFF,0xFF,0x1F,0xF0,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0xFF,0xFF,0xFE,0x1F,0xF0,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0xFF,0xFF,0xFE,0x3F,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xFF,0xFF,0xFC,0x3F,0xE0,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3E,0x0F,0xFF,0xFF,0xF8,0x3F,0xC1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x07,0xFF,0xFF,0xF8,0x7F,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x87,0xFF,0xFF,0xF0,0x7F,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0xE0,0xFF,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC1,0xFF,0xFF,0xE1,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFF,0xC1,0xFE,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0xFF,0xFF,0x83,0xFC,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF0,0x7F,0xFF,0x07,0xF8,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3F,0xFE,0x0F,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x3F,0xF8,0x1F,0xF0,0x7C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x1F,0xC0,0x3F,0xE0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x00,0x00,0xFF,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x00,0x01,0xFF,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x80,0x0F,0xFF,0x83,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0xFF,0xFF,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0xFF,0xFF,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE1,0xFF,0xFE,0x0F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xE0,0xFF,0xFC,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x7F,0xFC,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7F,0xF8,0x3E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xF8,0x3F,0xF0,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFC,0x1F,0xF0,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7E,0x1F,0xE1,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0x0F,0xC1,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x07,0xC3,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0x83,0x87,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC3,0x07,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xC0,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0xE0,0x1F,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0xF0,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x3F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0xF8,0x7E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xFF,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x3F,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}
};