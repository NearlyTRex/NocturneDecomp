// Name: core_menu.cpp_showMainGameMenu_FUN_0050cc90
// Address: 0050cc90
// Address Range: [[0050cc90, 0050d199]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_showMainGameMenu_FUN_0050cc90(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_showMainGameMenu_FUN_0050cc90(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  char *pcVar3;
  int iVar4;
  byte *puVar5;
  int iVar6;
  CAlphaBitmap *this_ptr_00;
  char *pcVar7;
  uint uVar8;
  int local_10;
  float local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (DAT_0061b49c < 0x1e0) {
    return 1;
  }
  if ((_DAT_02c83370 == 0) && (0x1e0 < g_CGamePtr->game_pixy)) {
    g_CGamePtr->game_pixy = 0x1e0;
    pCVar2->game_pixx = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar6 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_0061f570 + iVar6),0x40,0x40);
    iVar6 = iVar6 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040d840(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar6 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d220(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_FUN_00597c30();
  local_10 = 0;
  core_moon_cpp_FUN_00521c50(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_004cbf10(g_CGamePtr);
  do {
    core_game_cpp_FUN_004cbf20(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = g_CGamePtr->delta_time_float;
    g_CDemonSetPtr->rendering_mode = 1;
    core_set_cpp_CDemonSet_setFlatColor_FUN_00555770(this_ptr,50000,50000,0x10000);
    g_CDemonSetPtr->ambient_base_quick = 0xdac;
    core_moon_cpp_FUN_00521dd0(&g_CMoonInstance,local_c);
    core_moon_cpp_FUN_00521e40(&g_CMoonInstance);
    g_CDemonSetPtr->rendering_mode = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("S T A R T");
    pcVar7 = &DAT_01d21048;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("O P T I O N S");
    pcVar7 = &DAT_01d21148;
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
    pcVar7 = &DAT_01d21248;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = &DAT_01d21348;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Q U I T");
    puVar5 = &DAT_01d21048;
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
      *(byte **)(iVar4 + 0x1d21448) = puVar5;
      iVar4 = iVar4 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_00509e20
                      ((char **)0x1d21448,4,&local_10,0x32,(char *)0x0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_005acff0();
    switch(iVar4) {
    case 0:
      core_moon_cpp_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(0x02C82A60);
      iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x2a);
      if ((iVar4 == 0) || (iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d), iVar4 == 0)) {
        iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
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
      core_game_cpp_FUN_004d7250(g_CGamePtr,uVar8);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00597c30();
      core_moon_cpp_FUN_00521c50(&g_CMoonInstance);
      goto LAB_0050cf69;
    case 1:
      core_menu_cpp_FUN_0050c990(0);
      break;
    case 2:
      core_moon_cpp_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(0x02C82A60);
      core_game_cpp_FUN_004d6990(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00597c30();
      core_moon_cpp_FUN_00521c50(&g_CMoonInstance);
LAB_0050cf69:
      core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,1);
    if (iVar4 != 0) {
      iVar6 = 99;
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x32), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_005735f0();
      sound_sndmain_cpp_setSoundMuted_FUN_00573600((uint)(iVar4 == 0));
      core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if ((iVar4 != 0) &&
       ((iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x20), iVar4 != 0 ||
        (iVar4 = (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x26), iVar4 != 0)))) {
      core_moon_cpp_FUN_00521d50(&g_CMoonInstance);
      core_sound_cpp_CSound_reset_FUN_0057d800(0x02C82A60);
      core_main_c_FUN_005031c0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00597c30();
      core_moon_cpp_FUN_00521c50(&g_CMoonInstance);
      core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
    }
    iVar4 = (**(code **)*0x01D1BCA0)(0x01D1BCA0,0x1d);
    if (iVar4 != 0) {
      (**(code **)(*0x01D1BCA0 + 4))(0x01D1BCA0,0x21);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_CSound_configure_FUN_0057d6a0(0x02C82A60);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar6 != 0) {
      core_sound_cpp_CSound_reset_FUN_0057d800(0x02C82A60);
      core_moon_cpp_FUN_00521d50(&g_CMoonInstance);
      return iVar6;
    }
  } while( true );
}
