// Name: core_xform.cpp_getTranslation_FUN_005f6110
// Address: 005f6110
// Address Range: [[005f6110, 005f613d]]
// Convention: __cdecl
// Signature: void core_xform.cpp_getTranslation_FUN_005f6110(CVector3f * output_vector, CMatrix3x4f * input_matrix)
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042d090 (0042d090) at 0042d1c4 [UNCONDITIONAL_CALL]
//   core_fire.cpp_FUN_004bf7f0 (004bf7f0) at 004bf96f [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d5550 (004d5550) at 004d56e4 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_FUN_005205f0 (005205f0) at 005207af [UNCONDITIONAL_CALL]
//   core_platfrm.cpp_FUN_0054e320 (0054e320) at 0054e3d1 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00558fd0 (00558fd0) at 005590da [UNCONDITIONAL_CALL]
//   core_skeledit.cpp_DefinitelyRelatedToEditorMode_FUN_005968b0 (005968b0) at 005978ca [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b640 (0059b640) at 0059b688 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModel_FUN_0059b800 (0059b800) at 0059b83c [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c06b0 (005c06b0) at 005c0792 [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c34bc [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db227 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dbad4 [UNCONDITIONAL_CALL]
//   core_werewolf.cpp_CWerewolf_FUN_005f1820 (005f1820) at 005f18c3 [UNCONDITIONAL_CALL]
//   core_xform.cpp_invertAndGetTranslation_FUN_005f6140 (005f6140) at 005f6170 [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_getTranslation_FUN_005f6110(CVector3f *output_vector,CMatrix3x4f *input_matrix)

{
  float fVar1;
  float fVar2;
  
  fVar1 = output_vector[1].x;
  fVar2 = output_vector[3].z;
  input_matrix->m[0].x = output_vector[2].y;
  input_matrix->m[0].w = fVar1;
  input_matrix->m[0].y = fVar2;
  return;
}


// Assembly code:
// 005f6110: SUB ESP,0x8
//   Label: core_xform.cpp_getTranslation_FUN_005f6110
// 005f6113: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005f6117: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005f611b: MOV ECX,dword ptr [EDX + 0xc]
// 005f611e: MOV dword ptr [ESP],ECX
//   XREF to: Stack[-0x8] (DATA)
// 005f6121: MOV ECX,dword ptr [EDX + 0x1c]
// 005f6124: MOV EDX,dword ptr [EDX + 0x2c]
// 005f6127: MOV dword ptr [ESP + 0x4],EDX
//   XREF to: Stack[-0x4] (WRITE)
// 005f612b: MOV dword ptr [EAX + 0x4],ECX
// 005f612e: MOV EDX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005f6131: MOV dword ptr [EAX],EDX
// 005f6133: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x4] (READ)
// 005f6137: MOV dword ptr [EAX + 0x8],EDX
// 005f613a: ADD ESP,0x8
// 005f613d: RET
