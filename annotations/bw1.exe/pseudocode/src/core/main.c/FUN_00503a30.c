// Name: core_main.c_FUN_00503a30
// Address: 00503a30
// Address Range: [[00503a30, 00503ab8]]
// Convention: unknown
// Signature: void core_main_c_FUN_00503a30(void)

#include "nocturne.h"

void core_main_c_FUN_00503a30(void)

{
  unkafter_alphabit_cpp_FUN_00415c20();
  core_netgame_cpp_FUN_0052c5d0(g_CNetGamePtr);
  engine_ncursfx_cpp_FUN_005313a0(g_CMousePtr);
  core_mission_cpp_FUN_0051a3a0(0x01D2C900);
  sound_sndmain_cpp_shutdownSoundSystem_FUN_0057cb90();
  core_dmodel_cpp_FUN_00468830();
  core_skeleton_cpp_FUN_0056b610();
  core_skeleton_cpp_FUN_0056b740();
  unkafter_marquee_cpp_FUN_00507340();
  wincore_winrun_cpp_endPeriod_FUN_005b2410();
  engine_2d_c_cleanupGraphicsSystem_FUN_00401120();
  engine_3d_c_freeTextureCache_FUN_004037a0();
  core_dfont_cpp_FUN_0045e7a0();
  wincore_winrun_cpp_FUN_005b3b10();
  engine_pod_cpp_CPod_cleanup_FUN_0053c8f0((CPod *)g_CDemonPodPtr);
  core_inivar_cpp_FUN_004f5760();
  return;
}
