// Name: core_fldnotes.cpp_FUN_004a5700
// Address: 004a5700
// Address Range: [[004a5700, 004a5f58]]
// Convention: unknown
// Signature: void core_fldnotes_cpp_FUN_004a5700(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fldnotes_cpp_FUN_004a5700(int param_1)

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
    pCVar6 = CAlphaBitmap_ARRAY_01caf128;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf114);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1b4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1c8);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1dc);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1f0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf204);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf218);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf22c);
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    DAT_00616040 = 0xffffffff;
    _DAT_01caf568 = 0;
    DAT_01caf4a0 = 0;
    return;
  }
  if (DAT_00616010 != 0) {
    pCVar6 = CAlphaBitmap_ARRAY_01caf128;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf114);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1b4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1c8);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1dc);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1f0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf204);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf218);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf22c);
    DAT_00616040 = -1;
    DAT_00616010 = 1;
    _DAT_01caf488 = 0;
    _DAT_01caf568 = 0;
    DAT_01caf4a0 = 0;
    engine_dosio_cpp_splitPath_FUN_00461070
              (&DAT_01cab7a8,(char *)0x0,(char *)0x0,local_420,(char *)0x0);
    _sprintf(local_320,&DAT_005d59e3);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CAlphaBitmap_01caf114,local_320,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar5 = 0;
    engine_alphabit_cpp_FUN_0040dd20(&CAlphaBitmap_01caf114,0xff);
    if (0 < _DAT_01cab9f0) {
      pCVar6 = CAlphaBitmap_ARRAY_01caf128;
      do {
        local_20 = iVar5 * 0x2e4;
        _sprintf(local_220,"tab_%s");
        local_1c = iVar5 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00461070
                  (local_220,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
        _sprintf(local_520,&DAT_005d59e3);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(pCVar6,local_520,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_20 + -8) = iVar1;
        iVar5 = iVar5 + 1;
        pCVar6 = pCVar6 + 1;
        iVar1 = iVar1 + *(int *)((int)&CAlphaBitmap_ARRAY_01caf128[0].height + local_1c) + 10;
      } while (iVar5 < _DAT_01cab9f0);
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
  }
  if (DAT_00616014 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
    DAT_01cab7f0 = 0;
    if (0 < _DAT_01cab9f0) {
      pSVar4 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(pSVar4,0x1caf240);
        if (iVar1 == 0) goto LAB_004a57ae;
        iVar5 = iVar5 + 1;
        pSVar4 = pSVar4 + 1;
      } while (iVar5 < _DAT_01cab9f0);
    }
    DAT_00616014 = 0;
  }
LAB_004a57ae:
  iVar5 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01caf114,0,0,0xffff);
  if (0 < _DAT_01cab9f0) {
    pSVar4 = SNotesSection_ARRAY_01cab9f4;
    do {
      if ((pSVar4->first_page <= _DAT_01caf110) &&
         (_DAT_01caf110 < pSVar4->first_page + pSVar4->page_count)) goto LAB_004a5802;
      iVar5 = iVar5 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar5 < _DAT_01cab9f0);
  }
  iVar5 = -1;
LAB_004a5802:
  iVar1 = 0;
  local_14 = iVar5;
  if (0 < _DAT_01cab9f0) {
    pSVar4 = SNotesSection_ARRAY_01cab9f4;
    pCVar6 = CAlphaBitmap_ARRAY_01caf128;
    do {
      if (iVar1 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                  (pCVar6,pSVar4->tab_x + -2,pSVar4->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
                  (pCVar6,0x246,pSVar4->tab_y,0x246 - pSVar4->tab_x,0,
                   CAlphaBitmap_ARRAY_01caf128[iVar1].width + -1,
                   CAlphaBitmap_ARRAY_01caf128[iVar1].height + -1,0xffff);
      }
      pCVar6 = pCVar6 + 1;
      iVar1 = iVar1 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar1 < _DAT_01cab9f0);
  }
  _DAT_01caf568 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004a3240(&g_STextViewInstance,_DAT_01caf110);
  if (g_CGamePtr->letterbox_mode != 0) {
    DAT_01caf4a0 = 0;
    DAT_00616040 = 0xffffffff;
    _DAT_01caf568 = 0;
    _DAT_01caf488 = 0;
    return;
  }
  iVar5 = core_flashlit_cpp_FUN_004a1bb0(_DAT_01c2a37c,_DAT_01c2a380);
  if (-1 < iVar5) {
    core_flashlit_cpp_FUN_004a1570(iVar5 * 0x2e4 + 0x1caba34);
    local_18 = 1;
  }
  iVar5 = core_flashlit_cpp_FUN_004a1c60(_DAT_01c2a37c,_DAT_01c2a380);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  piVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730
                     (g_STextViewInstance.pages + _DAT_01caf110,_DAT_01c2a37c,_DAT_01c2a380);
  if ((piVar2 != (int *)0x0) &&
     (iVar5 = (**(code **)(piVar2[5] + 8))
                        (piVar2,0,_DAT_01c2a37c - *piVar2,_DAT_01c2a380 - piVar2[1]), iVar5 != 0)) {
    local_18 = 1;
  }
  if (0 < _DAT_01caf110) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf1f0,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01caf110 < g_STextViewInstance.page_count + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf204,0x000001F4,0x000001AE,0xffff);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (&CAlphaBitmap_01caf218,0x00000262,0x000001C0,0xffff);
  if ((((0x00000262 <= _DAT_01c2a37c) && (0x000001C0 <= _DAT_01c2a380)) &&
      (_DAT_01c2a37c < 0x00000262 + CAlphaBitmap_01caf218.width)) &&
     (_DAT_01c2a380 < CAlphaBitmap_01caf218.height + 0x000001C0)) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80(&DAT_005d645b);
    core_flashlit_cpp_FUN_004a1570(pcVar3);
    local_18 = 1;
  }
  if (-1 < DAT_00616040) {
    if (_DAT_01caf568 == 0) {
      DAT_01caf4a0 = 0;
      DAT_00616040 = -1;
      _DAT_01caf488 = _DAT_01caf568;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (DAT_00616040,_DAT_01caf48c,_DAT_01caf490 + -1,_DAT_01caf494 + -1,0);
      engine_font_cpp_FUN_004a8df0
                (_DAT_01511cbc,&DAT_01caf4a0,_DAT_01caf498,_DAT_01caf49c,0xff,0xffffffff);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf1a0,_DAT_01c2a37c - 0x0000001F,_DAT_01c2a380 - 0x00000001,
               0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (&CAlphaBitmap_01caf1b4,_DAT_01c2a37c - 0x0000001F,_DAT_01c2a380 - 0x00000001,0xffff
            );
  return;
}
