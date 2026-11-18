// Name: core_menu.cpp_showMainGameMenu_FUN_0050cc90
// Address: 0050cc90
// Address Range: [[0050cc90, 0050d199]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_showMainGameMenu_FUN_0050cc90(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_showMainGameMenu_FUN_0050cc90(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  char *pcVar3;
  int iVar4;
  int iVar5;
  CAlphaBitmap *this_ptr_00;
  char (*pacVar6) [256];
  char *pcVar7;
  int local_10;
  float local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (g_INT_0061b49c < 0x1e0) {
    return 1;
  }
  if ((g_INT_02c83370 == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar5 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_0061f570 + iVar5),0x40,0x40);
    iVar5 = iVar5 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar5 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar5 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_clearTextureCache_FUN_00597c30();
  local_10 = 0;
  core_moon_cpp_CMoon_init_FUN_00521c50(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  do {
    core_game_cpp_CGame_updateDT_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = g_CGamePtr->delta_time_float;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_00521dd0(&g_CMoonInstance,local_c);
    core_moon_cpp_CMoon_render_FUN_00521e40(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("S T A R T");
    pacVar6 = g_MainMenuTextBuffers;
    do {
      cVar1 = *pcVar3;
      (*pacVar6)[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      *(char *)((int)pacVar6 + 1) = cVar1;
      pacVar6 = (char (*) [256])((int)pacVar6 + 2);
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("O P T I O N S");
    pcVar7 = g_MainMenuTextBuffers[1];
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("L O A D");
    pcVar7 = g_MainMenuTextBuffers[2];
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = g_MainMenuTextBuffers[3];
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Q U I T");
    pacVar6 = g_MainMenuTextBuffers;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    do {
      *(char (**) [256])((int)g_MenuTextPointers + iVar4) = pacVar6;
      iVar4 = iVar4 + 4;
      pacVar6 = pacVar6 + 1;
    } while (iVar4 != 0x10);
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      (g_MenuTextPointers,4,&local_10,0x32,(char *)0x0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    switch(iVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(g_CSound_PTR_006236b8);
      iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LSHIFT);
      if ((iVar4 == 0) ||
         (iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL),
         iVar4 == 0)) {
        iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
      }
      else {
        iVar4 = 2;
      }
      core_game_cpp_CGame_showChapterSelect_FUN_004d7250(g_CGamePtr,iVar4);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_00597c30();
      core_moon_cpp_CMoon_init_FUN_00521c50(&g_CMoonInstance);
      goto LAB_0050cf69;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_0050c990(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(g_CSound_PTR_006236b8);
      core_game_cpp_CGame_loadGame_FUN_004d6990(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_00597c30();
      core_moon_cpp_CMoon_init_FUN_00521c50(&g_CMoonInstance);
LAB_0050cf69:
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
      break;
    case 3:
      iVar5 = 99;
    }
    iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_ESCAPE);
    if (iVar4 != 0) {
      iVar5 = 99;
    }
    iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_M),
       iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      sound_sndmain_cpp_setSoundMuted_FUN_00573600((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
    }
    iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       ((iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_D),
        iVar4 != 0 ||
        (iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_L),
        iVar4 != 0)))) {
      core_moon_cpp_CMoon_free_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(g_CSound_PTR_006236b8);
      core_main_c_showDeveloperToolsMenu_FUN_005031c0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_00597c30();
      core_moon_cpp_CMoon_init_FUN_00521c50(&g_CMoonInstance);
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
    }
    iVar4 = (*g_CKeys_PTR_0061f2a4->vtable->getKeyState)(g_CKeys_PTR_0061f2a4,DIK_LCONTROL);
    if (iVar4 != 0) {
      (*g_CKeys_PTR_0061f2a4->vtable->getAndClearKeyState)(g_CKeys_PTR_0061f2a4,DIK_F);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_CSound_configure_FUN_0057d6a0(g_CSound_PTR_006236b8);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar5 != 0) {
      core_sound_cpp_CSound_reset_FUN_0057d800(g_CSound_PTR_006236b8);
      core_moon_cpp_CMoon_free_FUN_00521d50(&g_CMoonInstance);
      return iVar5;
    }
  } while( true );
}
