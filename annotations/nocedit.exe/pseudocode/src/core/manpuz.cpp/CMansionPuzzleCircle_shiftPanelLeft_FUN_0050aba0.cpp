// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad37]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft(uint
   param_1, uint param_2) */

void core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(void)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = core_manpuz_cpp_FUN_0050aef0();
  piVar1 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  piVar3 = (int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100);
  if ((((*piVar1 == 0) || (*piVar3 != 0)) || ((piVar1[1] & 0x7fffffffU) != 0)) ||
     ((piVar1[2] & 0x7fffffffU) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x554;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelLeft - fubared.");
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
  core_manpuz_cpp_FUN_00509b20();
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940((CVector3f *)(piVar3 + 0x16));
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
