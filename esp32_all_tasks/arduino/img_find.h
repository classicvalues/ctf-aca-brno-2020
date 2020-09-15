#define find_width 90
#define find_height 50
const unsigned char find1_bits[] = {
   0x00, 0xe0, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xc0, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0x01, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf8, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x01, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x3d, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf8, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x1f, 0xfc, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfc, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00,
   0xfc, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0x87, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0xe0, 0xff, 0xcf, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x07, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x00, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xcf, 0xff, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char find2_bits[] = {
   0x00, 0xe0, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xc0, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0x01, 0xfe, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf8, 0x3f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0x60, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x01, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x3d, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00,
   0xfc, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00,
   0xfe, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0xfe, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf0, 0x7f, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf8, 0x7f, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x1f, 0xfc, 0x7f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfc, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfe, 0x3f, 0x00, 0x00, 0x80, 0x1f, 0xf0, 0x00, 0x00,
   0xfc, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0xc0, 0x0f, 0xf8, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0xc0, 0x0f, 0xfc, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x7f, 0x00, 0x00, 0xc0, 0x0f, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0x87, 0xff, 0xff, 0x00, 0x00, 0xc0, 0x0f, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0xc0, 0x0f, 0xfc, 0x07, 0x00,
   0xe0, 0xff, 0xcf, 0xff, 0xff, 0x00, 0x00, 0xc0, 0x0f, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x07, 0xff, 0xff, 0x01, 0x00, 0xc0, 0x0f, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x03, 0xff, 0xff, 0x01, 0x00, 0x80, 0x1f, 0xf8, 0x03, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x7f, 0x00, 0x00, 0x80, 0x3f, 0xe0, 0x00, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0xff, 0x07, 0xff, 0x3f, 0x00, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xcf, 0xff, 0x3f, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00,
   0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x80, 0xff, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };
const unsigned char find3_bits[] = {
   0x00, 0xe0, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf8, 0xff, 0x7f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x03, 0x00, 0x00, 0xe0, 0x00, 0x00, 0x00, 0x00,
   0x80, 0xff, 0xff, 0xff, 0x07, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00,
   0xc0, 0xff, 0xff, 0xff, 0x0f, 0x00, 0x00, 0xf8, 0x01, 0x00, 0x00, 0x00,
   0xe0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00,
   0xf0, 0xff, 0x01, 0xfe, 0x3f, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf8, 0x3f, 0x00, 0x00, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0xf8, 0xff, 0x00, 0xf0, 0x7f, 0x00, 0x80, 0x3f, 0x60, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x01, 0xf0, 0x7f, 0x00, 0x80, 0x1f, 0xf0, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x3d, 0xf0, 0x7f, 0x00, 0xc0, 0x0f, 0xf8, 0x01, 0x00, 0x00,
   0xfc, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0xc0, 0x0f, 0xfe, 0x01, 0x00, 0x00,
   0xfe, 0xff, 0x7f, 0xf0, 0x7f, 0x00, 0xe0, 0x0f, 0xfe, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf0, 0x7f, 0x00, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x3f, 0xf8, 0x7f, 0x00, 0xe0, 0x83, 0x7f, 0x00, 0x00, 0x00,
   0xfe, 0xff, 0x1f, 0xfc, 0x7f, 0x00, 0xf0, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfc, 0x3f, 0x00, 0xf0, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0xfc, 0xff, 0x0f, 0xfe, 0x3f, 0x00, 0xf0, 0x83, 0x1f, 0xf0, 0x00, 0x00,
   0xfc, 0xff, 0x07, 0xff, 0x3f, 0x00, 0xf0, 0xc3, 0x0f, 0xf8, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x3f, 0x00, 0xf0, 0xc3, 0x0f, 0xfc, 0x03, 0x00,
   0xf8, 0xff, 0x07, 0xff, 0x7f, 0x00, 0xf0, 0xc3, 0x0f, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0x87, 0xff, 0xff, 0x00, 0xf0, 0xc1, 0x0f, 0xfc, 0x07, 0x00,
   0xf0, 0xff, 0xff, 0xff, 0xff, 0x00, 0xf0, 0xc3, 0x0f, 0xfc, 0x07, 0x00,
   0xe0, 0xff, 0xcf, 0xff, 0xff, 0x00, 0xf0, 0xc3, 0x0f, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x07, 0xff, 0xff, 0x01, 0xf0, 0xc3, 0x0f, 0xfc, 0x07, 0x00,
   0xc0, 0xff, 0x03, 0xff, 0xff, 0x01, 0xf0, 0x83, 0x1f, 0xf8, 0x03, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x7f, 0x00, 0xf0, 0x83, 0x3f, 0xe0, 0x00, 0x00,
   0x80, 0xff, 0x03, 0xff, 0x3f, 0x00, 0xf0, 0x83, 0x3f, 0x00, 0x00, 0x00,
   0x00, 0xff, 0x07, 0xff, 0x3f, 0x00, 0xe0, 0x83, 0x7f, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xcf, 0xff, 0x3f, 0x00, 0xe0, 0x07, 0xff, 0x00, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0xe0, 0x07, 0xfe, 0x01, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0xe0, 0x0f, 0xfe, 0x01, 0x00, 0x00,
   0x00, 0xfe, 0xff, 0xff, 0x1f, 0x00, 0xc0, 0x0f, 0xfc, 0x01, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x0f, 0x00, 0xc0, 0x1f, 0xf8, 0x01, 0x00, 0x00,
   0x00, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x80, 0x3f, 0xf0, 0x01, 0x00, 0x00,
   0x00, 0xfc, 0xff, 0xff, 0x1f, 0x00, 0x80, 0x7f, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xf0, 0xff, 0xff, 0x0f, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00,
   0x00, 0xc0, 0xff, 0xff, 0x07, 0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x80, 0xff, 0x03, 0x00, 0x00, 0x00, 0xfc, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xff, 0x01, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfe, 0x01, 0x00, 0x00, 0x00, 0xf8, 0x03, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0xfc, 0x00, 0x00, 0x00, 0x00, 0xe0, 0x01, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x78, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
   0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00 };

const unsigned char* find_anim[3] = {find1_bits, find2_bits, find3_bits};