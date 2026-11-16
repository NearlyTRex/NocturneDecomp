// Name: core_flashlit.cpp_loadNotesBitmap_FUN_004ba0b0
// Address: 004ba0b0
// Address Range: [[004ba0b0, 004ba122]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004ba0b0(CAlphaBitmap *bitmap,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004ba0b0(CAlphaBitmap *bitmap,char *filename,int width,int height)

{
  char acStack_208 [256];
  char acStack_108 [256];
  
  engine_dosio_cpp_splitPath_FUN_00479580(filename,(char *)0x0,(char *)0x0,acStack_208,(char *)0x0);
  _sprintf(acStack_108,&DAT_005df825);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(bitmap,acStack_108,width,height);
  return;
}
