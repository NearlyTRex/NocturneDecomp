// Name: core_script.cpp_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: unknown
// Signature: undefined4 core_script_cpp_FUN_005627f0(void)

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005627f0(uint param_1, uint param_2) */

uint core_script_cpp_FUN_005627f0(void)

{
  uint uVar1;
  int in_stack_00000004;
  int in_stack_00000008;
  int local_4;
  
  local_4 = -1;
  sscanf((char *)(in_stack_00000004 + 0x25c),"%d",&local_4);
  if ((-1 < local_4) && (local_4 < *(int *)(in_stack_00000008 + 0xcc))) {
    uVar1 = core_script_cpp_GetDemonActor_FUN_005594e0();
    return uVar1;
  }
  return 0;
}
