// Name: core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00
// Address: 004abe00
// Address Range: [[004abe00, 004ac6ae]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004abe00(CFieldNotes *this_ptr)

#include "nocturne.h"

void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004abe00(CFieldNotes *this_ptr)

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
    pCVar5 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    g_INT_005fe370 = 1;
    g_INT_01d19f78 = 0;
    g_INT_005fe3a8 = -1;
    g_INT_01d1a058 = 0;
    g_CHAR_01d19f90 = '\0';
    return;
  }
  if (g_INT_005fe370 != 0) {
    pCVar5 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar5);
      pCVar5 = pCVar5 + 1;
    } while (pCVar5 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    g_INT_005fe3a8 = -1;
    g_INT_005fe370 = 1;
    g_INT_01d19f78 = 0;
    g_INT_01d1a058 = 0;
    g_CHAR_01d19f90 = '\0';
    engine_dosio_cpp_splitPath_FUN_00465e50
              (&g_CHAR_01d0cfc8,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
    _sprintf(local_520,"%s%s");
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CAlphaBitmap_01d19bac,local_520,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar4 = 0;
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dbb0(&CAlphaBitmap_01d19bac,0xff);
    if (0 < g_INT_01d0d210) {
      pCVar5 = CAlphaBitmap_ARRAY_01d19bc0;
      do {
        local_20 = iVar4 * 0x2e4;
        _sprintf(local_420,"tab_%s");
        local_1c = iVar4 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00465e50
                  (local_420,(char *)0x0,(char *)0x0,local_220,(char *)0x0);
        _sprintf(local_320,"%s%s");
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar5,local_320,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_20 + -8) = iVar1;
        iVar4 = iVar4 + 1;
        pCVar5 = pCVar5 + 1;
        iVar1 = iVar1 + *(int *)((int)&CAlphaBitmap_ARRAY_01d19bc0[0].height + local_1c) + 10;
      } while (iVar4 < g_INT_01d0d210);
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
    engine_alphabit_cpp_CAlphaBitmap_fillOpa_FUN_0040dbb0(&CAlphaBitmap_01d19cc4,0xff);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (&CAlphaBitmap_01d19cd8,"underline",0x100,8);
    g_INT_005fe370 = 0;
  }
  g_CHAR_ARRAY_01d19cf0[0] = '\0';
  if (g_INT_005fe374 != 0) {
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar4 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    g_INT_005fe374 = 0;
    g_CHAR_ARRAY_01d0d010[0] = '\0';
    if (0 < g_INT_01d0d210) {
      pSVar3 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(pSVar3,&g_STextViewInstance);
        if (iVar1 == 0) break;
        iVar4 = iVar4 + 1;
        pSVar3 = pSVar3 + 1;
      } while (iVar4 < g_INT_01d0d210);
    }
  }
  iVar4 = 0;
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0(&CAlphaBitmap_01d19bac,0,0,0xffff);
  if (0 < g_INT_01d0d210) {
    pSVar3 = SNotesSection_ARRAY_01d0d214;
    do {
      if ((pSVar3->first_page <= g_INT_01d19ba8) &&
         (g_INT_01d19ba8 < pSVar3->first_page + pSVar3->page_count)) goto LAB_004abf0c;
      iVar4 = iVar4 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar4 < g_INT_01d0d210);
  }
  iVar4 = -1;
