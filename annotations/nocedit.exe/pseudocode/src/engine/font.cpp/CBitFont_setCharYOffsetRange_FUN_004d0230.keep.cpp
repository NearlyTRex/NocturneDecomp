// Name: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230
// Address: 004d0230
// MANUAL RECONSTRUCTION
// Address Range: [[004d0230, 004d0285]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

{
  if (end_char == -0x81) {
    end_char = start_char;
  }
  if (start_char < 0) {
    start_char = 0;
  }
  if (0xff < end_char) {
    end_char = 0xff;
  }
  if (start_char <= end_char) {
    do {
      this_ptr->char_y_offsets[start_char] = offset_value;
      start_char = start_char + 1;
    } while (start_char <= end_char);
  }
  return;
}
