// Name: core_menu.cpp_showMainGameMenu_FUN_00512f40
// Address: 00512f40
// Address Range: [[00512f40, 0051345b]]
// Convention: __cdecl
// Signature: int core_menu.cpp_showMainGameMenu_FUN_00512f40(void)
// Cross-references:
//   core_main.c_enterMainGameMenu_FUN_00512f40 (00507a50) at 00507a50 [UNCONDITIONAL_JUMP]
// Globals:
//   void* switchdataD_00512f28 = 0051315c
//   TerminatedCString s_fblurl_00636dc1
//   TerminatedCString s_fblurm_00636dc8
//   TerminatedCString s_fblurr_00636dcf
//   TerminatedCString s_S_T_A_R_T_00636dd6
//   TerminatedCString s_O_P_T_I_O_N_S_00636de0
//   TerminatedCString s_L_O_A_D_00636dee
//   TerminatedCString s_Q_U_I_T_00636df6
//   TerminatedCString s_s_3D_acceleration_has_be_00636dfe
//   TerminatedCString s_Press_any_key_to_continu_00636e23
//   TerminatedCString s_f0100_00637305
//   TerminatedCString s_f0300_0063730b
//   int g_WindowHeight = 0xc8
//   CGame* g_CGamePtr = 02d81a9c
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* PTR_s_f0100_0067d344 = 00637305
//   void* PTR_s_f0300_0067d348 = 0063730b
//   CSound* g_CSoundPtr = 03f6af64
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.game_pixy
//   undefined4 g_CGameInstance.delta_time_float
//   void* g_CKeysPtr
//   CDemonFileManager g_CDemonFileManagerInstance
//   CAlphaBitmap[8] CAlphaBitmap_ARRAY_02f214f0
//   undefined4 DAT_02f21504
//   undefined4 DAT_02f21590
//   CAlphaBitmap CAlphaBitmap_02f26c70
//   CAlphaBitmap CAlphaBitmap_02f26c84
//   CAlphaBitmap CAlphaBitmap_02f26c98
//   undefined1 DAT_02f28e60
//   undefined1 DAT_02f28e61
//   undefined1 DAT_02f28e62
//   undefined1 DAT_02f28e63
//   undefined1 DAT_02f28f60
//   undefined1 DAT_02f28f61
//   undefined1 DAT_02f28f62
//   undefined1 DAT_02f28f63
//   undefined1 DAT_02f29060
//   undefined1 DAT_02f29061
//   undefined1 DAT_02f29062
//   undefined1 DAT_02f29063
//   undefined1 DAT_02f29160
//   undefined1 DAT_02f29161
//   undefined1 DAT_02f29162
//   undefined1 DAT_02f29163
//   undefined4 DAT_02f29260
//   undefined4 DAT_02f29264
//   CSound g_CSoundInstance
//   int g_FullscreenMode
// Function calls:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
//   core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   core_main.c_showDeveloperToolsMenu_FUN_005073a0
//   core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30
//   core_moon.cpp_CMoon_free_FUN_00529ce0
//   core_moon.cpp_CMoon_FUN_00529d60
//   core_moon.cpp_CMoon_FUN_00529ed0
//   core_moon.cpp_CMoon_init_FUN_00529ae0
//   core_sound.cpp_CSound_FUN_005b3830
//   core_sound.cpp_CSound_FUN_005b39a0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
//   engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70
//   wincore_winrun.cpp_getNextKeypress_FUN_005f2e90

#include "nocturne.h"

int __cdecl core_menu_cpp_showMainGameMenu_FUN_00512f40(void)

