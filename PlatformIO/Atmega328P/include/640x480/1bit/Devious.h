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
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0xC0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0E,0x80,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x00,0x00,0xFB,0x80,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x08,0x00,0x07,0xF1,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x0F,0x80,0x57,0xE1,0xC0,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x83,0xFF,0x80,0x43,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x0F,0xBF,0xFF,0x00,0xE7,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0x5F,0xFE,0x00,0x6D,0x82,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x0F,0xFD,0xFC,0x00,0xF0,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x1F,0xFF,0xF8,0x01,0xF0,0x41,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x0F,0xFF,0xE0,0x03,0xF3,0x01,0x80,0x81,0x08,0x01,0x04,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x1F,0x9F,0xC0,0x07,0xF3,0x21,0xD0,0x00,0x40,0x18,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x35,0x1F,0x80,0x1F,0xF3,0x23,0x01,0x80,0x21,0x08,0x10,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x22,0x1D,0x00,0x3B,0xF8,0x2C,0x23,0x10,0x20,0x00,0x40,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x74,0x00,0x00,0x73,0xF8,0x38,0x4C,0x10,0x26,0x20,0x80,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xB0,0x10,0x00,0xC0,0x3C,0x71,0x18,0x20,0x04,0x40,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0xE0,0x00,0x01,0x80,0x1C,0xE0,0x30,0x23,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x07,0x00,0x0D,0x80,0xE0,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x0A,0x00,0x07,0x04,0x43,0x30,0x00,0x13,0x28,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x18,0x00,0x03,0x0E,0x47,0x38,0x00,0x70,0x08,0x40,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x18,0x00,0x03,0x2C,0x67,0x34,0x82,0x41,0x08,0x40,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x06,0x70,0x00,0x01,0x8C,0x60,0x0F,0x06,0x03,0x02,0x20,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x70,0x00,0x03,0xF0,0x0F,0x81,0x88,0xD0,0x4C,0x13,0x0F,0x0C,0x77,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x00,0x07,0xE0,0x1F,0xC1,0x80,0x98,0x8C,0x12,0x00,0x00,0x6F,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0x01,0x1F,0xF0,0x3F,0xC0,0xC1,0x1D,0x06,0x10,0x20,0x00,0x87,0xD0,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x1F,0xF0,0x7F,0xE0,0xE6,0x1C,0x26,0x71,0x00,0x41,0x07,0xD8,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1F,0xF0,0x3F,0xE0,0xF8,0x08,0x33,0x61,0xC6,0x20,0x0F,0xE0,0x08,0x01},
    {0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7F,0xF0,0x7F,0xE0,0xF0,0x4C,0x9B,0xE3,0xCF,0x3C,0x0F,0xE0,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x7C,0x70,0x7F,0xF0,0xE0,0x44,0x93,0xCC,0xCF,0x38,0x3F,0xE0,0x04,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0xFC,0x70,0xFF,0xE0,0xF2,0x36,0x63,0x80,0x4F,0x30,0xF9,0x80,0x04,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x68,0x30,0xFF,0xE0,0xF3,0x60,0xE7,0x80,0xCE,0x31,0xE3,0x80,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x20,0x00,0x00,0x01,0x90,0x60,0x30,0x7F,0xE0,0xF9,0xC7,0xC7,0xC6,0x64,0x61,0xC3,0xC0,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x03,0xB3,0x80,0x30,0x7F,0xE0,0xF9,0xC7,0xCE,0xFC,0x20,0x41,0x83,0x80,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x83,0x80,0x10,0x7F,0xC0,0xF9,0x8F,0x90,0xF8,0x70,0x81,0x07,0x80,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x13,0x00,0x10,0x3F,0xC0,0xFF,0x1F,0x80,0x70,0xFF,0x08,0x09,0x80,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x09,0x00,0x00,0x08,0x3F,0x81,0xFF,0x38,0x83,0x62,0x1E,0x38,0x30,0xC0,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x09,0x00,0x00,0x18,0x0E,0x01,0xFE,0x00,0xBE,0x74,0x1C,0x7C,0x70,0x40,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x10,0x00,0x30,0x00,0x3C,0x00,0x01,0xE6,0x00,0xFC,0x7C,0xCC,0xF3,0xA2,0x60,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x03,0xC6,0x0E,0x60,0xF9,0xED,0xE3,0x26,0x60,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x06,0x01,0x40,0x01,0xBE,0x00,0x07,0x87,0x7C,0x61,0x39,0xEC,0x87,0x12,0x60,0xF8,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x14,0x00,0x00,0x02,0xFE,0x00,0x06,0x03,0xF8,0x60,0x19,0xEC,0x09,0x32,0x77,0xFA,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x7E,0x00,0x00,0x05,0xFF,0x00,0x08,0x03,0xF0,0xE4,0x0D,0xCE,0x10,0x32,0xFF,0xFE,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x20,0x08,0x80,0x00,0x00,0x04,0x0F,0x80,0x18,0x01,0xC1,0xF8,0xCC,0x0B,0x70,0x03,0xFF,0xFF,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x04,0x01,0x00,0x00,0x00,0x1C,0x03,0xE0,0x70,0x03,0xC0,0x39,0xEE,0x13,0xB6,0x87,0xFF,0xFF,0xC1},
    {0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x01,0xFF,0xC0,0x07,0xC8,0x19,0xEF,0x63,0x96,0x87,0xFF,0xFF,0x01},
    {0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x03,0x00,0x00,0x90,0x00,0xFF,0x80,0x0F,0xD8,0x09,0xEF,0xC7,0x96,0xCF,0xFF,0xFE,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x78,0x00,0x01,0xA0,0x00,0xFF,0x00,0x3F,0xF1,0xC9,0xCF,0x9F,0xB6,0xFC,0x1F,0xFC,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x04,0x03,0x00,0x40,0x01,0xA0,0x00,0x7E,0x00,0x7F,0xF3,0xCC,0x0F,0xBC,0x87,0xF0,0x07,0xF8,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xD0,0x0B,0xE0,0x00,0x7E,0x00,0xFF,0xF3,0xCC,0x1B,0xB8,0xC7,0xA0,0x03,0xF0,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x60,0x01,0x10,0x0F,0xE0,0x00,0x3C,0x01,0xFF,0x33,0xCE,0x21,0x81,0xCF,0xC0,0x03,0xE0,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x24,0x00,0x07,0xF3,0xE0,0x00,0x3C,0x03,0xFC,0x33,0xCF,0xC3,0x84,0x7F,0xC0,0x01,0x80,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x04,0x0C,0x23,0xE0,0x20,0x3C,0x0F,0xFC,0x39,0x8F,0x8F,0xCC,0x7F,0x80,0x01,0x00,0x01},
    {0x00,0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x04,0x01,0xE0,0x70,0x1C,0x1F,0xF8,0x18,0x0B,0x9E,0xF5,0x27,0x00,0x01,0x80,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x10,0x04,0x41,0xE0,0x78,0x18,0x1F,0xD0,0x1C,0x11,0xBC,0xE5,0x3F,0x00,0x07,0x80,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x81,0xE0,0x78,0x18,0x3F,0xC0,0x1E,0x41,0xB0,0xE5,0x3F,0x01,0x0F,0xC0,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x00,0xE0,0x70,0x1C,0x3F,0x80,0x1E,0x87,0x81,0xE5,0xFE,0x03,0x9F,0xC0,0xC1},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x04,0x80,0xE0,0x70,0x1C,0x1F,0x00,0x3F,0x8F,0x82,0x31,0xDE,0x07,0xFF,0xC1,0xA1},
    {0x00,0x00,0x00,0x00,0x00,0x01,0x00,0x00,0x0F,0x00,0xE0,0x60,0x1C,0x1E,0x00,0x7F,0x1E,0xCC,0x31,0x9E,0x07,0xFF,0xE7,0xC1},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x04,0x00,0xE0,0x70,0x1C,0x08,0x00,0xFF,0x3C,0x74,0xBF,0x0E,0x07,0xFF,0xEE,0xC1},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0D,0x07,0x00,0xE0,0x70,0x1C,0x00,0x00,0xFF,0x30,0x74,0x9E,0x0E,0x03,0xFF,0xFF,0x81},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x04,0x07,0x0F,0x00,0x60,0x78,0x3E,0x00,0x07,0x07,0x01,0xE4,0xBC,0x0E,0x01,0x80,0x7F,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x05,0x86,0x00,0xE0,0x78,0x3E,0x00,0x0E,0x03,0x82,0x34,0xB8,0x06,0x00,0x00,0x1F,0x81},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x03,0x07,0x01,0x80,0x78,0x7F,0x00,0x1C,0x01,0x84,0x10,0xFC,0x06,0x00,0x00,0x0F,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x20,0x19,0x01,0xE0,0x7C,0x3F,0x80,0x3C,0x01,0xF4,0x11,0xFC,0x03,0x00,0x00,0x0F,0x01},
    {0x00,0x00,0x20,0x00,0x00,0x00,0x00,0x00,0x10,0x01,0xA0,0x7C,0xFE,0x00,0x78,0x00,0xF4,0x9F,0xFC,0x03,0x00,0x00,0x07,0x01},
    {0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x18,0x20,0x80,0xC0,0x7F,0xCE,0x01,0xF8,0x00,0xE4,0x9F,0xFE,0x03,0x80,0x00,0x07,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x87,0x80,0x00,0x00,0x7F,0xC1,0x7D,0x78,0x00,0x64,0x9C,0xFE,0x01,0x80,0x00,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x02,0x02,0xC0,0x00,0x7E,0x00,0xFE,0x38,0x30,0x64,0xF8,0xFF,0x01,0xC0,0x00,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xC0,0x00,0x7E,0x00,0x7C,0x38,0x78,0x70,0xF0,0xFF,0x00,0xF0,0x7C,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1C,0x05,0x20,0x00,0xFC,0x00,0x7C,0x18,0x78,0x70,0xE0,0x7F,0x00,0xFF,0xFE,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x0A,0x00,0x00,0x00,0xFC,0x00,0x38,0x18,0x70,0x79,0x80,0x7F,0x80,0xFF,0xFF,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x08,0x60,0x30,0x01,0xF8,0x00,0x78,0x18,0x70,0x7F,0xC0,0x7F,0x80,0x7F,0xFF,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0xF8,0x01,0xF8,0x18,0x30,0x7F,0xC0,0x3F,0xC0,0x7F,0xDE,0x03,0x01},
    {0x00,0x00,0x00,0x00,0x20,0x00,0x80,0x08,0x20,0xC8,0x00,0xF8,0x33,0xF8,0x38,0x30,0x7F,0xE0,0x3F,0xC0,0x3F,0x1E,0x03,0x81},
    {0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x1E,0x01,0x0A,0x06,0x70,0x37,0xF8,0x38,0x38,0xFF,0xE0,0x1F,0xC0,0x3E,0x0C,0x02,0x81},
    {0x00,0x00,0x02,0x00,0x00,0x00,0x00,0x2C,0x00,0x0F,0xF2,0x30,0x7F,0xF8,0x38,0x38,0xFF,0xE0,0x1F,0xE0,0x3C,0x00,0x04,0x81},
    {0x00,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x08,0x0E,0x90,0x30,0x3F,0xFC,0x38,0x3D,0xFF,0xF0,0x0F,0xE0,0x18,0x00,0x00,0x01},
    {0x00,0x00,0x01,0x90,0x00,0x02,0x04,0x68,0x30,0x08,0x78,0x30,0x18,0x1C,0x00,0x3F,0xFF,0xF0,0x0F,0xF0,0x18,0x00,0x00,0x01},
    {0x00,0x00,0x80,0xF0,0x00,0x02,0x00,0x02,0xC0,0x03,0x20,0x10,0x00,0x0C,0x00,0x3F,0x07,0xF8,0x0F,0xF0,0x08,0x00,0x08,0x01},
    {0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x42,0x03,0x68,0x08,0x00,0x06,0x00,0x7C,0x00,0xF8,0x07,0xF0,0x0C,0x00,0x10,0x01},
    {0x00,0x00,0x40,0x00,0x00,0x01,0x00,0x00,0x02,0x06,0x50,0x08,0x00,0x02,0x00,0x70,0x00,0x78,0x07,0xF8,0x0C,0x00,0x30,0x01},
    {0x80,0x40,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x0C,0x1C,0x0C,0x00,0x03,0x00,0x60,0x00,0x3C,0x03,0xF8,0x0E,0x00,0x40,0x01},
    {0x00,0x00,0x40,0x00,0x08,0x00,0x00,0x00,0x22,0x66,0x18,0x0C,0x00,0x01,0x00,0xC0,0x00,0x1C,0x03,0xF8,0x07,0x00,0x80,0x01},
    {0x00,0x00,0x40,0x00,0x20,0x00,0x00,0x00,0x00,0x54,0x78,0x06,0x00,0x01,0x81,0x80,0x00,0x0E,0x03,0xFC,0x06,0x03,0x00,0x01},
    {0x00,0x00,0x20,0x01,0x00,0x00,0x00,0x00,0x10,0x00,0x70,0x07,0xFF,0x81,0xE7,0x80,0x00,0x06,0x01,0xFC,0x04,0xC4,0x00,0x01},
    {0x00,0x00,0x40,0x03,0x01,0x00,0x40,0x00,0x00,0xA0,0x76,0x03,0xFF,0xC1,0xFF,0x00,0x00,0x06,0x01,0xFC,0x07,0xC0,0x00,0x01},
    {0x00,0x80,0x38,0x06,0x01,0x00,0x00,0x40,0x11,0x20,0x3D,0x03,0xFF,0xC1,0xFE,0x00,0x00,0x03,0x00,0xFC,0x01,0xC0,0x00,0x01},
    {0x00,0x80,0x7E,0x10,0x01,0x20,0x00,0x00,0x06,0x20,0x1F,0x01,0xFB,0x81,0xFE,0x00,0xF8,0x03,0x00,0xF8,0x00,0x40,0x00,0x01},
    {0x00,0x00,0x3F,0x96,0x00,0x00,0x22,0x00,0x09,0x30,0x0F,0x01,0xE3,0x81,0xFE,0x03,0xFC,0x01,0x80,0x78,0x00,0x20,0x00,0x01},
    {0x80,0x00,0x7E,0xF6,0x01,0x08,0x04,0x00,0x01,0x38,0x0F,0x81,0xC0,0x03,0xFC,0x07,0xFE,0x01,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x3F,0xFE,0x40,0x00,0x00,0x00,0x0B,0xB8,0x1F,0x80,0x80,0x03,0xFC,0x07,0xFF,0x01,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0xC5,0x20,0x7E,0xA0,0x80,0x00,0x00,0x00,0x5F,0xB8,0x0F,0xC0,0x80,0x07,0xFC,0x0F,0xFF,0x00,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x4D,0x00,0xFF,0x03,0x00,0x60,0x00,0x00,0x00,0x3C,0x0F,0xC0,0xC0,0x07,0xF8,0x0F,0xFF,0x80,0xC0,0x00,0x00,0x00,0x00,0x01},
    {0x48,0x00,0xFC,0x00,0xC0,0x40,0x00,0x01,0x80,0x1C,0x07,0xE0,0x40,0x0D,0xF8,0x0F,0xFF,0x80,0xE0,0x00,0x00,0x00,0x00,0x01},
    {0x27,0x80,0xF8,0x00,0x60,0x08,0x00,0x00,0x00,0x0E,0x07,0xE0,0x60,0x10,0xF8,0x1F,0xFF,0x80,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x0D,0x01,0xF0,0x00,0x10,0x2C,0x00,0x0C,0x00,0x06,0x07,0xE0,0x70,0x60,0xF8,0x1F,0xFF,0xC0,0xF0,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x01,0xE0,0x00,0x00,0x20,0x00,0x14,0x00,0x02,0x03,0xF0,0x7F,0xC0,0xF8,0x1F,0xFF,0xC0,0xF8,0x00,0x40,0x00,0x00,0x01},
    {0x00,0x02,0xE0,0x00,0x10,0x02,0x00,0x00,0x00,0x03,0x03,0xF0,0x7F,0x80,0x78,0x1F,0xFF,0xC0,0xFE,0x06,0x00,0x00,0x00,0x01},
    {0x00,0x03,0xC0,0x20,0x00,0x0C,0x00,0x08,0x00,0x01,0x01,0xF0,0x7F,0x80,0x78,0x1F,0xFF,0xC0,0xFF,0xFF,0x00,0x00,0x00,0x01},
    {0x00,0x07,0xC0,0xF8,0x00,0x04,0x00,0x00,0x1F,0x01,0x81,0xE0,0x7C,0xC0,0x38,0x0F,0xFF,0xC0,0xFF,0xFD,0x00,0x00,0x00,0x01},
    {0x00,0x0F,0x80,0xF8,0x0C,0x00,0x00,0x00,0x0E,0x80,0x80,0xC0,0xF8,0xC0,0x38,0x0F,0xFF,0xC0,0xFF,0xFC,0x00,0x00,0x00,0x01},
    {0x00,0x1F,0x83,0xFE,0x00,0x00,0x00,0x00,0x7F,0xC0,0xC0,0x00,0xF0,0x60,0x38,0x0F,0xFF,0x80,0xFF,0xE6,0xA0,0x00,0x00,0x01},
    {0x80,0x7F,0x83,0xFE,0x02,0x00,0x04,0x00,0x3F,0xC0,0xC0,0x00,0xE0,0x60,0x18,0x07,0xFF,0x80,0xFF,0xC2,0x80,0x00,0x00,0x01},
    {0xE1,0xE7,0x83,0xFF,0x02,0x00,0x22,0x20,0xFF,0xE0,0xC0,0x01,0xC0,0x60,0x1C,0x07,0xFF,0x80,0xFF,0x98,0xC0,0x00,0x00,0x01},
    {0xFF,0x87,0x83,0xFF,0x07,0x00,0x42,0x20,0xFF,0xE0,0xE0,0x03,0xC0,0x70,0x0C,0x07,0xFF,0x01,0xFF,0x8C,0x80,0x00,0x00,0x01},
    {0xFF,0x07,0x83,0xFE,0x00,0x00,0x21,0x20,0xFF,0xE0,0x70,0x07,0xC0,0x70,0x0C,0x03,0xFF,0x01,0xFC,0x4C,0x80,0x00,0x00,0x01},
    {0xFF,0x03,0x83,0xDF,0x07,0x81,0x40,0x20,0xFF,0xE0,0x78,0x0F,0xE0,0x78,0x0C,0x01,0xFE,0x01,0xF8,0x07,0x80,0x00,0x00,0x01},
    {0xFD,0x03,0x83,0xFF,0x07,0x1F,0x80,0x60,0xFF,0xE0,0x7C,0x3F,0xE0,0x78,0x06,0x00,0xFC,0x03,0xF9,0xA3,0x00,0x00,0x00,0x01},
    {0xF9,0x03,0x83,0xFE,0x07,0x7C,0x40,0x60,0xFF,0xE0,0x7F,0xFF,0xE0,0x78,0x06,0x00,0x00,0x03,0xCD,0xAC,0x00,0x00,0x00,0x01},
    {0xE1,0x81,0x83,0xFE,0x07,0xFC,0x00,0xE0,0xFF,0xE0,0x7F,0xFF,0xE0,0x3C,0x03,0x00,0x00,0x07,0x04,0xBC,0x00,0x00,0x00,0x01},
    {0xC0,0x81,0x01,0xFF,0x07,0x68,0x00,0x60,0x7F,0xE0,0xFF,0xFF,0xE0,0x3C,0x03,0x00,0x00,0x06,0x02,0x30,0x00,0x00,0x00,0x01},
    {0xE0,0xC0,0x81,0xFE,0x07,0xD0,0x20,0x60,0x7F,0xE0,0xFF,0x3F,0xF0,0x3E,0x03,0x80,0x00,0x0E,0x02,0x60,0x00,0x00,0x00,0x01},
    {0xE0,0xC0,0x80,0xFC,0x06,0xD0,0x60,0x20,0x7F,0xE0,0xFE,0x3F,0xF0,0x3E,0x01,0xC0,0x00,0x1C,0x06,0xC0,0x00,0x00,0x00,0x01},
    {0xE0,0xE0,0xC0,0x78,0x0F,0xD0,0x70,0x30,0x3F,0xC0,0xF8,0x1F,0xF0,0x3E,0x01,0xE0,0x00,0x3C,0x7F,0xC0,0x00,0x00,0x00,0x01},
    {0xE0,0xE0,0x40,0x00,0x13,0xF0,0x30,0x30,0x1F,0x81,0xF0,0x0F,0xF0,0x3F,0x00,0xF0,0x00,0x4C,0x7F,0xC0,0x00,0x00,0x00,0x01},
    {0xE0,0xE0,0x60,0x00,0x1F,0xE0,0x00,0x10,0x07,0x01,0xE0,0x07,0xF0,0x3F,0x00,0xF8,0x00,0x84,0x21,0xE0,0x00,0x00,0x00,0x01},
    {0xE0,0xF0,0x20,0x00,0x3E,0xF0,0x38,0x18,0x00,0x03,0xD0,0x07,0xF0,0x1F,0x80,0xFE,0x03,0x84,0x00,0xE0,0x00,0x00,0x00,0x01},
    {0xF0,0x70,0x30,0x00,0x6C,0xF8,0x38,0x08,0x00,0x03,0x18,0x03,0xF8,0x1F,0x80,0x7F,0xFF,0x84,0x00,0x60,0x00,0x00,0x00,0x01},
    {0xF0,0x78,0x38,0x00,0x62,0x78,0x3C,0x0C,0x00,0x06,0x08,0x01,0xF8,0x1F,0x80,0x7F,0xFB,0xC0,0x00,0x30,0x00,0x00,0x00,0x01},
    {0xF0,0x78,0x1C,0x01,0x42,0xF8,0x3C,0x0E,0x00,0x0C,0x0C,0x01,0xF8,0x1F,0xC0,0x3F,0xF1,0xC3,0x00,0x60,0x00,0x00,0x00,0x01},
    {0xF0,0x78,0x1F,0x07,0x81,0xF8,0x3E,0x07,0x00,0x18,0x06,0x00,0xF8,0x1F,0xC0,0x3F,0xE1,0xE1,0xFC,0x00,0x00,0x00,0x00,0x01},
    {0xF0,0x7C,0x0E,0xFF,0x01,0xF8,0x3E,0x07,0x80,0x30,0x07,0x00,0x78,0x1F,0xE0,0x3F,0xE0,0xE1,0xEC,0x00,0x00,0x00,0x00,0x01},
    {0xF0,0x7C,0x0F,0xFC,0x00,0xF8,0x1E,0x03,0xE0,0xC0,0x07,0x80,0x38,0x1F,0xE0,0x1F,0xF0,0xE1,0x40,0x40,0x00,0x00,0x00,0x01},
    {0x78,0x7E,0x0F,0xF8,0x00,0x7C,0x1F,0x03,0xFF,0x80,0x07,0x80,0x3C,0x0F,0xF0,0x1F,0xF0,0xF0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x38,0x3E,0x07,0xF0,0xC0,0x7C,0x1F,0x03,0xFF,0x00,0x0F,0xC0,0x1C,0x0F,0xF0,0x0E,0x78,0x70,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x18,0x3E,0x07,0xE0,0x60,0x3C,0x1F,0x81,0xFE,0x00,0x3F,0xE0,0x0C,0x0F,0xF0,0x18,0x18,0x68,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x18,0x3F,0x03,0x80,0x60,0x1C,0x1F,0x81,0xFC,0x00,0x7F,0xF0,0x04,0x0F,0xF8,0x70,0x08,0x60,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x08,0x3F,0x07,0x00,0x30,0x0C,0x1F,0x80,0xFE,0x00,0xFF,0xF8,0x04,0x0F,0xF8,0xE0,0x04,0x00,0x20,0x00,0x00,0x00,0x00,0x01},
    {0x04,0x3F,0x8E,0x00,0x78,0x0E,0x1F,0xC0,0xFE,0x01,0xFF,0xF8,0x00,0x0F,0xFD,0xC0,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x3F,0xBC,0x01,0xFC,0x06,0x1F,0xC0,0xFF,0x01,0xFC,0xFC,0x00,0x0F,0xFF,0xC3,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x3F,0xF8,0x03,0xFE,0x02,0x0F,0xE3,0xFF,0x01,0xF0,0xFE,0x00,0x07,0xFF,0x87,0xC0,0x00,0x88,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x3F,0xFC,0x07,0xFE,0x02,0x0F,0xE7,0xFF,0x00,0xE0,0x7F,0x00,0x07,0xFF,0x8F,0xE2,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x80,0x1F,0xFC,0x0F,0xDF,0x00,0x0F,0xEF,0xFF,0x80,0xC0,0x7F,0x80,0x07,0xFB,0x8F,0xE3,0x01,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC0,0x1F,0xFE,0x07,0x8F,0x80,0x0F,0xFF,0xFF,0x80,0x80,0x7F,0x80,0x07,0xE3,0x8F,0xE1,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xE0,0x1F,0xFE,0x07,0x0F,0xC0,0x0F,0xF8,0x1F,0x80,0x00,0x3F,0xC0,0x07,0xE1,0x8F,0xE1,0xC8,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF0,0x1F,0xFE,0x04,0x07,0xE0,0x0F,0xE0,0x07,0xC0,0x00,0x3F,0xE0,0x07,0x81,0x8F,0xE1,0xC2,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF0,0x3C,0x3F,0x00,0x07,0xF0,0x0F,0xC0,0x03,0xC0,0x00,0x7F,0xF0,0x07,0x10,0x87,0xE3,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF8,0x70,0x0F,0x00,0x07,0xF0,0x07,0x00,0x01,0xE0,0x00,0xFF,0xF0,0x0E,0x10,0x87,0xE3,0xE0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFD,0xE0,0x03,0x80,0x0F,0xF8,0x0E,0x00,0x00,0xE0,0x03,0xFF,0xF8,0x1F,0x18,0x43,0xC3,0xC2,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0xC0,0x03,0x80,0x1F,0xFC,0x3C,0x00,0x00,0x70,0x07,0xFF,0xFC,0x1F,0x18,0x40,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0x00,0x01,0xC0,0x3F,0xFE,0x38,0x00,0x00,0x70,0x0F,0xFF,0xFE,0x7F,0x18,0x40,0x07,0x89,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFE,0x00,0x00,0xC0,0x7F,0xFF,0x60,0x00,0x00,0x30,0x0F,0xF7,0xFE,0xCF,0x1C,0x20,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFC,0x00,0x00,0xC0,0xFC,0xFF,0xC0,0x00,0x00,0x38,0x0F,0xC7,0xFF,0x0F,0x0C,0x30,0x1C,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF8,0x01,0x80,0x60,0x78,0xFF,0x80,0x07,0xC0,0x18,0x07,0x83,0xFE,0x07,0x0E,0x1C,0x3D,0x80,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF0,0x07,0xC0,0x60,0x70,0xFF,0x80,0x1F,0xE0,0x1C,0x07,0x03,0xFC,0x83,0x8E,0x1F,0xF1,0x10,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x68,0x0F,0xE0,0x70,0x60,0x7E,0xC0,0x3F,0xE0,0x1C,0x06,0x01,0xF8,0x41,0x8E,0x1F,0xE8,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC8,0x1F,0xF0,0x30,0x00,0x78,0xC0,0x3F,0xF0,0x0C,0x00,0x01,0xF0,0x01,0x8F,0x0F,0xA8,0x60,0x60,0x00,0x00,0x00,0x00,0x01},
    {0x8C,0x0F,0xF0,0x30,0x00,0x33,0xC0,0x3F,0xF8,0x0E,0x00,0x01,0xC0,0x60,0x0F,0x0F,0x50,0xC0,0x20,0x00,0x00,0x00,0x00,0x01},
    {0x24,0x0F,0xF8,0x38,0x00,0xE1,0xE0,0x3F,0xF8,0x0E,0x00,0x01,0x81,0xF0,0x0F,0x9E,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xAC,0x07,0xF8,0x18,0x01,0xC3,0xE0,0x1F,0xF8,0x0F,0x00,0x03,0xC3,0xF8,0x07,0xBD,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x82,0x07,0xF8,0x1C,0x03,0x03,0xF0,0x1F,0xFC,0x07,0x00,0x0F,0xC3,0x0C,0x07,0xF0,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xE2,0x07,0xF8,0x1C,0x06,0x03,0xF0,0x0F,0xFC,0x07,0x00,0x1F,0xE2,0x10,0x07,0xEA,0x8C,0x04,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC1,0x03,0xF8,0x1C,0x0C,0x05,0xF0,0x0F,0xFC,0x07,0x80,0x38,0xE0,0x1C,0x07,0xC0,0x98,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC5,0x03,0xF8,0x1E,0x38,0x06,0xD8,0x0F,0xFC,0x07,0x80,0x60,0x60,0x1C,0x07,0x88,0x60,0x20,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xEB,0x01,0xF8,0x1E,0x70,0x0F,0xB8,0x07,0xFC,0x07,0xC1,0xC0,0x30,0x3C,0x0E,0x05,0xC0,0x40,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xF1,0x81,0xF8,0x1F,0xC0,0x1F,0x1C,0x07,0xFC,0x07,0xC3,0x80,0x10,0x78,0x14,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x70,0x80,0xF8,0x3F,0x80,0x3F,0x0C,0x03,0xFC,0x07,0xC7,0x00,0x08,0xE6,0x20,0x00,0x10,0x20,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x32,0x40,0xF0,0x3F,0x80,0x7F,0x0C,0x03,0xFC,0x07,0xEE,0x0F,0x08,0x06,0x10,0x00,0x12,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x3C,0xC0,0xE0,0x3F,0xC1,0xFF,0x0E,0x01,0xFC,0x0F,0xFE,0x1F,0x08,0x02,0x20,0x02,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x39,0x40,0x40,0x7F,0xC3,0xFF,0x0E,0x01,0xF8,0x0F,0xFF,0x0F,0x84,0x00,0x00,0x00,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7A,0x20,0x00,0x70,0xC1,0xFF,0x0F,0x01,0xF0,0x0F,0xFB,0x0F,0x84,0x00,0x00,0x00,0x02,0x00,0x40,0x00,0x00,0x00,0x00,0x01},
    {0xFD,0xA0,0x00,0xE0,0x61,0xFE,0x0F,0x00,0xE0,0x1F,0xF3,0x8F,0x86,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFD,0xB0,0x01,0x80,0x20,0xFC,0x1F,0x00,0xC0,0x1F,0xE1,0x87,0xC6,0x04,0x00,0x00,0x88,0x00,0x80,0x00,0x00,0x00,0x00,0x01},
    {0xFC,0xB0,0x03,0x80,0x30,0xF8,0x1F,0x80,0x80,0x1F,0x81,0x87,0x86,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x0E,0x10,0x07,0x00,0x30,0x70,0x1F,0x80,0x00,0x3F,0x00,0xC3,0x81,0x00,0x00,0x00,0x42,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x07,0x98,0x0F,0x00,0xF0,0x00,0x3C,0xC0,0x00,0x7E,0x00,0xC3,0x0C,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0x28,0x1F,0x0D,0xF8,0x00,0x38,0xC0,0x00,0xFC,0x00,0x62,0x05,0x00,0x00,0x00,0x01,0xA0,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0x4C,0x76,0x0F,0xFC,0x00,0x70,0x40,0x00,0xF8,0x00,0x60,0x0C,0x00,0x00,0x00,0x09,0x20,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x01,0x04,0xE6,0x0F,0xFC,0x00,0xE0,0x60,0x03,0xE0,0x00,0x60,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x01,0xC5,0x82,0x0E,0x1E,0x03,0x80,0x20,0x07,0xC0,0x00,0x30,0x30,0x00,0x00,0x00,0x08,0x40,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC1,0xC7,0x83,0x00,0x07,0x87,0x00,0x30,0x0F,0x80,0x00,0x30,0x70,0x00,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xE1,0xCF,0x81,0x00,0x07,0xFE,0x00,0x30,0x1F,0x00,0x00,0x18,0xE0,0x00,0x00,0x00,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC1,0xCF,0xC1,0x00,0x03,0xFC,0x00,0x10,0x3E,0x00,0x00,0x1B,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC1,0xFF,0xC1,0x80,0x03,0xF0,0x06,0x18,0x78,0x00,0x18,0x1F,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0xE3,0xE0,0xC0,0x01,0xE0,0x0E,0x09,0xF0,0x00,0x78,0x0E,0x00,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0xC3,0xE0,0xFF,0xC1,0xC0,0x07,0x0F,0xE0,0x00,0xF8,0x0C,0x08,0x08,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x07,0xC1,0xF0,0x7F,0xC1,0x80,0x07,0x0F,0xC0,0x01,0xFC,0x0C,0x10,0x00,0x00,0x00,0x00,0x04,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x0F,0xC1,0xF0,0x7D,0xC1,0x80,0x87,0x17,0x00,0x03,0xFC,0x0E,0x30,0x00,0x00,0x00,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x1F,0xC0,0xF0,0x78,0xC3,0xC1,0x83,0xE6,0x00,0x0F,0xFC,0x06,0x39,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0xE0,0xF8,0x30,0x03,0xC1,0xC3,0xC3,0x00,0x1F,0xFC,0x06,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0xE0,0xF8,0x20,0x03,0xC1,0xC1,0xC3,0x00,0x3F,0xFC,0x07,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xE0,0xF0,0x7C,0x10,0x07,0xE1,0xE7,0x83,0x80,0x7F,0xFC,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x80,0x70,0x7C,0x10,0x0E,0x20,0x6F,0x03,0x80,0xFF,0xFC,0x07,0x80,0x22,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x30,0x3C,0x18,0x1C,0x30,0xFF,0x03,0x80,0xFF,0xFC,0x06,0x00,0x40,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x18,0x3E,0x1C,0x78,0x30,0x7E,0x07,0xC0,0x7F,0xFC,0x07,0x80,0x00,0x00,0x00,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x08,0x3E,0x1F,0xF0,0x10,0x7E,0x0F,0xC0,0x7F,0xF8,0x0F,0xC2,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x0C,0x1E,0x1F,0xE0,0x18,0xFC,0x0F,0xE0,0x3F,0xF0,0x0F,0xCE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x1E,0x04,0x1C,0x1F,0x80,0x0B,0xF8,0x1F,0xE0,0x3F,0xF0,0x0F,0xA8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x3F,0x04,0x00,0x1F,0x00,0x0F,0xF8,0x3F,0xE0,0x1F,0xC0,0x06,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x06,0x00,0x3E,0x00,0x0F,0xF0,0x7F,0xF0,0x0F,0x80,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x82,0x00,0x3C,0x00,0x03,0xE0,0x7F,0xB0,0x00,0x00,0x0A,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x83,0x00,0x70,0x00,0x07,0xE0,0xFE,0x18,0x00,0x00,0x38,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0x83,0x80,0xE0,0x00,0x03,0xC0,0xF0,0x18,0x00,0x00,0x30,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0xC3,0xC1,0xC0,0x03,0x03,0xC1,0x80,0x1C,0x00,0x00,0x50,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0xC3,0xFF,0x80,0x07,0x03,0x80,0x00,0x0C,0x00,0x00,0xE8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0xC3,0xFF,0x00,0x0F,0x81,0x80,0x00,0x0E,0x00,0x00,0xD0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x3F,0x83,0xFC,0x00,0x1F,0x81,0x80,0x00,0x1F,0x00,0x03,0xC0,0x00,0x00,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x83,0xF8,0x00,0x7F,0x81,0x80,0x01,0xE7,0x80,0x07,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x3F,0x87,0xF8,0x00,0xFF,0x81,0xC0,0x0F,0xC7,0xC0,0x0C,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x1F,0x07,0xB8,0x01,0xFF,0xC1,0xC0,0xFF,0x83,0xF0,0x56,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x04,0x06,0x0C,0x03,0xFF,0xC1,0xC7,0xFD,0x03,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x0C,0x04,0x07,0xFF,0x81,0xFF,0xFE,0x01,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x1C,0x06,0x07,0xFF,0x81,0xFF,0xFC,0x03,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x18,0x0E,0x07,0xFF,0x81,0xFF,0xF0,0x07,0xFF,0xC0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x38,0xFE,0x03,0xFF,0x01,0xFF,0xE0,0x0F,0xFF,0x80,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xC0,0x98,0xFF,0x03,0xFF,0x01,0xFF,0xC0,0x1F,0xFA,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xFF,0x18,0x63,0x01,0xFE,0x03,0xFF,0x80,0x3F,0xEC,0x00,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x08,0x01,0x81,0xFC,0x01,0xFE,0x00,0xFF,0xB8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x7F,0x08,0x00,0x80,0x50,0x03,0xFC,0x01,0x81,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xBF,0x84,0x00,0x80,0x00,0x07,0xEC,0x03,0x00,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0xA7,0x86,0x00,0xC0,0x00,0x07,0xC6,0x06,0x00,0x30,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0x83,0xF8,0xC0,0x00,0x0F,0x06,0x08,0x00,0x18,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x83,0xC3,0xD8,0xE0,0x00,0x1E,0x02,0x38,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x21,0xC3,0x18,0xF0,0x00,0x3C,0x03,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x01,0xC1,0x00,0xF0,0x00,0x78,0x03,0xF8,0x1A,0x08,0x02,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x80,0xE1,0x00,0xFC,0x00,0xF0,0x01,0xF0,0x2B,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x10,0xB1,0x01,0x4E,0x03,0xC0,0x01,0xF0,0x68,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x90,0x80,0x9F,0xFF,0x80,0x00,0xF0,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x08,0x70,0x76,0x0F,0xFF,0x00,0x00,0xF0,0x70,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x50,0xF4,0x0F,0xFE,0x00,0x00,0x70,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x11,0xE8,0x07,0xF8,0x00,0x60,0x70,0xB0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x80,0x01,0xD0,0x07,0xF0,0x00,0xE0,0x70,0xF8,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x40,0x06,0xE0,0x00,0xF0,0x30,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x43,0xC0,0x00,0xF0,0x30,0xE8,0x04,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x07,0x00,0x03,0x80,0x00,0xF0,0x10,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x8A,0x00,0x01,0x00,0x00,0x78,0x30,0x70,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x04,0x01,0x00,0x20,0x78,0x58,0x20,0x08,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x08,0x00,0x80,0x60,0x39,0x80,0x00,0x0B,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x80,0xF0,0x3F,0x88,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x03,0x80,0xF0,0x3F,0x00,0x00,0x10,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x02,0x00,0x00,0x00,0x40,0x70,0x0E,0x02,0x00,0x20,0x20,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x80,0x00,0x78,0x3E,0x01,0x00,0x60,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01}
};