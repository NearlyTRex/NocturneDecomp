// Name: core_crossbow.cpp_FUN_00448e00
// Address: 00448e00
// Address Range: [[00448e00, 00448e7a]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00448e00()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_crossbow.cpp_FUN_00449540
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_crossbow.cpp_FUN_00448e00(undefined4 param_1) */

int core_crossbow_cpp_FUN_00448e00(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  float animation_frame;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe0);
  fStack_14 = 6.29581e-39;
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  fStack_14 = 6.295857e-39;
  animation_frame = (float)core_crossbow_cpp_FUN_00449540();
  fStack_14 = 6.295898e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),animation_frame,unaff_ESI);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 00448e00: PUSH EBX
//   Label: core_crossbow.cpp_FUN_00448e00
// 00448e01: PUSH ESI
// 00448e02: SUB ESP,0x1c
// 00448e05: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 00448e09: PUSH EBX
// 00448e0a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00448e0f: ADD ESP,0x4
// 00448e12: MOV EAX,ESP
// 00448e14: PUSH EAX
// 00448e15: MOV ESI,dword ptr [EBX + 0x154]
// 00448e1b: PUSH EBX
// 00448e1c: CALL dword ptr [ESI + 0x14]
// 00448e1f: ADD ESP,0x8
// 00448e22: PUSH EAX
// 00448e23: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00448e28: ADD ESP,0x4
// 00448e2b: MOV ESI,EAX
// 00448e2d: TEST EAX,EAX
// 00448e2f: JNZ 0x00448e42
//   XREF to: 00448e42 (CONDITIONAL_JUMP)
// 00448e31: PUSH EBX
// 00448e32: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00448e37: ADD ESP,0x4
// 00448e3a: MOV EAX,ESI
// 00448e3c: ADD ESP,0x1c
// 00448e3f: POP ESI
// 00448e40: POP EBX
// 00448e41: RET
// 00448e42: PUSH -0x1
//   Label: LAB_00448e42
// 00448e44: PUSH EBX
// 00448e45: CALL core_crossbow.cpp_FUN_00449540
//   XREF to: 00449540 (UNCONDITIONAL_CALL)
// 00448e4a: MOV dword ptr [ESP + 0x20],EAX
// 00448e4e: FLD float ptr [ESP + 0x20]
// 00448e52: ADD ESP,0x4
// 00448e55: SUB ESP,0x4
// 00448e58: LEA EAX,[EBX + 0x158]
// 00448e5e: FSTP float ptr [ESP]
// 00448e61: PUSH EAX
// 00448e62: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00448e67: ADD ESP,0xc
// 00448e6a: PUSH EBX
// 00448e6b: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00448e70: ADD ESP,0x4
// 00448e73: MOV EAX,ESI
// 00448e75: ADD ESP,0x1c
// 00448e78: POP ESI
// 00448e79: POP EBX
// 00448e7a: RET