{
  char cVar1;
  CGame *pCVar2;
  char *pcVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  undefined1 *puVar7;
  int iVar8;
  CAlphaBitmap *this_ptr;
  char *pcVar9;
  CGame *in_stack_00000008;
  undefined *puStack00000010;
  int in_stack_0000003c;
  int in_stack_00000100;
  
  pCVar2 = g_CGamePtr;
  if (g_WindowHeight < GAME_WINDOW_RESOLUTION_480) {
    return 1;
  }
  if ((g_FullscreenMode == 0) && (GAME_WINDOW_RESOLUTION_480 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = GAME_WINDOW_RESOLUTION_480;
    pCVar2->game_pixx = GAME_WINDOW_RESOLUTION_640;
  }
  this_ptr = CAlphaBitmap_ARRAY_02f214f0;
  iVar8 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (this_ptr,*(char **)((int)&PTR_s_f0100_0067d344 + iVar8),0x40,0x40);
    iVar8 = iVar8 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_00410c20(this_ptr,2,1);
    this_ptr = this_ptr + 1;
  } while (iVar8 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c70,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c84,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            (&CAlphaBitmap_02f26c98,"fblurr",0x68,0x46);
  iVar8 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403260();
  engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
  puStack00000010 = (undefined *)0x0;
  core_moon_cpp_CMoon_init_FUN_00529ae0();
  core_game_cpp_CGame_saveClockTime_FUN_004d7d80(g_CGamePtr,in_stack_00000008);
  do {
    core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90(g_CGamePtr);
    core_moon_cpp_CMoon_FUN_00529d60();
    puStack00000010 = &DAT_02f21590;
    core_moon_cpp_CMoon_FUN_00529ed0();
    puStack00000010 = (undefined *)0x513054;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("S T A R T");
    pcVar9 = &DAT_02f28e60;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("O P T I O N S");
    pcVar9 = &DAT_02f28f60;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("L O A D");
    pcVar9 = &DAT_02f29060;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    pcVar9 = &DAT_02f29160;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Q U I T");
    puVar7 = &DAT_02f28e60;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    iVar4 = 0;
    do {
      *(undefined1 **)((int)&DAT_02f29260 + iVar4) = puVar7;
      iVar4 = iVar4 + 4;
      puVar7 = puVar7 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = 0xfa;
    puStack00000010 = (undefined *)0x513135;
    uVar5 = core_menu_cpp_GetGameMainMenuChoice_FUN_00510000();
    if (in_stack_0000003c != 0) {
      wincore_windll_cpp_clearScreen_FUN_005b3e70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    switch(uVar5) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00529ce0();
      core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
      iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x2a);
      if ((iVar6 == 0) || (iVar6 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d), iVar6 == 0)) {
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
      core_moon_cpp_CMoon_init_FUN_00529ae0();
      goto LAB_005131d5;
    case 1:
      core_menu_cpp_ShowOptionsScreen_FUN_00512d30();
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_00529ce0();
      core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
      core_game_cpp_CGame_loadSaveGame_FUN_004e12b0(g_CGamePtr,(char *)0x0,1,(char *)0x0);
      engine_2d_c_clearInputAndWait_FUN_00403260();
      engine_texture_cpp_clearTextureCache_FUN_005dd8e0();
      core_moon_cpp_CMoon_init_FUN_00529ae0();
LAB_005131d5:
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
      break;
    case 3:
      iVar8 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,1);
    if (iVar4 != 0) {
      iVar8 = 99;
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x32), iVar4 != 0))
    {
      iVar4 = sound_sndmain_cpp_getSoundEnabled_FUN_005a96b0();
      sound_sndmain_cpp_setSoundEnabled_FUN_005a96c0((uint)(iVar4 == 0));
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
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
      core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
      core_main_c_showDeveloperToolsMenu_FUN_005073a0();
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
    }
    iVar4 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
    if ((iVar4 != 0) && (iVar4 = (*g_CKeysPtr->vtable->isKeyPressed)(g_CKeysPtr,0x21), iVar4 != 0))
    {
      core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
      core_fileman_cpp_CDemonFileManager_showEditorMenu_FUN_004be270(&g_CDemonFileManagerInstance);
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
    }
    if (in_stack_00000100 != 0) {
      in_stack_00000100 = 0;
      core_sound_cpp_CSound_FUN_005b3830(g_CSoundPtr);
      engine_2d_c_clearInputAndWait_FUN_00403260();
    }
    if (iVar8 != 0) {
      core_sound_cpp_CSound_FUN_005b39a0(g_CSoundPtr);
      core_moon_cpp_CMoon_free_FUN_00529ce0();
      return iVar8;
    }
  } while( true );
}


