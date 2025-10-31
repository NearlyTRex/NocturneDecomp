// Name: core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0
// Address: 0053c8d0
// Address Range: [[0053c8d0, 0053c924]]
// Convention: unknown
// Signature: undefined core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0()
// Cross-references:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040 (0040d040) at 0040d097 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0

#include "nocturne.h"

/* Signature: undefined1 core_msnedit.cpp_IgnoreAndProcess(undefined1 param_1, undefined4 param_2)
    */

void core_msnedit_cpp_IgnoreAndProcess_FUN_0053c8d0(void)

{
  float fVar1;
  CDemonActor *in_stack_00000008;
  
  if (in_stack_00000008 == (CDemonActor *)0x0) {
    return;
  }
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,in_stack_00000008);
  fVar1 = core_setcolid_cpp_CDemonSet_processCollisionTypes_FUN_005716b0
                    (g_CDemonSetPtr,&(in_stack_00000008->location).position,0.0);
  (in_stack_00000008->location).position.y = fVar1;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}


// Assembly code:
// 0053c8d0: PUSH EBX
//   Label: core_msnedit.cpp_IgnoreAndProcess_FUN_0053c8d0
// 0053c8d1: SUB ESP,0x4
// 0053c8d4: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 0053c8d8: TEST EBX,EBX
// 0053c8da: JNZ 0x0053c8e1
//   XREF to: 0053c8e1 (CONDITIONAL_JUMP)
// 0053c8dc: ADD ESP,0x4
// 0053c8df: POP EBX
// 0053c8e0: RET
// 0053c8e1: PUSH EBX
//   Label: LAB_0053c8e1
// 0053c8e2: MOV EDX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053c8e8: PUSH EDX
//   XREF to: 03114278 (DATA)
// 0053c8e9: CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0
//   XREF to: 005741b0 (UNCONDITIONAL_CALL)
// 0053c8ee: ADD ESP,0x8
// 0053c8f1: LEA EAX,[EBX + 0x20]
// 0053c8f4: PUSH 0x0
// 0053c8f6: PUSH EAX
// 0053c8f7: MOV ECX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053c8fd: PUSH ECX
//   XREF to: 03114278 (DATA)
// 0053c8fe: CALL core_setcolid.cpp_CDemonSet_processCollisionTypes_FUN_005716b0
//   XREF to: 005716b0 (UNCONDITIONAL_CALL)
// 0053c903: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 0053c907: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x8] (READ)
// 0053c90b: ADD ESP,0xc
// 0053c90e: FSTP float ptr [EBX + 0x24]
// 0053c911: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 0053c917: PUSH EBX
//   XREF to: 03114278 (DATA)
// 0053c918: CALL core_setcolid.cpp_CDemonSet_initMaybe_FUN_00574180
//   XREF to: 00574180 (UNCONDITIONAL_CALL)
// 0053c91d: ADD ESP,0x4
// 0053c920: ADD ESP,0x4
// 0053c923: POP EBX
// 0053c924: RET
