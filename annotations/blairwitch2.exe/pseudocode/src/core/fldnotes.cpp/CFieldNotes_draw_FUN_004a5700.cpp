// Name: core_fldnotes.cpp_CFieldNotes_draw_FUN_004a5700
// Address: 004a5700
// Address Range: [[004a5700, 004a5f58]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004a5700(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004a5700(CFieldNotes *this_ptr)

{
  int iVar1;
  SPageResource *pSVar2;
  char *text;
  SNotesSection *pSVar3;
  int iVar4;
  CAlphaBitmap *pCVar5;
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
  if (this_ptr->is_displayed == 0) {
    pCVar5 = CAlphaBitmap_ARRAY_01caf128;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf114);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1b4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1c8);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1dc);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1f0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf204);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf218);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf22c);
    g_INT_00616010 = 1;
    g_INT_01caf488 = 0;
    g_INT_00616040 = -1;
    g_INT_01caf568 = 0;
    g_CHAR_01caf4a0 = '\0';
    return;
  }
  if (g_INT_00616010 != 0) {
    pCVar5 = CAlphaBitmap_ARRAY_01caf128;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf114);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1a0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1b4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1c8);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1dc);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf1f0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf204);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf218);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d540(&CAlphaBitmap_01caf22c);
    g_INT_00616040 = -1;
    g_INT_00616010 = 1;
    g_INT_01caf488 = 0;
    g_INT_01caf568 = 0;
    g_CHAR_01caf4a0 = '\0';
    engine_dosio_cpp_splitPath_FUN_00461070
              (&g_CHAR_01cab7a8,(char *)0x0,(char *)0x0,local_420,(char *)0x0);
    _sprintf(local_320,"%s%s");
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CAlphaBitmap_01caf114,local_320,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar4 = 0;
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dd20(&CAlphaBitmap_01caf114,0xff);
    if (0 < g_INT_01cab9f0) {
      pCVar5 = CAlphaBitmap_ARRAY_01caf128;
      do {
        local_20 = iVar4 * 0x2e4;
        _sprintf(local_220,"tab_%s");
        local_1c = iVar4 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00461070
                  (local_220,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
        _sprintf(local_520,"%s%s");
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(pCVar5,local_520,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01cab9f4[0].entries + local_20 + -8) = iVar1;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 1;
        iVar1 = iVar1 + *(int *)((int)&CAlphaBitmap_ARRAY_01caf128[0].height + local_1c) + 10;
      } while (iVar4 < g_INT_01cab9f0);
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
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dd20(&CAlphaBitmap_01caf218,0xff);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
              (&CAlphaBitmap_01caf22c,"underline",0x100,8);
    g_INT_00616010 = 0;
  }
  if (g_INT_00616014 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a2890(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar4 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a27e0(&g_STextViewInstance);
    g_CHAR_ARRAY_01cab7f0[0] = '\0';
    if (0 < g_INT_01cab9f0) {
      pSVar3 = SNotesSection_ARRAY_01cab9f4;
      do {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a3740(pSVar3,&g_STextViewInstance);
        if (iVar1 == 0) goto LAB_004a57ae;
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < g_INT_01cab9f0);
    }
    g_INT_00616014 = 0;
  }
LAB_004a57ae:
  iVar4 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CAlphaBitmap_01caf114,0,0,0xffff);
  if (0 < g_INT_01cab9f0) {
    pSVar3 = SNotesSection_ARRAY_01cab9f4;
    do {
      if ((pSVar3->first_page <= g_INT_01caf110) &&
         (g_INT_01caf110 < pSVar3->first_page + pSVar3->page_count)) goto LAB_004a5802;
      iVar4 = iVar4 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar4 < g_INT_01cab9f0);
  }
  iVar4 = -1;
LAB_004a5802:
  iVar1 = 0;
  local_14 = iVar4;
  if (0 < g_INT_01cab9f0) {
    pSVar3 = SNotesSection_ARRAY_01cab9f4;
    pCVar5 = CAlphaBitmap_ARRAY_01caf128;
    do {
      if (iVar1 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
                  (pCVar5,pSVar3->tab_x + -2,pSVar3->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040dab0
                  (pCVar5,0x246,pSVar3->tab_y,0x246 - pSVar3->tab_x,0,
                   CAlphaBitmap_ARRAY_01caf128[iVar1].width + -1,
                   CAlphaBitmap_ARRAY_01caf128[iVar1].height + -1,0xffff);
      }
      pCVar5 = pCVar5 + 1;
      iVar1 = iVar1 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar1 < g_INT_01cab9f0);
  }
  g_INT_01caf568 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004a3240(&g_STextViewInstance,g_INT_01caf110);
  if (g_CGamePtr->letterbox_mode != 0) {
    g_CHAR_01caf4a0 = '\0';
    g_INT_00616040 = -1;
    g_INT_01caf568 = 0;
    g_INT_01caf488 = 0;
    return;
  }
  iVar4 = core_flashlit_cpp_hitTestSectionTab_FUN_004a1bb0(g_INT_01c2a37c,g_INT_01c2a380);
  if (-1 < iVar4) {
    core_flashlit_cpp_updateTooltip_FUN_004a1570(SNotesSection_ARRAY_01cab9f4[iVar4].title);
    local_18 = 1;
  }
  iVar4 = core_flashlit_cpp_hitTestPageArrows_FUN_004a1c60(g_INT_01c2a37c,g_INT_01c2a380);
  if (iVar4 != 0) {
    local_18 = 1;
  }
  pSVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a2730
                     (g_STextViewInstance.pages + g_INT_01caf110,g_INT_01c2a37c,g_INT_01c2a380);
  if ((pSVar2 != (SPageResource *)0x0) &&
     (iVar4 = (**(code **)((int)pSVar2->vtable + 8))
                        (pSVar2,0,g_INT_01c2a37c - pSVar2->x,g_INT_01c2a380 - pSVar2->y), iVar4 != 0
     )) {
    local_18 = 1;
  }
  if (0 < g_INT_01caf110) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf1f0,g_INT_00616018,g_INT_0061601c,0xffff);
  }
  if (g_INT_01caf110 < g_STextViewInstance.page_count + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf204,g_INT_00616020,g_INT_00616024,0xffff);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (&CAlphaBitmap_01caf218,g_INT_00616028,g_INT_0061602c,0xffff);
  if ((((g_INT_00616028 <= g_INT_01c2a37c) && (g_INT_0061602c <= g_INT_01c2a380)) &&
      (g_INT_01c2a37c < g_INT_00616028 + CAlphaBitmap_01caf218.width)) &&
     (g_INT_01c2a380 < CAlphaBitmap_01caf218.height + g_INT_0061602c)) {
    text = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Exit");
    core_flashlit_cpp_updateTooltip_FUN_004a1570(text);
    local_18 = 1;
  }
  if (-1 < g_INT_00616040) {
    if (g_INT_01caf568 == 0) {
      g_CHAR_01caf4a0 = '\0';
      g_INT_00616040 = -1;
      g_INT_01caf488 = g_INT_01caf568;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_00616040,g_INT_01caf48c,g_INT_01caf490 + -1,g_INT_01caf494 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004a8df0
                (g_CBitFont_PTR_01511cbc,&g_CHAR_01caf4a0,g_INT_01caf498,g_INT_01caf49c,0xff,-1);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
              (&CAlphaBitmap_01caf1a0,g_INT_01c2a37c - 0x0000001F,g_INT_01c2a380 - 0x00000001,
               0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900
            (&CAlphaBitmap_01caf1b4,g_INT_01c2a37c - 0x0000001F,g_INT_01c2a380 - 0x00000001,
             0xffff);
  return;
}
