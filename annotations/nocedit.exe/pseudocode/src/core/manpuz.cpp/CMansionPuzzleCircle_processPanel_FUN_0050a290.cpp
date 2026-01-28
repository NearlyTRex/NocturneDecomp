// Name: core_manpuz.cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290
// Address: 0050a290
// Address Range: [[0050a290, 0050a41c]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_processPanel_FUN_0050a290(CMansionPuzzleCircle *this_ptr)

{
  float fVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  pcVar3 = this_ptr->unk2 + in_stack_00000008 * 100 + -4;
  if (*(int *)pcVar3 != 0) {
    fVar1 = (*(float *)(pcVar3 + 8) * in_stack_0000000c) / 2.0f + *(float *)(pcVar3 + 4);
    *(float *)(pcVar3 + 4) = fVar1;
    if (fVar1 < 0.0) {
      pcVar3[8] = '\0';
      pcVar3[9] = '\0';
      pcVar3[10] = '\0';
      pcVar3[0xb] = '\0';
      pcVar3[4] = '\0';
      pcVar3[5] = '\0';
      pcVar3[6] = '\0';
      pcVar3[7] = '\0';
    }
    if (1.0 <= *(float *)(pcVar3 + 4)) {
      iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aee0(this_ptr);
      pcVar4 = this_ptr->unk2 + iVar2 * 100 + -4;
      if (*(int *)pcVar4 != 0) {
        g_CurrentFilename = "..\\core\\manpuz.cpp";
        g_CurrentLineNumber = 0x45d;
        core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::processPanel - Panel collision!");
      }
      *(int *)pcVar4 = *(int *)pcVar3;
      *(int *)(pcVar4 + 4) = *(int *)(pcVar3 + 4);
      *(int *)(pcVar4 + 8) = *(int *)(pcVar3 + 8);
      if (pcVar4 + 0xc != pcVar3 + 0xc) {
        *(int *)(pcVar4 + 0xc) = *(int *)(pcVar3 + 0xc);
        *(int *)(pcVar4 + 0x10) = *(int *)(pcVar3 + 0x10);
        *(int *)(pcVar4 + 0x14) = *(int *)(pcVar3 + 0x14);
      }
      if (pcVar4 + 0x18 != pcVar3 + 0x18) {
        *(int *)(pcVar4 + 0x18) = *(int *)(pcVar3 + 0x18);
        *(int *)(pcVar4 + 0x1c) = *(int *)(pcVar3 + 0x1c);
        *(int *)(pcVar4 + 0x20) = *(int *)(pcVar3 + 0x20);
      }
      *(int *)(pcVar4 + 0x24) = *(int *)(pcVar3 + 0x24);
      *(int *)(pcVar4 + 0x28) = *(int *)(pcVar3 + 0x28);
      *(int *)(pcVar4 + 0x2c) = *(int *)(pcVar3 + 0x2c);
      *(int *)(pcVar4 + 0x30) = *(int *)(pcVar3 + 0x30);
      *(int *)(pcVar4 + 0x34) = *(int *)(pcVar3 + 0x34);
      *(int *)(pcVar4 + 0x38) = *(int *)(pcVar3 + 0x38);
      *(int *)(pcVar4 + 0x3c) = *(int *)(pcVar3 + 0x3c);
      *(int *)(pcVar4 + 0x40) = *(int *)(pcVar3 + 0x40);
      *(int *)(pcVar4 + 0x44) = *(int *)(pcVar3 + 0x44);
      *(int *)(pcVar4 + 0x48) = *(int *)(pcVar3 + 0x48);
      *(int *)(pcVar4 + 0x4c) = *(int *)(pcVar3 + 0x4c);
      *(int *)(pcVar4 + 0x50) = *(int *)(pcVar3 + 0x50);
      *(int *)(pcVar4 + 0x54) = *(int *)(pcVar3 + 0x54);
      if (pcVar4 + 0x58 != pcVar3 + 0x58) {
        *(int *)(pcVar4 + 0x58) = *(int *)(pcVar3 + 0x58);
        *(int *)(pcVar4 + 0x5c) = *(int *)(pcVar3 + 0x5c);
        *(int *)(pcVar4 + 0x60) = *(int *)(pcVar3 + 0x60);
      }
      pcVar4[8] = '\0';
      pcVar4[9] = '\0';
      pcVar4[10] = '\0';
      pcVar4[0xb] = '\0';
      pcVar4[4] = '\0';
      pcVar4[5] = '\0';
      pcVar4[6] = '\0';
      pcVar4[7] = '\0';
      pcVar3[0] = '\0';
      pcVar3[1] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      goto LAB_0050a40b;
    }
  }
  if (*(int *)pcVar3 != 0) {
    return;
  }
LAB_0050a40b:
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = '\0';
  pcVar3[0xb] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = '\0';
  pcVar3[7] = '\0';
  return;
}
