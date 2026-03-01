// Name: engine_font.cpp_CBitFont_openFontFile_FUN_004ccfc0
// Address: 004ccfc0
// Address Range: [[004ccfc0, 004ccfee]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0(CBitFont *this_ptr,char *filename,int width,int height,int load_flags)

{
  engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
            (this_ptr,filename,width,height,0x21,0xff,load_flags);
  return;
}
