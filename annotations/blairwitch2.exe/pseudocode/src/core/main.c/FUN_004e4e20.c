// Name: core_main.c_FUN_004e4e20
// Address: 004e4e20
// Address Range: [[004e4e20, 004e4ea8]]
// Convention: unknown
// Signature: void core_main_c_FUN_004e4e20(void)

#include "nocturne.h"

void core_main_c_FUN_004e4e20(void)

{
  unkaddr_0059aa80_cpp_FUN_0059abb0();
  core_netgame_cpp_CNetGame_shutdown_FUN_0050b3f0(g_CNetGamePtr);
  engine_ncursfx_cpp_CMouse_reset_FUN_00510190(g_CMousePtr);
  core_mission_cpp_CDemonMission_clearMission_FUN_004fb440(0x01D182F0);
  sound_sndmain_cpp_shutdownSoundSystem_FUN_0055a160();
  core_dmodel_cpp_freeAllModels_FUN_0044fc50();
  core_skeleton_cpp_FUN_00548f80();
  core_skeleton_cpp_FUN_00549090();
  unkafter_marquee_cpp_FUN_004e86a0();
  wincore_winrun_cpp_endPeriod_FUN_0058e9d0();
  engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
  engine_3d_c_freeTextureCache_FUN_004037f0();
  core_dfont_cpp_FUN_00448640();
  wincore_winrun_cpp_doNothing2_FUN_00590040();
  engine_pod_cpp_CPod_cleanup_FUN_0051b370(&g_CDemonPodPtr->base);
  core_inivar_cpp_writeIniData_FUN_004d94d0();
  return;
}
