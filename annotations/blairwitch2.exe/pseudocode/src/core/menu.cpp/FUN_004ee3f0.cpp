// Name: core_menu.cpp_FUN_004ee3f0
// Address: 004ee3f0
// Address Range: [[004ee3f0, 004ee8d8]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_004ee3f0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_FUN_004ee3f0(void)

{
  char cVar1;
  CGame *pCVar2;
  CDemonSet *this_ptr;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  byte *puVar6;
  CAlphaBitmap *this_ptr_00;
  int iVar7;
  char *pcVar8;
  uint local_10;
  uint local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (DAT_006141bc < 0x1e0) {
    return 1;
  }
  if ((_DAT_0264bba0 == 0) && (0x1e0 < *(int *)&g_CGamePtr->field_0x4)) {
    *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
    *(uint *)pCVar2 = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar7 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_00618088 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040dbd0(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar7 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar7 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_FUN_00575010();
  local_10 = 0;
  core_moon_cpp_FUN_005023e0(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_FUN_004b3000(g_CGamePtr);
  do {
    core_game_cpp_FUN_004b3010(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = *(uint *)&g_CGamePtr->field_0x284;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_005344c0(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_005024a0(&g_CMoonInstance,local_c);
    core_moon_cpp_FUN_00502510(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("S T A R T");
    pcVar8 = &DAT_01d082e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("O P T I O N S");
    pcVar8 = &DAT_01d083e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("L O A D");
    pcVar8 = &DAT_01d084e0;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01d085e0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Q U I T");
    puVar6 = &DAT_01d082e0;
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
      *(byte **)(iVar4 + 0x1d086e0) = puVar6;
      iVar4 = iVar4 + 4;
      puVar6 = puVar6 + 0x100;
    } while (iVar4 != 0x10);
    uVar5 = core_menu_cpp_FUN_004eb0e0(0x1d086e0,4,&local_10,0x136,0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
    }
    wincore_wddvmem_cpp_FUN_00589560();
    switch(uVar5) {
    case 0:
      core_moon_cpp_FUN_00502450(&g_CMoonInstance);
      core_sound_cpp_FUN_0055adb0(0x0264B290);
      iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x2a);
      if ((iVar4 == 0) || (iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d), iVar4 == 0)) {
        iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
        if (iVar4 == 0) {
          uVar5 = 0;
        }
        else {
          uVar5 = 1;
        }
      }
      else {
        uVar5 = 2;
      }
      core_game_cpp_FUN_004bc840(g_CGamePtr,uVar5);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00575010();
      core_moon_cpp_FUN_005023e0(&g_CMoonInstance);
      goto LAB_004ee6cc;
    case 1:
      core_menu_cpp_FUN_004ee1a0(0);
      break;
    case 2:
      core_moon_cpp_FUN_00502450(&g_CMoonInstance);
      core_sound_cpp_FUN_0055adb0(0x0264B290);
      core_game_cpp_FUN_004bbf70(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_00575010();
      core_moon_cpp_FUN_005023e0(&g_CMoonInstance);
LAB_004ee6cc:
      core_sound_cpp_FUN_0055ac50(0x0264B290);
      break;
    case 3:
      iVar7 = 99;
    }
    iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,1);
    if (iVar4 != 0) {
      iVar7 = 99;
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x32), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_isSoundMuted_FUN_00550bc0();
      sound_sndmain_cpp_setSoundMuted_FUN_00550bd0((uint)(iVar4 == 0));
      core_sound_cpp_FUN_0055ac50(0x0264B290);
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if ((iVar4 != 0) &&
       ((iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x20), iVar4 != 0 ||
        (iVar4 = (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x26), iVar4 != 0)))) {
      core_sound_cpp_FUN_0055adb0(0x0264B290);
      core_main_c_FUN_004e45e0();
      core_sound_cpp_FUN_0055ac50(0x0264B290);
    }
    iVar4 = (**(code **)*0x01D02F84)(0x01D02F84,0x1d);
    if (iVar4 != 0) {
      (**(code **)(*0x01D02F84 + 4))(0x01D02F84,0x21);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_FUN_0055ac50(0x0264B290);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar7 != 0) {
      core_sound_cpp_FUN_0055adb0(0x0264B290);
      core_moon_cpp_FUN_00502450(&g_CMoonInstance);
      return iVar7;
    }
  } while( true );
}
