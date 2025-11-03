// Name: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// Address: 005f75e0
// Address Range: [[005f75e0, 005f7614]]
// Convention: __cdecl
// Signature: void core_xform.cpp_negateFirstComponent_FUN_005f75e0(CQuaternion4f * output_vector, CQuaternion4f * input_vector)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059e0a0 (0059e0a0) at 0059ea44 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059eb50 (0059eb50) at 0059f175 [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059f260 (0059f260) at 0059f65b [UNCONDITIONAL_CALL]

#include "nocturne.h"

void __cdecl
core_xform_cpp_negateFirstComponent_FUN_005f75e0
          (CQuaternion4f *output_vector,CQuaternion4f *input_vector)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  
  fVar1 = output_vector->x;
  fVar2 = output_vector->y;
  fVar3 = output_vector->z;
  *unaff_ESI = -output_vector->w;
  unaff_ESI[1] = fVar1;
  unaff_ESI[2] = fVar2;
  unaff_ESI[3] = fVar3;
  return;
}


// Assembly code:
// 005f75e0: PUSH EDI
//   Label: core_xform.cpp_negateFirstComponent_FUN_005f75e0
// 005f75e1: SUB ESP,0x10
// 005f75e4: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 005f75e8: MOV EDX,ESI
// 005f75ea: FLD float ptr [ECX]
// 005f75ec: MOV EAX,dword ptr [ECX + 0x4]
// 005f75ef: MOV EDI,ESI
// 005f75f1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005f75f5: MOV EAX,dword ptr [ECX + 0x8]
// 005f75f8: FCHS
// 005f75fa: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005f75fe: MOV EAX,dword ptr [ECX + 0xc]
// 005f7601: MOV ESI,ESP
// 005f7603: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005f7607: FSTP float ptr [ESP]
//   XREF to: Stack[-0x14] (DATA)
// 005f760a: MOVSD ES:EDI,ESI
// 005f760b: MOVSD ES:EDI,ESI
// 005f760c: MOVSD ES:EDI,ESI
// 005f760d: MOVSD ES:EDI,ESI
// 005f760e: MOV EAX,EDX
// 005f7610: ADD ESP,0x10
// 005f7613: POP EDI
// 005f7614: RET
