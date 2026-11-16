// Name: core_flashlit.cpp_loadNotesBitmap_FUN_004a17f0
// Address: 004a17f0
// Address Range: [[004a17f0, 004a1862]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004a17f0(CAlphaBitmap *bitmap,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004a17f0(CAlphaBitmap *bitmap,char *filename,int width,int height)

{
  char acStack_208 [256];
  char acStack_108 [256];
  
  engine_dosio_cpp_splitPath_FUN_00461070(filename,(char *)0x0,(char *)0x0,acStack_208,(char *)0x0);
  _sprintf(acStack_108,&DAT_005d59e3);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(bitmap,acStack_108,width,height);
  return;
}
