// Name: core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80
// Address: 00410e80
// Address Range: [[00410e80, 00410ee5]]
// Convention: __cdecl
// Signature: int core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80(CAmmo * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

int __cdecl core_ammo_cpp_CAmmo_renderOpaque_FUN_00410e80(CAmmo *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe4);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 == 0) {
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return 0;
  }
  fStack_14 = 5.974624e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&this_ptr->model,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 00410e80: PUSH EBX
//   Label: core_ammo.cpp_CAmmo_renderOpaque_FUN_00410e80
// 00410e81: PUSH ESI
// 00410e82: SUB ESP,0x18
// 00410e85: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 00410e89: PUSH EBX
// 00410e8a: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00410e8f: ADD ESP,0x4
// 00410e92: MOV EAX,ESP
// 00410e94: PUSH EAX
// 00410e95: MOV ESI,dword ptr [EBX + 0x154]
// 00410e9b: PUSH EBX
// 00410e9c: CALL dword ptr [ESI + 0x14]
// 00410e9f: ADD ESP,0x8
// 00410ea2: PUSH EAX
// 00410ea3: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00410ea8: ADD ESP,0x4
// 00410eab: MOV ESI,EAX
// 00410ead: TEST EAX,EAX
// 00410eaf: JNZ 0x00410ec2
//   XREF to: 00410ec2 (CONDITIONAL_JUMP)
// 00410eb1: PUSH EBX
// 00410eb2: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00410eb7: ADD ESP,0x4
// 00410eba: MOV EAX,ESI
// 00410ebc: ADD ESP,0x18
// 00410ebf: POP ESI
// 00410ec0: POP EBX
// 00410ec1: RET
// 00410ec2: PUSH -0x1
//   Label: LAB_00410ec2
// 00410ec4: LEA EAX,[EBX + 0x158]
// 00410eca: PUSH 0x0
// 00410ecc: PUSH EAX
// 00410ecd: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00410ed2: ADD ESP,0xc
// 00410ed5: PUSH EBX
// 00410ed6: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00410edb: ADD ESP,0x4
// 00410ede: MOV EAX,ESI
// 00410ee0: ADD ESP,0x18
// 00410ee3: POP ESI
// 00410ee4: POP EBX
// 00410ee5: RET
