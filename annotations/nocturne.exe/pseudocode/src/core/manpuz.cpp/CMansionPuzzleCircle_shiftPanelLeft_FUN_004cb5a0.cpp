// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0
// Address: 004cb5a0
// Address Range: [[004cb5a0, 004cb737]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_004cb5a0(int param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getPrevPanelIndex_FUN_004cb8f0(param_1,param_2);
  piVar1 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  piVar3 = (int *)(param_1 + 0x5e8 + iVar2 * 100);
  if ((((*piVar1 == 0) || (*piVar3 != 0)) || ((piVar1[1] & 0x7fffffffU) != 0)) ||
     ((piVar1[2] & 0x7fffffffU) != 0)) {
    _DAT_01cc4800 = "@..\\core\\manpuz.cpp" + 1;
    _DAT_01cc4804 = 0x554;
    FUN_004c8440("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
  }
  *piVar3 = *piVar1;
  piVar3[1] = piVar1[1];
  piVar3[2] = piVar1[2];
  if (piVar3 + 3 != piVar1 + 3) {
    piVar3[3] = piVar1[3];
    piVar3[4] = piVar1[4];
    piVar3[5] = piVar1[5];
  }
  if (piVar3 + 6 != piVar1 + 6) {
    piVar3[6] = piVar1[6];
    piVar3[7] = piVar1[7];
    piVar3[8] = piVar1[8];
  }
  piVar3[9] = piVar1[9];
  piVar3[10] = piVar1[10];
  piVar3[0xb] = piVar1[0xb];
  piVar3[0xc] = piVar1[0xc];
  piVar3[0xd] = piVar1[0xd];
  piVar3[0xe] = piVar1[0xe];
  piVar3[0xf] = piVar1[0xf];
  piVar3[0x10] = piVar1[0x10];
  piVar3[0x11] = piVar1[0x11];
  piVar3[0x12] = piVar1[0x12];
  piVar3[0x13] = piVar1[0x13];
  piVar3[0x14] = piVar1[0x14];
  piVar3[0x15] = piVar1[0x15];
  if (piVar3 + 0x16 != piVar1 + 0x16) {
    piVar3[0x16] = piVar1[0x16];
    piVar3[0x17] = piVar1[0x17];
    piVar3[0x18] = piVar1[0x18];
  }
  *piVar1 = 0;
  piVar3[1] = 0x3f800000;
  piVar3[2] = -0x40800000;
  core_manpuz_cpp_CMansionPuzzleCircle_updatePanelTransform_FUN_004ca640(param_1,iVar2);
  sound_sndmain_cpp_pushSfxOptions_FUN_00526340();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_00525fc0(piVar3 + 0x16);
  sound_sndmain_cpp_startSfx_FUN_005265a0("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005263c0();
  return;
}
