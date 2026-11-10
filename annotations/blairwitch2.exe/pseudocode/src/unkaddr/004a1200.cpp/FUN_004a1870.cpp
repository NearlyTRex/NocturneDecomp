// Name: unkaddr_004a1200.cpp_FUN_004a1870
// Address: 004a1870
// Address Range: [[004a1870, 004a1b57]]
// Convention: unknown
// Signature: void unkaddr_004a1200_cpp_FUN_004a1870(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_004a1200_cpp_FUN_004a1870(void)

{
  CAlphaBitmap *pCVar1;
  int iVar2;
  int iVar3;
  char acStack_518 [256];
  char acStack_418 [256];
  char acStack_318 [256];
  char acStack_218 [256];
  char acStack_118 [256];
  int iStack_18;
  int iStack_14;
  
  pCVar1 = CAlphaBitmap_ARRAY_01caf128;
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf114);
  do {
    engine_alphabit_cpp_FUN_0040d540(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != &CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1a0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1b4);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1c8);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1dc);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf1f0);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf204);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf218);
  engine_alphabit_cpp_FUN_0040d540(&CAlphaBitmap_01caf22c);
  DAT_01caf4a0 = 0;
  DAT_00616040 = 0xffffffff;
  DAT_00616010 = 1;
  _DAT_01caf488 = 0;
  _DAT_01caf568 = 0;
  engine_dosio_cpp_splitPath_FUN_00461070
            (&DAT_01cab7a8,(char *)0x0,(char *)0x0,acStack_518,(char *)0x0);
  _sprintf(acStack_418,&DAT_005d59e3);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CAlphaBitmap_01caf114,acStack_418,0x280,0x1e0)
  ;
  iVar3 = 9;
  iVar2 = 0;
  engine_alphabit_cpp_FUN_0040dd20(&CAlphaBitmap_01caf114,0xff);
  if (0 < _DAT_01cab9f0) {
    pCVar1 = CAlphaBitmap_ARRAY_01caf128;
    do {
      iStack_18 = iVar2 * 0x2e4;
      _sprintf(acStack_318,"tab_%s");
      iStack_14 = iVar2 * 0x14;
      engine_dosio_cpp_splitPath_FUN_00461070
                (acStack_318,(char *)0x0,(char *)0x0,acStack_118,(char *)0x0);
      _sprintf(acStack_218,&DAT_005d59e3);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(pCVar1,acStack_218,0x5a,0x36);
      *(uint *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x148 + iStack_18) = 0x215;
      *(int *)(&SNotesSection_ARRAY_01cab9f4[0].field_0x14c + iStack_18) = iVar3;
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
      iVar3 = iVar3 + *(int *)((int)&CAlphaBitmap_ARRAY_01caf128[0].height + iStack_14) + 10;
    } while (iVar2 < _DAT_01cab9f0);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf1a0,"pentip",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf1b4,"pentipink",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf1c8,"xmarker",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf1dc,"questionmark",0x21,0x3f);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf1f0,"ltarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf204,"rtarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf218,"fieldnotes_exit",0x1e,0x20);
  engine_alphabit_cpp_FUN_0040dd20(&CAlphaBitmap_01caf218,0xff);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
            (&CAlphaBitmap_01caf22c,"underline",0x100,8);
  DAT_00616010 = 0;
  return;
}
