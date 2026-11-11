// Name: core_menu.cpp_showMainGameMenu_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee8d8]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_showMainGameMenu_FUN_004ee3f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_showMainGameMenu_FUN_004ee3f0(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  char *pcVar3;
  int iVar4;
  byte *puVar5;
  CAlphaBitmap *this_ptr_00;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  int local_10;
  float local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (DAT_006141bc < 0x1e0) {
    return 1;
  }
  if ((_DAT_0264bba0 == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar6 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_00618088 + iVar6),0x40,0x40);
    iVar6 = iVar6 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar6 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_FUN_00575010();
  local_10 = 0;
  core_moon_cpp_CMoon_init_FUN_005023e0(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004b3000(g_CGamePtr);
  do {
    core_game_cpp_CGame_updateDT_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = g_CGamePtr->delta_time_float;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_005344c0(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_CMoon_update_FUN_005024a0(&g_CMoonInstance,local_c);
    core_moon_cpp_CMoon_render_FUN_00502510(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("S T A R T");
    pcVar7 = &DAT_01d082e0;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("O P T I O N S");
    pcVar7 = &DAT_01d083e0;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("L O A D");
    pcVar7 = &DAT_01d084e0;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = &DAT_01d085e0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Q U I T");
    puVar5 = &DAT_01d082e0;
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
      *(byte **)(iVar4 + 0x1d086e0) = puVar5;
      iVar4 = iVar4 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = core_menu_cpp_FUN_004eb0e0((char **)0x1d086e0,4,&local_10,0x136,(char *)0x0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
    switch(iVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_00502450(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0055adb0(0x0264B290);
      iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
      if ((iVar4 == 0) || (iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar4 == 0)) {
        iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
        if (iVar4 == 0) {
          uVar8 = 0;
        }
        else {
          uVar8 = 1;
        }
      }
      else {
        uVar8 = 2;
      }
      core_game_cpp_FUN_004bc840(g_CGamePtr,uVar8);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00575010();
      core_moon_cpp_CMoon_init_FUN_005023e0(&g_CMoonInstance);
      goto LAB_004ee6cc;
    case 1:
      core_menu_cpp_FUN_004ee1a0(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_00502450(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0055adb0(0x0264B290);
      core_game_cpp_FUN_004bbf70(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00575010();
      core_moon_cpp_CMoon_init_FUN_005023e0(&g_CMoonInstance);
LAB_004ee6cc:
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar4 != 0) {
      iVar6 = 99;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x32), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      sound_sndmain_cpp_setSoundMuted_FUN_00550bd0((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar4 != 0) &&
       ((iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x20), iVar4 != 0 ||
        (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x26), iVar4 != 0)))) {
      core_sound_cpp_CSound_reset_FUN_0055adb0(0x0264B290);
      core_main_c_FUN_004e45e0();
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if (iVar4 != 0) {
      (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x21);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_CSound_configure_FUN_0055ac50(0x0264B290);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar6 != 0) {
      core_sound_cpp_CSound_reset_FUN_0055adb0(0x0264B290);
      core_moon_cpp_CMoon_free_FUN_00502450(&g_CMoonInstance);
      return iVar6;
    }
  } while( true );
}
