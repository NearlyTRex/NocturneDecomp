// Name: core_platfrm.cpp_FUN_0054db70
// Address: 0054db70
// Address Range: [[0054db70, 0054dbbd]]
// Convention: unknown
// Signature: undefined core_platfrm.cpp_FUN_0054db70()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_platform.cpp_FUN_0054db70(undefined4 param_1, undefined4
   param_2) */

float * core_platfrm_cpp_FUN_0054db70(void)

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
// 0054db70: PUSH EBX
//   Label: core_platfrm.cpp_FUN_0054db70
// 0054db71: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0054db75: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0054db79: ADD EAX,0x158
// 0054db7e: PUSH EAX
// 0054db7f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0054db84: MOV EAX,dword ptr [EAX + 0x5690]
// 0054db8a: MOV EDX,dword ptr [EAX]
// 0054db8c: LEA ECX,[EAX + 0x4]
// 0054db8f: MOV dword ptr [EBX],EDX
// 0054db91: LEA EDX,[EBX + 0x4]
// 0054db94: MOV ECX,dword ptr [ECX]
// 0054db96: MOV dword ptr [EDX],ECX
// 0054db98: LEA ECX,[EAX + 0x8]
// 0054db9b: MOV ECX,dword ptr [ECX]
// 0054db9d: MOV dword ptr [EDX + 0x4],ECX
// 0054dba0: MOV ECX,dword ptr [EAX + 0xc]
// 0054dba3: ADD EAX,0xc
// 0054dba6: MOV dword ptr [EDX + 0x8],ECX
// 0054dba9: LEA ECX,[EAX + 0x4]
// 0054dbac: MOV ECX,dword ptr [ECX]
// 0054dbae: MOV dword ptr [EDX + 0xc],ECX
// 0054dbb1: MOV EAX,dword ptr [EAX + 0x8]
// 0054dbb4: ADD ESP,0x4
// 0054dbb7: MOV dword ptr [EDX + 0x10],EAX
// 0054dbba: MOV EAX,EBX
// 0054dbbc: POP EBX
// 0054dbbd: RET
