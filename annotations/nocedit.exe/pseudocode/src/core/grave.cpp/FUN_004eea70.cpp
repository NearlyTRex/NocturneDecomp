// Name: core_grave.cpp_FUN_004eea70
// Address: 004eea70
// Address Range: [[004eea70, 004eeac5]]
// Convention: unknown
// Signature: undefined core_grave.cpp_FUN_004eea70()
// Globals:
//   CKeys* g_CKeysPtr = 02dcd7d4
//   void* g_CKeysPtr
// Function calls:
//   core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_grave.cpp_FUN_004eea70(undefined4 param_1) */

void core_grave_cpp_FUN_004eea70(void)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  CDemonActor *in_stack_00000004;
  
  core_actor_cpp_CDemonActor_processInEditor_FUN_0040d040(in_stack_00000004);
  iVar1 = (*g_CKeysPtr->vtable->isKeyDown)(g_CKeysPtr,0x1d);
  if (iVar1 == 0) {
    in_stack_00000004[2].location.position.y = 0.0;
    return;
  }
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 1));
  in_stack_00000004[2].location.position.y = (float)(pCVar2->frame_count + -1);
  return;
}


// Assembly code:
// 004eea70: PUSH EBX
//   Label: core_grave.cpp_FUN_004eea70
// 004eea71: SUB ESP,0x4
// 004eea74: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 004eea78: PUSH EBX
// 004eea79: CALL core_actor.cpp_CDemonActor_processInEditor_FUN_0040d040
//   XREF to: 0040d040 (UNCONDITIONAL_CALL)
// 004eea7e: ADD ESP,0x4
// 004eea81: MOV EAX,[0x0067cf44]
//   XREF to: 0067cf44 (READ)
// 004eea86: PUSH 0x1d
// 004eea88: MOV EDX,dword ptr [EAX]
//   XREF to: 02dcd7d4 (READ)
// 004eea8a: PUSH EAX
//   XREF to: 02dcd7d4 (DATA)
// 004eea8b: CALL dword ptr [EDX]
// 004eea8d: ADD ESP,0x8
// 004eea90: TEST EAX,EAX
// 004eea92: JNZ 0x004eea9f
//   XREF to: 004eea9f (CONDITIONAL_JUMP)
// 004eea94: MOV dword ptr [EBX + 0x2d4],EAX
// 004eea9a: ADD ESP,0x4
// 004eea9d: POP EBX
// 004eea9e: RET
// 004eea9f: LEA EAX,[EBX + 0x158]
//   Label: LAB_004eea9f
// 004eeaa5: PUSH EAX
// 004eeaa6: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004eeaab: MOV EAX,dword ptr [EAX + 0x100]
// 004eeab1: ADD ESP,0x4
// 004eeab4: DEC EAX
// 004eeab5: MOV dword ptr [ESP],EAX
// 004eeab8: FILD dword ptr [ESP]
// 004eeabb: FSTP float ptr [EBX + 0x2d4]
// 004eeac1: ADD ESP,0x4
// 004eeac4: POP EBX
// 004eeac5: RET
