// Name: core_health.cpp_FUN_004f1ed0
// Address: 004f1ed0
// Address Range: [[004f1ed0, 004f1f1d]]
// Convention: unknown
// Signature: undefined core_health.cpp_FUN_004f1ed0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_health.cpp_FUN_004f1ed0(undefined4 param_1, undefined4
   param_2) */

float * core_health_cpp_FUN_004f1ed0(void)

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
// 004f1ed0: PUSH EBX
//   Label: core_health.cpp_FUN_004f1ed0
// 004f1ed1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004f1ed5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004f1ed9: ADD EAX,0x158
// 004f1ede: PUSH EAX
// 004f1edf: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004f1ee4: MOV EAX,dword ptr [EAX + 0x5690]
// 004f1eea: MOV EDX,dword ptr [EAX]
// 004f1eec: LEA ECX,[EAX + 0x4]
// 004f1eef: MOV dword ptr [EBX],EDX
// 004f1ef1: LEA EDX,[EBX + 0x4]
// 004f1ef4: MOV ECX,dword ptr [ECX]
// 004f1ef6: MOV dword ptr [EDX],ECX
// 004f1ef8: LEA ECX,[EAX + 0x8]
// 004f1efb: MOV ECX,dword ptr [ECX]
// 004f1efd: MOV dword ptr [EDX + 0x4],ECX
// 004f1f00: MOV ECX,dword ptr [EAX + 0xc]
// 004f1f03: ADD EAX,0xc
// 004f1f06: MOV dword ptr [EDX + 0x8],ECX
// 004f1f09: LEA ECX,[EAX + 0x4]
// 004f1f0c: MOV ECX,dword ptr [ECX]
// 004f1f0e: MOV dword ptr [EDX + 0xc],ECX
// 004f1f11: MOV EAX,dword ptr [EAX + 0x8]
// 004f1f14: ADD ESP,0x4
// 004f1f17: MOV dword ptr [EDX + 0x10],EAX
// 004f1f1a: MOV EAX,EBX
// 004f1f1c: POP EBX
// 004f1f1d: RET
