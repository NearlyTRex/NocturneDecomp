// Name: core_door.cpp_CDoor_renderBackground_FUN_004809e0
// Address: 004809e0
// Address Range: [[004809e0, 00480a4d]]
// Convention: __cdecl
// Signature: void core_door.cpp_CDoor_renderBackground_FUN_004809e0(CDoor * this_ptr, int layer_flag)
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_renderBackground_FUN_004809e0(CDoor *this_ptr,int layer_flag)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_10;
  
  if ((layer_flag != 0) && (1 < this_ptr->one_shot)) {
    this_ptr->one_shot = 3;
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      fStack_10 = 6.615829e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                (&this_ptr->model,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return;
  }
  return;
}


// Assembly code:
// 004809e0: PUSH EBX
//   Label: core_door.cpp_CDoor_renderBackground_FUN_004809e0
// 004809e1: SUB ESP,0x18
// 004809e4: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004809e8: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 004809ed: JZ 0x004809f8
//   XREF to: 004809f8 (CONDITIONAL_JUMP)
// 004809ef: CMP dword ptr [EBX + 0x9c8],0x2
// 004809f6: JGE 0x004809fd
//   XREF to: 004809fd (CONDITIONAL_JUMP)
// 004809f8: ADD ESP,0x18
//   Label: LAB_004809f8
// 004809fb: POP EBX
// 004809fc: RET
// 004809fd: PUSH EBX
//   Label: LAB_004809fd
// 004809fe: MOV dword ptr [EBX + 0x9c8],0x3
// 00480a08: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00480a0d: ADD ESP,0x4
// 00480a10: MOV EDX,ESP
// 00480a12: PUSH EDX
// 00480a13: MOV EAX,dword ptr [EBX + 0x154]
// 00480a19: PUSH EBX
// 00480a1a: CALL dword ptr [EAX + 0x14]
// 00480a1d: ADD ESP,0x8
// 00480a20: PUSH EAX
// 00480a21: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00480a26: ADD ESP,0x4
// 00480a29: TEST EAX,EAX
// 00480a2b: JZ 0x00480a40
//   XREF to: 00480a40 (CONDITIONAL_JUMP)
// 00480a2d: PUSH -0x1
// 00480a2f: LEA EAX,[EBX + 0x158]
// 00480a35: PUSH 0x0
// 00480a37: PUSH EAX
// 00480a38: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00480a3d: ADD ESP,0xc
// 00480a40: PUSH EBX
//   Label: LAB_00480a40
// 00480a41: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 00480a46: ADD ESP,0x4
// 00480a49: ADD ESP,0x18
// 00480a4c: POP EBX
// 00480a4d: RET
