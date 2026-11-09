// Name: engine_font.cpp_FUN_004c4570
// Address: 004c4570
// Address Range: [[004c4570, 004c45c5]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_FUN_004c4570(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

#include "nocturne.h"

void __cdecl engine_font_cpp_FUN_004c4570(CBitFont *this_ptr,int offset_value,int start_char,int end_char)

{
  CBitFont *pCVar1;
  
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
    pCVar1 = this_ptr + start_char * 4;
    do {
      start_char = start_char + 1;
      *(int *)(pCVar1 + 0x3de8) = offset_value;
      pCVar1 = pCVar1 + 4;
    } while (start_char <= end_char);
  }
  return;
}
