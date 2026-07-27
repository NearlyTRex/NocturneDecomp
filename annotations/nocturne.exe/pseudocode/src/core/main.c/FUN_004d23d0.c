// Name: core_main.c_FUN_004d23d0
// Address: 004c85e0
// Address Range: [[004c85e0, 004c85e4]]
// Convention: unknown
// Signature: int core_main_c_FUN_004d23d0(void)

#include "nocturne.h"

int core_main_c_FUN_004d23d0(void)

{
  char cVar1;
  uint *puVar2;
  char *pcVar3;
  uint uVar4;
  byte *puVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  uint uStack_c;
  int iStack_8;
  
  puVar2 = 0x01C775EC;
  if (DAT_005b7620 < 0x1e0) {
    return 1;
  }
  if ((INT_02dc9d60 == 0) && (0x1e0 < (int)0x01C775EC[1])) {
    0x01C775EC[1] = 0x1e0;
    *puVar2 = 0x280;
  }
  iVar6 = 0x1cc56e0;
  iVar7 = 0;
  do {
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
              (iVar6,*(uint *)((int)&PTR_s_f0100_005baf18 + iVar7),0x40,0x40);
    iVar7 = iVar7 + 4;
    engine_alphabit_cpp_CAlphaBitmap_scale_FUN_0040e9e0(iVar6,2,1);
    iVar6 = iVar6 + 0x14;
  } while (iVar7 != 0x20);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(0x1cc5b20,"fblurl",0x68,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(0x1cc5b34,"fblurm",0x20,0x46);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(0x1cc5b48,"fblurr",0x68,0x46);
  iVar6 = 0;
  engine_2d_c_clearInputAndWait_FUN_00403f50();
  engine_texture_cpp_FUN_005459f0();
  uStack_c = 0;
  core_moon_cpp_CMoon_init_FUN_004de860(0x1cc5780);
  iStack_8 = 1;
  core_game_cpp_CGame_saveClockTime_FUN_0049a890(0x01C775EC);
  do {
    core_game_cpp_CGame_updateDT_FUN_0049a8a0(0x01C775EC);
    core_moon_cpp_CMoon_update_FUN_004deae0(0x1cc5780,0x01C775EC[0x99]);
    core_moon_cpp_CMoon_render_FUN_004dec50(0x1cc5780);
    pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("S T A R T");
    pcVar8 = &DAT_01cc7d10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("O P T I O N S");
    pcVar8 = &DAT_01cc7e10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("L O A D");
    pcVar8 = &DAT_01cc7f10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    pcVar8 = &DAT_01cc8010;
    pcVar3 = (char *)support_newmsg_cpp_getLocalizedString_FUN_004ee370("Q U I T");
    puVar5 = &DAT_01cc7d10;
    do {
      cVar1 = *pcVar3;
      *pcVar8 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar8[1] = cVar1;
      pcVar8 = pcVar8 + 2;
    } while (cVar1 != '\0');
    iVar7 = 0;
    do {
      *(byte **)(iVar7 + 0x1cc8110) = puVar5;
      iVar7 = iVar7 + 4;
      puVar5 = puVar5 + 0x100;
    } while (iVar7 != 0x10);
    uVar4 = core_menu_cpp_renderMenuAndGetChoice_FUN_004cf440(0x1cc8110,4,&uStack_c,0xfa,0);
    if (iStack_8 != 0) {
      engine_special_cpp_clearScreen_FUN_0052ee70();
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    switch(uVar4) {
    case 0:
      core_moon_cpp_CMoon_free_FUN_004dea60(0x1cc5780);
      core_sound_cpp_CSound_reset_FUN_0052e9c0(0x02DC9450);
      iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
      if ((iVar7 == 0) ||
         (iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d), iVar7 == 0)) {
        iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
        if (iVar7 == 0) {
          uVar4 = 0;
        }
        else {
          uVar4 = 1;
        }
      }
      else {
        uVar4 = 2;
      }
      core_game_cpp_FUN_004a4b50(0x01C775EC,uVar4);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      engine_texture_cpp_FUN_005459f0();
      core_moon_cpp_CMoon_init_FUN_004de860(0x1cc5780);
      goto LAB_004d2665;
    case 1:
      core_menu_cpp_showOptionsScreen_FUN_004d21c0(0);
      break;
    case 2:
      core_moon_cpp_CMoon_free_FUN_004dea60(0x1cc5780);
      core_sound_cpp_CSound_reset_FUN_0052e9c0(0x02DC9450);
      core_game_cpp_FUN_004a4170(0x01C775EC,0,1);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
      engine_texture_cpp_FUN_005459f0();
      core_moon_cpp_CMoon_init_FUN_004de860(0x1cc5780);
LAB_004d2665:
      core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
      break;
    case 3:
      iVar6 = 99;
    }
    iVar7 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,1);
    if (iVar7 != 0) {
      iVar6 = 99;
    }
    iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
    if ((iVar7 != 0) &&
       (iVar7 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x32), iVar7 != 0)) {
      iVar7 = sound_sndmain_cpp_isSoundEnabled_FUN_00526ca0();
      sound_sndmain_cpp_setSoundEnabled_FUN_00526cb0(iVar7 == 0);
      core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
    }
    iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
    if ((iVar7 != 0) &&
       ((iVar7 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x20), iVar7 != 0 ||
        (iVar7 = (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x26), iVar7 != 0)))) {
      core_sound_cpp_CSound_reset_FUN_0052e9c0(0x02DC9450);
      core_main_c_FUN_004c8510();
      core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
    }
    iVar7 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x1d);
    if (iVar7 != 0) {
      (**(code **)(*(int *)INT_005bac64 + 4))(INT_005bac64,0x21);
    }
    if (iStack_8 != 0) {
      iStack_8 = 0;
      core_sound_cpp_CSound_configure_FUN_0052e850(0x02DC9450);
      engine_2d_c_clearInputAndWait_FUN_00403f50();
    }
    if (iVar6 != 0) {
      core_sound_cpp_CSound_reset_FUN_0052e9c0(0x02DC9450);
      core_moon_cpp_CMoon_free_FUN_004dea60(0x1cc5780);
      return iVar6;
    }
  } while( true );
}
