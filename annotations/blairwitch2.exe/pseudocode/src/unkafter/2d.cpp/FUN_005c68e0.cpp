// Name: unkafter_2d.cpp_FUN_005c68e0
// Address: 005c68e0
// Address Range: [[005c68e0, 005c6907]]
// Convention: unknown
// Signature: int unkafter_2d_cpp_FUN_005c68e0(undefined4 param_1)

#include "nocturne.h"

int unkafter_2d_cpp_FUN_005c68e0(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 0;
  while( true ) {
    iVar1 = unkafter_morph_cpp_FUN_005c4260(param_1);
    if (iVar1 != 0) break;
    param_1 = FUN_005c0e00(param_1);
    iVar2 = iVar2 + 1;
  }
  return iVar2;
}
