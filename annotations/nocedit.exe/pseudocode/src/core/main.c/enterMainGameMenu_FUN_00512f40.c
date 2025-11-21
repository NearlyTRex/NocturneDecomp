// Name: core_main.c_enterMainGameMenu_FUN_00512f40
// Address: 00507a50
// Address Range: [[00507a50, 00507a54]]
// Convention: __cdecl
// Signature: int core_main.c_enterMainGameMenu_FUN_00512f40(void)
// Cross-references:
//   wincore_winrun.cpp_winMain_FUN_005f3680 (005f3680) at 005f3900 [UNCONDITIONAL_CALL]

#include "nocturne.h"

int __cdecl core_main_c_enterMainGameMenu_FUN_00512f40(void)

{
  char cVar1;
  CGame *pCVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  CAlphaBitmap *this_ptr;
  char *pcVar8;
  CGame *in_stack_00000008;
  int in_stack_0000003c;
  int in_stack_00000100;
  
  pCVar2 = g_CGamePtr;
  if (g_WindowHeight < 0x1e0) {
    return 1;
  }
  if ((g_FullscreenMode == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr = CAlphaBitmap_ARRAY_02f214f0;
  iVar7 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (this_ptr,*(char **)((int)PTR_ARRAY_0067d344 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(this_ptr,2,1);
    this_ptr = this_ptr + 1;
  } while (iVar7 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c70,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c84,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c98,"fblurr",0x68,0x46);
  iVar7 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_00000008);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_update_FUN_00529d60(&g_CMoonInstance,g_CGamePtr->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_00529ed0(&g_CMoonInstance);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("S T A R T");
    pcVar8 = &DAT_02f28e60;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("O P T I O N S");
    pcVar8 = &DAT_02f28f60;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("L O A D");
    pcVar8 = &DAT_02f29060;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_02f29160;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Q U I T");
    puVar6 = &DAT_02f28e60;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    do {
      *(undefined1 **)((int)&DAT_02f29260 + iVar4) = puVar6;
      iVar4 = iVar4 + 4;
      puVar6 = puVar6 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = 0xfa;
    iVar5 = core_menu_cpp_getGameMainMenuChoice_FUN_00510000();
    if (in_stack_0000003c != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(iVar5) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      iVar5 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if ((iVar5 == 0) || (iVar5 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar5 == 0)) {
        iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
        if (iVar4 == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = 1;
        }
      }
      core_game_cpp_CGame_showChapterSelect_FUN_004e1cb0(g_CGamePtr,iVar4);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
      goto LAB_005131d5;
    case 1:
      core_menu_cpp_ShowOptionsScreen_FUN_00512d30();
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_CGame_loadSaveGame_FUN_004e12b0(g_CGamePtr,(char *)0x0,1,(char *)0x0);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0(&g_CMoonInstance);
LAB_005131d5:
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      break;
    case 3:
      iVar7 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      iVar7 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32), iVar4 != 0))
    {
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar4 != 0) &&
       ((iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x20), iVar4 != 0 ||
        (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x26), iVar4 != 0)))) {
      if (g_FullscreenMode != 0) {
        wincore_windll_cpp_clearScreen_FUN_005b3e70();
        engine_2d_c_drawText_FUN_00401fd0("3D acceleration has been turned off!",0,0);
        engine_2d_c_drawText_FUN_00401fd0("Press any key to continue...",0,0xb);
        wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
        engine_2d_c_clearInputAndWait_FUN_00403260();
        wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
      }
      g_FullscreenMode = 0;
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_main_c_showDeveloperToolsMenu_FUN_005073a0();
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21), iVar4 != 0))
    {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(&g_CDemonFileManagerInstance);
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
    }
    if (in_stack_00000100 != 0) {
      in_stack_00000100 = 0;
      core_sound_cpp_CSound_configure_FUN_005b3830(g_CSoundPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    if (iVar7 != 0) {
      core_sound_cpp_CSound_reset_FUN_005b39a0(g_CSoundPtr);
      core_moon_cpp_CMoon_free_FUN_00529ce0(&g_CMoonInstance);
      return iVar7;
    }
  } while( true );
}


// Assembly code:
// 00507a50: JMP 0x00512f40
//   Label: core_main.c_enterMainGameMenu_FUN_00512f40
//   XREF to: 00512f40 (UNCONDITIONAL_JUMP)
