// Name: core_drip.cpp_FUN_0048e6c0
// Address: 0048e6c0
// Address Range: [[0048e6c0, 0048e739]]
// Convention: unknown
// Signature: undefined core_drip.cpp_FUN_0048e6c0()
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

/* Signature: undefined1 actors_other_drip.cpp_FUN_0048e6c0(undefined4 param_1) */

int core_drip_cpp_FUN_0048e6c0(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_14;
  
  in_stack_00000004[2].create_event[0x10] = '\0';
  in_stack_00000004[2].create_event[0x11] = '\0';
  in_stack_00000004[2].create_event[0x12] = '\0';
  in_stack_00000004[2].create_event[0x13] = '\0';
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
  this_ptr = (*((in_stack_00000004->metadata).vtable)->getBoundingBox)
                       (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    return 0;
  }
  fStack_14 = 6.695062e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(in_stack_00000004 + 1),0.0,-1);
  in_stack_00000004[2].create_event[0x10] = '\x01';
  in_stack_00000004[2].create_event[0x11] = '\0';
  in_stack_00000004[2].create_event[0x12] = '\0';
  in_stack_00000004[2].create_event[0x13] = '\0';
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
  return iVar1;
}


// Assembly code:
// 0048e6c0: PUSH EBX
//   Label: core_drip.cpp_FUN_0048e6c0
// 0048e6c1: PUSH ESI
// 0048e6c2: SUB ESP,0x18
// 0048e6c5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 0048e6c9: PUSH EBX
// 0048e6ca: MOV dword ptr [EBX + 0x338],0x0
// 0048e6d4: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 0048e6d9: ADD ESP,0x4
// 0048e6dc: MOV EAX,ESP
// 0048e6de: PUSH EAX
// 0048e6df: MOV ESI,dword ptr [EBX + 0x154]
// 0048e6e5: PUSH EBX
// 0048e6e6: CALL dword ptr [ESI + 0x14]
// 0048e6e9: ADD ESP,0x8
// 0048e6ec: PUSH EAX
// 0048e6ed: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0048e6f2: ADD ESP,0x4
// 0048e6f5: MOV ESI,EAX
// 0048e6f7: TEST EAX,EAX
// 0048e6f9: JNZ 0x0048e70c
//   XREF to: 0048e70c (CONDITIONAL_JUMP)
// 0048e6fb: PUSH EBX
// 0048e6fc: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0048e701: ADD ESP,0x4
// 0048e704: MOV EAX,ESI
// 0048e706: ADD ESP,0x18
// 0048e709: POP ESI
// 0048e70a: POP EBX
// 0048e70b: RET
// 0048e70c: PUSH -0x1
//   Label: LAB_0048e70c
// 0048e70e: LEA EAX,[EBX + 0x158]
// 0048e714: PUSH 0x0
// 0048e716: PUSH EAX
// 0048e717: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 0048e71c: ADD ESP,0xc
// 0048e71f: MOV dword ptr [EBX + 0x338],0x1
// 0048e729: PUSH EBX
// 0048e72a: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0048e72f: ADD ESP,0x4
// 0048e732: MOV EAX,ESI
// 0048e734: ADD ESP,0x18
// 0048e737: POP ESI
// 0048e738: POP EBX
// 0048e739: RET
