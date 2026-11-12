// Name: core_flashlit.cpp_FUN_004ba130
// Address: 004ba130
// Address Range: [[004ba130, 004ba430]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004ba130(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_flashlit_cpp_FUN_004ba130(void)

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
  
  pCVar1 = CAlphaBitmap_ARRAY_01cc7ba8;
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
  do {
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(pCVar1);
    pCVar1 = pCVar1 + 1;
  } while (pCVar1 != &CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
  engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
  DAT_01cc7f38 = 0;
  DAT_0061d310 = 0xffffffff;
  DAT_0061d2e0 = 1;
  _DAT_01cc7f1c = 0;
  _DAT_01cc8000 = 0;
  engine_dosio_cpp_splitPath_FUN_00479580
            (&DAT_01cc4228,(char *)0x0,(char *)0x0,acStack_518,(char *)0x0);
  _sprintf(acStack_418,&DAT_005df825);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&CAlphaBitmap_01cc7b94,acStack_418,0x280,0x1e0)
  ;
  iVar3 = 9;
  iVar2 = 0;
  engine_alphabit_cpp_FUN_0040d970(&CAlphaBitmap_01cc7b94,0xff);
  if (0 < _DAT_01cc4470) {
    pCVar1 = CAlphaBitmap_ARRAY_01cc7ba8;
    do {
      iStack_18 = iVar2 * 0x2e4;
      _sprintf(acStack_318,"tab_%s");
      iStack_14 = iVar2 * 0x14;
      engine_dosio_cpp_splitPath_FUN_00479580
                (acStack_318,(char *)0x0,(char *)0x0,acStack_118,(char *)0x0);
      _sprintf(acStack_218,&DAT_005df825);
      engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(pCVar1,acStack_218,0x5a,0x36);
      *(uint *)((int)SNotesSection_ARRAY_01cc4474[0].entries + iStack_18 + -0xc) = 0x215;
      *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + iStack_18 + -8) = iVar3;
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
      iVar3 = iVar3 + *(int *)((int)&CAlphaBitmap_ARRAY_01cc7ba8[0].height + iStack_14) + 10;
    } while (iVar2 < _DAT_01cc4470);
  }
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c20,"pentipink",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c34,"pentip",0x20,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c48,"xmarker",0x10,0x10);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c5c,"questionmark",0x21,0x3f);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c70,"twanabox",0x80,0x4a);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c84,"ltarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7c98,"rtarrow",0x40,0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7cac,"fieldnotes_exit",0x1e,0x20);
  engine_alphabit_cpp_FUN_0040d970(&CAlphaBitmap_01cc7cac,0xff);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
            (&CAlphaBitmap_01cc7cc0,"underline",0x100,8);
  DAT_0061d2e0 = 0;
  return;
}
