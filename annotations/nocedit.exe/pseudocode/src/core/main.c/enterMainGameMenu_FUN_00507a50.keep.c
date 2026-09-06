// Name: core_main.c_enterMainGameMenu_FUN_00507a50
// Address: 00507a50
// MANUAL RECONSTRUCTION
// Address Range: [[00507a50, 00507a54]]
// Convention: __cdecl
// Signature: int __cdecl core_main_c_enterMainGameMenu_FUN_00507a50(void)

#include "nocturne.h"
#if NOCTURNE_ATTRACT_MOVIES
#include "core/debug_log.h"
#endif

int __cdecl core_main_c_enterMainGameMenu_FUN_00507a50(void)

{
  CGame *pCVar2;
  int iVar4;
  int iVar5;
  CAlphaBitmap *this_ptr;
  char (*pacVar6) [256];
  int iStack_c;
  int iStack_8;
#if NOCTURNE_ATTRACT_MOVIES
  char attract_movie [16];
  int attract_result;
#endif
#if !NOCTURNE_AUTHENTIC_NETPLAY
  char *menu_ptrs [8];
  char multiplayer_line [256];
  int multiplayer_item;
  int menu_count;
  int menu_ch;
  int menu_y;
#endif

  pCVar2 = g_CGamePtr;
  if (g_WindowHeight < 0x1e0) {
    return 1;
  }
  if ((g_UseDirect3D == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr = g_MenuBitmaps;
  iVar5 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (this_ptr,g_MenuBitmapFilenames[iVar5],0x40,0x40);
    iVar5 = iVar5 + 1;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(this_ptr,2,1);
    this_ptr = this_ptr + 1;
  } while (iVar5 != 8);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar5 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  iStack_c = 0;
  core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
  iStack_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr);
  do {
    core_game_cpp_CGame_updateDT_FUN_004d7d90(g_CGamePtr);
#if NOCTURNE_MENU_APPLIES_RESOLUTION
    nocturne_window_set_size(g_CGamePtr->game_pixx,g_CGamePtr->game_pixy);
#endif
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
    pacVar6 = g_MainMenuTextBuffers;
    iVar4 = 0;
    do {
      g_MenuTextPointers[iVar4 / 4] = (char *)pacVar6;
      iVar4 = iVar4 + 4;
      pacVar6 = pacVar6 + 1;
    } while (iVar4 != 0x10);
#if NOCTURNE_AUTHENTIC_NETPLAY
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000(g_MenuTextPointers,4,&iStack_c,0xfa,0)
    ;
#else
    menu_ptrs[0] = g_MenuTextPointers[0];
    strcpy(multiplayer_line,
           support_newmsg_cpp_getLocalizedString_FUN_005441f0("M U L T I P L A Y E R"));
    multiplayer_item = 1;
    menu_ptrs[multiplayer_item] = multiplayer_line;
    menu_ptrs[2] = g_MenuTextPointers[1];
    menu_ptrs[3] = g_MenuTextPointers[2];
    menu_ptrs[4] = g_MenuTextPointers[3];
    menu_count = 5;
    menu_ch = engine_font_cpp_CBitFont_getCharHeight_FUN_004d01d0(g_ThemeFont,0x58);
    menu_y = 0xfa;
    if (g_WindowHeight < menu_y + (menu_count * 2 + 1) * menu_ch) {
      menu_y = g_WindowHeight - (menu_count * 2 + 1) * menu_ch;
    }
    if (menu_y < 0) {
      menu_y = 0;
    }
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00510000
                      (menu_ptrs,menu_count,&iStack_c,menu_y,0);
#endif
    if (iStack_8 != 0) {
      engine_special_cpp_clearScreen_FUN_005b3e70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
#if !NOCTURNE_AUTHENTIC_NETPLAY
    if (iVar4 == multiplayer_item) {
      iVar4 = nocturne_net_menu_multiplayer();
      if (iVar4 == NOCTURNE_NET_MENU_HOST) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_hostNetworkGame_FUN_004e2f10();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      else if (iVar4 == NOCTURNE_NET_MENU_JOIN) {
        core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
        core_game_cpp_joinNetworkGame_FUN_004e2fc0();
        core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      }
      engine_2d_c_clearInputAndWait_FUN_00403260();
      iVar4 = -1;
    }
    else if (multiplayer_item < iVar4) {
      iVar4 = iVar4 + -1;
    }
#endif
    switch(iVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
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
      core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr,iVar4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
      goto LAB_005131d5;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_00512d30(0);
      engine_2d_c_clearInputAndWait_FUN_00403260();
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
      iVar5 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_ESCAPE);
    if (iVar4 != 0) {
      iVar5 = 99;
    }
    if (g_InputDisabled != 0) {
      iVar5 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_M), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#if NOCTURNE_AUTHENTIC_DEV_TOOLS
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       ((iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_D), iVar4 != 0 ||
        (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_L), iVar4 != 0)))) {
#if NOCTURNE_AUTHENTIC_D3D_OPTIONS
      if (g_UseDirect3D != 0) {
        engine_special_cpp_clearScreen_FUN_005b3e70();
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
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_F), iVar4 != 0)) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(&g_CDemonFileManagerInstance);
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#if !NOCTURNE_AUTHENTIC_NETPLAY
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_H), iVar4 != 0)) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_hostNetworkGame_FUN_004e2f10();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeysPtr->vtable->getAndClearKeyState)(g_CKeysPtr,DIK_J), iVar4 != 0)) {
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
#if NOCTURNE_ATTRACT_MOVIES
    if (nocturne_attract_tick() != 0) {
      _sprintf(attract_movie,"noc%d.avi",core_actor_cpp_getRandomInt_FUN_0040cc70(1,4));
      DLOG("frontend","playing '%s'",attract_movie);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      nocturne_attract_pre_movie_pause();
      attract_result = wincore_winvideo_cpp_playMovie_FUN_005f4a00("video",attract_movie);
      DLOG("frontend","playMovie returned %d",attract_result);
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
#endif
    if (iVar5 != 0) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      return iVar5;
    }
  } while( true );
}
