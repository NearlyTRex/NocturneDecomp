// Name: core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780
// Address: 0059a780
// Address Range: [[0059a780, 0059a803]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780()
// Cross-references:
//   core_skeleton.cpp_CDeformableModel_computePartDominantBones_FUN_0059d460 (0059d460) at 0059d4ac [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_LoadSkeletonDeformable_FUN_005a1cf0 (005a1cf0) at 005a1da6 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CDemonRenderer g_CDemonRendererInstance
// Function calls:
//   core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0
//   core_skeleton.cpp_LoadSkeleton_FUN_005a1df0
//   engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80

#include "nocturne.h"

/* Signature: undefined1
   core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture(CDeformableModel* param_1) */

void core_skeleton_cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780(void)

{
  int iVar1;
  int iVar2;
  SMRGLTextureBasic *texture;
  int in_stack_00000004;
  SMRGLTextureBasic *pSVar3;
  
  core_skeleton_cpp_LoadSkeleton_FUN_005a1df0();
  iVar2 = 0;
  core_skeleton_cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0();
  if (0 < *(int *)(in_stack_00000004 + 0xb8)) {
    pSVar3 = (SMRGLTextureBasic *)(in_stack_00000004 + 0xc0);
    do {
      iVar1 = 0;
      texture = pSVar3;
      if (0 < *(int *)(in_stack_00000004 + 0xbc)) {
        do {
          iVar1 = iVar1 + 1;
          engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,texture)
          ;
          texture = texture + 3;
        } while (iVar1 < *(int *)(in_stack_00000004 + 0xbc));
      }
      iVar2 = iVar2 + 1;
      pSVar3 = pSVar3 + 0xf0;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0xb8));
  }
  return;
}


// Assembly code:
// 0059a780: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_LoadSkeletonAndRenderTexture_FUN_0059a780
// 0059a781: PUSH ESI
// 0059a782: PUSH EDI
// 0059a783: PUSH EBP
// 0059a784: SUB ESP,0x4
// 0059a787: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 0059a78b: LEA EAX,[EDI + 0x8f5c]
// 0059a791: PUSH EAX
// 0059a792: CALL core_skeleton.cpp_LoadSkeleton_FUN_005a1df0
//   XREF to: 005a1df0 (UNCONDITIONAL_CALL)
// 0059a797: ADD ESP,0x4
// 0059a79a: PUSH EAX
// 0059a79b: PUSH EDI
// 0059a79c: XOR EBP,EBP
// 0059a79e: CALL core_skeleton.cpp_CDeformableModel_CallToUnknownSomething4_FUN_0059c1f0
//   XREF to: 0059c1f0 (UNCONDITIONAL_CALL)
// 0059a7a3: MOV EDX,dword ptr [EDI + 0xb8]
// 0059a7a9: ADD ESP,0x8
// 0059a7ac: TEST EDX,EDX
// 0059a7ae: JLE 0x0059a7fc
//   XREF to: 0059a7fc (CONDITIONAL_JUMP)
// 0059a7b0: LEA EAX,[EDI + 0xc0]
// 0059a7b6: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 0059a7b9: MOV ESI,dword ptr [EDI + 0xbc]
//   Label: LAB_0059a7b9
// 0059a7bf: XOR EBX,EBX
// 0059a7c1: TEST ESI,ESI
// 0059a7c3: JLE 0x0059a7e5
//   XREF to: 0059a7e5 (CONDITIONAL_JUMP)
// 0059a7c5: MOV ESI,dword ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 0059a7c8: PUSH ESI
//   Label: LAB_0059a7c8
// 0059a7c9: MOV EAX,[0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 0059a7ce: PUSH EAX
//   XREF to: 02c6d578 (DATA)
// 0059a7cf: INC EBX
// 0059a7d0: CALL engine_drender.cpp_CDemonRenderer_captureTexture_FUN_0048db80
//   XREF to: 0048db80 (UNCONDITIONAL_CALL)
// 0059a7d5: ADD ESI,0x48
// 0059a7d8: MOV EDX,dword ptr [EDI + 0xbc]
// 0059a7de: ADD ESP,0x8
// 0059a7e1: CMP EBX,EDX
// 0059a7e3: JL 0x0059a7c8
//   XREF to: 0059a7c8 (CONDITIONAL_JUMP)
// 0059a7e5: MOV ECX,dword ptr [ESP]
//   Label: LAB_0059a7e5
//   XREF to: Stack[-0x14] (DATA)
// 0059a7e8: INC EBP
// 0059a7e9: ADD ECX,0x1680
// 0059a7ef: MOV EBX,dword ptr [EDI + 0xb8]
// 0059a7f5: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x14] (DATA)
// 0059a7f8: CMP EBP,EBX
// 0059a7fa: JL 0x0059a7b9
//   XREF to: 0059a7b9 (CONDITIONAL_JUMP)
// 0059a7fc: ADD ESP,0x4
//   Label: LAB_0059a7fc
// 0059a7ff: POP EBP
// 0059a800: POP EDI
// 0059a801: POP ESI
// 0059a802: POP EBX
// 0059a803: RET
