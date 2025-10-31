// Name: core_fire.cpp_CToss_FUN_004c4160
// Address: 004c4160
// Address Range: [[004c4160, 004c41bf]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CToss_FUN_004c4160(CToss * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c73c9 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_fire_cpp_CToss_FUN_004c4160(CToss *this_ptr)

{
  if (*(float *)(this_ptr->field0_0x0 + 0x3dc) <= 0.0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 0x180));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(this_ptr->field0_0x0 + 0x18c),(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
            ((CKeyFramedModelInstance *)(this_ptr->field0_0x0 + 4),0.0,-1);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c4160: PUSH EBX
//   Label: core_fire.cpp_CToss_FUN_004c4160
// 004c4161: MOV EBX,dword ptr [ESP + 0x8]
// 004c4165: FLD float ptr [EBX + 0x3dc]
// 004c416b: FLDZ
// 004c416d: FCOMPP
// 004c416f: FNSTSW AX
// 004c4171: SAHF
// 004c4172: JC 0x004c4176
//   XREF to: 004c4176 (CONDITIONAL_JUMP)
// 004c4174: POP EBX
// 004c4175: RET
// 004c4176: LEA EAX,[EBX + 0x180]
//   Label: LAB_004c4176
// 004c417c: PUSH EAX
// 004c417d: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c4183: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c4184: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c4189: ADD ESP,0x8
// 004c418c: PUSH 0x0
// 004c418e: LEA EAX,[EBX + 0x18c]
// 004c4194: PUSH EAX
// 004c4195: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c419b: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c419c: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c41a1: ADD ESP,0xc
// 004c41a4: PUSH -0x1
// 004c41a6: ADD EBX,0x4
// 004c41a9: PUSH 0x0
// 004c41ab: PUSH EBX
// 004c41ac: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004c41b1: ADD ESP,0xc
// 004c41b4: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c41ba: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c41bb: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
