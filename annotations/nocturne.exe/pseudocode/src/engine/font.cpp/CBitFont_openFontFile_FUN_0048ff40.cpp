// Name: engine_font.cpp_CBitFont_openFontFile_FUN_0048ff40
// Address: 0048ff40
// Address Range: [[0048ff40, 0048ff6e]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_0048ff40(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)

{
  engine_font_cpp_CBitFont_loadNewBitmap_FUN_004901d0
            (this_ptr,filename,width,height,0x21,0xff,load_flags);
  return;
}
