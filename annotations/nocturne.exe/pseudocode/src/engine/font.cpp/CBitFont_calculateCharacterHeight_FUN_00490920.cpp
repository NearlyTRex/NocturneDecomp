// Name: engine_font.cpp_CBitFont_calculateCharacterHeight_FUN_00490920
// Address: 00490920
// Address Range: [[00490920, 0049097d]]
// Convention: __cdecl
// Signature: int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride)

#include "nocturne.h"

int __cdecl engine_font_cpp_CBitFont_calculateCharacterHeight_FUN_00490920(CBitFont *this_ptr,uchar *char_bitmap,int char_width,int char_height,int bitmap_stride)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int local_14;
  
  iVar3 = 0;
  local_14 = 0;
  if (0 < char_height) {
    do {
      iVar1 = 0;
      pbVar2 = char_bitmap;
      if (0 < char_width) {
        do {
          if ((uint)*pbVar2 != this_ptr->load_flags) {
            local_14 = iVar3 + 1;
            break;
          }
          iVar1 = iVar1 + 1;
          pbVar2 = pbVar2 + 1;
        } while (iVar1 < char_width);
      }
      iVar3 = iVar3 + 1;
      char_bitmap = char_bitmap + bitmap_stride;
    } while (iVar3 < char_height);
  }
  return local_14;
}
