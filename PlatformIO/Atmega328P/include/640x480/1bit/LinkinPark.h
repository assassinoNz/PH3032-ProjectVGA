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
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFC,0x07,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF8,0x01,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xC0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x80,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xE3,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF0,0x81,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x40,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFF,0x83,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xF8,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFE,0x00,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x02,0x4F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFC,0x00,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xA0,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF8,0x00,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x0F,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF9,0xFC,0x3F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x00,0x80,0x0F,0xFF,0xFF,0xFF,0xFF,0xA0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF1,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x01,0xC2,0x0F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF3,0xFF,0xDF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x00,0x60,0x0F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF3,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x20,0x1F,0xFF,0xFF,0xFF,0xFF,0xE0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF3,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x18,0x20,0x9F,0xFF,0xF8,0xFF,0xFF,0xE0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF3,0xFF,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x08,0x20,0x9F,0xFF,0xC0,0x7F,0xFF,0xC0,0x00,0x03,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF1,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x20,0x61,0x9F,0xFF,0x80,0x3F,0xFF,0xC0,0xC0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF5,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0xA0,0xE3,0x9F,0xFF,0x00,0x1F,0xFF,0x80,0xC0,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF5,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xF3,0x9F,0xFF,0x00,0x0F,0xFF,0x88,0xC8,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF4,0x1F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xFF,0xFE,0x03,0x8F,0xFF,0xDD,0xDC,0x07,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xF4,0x0C,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x3F,0xFF,0xBF,0xFE,0x8F,0xCF,0xFF,0x9F,0xFE,0x03,0xFF,0xFF,0xFF,0xFE,0x7F},
    {0xC0,0x0C,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0x3E,0xFF,0xFF,0xFE,0x47,0xC7,0xFF,0xFF,0xE6,0x03,0xFF,0xFF,0xFF,0xF8,0x1F},
    {0xC8,0xEC,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFE,0x1F,0xFF,0xFF,0x47,0xC7,0xFF,0xBF,0x82,0x03,0xFF,0xFF,0xFF,0xFC,0x0F},
    {0xC8,0x7F,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF4,0x1F,0x7F,0xFF,0x47,0xE3,0xFF,0xB1,0x06,0x03,0xFF,0xFF,0xFF,0xF0,0x07},
    {0xCB,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF2,0x17,0x7F,0xFF,0x07,0xEB,0xFF,0x91,0x83,0x03,0xFF,0xFF,0xFF,0xE8,0x07},
    {0xC5,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x1F,0x7F,0xFF,0x8F,0xEB,0xFF,0x91,0x8F,0x03,0xFF,0xFF,0xFF,0xFD,0x43},
    {0xC5,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x07,0x7F,0xFD,0x01,0x83,0xFF,0xD9,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xF3},
    {0xE4,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x06,0xFF,0xFD,0x01,0x03,0xFF,0xDF,0xFF,0x03,0xFF,0xFF,0xFF,0xFF,0xF1},
    {0xE0,0xC7,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x86,0xFF,0xFD,0x01,0x21,0xFF,0xDF,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xF9},
    {0xE0,0x47,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x71,0xFF,0xFC,0x05,0xF1,0xFF,0xFF,0xFF,0x07,0xFF,0xFF,0xFF,0xFF,0xF9},
    {0xF8,0x07,0xEF,0xFF,0xFF,0xFF,0xFF,0xFF,0xFF,0xF0,0x01,0xFF,0xFC,0x1F,0xF9,0xFF,0xFF,0xBE,0x07,0xFF,0xFF,0xFF,0xFF,0xF9},
    {0xFC,0x1F,0xEF,0xFF,0xFF,0xF8,0x3F,0xFF,0xFF,0xF0,0x00,0xFF,0xFF,0x1F,0xF1,0xFF,0xFD,0x3E,0x07,0xFF,0xFF,0xFF,0xFF,0xF9},
    {0xFC,0x01,0xFF,0xFF,0xFF,0xF8,0x07,0xFF,0xFF,0xF0,0x23,0xFF,0xFA,0x5D,0xF1,0xFF,0xFE,0x1E,0x03,0xFF,0xFF,0xFF,0xFF,0xF9},
    {0xFD,0x0F,0xFF,0xFF,0xFF,0xE0,0x07,0xFF,0xFF,0xF8,0x03,0xFF,0xFE,0x3C,0x71,0xFF,0xFE,0x04,0x01,0xFF,0xFF,0xFF,0xFF,0xFF},
    {0xFB,0x03,0xFF,0xFF,0xFF,0xC0,0x01,0xFF,0xFF,0xF0,0x03,0xFF,0xF8,0x9C,0x71,0xFF,0xFE,0x04,0x00,0xFF,0xFF,0xFF,0xFF,0x0F},
    {0xFB,0x1F,0xFF,0xFF,0xFF,0xC0,0x01,0xFF,0xFF,0xF0,0x06,0xFF,0xFD,0x2C,0x71,0xFF,0xFC,0x60,0x00,0xFF,0xFF,0xFF,0xE0,0x1F},
    {0xF8,0x3F,0xFF,0xFF,0xFF,0x80,0x01,0xFF,0xFF,0x80,0x06,0xFF,0xFD,0x09,0xB1,0xFF,0xFF,0x10,0x00,0x7F,0xFF,0xFF,0xE2,0x0D},
    {0xF0,0x0F,0xFF,0xFF,0xFF,0x87,0xF9,0xFF,0xFF,0x80,0x06,0xFF,0xFC,0x00,0x13,0xFF,0xFF,0x10,0x00,0x7F,0xFF,0xFF,0xE3,0x45},
    {0xE0,0x03,0xFF,0xFF,0xFF,0x8F,0xF9,0xFF,0xFF,0xC0,0x04,0xFF,0xFE,0x03,0xD1,0xFF,0xFE,0x20,0x00,0x7F,0xFF,0xFF,0xF7,0x9D},
    {0xC0,0x03,0xFF,0xFF,0xFF,0x8F,0xFD,0xFF,0xFF,0xC0,0x00,0xFF,0xFE,0x04,0x71,0xFF,0xE4,0x00,0x40,0x7F,0xFF,0xFF,0x7B,0xFF},
    {0x80,0x07,0xFF,0xFF,0xFF,0x8F,0xFD,0xFF,0xFF,0xC0,0x01,0xEF,0xFC,0x00,0xB1,0xFF,0xE6,0x00,0x60,0x3F,0xFF,0xFF,0xFB,0xFF},
    {0x00,0x07,0x7F,0xFF,0xFF,0x87,0xFD,0xFF,0xFE,0x00,0x09,0xB7,0xFE,0x00,0x17,0xFF,0xC6,0x00,0x60,0x3F,0xFF,0xFF,0xFF,0xFD},
    {0x00,0x07,0x7F,0xFF,0xFF,0x87,0xFC,0xFF,0xF8,0x00,0x00,0x27,0xFC,0x00,0x27,0xFF,0x82,0x00,0xF0,0x3F,0xFF,0xFF,0xF8,0x7D},
    {0x00,0x07,0x3F,0xFF,0xFF,0x87,0xFC,0xFF,0xF0,0x00,0x00,0x64,0xFC,0x00,0x33,0xFF,0x80,0x00,0xF0,0x3F,0xFF,0xFF,0xF8,0xEF},
    {0x00,0x07,0x3F,0xFF,0xFF,0xC1,0xEF,0xFF,0xE0,0x00,0x04,0x3F,0xFC,0x00,0x23,0xFF,0x01,0x01,0xF0,0x3F,0xFF,0xFF,0xFC,0x4F},
    {0x00,0x07,0x1F,0xFF,0xFF,0xD0,0xCF,0xFF,0xD0,0x00,0x01,0x24,0x9E,0x00,0x61,0xFF,0x00,0x01,0xF0,0x1F,0xFF,0xFF,0xFC,0x2D},
    {0x04,0x0F,0x87,0xFF,0xFF,0xF8,0x4F,0xFF,0x00,0x00,0xC3,0xA4,0x96,0x00,0x6B,0xFE,0x00,0x01,0xE0,0x0F,0xFF,0xFF,0xF3,0x0F},
    {0x0A,0x0F,0x81,0xFF,0xFF,0xF0,0x4F,0xFE,0x10,0x80,0xC1,0x3F,0x92,0x00,0x73,0xFC,0x00,0x01,0xE0,0x03,0xFF,0xFF,0xF4,0x1F},
    {0x0F,0xFF,0x80,0x7F,0xFF,0xF0,0x5F,0xFC,0xFA,0x00,0xE1,0x24,0x04,0x00,0x6F,0xFC,0x00,0x03,0xE0,0x01,0xFF,0xFF,0xF4,0x0F},
    {0x0F,0xFF,0xC0,0x3F,0xFF,0xF8,0x6F,0xF8,0x10,0x02,0x61,0x2C,0x26,0x30,0x67,0xF8,0x00,0x03,0xE0,0x00,0xFF,0xFF,0xF0,0x0F},
    {0x03,0xFF,0xC0,0x0F,0xFF,0x7F,0x7F,0xF8,0x12,0x08,0xCD,0xEF,0x27,0x38,0x43,0xF8,0x00,0x03,0xE0,0x00,0x7F,0xFF,0xF8,0x17},
    {0x03,0xFF,0xC0,0x07,0xFF,0xFF,0x7F,0xF0,0x13,0x40,0x49,0x2C,0x71,0x3E,0x41,0xF0,0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFC,0x05},
    {0x07,0xFF,0xC0,0x03,0xFF,0xFF,0x7F,0xF3,0x9A,0x48,0x09,0x25,0x2D,0x3E,0x40,0xF0,0x00,0x03,0xC0,0x00,0x3F,0xFF,0xFC,0x01},
    {0x07,0xFF,0xE0,0x01,0xFF,0xFE,0x7F,0xF0,0x12,0x41,0x09,0x21,0x28,0x9F,0xC0,0x30,0x00,0x1F,0x80,0x00,0x3F,0xFF,0xBC,0x01},
    {0x47,0xFF,0xE0,0x01,0xFF,0xFE,0x3F,0xE0,0x12,0x4F,0x7B,0xF7,0x23,0x87,0xE0,0xF8,0x00,0x1E,0x00,0x00,0x3F,0xFF,0x3E,0x01},
    {0x07,0xFF,0xE0,0x01,0xFF,0xFE,0x3F,0xCA,0x13,0x49,0x09,0x21,0xF2,0x00,0x00,0xFF,0x00,0x38,0x00,0x00,0x1F,0xFE,0x3C,0x01},
    {0x25,0xFB,0xE0,0x01,0xFF,0xF8,0x7F,0xC2,0x52,0x49,0x01,0x01,0x3C,0xE0,0x00,0xFF,0x80,0x00,0x00,0x00,0x1F,0xFC,0x34,0x01},
    {0x27,0xFF,0xE0,0x01,0xFF,0xFC,0x0F,0xCB,0x12,0x48,0x01,0x01,0x08,0x80,0x01,0xFF,0x00,0x00,0x00,0x00,0x0F,0xFC,0x04,0x09},
    {0x07,0xF7,0xE0,0x01,0xFF,0x9C,0x3F,0x8A,0x12,0x48,0xFF,0xFD,0x28,0xC0,0x03,0xFE,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x19},
    {0x07,0xEF,0xE0,0x01,0xFF,0x9C,0x3D,0x8A,0x1F,0xE8,0xC0,0x99,0x81,0x20,0x02,0xFE,0x00,0x00,0x00,0x00,0x0F,0xF4,0x00,0x11},
    {0x07,0xFF,0xE0,0x01,0xFF,0x9E,0x7C,0x82,0x52,0x48,0x00,0x6D,0xE2,0x20,0x01,0xFC,0x00,0x00,0x00,0x00,0x0F,0xC0,0x00,0x41},
    {0x07,0xCF,0xE0,0x01,0xFF,0x8E,0x78,0x83,0xD2,0x48,0x40,0x63,0x80,0x28,0x00,0xFC,0x00,0x00,0x00,0x00,0x0F,0x80,0x00,0x41},
    {0x07,0xEF,0xE0,0x01,0xFF,0x80,0x10,0x82,0x02,0x49,0xFF,0x82,0x10,0x00,0x00,0x7C,0x00,0x00,0x00,0x00,0x0F,0x00,0x00,0x81},
    {0x07,0xEF,0xE0,0x01,0xFF,0x80,0x10,0x80,0x03,0xFC,0x92,0x8E,0x00,0xF0,0x02,0xF8,0x00,0x00,0x00,0x00,0x0C,0x00,0x08,0x01},
    {0x17,0xFF,0xE0,0x01,0xFD,0x80,0x00,0x00,0x1A,0x48,0x83,0x18,0x47,0x00,0x00,0x18,0x00,0x00,0x00,0x00,0x08,0x08,0x06,0x01},
    {0x07,0x3F,0xE0,0x01,0xF8,0x00,0x01,0x04,0x42,0x48,0x80,0xC1,0x65,0x14,0x02,0x78,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x07,0x3F,0xE0,0x01,0xF0,0x00,0x09,0x00,0x42,0x48,0x90,0x88,0x41,0x50,0x01,0x58,0x00,0x00,0x00,0x00,0x02,0x00,0x00,0x01},
    {0x07,0xFF,0xE0,0x01,0xE0,0x00,0x39,0x20,0x42,0xFD,0xF9,0xC4,0x41,0x50,0x00,0x10,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x07,0xFF,0xE0,0x01,0xC0,0x00,0x78,0x00,0x42,0x48,0xC3,0x0C,0x41,0xE0,0x00,0xB0,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x07,0xFF,0xE0,0x01,0x80,0x00,0xFB,0x00,0x02,0x40,0x92,0x30,0x45,0x02,0x00,0x70,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x07,0xFF,0xE0,0x01,0x00,0x00,0x7B,0x00,0x02,0x40,0x91,0x32,0x0D,0x22,0x00,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01},
    {0x03,0xFF,0x60,0x00,0x00,0x00,0x32,0x80,0x02,0x40,0x9C,0x53,0x84,0x22,0x00,0x70,0x00,0x00,0x00,0x00,0x08,0x20,0x00,0x01},
    {0x03,0xFF,0x60,0x00,0x00,0x00,0x02,0x08,0x03,0xED,0xF0,0xCA,0x84,0x62,0x00,0x60,0x00,0x00,0x00,0x00,0x0C,0x40,0x00,0x01},
    {0x03,0xFF,0x60,0x00,0x00,0x00,0x02,0x08,0x00,0x48,0x00,0x8D,0x83,0x80,0x00,0x20,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x03,0xFF,0x60,0x00,0x00,0x00,0x02,0x00,0x00,0x48,0x91,0xC9,0x84,0x80,0x00,0x20,0x00,0x00,0x00,0x00,0x0C,0x40,0x00,0x01},
    {0x03,0xFF,0xE0,0x00,0x00,0x00,0x03,0x00,0x00,0x08,0x92,0x30,0x10,0x03,0x00,0x20,0x00,0x00,0x00,0x00,0x0C,0x00,0x00,0x01},
    {0x03,0xDF,0xE0,0x00,0x00,0x00,0x03,0x40,0x00,0x09,0x9F,0x76,0x00,0x31,0x00,0x00,0x00,0x00,0x00,0x00,0x08,0x00,0x00,0x01},
    {0x03,0xDF,0xE0,0x00,0x00,0x00,0x05,0x48,0x00,0xEC,0x92,0x58,0x00,0x03,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x03,0xFE,0xE0,0x00,0x00,0x00,0x04,0x00,0x00,0x08,0x92,0x03,0x06,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x03,0xFE,0xE0,0x00,0x00,0x00,0x02,0x00,0x00,0x08,0x92,0x00,0x80,0x41,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x03,0xFE,0xF0,0x00,0x00,0x00,0x02,0x00,0x20,0x08,0x92,0x01,0x02,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x03,0xFF,0xF0,0x00,0x00,0x00,0x00,0x18,0x00,0x0D,0x9F,0x84,0x03,0x81,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x48,0x01,0x68,0x92,0x9C,0x09,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x03,0xFF,0xF0,0x00,0x00,0x00,0x00,0x00,0x01,0x28,0x02,0x86,0x01,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x03,0xF5,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x92,0x80,0x01,0x58,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x03,0xFF,0xE0,0x00,0x00,0x00,0x08,0x00,0x01,0x28,0x02,0x80,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x01},
    {0x03,0xFF,0xE0,0x00,0x00,0x00,0x02,0x00,0x01,0x0D,0xFF,0xD0,0x00,0x08,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x40,0x00,0x01},
    {0x03,0xFB,0xE0,0x00,0x00,0x00,0x02,0x14,0x03,0xEC,0x92,0x9D,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x40,0x00,0x01},
    {0x03,0xFF,0xE0,0x00,0x00,0x00,0x00,0x80,0x01,0x08,0x12,0x83,0x02,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x11,0x40,0x00,0x01},
    {0x03,0xFB,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x28,0x12,0x82,0x00,0x78,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x02,0x00,0x01,0x08,0x13,0x06,0x00,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x02,0xC0,0x00,0x2C,0xB2,0xC6,0x90,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x05,0xFF,0xF0,0x02,0x00,0x00,0x00,0x10,0x8D,0x80,0x00,0x07,0x81,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x02,0x00,0x00,0x00,0x10,0x01,0x00,0x00,0x05,0x81,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x03,0x80,0x80,0x08,0x12,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x03,0xE1,0x00,0x49,0x17,0xE5,0x61,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x01,0x00,0x00,0x01,0xF1,0x00,0x5D,0x30,0x61,0x23,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x40,0x00,0x41},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x01,0xFB,0x01,0x08,0x10,0x45,0x83,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x42,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x01,0xF9,0x00,0x09,0x10,0x41,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x03,0xFB,0x00,0x09,0x12,0x41,0x03,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x40,0x00,0x01},
    {0x07,0xFF,0xF0,0x00,0x00,0x00,0x03,0xF9,0x00,0xDB,0xFF,0xF1,0x43,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x00,0x00,0x03,0xFC,0x00,0x01,0x10,0x58,0x43,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xC0,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x00,0x00,0x03,0xFC,0x2C,0x01,0x12,0x45,0xC7,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xC0,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x00,0x00,0x00,0xFC,0x44,0x01,0x12,0x05,0x67,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xC0,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x00,0x00,0x02,0xFC,0x00,0x01,0x02,0x40,0x07,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x04,0xD0,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x00,0x00,0x01,0xF8,0x01,0xEB,0xBF,0xF8,0x07,0xF0,0x00,0x00,0x00,0x00,0x00,0x02,0x05,0x60,0x00,0x01},
    {0x07,0xFF,0xF8,0x00,0x80,0x00,0x00,0xFA,0x02,0x01,0x02,0x43,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x02,0x01,0x60,0x00,0x01},
    {0x03,0xFF,0xF8,0x00,0x00,0x00,0x02,0xFB,0x08,0x00,0x02,0x00,0x27,0xF0,0x00,0x00,0x00,0x00,0x00,0x03,0x01,0x60,0x00,0x01},
    {0x0F,0xFF,0xF8,0x00,0x00,0x00,0x02,0xFA,0x00,0x00,0x00,0x10,0x07,0xE0,0x00,0x00,0xC0,0x00,0x00,0x03,0x01,0x40,0x00,0x01},
    {0x0F,0xFF,0xFC,0x00,0x40,0x00,0x02,0xFA,0x30,0x00,0x00,0x10,0x23,0xE1,0x00,0x67,0xC0,0x00,0x00,0x03,0x01,0x40,0x00,0x01},
    {0xCF,0xFF,0xFC,0x00,0x20,0x00,0x02,0x78,0x50,0x82,0x9B,0xF8,0x67,0xE0,0x00,0x3F,0xC0,0x00,0x00,0x07,0x01,0x60,0x00,0x11},
    {0xFB,0xFF,0xFC,0x00,0x30,0x00,0x02,0x7B,0x50,0x81,0x02,0xC0,0xE7,0xC1,0x00,0x1F,0xC0,0x00,0x00,0x07,0x01,0x60,0x00,0x01},
    {0x3B,0xFF,0xFC,0x00,0x20,0x00,0x02,0x79,0x00,0x00,0x00,0x40,0x47,0xE0,0x00,0x3F,0xC0,0x00,0x00,0x07,0x23,0x60,0x00,0x01},
    {0x8F,0xFF,0xFC,0x00,0x20,0x00,0x02,0x7A,0x00,0x01,0x80,0x40,0x07,0xC0,0x00,0x7E,0xC0,0x00,0x00,0x07,0x02,0x40,0x00,0x01},
    {0xEF,0xFF,0xFC,0x00,0x20,0x00,0x02,0x7A,0x00,0x01,0x00,0x51,0x0F,0xC0,0x00,0xFF,0x80,0x00,0x00,0x07,0x02,0x40,0x00,0x01},
    {0xFF,0xFF,0xFC,0x00,0x20,0x00,0x00,0x7A,0x14,0xDF,0xBF,0xD4,0x0F,0xC0,0x01,0xB5,0x40,0x00,0x00,0x07,0x00,0x40,0x00,0x09},
    {0x3F,0xFF,0xFE,0x00,0x30,0x00,0x00,0x7A,0x00,0x91,0x00,0x15,0xEF,0xC0,0x00,0x35,0xC0,0x00,0x00,0x07,0x02,0x00,0x00,0x01},
    {0x9F,0xFF,0xFE,0x00,0x60,0x00,0x00,0x78,0x00,0x00,0x00,0x01,0x4F,0xC0,0x00,0x4D,0x80,0x00,0x00,0x05,0x00,0x00,0x00,0x01},
    {0xFF,0xF7,0xFE,0x00,0x28,0x00,0x01,0x38,0x00,0x01,0x00,0x01,0x4F,0x80,0x01,0xCF,0x00,0x00,0x00,0x06,0x00,0xC0,0x00,0x01},
    {0x7D,0xFF,0xFE,0x00,0x20,0x00,0x01,0x39,0x00,0x01,0x00,0x15,0x0F,0x80,0x00,0x12,0x00,0x00,0x00,0x06,0x00,0xC0,0x00,0x01},
    {0x1F,0xFF,0xFE,0x00,0x20,0x00,0x01,0x5A,0x55,0xF9,0xFE,0xFF,0xDF,0x80,0x00,0x26,0x00,0x00,0x00,0x06,0x00,0x40,0x00,0x01},
    {0x9F,0xFF,0xFF,0x00,0x10,0x00,0x00,0x1E,0x40,0x90,0x00,0x14,0x1F,0x80,0x01,0xC0,0x00,0x00,0x00,0x07,0x00,0x40,0x00,0x01},
    {0x7F,0xFF,0xFF,0x00,0x00,0x00,0x00,0x3C,0x00,0x10,0x00,0x14,0x1F,0x00,0x00,0x80,0x00,0x00,0x00,0x04,0x80,0x40,0x00,0x01},
    {0x3F,0xFF,0xFF,0x00,0x10,0x00,0x00,0x3C,0x84,0x11,0x20,0x14,0x1F,0x00,0x00,0xD4,0x00,0x00,0x00,0x05,0x80,0x00,0x00,0x01},
    {0x3F,0xFF,0xFF,0x00,0x10,0x00,0x00,0xBC,0x20,0x81,0x00,0x10,0x3F,0x00,0x00,0xC8,0x00,0x00,0x00,0x07,0x80,0x00,0x00,0x01},
    {0xFF,0xFF,0xFF,0x00,0x20,0x00,0x00,0xBC,0x05,0xF1,0xA4,0xDF,0xBF,0x00,0x00,0x50,0x00,0x00,0x00,0x07,0x00,0x40,0x00,0x01},
    {0x9F,0xFF,0xFF,0x00,0x00,0x00,0x00,0xBC,0x00,0x90,0x00,0x10,0xFF,0x00,0x00,0x50,0x00,0x00,0x00,0x0F,0xC0,0x40,0x00,0x01},
    {0xDF,0xFF,0xFF,0x80,0x10,0x00,0x00,0xBC,0x00,0x10,0x00,0x00,0x7E,0x00,0x00,0x10,0x00,0x00,0x00,0x0F,0xC0,0x40,0x00,0x01},
    {0xDF,0xFF,0xFF,0x00,0x00,0x00,0x00,0x9F,0x00,0x01,0x20,0x00,0xFE,0x00,0x00,0x10,0x00,0x00,0x00,0x0F,0x00,0x00,0x00,0x01},
    {0xEF,0xFF,0xFF,0x80,0x0C,0x00,0x00,0x97,0x80,0x83,0xA0,0x8B,0xFE,0x00,0x00,0x08,0x80,0x00,0x00,0x0F,0x00,0x00,0x00,0x01},
    {0xFF,0xFF,0xFF,0x80,0x08,0x00,0x00,0x1F,0xE3,0xF9,0x24,0x0F,0xFE,0x00,0x01,0x11,0x00,0x00,0x00,0x07,0x02,0x00,0x00,0x01},
    {0xFF,0xFF,0xFF,0xE0,0x08,0x00,0x00,0x1F,0xE0,0x90,0x00,0x1F,0xFE,0x00,0x00,0x08,0x00,0x00,0x00,0x03,0x80,0x00,0x00,0x61},
    {0xFF,0xFF,0xFF,0xF8,0x84,0x00,0x00,0x1F,0xF0,0x91,0x00,0x3F,0xFE,0x00,0x00,0x04,0x00,0x00,0x00,0x01,0x01,0x00,0x00,0x01},
    {0xFF,0xFF,0xFF,0xFD,0xC8,0x00,0x00,0x47,0xF0,0x11,0x24,0x9F,0xFE,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x01},
    {0xFF,0xFF,0xFF,0xF9,0xE0,0x00,0x00,0x07,0xF0,0x01,0xE1,0x1F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x10,0x00,0x08,0x00,0x01},
    {0xFF,0xFF,0xFF,0xF1,0xE0,0x00,0x00,0x23,0xF0,0xB8,0x24,0x0F,0xEC,0x00,0x00,0x00,0x02,0x00,0x00,0x10,0x00,0x08,0x00,0x01},
    {0x7F,0xFF,0xFF,0xE0,0xF8,0x00,0x00,0x21,0xF0,0x00,0x00,0x0F,0xFC,0x00,0x00,0x00,0x00,0x00,0x00,0x18,0x04,0x00,0x00,0x01},
    {0x7F,0xFF,0xFF,0xC0,0xF0,0x00,0x00,0x01,0xF0,0x00,0x00,0x0F,0xDE,0x00,0x00,0x04,0x00,0x00,0x00,0x1D,0xE0,0x00,0x00,0x01},
    {0xBF,0xFF,0xFF,0x80,0xF0,0x00,0x00,0x01,0xF0,0x00,0x00,0x0F,0xFE,0x00,0x00,0x04,0x00,0x00,0x00,0x3F,0xE8,0x00,0x00,0x01},
    {0xBF,0xFF,0xFF,0x00,0xD0,0x00,0x00,0x00,0x70,0x00,0x00,0x1F,0xF8,0x00,0x00,0x1C,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x01},
    {0x1F,0xFF,0xFE,0x01,0xF0,0x00,0x00,0x13,0x38,0x00,0x00,0x1B,0xFB,0x00,0x00,0x14,0x00,0x00,0x00,0x3F,0xF8,0x00,0x00,0x01},
    {0x0F,0xFF,0xFC,0x01,0xF0,0x00,0x00,0x00,0x9C,0x00,0x00,0x3A,0x79,0x00,0x00,0x14,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x03,0xFF,0xF8,0x02,0x70,0x00,0x00,0x00,0x86,0x00,0x00,0x3E,0xF8,0x80,0x00,0x1C,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x00,0xFF,0xC0,0x04,0x70,0x00,0x00,0x08,0x47,0x00,0x00,0x26,0xD0,0x40,0x00,0x0C,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0x70,0x00,0x00,0x00,0x61,0x80,0x00,0x0D,0xB0,0x41,0x80,0x0C,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x08,0x30,0x00,0x00,0x00,0x31,0x00,0x00,0x09,0x20,0x63,0x00,0x08,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x00,0xF0,0x00,0x00,0x00,0x10,0x00,0x00,0x03,0xE0,0x61,0x00,0x08,0x00,0x00,0x00,0x1F,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x01,0x90,0x00,0x00,0x00,0x18,0x00,0x00,0x03,0x40,0x00,0x00,0x00,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0x00,0x00,0x05,0x90,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x01,0x00,0x04,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0x30,0x00,0x05,0xF0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0x00,0x2C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0x70,0x00,0x05,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x01,0x83,0x00,0x3C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0x70,0x00,0x0F,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x3C,0x00,0x00,0x00,0x0F,0xF0,0x00,0x00,0x01},
    {0x00,0x78,0x00,0x04,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x3C,0x00,0x00,0x00,0x0F,0xF0,0x00,0x00,0x01},
    {0x00,0x78,0x00,0x05,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x3C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0x78,0x00,0x07,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x06,0x00,0x7C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0xF8,0x00,0x03,0xE0,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x02,0x00,0x7C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0xF8,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x7C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0xF8,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x01,0xE0,0x00,0x00,0x0C,0x00,0x7C,0x00,0x00,0x00,0x0F,0xF8,0x00,0x00,0x01},
    {0x00,0xFC,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x0C,0x00,0x7C,0x00,0x00,0x00,0x07,0xF8,0x00,0x00,0x01},
    {0x01,0xFC,0x00,0x03,0xF8,0x00,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x0C,0x01,0x7C,0x00,0x00,0x00,0x07,0xF8,0x00,0x02,0x01},
    {0x01,0xFC,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x08,0x01,0xFC,0x00,0x00,0x00,0x07,0xF8,0x00,0x02,0x01},
    {0x01,0xFC,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x08,0x01,0xFC,0x00,0x00,0x00,0x03,0xF8,0x00,0x02,0x01},
    {0x01,0xFC,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x01,0xF0,0x00,0x00,0x08,0x00,0xFE,0x00,0x00,0x00,0x03,0xF8,0x00,0x02,0x01},
    {0x01,0xFE,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x02,0x01},
    {0x01,0xFE,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x01,0xF8,0x00,0x00,0x00,0x00,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x06,0x01},
    {0x03,0xFE,0x00,0x07,0xF0,0x00,0x00,0x00,0x00,0x03,0xF8,0x00,0x00,0x10,0x02,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x07,0x01},
    {0x03,0xFE,0x00,0x07,0xF1,0x00,0x00,0x00,0x00,0x03,0xF8,0x00,0x00,0x10,0x03,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x07,0x01},
    {0x03,0xFE,0x00,0x07,0xF1,0x00,0x00,0x00,0x00,0x03,0xFC,0x00,0x00,0x10,0x01,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x07,0x01},
    {0x03,0xFF,0x00,0x07,0xF1,0x00,0x18,0x00,0x00,0x03,0xFC,0x00,0x00,0x00,0x01,0xFE,0x00,0x00,0x00,0x07,0xF8,0x00,0x0F,0x01},
    {0x03,0xFF,0x00,0x07,0xF1,0x00,0x18,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x01,0xFF,0x00,0x00,0x00,0x07,0xF8,0x00,0x0F,0x01},
    {0x07,0xFF,0x00,0x07,0xF1,0x00,0x18,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x07,0xF0,0x00,0x0F,0x01},
    {0x07,0xFF,0x00,0x07,0xF1,0x00,0x18,0x00,0x00,0x07,0xFC,0x00,0x00,0x00,0x03,0xFF,0x00,0x00,0x00,0x07,0xF0,0x00,0x0F,0x01},
    {0x07,0xFF,0x00,0x07,0xF1,0x00,0x38,0x00,0x00,0x07,0xFC,0x00,0x00,0x20,0x03,0xFF,0x00,0x02,0x00,0x07,0xF8,0x00,0x1F,0x01},
    {0x07,0xFF,0x00,0x0F,0xE1,0x00,0x38,0x00,0x00,0x0F,0xFE,0x00,0x00,0x20,0x03,0xFF,0x00,0x02,0x00,0x07,0xF8,0x00,0x1F,0x01},
    {0x07,0xFF,0x80,0x07,0xE1,0x00,0x3C,0x00,0x00,0x0F,0xFE,0x00,0x00,0x20,0x07,0xFF,0x80,0x02,0x00,0x07,0xF8,0x00,0x1F,0x01},
    {0x07,0xFF,0x80,0x07,0xE1,0x40,0x3C,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x07,0xFF,0x80,0x00,0x00,0x07,0xF8,0x00,0x1F,0x81},
    {0x07,0xFF,0x80,0x07,0xF1,0x40,0x3C,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x07,0xFF,0x80,0x01,0x00,0x07,0xF8,0x00,0x1F,0x81},
    {0x0F,0xFF,0x80,0x07,0xF1,0x00,0x7C,0x00,0x00,0x0F,0xFE,0x00,0x00,0x00,0x07,0xFF,0x00,0x01,0x00,0x03,0xF8,0x00,0x1F,0x81},
    {0x0F,0xFF,0x80,0x07,0xF0,0x00,0x7C,0x00,0x00,0x1F,0xFF,0x00,0x00,0x00,0x07,0xFF,0x00,0x01,0x00,0x03,0xF8,0x00,0x1F,0x81},
    {0x0F,0xFF,0x80,0x07,0xF2,0x00,0x7C,0x00,0x00,0x1F,0xFF,0x00,0x00,0x00,0x07,0xFF,0x80,0x03,0x00,0x01,0xFC,0x00,0x1F,0x81},
    {0x0F,0xFF,0x80,0x07,0xF2,0x00,0x7C,0x00,0x00,0x1F,0xFF,0x00,0x00,0x00,0x07,0xFF,0x80,0x03,0x00,0x01,0xFC,0x00,0x1F,0x81},
    {0x0F,0xFF,0x80,0x1F,0xF6,0x00,0xFC,0x00,0x00,0x1F,0xFF,0x80,0x00,0x00,0x07,0xFF,0xC0,0x03,0x80,0x01,0xFC,0x00,0x1F,0x81},
    {0x0F,0xFF,0xC0,0x2B,0xF4,0x00,0xFC,0x00,0x00,0x3F,0xFF,0x80,0x00,0x40,0x07,0xFF,0x80,0x03,0x80,0x01,0xFC,0x00,0x3F,0x81},
    {0x0F,0xFF,0xC0,0x0B,0xF0,0x00,0xFC,0x00,0x00,0x3F,0xFF,0x80,0x00,0x40,0x0F,0xFF,0x80,0x03,0x80,0x01,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xC0,0x0B,0xF4,0x00,0xFC,0x08,0x00,0x3F,0xFF,0x80,0x00,0x00,0x0F,0xFF,0x80,0x01,0x80,0x01,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xC0,0x07,0xFC,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0x80,0x01,0x80,0x01,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xC0,0x03,0xFC,0x04,0xF8,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x80,0x0F,0xFF,0x80,0x01,0x80,0x00,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xE0,0x09,0xFC,0x01,0xF8,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0x80,0x01,0x80,0x00,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xC0,0x01,0xF0,0x01,0xFC,0x00,0x00,0x3F,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0x80,0x01,0xC0,0x00,0xFC,0x00,0x3F,0xC1},
    {0x1F,0xFF,0xC0,0x01,0xF0,0x01,0xFE,0x00,0x00,0x7F,0xFF,0xC0,0x00,0x00,0x7F,0xFF,0x80,0x01,0xC0,0x00,0xFC,0x00,0x3F,0xC1},
    {0x3F,0xFF,0xC0,0x03,0xE0,0x00,0xFC,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xC0,0x01,0xE0,0x00,0xFC,0x00,0x3F,0xC1},
    {0x3F,0xFF,0xE0,0x03,0xE0,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xC0,0x01,0xE0,0x00,0xFC,0x00,0x7F,0xC1},
    {0x1F,0xFF,0xE0,0x03,0xE0,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xC0,0x01,0xF0,0x00,0xFC,0x00,0x7F,0xC1},
    {0x3F,0xFF,0xF0,0x03,0xE0,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xC0,0x01,0xF0,0x00,0x7C,0x00,0x7F,0xE1},
    {0x3F,0xFF,0xF0,0x01,0xE0,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xC0,0x01,0xF0,0x00,0x7C,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF2,0x00,0xF8,0x00,0x00,0x3F,0xFF,0xE0,0x00,0x00,0x1F,0xFF,0xE0,0x01,0xF0,0x00,0x38,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xF0,0x01,0xF0,0x01,0xF8,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xE0,0x01,0xF0,0x00,0x18,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x03,0xF0,0x01,0xF8,0x00,0x00,0x7F,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xE0,0x01,0xF0,0x00,0x18,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF8,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xE0,0x01,0xF8,0x00,0x18,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF4,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x01,0xF8,0x00,0x18,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xE0,0x01,0xF0,0x01,0xF8,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x01,0xFC,0x00,0x18,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF0,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,0x00,0xFC,0x00,0x18,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,0x00,0xFC,0x00,0x08,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,0x01,0xFC,0x00,0x08,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xE0,0x01,0xF0,0x01,0xF8,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,0x01,0xFC,0x00,0x0C,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xF0,0x01,0xF0,0x01,0xF8,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x00,0x7F,0xFF,0xF0,0x00,0xFF,0x00,0x0C,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xF0,0x01,0xF0,0x01,0xF0,0x00,0x00,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x00,0xFF,0x80,0x0C,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xF0,0x01,0xF8,0x01,0xF0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x00,0xFF,0x00,0x0C,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xF0,0x01,0xFC,0x01,0xF0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x00,0xFF,0x80,0x04,0x00,0x7F,0xE1},
    {0x7F,0xFF,0xF0,0x01,0xF8,0x03,0xE0,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x3F,0xFF,0xF0,0x00,0xFF,0x80,0x04,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xF0,0x01,0xF8,0x03,0xE0,0x00,0x03,0xFF,0xFF,0xC0,0x00,0x00,0x3F,0xFF,0xF8,0x00,0xFF,0x80,0x04,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xF0,0x01,0xF8,0x03,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xF0,0x01,0xF8,0x03,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x1F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0x7F,0xE1},
    {0xFF,0xFF,0xE0,0x01,0xF8,0x03,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0xFF,0xE1},
    {0xFF,0xFF,0xE0,0x01,0xF8,0x03,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0xFF,0xE1},
    {0xFF,0xFF,0xE0,0x01,0xF8,0x03,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xE0,0x00,0xF8,0x00,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x0F,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xE0,0x00,0xF8,0x00,0xF0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x07,0xFF,0xF8,0x00,0xFF,0xC0,0x04,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xE0,0x00,0xF8,0x00,0xF0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x03,0xFF,0xF8,0x01,0xFF,0xC0,0x00,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xF0,0x00,0xF0,0x00,0xF0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xC0,0x00,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xE0,0x00,0xF0,0x00,0xE0,0x00,0x01,0xFF,0xFF,0xC0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xE0,0x02,0x00,0xFF,0xF9},
    {0xFF,0xFF,0xC0,0x00,0x60,0x00,0xE0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xE0,0x02,0x00,0xFF,0xF1},
    {0xFF,0xFF,0xE0,0x00,0x60,0x01,0xC0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xE0,0x00,0x00,0xFF,0xF1},
    {0x7F,0xFF,0xE0,0x00,0x60,0x01,0xC0,0x00,0x01,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xE0,0x00,0x00,0xFF,0xF1},
    {0x3F,0xFF,0xE0,0x00,0x60,0x03,0xE0,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xF8,0x01,0xFF,0xE0,0x00,0x00,0xFF,0xF1},
    {0x3F,0xFF,0xF0,0x00,0xE0,0x03,0xE0,0x00,0x03,0xFF,0xFF,0xE0,0x00,0x00,0x01,0xFF,0xFC,0x01,0xFF,0xF0,0x00,0x00,0xFF,0xF1}
};