// Name: core_pendulum.cpp_FUN_0054a360
// Address: 0054a360
// Address Range: [[0054a360, 0054a3ad]]
// Convention: unknown
// Signature: undefined core_pendulum.cpp_FUN_0054a360()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_pendulum.cpp_FUN_0054a360(undefined4 param_1, undefined4
   param_2) */

float * core_pendulum_cpp_FUN_0054a360(void)

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
// 0054a360: PUSH EBX
//   Label: core_pendulum.cpp_FUN_0054a360
// 0054a361: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054a365: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054a369: ADD EAX,0x158
// 0054a36e: PUSH EAX
// 0054a36f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054a374: MOV EAX,dword ptr [EAX + 0x5690]
// 0054a37a: MOV EDX,dword ptr [EAX]
// 0054a37c: LEA ECX,[EAX + 0x4]
// 0054a37f: MOV dword ptr [EBX],EDX
// 0054a381: LEA EDX,[EBX + 0x4]
// 0054a384: MOV ECX,dword ptr [ECX]
// 0054a386: MOV dword ptr [EDX],ECX
// 0054a388: LEA ECX,[EAX + 0x8]
// 0054a38b: MOV ECX,dword ptr [ECX]
// 0054a38d: MOV dword ptr [EDX + 0x4],ECX
// 0054a390: MOV ECX,dword ptr [EAX + 0xc]
// 0054a393: ADD EAX,0xc
// 0054a396: MOV dword ptr [EDX + 0x8],ECX
// 0054a399: LEA ECX,[EAX + 0x4]
// 0054a39c: MOV ECX,dword ptr [ECX]
// 0054a39e: MOV dword ptr [EDX + 0xc],ECX
// 0054a3a1: MOV EAX,dword ptr [EAX + 0x8]
// 0054a3a4: ADD ESP,0x4
// 0054a3a7: MOV dword ptr [EDX + 0x10],EAX
// 0054a3aa: MOV EAX,EBX
// 0054a3ac: POP EBX
// 0054a3ad: RET
