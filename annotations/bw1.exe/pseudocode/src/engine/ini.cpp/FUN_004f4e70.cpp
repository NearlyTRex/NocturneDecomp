// Name: engine_ini.cpp_FUN_004f4e70
// Address: 004f4e70
// Address Range: [[004f4e70, 004f4ed3]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004f4e70(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_ini_cpp_FUN_004f4e70(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  char acStack_70 [100];
  
  _sprintf(acStack_70,(char *)0x5e58fa);
  (**(code **)(*(int *)(in_stack_00000004 + 0x200) + 4))
            (in_stack_00000004,in_stack_00000008,acStack_70,100);
  sscanf(acStack_70,(char *)0x5e58fe);
  return;
}
