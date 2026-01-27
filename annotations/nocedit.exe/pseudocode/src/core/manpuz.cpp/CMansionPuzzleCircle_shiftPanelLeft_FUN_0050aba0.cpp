// Name: core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
// Address: 0050aba0
// Address Range: [[0050aba0, 0050ad37]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  int iVar2;
  char *pcVar3;
  int in_stack_00000008;
  
  iVar2 = core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050aef0(this_ptr);
  pcVar1 = this_ptr->unk2 + in_stack_00000008 * 100 + -4;
  pcVar3 = this_ptr->unk2 + iVar2 * 100 + -4;
  if ((((*(int *)pcVar1 == 0) || (*(int *)pcVar3 != 0)) ||
      ((*(uint *)(pcVar1 + 4) & 0x7fffffff) != 0)) || ((*(uint *)(pcVar1 + 8) & 0x7fffffff) != 0)) {
    g_CurrentFilename = "..\\core\\manpuz.cpp";
    g_CurrentLineNumber = 0x554;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CMansionPuzzleCircle::shiftPanelLeft - fubared.",iVar2);
  }
  *(int *)pcVar3 = *(int *)pcVar1;
  *(int *)(pcVar3 + 4) = *(int *)(pcVar1 + 4);
  *(int *)(pcVar3 + 8) = *(int *)(pcVar1 + 8);
  if (pcVar3 + 0xc != pcVar1 + 0xc) {
    *(int *)(pcVar3 + 0xc) = *(int *)(pcVar1 + 0xc);
    *(int *)(pcVar3 + 0x10) = *(int *)(pcVar1 + 0x10);
    *(int *)(pcVar3 + 0x14) = *(int *)(pcVar1 + 0x14);
  }
  if (pcVar3 + 0x18 != pcVar1 + 0x18) {
    *(int *)(pcVar3 + 0x18) = *(int *)(pcVar1 + 0x18);
    *(int *)(pcVar3 + 0x1c) = *(int *)(pcVar1 + 0x1c);
    *(int *)(pcVar3 + 0x20) = *(int *)(pcVar1 + 0x20);
  }
  *(int *)(pcVar3 + 0x24) = *(int *)(pcVar1 + 0x24);
  *(int *)(pcVar3 + 0x28) = *(int *)(pcVar1 + 0x28);
  *(int *)(pcVar3 + 0x2c) = *(int *)(pcVar1 + 0x2c);
  *(int *)(pcVar3 + 0x30) = *(int *)(pcVar1 + 0x30);
  *(int *)(pcVar3 + 0x34) = *(int *)(pcVar1 + 0x34);
  *(int *)(pcVar3 + 0x38) = *(int *)(pcVar1 + 0x38);
  *(int *)(pcVar3 + 0x3c) = *(int *)(pcVar1 + 0x3c);
  *(int *)(pcVar3 + 0x40) = *(int *)(pcVar1 + 0x40);
  *(int *)(pcVar3 + 0x44) = *(int *)(pcVar1 + 0x44);
  *(int *)(pcVar3 + 0x48) = *(int *)(pcVar1 + 0x48);
  *(int *)(pcVar3 + 0x4c) = *(int *)(pcVar1 + 0x4c);
  *(int *)(pcVar3 + 0x50) = *(int *)(pcVar1 + 0x50);
  *(int *)(pcVar3 + 0x54) = *(int *)(pcVar1 + 0x54);
  if (pcVar3 + 0x58 != pcVar1 + 0x58) {
    *(int *)(pcVar3 + 0x58) = *(int *)(pcVar1 + 0x58);
    *(int *)(pcVar3 + 0x5c) = *(int *)(pcVar1 + 0x5c);
    *(int *)(pcVar3 + 0x60) = *(int *)(pcVar1 + 0x60);
  }
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  pcVar3[4] = '\0';
  pcVar3[5] = '\0';
  pcVar3[6] = -0x80;
  pcVar3[7] = '?';
  pcVar3[8] = '\0';
  pcVar3[9] = '\0';
  pcVar3[10] = -0x80;
  pcVar3[0xb] = -0x41;
  core_manpuz_cpp_CMansionPuzzleCircle_FUN_00509b20(this_ptr);
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxTrackedFloatPosition_FUN_005a8940((CVector3f *)(pcVar3 + 0x58));
  sound_sndmain_cpp_startSfx_FUN_005a8e90("manpuz-doorslide.wav");
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return;
}
