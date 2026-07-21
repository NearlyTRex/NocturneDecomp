// Name: core_gore.cpp_CGore_createWallBloodSplat_FUN_004b01c0
// Address: 004b01c0
// Address Range: [[004b01c0, 004b01f3]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createWallBloodSplat_FUN_004b01c0(uint param_1,uint param_2,uint param_3,int param_4)

{
  uint uVar1;
  
  if (param_4 == 2) {
    return;
  }
  uVar1 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(param_1);
  core_gore_cpp_CBloodSplat_initWallSplat_FUN_004aea00(uVar1,param_2,param_3,param_4);
  return;
}
