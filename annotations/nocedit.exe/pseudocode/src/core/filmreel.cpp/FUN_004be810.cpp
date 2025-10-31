// Name: core_filmreel.cpp_FUN_004be810
// Address: 004be810
// Address Range: [[004be810, 004be86b] [004be881, 004be895]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be810()
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

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be810(undefined4 param_1) */

int core_filmreel_cpp_FUN_004be810(void)

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
// 004be810: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be810
// 004be811: PUSH ESI
// 004be812: SUB ESP,0x18
// 004be815: MOV EBX,dword ptr [ESP + 0x24]
// 004be819: LEA EAX,[EBX + 0x20]
// 004be81c: PUSH EAX
// 004be81d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004be823: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004be824: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004be829: ADD ESP,0x8
// 004be82c: PUSH 0x0
// 004be82e: LEA EAX,[EBX + 0x30]
// 004be831: PUSH EAX
// 004be832: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004be838: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004be839: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004be83e: ADD ESP,0xc
// 004be841: MOV EAX,ESP
// 004be843: PUSH EAX
// 004be844: MOV ESI,dword ptr [EBX + 0x154]
// 004be84a: PUSH EBX
// 004be84b: CALL dword ptr [ESI + 0x14]
// 004be84e: ADD ESP,0x8
// 004be851: PUSH EAX
// 004be852: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004be857: ADD ESP,0x4
// 004be85a: MOV ESI,EAX
// 004be85c: TEST EAX,EAX
// 004be85e: JNZ 0x004be881
//   XREF to: 004be881 (CONDITIONAL_JUMP)
// 004be860: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004be860
//   XREF to: 006703ec (READ)
// 004be866: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004be867: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004be881: PUSH -0x1
//   Label: LAB_004be881
// 004be883: ADD EBX,0x158
// 004be889: PUSH 0x0
// 004be88b: PUSH EBX
// 004be88c: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004be891: ADD ESP,0xc
// 004be894: JMP 0x004be860
//   XREF to: 004be860 (UNCONDITIONAL_JUMP)
