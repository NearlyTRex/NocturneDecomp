// Name: core_charactr.cpp_CCharacter_FUN_0042af60
// Address: 0042af60
// Address Range: [[0042af60, 0042b0df]]
// Convention: __cdecl
// Signature: void core_charactr.cpp_CCharacter_FUN_0042af60(CCharacter * this_ptr)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429aa0 (00429aa0) at 00429ae3 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0061713a = 8388608
//   SMRGLTextureBasic DAT_0066e6b0
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   int INT_00823a90
//   int INT_00823a94
//   CDemonRenderer g_CDemonRendererInstance
//   undefined4 DAT_02c6d598
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.delta_time_float
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
//   core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
//   core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
//   core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
//   core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdlib.c_rand_FUN_005feb5c
//   engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   engine_texture.cpp_ensureTextureLoaded_FUN_005dd800

#include "nocturne.h"

void __cdecl core_charactr_cpp_CCharacter_FUN_0042af60(CCharacter *this_ptr)

{
  CDeformableModelInstance *this_ptr_00;
  CDemonRenderer *pCVar1;
  int iVar2;
  CDeformableModel *this_ptr_01;
  int iVar3;
  undefined4 extraout_EDX;
  float10 fVar4;
  CBoundingBox3D *in_stack_ffffe570;
  
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xc000);
  if ((CHero *)this_ptr == g_HeroActors[g_LocalHeroIndex]) {
    fVar4 = (float10)INT_00823a90 + (float10)g_CGamePtr->delta_time_float * (float10)FLOAT_0061713a;
    crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,g_CGamePtr));
    INT_00823a90 = (int)ROUND(fVar4);
  }
  iVar2 = crt_stdlib_c_rand_FUN_005feb5c();
  INT_00823a94 = iVar2 % 6;
  g_CDemonRendererPtr->field8_0x20 = 1;
  engine_texture_cpp_ensureTextureLoaded_FUN_005dd800(&DAT_0066e6b0 + iVar2 % 6);
  this_ptr_00 = &this_ptr->model;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a1510(this_ptr_00);
  core_skeleton_cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
            (this_ptr_00,1.1,-1);
  core_skeleton_cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40(this_ptr_00);
  this_ptr_01 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr_00);
  iVar2 = core_skeleton_cpp_CDeformableModel_selectLOD_FUN_0059ce40(this_ptr_01,in_stack_ffffe570);
  core_skeleton_cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250(this_ptr_00,iVar2);
  core_skeleton_cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800(this_ptr_00);
  iVar2 = 0;
  do {
    pCVar1 = g_CDemonRendererPtr;
    *(undefined4 *)((int)&g_CDemonRendererPtr->vertex_buffer_ptr->light + iVar2) = 0xb332;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->color + iVar2) = 0xb332;
    iVar3 = iVar2 + 0x30;
    *(undefined4 *)((int)&pCVar1->vertex_buffer_ptr->fog + iVar2) = 0xffff;
    iVar2 = iVar3;
  } while (iVar3 != 96000);
  core_skeleton_cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340(&this_ptr->model);
  g_CDemonRendererPtr->field8_0x20 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a15e0(&this_ptr->model);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
  return;
}


