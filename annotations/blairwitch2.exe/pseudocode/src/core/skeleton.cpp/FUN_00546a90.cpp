// Name: core_skeleton.cpp_FUN_00546a90
// Address: 00546a90
// Address Range: [[00546a90, 00546ad6]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00546a90(int param_1,int param_2)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00546a90(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint *unaff_ESI;
  
  param_1 = param_1 + param_2 * 0x30;
  uVar1 = *(uint *)(param_1 + 0xe9c);
  uVar2 = *(uint *)(param_1 + 0xeac);
  *unaff_ESI = *(uint *)(param_1 + 0xe8c);
  unaff_ESI[1] = uVar1;
  unaff_ESI[2] = uVar2;
  return;
}
