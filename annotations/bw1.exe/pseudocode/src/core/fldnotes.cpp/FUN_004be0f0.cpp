// Name: core_fldnotes.cpp_FUN_004be0f0
// Address: 004be0f0
// Address Range: [[004be0f0, 004be961]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004be0f0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004be0f0(int param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  char *pcVar3;
  SNotesSection *pSVar4;
  int iVar5;
  int iVar6;
  CAlphaBitmap *pCVar7;
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
    pCVar7 = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(pCVar7);
      pCVar7 = pCVar7 + 1;
    } while (pCVar7 != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    DAT_0061d310 = 0xffffffff;
    _DAT_01cc8000 = 0;
    DAT_01cc7f38 = 0;
    return;
  }
  if (DAT_0061d2e0 != 0) {
    pCVar7 = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(pCVar7);
      pCVar7 = pCVar7 + 1;
    } while (pCVar7 != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    DAT_0061d310 = -1;
    DAT_0061d2e0 = 1;
    _DAT_01cc7f1c = 0;
    _DAT_01cc8000 = 0;
    DAT_01cc7f38 = 0;
    engine_dosio_cpp_splitPath_FUN_00479580
              (&DAT_01cc4228,(char *)0x0,(char *)0x0,local_420,(char *)0x0);
    _sprintf(local_320,&DAT_005df825);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&CAlphaBitmap_01cc7b94,local_320,0x280,0x1e0)
    ;
    iVar6 = 9;
    iVar5 = 0;
    engine_alphabit_cpp_FUN_0040d970(&CAlphaBitmap_01cc7b94,0xff);
    if (0 < _DAT_01cc4470) {
      pCVar7 = CAlphaBitmap_ARRAY_01cc7ba8;
      do {
        local_20 = iVar5 * 0x2e4;
        _sprintf(local_220,"tab_%s");
        local_1c = iVar5 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00479580
                  (local_220,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
        _sprintf(local_520,&DAT_005df825);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(pCVar7,local_520,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_20 + -8) = iVar6;
        iVar5 = iVar5 + 1;
        pCVar7 = pCVar7 + 1;
        iVar6 = iVar6 + *(int *)((int)&CAlphaBitmap_ARRAY_01cc7ba8[0].height + local_1c) + 10;
      } while (iVar5 < _DAT_01cc4470);
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
  }
  if (DAT_0061d2e4 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar4 = SNotesSection_ARRAY_01cc4474;
      do {
        bVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(pSVar4,0x1cc7cd4);
        if (CONCAT31(extraout_var,bVar1) == 0) break;
        iVar5 = iVar5 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar5 < _DAT_01cc4470);
    }
  }
  iVar5 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01cc7b94,0,0,0xffff);
  if (0 < _DAT_01cc4470) {
    pSVar4 = SNotesSection_ARRAY_01cc4474;
    do {
      if ((pSVar4->first_page <= _DAT_01cc7b90) &&
         (_DAT_01cc7b90 < pSVar4->first_page + pSVar4->page_count)) goto LAB_004be1f2;
      iVar5 = iVar5 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar5 < _DAT_01cc4470);
  }
  iVar5 = -1;
LAB_004be1f2:
  iVar6 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01cc4470) {
    pSVar4 = SNotesSection_ARRAY_01cc4474;
    pCVar7 = CAlphaBitmap_ARRAY_01cc7ba8;
    do {
      if (iVar6 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
                  (pCVar7,pSVar4->tab_x + -2,pSVar4->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_FUN_0040d660
                  (pCVar7,0x246,pSVar4->tab_y,0x246 - pSVar4->tab_x,0,
                   CAlphaBitmap_ARRAY_01cc7ba8[iVar6].width + -1,
                   CAlphaBitmap_ARRAY_01cc7ba8[iVar6].height + -1,0xffff);
      }
      pCVar7 = pCVar7 + 1;
      iVar6 = iVar6 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar6 < _DAT_01cc4470);
  }
  _DAT_01cc8000 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(&g_STextViewInstance,_DAT_01cc7b90);
  if (g_CGamePtr->letterbox_mode != 0) {
    DAT_01cc7f38 = 0;
    DAT_0061d310 = 0xffffffff;
    _DAT_01cc8000 = 0;
    _DAT_01cc7f1c = 0;
    return;
  }
  iVar5 = core_flashlit_cpp_FUN_004ba490(_DAT_01c4353c,_DAT_01c43540);
  if (-1 < iVar5) {
    core_flashlit_cpp_FUN_004b9e30(iVar5 * 0x2e4 + 0x1cc44b4);
    local_18 = 1;
  }
  iVar5 = core_flashlit_cpp_FUN_004ba540(_DAT_01c4353c,_DAT_01c43540);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004bb110
                     (g_STextViewInstance.pages + _DAT_01cc7b90,_DAT_01c4353c,_DAT_01c43540);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c4353c - *piVar2,_DAT_01c43540 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01cc7b90) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c84,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01cc7b90 < g_STextViewInstance.page_count + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c98,0x000001F4,0x000001AE,0xffff);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (&CAlphaBitmap_01cc7cac,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c4353c) && (0x000001C0 <= _DAT_01c43540)) &&
      (_DAT_01c4353c < 0x00000262 + CAlphaBitmap_01cc7cac.width)) &&
     (_DAT_01c43540 < CAlphaBitmap_01cc7cac.height + 0x000001C0)) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090(&DAT_005e02c5);
    core_flashlit_cpp_FUN_004b9e30(pcVar3);
    local_18 = 1;
  }
  if (-1 < DAT_0061d310) {
    if (_DAT_01cc8000 == 0) {
      DAT_01cc7f38 = 0;
      DAT_0061d310 = -1;
      _DAT_01cc7f1c = _DAT_01cc8000;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_0061d310,_DAT_01cc7f20,_DAT_01cc7f24 + -1,_DAT_01cc7f28 + -1,0);
      engine_font_cpp_FUN_004c1dd0
                (_DAT_0152d240,&DAT_01cc7f38,_DAT_01cc7f2c,_DAT_01cc7f30,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c20,_DAT_01c4353c - 0x0000001F,_DAT_01c43540 - 0x00000001,
               0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (&CAlphaBitmap_01cc7c34,_DAT_01c4353c - 0x0000001F,_DAT_01c43540 - 0x00000001,0xffff
            );
  return;
}
