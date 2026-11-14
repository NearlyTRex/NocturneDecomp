// Name: core_fldnotes.cpp_CFieldNotes_draw_FUN_004abe00
// Address: 004abe00
// Address Range: [[004abe00, 004ac6ae]]
// Convention: __cdecl
// Signature: void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004abe00(CFieldNotes *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fldnotes_cpp_CFieldNotes_draw_FUN_004abe00(CFieldNotes *this_ptr)

{
  int iVar1;
  SPageResource *pSVar2;
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
  if (this_ptr->is_displayed == 0) {
    pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    return;
  }
  if (DAT_005fe370 != 0) {
    pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19bac);
    do {
      engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(pCVar6);
      pCVar6 = pCVar6 + 1;
    } while (pCVar6 != &CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c38);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c4c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c60);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c74);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19c9c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cb0);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cc4);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040d400(&CAlphaBitmap_01d19cd8);
    DAT_005fe3a8 = -1;
    DAT_005fe370 = 1;
    _DAT_01d19f78 = 0;
    _DAT_01d1a058 = 0;
    DAT_01d19f90 = 0;
    engine_dosio_cpp_splitPath_FUN_00465e50
              (&DAT_01d0cfc8,(char *)0x0,(char *)0x0,local_120,(char *)0x0);
    _sprintf(local_520,&DAT_005c0d12);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&CAlphaBitmap_01d19bac,local_520,0x280,0x1e0)
    ;
    iVar1 = 9;
    iVar5 = 0;
    engine_alphabit_cpp_FUN_0040dbb0(&CAlphaBitmap_01d19bac,0xff);
    if (0 < _DAT_01d0d210) {
      pCVar6 = CAlphaBitmap_ARRAY_01d19bc0;
      do {
        local_20 = iVar5 * 0x2e4;
        _sprintf(local_420,"tab_%s");
        local_1c = iVar5 * 0x14;
        engine_dosio_cpp_splitPath_FUN_00465e50
                  (local_420,(char *)0x0,(char *)0x0,local_220,(char *)0x0);
        _sprintf(local_320,&DAT_005c0d12);
        engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(pCVar6,local_320,0x5a,0x36);
        *(uint *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_20 + -0xc) = 0x215;
        *(int *)((int)SNotesSection_ARRAY_01d0d214[0].entries + local_20 + -8) = iVar1;
        iVar5 = iVar5 + 1;
        pCVar6 = pCVar6 + 1;
        iVar1 = iVar1 + *(int *)((int)&CAlphaBitmap_ARRAY_01d19bc0[0].height + local_1c) + 10;
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
    core_fldnotes_cpp_STextView_setRect_FUN_004a8eb0(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar5 = 0;
    core_fldnotes_cpp_STextView_reset_FUN_004a8e00(&g_STextViewInstance);
    DAT_005fe374 = 0;
    DAT_01d0d010 = 0;
    if (0 < _DAT_01d0d210) {
      pSVar4 = SNotesSection_ARRAY_01d0d214;
      do {
        iVar1 = core_fldnotes_cpp_SNotesSection_layout_FUN_004a9d90(pSVar4,&g_STextViewInstance);
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
      if ((pSVar4->first_page <= _DAT_01d19ba8) &&
         (_DAT_01d19ba8 < pSVar4->first_page + pSVar4->page_count)) goto LAB_004abf0c;
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
                  (pCVar6,pSVar4->tab_x + -2,pSVar4->tab_y + -2,0xffff);
      }
      else {
        engine_alphabit_cpp_FUN_0040d8a0
                  (pCVar6,0x246,pSVar4->tab_y,0x246 - pSVar4->tab_x,0,
                   CAlphaBitmap_ARRAY_01d19bc0[iVar1].width + -1,
                   CAlphaBitmap_ARRAY_01d19bc0[iVar1].height + -1,0xffff);
      }
      pCVar6 = pCVar6 + 1;
      iVar1 = iVar1 + 1;
      pSVar4 = pSVar4 + 1;
    } while (iVar1 < _DAT_01d0d210);
  }
  _DAT_01d1a058 = 0;
  core_fldnotes_cpp_STextView_drawPage_FUN_004a98b0(&g_STextViewInstance,_DAT_01d19ba8);
  if (g_CGamePtr->letterbox_mode != 0) {
    DAT_01d19f90 = 0;
    DAT_005fe3a8 = 0xffffffff;
    _DAT_01d1a058 = 0;
    _DAT_01d19f78 = 0;
    return;
  }
  iVar5 = core_flashlit_cpp_FUN_004a80d0(_DAT_01c5fadc,_DAT_01c5fae0);
  if (-1 < iVar5) {
    core_flashlit_cpp_FUN_004a7a70(iVar5 * 0x2e4 + 0x1d0d254);
    local_18 = 1;
  }
  iVar5 = core_flashlit_cpp_FUN_004a8180(_DAT_01c5fadc,_DAT_01c5fae0);
  if (iVar5 != 0) {
    local_18 = 1;
  }
  pSVar2 = core_fldnotes_cpp_STextPage_findResourceAt_FUN_004a8d50
                     (g_STextViewInstance.pages + _DAT_01d19ba8,_DAT_01c5fadc,_DAT_01c5fae0);
  if ((pSVar2 != (SPageResource *)0x0) &&
     (iVar5 = (**(code **)((int)pSVar2->vtable + 8))
                        (pSVar2,0,_DAT_01c5fadc - pSVar2->x,_DAT_01c5fae0 - pSVar2->y), iVar5 != 0))
  {
    local_18 = 1;
  }
  if (0 < _DAT_01d19ba8) {
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d6f0
              (&CAlphaBitmap_01d19c9c,0x0000004A,0x000001AE,0xffff);
  }
  if (_DAT_01d19ba8 < g_STextViewInstance.page_count + -2) {
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
      (_DAT_01c5fadc < 0x00000262 + CAlphaBitmap_01d19cc4.width)) &&
     (_DAT_01c5fae0 < 0x000001C0 + CAlphaBitmap_01d19cc4.height)) {
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c17b4);
    core_flashlit_cpp_FUN_004a7a70(pcVar3);
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
