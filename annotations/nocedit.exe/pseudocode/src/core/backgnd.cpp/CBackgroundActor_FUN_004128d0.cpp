// Name: core_backgnd.cpp_CBackgroundActor_FUN_004128d0
// Address: 004128d0
// Address Range: [[004128d0, 00412938]]
// Convention: __cdecl
// Signature: int core_backgnd.cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor * this_ptr)
// Globals:
//   CDemonMission* g_CDemonMissionPtr = 02f33740
//   CDemonMission g_CDemonMissionInstance
//   undefined4 DAT_02f33744
// Function calls:
//   core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20

#include "nocturne.h"

int __cdecl core_backgnd_cpp_CBackgroundActor_FUN_004128d0(CBackgroundActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  float fStack_14;
  
  if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
    return 0;
  }
  core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
  this_ptr_00 = (*((this_ptr->base_actor).vtable)->getBoundingBox)
                          (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
  if (iVar1 != 0) {
    fStack_14 = 5.984067e-39;
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)this_ptr->model_name,0.0,-1);
  }
  core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
  return iVar1;
}


// Assembly code:
// 004128d0: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_004128d0
// 004128d1: SUB ESP,0x18
// 004128d4: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 004128d8: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (PARAM)
//   XREF to: 0067d550 (READ)
// 004128dd: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 004128e1: JNZ 0x004128ea
//   XREF to: 004128ea (CONDITIONAL_JUMP)
// 004128e3: XOR EAX,EAX
// 004128e5: ADD ESP,0x18
// 004128e8: POP EBX
// 004128e9: RET
// 004128ea: PUSH ESI
//   Label: LAB_004128ea
// 004128eb: PUSH EBX
// 004128ec: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 004128f1: ADD ESP,0x4
// 004128f4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1c] (DATA)
// 004128f8: PUSH EAX
// 004128f9: MOV EDX,dword ptr [EBX + 0x154]
// 004128ff: PUSH EBX
// 00412900: CALL dword ptr [EDX + 0x14]
// 00412903: ADD ESP,0x8
// 00412906: PUSH EAX
// 00412907: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0041290c: ADD ESP,0x4
// 0041290f: MOV ESI,EAX
// 00412911: TEST EAX,EAX
// 00412913: JZ 0x00412928
//   XREF to: 00412928 (CONDITIONAL_JUMP)
// 00412915: PUSH -0x1
// 00412917: LEA EAX,[EBX + 0x158]
// 0041291d: PUSH 0x0
// 0041291f: PUSH EAX
// 00412920: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00412925: ADD ESP,0xc
// 00412928: PUSH EBX
//   Label: LAB_00412928
// 00412929: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 0041292e: ADD ESP,0x4
// 00412931: MOV EAX,ESI
// 00412933: POP ESI
// 00412934: ADD ESP,0x18
// 00412937: POP EBX
// 00412938: RET
