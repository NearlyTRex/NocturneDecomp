// Name: unkaddr_005a7eb0.cpp_FUN_005a7f50
// Address: 005a7f50
// Address Range: [[005a7f50, 005a7ffd]]
// Convention: unknown
// Signature: int unkaddr_005a7eb0_cpp_FUN_005a7f50(int param_1,undefined4 param_2)

#include "nocturne.h"

int unkaddr_005a7eb0_cpp_FUN_005a7f50(int param_1,uint param_2)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  
  *(uint *)(param_1 + 0x40) = 0x6002e4;
  *(uint *)(param_1 + 0x1c) = 0;
  *(uint *)(param_1 + 0x14) = 0;
  *(uint *)(param_1 + 0x3c) = 0;
  *(uint *)(param_1 + 0xc) = 0x3f800000;
  *(uint *)(param_1 + 0x24) = 0x3f800000;
  *(uint *)(param_1 + 0x28) = 0x3f800000;
  *(uint *)(param_1 + 0x18) = param_2;
  *(uint *)(param_1 + 0x2c) = 0x3f800000;
  *(uint *)(param_1 + 0x30) = 0;
  *(uint *)(param_1 + 0x34) = 0;
  *(uint *)(param_1 + 0x10) = 0;
  *(uint *)(param_1 + 0x38) = 1;
  iVar2 = 0;
  pvVar1 = FUN_005b8580(*(int *)(param_1 + 0x18) * 0x60);
  *(void **)(param_1 + 0x3c) = pvVar1;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar3 = 0;
    do {
      iVar2 = iVar2 + 1;
      unkafter_superopt_cpp_FUN_005a84c0(*(int *)(param_1 + 0x3c) + iVar3);
      iVar3 = iVar3 + 0x60;
    } while (iVar2 < *(int *)(param_1 + 0x18));
  }
  *(uint *)(param_1 + 0x10) = 1;
  return param_1;
}
