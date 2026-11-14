// Name: engine_ini.cpp_FUN_004d8d90
// Address: 004d8d90
// Address Range: [[004d8d90, 004d8df3]]
// Convention: unknown
// Signature: void engine_ini_cpp_FUN_004d8d90(void)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

void engine_ini_cpp_FUN_004d8d90(void)

{
  int in_stack_00000004;
  uint in_stack_00000008;
  char acStack_70 [100];
  
  _sprintf(acStack_70,(char *)0x5c58c0);
  (**(code **)(*(int *)(in_stack_00000004 + 0x200) + 4))
            (in_stack_00000004,in_stack_00000008,acStack_70,100);
  sscanf(acStack_70,(char *)0x5c58c4);
  return;
}
