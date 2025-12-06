// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
// Address Range: [[0050a290, 0050a41c]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_other_manpuz.cpp_CMansionPuzzleCircle_processPanel(uint
   param_1, uint param_2, uint param_3) */

void core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(void)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  piVar3 = (int *)(in_stack_00000004 + 0x5f0 + in_stack_00000008 * 100);
  if (*piVar3 != 0) {
    fVar1 = ((float)piVar3[2] * in_stack_0000000c) / _DAT_00660d90 + (float)piVar3[1];
    piVar3[1] = (int)fVar1;
    if (fVar1 < 0.0) {
      piVar3[2] = 0;
      piVar3[1] = 0;
    }
    if (1.0 <= (float)piVar3[1]) {
      iVar2 = core_manpuz_cpp_FUN_0050aee0();
      piVar4 = (int *)(in_stack_00000004 + 0x5f0 + iVar2 * 100);
      if (*piVar4 != 0) {
        g_CurrentFilename = "..\\core\\manpuz.cpp";
        g_CurrentLineNumber = 0x45d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::processPanel - Panel collision!");
      }
      *piVar4 = *piVar3;
      piVar4[1] = piVar3[1];
      piVar4[2] = piVar3[2];
      if (piVar4 + 3 != piVar3 + 3) {
        piVar4[3] = piVar3[3];
        piVar4[4] = piVar3[4];
        piVar4[5] = piVar3[5];
      }
      if (piVar4 + 6 != piVar3 + 6) {
        piVar4[6] = piVar3[6];
        piVar4[7] = piVar3[7];
        piVar4[8] = piVar3[8];
      }
      piVar4[9] = piVar3[9];
      piVar4[10] = piVar3[10];
      piVar4[0xb] = piVar3[0xb];
      piVar4[0xc] = piVar3[0xc];
      piVar4[0xd] = piVar3[0xd];
      piVar4[0xe] = piVar3[0xe];
      piVar4[0xf] = piVar3[0xf];
      piVar4[0x10] = piVar3[0x10];
      piVar4[0x11] = piVar3[0x11];
      piVar4[0x12] = piVar3[0x12];
      piVar4[0x13] = piVar3[0x13];
      piVar4[0x14] = piVar3[0x14];
      piVar4[0x15] = piVar3[0x15];
      if (piVar4 + 0x16 != piVar3 + 0x16) {
        piVar4[0x16] = piVar3[0x16];
        piVar4[0x17] = piVar3[0x17];
        piVar4[0x18] = piVar3[0x18];
      }
      piVar4[2] = 0;
      piVar4[1] = 0;
      *piVar3 = 0;
      goto LAB_0050a40b;
    }
  }
  if (*piVar3 != 0) {
    return;
  }
LAB_0050a40b:
  piVar3[2] = 0;
  piVar3[1] = 0;
  return;
}