LAB_004abf0c:
  iVar1 = 0;
  local_14 = iVar4;
  if (0 < g_INT_01d0d210) {
    pSVar3 = SNotesSection_ARRAY_01d0d214;
    pCVar5 = CAlphaBitmap_ARRAY_01d19bc0;
    do {
      if (iVar1 == local_14) {
        engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
                  (pCVar5,pSVar3->tab_x + -2,pSVar3->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_CAlphaBitmap_render_FUN_0040d8a0
                  (pCVar5,0x246,pSVar3->tab_y,0x246 - pSVar3->tab_x,0,
                   CAlphaBitmap_ARRAY_01d19bc0[iVar1].width + -1,
                   CAlphaBitmap_ARRAY_01d19bc0[iVar1].height + -1,0xffff);
      }
      pCVar5 = pCVar5 + 1;
      iVar1 = iVar1 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar1 < g_INT_01d0d210);
  }
  g_INT_01d1a058 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(&g_STextViewInstance,g_INT_01d19ba8);
  if (g_CGamePtr->letterbox_mode != 0) {
    g_CHAR_01d19f90 = '\0';
    g_INT_005fe3a8 = -1;
    g_INT_01d1a058 = 0;
    g_INT_01d19f78 = 0;
    return;
  }
  iVar4 = core_flashlit_cpp_hitTestSectionTab_FUN_004a80d0(g_MouseX,g_MouseY);
  if (-1 < iVar4) {
    core_flashlit_cpp_updateTooltip_FUN_004a7a70(SNotesSection_ARRAY_01d0d214[iVar4].title);
    local_18 = 1;
  }
  iVar4 = core_flashlit_cpp_hitTestPageArrows_FUN_004a8180(g_MouseX,g_MouseY);
  if (iVar4 != 0) {
    local_18 = 1;
  }
  pSVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a8d50
                     (g_STextViewInstance.pages + g_INT_01d19ba8,g_MouseX,g_MouseY);
  if ((pSVar2 != (SPageResource *)0x0) &&
     (iVar4 = (**(code **)((int)pSVar2->vtable + 8))
                        (pSVar2,0,g_MouseX - pSVar2->x,g_MouseY - pSVar2->y), iVar4 != 0)) {
    local_18 = 1;
  }
  if (0 < g_INT_01d19ba8) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19c9c,g_INT_005fe378,g_INT_005fe37c,0xffff);
  }
  if (g_INT_01d19ba8 < g_STextViewInstance.page_count + -2) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19cb0,g_INT_005fe380,g_INT_005fe384,0xffff);
  }
  if (g_CHAR_ARRAY_01d19cf0[0] != '\0') {
    engine_font_cpp_CBitFont_drawText_FUN_004b0a20
              (g_CBitFont_PTR_01549ac0,g_CHAR_ARRAY_01d19cf0,g_INT_005fe388,g_INT_005fe38c,0,-1);
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d19cc4,g_INT_005fe390,g_INT_005fe394,0xffff);
  if ((((g_INT_005fe390 <= g_MouseX) && (g_INT_005fe394 <= g_MouseY)) &&
      (g_MouseX < g_INT_005fe390 + CAlphaBitmap_01d19cc4.width)) &&
     (g_MouseY < g_INT_005fe394 + CAlphaBitmap_01d19cc4.height)) {
    text = support_newmsg_cpp_getLocalizedString_FUN_00508960("Exit");
    core_flashlit_cpp_updateTooltip_FUN_004a7a70(text);
    local_18 = 1;
  }
  if (-1 < g_INT_005fe3a8) {
    if (g_INT_01d1a058 == 0) {
      g_CHAR_01d19f90 = '\0';
      g_INT_005fe3a8 = -1;
      g_INT_01d19f78 = g_INT_01d1a058;
    }
    else {
      engine_2d_c_fillRectColor_FUN_004031c0
                (g_INT_005fe3a8,g_INT_01d19f7c,g_INT_01d19f80 + -1,g_INT_01d19f84 + -1,0);
      engine_font_cpp_CBitFont_drawText_FUN_004b0a20
                (g_TinyFont,&g_CHAR_01d19f90,g_INT_01d19f88,g_INT_01d19f8c,0xff,-1);
    }
  }
  if (local_18 == 0) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19c38,g_MouseX - 0x0000001F,g_MouseY - 0x00000001,0xffff);
    return;
  }
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
            (&CAlphaBitmap_01d19c4c,g_MouseX - 0x0000001F,g_MouseY - 0x00000001,0xffff);
  return;
}
