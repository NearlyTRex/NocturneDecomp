// Name: engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0
// Address: 004cd2c0
// Address Range: [[004cd2c0, 004cd4d1]]
// Convention: __cdecl
// Signature: void engine_font.cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont * this_ptr, char * font_path)

#include "nocturne.h"

void __cdecl engine_font_cpp_CBitFont_loadFromFile_FUN_004cd2c0(CBitFont *this_ptr,char *font_path)

{
  FILE *stream;
  BADSPACEBASE *in_ESP;
  int in_stack_0000000c;
  int in_stack_00000010;
  int in_stack_00000014;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000024;
  int in_stack_00000028;
  int in_stack_0000002c;
  int in_stack_fffffe08;
  char acStack_1f4 [204];
  char acStack_128 [8];
  char acStack_120 [8];
  char acStack_118 [8];
  char acStack_110 [8];
  char acStack_108 [8];
  char acStack_100 [228];
  byte local_1c [16];
  
  stream = engine_dosio_c_getFile_FUN_00481a50("art",font_path,"rt");
  if (stream == (FILE *)0x0) {
    return;
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_128,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%s\n",&stack0xfffffddc);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_120,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n",local_1c);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_118,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_110,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_108,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d\n");
  crt_stdio_c_fgets_FUN_005fefd0(acStack_100,0xff,stream);
  crt_stdio_c_fscanf_FUN_005fe7c0(stream,"%d,%d\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\font.cpp",0x159);
  if ((in_stack_00000014 == 0x20) && (in_stack_00000018 == 0xff)) {
    engine_font_cpp_CBitFont_openFontFile_FUN_004ccfc0
              (this_ptr,acStack_1f4,in_stack_0000000c,in_stack_00000010,in_stack_0000001c);
  }
  else {
    engine_font_cpp_CBitFont_loadNewBitmap_FUN_004cd280
              (this_ptr,acStack_1f4,in_stack_0000000c,in_stack_00000010,in_stack_00000014,
               in_stack_00000018,in_stack_0000001c,in_stack_fffffe08);
  }
  this_ptr->char_widths[0x20] = in_stack_00000024;
  this_ptr->font_type = in_stack_00000028;
  this_ptr->font_enabled = in_stack_0000002c;
  return;
}
