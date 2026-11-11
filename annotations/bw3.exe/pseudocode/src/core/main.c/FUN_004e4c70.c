// Name: core_main.c_FUN_004e4c70
// Address: 004e4c70
// Address Range: [[004e4c70, 004e4cf8]]
// Convention: unknown
// Signature: void core_main_c_FUN_004e4c70(void)

#include "nocturne.h"

void core_main_c_FUN_004e4c70(void)

{
  unkafter_alphabit_cpp_FUN_004119e0();
  core_netgame_cpp_CNetGame_shutdown_FUN_00503ed0(g_CNetGamePtr);
  engine_ncursfx_cpp_CMouse_reset_FUN_00508c70(g_CMousePtr);
  core_mission_cpp_CDemonMission_clearMission_FUN_004f5b70(0x01D81080);
  sound_sndmain_cpp_shutdownSoundSystem_FUN_0055fcc0();
  core_dmodel_cpp_freeAllModels_FUN_004624d0();
  core_skeleton_cpp_FUN_005501a0();
  core_skeleton_cpp_FUN_005502d0();
  unkafter_main_cpp_FUN_004e4d80();
  wincore_winrun_cpp_endPeriod_FUN_00580690();
  engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
  engine_3d_c_freeTextureCache_FUN_004037a0();
  core_dfont_cpp_FUN_0045a8d0();
  wincore_winrun_cpp_doNothing2_FUN_00581cf0();
  engine_pod_cpp_CPod_cleanup_FUN_00514650(&g_CDemonPodPtr->base);
  core_inivar_cpp_writeIniData_FUN_004d95c0();
  return;
}
