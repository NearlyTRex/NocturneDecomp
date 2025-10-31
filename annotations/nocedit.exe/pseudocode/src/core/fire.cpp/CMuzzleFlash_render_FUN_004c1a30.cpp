// Name: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// Address: 004c1a30
// Address Range: [[004c1a30, 004c1a79]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_render_FUN_004c7180 (004c7180) at 004c72dd [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450

#include "nocturne.h"

void __cdecl core_fire_cpp_CMuzzleFlash_render_FUN_004c1a30(CMuzzleFlash *this_ptr)

{
  CDemonSet *pCVar1;
  CMuzzleFlash *pCVar2;
  uint uVar3;
  BADSPACEBASE *in_ESP;
  int iStack00000008;
  int iStack0000000c;
  
  pCVar2 = this_ptr;
  if (*(int *)this_ptr->field0_0x0 != 2) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
            (g_CDemonRendererPtr,(CVector3f *)(this_ptr->field0_0x0 + 4));
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)(pCVar2->field0_0x0 + 0x10),(CVector3i *)0x0);
  core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,6.2831855);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xffffffe4,(CVector3i *)0x0);
  pCVar1 = g_CDemonSetPtr;
  pCVar1->field22_0x15ac80[0] = '\x01';
  pCVar1->field22_0x15ac80[1] = '\0';
  pCVar1->field22_0x15ac80[2] = '\0';
  pCVar1->field22_0x15ac80[3] = '\0';
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  uVar3 = crt_stdlib_c_rand_FUN_005feb5c();
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
            (g_CDemonRendererPtr,(uVar3 & 0x3fff) + 0x1800);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&DAT_02d133e4,0.0,99);
  this_ptr = (CMuzzleFlash *)0x0;
  iStack00000008 = 0;
  iStack0000000c = 0x3fc90fdb;
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&this_ptr,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&DAT_02d133e4,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
            (g_CDemonRendererPtr,(CVector3i *)&stack0xfffffff8,(CVector3i *)0x0);
  core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20(&DAT_02d133e4,0.0,99);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  pCVar1 = g_CDemonSetPtr;
  pCVar1->field22_0x15ac80[0] = '\0';
  pCVar1->field22_0x15ac80[1] = '\0';
  pCVar1->field22_0x15ac80[2] = '\0';
  pCVar1->field22_0x15ac80[3] = '\0';
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 004c1a30: PUSH EBX
//   Label: core_fire.cpp_CMuzzleFlash_render_FUN_004c1a30
// 004c1a31: PUSH EBP
// 004c1a32: SUB ESP,0x2c
// 004c1a35: MOV EBX,dword ptr [ESP + 0x38]
// 004c1a39: CMP dword ptr [EBX],0x2
// 004c1a3c: JZ 0x004c1a44
//   XREF to: 004c1a44 (CONDITIONAL_JUMP)
// 004c1a3e: ADD ESP,0x2c
// 004c1a41: POP EBP
// 004c1a42: POP EBX
// 004c1a43: RET
// 004c1a44: PUSH EDI
//   Label: LAB_004c1a44
// 004c1a45: PUSH ESI
// 004c1a46: LEA EAX,[EBX + 0x4]
// 004c1a49: PUSH EAX
// 004c1a4a: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 004c1a50: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004c1a51: CALL engine_drender.cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
//   XREF to: 0048c450 (UNCONDITIONAL_CALL)
// 004c1a56: ADD ESP,0x8
// 004c1a59: PUSH 0x0
// 004c1a5b: LEA EAX,[EBX + 0x10]
// 004c1a5e: PUSH EAX
// 004c1a5f: MOV EBX,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
//   XREF to: 02c6d578 (PARAM)
// 004c1a65: PUSH EBX
//   XREF to: 02c6d578 (DATA)
// 004c1a66: CALL engine_drender.cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
//   XREF to: 0048c4f0 (UNCONDITIONAL_CALL)
// 004c1a6b: ADD ESP,0xc
// 004c1a6e: PUSH 0x40c90fdb
// 004c1a73: PUSH 0x0
// 004c1a75: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
