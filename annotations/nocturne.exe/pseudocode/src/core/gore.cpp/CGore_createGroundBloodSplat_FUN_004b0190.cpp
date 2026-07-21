// Name: core_gore.cpp_CGore_createGroundBloodSplat_FUN_004b0190
// Address: 004b0190
// Address Range: [[004b0190, 004b01bc]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190(undefined4 param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_createGroundBloodSplat_FUN_004b0190(uint param_1,uint param_2,int param_3)

{
  uint uVar1;
  
  if (param_3 == 2) {
    return;
  }
  uVar1 = core_gore_cpp_CGore_allocateBloodSplat_FUN_004b0140(param_1);
  core_gore_cpp_CBloodSplat_initGroundSplat_FUN_004ae960(uVar1,param_2,param_3);
  return;
}
