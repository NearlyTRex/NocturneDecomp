// Name: core_flashlit.cpp_loadNotesBitmap_FUN_004a7cf0
// Address: 004a7cf0
// Address Range: [[004a7cf0, 004a7d62]]
// Convention: __cdecl
// Signature: void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004a7cf0(CAlphaBitmap *bitmap,char *filename,int width,int height)

#include "nocturne.h"

void __cdecl core_flashlit_cpp_loadNotesBitmap_FUN_004a7cf0(CAlphaBitmap *bitmap,char *filename,int width,int height)

{
  char acStack_208 [256];
  char acStack_108 [256];
  
  engine_dosio_cpp_splitPath_FUN_00465e50(filename,(char *)0x0,(char *)0x0,acStack_208,(char *)0x0);
  _sprintf(acStack_108,&DAT_005c0d12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(bitmap,acStack_108,width,height);
  return;
}
