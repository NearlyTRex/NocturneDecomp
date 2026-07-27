// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90
// Address: 004cac90
// Address Range: [[004cac90, 004cae1c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(int param_1,int param_2,float param_3)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_004cac90(int param_1,int param_2,float param_3)

{
  float fVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  
  piVar3 = (int *)(param_1 + 0x5e8 + param_2 * 100);
  if (*piVar3 != 0) {
    fVar1 = ((float)piVar3[2] * param_3) / 2.0f + (float)piVar3[1];
    piVar3[1] = (int)fVar1;
    if (fVar1 < 0.0) {
      piVar3[2] = 0;
      piVar3[1] = 0;
    }
    if (1.0 <= (float)piVar3[1]) {
      iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_getNextPanelIndex_FUN_004cb8e0(param_1,param_2);
      piVar4 = (int *)(param_1 + 0x5e8 + iVar2 * 100);
      if (*piVar4 != 0) {
        PTR_01cc4800 = "..\\core\\manpuz.cpp";
        INT_01cc4804 = 0x45d;
        core_main_c_FUN_004c8440("CMansionPuzzleCircle::processPanel - Panel collision!");
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
      goto LAB_004cae0b;
    }
  }
  if (*piVar3 != 0) {
    return;
  }
LAB_004cae0b:
  piVar3[2] = 0;
  piVar3[1] = 0;
  return;
}
