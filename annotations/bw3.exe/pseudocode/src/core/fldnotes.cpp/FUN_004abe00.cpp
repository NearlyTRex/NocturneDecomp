// Name: core_fldnotes.cpp_FUN_004abe00
// Address: 004abe00
// Address Range: [[004abe00, 004ac6ae]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004abe00(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004abe00(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  SNotesSection *pSVar4;
  int iVar5;
  CAlphaBitmap *pCVar6;
  char local_520 [256];
  char local_420 [256];
  char local_320 [256];
  char local_220 [256];
  char local_120 [256];
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  local_18 = 0;
  if (*(int *)(param_1 + 0x40) == 0) {
    pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_FUN_0040d400(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    return;
  }
  if (DAT_005fe370 != 0) {
    pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_FUN_0040d400(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    DAT_005fe3a8 = -1;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    engine_dosio_cpp_FUN_00465e50(&DAT_01d0cfc8,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
    FUN_005a28c0(local_520,&DAT_005c0d12,local_120,&DAT_01d0cfa8);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CAlphaBitmap_01d19bac,local_520,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar5 = 0;
    engine_alphabit_cpp_FUN_0040dbb0(&CAlphaBitmap_01d19bac,0xff);
    if (0 < _DAT_01d0d210) {
      pSVar4 = SNotesSection_ARRAY_01d0d214;
      pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
      do {
        local_20 = iVar5 * 0x2e4;
        FUN_005a28c0(local_420,"tab_%s",pSVar4);
        local_1c = iVar5 * 0x14;
        engine_dosio_cpp_FUN_00465e50(local_420,(char *)0x0,(char *)0x0,local_220,(char *)0x0);
        FUN_005a28c0(local_320,&DAT_005c0d12,local_220,&DAT_01d0cfa8);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar6,local_320,0x5a,0x36);
        *(uint *)(&SNotesSection_ARRAY_01d0d214[0].field_0x148 + local_20) = 0x215;
        *(int *)(&SNotesSection_ARRAY_01d0d214[0].field_0x14c + local_20) = iVar1;
        pSVar4 = pSVar4 + 1;
        iVar5 = iVar5 + 1;
        pCVar6 = pCVar6 + 1;
        iVar1 = iVar1 + *(int *)(&CAlphaBitmap_ARRAY_01d19bc0[0].field_0x10 + local_1c) + 10;
      } while (iVar5 < _DAT_01d0d210);
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
  }
  DAT_01d19cf0 = '\0';
  if (DAT_005fe374 != 0) {
    core_fldnotes_cpp_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    core_fldnotes_cpp_FUN_004a8e00(&g_STextViewInstance);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      pSVar4 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar1 = core_fldnotes_cpp_FUN_004a9d90(pSVar4,&g_STextViewInstance);
        if (iVar1 == 0) break;
        iVar5 = iVar5 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar5 < _DAT_01d0d210);
    }
  }
  iVar5 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d19bac,0,0,0xffff);
  if (0 < _DAT_01d0d210) {
    pSVar4 = SNotesSection_ARRAY_01d0d214;
    do {
      if ((*(int *)&pSVar4->field_0x140 <= _DAT_01d19ba8) &&
         (_DAT_01d19ba8 < *(int *)&pSVar4->field_0x140 + *(int *)&pSVar4->field_0x144))
      goto LAB_004abf0c;
      iVar5 = iVar5 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar5 < _DAT_01d0d210);
  }
  iVar5 = -1;
LAB_004abf0c:
  iVar1 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01d0d210) {
    pSVar4 = SNotesSection_ARRAY_01d0d214;
    pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
    do {
      if (iVar1 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                  (pCVar6,*(int *)&pSVar4->field_0x148 + -2,*(int *)&pSVar4->field_0x14c + -2,0xffff
                  );
      }
      else {
        engine_alphabit_cpp_FUN_0040d8a0
                  (pCVar6,0x246,*(uint *)&pSVar4->field_0x14c,
                   0x246 - *(int *)&pSVar4->field_0x148,0,
                   *(int *)&CAlphaBitmap_ARRAY_01d19bc0[iVar1].field_0xc + -1,
                   *(int *)&CAlphaBitmap_ARRAY_01d19bc0[iVar1].field_0x10 + -1,0xffff);
      }
      pCVar6 = pCVar6 + 1;
      iVar1 = iVar1 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar1 < _DAT_01d0d210);
  }
  _DAT_01d1a058 = 0;
  core_fldnotes_cpp_FUN_004a98b0(&g_STextViewInstance,_DAT_01d19ba8);
  if (*(int *)&g_CGamePtr->field_0x24c != 0) {
    DAT_01d19f90 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    _DAT_01d19f78 = 0;
    return;
  }
  iVar5 = unkaddr_004a76f0_cpp_FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
  if (-1 < iVar5) {
    unkaddr_004a76f0_cpp_FUN_004a7a70(iVar5 * 0x2e4 + 0x1d0d254);
    local_18 = 1;
  }
  iVar5 = unkaddr_004a76f0_cpp_FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = (int *)core_fldnotes_cpp_FUN_004a8d50
                            (_DAT_01d19ba8 * 0x144 + g_STextViewInstance._60_4_,_DAT_01c5fadc,
                             _DAT_01c5fae0);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c5fadc - *piVar2,_DAT_01c5fae0 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01d19ba8) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19c9c,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01d19ba8 < g_STextViewInstance._56_4_ + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19cb0,0x000001F4,0x000001AE,0xffff);
  }
  if (DAT_01d19cf0 != '\0') {
    engine_font_cpp_FUN_004b0a20(_DAT_01549ac0,&DAT_01d19cf0,0x000000FA,0x000001AE,0,0xffffffff)
    ;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d19cc4,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c5fadc) && (0x000001C0 <= _DAT_01c5fae0)) &&
      (_DAT_01c5fadc < 0x00000262 + CAlphaBitmap_01d19cc4._12_4_)) &&
     (_DAT_01c5fae0 < 0x000001C0 + CAlphaBitmap_01d19cc4._16_4_)) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c17b4);
    unkaddr_004a76f0_cpp_FUN_004a7a70(pcVar3);
    local_18 = 1;
  }
  if (-1 < DAT_005fe3a8) {
    if (_DAT_01d1a058 == 0) {
      DAT_01d19f90 = 0;
      DAT_005fe3a8 = -1;
      _DAT_01d19f78 = _DAT_01d1a058;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_005fe3a8,_DAT_01d19f7c,_DAT_01d19f80 + -1,_DAT_01d19f84 + -1,0);
      engine_font_cpp_FUN_004b0a20
                (_DAT_01549aa4,&DAT_01d19f90,_DAT_01d19f88,_DAT_01d19f8c,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19c38,_DAT_01c5fadc - 0x0000001F,_DAT_01c5fae0 - 0x00000001,
               0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d19c4c,_DAT_01c5fadc - 0x0000001F,_DAT_01c5fae0 - 0x00000001,0xffff
            );
  return;
}
