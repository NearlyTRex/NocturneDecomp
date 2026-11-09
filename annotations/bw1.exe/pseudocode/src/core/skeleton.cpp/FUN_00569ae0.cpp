// Name: core_skeleton.cpp_FUN_00569ae0
// Address: 00569ae0
// Address Range: [[00569ae0, 00569afd]]
// Convention: unknown
// Signature: void core_skeleton_cpp_FUN_00569ae0(int param_1)

#include "nocturne.h"

void core_skeleton_cpp_FUN_00569ae0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x2140) = 1;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xf0);
  return;
}
