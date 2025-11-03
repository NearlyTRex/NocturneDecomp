// Name: core_simbox.cpp_CSimBox_FUN_005890f0
// Address: 005890f0
// Address Range: [[005890f0, 00589155]]
// Convention: __cdecl
// Signature: int core_simbox.cpp_CSimBox_FUN_005890f0(CSimBox * this_ptr)
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

int __cdecl core_simbox_cpp_CSimBox_FUN_005890f0(CSimBox *this_ptr)

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
  fStack_14 = 8.133632e-39;
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158,0.0,-1);
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 005890f0: PUSH EBX
//   Label: core_simbox.cpp_CSimBox_FUN_005890f0
// 005890f1: PUSH ESI
// 005890f2: SUB ESP,0x18
// 005890f5: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x4] (READ)
// 005890f9: PUSH EBX
// 005890fa: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 005890ff: ADD ESP,0x4
// 00589102: MOV EAX,ESP
// 00589104: PUSH EAX
// 00589105: MOV ESI,dword ptr [EBX + 0x154]
// 0058910b: PUSH EBX
// 0058910c: CALL dword ptr [ESI + 0x14]
// 0058910f: ADD ESP,0x8
// 00589112: PUSH EAX
// 00589113: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00589118: ADD ESP,0x4
// 0058911b: MOV ESI,EAX
// 0058911d: TEST EAX,EAX
// 0058911f: JNZ 0x00589132
//   XREF to: 00589132 (CONDITIONAL_JUMP)
// 00589121: PUSH EBX
// 00589122: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00589127: ADD ESP,0x4
// 0058912a: MOV EAX,ESI
// 0058912c: ADD ESP,0x18
// 0058912f: POP ESI
// 00589130: POP EBX
// 00589131: RET
// 00589132: PUSH -0x1
//   Label: LAB_00589132
// 00589134: LEA EAX,[EBX + 0x158]
// 0058913a: PUSH 0x0
// 0058913c: PUSH EAX
// 0058913d: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00589142: ADD ESP,0xc
// 00589145: PUSH EBX
// 00589146: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0058914b: ADD ESP,0x4
// 0058914e: MOV EAX,ESI
// 00589150: ADD ESP,0x18
// 00589153: POP ESI
// 00589154: POP EBX
// 00589155: RET
