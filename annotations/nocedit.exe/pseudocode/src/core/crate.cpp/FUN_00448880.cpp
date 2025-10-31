// Name: core_crate.cpp_FUN_00448880
// Address: 00448880
// Address Range: [[00448880, 004488db] [004488f1, 00448905]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448880()
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448880(undefined4 param_1) */

int core_crate_cpp_FUN_00448880(void)

{
  CBoundingBox3D *this_ptr;
  int iVar1;
  int in_stack_00000004;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(in_stack_00000004 + 0x20));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(in_stack_00000004 + 0x30),(CVector3i *)0x0);
  this_ptr = (CBoundingBox3D *)(**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x14))();
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}


// Assembly code:
// 00448880: PUSH EBX
//   Label: core_crate.cpp_FUN_00448880
// 00448881: PUSH ESI
// 00448882: SUB ESP,0x18
// 00448885: MOV EBX,dword ptr [ESP + 0x24]
// 00448889: LEA EAX,[EBX + 0x20]
// 0044888c: PUSH EAX
// 0044888d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00448893: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00448894: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00448899: ADD ESP,0x8
// 0044889c: PUSH 0x0
// 0044889e: LEA EAX,[EBX + 0x30]
// 004488a1: PUSH EAX
// 004488a2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004488a8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004488a9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004488ae: ADD ESP,0xc
// 004488b1: MOV EAX,ESP
// 004488b3: PUSH EAX
// 004488b4: MOV ESI,dword ptr [EBX + 0x154]
// 004488ba: PUSH EBX
// 004488bb: CALL dword ptr [ESI + 0x14]
// 004488be: ADD ESP,0x8
// 004488c1: PUSH EAX
// 004488c2: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004488c7: ADD ESP,0x4
// 004488ca: MOV ESI,EAX
// 004488cc: TEST EAX,EAX
// 004488ce: JNZ 0x004488f1
//   XREF to: 004488f1 (CONDITIONAL_JUMP)
// 004488d0: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004488d0
//   XREF to: 006703ec (READ)
// 004488d6: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004488d7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004488f1: PUSH -0x1
//   Label: LAB_004488f1
// 004488f3: ADD EBX,0x158
// 004488f9: PUSH 0x0
// 004488fb: PUSH EBX
// 004488fc: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00448901: ADD ESP,0xc
// 00448904: JMP 0x004488d0
//   XREF to: 004488d0 (UNCONDITIONAL_JUMP)
