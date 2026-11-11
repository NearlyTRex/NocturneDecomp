// Name: core_main.c_initializeGameSystems_FUN_004e46c0
// Address: 004e46c0
// Address Range: [[004e46c0, 004e4e1d]]
// Convention: __cdecl
// Signature: void __cdecl core_main_c_initializeGameSystems_FUN_004e46c0(int argc,char **argv)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_main_c_initializeGameSystems_FUN_004e46c0(int argc,char **argv)

{
  uint *puVar1;
  char cVar2;
  float fVar3;
  CGame *pCVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  char *pcVar11;
  byte bVar12;
  char acStack_528 [512];
  char acStack_328 [512];
  char acStack_128 [256];
  CAlphaBitmap CStack_28;
  int iStack_14;
  
  bVar12 = 0;
  _DAT_01c38b50 = 0;
  _DAT_0061e28c = 0x10000;
  _DAT_0061e280 = 1;
  iVar5 = _fopen("stderr.txt");
  if (iVar5 != 0) {
    _fclose();
    iVar5 = _chmod("stderr.txt",0x1c0);
    if (iVar5 != 0) {
      _DAT_01d046a0 = "..\\core\\main.c";
      _DAT_01d046a4 = 0x3b5;
      core_main_c_FUN_004e4500();
    }
  }
  _freopen("stderr.txt",&DAT_005dc1da);
  unkafter_flattn_cpp_FUN_004a67a0();
  core_inivar_cpp_readIniData_FUN_004d8d60();
  _DAT_0264bbac = 2;
  engine_pod_cpp_CPod_init_FUN_0051b320(&g_CDemonPodPtr->base);
  engine_dosio_cpp_addGetFileInfoHook_FUN_00460930();
  engine_dosio_cpp_addGetFileInfoHook_FUN_00460930();
  support_newmsg_cpp_readMessageFile_FUN_0050f9e0("msglist.txt");
  core_mmx_c_detectCPUFeatures_FUN_004fd490();
  if (_DAT_01c38b40 == 0) {
    _DAT_01d046a0 = "..\\core\\main.c";
    _DAT_01d046a4 = 0x3da;
    support_newmsg_cpp_getLocalizedString_FUN_0050fe80("This CPU does not have an MMX unit.");
    core_main_c_FUN_004e4500();
  }
  pcVar11 = &stack0xfffff8d8;
  unkafter_marquee_cpp_FUN_004e8620();
  engine_3d_c_initTextureCache_FUN_004037e0();
  engine_2d_c_initGraphicsSystem_FUN_00401010();
  wincore_winrun_cpp_calibrateCPUSpeed_FUN_0058e7a0();
  wincore_winrun_cpp_initJoystick_FUN_0058ffd0();
  iVar5 = wincore_wddvmem_cpp_FUN_00588a50(0x280,0x1e0,0x20);
  if (iVar5 == 0) {
    _DAT_01d046a0 = "..\\core\\main.c";
    _DAT_01d046a4 = 0x3f2;
    core_main_c_FUN_004e4500();
  }
  core_dfont_cpp_FUN_00447ea0();
  if (_DAT_02664638 < 0x3c00000) {
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Windows is reporting ");
    pcVar9 = acStack_528;
    do {
      cVar2 = *pcVar6;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_328,&DAT_005dc2dd);
    pcVar9 = acStack_328;
    iVar5 = -1;
    pcVar6 = acStack_528;
    do {
      pcVar10 = pcVar6;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar6 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar6;
      pcVar6 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("MB of system RAM.");
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = &DAT_005dc2f4;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Nocturne requires at least 64MB of system RAM.")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = &DAT_005dc325;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("If you think you have at least 64MB of system RAM")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = &DAT_005dc359;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("then ignore this message.")
    ;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = &DAT_005dc375;
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    pcVar6 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("See README.TXT for more information.");
    iVar5 = -1;
    pcVar9 = acStack_528;
    do {
      pcVar10 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar10 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar10;
    } while (cVar2 != '\0');
    pcVar10 = pcVar10 + -1;
    do {
      cVar2 = *pcVar6;
      *pcVar10 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar6[1];
      pcVar6 = pcVar6 + 2;
      pcVar10[1] = cVar2;
      pcVar10 = pcVar10 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(g_CEditorToolsPtr,acStack_528);
  }
  if (_DAT_0266463c < 0xc800000) {
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Windows is reporting ");
    do {
      cVar2 = *pcVar9;
      *pcVar11 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar11[1] = cVar2;
      pcVar11 = pcVar11 + 2;
    } while (cVar2 != '\0');
    _sprintf(acStack_128,&DAT_005dc3b2);
    pcVar11 = acStack_128;
    iVar5 = -1;
    pcVar9 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar9;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar9 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar11;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar11[1];
      pcVar11 = pcVar11 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("MB of free swap disk space.")
    ;
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = &DAT_005dc3d3;
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Nocturne runs best with at least 200MB free.");
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = &DAT_005dc402;
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("See README.TXT for more information.");
    iVar5 = -1;
    pcVar11 = &stack0xfffff8d8;
    do {
      pcVar6 = pcVar11;
      if (iVar5 == 0) break;
      iVar5 = iVar5 + -1;
      pcVar6 = pcVar11 + (uint)bVar12 * -2 + 1;
      cVar2 = *pcVar11;
      pcVar11 = pcVar6;
    } while (cVar2 != '\0');
    pcVar6 = pcVar6 + -1;
    do {
      cVar2 = *pcVar9;
      *pcVar6 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar6[1] = cVar2;
      pcVar6 = pcVar6 + 2;
    } while (cVar2 != '\0');
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0047bdf0(g_CEditorToolsPtr,&stack0xfffff8d8);
  }
  pCVar4 = g_CGamePtr;
  if (_DAT_01cee1a8 != 0) {
    _DAT_01cee1a8 = 0;
    g_CGamePtr->game_pixx = 0x280;
    pCVar4->game_pixy = 0x1e0;
    _DAT_0264bba0 = 0;
    pCVar4->game_bpp = 0x20;
    core_menu_cpp_showCalibrationTest_FUN_004ebe30();
  }
  wincore_winvideo_cpp_playMovie_FUN_00591190("video","opening.avi");
  engine_special_cpp_clearScreen_FUN_0055b1f0();
  engine_font_cpp_FUN_004aaf00(_DAT_01511cc0);
  engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560(_DAT_01511cc0,0x58);
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_0040d420(&CStack_28);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_0040d5a0(&CStack_28,"test_logo",0x280,0x1e0);
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040d900(&CStack_28,0,0,0xffff);
  wincore_wddvmem_cpp_swapBuffers_FUN_00589560();
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_0040d440(&CStack_28,0);
  core_sound_cpp_FUN_0055a100(0x0264B290);
  iVar5 = 0;
  core_mission_cpp_FUN_004fb380();
  iStack_14 = 0;
  do {
    puVar1 = (uint *)((int)&g_GlobalFilters + iVar5);
    iVar5 = iVar5 + 4;
    iVar7 = iStack_14 + 1;
    core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0
              ((CDemonFilter *)*puVar1,
               (float)iStack_14 * (float)_DAT_005dc485 + (float)_DAT_005dc485,0);
    iStack_14 = iVar7;
  } while (iVar7 < 8);
  iVar7 = 0;
  iVar5 = 0;
  do {
    **(uint **)((int)&g_PlayerFilters + iVar7) = 0x100;
    fVar3 = (float)_DAT_005dc48d;
    *(uint *)(*(int *)((int)&g_PlayerFilters + iVar7) + 4) = 0x100;
    puVar1 = (uint *)((int)&g_PlayerFilters + iVar7);
    iVar7 = iVar7 + 4;
    iVar8 = iVar5 + 1;
    iStack_14 = iVar5;
    core_dfilter_cpp_CDemonFilter_init_FUN_00447ad0
              ((CDemonFilter *)*puVar1,(float)iVar5 * fVar3 + (float)_DAT_005dc48d,0);
    iVar5 = iVar8;
  } while (iVar8 < 4);
  engine_ncursfx_cpp_CMouse_load_FUN_005100b0(g_CMousePtr);
  core_netgame_cpp_CNetGame_init_FUN_0050b340(g_CNetGamePtr);
  unkaddr_0059aa80_cpp_FUN_0059abb0();
  wincore_winrun_cpp_setRegistryStringValue_FUN_0058ff40
            ("SOFTWARE\\Matrox\\PowerDesk\\Current Settings","Flip on VBlank",&DAT_005dc445);
  return;
}
