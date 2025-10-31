// Name: core_bat.cpp_CBat_FUN_00414c60
// Address: 00414c60
// Address Range: [[00414c60, 00414cd5]]
// Convention: __cdecl
// Signature: int * core_bat.cpp_CBat_FUN_00414c60(CBat * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int * __cdecl core_bat_cpp_CBat_FUN_00414c60(CBat *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  undefined4 in_EDX;
  double dVar3;
  int unaff_retaddr;
  float *in_stack_00000008;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,this_ptr->model_name));
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(SUB84(dVar3,0));
  pCVar2 = pCVar1->frame_bounds + unaff_retaddr * 2;
  *in_stack_00000008 = pCVar2->x;
  in_stack_00000008[1] = pCVar2->y;
  in_stack_00000008[2] = pCVar2->z;
  in_stack_00000008[3] = pCVar2[1].x;
  in_stack_00000008[4] = pCVar2[1].y;
  in_stack_00000008[5] = pCVar2[1].z;
  return (int *)in_stack_00000008;
}


// Assembly code:
// 00414c60: PUSH EBX
//   Label: core_bat.cpp_CBat_FUN_00414c60
// 00414c61: SUB ESP,0x4
// 00414c64: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 00414c68: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 00414c6c: FLD float ptr [EAX + 0x184]
// 00414c72: ADD EAX,0x188
// 00414c77: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00414c7c: PUSH EAX
// 00414c7d: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 00414c81: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00414c86: ADD ESP,0x4
// 00414c89: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 00414c8c: MOV EDX,EAX
// 00414c8e: LEA EAX,[ECX*0x4 + 0x0]
// 00414c95: SUB EAX,ECX
// 00414c97: MOV EDX,dword ptr [EDX + 0x5690]
// 00414c9d: SHL EAX,0x3
// 00414ca0: ADD EAX,EDX
// 00414ca2: MOV EDX,dword ptr [EAX]
// 00414ca4: LEA ECX,[EAX + 0x4]
// 00414ca7: MOV dword ptr [EBX],EDX
// 00414ca9: LEA EDX,[EBX + 0x4]
// 00414cac: MOV ECX,dword ptr [ECX]
// 00414cae: MOV dword ptr [EDX],ECX
// 00414cb0: LEA ECX,[EAX + 0x8]
// 00414cb3: MOV ECX,dword ptr [ECX]
// 00414cb5: MOV dword ptr [EDX + 0x4],ECX
// 00414cb8: MOV ECX,dword ptr [EAX + 0xc]
// 00414cbb: ADD EAX,0xc
// 00414cbe: MOV dword ptr [EDX + 0x8],ECX
// 00414cc1: LEA ECX,[EAX + 0x4]
// 00414cc4: MOV ECX,dword ptr [ECX]
// 00414cc6: MOV dword ptr [EDX + 0xc],ECX
// 00414cc9: MOV EAX,dword ptr [EAX + 0x8]
// 00414ccc: MOV dword ptr [EDX + 0x10],EAX
// 00414ccf: MOV EAX,EBX
// 00414cd1: ADD ESP,0x4
// 00414cd4: POP EBX
// 00414cd5: RET
