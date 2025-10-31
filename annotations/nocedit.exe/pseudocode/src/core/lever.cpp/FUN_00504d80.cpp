// Name: core_lever.cpp_FUN_00504d80
// Address: 00504d80
// Address Range: [[00504d80, 00504dcd]]
// Convention: unknown
// Signature: undefined core_lever.cpp_FUN_00504d80()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_lever.cpp_FUN_00504d80(undefined4 param_1, undefined4 param_2)
    */

float * core_lever_cpp_FUN_00504d80(void)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return in_stack_00000008;
}


// Assembly code:
// 00504d80: PUSH EBX
//   Label: core_lever.cpp_FUN_00504d80
// 00504d81: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00504d85: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00504d89: ADD EAX,0x158
// 00504d8e: PUSH EAX
// 00504d8f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00504d94: MOV EAX,dword ptr [EAX + 0x5690]
// 00504d9a: MOV EDX,dword ptr [EAX]
// 00504d9c: LEA ECX,[EAX + 0x4]
// 00504d9f: MOV dword ptr [EBX],EDX
// 00504da1: LEA EDX,[EBX + 0x4]
// 00504da4: MOV ECX,dword ptr [ECX]
// 00504da6: MOV dword ptr [EDX],ECX
// 00504da8: LEA ECX,[EAX + 0x8]
// 00504dab: MOV ECX,dword ptr [ECX]
// 00504dad: MOV dword ptr [EDX + 0x4],ECX
// 00504db0: MOV ECX,dword ptr [EAX + 0xc]
// 00504db3: ADD EAX,0xc
// 00504db6: MOV dword ptr [EDX + 0x8],ECX
// 00504db9: LEA ECX,[EAX + 0x4]
// 00504dbc: MOV ECX,dword ptr [ECX]
// 00504dbe: MOV dword ptr [EDX + 0xc],ECX
// 00504dc1: MOV EAX,dword ptr [EAX + 0x8]
// 00504dc4: ADD ESP,0x4
// 00504dc7: MOV dword ptr [EDX + 0x10],EAX
// 00504dca: MOV EAX,EBX
// 00504dcc: POP EBX
// 00504dcd: RET
