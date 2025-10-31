// Name: core_anvil.cpp_CAnvil_FUN_00411fe0
// Address: 00411fe0
// Address Range: [[00411fe0, 0041202d]]
// Convention: __cdecl
// Signature: int * core_anvil.cpp_CAnvil_FUN_00411fe0(CAnvil * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_anvil_cpp_CAnvil_FUN_00411fe0(CAnvil *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)this_ptr->model_name);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return (int *)in_stack_00000008;
}


// Assembly code:
// 00411fe0: PUSH EBX
//   Label: core_anvil.cpp_CAnvil_FUN_00411fe0
// 00411fe1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00411fe5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00411fe9: ADD EAX,0x158
// 00411fee: PUSH EAX
// 00411fef: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00411ff4: MOV EAX,dword ptr [EAX + 0x5690]
// 00411ffa: MOV EDX,dword ptr [EAX]
// 00411ffc: LEA ECX,[EAX + 0x4]
// 00411fff: MOV dword ptr [EBX],EDX
// 00412001: LEA EDX,[EBX + 0x4]
// 00412004: MOV ECX,dword ptr [ECX]
// 00412006: MOV dword ptr [EDX],ECX
// 00412008: LEA ECX,[EAX + 0x8]
// 0041200b: MOV ECX,dword ptr [ECX]
// 0041200d: MOV dword ptr [EDX + 0x4],ECX
// 00412010: MOV ECX,dword ptr [EAX + 0xc]
// 00412013: ADD EAX,0xc
// 00412016: MOV dword ptr [EDX + 0x8],ECX
// 00412019: LEA ECX,[EAX + 0x4]
// 0041201c: MOV ECX,dword ptr [ECX]
// 0041201e: MOV dword ptr [EDX + 0xc],ECX
// 00412021: MOV EAX,dword ptr [EAX + 0x8]
// 00412024: ADD ESP,0x4
// 00412027: MOV dword ptr [EDX + 0x10],EAX
// 0041202a: MOV EAX,EBX
// 0041202c: POP EBX
// 0041202d: RET
