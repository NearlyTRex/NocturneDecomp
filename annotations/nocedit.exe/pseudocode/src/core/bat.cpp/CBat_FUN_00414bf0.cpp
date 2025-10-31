// Name: core_bat.cpp_CBat_FUN_00414bf0
// Address: 00414bf0
// Address Range: [[00414bf0, 00414c59]]
// Convention: __cdecl
// Signature: int core_bat.cpp_CBat_FUN_00414bf0(CBat * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

int __cdecl core_bat_cpp_CBat_FUN_00414bf0(CBat *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  fStack_14 = 5.996669e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->model_name,
             *(float *)(this_ptr->course_filename + 0x2c),-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 00414bf0: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414bf0
// 00414bf1: PUSH ESI
// 00414bf2: SUB ESP,0x18
// 00414bf5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00414bf9: PUSH EBX
// 00414bfa: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00414bff: ADD ESP,0x4
// 00414c02: MOV EAX,ESP
// 00414c04: PUSH EAX
// 00414c05: MOV ESI,dword ptr [EBX + 0x154]
// 00414c0b: PUSH EBX
// 00414c0c: CALL dword ptr [ESI + 0x14]
// 00414c0f: ADD ESP,0x8
// 00414c12: PUSH EAX
// 00414c13: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00414c18: ADD ESP,0x4
// 00414c1b: MOV ESI,EAX
// 00414c1d: TEST EAX,EAX
// 00414c1f: JNZ 0x00414c32
//   XREF to: 00414c32 (CONDITIONAL_JUMP)
// 00414c21: PUSH EBX
// 00414c22: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00414c27: ADD ESP,0x4
// 00414c2a: MOV EAX,ESI
// 00414c2c: ADD ESP,0x18
// 00414c2f: POP ESI
// 00414c30: POP EBX
// 00414c31: RET
// 00414c32: PUSH -0x1
//   Label: LAB_00414c32
// 00414c34: LEA EAX,[EBX + 0x188]
// 00414c3a: PUSH dword ptr [EBX + 0x184]
// 00414c40: PUSH EAX
// 00414c41: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00414c46: ADD ESP,0xc
// 00414c49: PUSH EBX
// 00414c4a: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00414c4f: ADD ESP,0x4
// 00414c52: MOV EAX,ESI
// 00414c54: ADD ESP,0x18
// 00414c57: POP ESI
// 00414c58: POP EBX
// 00414c59: RET
