// Name: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
// Address: 004cd2c0
// Address Range: [[004cd2c0, 004cd4d1]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path)

{
  FILE *stream;
  int unaff_EDI;
  char local_22c [256];
  char local_12c [256];
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  stream = engine_dosio_c_getFile_FUN_00481a50("art",font_path,"rt");
  if (stream == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%s\n",local_22c);
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n",&local_2c,&local_28);
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n",&local_24,&local_20);
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n",&local_1c);
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n",&local_18);
  crt_stdio_c_fgets_FUN_005fefd0(local_12c,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n",&local_14,&local_10);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\font.cpp",0x159);
  if ((local_24 == 0x20) && (local_20 == 0xff)) {
    engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
              (this_ptr,local_22c,local_2c,local_28,local_1c);
  }
  else {
    engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
              (this_ptr,local_22c,local_2c,local_28,local_24,local_20,local_1c,unaff_EDI);
  }
  this_ptr->char_widths[0x20] = local_18;
  this_ptr->font_type = local_14;
  this_ptr->font_enabled = local_10;
  return;
}
