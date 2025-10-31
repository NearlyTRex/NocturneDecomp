// Name: core_backgnd.cpp_CBackgroundActor_FUN_00412860
// Address: 00412860
// Address Range: [[00412860, 004128c5]]
// Convention: __cdecl
// Signature: void core_backgnd.cpp_CBackgroundActor_FUN_00412860(CBackgroundActor * this_ptr)
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

void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412860(CBackgroundActor *this_ptr)

{
  CBoundingBox3D *this_ptr_00;
  int iVar1;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  float fStack_10;
  
  if ((*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(&this_ptr->base_actor);
    this_ptr_00 = (*((this_ptr->base_actor).metadata.vtable)->getBoundingBox)
                            (&this_ptr->base_actor,(CBoundingBox3D *)&stack0xffffffe8);
    iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    if (iVar1 != 0) {
      fStack_10 = 5.98391e-39;
      core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                ((CKeyFramedModelInstance *)this_ptr->model_name,0.0,-1);
    }
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(&this_ptr->base_actor);
    return;
  }
  return;
}


// Assembly code:
// 00412860: PUSH EBX
//   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412860
// 00412861: SUB ESP,0x18
// 00412864: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00412868: MOV EAX,[0x0067d550]
//   XREF to: 02f33740 (DATA)
//   XREF to: 0067d550 (READ)
// 0041286d: CMP dword ptr [EAX + 0x4],0x0
//   XREF to: 02f33744 (READ)
// 00412871: JNZ 0x0041287a
//   XREF to: 0041287a (CONDITIONAL_JUMP)
// 00412873: CMP dword ptr [ESP + 0x24],0x0
//   XREF to: Stack[0x8] (READ)
// 00412878: JNZ 0x0041287f
//   XREF to: 0041287f (CONDITIONAL_JUMP)
// 0041287a: ADD ESP,0x18
//   Label: LAB_0041287a
// 0041287d: POP EBX
// 0041287e: RET
// 0041287f: PUSH EBX
//   Label: LAB_0041287f
// 00412880: CALL core_actor.cpp_CDemonActor_setupRenderState_FUN_00408b00
//   XREF to: 00408b00 (UNCONDITIONAL_CALL)
// 00412885: ADD ESP,0x4
// 00412888: MOV EDX,ESP
// 0041288a: PUSH EDX
// 0041288b: MOV EAX,dword ptr [EBX + 0x154]
// 00412891: PUSH EBX
// 00412892: CALL dword ptr [EAX + 0x14]
// 00412895: ADD ESP,0x8
// 00412898: PUSH EAX
// 00412899: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 0041289e: ADD ESP,0x4
// 004128a1: TEST EAX,EAX
// 004128a3: JZ 0x004128b8
//   XREF to: 004128b8 (CONDITIONAL_JUMP)
// 004128a5: PUSH -0x1
// 004128a7: LEA EAX,[EBX + 0x158]
// 004128ad: PUSH 0x0
// 004128af: PUSH EAX
// 004128b0: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004128b5: ADD ESP,0xc
// 004128b8: PUSH EBX
//   Label: LAB_004128b8
// 004128b9: CALL core_actor.cpp_CDemonActor_restoreRenderState_FUN_00408b40
//   XREF to: 00408b40 (UNCONDITIONAL_CALL)
// 004128be: ADD ESP,0x4
// 004128c1: ADD ESP,0x18
// 004128c4: POP EBX
// 004128c5: RET
