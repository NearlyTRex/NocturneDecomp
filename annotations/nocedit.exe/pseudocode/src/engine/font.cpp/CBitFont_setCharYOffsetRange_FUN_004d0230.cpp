// Name: engine_font.cpp_CBitFont_setCharYOffsetRange_FUN_004d0230
// Address: 004d0230
// Address Range: [[004d0230, 004d0285]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_setCharYOffsetRange_FUN_004d0230(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

{
  int iVar1;
  
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
    iVar1 = (int)(this_ptr->bitmap_files + -1) + 0x4c + start_char * 4;
    do {
      start_char = start_char + 1;
      *(int *)(iVar1 + 0x2d68) = offset_value;
      iVar1 = iVar1 + 4;
    } while (start_char <= end_char);
  }
  return;
}