// Assembly code:
// 0042af60: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042af60
// 0042af61: PUSH ESI
// 0042af62: PUSH EBP
// 0042af63: SUB ESP,0x1aa0
// 0042af69: MOV ESI,dword ptr [ESP + 0x1ab0]
//   XREF to: Stack[0x4] (READ)
// 0042af70: PUSH 0x1
// 0042af72: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042af78: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 0042af79: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0042af7e: ADD ESP,0x8
// 0042af81: PUSH 0xc000
// 0042af86: MOV ECX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0042af8c: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 0042af8d: CALL engine_drender.cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
//   XREF to: 0048ca60 (UNCONDITIONAL_CALL)
// 0042af92: MOV EAX,[0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0042af97: MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 0042af9e: ADD ESP,0x8
// 0042afa1: CMP ESI,EBX
// 0042afa3: JNZ 0x0042afc9
//   XREF to: 0042afc9 (CONDITIONAL_JUMP)
// 0042afa5: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 0042afaa: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 0042afb0: FMUL float ptr [0x0061713a]
//   XREF to: 0061713a (READ)
// 0042afb6: FILD dword ptr [0x00823a90]
//   XREF to: 00823a90 (READ)
// 0042afbc: FADDP
// 0042afbe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 0042afc3: FISTP dword ptr [0x00823a90]
//   XREF to: 00823a90 (WRITE)
// 0042afc9: PUSH EDI
//   Label: LAB_0042afc9
// 0042afca: CALL crt_stdlib.c_rand_FUN_005feb5c
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 0042afcf: MOV EDX,EAX
// 0042afd1: MOV ECX,0x6
// 0042afd6: SAR EDX,0x1f
// 0042afd9: IDIV ECX
// 0042afdb: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0042afe0: MOV dword ptr [0x00823a94],EDX
//   XREF to: 00823a94 (WRITE)
// 0042afe6: MOV dword ptr [EAX + 0x20],0x1
//   XREF to: 02c6d598 (WRITE)
// 0042afed: LEA EAX,[EDX*0x4 + 0x0]
// 0042aff4: SUB EAX,EDX
// 0042aff6: SHL EAX,0x3
// 0042aff9: ADD EAX,0x66e6b0
//   XREF to: 0066e6b0 (DATA)
// 0042affe: PUSH EAX
// 0042afff: CALL engine_texture.cpp_ensureTextureLoaded_FUN_005dd800
//   XREF to: 005dd800 (UNCONDITIONAL_CALL)
// 0042b004: ADD ESP,0x4
// 0042b007: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1aac] (DATA)
// 0042b00b: PUSH EAX
// 0042b00c: LEA EBX,[ESI + 0x158]
// 0042b012: PUSH EBX
// 0042b013: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a1510
//   XREF to: 005a1510 (UNCONDITIONAL_CALL)
// 0042b018: ADD ESP,0x8
// 0042b01b: PUSH -0x1
// 0042b01d: PUSH 0x3f8ccccd
// 0042b022: PUSH EBX
// 0042b023: CALL core_skeleton.cpp_CDeformableModelInstance_scalePoseDataForHierarchy_FUN_005a00f0
//   XREF to: 005a00f0 (UNCONDITIONAL_CALL)
// 0042b028: ADD ESP,0xc
// 0042b02b: PUSH EBX
// 0042b02c: CALL core_skeleton.cpp_CDeformableModelInstance_computeBoneTransforms_FUN_0059fb40
//   XREF to: 0059fb40 (UNCONDITIONAL_CALL)
// 0042b031: ADD ESP,0x4
// 0042b034: LEA EAX,[ESI + 0x2390]
// 0042b03a: PUSH EAX
// 0042b03b: PUSH EBX
// 0042b03c: CALL core_skeleton.cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0
//   XREF to: 005a07a0 (UNCONDITIONAL_CALL)
// 0042b041: ADD ESP,0x4
// 0042b044: PUSH EAX
// 0042b045: CALL core_skeleton.cpp_CDeformableModel_selectLOD_FUN_0059ce40
//   XREF to: 0059ce40 (UNCONDITIONAL_CALL)
// 0042b04a: ADD ESP,0x8
// 0042b04d: PUSH EAX
// 0042b04e: PUSH EBX
// 0042b04f: CALL core_skeleton.cpp_CDeformableModelInstance_skinAndRotateVertices_FUN_005a0250
//   XREF to: 005a0250 (UNCONDITIONAL_CALL)
// 0042b054: ADD ESP,0x8
// 0042b057: PUSH 0x0
// 0042b059: MOV EDI,dword ptr [0x00823a90]
//   XREF to: 00823a90 (READ)
// 0042b05f: PUSH EDI
// 0042b060: PUSH EBX
// 0042b061: CALL core_skeleton.cpp_CDeformableModelInstance_computeCylindricalUVs_FUN_005a1800
//   XREF to: 005a1800 (UNCONDITIONAL_CALL)
// 0042b066: ADD ESP,0xc
// 0042b069: XOR EAX,EAX
// 0042b06b: MOV EBX,0xb332
// 0042b070: POP EDI
// 0042b071: MOV EDX,dword ptr [0x006703ec]
//   Label: LAB_0042b071
//   XREF to: 006703ec (READ)
// 0042b077: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042b079: MOV dword ptr [ECX + EAX*0x1 + 0x20],EBX
// 0042b07d: MOV ECX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042b07f: MOV dword ptr [ECX + EAX*0x1 + 0x24],EBX
// 0042b083: ADD EAX,0x30
// 0042b086: MOV EDX,dword ptr [EDX]
//   XREF to: 02c6d578 (READ)
// 0042b088: MOV dword ptr [EDX + EAX*0x1 + -0x8],0xffff
// 0042b090: CMP EAX,0x17700
// 0042b095: JNZ 0x0042b071
//   XREF to: 0042b071 (CONDITIONAL_JUMP)
// 0042b097: PUSH 0x1
// 0042b099: PUSH 0x267
// 0042b09e: LEA EBX,[ESI + 0x158]
// 0042b0a4: PUSH EBX
// 0042b0a5: CALL core_skeleton.cpp_CDeformableModelInstance_renderPolygons_FUN_005a0340
//   XREF to: 005a0340 (UNCONDITIONAL_CALL)
// 0042b0aa: MOV EAX,[0x006703ec]
//   XREF to: 006703ec (READ)
// 0042b0af: ADD ESP,0xc
// 0042b0b2: MOV dword ptr [EAX + 0x20],0x0
//   XREF to: 02c6d598 (WRITE)
// 0042b0b9: MOV EAX,ESP
// 0042b0bb: PUSH EAX
// 0042b0bc: PUSH EBX
// 0042b0bd: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a15e0
//   XREF to: 005a15e0 (UNCONDITIONAL_CALL)
// 0042b0c2: ADD ESP,0x8
// 0042b0c5: PUSH 0x0
// 0042b0c7: MOV EBP,dword ptr [0x006703ec]
//   XREF to: 006703ec (READ)
// 0042b0cd: PUSH EBP
//   XREF to: 02c6d578 (DATA)
// 0042b0ce: CALL engine_drender.cpp_CDemonRenderer_setBlendMode_FUN_0048ca50
//   XREF to: 0048ca50 (UNCONDITIONAL_CALL)
// 0042b0d3: ADD ESP,0x8
// 0042b0d6: ADD ESP,0x1aa0
// 0042b0dc: POP EBP
// 0042b0dd: POP ESI
// 0042b0de: POP EBX
// 0042b0df: RET
