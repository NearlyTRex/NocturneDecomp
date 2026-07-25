// Name: FUN_004c90e0
// Address: 004c90e0
// Address Range: [[004c90e0, 004c93a8]]
// Convention: unknown
// Signature: void FUN_004c90e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004c90e0(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte local_110 [256];
  
  iVar1 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_00587ed1,"enemy.pod","rb");
  if (iVar1 == 0) {
    iVar2 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(_DAT_014b9900,0x58);
    wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    uVar3 = rand();
    _sprintf(local_110,"load%d",(uVar3 & 3) + 1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0(0x1cc480c,local_110,0x280,0x1e0);
    wincore_windll_cpp_clearScreen_FUN_0052ee70();
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(0x1cc480c,0,0,0xffff);
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b98f8,"In stores 10/26/99");
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (_DAT_014b98f8,"In stores 10/26/99",0x140 - iVar1 / 2,0xdc,7,0);
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (_DAT_014b98f8,"www.nocturnegame.com");
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (_DAT_014b98f8,"www.nocturnegame.com",0x140 - iVar1 / 2,0x1e0 - iVar2,7,0);
    iVar6 = 0xa0000;
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar1 = wincore_winrun_cpp_getTime_FUN_00558a30();
    do {
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
      _DAT_01bd1d80 = (iVar4 - iVar1) / 0x12;
      if (_DAT_01bd1d80 < 0) {
        _DAT_01bd1d80 = 0;
      }
      if (0x4000 < _DAT_01bd1d80) {
        _DAT_01bd1d80 = 0x4000;
      }
      iVar6 = iVar6 - _DAT_01bd1d80;
      iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,0x2a);
      if (iVar1 != 0) {
        iVar1 = (*(code *)**(uint **)INT_005bac64)(INT_005bac64,1);
        if (iVar1 != 0) break;
      }
      iVar1 = iVar4;
    } while (0 < iVar6);
    uVar5 = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press any key to continue...");
    iVar1 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(_DAT_014b98f8,uVar5);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (_DAT_014b98f8,uVar5,0x140 - iVar1 / 2,iVar2 * -2 + 0x1e0,7,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(0x1cc480c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(0x1cc4820);
  }
  else {
    _fclose(iVar1);
  }
  core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(0x01CEA280);
  FUN_004940d0(INT_005b9284);
  FUN_004ee680(0x01D465C0);
  FUN_004d7e90(0x01CC9450);
  thunk_FUN_00527e10(0x02DC9450);
  core_dmodel_cpp_FUN_00454460();
  FUN_0051f650();
  core_skeleton_cpp_freeAllSkeletons_FUN_0051f730();
  FUN_004cca50();
  wincore_winrun_cpp_endPeriod_FUN_00558a20();
  FUN_004012a0();
  thunk_FUN_005458d0();
  FUN_0044cc00();
  wincore_winrun_cpp_FUN_00559e90();
  engine_pod_cpp_CPod_cleanup_FUN_004f8b40(0x01E528D0);
  core_inivar_cpp_writeIniData_FUN_004be2d0();
  return;
}
