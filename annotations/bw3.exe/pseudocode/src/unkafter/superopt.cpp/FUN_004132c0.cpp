// Name: unkafter_superopt.cpp_FUN_004132c0
// Address: 004132c0
// Address Range: [[004132c0, 004133af]]
// Convention: unknown
// Signature: int unkafter_superopt_cpp_FUN_004132c0(int param_1)

#include "nocturne.h"

int unkafter_superopt_cpp_FUN_004132c0(int param_1)

{
  int iVar1;
  int iVar2;
  
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x28) = 0;
  *(uint *)(param_1 + 0x2c) = 0;
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x930) = 0xffffffff;
  *(uint *)(param_1 + 0x54) = 0;
  *(uint *)(param_1 + 0x24) = 0;
  *(uint *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x18) = 0;
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x934) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x10);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x38) = 0xffffffff;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0xc);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x44) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x10);
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x58) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x18);
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  *(int *)(param_1 + 0x44) = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  *(int *)(param_1 + 0x48) = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  *(int *)(param_1 + 0x4c) = iVar2;
  iVar2 = core_actor_cpp_getRandomInt_FUN_0040cea0(0,2);
  *(int *)(param_1 + 0x50) = iVar2;
  iVar2 = param_1;
  do {
    iVar1 = iVar2 + 4;
    *(uint *)(iVar2 + 0x58) = 0;
    iVar2 = iVar1;
  } while (iVar1 != param_1 + 0x18);
  return iVar1;
}
