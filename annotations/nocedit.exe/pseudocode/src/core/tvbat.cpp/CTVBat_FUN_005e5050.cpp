// Name: core_tvbat.cpp_CTVBat_FUN_005e5050
// Address: 005e5050
// Address Range: [[005e5050, 005e50c5]]
// Convention: __cdecl
// Signature: int * core_tvbat.cpp_CTVBat_FUN_005e5050(CTVBat * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

int * __cdecl core_tvbat_cpp_CTVBat_FUN_005e5050(CTVBat *this_ptr)

{
  CKeyFramedModel *pCVar1;
  CVector3f *pCVar2;
  undefined4 in_EDX;
  double dVar3;
  int unaff_retaddr;
  float *in_stack_00000008;
  
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(in_EDX,this_ptr->field1_0xbeb4 + 0xc));
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
// 005e5050: PUSH EBX
//   Label: core_tvbat.cpp_CTVBat_FUN_005e5050
// 005e5051: SUB ESP,0x4
// 005e5054: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e5058: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 005e505c: FLD float ptr [EAX + 0xbebc]
// 005e5062: ADD EAX,0xbec0
// 005e5067: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005e506c: PUSH EAX
// 005e506d: FISTP dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x8] (WRITE)
// 005e5071: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005e5076: ADD ESP,0x4
// 005e5079: MOV ECX,dword ptr [ESP]
//   XREF to: Stack[-0x8] (DATA)
// 005e507c: MOV EDX,EAX
// 005e507e: LEA EAX,[ECX*0x4 + 0x0]
// 005e5085: SUB EAX,ECX
// 005e5087: MOV EDX,dword ptr [EDX + 0x5690]
// 005e508d: SHL EAX,0x3
// 005e5090: ADD EAX,EDX
// 005e5092: MOV EDX,dword ptr [EAX]
// 005e5094: LEA ECX,[EAX + 0x4]
// 005e5097: MOV dword ptr [EBX],EDX
// 005e5099: LEA EDX,[EBX + 0x4]
// 005e509c: MOV ECX,dword ptr [ECX]
// 005e509e: MOV dword ptr [EDX],ECX
// 005e50a0: LEA ECX,[EAX + 0x8]
// 005e50a3: MOV ECX,dword ptr [ECX]
// 005e50a5: MOV dword ptr [EDX + 0x4],ECX
// 005e50a8: MOV ECX,dword ptr [EAX + 0xc]
// 005e50ab: ADD EAX,0xc
// 005e50ae: MOV dword ptr [EDX + 0x8],ECX
// 005e50b1: LEA ECX,[EAX + 0x4]
// 005e50b4: MOV ECX,dword ptr [ECX]
// 005e50b6: MOV dword ptr [EDX + 0xc],ECX
// 005e50b9: MOV EAX,dword ptr [EAX + 0x8]
// 005e50bc: MOV dword ptr [EDX + 0x10],EAX
// 005e50bf: MOV EAX,EBX
// 005e50c1: ADD ESP,0x4
// 005e50c4: POP EBX
// 005e50c5: RET
