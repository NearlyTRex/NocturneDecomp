// Name: core_flamecan.cpp_FUN_004cb4c0
// Address: 004cb4c0
// Address Range: [[004cb4c0, 004cb521] [004cb52d, 004cb541]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb4c0()
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

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb4c0(undefined4 param_1) */

int core_flamecan_cpp_FUN_004cb4c0(void)

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
  *(int *)(in_stack_00000004 + 0x5e4) = iVar1;
  if (iVar1 != 0) {
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158),0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return iVar1;
}


// Assembly code:
// 004cb4c0: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb4c0
// 004cb4c1: PUSH ESI
// 004cb4c2: SUB ESP,0x18
// 004cb4c5: MOV EBX,dword ptr [ESP + 0x24]
// 004cb4c9: LEA EAX,[EBX + 0x20]
// 004cb4cc: PUSH EAX
// 004cb4cd: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004cb4d3: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004cb4d4: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004cb4d9: ADD ESP,0x8
// 004cb4dc: PUSH 0x0
// 004cb4de: LEA EAX,[EBX + 0x30]
// 004cb4e1: PUSH EAX
// 004cb4e2: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004cb4e8: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004cb4e9: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004cb4ee: ADD ESP,0xc
// 004cb4f1: MOV EAX,ESP
// 004cb4f3: PUSH EAX
// 004cb4f4: MOV ESI,dword ptr [EBX + 0x154]
// 004cb4fa: PUSH EBX
// 004cb4fb: CALL dword ptr [ESI + 0x14]
// 004cb4fe: ADD ESP,0x8
// 004cb501: PUSH EAX
// 004cb502: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004cb507: ADD ESP,0x4
// 004cb50a: MOV ESI,EAX
// 004cb50c: MOV dword ptr [EBX + 0x5e4],EAX
// 004cb512: TEST EAX,EAX
// 004cb514: JNZ 0x004cb52d
//   XREF to: 004cb52d (CONDITIONAL_JUMP)
// 004cb516: MOV EBX,dword ptr [0x006703ec]
//   Label: LAB_004cb516
//   XREF to: 006703ec (READ)
// 004cb51c: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004cb51d: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004cb52d: PUSH -0x1
//   Label: LAB_004cb52d
// 004cb52f: ADD EBX,0x158
// 004cb535: PUSH 0x0
// 004cb537: PUSH EBX
// 004cb538: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004cb53d: ADD ESP,0xc
// 004cb540: JMP 0x004cb516
//   XREF to: 004cb516 (UNCONDITIONAL_JUMP)
