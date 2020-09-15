#define pin_width 85
#define pin_height 45
const static unsigned char pin_bits[] = {
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xc0,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x7f, 0x00, 0xf0, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x01, 0xfc, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xfe, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x1f, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x80, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
   0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x03,
   0x00, 0x06, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x00, 0x03, 0x00,
   0x06, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x00, 0x03, 0x00, 0x06,
   0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x18, 0x63, 0x30, 0xc6, 0x60,
   0x8c, 0xc1, 0x18, 0x03, 0x1f, 0x1f, 0x38, 0xf3, 0xf0, 0xe6, 0xf1, 0xec,
   0xc1, 0x99, 0x03, 0x1f, 0x1f, 0xf8, 0x7f, 0xf0, 0xff, 0xe0, 0xff, 0xc1,
   0xff, 0x03, 0x1f, 0x1f, 0xe0, 0x1f, 0xc0, 0x3f, 0x80, 0x7f, 0x00, 0xff,
   0x00, 0x1f, 0x1f, 0xc0, 0x0f, 0x80, 0x1f, 0x00, 0x3f, 0x00, 0x7e, 0x00,
   0x1f, 0x1f, 0xe0, 0x1f, 0xc0, 0x3f, 0x80, 0x7f, 0x00, 0xff, 0x00, 0x1f,
   0x1f, 0xf8, 0x7f, 0xf0, 0xff, 0xe0, 0xff, 0xc1, 0xff, 0x03, 0x1f, 0x1f,
   0x38, 0x73, 0x70, 0xe6, 0xf1, 0xec, 0xe1, 0x99, 0x03, 0x1f, 0x1f, 0x18,
   0x63, 0x30, 0xc6, 0x60, 0x8c, 0xc1, 0x18, 0x03, 0x1f, 0x1f, 0x00, 0x03,
   0x00, 0x06, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x00, 0x03, 0x00,
   0x06, 0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x00, 0x03, 0x00, 0x06,
   0x00, 0x0c, 0x00, 0x18, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x1f, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f,
   0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1f, 0x3f,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x1f, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x1f, 0xfe, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xfe, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0x0f, 0xfc, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0xff, 0x07, 0xf0, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0xff, 0xff, 0x01, 0xc0, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
   0xff, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00 };
