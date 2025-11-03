// Name: core_emitter.cpp_FUN_004a8a80
// Address: 004a8a80
// Address Range: [[004a8a80, 004a8ac9]]
// Convention: unknown
// Signature: undefined core_emitter.cpp_FUN_004a8a80()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a8a80(undefined4 param_1, undefined4
   param_2) */

void core_emitter_cpp_FUN_004a8a80(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack_c;
  
  if (in_stack_00000008 == 0) {
    return;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*in_stack_00000004->vtable->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe8);
  fStack_c = 6.845583e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  *(int *)(in_stack_00000004[3].create_event + 0xc) = iVar1;
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return;
}


// Assembly code:
// 004a8a80: PUSH EBX
//   Label: core_emitter.cpp_FUN_004a8a80
// 004a8a81: SUB ESP,0x18
// 004a8a84: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004a8a88: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 004a8a8d: JNZ 0x004a8a94
//   XREF to: 004a8a94 (CONDITIONAL_JUMP)
// 004a8a8f: ADD ESP,0x18
// 004a8a92: POP EBX
// 004a8a93: RET
// 004a8a94: PUSH EBX
//   Label: LAB_004a8a94
// 004a8a95: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004a8a9a: ADD ESP,0x4
// 004a8a9d: MOV EDX,ESP
// 004a8a9f: PUSH EDX
// 004a8aa0: MOV EAX,dword ptr [EBX + 0x154]
// 004a8aa6: PUSH EBX
// 004a8aa7: CALL dword ptr [EAX + 0x14]
// 004a8aaa: ADD ESP,0x8
// 004a8aad: PUSH EAX
// 004a8aae: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004a8ab3: ADD ESP,0x4
// 004a8ab6: PUSH EBX
// 004a8ab7: MOV dword ptr [EBX + 0x48c],EAX
// 004a8abd: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004a8ac2: ADD ESP,0x4
// 004a8ac5: ADD ESP,0x18
// 004a8ac8: POP EBX
// 004a8ac9: RET
