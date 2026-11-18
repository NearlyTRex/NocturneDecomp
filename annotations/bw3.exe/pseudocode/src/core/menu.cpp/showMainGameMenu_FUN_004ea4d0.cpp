// Name: core_menu.cpp_showMainGameMenu_FUN_004ea4d0
// Address: 004ea4d0
// Address Range: [[004ea4d0, 004ea9dc]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_showMainGameMenu_FUN_004ea4d0(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_showMainGameMenu_FUN_004ea4d0(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  char *pcVar3;
  int iVar4;
  CAlphaBitmap *this_ptr_00;
  int iVar5;
  char (*pacVar6) [256];
  char *pcVar7;
  int local_10;
  float local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (g_INT_005fba1c < 0x1e0) {
    return 1;
  }
  if ((g_INT_02cf5fcc == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar5 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_00600478 + iVar5),0x40,0x40);
    iVar5 = iVar5 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar5 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar5 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_clearTextureCache_FUN_0056ac20();
  local_10 = 0;
  core_moon_cpp_CMoon_init_FUN_004f94a0(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004b4430(g_CGamePtr);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = g_CGamePtr->delta_time_float;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0053b100(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_004f9600(&g_CMoonInstance,local_c);
    core_moon_cpp_CMoon_render_FUN_004f9670(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("START");
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
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("OPTIONS");
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
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("LOAD");
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
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("QUIT");
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
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004e7860
                      (g_MenuTextPointers,4,&local_10,200,(char *)0x0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_0057a8a0();
    switch(iVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_00560930(g_CSound_PTR_006045f8);
      iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if ((iVar4 == 0) ||
         (iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar4 == 0)) {
        iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
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
      core_game_cpp_CGame_showChapterSelect_FUN_004be8d0(g_CGamePtr,iVar4);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_0056ac20();
      core_moon_cpp_CMoon_init_FUN_004f94a0(&g_CMoonInstance);
      goto LAB_004ea7ac;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_004ea280(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_00560930(g_CSound_PTR_006045f8);
      core_game_cpp_CGame_loadGame_FUN_004bdfb0(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_0056ac20();
      core_moon_cpp_CMoon_init_FUN_004f94a0(&g_CMoonInstance);
LAB_004ea7ac:
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      break;
    case 3:
      iVar5 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) {
      iVar5 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00556750();
      sound_sndmain_cpp_setSoundMuted_FUN_00556760((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       ((iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D), iVar4 != 0 ||
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L), iVar4 != 0)))) {
      core_moon_cpp_CMoon_free_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_00560930(g_CSound_PTR_006045f8);
      core_main_c_showDeveloperToolsMenu_FUN_004e4400();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_clearTextureCache_FUN_0056ac20();
      core_moon_cpp_CMoon_init_FUN_004f94a0(&g_CMoonInstance);
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if (iVar4 != 0) {
      (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_CSound_configure_FUN_005607d0(g_CSound_PTR_006045f8);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar5 != 0) {
      core_sound_cpp_CSound_reset_FUN_00560930(g_CSound_PTR_006045f8);
      core_moon_cpp_CMoon_free_FUN_004f9580(&g_CMoonInstance);
      return iVar5;
    }
  } while( true );
}