// Assembly code:
// 00512f40: PUSH EBP
//   Label: core_menu.cpp_showMainGameMenu_FUN_00512f40
// 00512f41: SUB ESP,0x8
// 00512f44: CMP dword ptr [0x00679398],0x1e0
//   XREF to: 00679398 (READ)
// 00512f4e: JL 0x0051337c
//   XREF to: 0051337c (CONDITIONAL_JUMP)
// 00512f54: CMP dword ptr [0x03f6b878],0x0
//   XREF to: 03f6b878 (READ)
// 00512f5b: JZ 0x00513386
//   XREF to: 00513386 (CONDITIONAL_JUMP)
// 00512f61: PUSH EDI
//   Label: LAB_00512f61
// 00512f62: PUSH ESI
// 00512f63: PUSH EBX
// 00512f64: MOV ESI,0x2f214f0
//   XREF to: 02f214f0 (DATA)
// 00512f69: XOR EBX,EBX
// 00512f6b: MOV EBP,0x40
// 00512f70: PUSH EBP
//   Label: LAB_00512f70
// 00512f71: PUSH EBP
// 00512f72: MOV EDI,dword ptr [EBX + 0x67d344]
//   XREF to: 0067d344 (READ)
//   XREF to: 0067d348 (READ)
// 00512f78: PUSH EDI
//   XREF to: 00637305 (DATA)
//   XREF to: 0063730b (DATA)
// 00512f79: PUSH ESI
//   XREF to: 02f214f0 (DATA)
//   XREF to: 02f21504 (DATA)
// 00512f7a: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
//   XREF to: 02d81a9c (PARAM)
// 00512f7f: ADD ESP,0x10
// 00512f82: PUSH 0x1
// 00512f84: PUSH 0x2
// 00512f86: PUSH ESI
//   XREF to: 02f214f0 (DATA)
// 00512f87: ADD EBX,0x4
// 00512f8a: CALL engine_alphabit.cpp_CAlphaBitmap_scale_FUN_00410c20
//   XREF to: 00410c20 (UNCONDITIONAL_CALL)
// 00512f8f: ADD ESP,0xc
// 00512f92: ADD ESI,0x14
// 00512f95: CMP EBX,0x20
// 00512f98: JNZ 0x00512f70
//   XREF to: 00512f70 (CONDITIONAL_JUMP)
// 00512f9a: PUSH 0x46
// 00512f9c: PUSH 0x68
// 00512f9e: PUSH 0x636dc1
//   XREF to: 00636dc1 (DATA)
// 00512fa3: PUSH 0x2f26c70
//   XREF to: 02f26c70 (DATA)
// 00512fa8: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00512fad: ADD ESP,0x10
// 00512fb0: PUSH 0x46
// 00512fb2: PUSH EBX
// 00512fb3: PUSH 0x636dc8
//   XREF to: 00636dc8 (DATA)
// 00512fb8: PUSH 0x2f26c84
//   XREF to: 02f26c84 (DATA)
// 00512fbd: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00512fc2: ADD ESP,0x10
// 00512fc5: PUSH 0x46
// 00512fc7: PUSH 0x68
// 00512fc9: PUSH 0x636dcf
//   XREF to: 00636dcf (DATA)
// 00512fce: PUSH 0x2f26c98
//   XREF to: 02f26c98 (DATA)
// 00512fd3: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 00512fd8: ADD ESP,0x10
// 00512fdb: XOR EBP,EBP
// 00512fdd: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 00512fe2: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 00512fe7: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00512fec: MOV dword ptr [ESP + 0x10],EBP
//   XREF to: Stack[-0xc] (WRITE)
// 00512ff0: CALL core_moon.cpp_CMoon_init_FUN_00529ae0
//   XREF to: 00529ae0 (UNCONDITIONAL_CALL)
// 00512ff5: ADD ESP,0x4
// 00512ff8: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00512ffe: MOV EAX,0x1
// 00513003: PUSH EDX
//   XREF to: 02d81a9c (DATA)
// 00513004: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00513008: CALL core_game.cpp_CGame_saveClockTime_FUN_004d7d80
//   XREF to: 004d7d80 (UNCONDITIONAL_CALL)
// 0051300d: ADD ESP,0x4
// 00513010: MOV ECX,dword ptr [0x0067b654]
//   Label: LAB_00513010
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513016: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 00513017: CALL core_game.cpp_CGame_updateDeltaTime_FUN_004d7d90
//   XREF to: 004d7d90 (UNCONDITIONAL_CALL)
// 0051301c: ADD ESP,0x4
// 0051301f: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 00513024: SUB ESP,0x4
// 00513027: MOV EDX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0051302d: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0x1c] (DATA)
// 00513030: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00513035: CALL core_moon.cpp_CMoon_FUN_00529d60
//   XREF to: 00529d60 (UNCONDITIONAL_CALL)
// 0051303a: ADD ESP,0x8
// 0051303d: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00513042: CALL core_moon.cpp_CMoon_FUN_00529ed0
//   XREF to: 00529ed0 (UNCONDITIONAL_CALL)
// 00513047: ADD ESP,0x4
// 0051304a: PUSH 0x636dd6
//   XREF to: 00636dd6 (DATA)
// 0051304f: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513054: ADD ESP,0x4
// 00513057: MOV EDI,0x2f28e60
//   XREF to: 02f28e60 (DATA)
// 0051305c: MOV ESI,EAX
// 0051305e: PUSH EDI
//   XREF to: 02f28e60 (DATA)
// 0051305f: MOV AL,byte ptr [ESI]
//   Label: LAB_0051305f
// 00513061: MOV byte ptr [EDI],AL
//   XREF to: 02f28e60 (WRITE)
//   XREF to: 02f28e62 (WRITE)
// 00513063: CMP AL,0x0
// 00513065: JZ 0x00513077
//   XREF to: 00513077 (CONDITIONAL_JUMP)
// 00513067: MOV AL,byte ptr [ESI + 0x1]
// 0051306a: ADD ESI,0x2
// 0051306d: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28e61 (WRITE)
//   XREF to: 02f28e63 (WRITE)
// 00513070: ADD EDI,0x2
// 00513073: CMP AL,0x0
// 00513075: JNZ 0x0051305f
//   XREF to: 0051305f (CONDITIONAL_JUMP)
// 00513077: POP EDI
//   Label: LAB_00513077
// 00513078: PUSH 0x636de0
//   XREF to: 00636de0 (DATA)
// 0051307d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 00513082: ADD ESP,0x4
// 00513085: MOV EDI,0x2f28f60
//   XREF to: 02f28f60 (DATA)
// 0051308a: MOV ESI,EAX
// 0051308c: PUSH EDI
//   XREF to: 02f28f60 (DATA)
// 0051308d: MOV AL,byte ptr [ESI]
//   Label: LAB_0051308d
// 0051308f: MOV byte ptr [EDI],AL
//   XREF to: 02f28f60 (WRITE)
//   XREF to: 02f28f62 (WRITE)
// 00513091: CMP AL,0x0
// 00513093: JZ 0x005130a5
//   XREF to: 005130a5 (CONDITIONAL_JUMP)
// 00513095: MOV AL,byte ptr [ESI + 0x1]
// 00513098: ADD ESI,0x2
// 0051309b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f28f61 (WRITE)
//   XREF to: 02f28f63 (WRITE)
// 0051309e: ADD EDI,0x2
// 005130a1: CMP AL,0x0
// 005130a3: JNZ 0x0051308d
//   XREF to: 0051308d (CONDITIONAL_JUMP)
// 005130a5: POP EDI
//   Label: LAB_005130a5
// 005130a6: PUSH 0x636dee
//   XREF to: 00636dee (DATA)
// 005130ab: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005130b0: ADD ESP,0x4
// 005130b3: MOV EDI,0x2f29060
//   XREF to: 02f29060 (DATA)
// 005130b8: MOV ESI,EAX
// 005130ba: PUSH EDI
//   XREF to: 02f29060 (DATA)
// 005130bb: MOV AL,byte ptr [ESI]
//   Label: LAB_005130bb
// 005130bd: MOV byte ptr [EDI],AL
//   XREF to: 02f29060 (WRITE)
//   XREF to: 02f29062 (WRITE)
// 005130bf: CMP AL,0x0
// 005130c1: JZ 0x005130d3
//   XREF to: 005130d3 (CONDITIONAL_JUMP)
// 005130c3: MOV AL,byte ptr [ESI + 0x1]
// 005130c6: ADD ESI,0x2
// 005130c9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29061 (WRITE)
//   XREF to: 02f29063 (WRITE)
// 005130cc: ADD EDI,0x2
// 005130cf: CMP AL,0x0
// 005130d1: JNZ 0x005130bb
//   XREF to: 005130bb (CONDITIONAL_JUMP)
// 005130d3: POP EDI
//   Label: LAB_005130d3
// 005130d4: PUSH 0x636df6
//   XREF to: 00636df6 (DATA)
// 005130d9: MOV EDI,0x2f29160
//   XREF to: 02f29160 (DATA)
// 005130de: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 005130e3: ADD ESP,0x4
// 005130e6: MOV ESI,EAX
// 005130e8: MOV EDX,0x2f28e60
//   XREF to: 02f28e60 (DATA)
// 005130ed: PUSH EDI
//   XREF to: 02f29160 (DATA)
// 005130ee: MOV AL,byte ptr [ESI]
//   Label: LAB_005130ee
// 005130f0: MOV byte ptr [EDI],AL
//   XREF to: 02f29160 (WRITE)
//   XREF to: 02f29162 (WRITE)
// 005130f2: CMP AL,0x0
// 005130f4: JZ 0x00513106
//   XREF to: 00513106 (CONDITIONAL_JUMP)
// 005130f6: MOV AL,byte ptr [ESI + 0x1]
// 005130f9: ADD ESI,0x2
// 005130fc: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 02f29161 (WRITE)
//   XREF to: 02f29163 (WRITE)
// 005130ff: ADD EDI,0x2
// 00513102: CMP AL,0x0
// 00513104: JNZ 0x005130ee
//   XREF to: 005130ee (CONDITIONAL_JUMP)
// 00513106: POP EDI
//   Label: LAB_00513106
// 00513107: XOR EAX,EAX
// 00513109: MOV dword ptr [EAX + 0x2f29260],EDX
//   Label: LAB_00513109
//   XREF to: 02f29260 (WRITE)
//   XREF to: 02f29264 (WRITE)
//   XREF to: 02f28e60 (DATA)
//   XREF to: 02f28f60 (DATA)
// 0051310f: ADD EAX,0x4
// 00513112: ADD EDX,0x100
//   XREF to: 02f28f60 (PARAM)
//   XREF to: 02f29060 (PARAM)
// 00513118: CMP EAX,0x10
// 0051311b: JNZ 0x00513109
//   XREF to: 00513109 (CONDITIONAL_JUMP)
// 0051311d: PUSH 0x0
// 0051311f: PUSH 0xfa
// 00513124: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0xc] (DATA)
// 00513128: PUSH EAX
// 00513129: PUSH 0x4
// 0051312b: PUSH 0x2f29260
//   XREF to: 02f29260 (DATA)
// 00513130: CALL core_menu.cpp_GetGameMainMenuChoice_FUN_00510000
//   XREF to: 00510000 (UNCONDITIONAL_CALL)
// 00513135: ADD ESP,0x14
// 00513138: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x8] (READ)
// 0051313c: MOV ESI,EAX
// 0051313e: TEST EBX,EBX
// 00513140: JZ 0x00513147
//   XREF to: 00513147 (CONDITIONAL_JUMP)
// 00513142: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00513147: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   Label: LAB_00513147
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0051314c: CMP ESI,0x3
// 0051314f: JA 0x005131dd
//   XREF to: 005131dd (CONDITIONAL_JUMP)
// 00513155: JMP dword ptr [ESI*0x4 + 0x512f28]
//   Label: switchD
//   XREF to: 0051315c (COMPUTED_JUMP)
//   XREF to: 005133d8 (COMPUTED_JUMP)
//   XREF to: 00513429 (COMPUTED_JUMP)
//   XREF to: 00513435 (COMPUTED_JUMP)
//   XREF to: 00512f28 (DATA)
// 0051315c: PUSH 0x2f21590
//   Label: caseD_0
//   XREF to: 02f21590 (DATA)
// 00513161: CALL core_moon.cpp_CMoon_free_FUN_00529ce0
//   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
// 00513166: ADD ESP,0x4
// 00513169: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0051316f: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 00513170: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 00513175: ADD ESP,0x4
// 00513178: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051317d: PUSH 0x2a
// 0051317f: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513181: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00513182: CALL dword ptr [EDX]
// 00513184: ADD ESP,0x8
// 00513187: TEST EAX,EAX
// 00513189: JZ 0x005133aa
//   XREF to: 005133aa (CONDITIONAL_JUMP)
// 0051318f: PUSH 0x1d
// 00513191: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00513196: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00513197: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513199: CALL dword ptr [EDX]
// 0051319b: ADD ESP,0x8
// 0051319e: TEST EAX,EAX
// 005131a0: JZ 0x005133aa
//   XREF to: 005133aa (CONDITIONAL_JUMP)
// 005131a6: PUSH 0x2
// 005131a8: MOV ESI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005131ae: PUSH ESI
//   XREF to: 02d81a9c (DATA)
// 005131af: CALL core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0
//   Label: LAB_005131af
//   XREF to: 004e1cb0 (UNCONDITIONAL_CALL)
// 005131b4: ADD ESP,0x8
// 005131b7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005131bc: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 005131c1: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 005131c6: CALL core_moon.cpp_CMoon_init_FUN_00529ae0
//   XREF to: 00529ae0 (UNCONDITIONAL_CALL)
// 005131cb: ADD ESP,0x4
// 005131ce: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 005131d4: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 005131d5: CALL core_sound.cpp_CSound_FUN_005b3830
//   Label: LAB_005131d5
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 005131da: ADD ESP,0x4
//   Label: LAB_005131da
// 005131dd: PUSH 0x1
//   Label: default
// 005131df: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005131e4: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005131e5: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005131e7: CALL dword ptr [EDX + 0x4]
// 005131ea: ADD ESP,0x8
// 005131ed: TEST EAX,EAX
// 005131ef: JZ 0x005131f6
//   XREF to: 005131f6 (CONDITIONAL_JUMP)
// 005131f1: MOV EBP,0x63
// 005131f6: PUSH 0x1d
//   Label: LAB_005131f6
// 005131f8: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005131fd: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005131fe: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513200: CALL dword ptr [EDX]
// 00513202: ADD ESP,0x8
// 00513205: TEST EAX,EAX
// 00513207: JZ 0x00513243
//   XREF to: 00513243 (CONDITIONAL_JUMP)
// 00513209: PUSH 0x32
// 0051320b: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00513210: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00513211: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513213: CALL dword ptr [EDX + 0x4]
// 00513216: ADD ESP,0x8
// 00513219: TEST EAX,EAX
// 0051321b: JZ 0x00513243
//   XREF to: 00513243 (CONDITIONAL_JUMP)
// 0051321d: CALL sound_sndmain.cpp_getSoundEnabled_FUN_005a96b0
//   XREF to: 005a96b0 (UNCONDITIONAL_CALL)
// 00513222: TEST EAX,EAX
// 00513224: SETZ AL
// 00513227: AND EAX,0xff
// 0051322c: PUSH EAX
// 0051322d: CALL sound_sndmain.cpp_setSoundEnabled_FUN_005a96c0
//   XREF to: 005a96c0 (UNCONDITIONAL_CALL)
// 00513232: ADD ESP,0x4
// 00513235: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0051323a: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 0051323b: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00513240: ADD ESP,0x4
// 00513243: PUSH 0x1d
//   Label: LAB_00513243
// 00513245: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 0051324a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 0051324b: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 0051324d: CALL dword ptr [EDX]
// 0051324f: ADD ESP,0x8
// 00513252: TEST EAX,EAX
// 00513254: JZ 0x005132dc
//   XREF to: 005132dc (CONDITIONAL_JUMP)
// 0051325a: PUSH 0x20
// 0051325c: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00513261: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00513262: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513264: CALL dword ptr [EDX + 0x4]
// 00513267: ADD ESP,0x8
// 0051326a: TEST EAX,EAX
// 0051326c: JZ 0x0051343f
//   XREF to: 0051343f (CONDITIONAL_JUMP)
// 00513272: CMP dword ptr [0x03f6b878],0x0
//   Label: LAB_00513272
//   XREF to: 03f6b878 (READ)
// 00513279: JZ 0x005132b1
//   XREF to: 005132b1 (CONDITIONAL_JUMP)
// 0051327b: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00513280: PUSH 0x0
// 00513282: PUSH 0x0
// 00513284: PUSH 0x636dfe
//   XREF to: 00636dfe (DATA)
// 00513289: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051328e: ADD ESP,0xc
// 00513291: PUSH 0xb
// 00513293: PUSH 0x0
// 00513295: PUSH 0x636e23
//   XREF to: 00636e23 (DATA)
// 0051329a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0051329f: ADD ESP,0xc
// 005132a2: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 005132a7: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 005132ac: CALL wincore_winrun.cpp_getNextKeypress_FUN_005f2e90
//   XREF to: 005f2e90 (UNCONDITIONAL_CALL)
// 005132b1: MOV EBX,dword ptr [0x00681ef8]
//   Label: LAB_005132b1
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 005132b7: XOR ECX,ECX
// 005132b9: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 005132ba: MOV dword ptr [0x03f6b878],ECX
//   XREF to: 03f6b878 (WRITE)
// 005132c0: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 005132c5: ADD ESP,0x4
// 005132c8: CALL core_main.c_showDeveloperToolsMenu_FUN_005073a0
//   XREF to: 005073a0 (UNCONDITIONAL_CALL)
// 005132cd: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 005132d3: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 005132d4: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 005132d9: ADD ESP,0x4
// 005132dc: PUSH 0x1d
//   Label: LAB_005132dc
// 005132de: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005132e3: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005132e4: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005132e6: CALL dword ptr [EDX]
// 005132e8: ADD ESP,0x8
// 005132eb: TEST EAX,EAX
// 005132ed: JZ 0x0051332d
//   XREF to: 0051332d (CONDITIONAL_JUMP)
// 005132ef: PUSH 0x21
// 005132f1: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005132f6: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005132f7: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005132f9: CALL dword ptr [EDX + 0x4]
// 005132fc: ADD ESP,0x8
// 005132ff: TEST EAX,EAX
// 00513301: JZ 0x0051332d
//   XREF to: 0051332d (CONDITIONAL_JUMP)
// 00513303: MOV EDI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 00513309: PUSH EDI
//   XREF to: 03f6af64 (DATA)
// 0051330a: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 0051330f: ADD ESP,0x4
// 00513312: PUSH 0x2dd4130
//   XREF to: 02dd4130 (DATA)
// 00513317: CALL core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270
//   XREF to: 004be270 (UNCONDITIONAL_CALL)
// 0051331c: ADD ESP,0x4
// 0051331f: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00513324: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 00513325: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 0051332a: ADD ESP,0x4
// 0051332d: CMP dword ptr [ESP + 0x10],0x0
//   Label: LAB_0051332d
// 00513332: JZ 0x0051334e
//   XREF to: 0051334e (CONDITIONAL_JUMP)
// 00513334: MOV EBX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 0051333a: XOR ECX,ECX
// 0051333c: PUSH EBX
//   XREF to: 03f6af64 (DATA)
// 0051333d: MOV dword ptr [ESP + 0x14],ECX
// 00513341: CALL core_sound.cpp_CSound_FUN_005b3830
//   XREF to: 005b3830 (UNCONDITIONAL_CALL)
// 00513346: ADD ESP,0x4
// 00513349: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051334e: TEST EBP,EBP
//   Label: LAB_0051334e
// 00513350: JZ 0x00513010
//   XREF to: 00513010 (CONDITIONAL_JUMP)
// 00513356: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 0051335c: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 0051335d: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 00513362: ADD ESP,0x4
// 00513365: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 0051336a: CALL core_moon.cpp_CMoon_free_FUN_00529ce0
//   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
// 0051336f: ADD ESP,0x4
// 00513372: MOV EAX,EBP
// 00513374: POP EBX
// 00513375: POP ESI
// 00513376: POP EDI
// 00513377: ADD ESP,0x8
// 0051337a: POP EBP
// 0051337b: RET
// 0051337c: MOV EAX,0x1
//   Label: LAB_0051337c
// 00513381: ADD ESP,0x8
// 00513384: POP EBP
// 00513385: RET
// 00513386: MOV EAX,[0x0067b654]
//   Label: LAB_00513386
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0051338b: CMP dword ptr [EAX + 0x4],0x1e0
//   XREF to: 02d81aa0 (READ)
// 00513392: JLE 0x00512f61
//   XREF to: 00512f61 (CONDITIONAL_JUMP)
// 00513398: MOV dword ptr [EAX + 0x4],0x1e0
//   XREF to: 02d81aa0 (WRITE)
// 0051339f: MOV dword ptr [EAX],0x280
//   XREF to: 02d81a9c (WRITE)
// 005133a5: JMP 0x00512f61
//   XREF to: 00512f61 (UNCONDITIONAL_JUMP)
// 005133aa: PUSH 0x1d
//   Label: LAB_005133aa
// 005133ac: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 005133b1: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 005133b2: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 005133b4: CALL dword ptr [EDX]
// 005133b6: ADD ESP,0x8
// 005133b9: TEST EAX,EAX
// 005133bb: JZ 0x005133cb
//   XREF to: 005133cb (CONDITIONAL_JUMP)
// 005133bd: PUSH 0x1
// 005133bf: MOV EBX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005133c5: PUSH EBX
//   XREF to: 02d81a9c (DATA)
// 005133c6: JMP 0x005131af
//   XREF to: 005131af (UNCONDITIONAL_JUMP)
// 005133cb: PUSH EAX
//   Label: LAB_005133cb
// 005133cc: MOV ECX,dword ptr [0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005133d2: PUSH ECX
//   XREF to: 02d81a9c (DATA)
// 005133d3: JMP 0x005131af
//   XREF to: 005131af (UNCONDITIONAL_JUMP)
// 005133d8: PUSH 0x2f21590
//   Label: caseD_2
//   XREF to: 02f21590 (DATA)
// 005133dd: CALL core_moon.cpp_CMoon_free_FUN_00529ce0
//   XREF to: 00529ce0 (UNCONDITIONAL_CALL)
// 005133e2: ADD ESP,0x4
// 005133e5: MOV ESI,dword ptr [0x00681ef8]
//   XREF to: 00681ef8 (READ)
// 005133eb: PUSH ESI
//   XREF to: 03f6af64 (DATA)
// 005133ec: CALL core_sound.cpp_CSound_FUN_005b39a0
//   XREF to: 005b39a0 (UNCONDITIONAL_CALL)
// 005133f1: ADD ESP,0x4
// 005133f4: PUSH 0x1
// 005133f6: PUSH 0x0
// 005133f8: MOV EDI,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 005133fe: PUSH EDI
//   XREF to: 02d81a9c (DATA)
// 005133ff: CALL core_game.cpp_CGame_loadSaveGame_FUN_004e12b0
//   XREF to: 004e12b0 (UNCONDITIONAL_CALL)
// 00513404: ADD ESP,0xc
// 00513407: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 0051340c: CALL engine_texture.cpp_clearTextureCache_FUN_005dd8e0
//   XREF to: 005dd8e0 (UNCONDITIONAL_CALL)
// 00513411: PUSH 0x2f21590
//   XREF to: 02f21590 (DATA)
// 00513416: CALL core_moon.cpp_CMoon_init_FUN_00529ae0
//   XREF to: 00529ae0 (UNCONDITIONAL_CALL)
// 0051341b: ADD ESP,0x4
// 0051341e: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00513423: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 00513424: JMP 0x005131d5
//   XREF to: 005131d5 (UNCONDITIONAL_JUMP)
// 00513429: PUSH 0x0
//   Label: caseD_1
// 0051342b: CALL core_menu.cpp_ShowOptionsScreen_FUN_00512d30
//   XREF to: 00512d30 (UNCONDITIONAL_CALL)
// 00513430: JMP 0x005131da
//   XREF to: 005131da (UNCONDITIONAL_JUMP)
// 00513435: MOV EBP,0x63
//   Label: caseD_3
// 0051343a: JMP 0x005131dd
//   XREF to: 005131dd (UNCONDITIONAL_JUMP)
// 0051343f: PUSH 0x26
//   Label: LAB_0051343f
// 00513441: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 00513446: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 00513447: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 00513449: CALL dword ptr [EDX + 0x4]
// 0051344c: ADD ESP,0x8
// 0051344f: TEST EAX,EAX
// 00513451: JNZ 0x00513272
//   XREF to: 00513272 (CONDITIONAL_JUMP)
// 00513457: JMP 0x005132dc
//   XREF to: 005132dc (UNCONDITIONAL_JUMP)
