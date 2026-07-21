// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740
// Address: 004cb740
// Address Range: [[004cb740, 004cb7ee]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_004cb740(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(param_1,param_2);
  if ((((*piVar1 == 0) || (*(int *)(param_1 + 0x5e8 + iVar2 * 100) != 0)) ||
      ((piVar1[1] & 0x7fffffffU) != 0)) || ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01cc4800 = "..\\core\\manpuz.cpp";
    _DAT_01cc4804 = 0x57d;
    FUN_004c8440("CMansionPuzzleCircle::shiftPanelRight - fubared.");
  }
  piVar1[2] = 0x3f800000;
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(piVar1 + 0x16);
  sound_sndmain_cpp_startSfx_FUN_005265a0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return;
}
