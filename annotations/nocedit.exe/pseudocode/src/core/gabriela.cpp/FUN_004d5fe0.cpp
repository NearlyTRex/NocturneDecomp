// Name: core_gabriela.cpp_FUN_004d5fe0
// Address: 004d5fe0
// Address Range: [[004d5fe0, 004d604a]]
// Convention: unknown
// Signature: undefined core_gabriela.cpp_FUN_004d5fe0()
// Cross-references:
//   core_gabriela.cpp_FUN_004d2ea0 (004d2ea0) at 004d366c [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180

#include "nocturne.h"

/* Signature: undefined1 actors_hero_gabriella.cpp_FUN_004d5fe0(undefined4 param_1) */

void core_gabriela_cpp_FUN_004d5fe0(void)

{
  int iVar1;
  CDemonActor *in_stack_00000004;
  
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000004);
  iVar1 = (**(code **)(*(int *)((int)in_stack_00000004[0x178].metadata.runtime_vector1.x + 0x154) +
                      0xf8))();
  if ((iVar1 != 0) &&
     (*(int *)((int)in_stack_00000004[0x178].metadata.runtime_vector1.x + 0x2dc) == 1)) {
    in_stack_00000004[0x17a].actor_name[0x1c] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1d] = '\0';
    in_stack_00000004[0x17a].actor_name[0x1e] = -0x80;
    in_stack_00000004[0x17a].actor_name[0x1f] = '?';
  }
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  in_stack_00000004[0x179].metadata.vtable = (CDemonActor_vtable *)0x0;
  return;
}


// Assembly code:
// 004d5fe0: PUSH EBX
//   Label: core_gabriela.cpp_FUN_004d5fe0
// 004d5fe1: PUSH ESI
// 004d5fe2: MOV ESI,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004d5fe6: PUSH ESI
// 004d5fe7: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d5fed: PUSH EDX
//   XREF to: 03114278 (DATA)
// 004d5fee: LEA EBX,[ESI + 0x1f738]
// 004d5ff4: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 004d5ff9: ADD ESP,0x8
// 004d5ffc: MOV EAX,dword ptr [EBX + 0x330]
// 004d6002: PUSH EAX
// 004d6003: MOV EDX,dword ptr [EAX + 0x154]
// 004d6009: CALL dword ptr [EDX + 0xf8]
// 004d600f: ADD ESP,0x4
// 004d6012: TEST EAX,EAX
// 004d6014: JZ 0x004d602f
//   XREF to: 004d602f (CONDITIONAL_JUMP)
// 004d6016: MOV EAX,dword ptr [EBX + 0x330]
// 004d601c: CMP dword ptr [EAX + 0x2dc],0x1
// 004d6023: JNZ 0x004d602f
//   XREF to: 004d602f (CONDITIONAL_JUMP)
// 004d6025: MOV dword ptr [ESI + 0x1fc0c],0x3f800000
// 004d602f: MOV EBX,dword ptr [0x006810c8]
//   Label: LAB_004d602f
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004d6035: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004d6036: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 004d603b: ADD ESP,0x4
// 004d603e: MOV dword ptr [ESI + 0x1fbec],0x0
// 004d6048: POP ESI
// 004d6049: POP EBX
// 004d604a: RET
