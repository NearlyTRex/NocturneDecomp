// Name: core_gasmask.cpp_CGasMask_FUN_004e5e60
// Address: 004e5e60
// Address Range: [[004e5e60, 004e5ead]]
// Convention: unknown
// Signature: undefined core_gasmask.cpp_CGasMask_FUN_004e5e60()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_gasmask.cpp_CGasMask_FUN_004e5e60(undefined4 param_1,
   undefined4 param_2) */

float * core_gasmask_cpp_CGasMask_FUN_004e5e60(void)

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
// 004e5e60: PUSH EBX
//   Label: core_gasmask.cpp_CGasMask_FUN_004e5e60
// 004e5e61: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004e5e65: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004e5e69: ADD EAX,0x158
// 004e5e6e: PUSH EAX
// 004e5e6f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004e5e74: MOV EAX,dword ptr [EAX + 0x5690]
// 004e5e7a: MOV EDX,dword ptr [EAX]
// 004e5e7c: LEA ECX,[EAX + 0x4]
// 004e5e7f: MOV dword ptr [EBX],EDX
// 004e5e81: LEA EDX,[EBX + 0x4]
// 004e5e84: MOV ECX,dword ptr [ECX]
// 004e5e86: MOV dword ptr [EDX],ECX
// 004e5e88: LEA ECX,[EAX + 0x8]
// 004e5e8b: MOV ECX,dword ptr [ECX]
// 004e5e8d: MOV dword ptr [EDX + 0x4],ECX
// 004e5e90: MOV ECX,dword ptr [EAX + 0xc]
// 004e5e93: ADD EAX,0xc
// 004e5e96: MOV dword ptr [EDX + 0x8],ECX
// 004e5e99: LEA ECX,[EAX + 0x4]
// 004e5e9c: MOV ECX,dword ptr [ECX]
// 004e5e9e: MOV dword ptr [EDX + 0xc],ECX
// 004e5ea1: MOV EAX,dword ptr [EAX + 0x8]
// 004e5ea4: ADD ESP,0x4
// 004e5ea7: MOV dword ptr [EDX + 0x10],EAX
// 004e5eaa: MOV EAX,EBX
// 004e5eac: POP EBX
// 004e5ead: RET
