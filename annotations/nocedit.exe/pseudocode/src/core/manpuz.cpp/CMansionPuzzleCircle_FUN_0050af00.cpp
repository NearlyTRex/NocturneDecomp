// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af00
// Address: 0050af00
// Address Range: [[0050af00, 0050af7d]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle * this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af00(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  float fVar2;
  int iVar3;
  int in_stack_00000008;
  float in_stack_0000000c;
  
  iVar3 = in_stack_00000008 * 0x60;
  if (*(int *)(this_ptr->unk2 + *(int *)(this_ptr->unk3 + iVar3 + 0xd54) * 100 + -4) == 0) {
    fVar2 = in_stack_0000000c / 2.0f + *(float *)(this_ptr->unk3 + iVar3 + 0xd10);
    *(float *)(this_ptr->unk3 + iVar3 + 0xd10) = fVar2;
    if (1.0 < fVar2) {
      pcVar1 = this_ptr->unk3 + iVar3 + 0xd10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = -0x80;
      pcVar1[3] = '?';
      return;
    }
  }
  else {
    fVar2 = *(float *)(this_ptr->unk3 + iVar3 + 0xd10) - in_stack_0000000c / 2.0f;
    *(float *)(this_ptr->unk3 + iVar3 + 0xd10) = fVar2;
    if (fVar2 < 0.0) {
      pcVar1 = this_ptr->unk3 + iVar3 + 0xd10;
      pcVar1[0] = '\0';
      pcVar1[1] = '\0';
      pcVar1[2] = '\0';
      pcVar1[3] = '\0';
      return;
    }
  }
  return;
}
