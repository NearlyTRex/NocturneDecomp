// Name: core_gasmask.cpp_CGasMask_FUN_004e5da0
// Address: 004e5da0
// Address Range: [[004e5da0, 004e5dfb] [004e5e07, 004e5e1b]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5da0()
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

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_FUN_004e5da0(undefined4 param_1) */

int core_gasmask_cpp_CGasMask_FUN_004e5da0(void)

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
// 004e5da0: PUSH EBX
//   Label: core_gasmask.cpp_CGasMask_FUN_004e5da0
// 004e5da1: PUSH ESI
// 004e5da2: SUB ESP,0x18
// 004e5da5: MOV EBX,dword ptr [ESP + 0x24]
// 004e5da9: LEA EAX,[EBX + 0x20]
// 004e5dac: PUSH EAX
// 004e5dad: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e5db3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004e5db4: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004e5db9: ADD ESP,0x8
// 004e5dbc: PUSH 0x0
// 004e5dbe: LEA EAX,[EBX + 0x30]
// 004e5dc1: PUSH EAX
// 004e5dc2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004e5dc8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004e5dc9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004e5dce: ADD ESP,0xc
// 004e5dd1: MOV EAX,ESP
// 004e5dd3: PUSH EAX
// 004e5dd4: MOV ESI,dword ptr [EBX + 0x154]
// 004e5dda: PUSH EBX
// 004e5ddb: CALL dword ptr [ESI + 0x14]
// 004e5dde: ADD ESP,0x8
// 004e5de1: PUSH EAX
// 004e5de2: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004e5de7: ADD ESP,0x4
// 004e5dea: MOV ESI,EAX
// 004e5dec: TEST EAX,EAX
// 004e5dee: JNZ 0x004e5e07
//   XREF to: 004e5e07 (CONDITIONAL_JUMP)
// 004e5df0: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004e5df0
//   XREF to: 006703ec (READ)
// 004e5df6: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004e5df7: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004e5e07: PUSH -0x1
//   Label: LAB_004e5e07
// 004e5e09: ADD EBX,0x158
// 004e5e0f: PUSH 0x0
// 004e5e11: PUSH EBX
// 004e5e12: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004e5e17: ADD ESP,0xc
// 004e5e1a: JMP 0x004e5df0
//   XREF to: 004e5df0 (UNCONDITIONAL_JUMP)
