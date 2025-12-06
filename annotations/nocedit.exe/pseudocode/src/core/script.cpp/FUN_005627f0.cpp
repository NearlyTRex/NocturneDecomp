// Name: core_script.cpp_FUN_005627f0
// Address: 005627f0
// Address Range: [[005627f0, 0056285a]]
// Convention: unknown
// Signature: undefined core_script.cpp_FUN_005627f0()

#include "nocturne.h"

/* Signature: byte core_script.cpp_FUN_005627f0(uint param_1, uint param_2) */

uint core_script_cpp_FUN_005627f0(void)

{
  uint uVar1;
  BADSPACEBASE *in_ESP;
  int unaff_retaddr;
  int in_stack_00000004;
  int in_stack_0000000c;
  
  crt_stdio_c_sscanf_FUN_0060013c((char *)(in_stack_00000004 + 0x25c),"%d",&stack0xfffffffc)
  ;
  if ((-1 < unaff_retaddr) && (unaff_retaddr < *(int *)(in_stack_0000000c + 0xcc))) {
    uVar1 = core_script_cpp_GetDemonActor_FUN_005594e0();
    return uVar1;
  }
  return 0;
}
