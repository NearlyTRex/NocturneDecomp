// Name: unkaddr_004a76f0.cpp_FUN_004a7d70
// Address: 004a7d70
// Address Range: [[004a7d70, 004a8070]]
// Convention: unknown
// Signature: void unkaddr_004a76f0_cpp_FUN_004a7d70(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_004a76f0_cpp_FUN_004a7d70(void)

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
  
  pCVar1 = CAlphaBitmap_ARRAY_01d19bc0;
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19bac);
  do {
    engine_alphabit_cpp_FUN_0040d400(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != &CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c38);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c4c);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c60);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c74);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c9c);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cb0);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cc4);
  engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cd8);
  DAT_01d19f90 = 0;
  DAT_005fe3a8 = 0xffffffff;
  DAT_005fe370 = 1;
  _DAT_01d19f78 = 0;
  _DAT_01d1a058 = 0;
  engine_dosio_cpp_splitPath_FUN_00465e50
            (&DAT_01d0cfc8,(char *)0x0,(char *)0x0,acStack_518,(char *)0x0);
  _sprintf(acStack_418,&DAT_005c0d12);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CAlphaBitmap_01d19bac,acStack_418,0x280,0x1e0)
  ;
  iVar3 = 9;
  iVar2 = 0;
  engine_alphabit_cpp_FUN_0040dbb0(&CAlphaBitmap_01d19bac,0xff);
  if (0 < _DAT_01d0d210) {
    pCVar1 = CAlphaBitmap_ARRAY_01d19bc0;
    do {
      iStack_18 = iVar2 * 0x2e4;
      _sprintf(acStack_318,"tab_%s");
      iStack_14 = iVar2 * 0x14;
      engine_dosio_cpp_splitPath_FUN_00465e50
                (acStack_318,(char *)0x0,(char *)0x0,acStack_118,(char *)0x0);
      _sprintf(acStack_218,&DAT_005c0d12);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar1,acStack_218,0x5a,0x36);
      *(uint *)(&SNotesSection_ARRAY_01d0d214[0].field_0x148 + iStack_18) = 0x215;
      *(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x14c + iStack_18) = iVar3;
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
      iVar3 = iVar3 + *(int *)((int)&CAlphaBitmap_ARRAY_01d19bc0[0].height + iStack_14) + 10;
    } while (iVar2 < _DAT_01d0d210);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c38,"pentip",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c4c,"pentipink",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c60,"xmarker",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c74,"questionmark",0x21,0x3f);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c88,"twanabox",0x80,0x4a);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19c9c,"ltarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19cb0,"rtarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19cc4,"fieldnotes_exit",0x1e,0x20);
  engine_alphabit_cpp_FUN_0040dbb0(&CAlphaBitmap_01d19cc4,0xff);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
            (&CAlphaBitmap_01d19cd8,"underline",0x100,8);
  DAT_005fe370 = 0;
  return;
}
