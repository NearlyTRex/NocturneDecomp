// Name: core_battery.cpp_FUN_00417f80
// Address: 00417f80
// Address Range: [[00417f80, 00417fdb] [00417fe7, 00417ffb]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00417f80()
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

/* Signature: undefined1 actors_other_battery.cpp_FUN_00417f80(undefined4 param_1) */

int core_battery_cpp_FUN_00417f80(void)

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
// 00417f80: PUSH EBX
//   Label: core_battery.cpp_FUN_00417f80
// 00417f81: PUSH ESI
// 00417f82: SUB ESP,0x18
// 00417f85: MOV EBX,dword ptr [ESP + 0x24]
// 00417f89: LEA EAX,[EBX + 0x20]
// 00417f8c: PUSH EAX
// 00417f8d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00417f93: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00417f94: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 00417f99: ADD ESP,0x8
// 00417f9c: PUSH 0x0
// 00417f9e: LEA EAX,[EBX + 0x30]
// 00417fa1: PUSH EAX
// 00417fa2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 00417fa8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 00417fa9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 00417fae: ADD ESP,0xc
// 00417fb1: MOV EAX,ESP
// 00417fb3: PUSH EAX
// 00417fb4: MOV ESI,dword ptr [EBX + 0x154]
// 00417fba: PUSH EBX
// 00417fbb: CALL dword ptr [ESI + 0x14]
// 00417fbe: ADD ESP,0x8
// 00417fc1: PUSH EAX
// 00417fc2: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 00417fc7: ADD ESP,0x4
// 00417fca: MOV ESI,EAX
// 00417fcc: TEST EAX,EAX
// 00417fce: JNZ 0x00417fe7
//   XREF to: 00417fe7 (CONDITIONAL_JUMP)
// 00417fd0: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_00417fd0
//   XREF to: 006703ec (READ)
// 00417fd6: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 00417fd7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 00417fe7: PUSH -0x1
//   Label: LAB_00417fe7
// 00417fe9: ADD EBX,0x158
// 00417fef: PUSH 0x0
// 00417ff1: PUSH EBX
// 00417ff2: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 00417ff7: ADD ESP,0xc
// 00417ffa: JMP 0x00417fd0
//   XREF to: 00417fd0 (UNCONDITIONAL_JUMP)
