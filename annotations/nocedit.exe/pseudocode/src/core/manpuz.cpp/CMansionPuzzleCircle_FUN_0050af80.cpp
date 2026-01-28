// Name: core_manpuz.cpp_CMansionPuzzleCircle_FUN_0050af80
// Address: 0050af80
// Address Range: [[0050af80, 0050b037]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(CMansionPuzzleCircle *this_ptr)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_FUN_0050af80(CMansionPuzzleCircle *this_ptr)

{
  char *pcVar1;
  float fVar2;
  char *pcVar3;
  int in_stack_00000008;
  float local_1c [7];
  
  pcVar3 = this_ptr->unk3 + in_stack_00000008 * 0x60 + 0xcf8;
  pcVar1 = pcVar3 + 0x18;
  fVar2 = 1.0 - *(float *)(pcVar3 + 0x18);
  if ((float *)(pcVar3 + 0x1c) == local_1c) {
    return;
  }
  *(float *)(pcVar3 + 0x1c) = *(float *)pcVar3 * fVar2 + *(float *)(pcVar3 + 0xc) * *(float *)pcVar1
  ;
  *(float *)(pcVar3 + 0x20) =
       *(float *)(pcVar3 + 4) * fVar2 + *(float *)(pcVar3 + 0x10) * *(float *)pcVar1;
  *(float *)(pcVar3 + 0x24) =
       *(float *)(pcVar3 + 8) * fVar2 + *(float *)(pcVar3 + 0x14) * *(float *)pcVar1;
  return;
}
