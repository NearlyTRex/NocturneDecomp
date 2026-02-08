// Name: core_main.c_finalizeGameSystems_FUN_00508570
// Address: 00508570
// Address Range: [[00508570, 0050885a]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_finalizeGameSystems_FUN_00508570(void)

#include "nocturne.h"

void __cdecl core_main_c_finalizeGameSystems_FUN_00508570(void)

{
  _FILE *file_ptr;
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  char *text;
  int iVar5;
  
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\main.c",0x4f9);
  file_ptr = engine_dosio_c_getFile_FUN_00481a50
                       (&s_EmptyChar_0063564e,"enemy.pod","rb");
  if (file_ptr == (_FILE *)0x0) {
    iVar1 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(g_ThemeFont,0x58);
    wincore_winrun_cpp_getTime_FUN_005f2dc0();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    uVar2 = rand();
    _sprintf(&stack0xfffffef0,"load%d",(uVar2 & 3) + 1);
    engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
              (&g_LoadingScreenBitmap1,&stack0xfffffef0,0x280,0x1e0);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(&g_LoadingScreenBitmap1,0,0,0xffff);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_MediumFont,"In stores 10/26/99");
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,"In stores 10/26/99",0x140 - iVar3 / 2,0xdc,7,0);
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80
                      (g_MediumFont,"www.nocturnegame.com");
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,"www.nocturnegame.com",0x140 - iVar3 / 2,0x1e0 - iVar1,7,0);
    iVar5 = 0xa0000;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar3 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    do {
      wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
      iVar4 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      g_GlobalDeltaTimeInt = (iVar4 - iVar3) / 0x12;
      if (g_GlobalDeltaTimeInt < 0) {
        g_GlobalDeltaTimeInt = 0;
      }
      if (0x4000 < g_GlobalDeltaTimeInt) {
        g_GlobalDeltaTimeInt = 0x4000;
      }
      iVar5 = iVar5 - g_GlobalDeltaTimeInt;
      iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,0x2a);
      if (iVar3 != 0) {
        iVar3 = (*g_CKeysPtr->vtable->getKeyState)(g_CKeysPtr,1);
        if (iVar3 != 0) break;
      }
      iVar3 = iVar4;
    } while (0 < iVar5);
    text = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Press any key to continue...");
    iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_004cfe80(g_MediumFont,text);
    engine_font_cpp_CBitFont_drawText_FUN_004cda80
              (g_MediumFont,text,0x140 - iVar3 / 2,iVar1 * -2 + 0x1e0,7,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    wincore_winrun_cpp_getNextKeypress_FUN_005f2e90();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap1);
    engine_alphabit_cpp_CAlphaBitmap_free_FUN_00410560(&g_LoadingScreenBitmap2);
  }
  else {
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\main.c",0x503);
  }
  core_netgame_cpp_CNetGame_FUN_0053f830(g_CNetGamePtr);
  support_newmsg_cpp_doNothing_FUN_00544500();
  core_mission_cpp_CDemonMission_checkMemory_FUN_00522d20(g_CDemonMissionPtr);
  core_sound_cpp_CSound_dtor_FUN_005aaeb0();
  core_dmodel_cpp_freeAllModels_FUN_00478cb0();
  core_skeleton_cpp_freeAllModels_FUN_005a1dc0();
  core_skeleton_cpp_freeAllSkeletons_FUN_005a1ea0();
  engine_matrix_c_doNothing_FUN_0050c5b0();
  wincore_winrun_cpp_endPeriod_FUN_005f2db0();
  engine_2d_c_cleanupGraphicsSystem_FUN_005ecd90();
  wincore_wddvmem_cpp_freeTextureCache_FUN_005dd7a0();
  core_dfont_cpp_freeFonts_FUN_004710a0();
  wincore_winrun_cpp_doNothing_FUN_005f4380();
  engine_pod_cpp_CPod_cleanup_FUN_00550c80((CPod *)g_CDemonPodPtr);
  core_inivar_cpp_writeIniData_FUN_004fc510();
  shape_memdbg_cpp_SMemHead_checkAllMemory_FUN_0050efe0("..\\core\\main.c",0x530);
  return;
}
