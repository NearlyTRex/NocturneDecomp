// Name: unkafter_2d.cpp_FUN_005cebe0
// Address: 005cebe0
// Address Range: [[005cebe0, 005cec07]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005cebe0(undefined4 param_1)

#include "nocturne.h"

int unkafter_2d_cpp_FUN_005cebe0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = unkafter_zombie_cpp_FUN_005cc560(param_1);
    if (iVar1 != 0) break;
    param_1 = FUN_005c90c0(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
