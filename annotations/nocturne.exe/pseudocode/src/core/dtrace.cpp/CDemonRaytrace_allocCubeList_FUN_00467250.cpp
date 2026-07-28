// Name: core_dtrace.cpp_CDemonRaytrace_allocCubeList_FUN_00467250
// Address: 00467250
// Address Range: [[00467250, 0046729d]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(int param_1)

#include "nocturne.h"

void core_dtrace_cpp_CDemonRaytrace_allocCubeList_FUN_00467250(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00565c50
                    (0x58,*(int *)(param_1 + 0x40) * *(int *)(param_1 + 0x44) *
                          *(int *)(param_1 + 0x48));
  *(int *)(param_1 + 0x4c) = iVar1;
  if (iVar1 != 0) {
    return;
  }
  PTR_01cc4800 = "..\\core\\dtrace.cpp";
  INT_01cc4804 = 0x88;
  core_main_c_FUN_004c8440("CDemonRaytrace::allocCubeList - Out of memory!");
  return;
}
