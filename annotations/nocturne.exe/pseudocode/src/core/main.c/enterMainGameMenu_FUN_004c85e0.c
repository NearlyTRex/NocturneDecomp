// Name: core_main.c_enterMainGameMenu_FUN_004c85e0
// Address: 004c85e0
// Address Range: [[004c85e0, 004c85e4]]
// Convention: __cdecl
// Signature: int __cdecl core_main_c_enterMainGameMenu_FUN_004c85e0(void)

#include "nocturne.h"

int __cdecl core_main_c_enterMainGameMenu_FUN_004c85e0(void)

{
  char cVar1;
  CGame *pCVar2;
  char *pcVar3;
  int iVar4;
  byte *puVar5;
  CAlphaBitmap *this_ptr;
  int iVar6;
  char *pcVar7;
  int iStack_c;
  int iStack_8;
  
  pCVar2 = g_CGame_PTR_005b9354;
  if (g_WindowHeight < 0x1e0) {
    return 1;
  }
  if ((INT_02dc9d60 == 0) && (0x1e0 < g_CGame_PTR_005b9354->game_pixy)) {
    g_CGame_PTR_005b9354->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr = g_CAlphaBitmap_ARRAY_01cc56e0;
  iVar6 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
              (this_ptr,*(char **)((int)&PTR_s_f0100_005baf18 + iVar6),0x40,0x40);
    iVar6 = iVar6 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(this_ptr,2,1);
    this_ptr = this_ptr + 1;
  } while (iVar6 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_CAlphaBitmap_01cc5b20,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_CAlphaBitmap_01cc5b34,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
            (&g_CAlphaBitmap_01cc5b48,"fblurr",0x68,0x46);
  iVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_texture_cpp_FUN_005459f0();
  iStack_c = 0;
  core_moon_cpp_CMoon_init_FUN_004de860(&g_CMoon_01cc5780);
  iStack_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(g_CGame_PTR_005b9354);
  do {
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(g_CGame_PTR_005b9354);
    core_moon_cpp_CMoon_update_FUN_004deae0
              (&g_CMoon_01cc5780,g_CGame_PTR_005b9354->delta_time_float);
    core_moon_cpp_CMoon_render_FUN_004dec50(&g_CMoon_01cc5780);
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("S T A R T");
    pcVar7 = &DAT_01cc7d10;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("O P T I O N S");
    pcVar7 = &DAT_01cc7e10;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("L O A D");
    pcVar7 = &DAT_01cc7f10;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = &DAT_01cc8010;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Q U I T");
    puVar5 = &DAT_01cc7d10;
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
      *(byte **)(iVar4 + 0x1cc8110) = puVar5;
      iVar4 = iVar4 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440
                      ((char **)0x1cc8110,4,&iStack_c,0xfa,(char *)0x0);
    if (iStack_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    switch(iVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_004dea60(&g_CMoon_01cc5780);
      core_sound_cpp_CSound_reset_FUN_0052e9c0(g_CSound_PTR_005bed68);
      iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
      if ((iVar4 == 0) ||
         (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL),
         iVar4 == 0)) {
        iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
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
      core_game_cpp_CGame_FUN_004a4b50(g_CGame_PTR_005b9354,iVar4);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      engine_texture_cpp_FUN_005459f0();
      core_moon_cpp_CMoon_init_FUN_004de860(&g_CMoon_01cc5780);
      goto LAB_004d2665;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_004d21c0(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_004dea60(&g_CMoon_01cc5780);
      core_sound_cpp_CSound_reset_FUN_0052e9c0(g_CSound_PTR_005bed68);
      core_game_cpp_CGame_FUN_004a4170(g_CGame_PTR_005b9354,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      engine_texture_cpp_FUN_005459f0();
      core_moon_cpp_CMoon_init_FUN_004de860(&g_CMoon_01cc5780);
LAB_004d2665:
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
    if (iVar4 != 0) {
      iVar6 = 99;
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_M),
       iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if ((iVar4 != 0) &&
       ((iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_D),
        iVar4 != 0 ||
        (iVar4 = (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_L),
        iVar4 != 0)))) {
      core_sound_cpp_CSound_reset_FUN_0052e9c0(g_CSound_PTR_005bed68);
      core_main_c_FUN_004c8510();
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
    }
    iVar4 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LCONTROL);
    if (iVar4 != 0) {
      (*g_CKeys_PTR_005bac64->vtable->getAndClearKeyState)(g_CKeys_PTR_005bac64,DIK_F);
    }
    if (iStack_8 != 0) {
      iStack_8 = 0;
      core_sound_cpp_CSound_configure_FUN_0052e850(g_CSound_PTR_005bed68);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
    }
    if (iVar6 != 0) {
      core_sound_cpp_CSound_reset_FUN_0052e9c0(g_CSound_PTR_005bed68);
      core_moon_cpp_CMoon_free_FUN_004dea60(&g_CMoon_01cc5780);
      return iVar6;
    }
  } while( true );
}
