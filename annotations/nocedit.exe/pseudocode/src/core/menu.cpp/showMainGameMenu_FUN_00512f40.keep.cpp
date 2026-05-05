// Name: core_menu.cpp_showMainGameMenu_FUN_00512f40
// Address: 00512f40
// MANUAL RECONSTRUCTION
// Address Range: [[00512f40, 0051345b]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_showMainGameMenu_FUN_00512f40(void)

#include "nocturne.h"

int __cdecl core_menu_cpp_showMainGameMenu_FUN_00512f40(void)

{
  int iVar6;
  int iVar8;
  char (*pacVar9) [256];
  int iVar7;
  int iVar10;
  CAlphaBitmap *this_ptr_00;
  int iStack_c;
  int iStack_8;
  CGame *pCVar3;
  
  pCVar3 = g_CGamePtr;
  if (g_WindowHeight < GAME_WINDOW_RESOLUTION_480) {
    return 1;
  }
  if ((g_UseDirect3D == 0) && (GAME_WINDOW_RESOLUTION_480 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = GAME_WINDOW_RESOLUTION_480;
    pCVar3->game_pixx = GAME_WINDOW_RESOLUTION_640;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar7 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (this_ptr_00,g_MenuBitmapFilenames[iVar7],0x40,0x40);
    iVar7 = iVar7 + 1;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar7 != 8);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar10 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  iStack_c = 0;
  core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
  iStack_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  do {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    strcpy(g_MainMenuTextBuffers[0],
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("S T A R T"));
    strcpy(g_MainMenuTextBuffers[1],
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("O P T I O N S"));
    strcpy(g_MainMenuTextBuffers[2],
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("L O A D"));
    strcpy(g_MainMenuTextBuffers[3],
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("Q U I T"));
    pacVar9 = g_MainMenuTextBuffers;
    iVar6 = 0;
    do {
      *(char (**) [256])((int)g_MenuTextPointers + iVar6) = pacVar9;
      iVar6 = iVar6 + 4;
      pacVar9 = pacVar9 + 1;
    } while (iVar6 != 0x10);
    iVar8 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(g_MenuTextPointers,4,&iStack_c,0xfa,0)
    ;
    if (iStack_8 != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(iVar8) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LSHIFT);
      if ((iVar8 == 0) ||
         (iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL), iVar8 == 0)) {
        iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
        if (iVar8 == 0) {
          iVar8 = 0;
        }
        else {
          iVar8 = 1;
        }
      }
      else {
        iVar8 = 2;
      }
      core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr,iVar8);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
      goto LAB_005131d5;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_00512d30(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_CGame_loadGame_FUN_004e12b0(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
LAB_005131d5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      break;
    case 3:
      iVar10 = 99;
    }
    iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar8 != 0) {
      iVar10 = 99;
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar8 != 0) &&
       (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar8 != 0)) {
      iVar8 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar8 == 0));
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#if !NOCTURNE_AUTHENTIC_EDITOR
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar8 != 0) &&
       ((iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D), iVar8 != 0 ||
        (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L), iVar8 != 0)))) {
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
      if (g_UseDirect3D != 0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("3D acceleration has been turned off!",0,0);
        engine_2d_c_drawText_FUN_00401fd0("Press any key to continue...",0,0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      g_UseDirect3D = 0;
#endif
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_main_c_showDeveloperToolsMenu_FUN_005073a0();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#endif
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar8 != 0) &&
       (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F), iVar8 != 0)) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(&g_CDemonFileManagerInstance);
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#if !NOCTURNE_AUTHENTIC_NETPLAY
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar8 != 0) &&
       (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H), iVar8 != 0)) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_hostNetworkGame_FUN_004e2f10();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar8 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar8 != 0) &&
       (iVar8 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_J), iVar8 != 0)) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_joinNetworkGame_FUN_004e2fc0();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#endif
    if (iStack_8 != 0) {
      iStack_8 = 0;
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    if (iVar10 != 0) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      return iVar10;
    }
  } while( true );
}
