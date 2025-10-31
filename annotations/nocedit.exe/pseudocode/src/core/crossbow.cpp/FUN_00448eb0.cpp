// Name: core_crossbow.cpp_FUN_00448eb0
// Address: 00448eb0
// Address Range: [[00448eb0, 00448f1d]]
// Convention: unknown
// Signature: undefined core_crossbow.cpp_FUN_00448eb0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_crossbow.cpp_FUN_00448eb0(undefined4 param_1, undefined4
   param_2) */

undefined4 * core_crossbow_cpp_FUN_00448eb0(void)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  fVar1 = (pCVar3->bounds_max).y;
  fVar2 = (pCVar3->bounds_max).z;
  *in_stack_00000008 = 0;
  in_stack_00000008[1] = fVar1;
  in_stack_00000008[2] = fVar2;
  return in_stack_00000008;
}


// Assembly code:
// 00448eb0: PUSH EBX
//   Label: core_crossbow.cpp_FUN_00448eb0
// 00448eb1: SUB ESP,0x18
// 00448eb4: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 00448eb8: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00448ebc: ADD EAX,0x158
// 00448ec1: PUSH EAX
// 00448ec2: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00448ec7: LEA EDX,[EAX + 0x5678]
// 00448ecd: ADD ESP,0x4
// 00448ed0: MOV EAX,dword ptr [EDX]
// 00448ed2: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 00448ed5: LEA EAX,[EDX + 0x4]
// 00448ed8: MOV EAX,dword ptr [EAX]
// 00448eda: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00448ede: LEA EAX,[EDX + 0x8]
// 00448ee1: MOV EAX,dword ptr [EAX]
// 00448ee3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00448ee7: MOV EAX,dword ptr [EDX + 0xc]
// 00448eea: ADD EDX,0xc
// 00448eed: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00448ef1: LEA EAX,[EDX + 0x4]
// 00448ef4: MOV EAX,dword ptr [EAX]
// 00448ef6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 00448efa: LEA EAX,[EDX + 0x8]
// 00448efd: MOV EAX,dword ptr [EAX]
// 00448eff: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 00448f03: MOV dword ptr [EBX],0x0
// 00448f09: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 00448f0d: MOV dword ptr [EBX + 0x4],EAX
// 00448f10: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 00448f14: MOV dword ptr [EBX + 0x8],EAX
// 00448f17: MOV EAX,EBX
// 00448f19: ADD ESP,0x18
// 00448f1c: POP EBX
// 00448f1d: RET
