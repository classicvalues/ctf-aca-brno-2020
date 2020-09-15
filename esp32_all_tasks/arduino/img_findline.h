#define line_width 128
#define line_height 11
const static unsigned char line1_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0xe1, 0x01, 0xf0,
   0x07, 0xf0, 0x83, 0x00, 0xf4, 0xf7, 0x87, 0x01, 0x80, 0x00, 0x00, 0x00,
   0xc0, 0x81, 0x01, 0x60, 0x04, 0x60, 0xe6, 0x03, 0x36, 0x30, 0xc0, 0x01,
   0xc0, 0x00, 0x00, 0x00, 0xe0, 0x81, 0x01, 0x60, 0x01, 0x60, 0xb6, 0x00,
   0xf3, 0xf3, 0xe3, 0x01, 0xf0, 0xe3, 0xe3, 0x03, 0x80, 0x81, 0x01, 0xe0,
   0x01, 0xe0, 0xe3, 0x83, 0x01, 0x06, 0x86, 0x01, 0xc0, 0x30, 0x36, 0x06,
   0x80, 0x81, 0x01, 0x60, 0x01, 0x60, 0x86, 0xc6, 0x00, 0x06, 0x86, 0x01,
   0xc0, 0x30, 0x30, 0x00, 0x80, 0x81, 0x01, 0x60, 0x04, 0x60, 0xf6, 0x63,
   0x30, 0x36, 0x86, 0x01, 0xc0, 0x32, 0x36, 0x06, 0xe0, 0xe7, 0x01, 0xf0,
   0x07, 0x70, 0x86, 0x30, 0xe0, 0xe3, 0xe3, 0xc7, 0x80, 0xe1, 0xe3, 0x03,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

const static unsigned char line2_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe3, 0x01, 0x80,
   0xe1, 0xe3, 0x83, 0xf1, 0x07, 0xe0, 0xe3, 0xe3, 0x03, 0x00, 0x00, 0x00,
   0x30, 0x86, 0x01, 0xc0, 0x31, 0x36, 0x06, 0x30, 0x06, 0x30, 0x36, 0x36,
   0x06, 0x00, 0x00, 0x00, 0x00, 0x86, 0x01, 0xe0, 0x31, 0x00, 0xc6, 0x01,
   0x03, 0x00, 0x36, 0x00, 0x06, 0xe0, 0xe3, 0x03, 0x80, 0x83, 0x01, 0x80,
   0x31, 0xc0, 0x83, 0x81, 0x01, 0x80, 0xf3, 0x83, 0x03, 0x30, 0x36, 0x06,
   0xe0, 0x80, 0x01, 0x80, 0x31, 0x00, 0x86, 0xc1, 0x00, 0xe0, 0x30, 0xe6,
   0x00, 0xf0, 0x37, 0x06, 0x30, 0x86, 0x01, 0x80, 0x31, 0x36, 0x86, 0xc1,
   0x00, 0x30, 0x36, 0x36, 0x06, 0x30, 0x30, 0x06, 0xf0, 0xe7, 0x01, 0xe0,
   0xe7, 0xe3, 0xc3, 0xc3, 0xc0, 0xf0, 0xe7, 0xf3, 0x07, 0xe0, 0xe3, 0x03,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

const static unsigned char line3_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xe0, 0xe3, 0x01, 0xe0,
   0x03, 0x00, 0x30, 0xe6, 0x83, 0x01, 0xe0, 0xe3, 0x83, 0x01, 0x00, 0x00,
   0x30, 0x86, 0x01, 0x30, 0x06, 0x00, 0x70, 0x36, 0xc6, 0x01, 0x30, 0x36,
   0xc6, 0x01, 0x00, 0x00, 0x00, 0x86, 0x01, 0x30, 0x30, 0xb3, 0xf3, 0x06,
   0xe6, 0x01, 0x30, 0x36, 0xe6, 0xb1, 0xb3, 0x03, 0xc0, 0x83, 0x01, 0x30,
   0x30, 0x63, 0xb6, 0xc7, 0x83, 0x01, 0xe0, 0xe3, 0x87, 0x61, 0x66, 0x06,
   0x00, 0x86, 0x01, 0x30, 0x30, 0x63, 0x36, 0x07, 0x86, 0x01, 0x30, 0x06,
   0x86, 0x61, 0x66, 0x06, 0x30, 0x86, 0x01, 0x30, 0xe6, 0x63, 0x36, 0x36,
   0x86, 0x01, 0x30, 0x36, 0x86, 0x61, 0x66, 0x06, 0xe0, 0xe3, 0x01, 0xe0,
   0x03, 0x63, 0x36, 0xe6, 0xe3, 0xc7, 0xe0, 0xe3, 0xe3, 0x67, 0x66, 0x06,
   0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };