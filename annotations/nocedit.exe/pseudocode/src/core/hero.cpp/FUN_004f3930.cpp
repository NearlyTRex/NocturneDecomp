// Name: core_hero.cpp_FUN_004f3930
// Address: 004f3930
// Address Range: [[004f3930, 004f3950]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f3930()
// Cross-references:
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055ee01 [UNCONDITIONAL_CALL]
// Function calls:
//   crt_memory.c_memset_FUN_005fde40

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f3930(undefined4 param_1, undefined4 param_2)
    */

void core_hero_cpp_FUN_004f3930(void)

{
  int in_stack_00000004;
  undefined4 in_stack_00000008;
  
  *(undefined4 *)(in_stack_00000004 + 130000) = in_stack_00000008;
  crt_memory_c_memset_FUN_005fde40((void *)(in_stack_00000004 + 0xbe2c),0,0x2c);
  return;
}


// Assembly code:
// 004f3930: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_hero.cpp_FUN_004f3930
//   XREF to: Stack[0x4] (READ)
// 004f3934: PUSH 0x2c
// 004f3936: PUSH 0x0
// 004f3938: ADD EAX,0xbe2c
// 004f393d: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004f3941: PUSH EAX
// 004f3942: MOV dword ptr [EAX + 0x13da4],EDX
// 004f3948: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004f394d: ADD ESP,0xc
// 004f3950: RET
