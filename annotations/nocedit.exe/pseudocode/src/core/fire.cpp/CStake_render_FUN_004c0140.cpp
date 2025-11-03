// Name: core_fire.cpp_CStake_render_FUN_004c0140
// Address: 004c0140
// Address Range: [[004c0140, 004c01d2] [004c01dd, 004c020e]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CStake_render_FUN_004c0140(CStake * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_renderDecals_FUN_004c74a0 (004c74a0) at 004c752d [UNCONDITIONAL_CALL]
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c748b [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CKeyFramedModelInstance g_FireEffectFlamingStakeModel
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_fire_cpp_CStake_render_FUN_004c0140(CStake *this_ptr)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,&(this_ptr->box).position);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&(this_ptr->box).orientation,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&g_FireEffectFlamingStakeModel);
  iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0((CBoundingBox3D *)&stack0xffffffe8);
  if (iVar1 != 0) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
              (&g_FireEffectFlamingStakeModel,0.0,-1);
  }
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  return;
}


// Assembly code:
// 004c0140: PUSH EBX
//   Label: core_fire.cpp_CStake_render_FUN_004c0140
// 004c0141: PUSH ESI
// 004c0142: PUSH EDI
// 004c0143: SUB ESP,0x18
// 004c0146: MOV EDI,dword ptr [ESP + 0x28]
// 004c014a: LEA EBX,[EDI + 0x4]
// 004c014d: PUSH EBX
// 004c014e: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0154: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004c0155: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c015a: ADD ESP,0x8
// 004c015d: PUSH 0x0
// 004c015f: LEA ESI,[EDI + 0x10]
// 004c0162: PUSH ESI
// 004c0163: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c0169: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c016a: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c016f: ADD ESP,0xc
// 004c0172: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004c0177: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004c017c: LEA EDX,[EAX + 0x5678]
// 004c0182: ADD ESP,0x4
// 004c0185: MOV EAX,dword ptr [EDX]
// 004c0187: MOV dword ptr [ESP],EAX
// 004c018a: LEA EAX,[EDX + 0x4]
// 004c018d: MOV EAX,dword ptr [EAX]
// 004c018f: MOV dword ptr [ESP + 0x4],EAX
// 004c0193: LEA EAX,[EDX + 0x8]
// 004c0196: MOV EAX,dword ptr [EAX]
// 004c0198: MOV dword ptr [ESP + 0x8],EAX
// 004c019c: MOV EAX,dword ptr [EDX + 0xc]
// 004c019f: ADD EDX,0xc
// 004c01a2: MOV dword ptr [ESP + 0xc],EAX
// 004c01a6: LEA EAX,[EDX + 0x4]
// 004c01a9: MOV EAX,dword ptr [EAX]
// 004c01ab: MOV dword ptr [ESP + 0x10],EAX
// 004c01af: LEA EAX,[EDX + 0x8]
// 004c01b2: MOV EAX,dword ptr [EAX]
// 004c01b4: MOV dword ptr [ESP + 0x14],EAX
// 004c01b8: MOV EAX,ESP
// 004c01ba: PUSH EAX
// 004c01bb: CALL core_box.cpp_CBoundingBox3D_isVisible_FUN_004204f0
//   XREF to: 004204f0 (UNCONDITIONAL_CALL)
// 004c01c0: ADD ESP,0x4
// 004c01c3: TEST EAX,EAX
// 004c01c5: JNZ 0x004c01dd
//   XREF to: 004c01dd (CONDITIONAL_JUMP)
// 004c01c7: MOV ESI,dword ptr [0x006703ec]
//   Label: LAB_004c01c7
//   XREF to: 006703ec (READ)
// 004c01cd: PUSH ESI
//   XREF to: 02c6d578 (DATA)
// 004c01ce: CALL engine_drender.cpp_CDemonRenderer_matrixPop_FUN_0050d720
//   XREF to: 0048c640 (UNCONDITIONAL_CALL)
// 004c01dd: LEA EAX,[EDI + 0x1c]
//   Label: LAB_004c01dd
// 004c01e0: PUSH EAX
// 004c01e1: LEA EAX,[ESP + 0x10]
// 004c01e5: PUSH EAX
// 004c01e6: LEA EAX,[ESP + 0x8]
// 004c01ea: PUSH EAX
// 004c01eb: PUSH ESI
// 004c01ec: PUSH EBX
// 004c01ed: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 006810c8 (READ)
//   XREF to: 03114278 (PARAM)
// 004c01f3: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004c01f4: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004c01f9: ADD ESP,0x18
// 004c01fc: PUSH -0x1
// 004c01fe: PUSH 0x0
// 004c0200: PUSH 0x2d12df4
//   XREF to: 02d12df4 (DATA)
// 004c0205: CALL core_dmodel.cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
//   XREF to: 00478d20 (UNCONDITIONAL_CALL)
// 004c020a: ADD ESP,0xc
// 004c020d: JMP 0x004c01c7
//   XREF to: 004c01c7 (UNCONDITIONAL_JUMP)
