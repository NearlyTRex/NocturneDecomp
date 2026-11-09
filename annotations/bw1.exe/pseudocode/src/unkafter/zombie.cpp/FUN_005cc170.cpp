// Name: unkafter_zombie.cpp_FUN_005cc170
// Address: 005cc170
// Address Range: [[005cc170, 005cc1b4]]
// Convention: unknown
// Signature: undefined4 unkafter_zombie_cpp_FUN_005cc170(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

uint unkafter_zombie_cpp_FUN_005cc170(uint param_1,uint param_2)

{
  int iVar1;
  uint uVar2;
  
  while( true ) {
    iVar1 = unkafter_zombie_cpp_FUN_005cc560(param_1);
    if (iVar1 != 0) {
      return 0;
    }
    uVar2 = FUN_005c9080(param_1);
    iVar1 = unkafter_2d_cpp_FUN_005cdb10(param_2,uVar2);
    if (iVar1 != 0) break;
    param_1 = FUN_005c90c0(param_1);
  }
  return param_1;
}
