// Name: core_menu.cpp_FUN_004ea4d0
// Address: 004ea4d0
// Address Range: [[004ea4d0, 004ea9dc]]
// Convention: __cdecl
// Signature: int __cdecl core_menu_cpp_FUN_004ea4d0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_menu_cpp_FUN_004ea4d0(void)

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
  uint local_c;
  int local_8;
  
  pCVar2 = g_CGamePtr;
  if (DAT_005fba1c < 0x1e0) {
    return 1;
  }
  if ((_DAT_02cf5fcc == 0) && (0x1e0 < *(int *)&g_CGamePtr->field_0x4)) {
    *(uint *)&g_CGamePtr->field_0x4 = 0x1e0;
    *(uint *)pCVar2 = 0x280;
  }
  this_ptr_00 = g_MenuBitmaps;
  iVar6 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460
              (this_ptr_00,*(char **)((int)&PTR_s_f0100_00600478 + iVar6),0x40,0x40);
    iVar6 = iVar6 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040da80(this_ptr_00,2,1);
    this_ptr_00 = this_ptr_00 + 1;
  } while (iVar6 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurLeft,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurMiddle,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d460(&g_MenuBlurRight,"fblurr",0x68,0x46);
  iVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_004032b0();
  engine_texture_cpp_FUN_0056ac20();
  local_10 = 0;
  core_moon_cpp_FUN_004f94a0(&g_CMoonInstance);
  local_8 = 1;
  core_game_cpp_FUN_004b4430(g_CGamePtr);
  do {
    core_game_cpp_FUN_004b4440(g_CGamePtr);
    this_ptr = g_CDemonSetPtr;
    local_c = *(uint *)&g_CGamePtr->field_0x314;
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 1;
    core_set_cpp_FUN_0053b100(this_ptr,50000,50000,0x10000);
    *(uint *)&g_CDemonSetPtr->field_0x15ae94 = 0xdac;
    core_moon_cpp_FUN_004f9600(&g_CMoonInstance,local_c);
    core_moon_cpp_FUN_004f9670(&g_CMoonInstance);
    *(uint *)&g_CDemonSetPtr->field_0x15ae84 = 0;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("START");
    pcVar7 = &DAT_01d75888;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("OPTIONS");
    pcVar7 = &DAT_01d75988;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c794b);
    pcVar7 = &DAT_01d75a88;
    do {
      cVar1 = *pcVar3;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    pcVar7 = &DAT_01d75b88;
    pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960(&DAT_005c7950);
    puVar5 = &DAT_01d75888;
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
      *(byte **)(iVar4 + 0x1d75c88) = puVar5;
      iVar4 = iVar4 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar4 != 0x10);
    iVar4 = core_menu_cpp_FUN_004e7860((char **)0x1d75c88,4,&local_10,200,(char *)0x0);
    if (local_8 != 0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
    }
    wincore_wddvmem_cpp_FUN_0057a8a0();
    switch(iVar4) {
    case 0:
      core_moon_cpp_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_FUN_00560930(0x02CF5680);
      iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x2a);
      if ((iVar4 == 0) || (iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d), iVar4 == 0)) {
        iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
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
      core_game_cpp_FUN_004be8d0(g_CGamePtr,uVar8);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_0056ac20();
      core_moon_cpp_FUN_004f94a0(&g_CMoonInstance);
      goto LAB_004ea7ac;
    case 1:
      core_menu_cpp_FUN_004ea280(0);
      break;
    case 2:
      core_moon_cpp_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_FUN_00560930(0x02CF5680);
      core_game_cpp_FUN_004bdfb0(g_CGamePtr,(char *)0x0,1);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_0056ac20();
      core_moon_cpp_FUN_004f94a0(&g_CMoonInstance);
LAB_004ea7ac:
      core_sound_cpp_FUN_005607d0(0x02CF5680);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,1);
    if (iVar4 != 0) {
      iVar6 = 99;
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if ((iVar4 != 0) && (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x32), iVar4 != 0)) {
      iVar4 = sound_sndmain_cpp_FUN_00556750();
      sound_sndmain_cpp_setSoundMuted_FUN_00556760((uint)(iVar4 == 0));
      core_sound_cpp_FUN_005607d0(0x02CF5680);
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if ((iVar4 != 0) &&
       ((iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x20), iVar4 != 0 ||
        (iVar4 = (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x26), iVar4 != 0)))) {
      core_moon_cpp_FUN_004f9580(&g_CMoonInstance);
      core_sound_cpp_FUN_00560930(0x02CF5680);
      core_main_c_FUN_004e4400();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      engine_texture_cpp_FUN_0056ac20();
      core_moon_cpp_FUN_004f94a0(&g_CMoonInstance);
      core_sound_cpp_FUN_005607d0(0x02CF5680);
    }
    iVar4 = (**(code **)*0x01D70A78)(0x01D70A78,0x1d);
    if (iVar4 != 0) {
      (**(code **)(*0x01D70A78 + 4))(0x01D70A78,0x21);
    }
    if (local_8 != 0) {
      local_8 = 0;
      core_sound_cpp_FUN_005607d0(0x02CF5680);
      engine_2d_c_clearInputAndWait_FUN_004032b0();
    }
    if (iVar6 != 0) {
      core_sound_cpp_FUN_00560930(0x02CF5680);
      core_moon_cpp_FUN_004f9580(&g_CMoonInstance);
      return iVar6;
    }
  } while( true );
}
