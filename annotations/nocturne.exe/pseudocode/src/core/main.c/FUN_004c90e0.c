// Name: core_main.c_FUN_004c90e0
// Address: 004c90e0
// Address Range: [[004c90e0, 004c93a8]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_FUN_004c90e0(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_main_c_FUN_004c90e0(void)

{
  _FILE *file_handle;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  
  file_handle = engine_dosio_cpp_getFile_FUN_00456a60
                          (&DAT_00587ed1,"enemy.pod","rb");
  if (file_handle == (_FILE *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0(g_CBitFont_PTR_014b9900,0x58);
    wincore_winrun_cpp_getTime_FUN_00558a30();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    uVar2 = rand();
    _sprintf(&stack0xfffffef0,"load%d",(uVar2 & 3) + 1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040e3c0
              (&g_CAlphaBitmap_01cc480c,&stack0xfffffef0,0x280,0x1e0);
    engine_special_cpp_clearScreen_FUN_0052ee70();
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710(&g_CAlphaBitmap_01cc480c,0,0,0xffff);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (g_CBitFont_PTR_014b98f8,"In stores 10/26/99");
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,"In stores 10/26/99",0x140 - iVar3 / 2,0xdc,7,0);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0
                      (g_CBitFont_PTR_014b98f8,"www.nocturnegame.com");
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,"www.nocturnegame.com",0x140 - iVar3 / 2,
               0x1e0 - iVar1,7,0);
    iVar5 = 0xa0000;
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    iVar3 = wincore_winrun_cpp_getTime_FUN_00558a30();
    do {
      wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
      iVar4 = wincore_winrun_cpp_getTime_FUN_00558a30();
      _DAT_01bd1d80 = (iVar4 - iVar3) / 0x12;
      if (_DAT_01bd1d80 < 0) {
        _DAT_01bd1d80 = 0;
      }
      if (0x4000 < _DAT_01bd1d80) {
        _DAT_01bd1d80 = 0x4000;
      }
      iVar5 = iVar5 - _DAT_01bd1d80;
      iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_LSHIFT);
      if (iVar3 != 0) {
        iVar3 = (*g_CKeys_PTR_005bac64->vtable->getKeyState)(g_CKeys_PTR_005bac64,DIK_ESCAPE);
        if (iVar3 != 0) break;
      }
      iVar3 = iVar4;
    } while (0 < iVar5);
    text = support_newmsg_cpp_getLocalizedString_FUN_004ee370("Press any key to continue...");
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(g_CBitFont_PTR_014b98f8,text);
    engine_font_cpp_CBitFont_drawText_FUN_00490980
              (g_CBitFont_PTR_014b98f8,text,0x140 - iVar3 / 2,iVar1 * -2 + 0x1e0,7,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    wincore_winrun_cpp_getNextKeypress_FUN_00558b00();
    engine_2d_c_clearInputAndWait_FUN_00403f50();
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(&g_CAlphaBitmap_01cc480c);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_0040e360(&g_CAlphaBitmap_01cc4820);
  }
  else {
    _fclose(file_handle);
  }
  core_netgame_cpp_CNetGame_shutdown_FUN_004e99c0(g_CNetGame_PTR_005bdee0);
  xxx_unk_c_FUN_004940d0();
  engine_ncursfx_cpp_FUN_004ee680(g_CMouse_PTR_005be060);
  core_mission_cpp_FUN_004d7e90(g_CDemonMission_PTR_005baf90);
  core_sound_cpp_FUN_00527e10(g_CSound_PTR_005bed68);
  core_dmodel_cpp_FUN_00454460();
  core_skeleton_cpp_FUN_0051f650();
  core_skeleton_cpp_freeAllSkeletons_FUN_0051f730();
  engine_matrix_c_FUN_004cca50();
  wincore_winrun_cpp_endPeriod_FUN_00558a20();
  engine_2d_c_FUN_004012a0();
  engine_3d_c_FUN_005458d0();
  core_dfont_cpp_FUN_0044cc00();
  wincore_winrun_cpp_FUN_00559e90();
  engine_pod_cpp_CPod_cleanup_FUN_004f8b40(g_CPod_PTR_005be1cc);
  core_inivar_cpp_writeIniData_FUN_004be2d0();
  return;
}
