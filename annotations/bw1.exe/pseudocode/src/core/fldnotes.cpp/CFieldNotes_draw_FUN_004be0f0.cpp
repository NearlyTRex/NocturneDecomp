// Name: core_fldnotes.cpp_CFieldNotes_draw_FUN_004be0f0
// Address: 004be0f0
// Address Range: [[004be0f0, 004be961]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004be0f0(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004be0f0(CFieldNotes *this_ptr)

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
    pCVar5 = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    g_INT_0061d2e0 = 1;
    g_INT_01cc7f1c = 0;
    g_INT_0061d310 = -1;
    g_INT_01cc8000 = 0;
    g_CHAR_01cc7f38 = '\0';
    return;
  }
  if (g_INT_0061d2e0 != 0) {
    pCVar5 = CAlphaBitmap_ARRAY_01cc7ba8;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7b94);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c20);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c34);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c48);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c5c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c84);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7c98);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cac);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d1c0(&CAlphaBitmap_01cc7cc0);
    g_INT_0061d310 = -1;
    g_INT_0061d2e0 = 1;
    g_INT_01cc7f1c = 0;
    g_INT_01cc8000 = 0;
    g_CHAR_01cc7f38 = '\0';
    engine_dosio_cpp_splitPath_FUN_00479580
              (&g_CHAR_01cc4228,(char *)0x0,(char *)0x0,local_420,(char *)0x0);
    _sprintf(local_320,"%s%s");
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&CAlphaBitmap_01cc7b94,local_320,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar4 = 0;
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040d970(&CAlphaBitmap_01cc7b94,0xff);
    if (0 < g_INT_01cc4470) {
      pCVar5 = CAlphaBitmap_ARRAY_01cc7ba8;
      do {
        local_20 = iVar4 * 0x2e4;
        _sprintf(local_220,"tab_%s");
        local_1c = iVar4 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00479580
                  (local_220,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
        _sprintf(local_520,"%s%s");
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(pCVar5,local_520,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01cc4474[0].entries + local_20 + -8) = iVar1;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 1;
        iVar1 = iVar1 + *(int *)((int)&CAlphaBitmap_ARRAY_01cc7ba8[0].height + local_1c) + 10;
      } while (iVar4 < g_INT_01cc4470);
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
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040d970(&CAlphaBitmap_01cc7cac,0xff);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (&CAlphaBitmap_01cc7cc0,"underline",0x100,8);
    g_INT_0061d2e0 = 0;
  }
  if (g_INT_0061d2e4 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar4 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004bb1c0(&g_STextViewInstance);
    g_INT_0061d2e4 = 0;
    g_CHAR_ARRAY_01cc4270[0] = '\0';
    if (0 < g_INT_01cc4470) {
      pSVar3 = SNotesSection_ARRAY_01cc4474;
      do {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004bc130(pSVar3,&g_STextViewInstance);
        if (iVar1 == 0) break;
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < g_INT_01cc4470);
    }
  }
  iVar4 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0(&CAlphaBitmap_01cc7b94,0,0,0xffff);
  if (0 < g_INT_01cc4470) {
    pSVar3 = SNotesSection_ARRAY_01cc4474;
    do {
      if ((pSVar3->first_page <= g_INT_01cc7b90) &&
         (g_INT_01cc7b90 < pSVar3->first_page + pSVar3->page_count)) goto LAB_004be1f2;
      iVar4 = iVar4 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar4 < g_INT_01cc4470);
  }
  iVar4 = -1;
LAB_004be1f2:
  iVar1 = 0;
  local_14 = iVar4;
  if (0 < g_INT_01cc4470) {
    pSVar3 = SNotesSection_ARRAY_01cc4474;
    pCVar5 = CAlphaBitmap_ARRAY_01cc7ba8;
    do {
      if (iVar1 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
                  (pCVar5,pSVar3->tab_x + -2,pSVar3->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d660
                  (pCVar5,0x246,pSVar3->tab_y,0x246 - pSVar3->tab_x,0,
                   CAlphaBitmap_ARRAY_01cc7ba8[iVar1].width + -1,
                   CAlphaBitmap_ARRAY_01cc7ba8[iVar1].height + -1,0xffff);
      }
      pCVar5 = pCVar5 + 1;
      iVar1 = iVar1 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar1 < g_INT_01cc4470);
  }
  g_INT_01cc8000 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004bbc70(&g_STextViewInstance,g_INT_01cc7b90);
  if (g_CGamePtr->letterbox_mode != 0) {
    g_CHAR_01cc7f38 = '\0';
    g_INT_0061d310 = -1;
    g_INT_01cc8000 = 0;
    g_INT_01cc7f1c = 0;
    return;
  }
  iVar4 = core_flashlit_cpp_hitTestSectionTab_FUN_004ba490(g_INT_01c4353c,g_INT_01c43540);
  if (-1 < iVar4) {
    core_flashlit_cpp_updateTooltip_FUN_004b9e30(SNotesSection_ARRAY_01cc4474[iVar4].title);
    local_18 = 1;
  }
  iVar4 = core_flashlit_cpp_hitTestPageArrows_FUN_004ba540(g_INT_01c4353c,g_INT_01c43540);
  if (iVar4 != 0) {
    local_18 = 1;
  }
  pSVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004bb110
                     (g_STextViewInstance.pages + g_INT_01cc7b90,g_INT_01c4353c,g_INT_01c43540);
  if ((pSVar2 != (SPageResource *)0x0) &&
     (iVar4 = (**(code **)((int)pSVar2->vtable + 8))
                        (pSVar2,0,g_INT_01c4353c - pSVar2->x,g_INT_01c43540 - pSVar2->y), iVar4 != 0
     )) {
    local_18 = 1;
  }
  if (0 < g_INT_01cc7b90) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c84,g_INT_0061d2e8,g_INT_0061d2ec,0xffff);
  }
  if (g_INT_01cc7b90 < g_STextViewInstance.page_count + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c98,g_INT_0061d2f0,g_INT_0061d2f4,0xffff);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (&CAlphaBitmap_01cc7cac,g_INT_0061d2f8,g_INT_0061d2fc,0xffff);
  if ((((g_INT_0061d2f8 <= g_INT_01c4353c) && (g_INT_0061d2fc <= g_INT_01c43540)) &&
      (g_INT_01c4353c < g_INT_0061d2f8 + CAlphaBitmap_01cc7cac.width)) &&
     (g_INT_01c43540 < CAlphaBitmap_01cc7cac.height + g_INT_0061d2fc)) {
    text = support_newmsg_cpp_getLocalizedString_FUN_00531090("Exit");
    core_flashlit_cpp_updateTooltip_FUN_004b9e30(text);
    local_18 = 1;
  }
  if (-1 < g_INT_0061d310) {
    if (g_INT_01cc8000 == 0) {
      g_CHAR_01cc7f38 = '\0';
      g_INT_0061d310 = -1;
      g_INT_01cc7f1c = g_INT_01cc8000;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_0061d310,g_INT_01cc7f20,g_INT_01cc7f24 + -1,g_INT_01cc7f28 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004c1dd0
                (g_CBitFont_PTR_0152d240,&g_CHAR_01cc7f38,g_INT_01cc7f2c,g_INT_01cc7f30,0xff,-1);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
              (&CAlphaBitmap_01cc7c20,g_INT_01c4353c - 0x0000001F,g_INT_01c43540 - 0x00000001,
               0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d4b0
            (&CAlphaBitmap_01cc7c34,g_INT_01c4353c - 0x0000001F,g_INT_01c43540 - 0x00000001,
             0xffff);
  return;
}
