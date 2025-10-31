// Name: core_keyactor.cpp_FUN_00501830
// Address: 00501830
// Address Range: [[00501830, 0050187d]]
// Convention: unknown
// Signature: undefined core_keyactor.cpp_FUN_00501830()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_keyactor.cpp_FUN_00501830(undefined4 param_1, undefined4
   param_2) */

float * core_keyactor_cpp_FUN_00501830(void)

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
// 00501830: PUSH EBX
//   Label: core_keyactor.cpp_FUN_00501830
// 00501831: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00501835: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00501839: ADD EAX,0x158
// 0050183e: PUSH EAX
// 0050183f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00501844: MOV EAX,dword ptr [EAX + 0x5690]
// 0050184a: MOV EDX,dword ptr [EAX]
// 0050184c: LEA ECX,[EAX + 0x4]
// 0050184f: MOV dword ptr [EBX],EDX
// 00501851: LEA EDX,[EBX + 0x4]
// 00501854: MOV ECX,dword ptr [ECX]
// 00501856: MOV dword ptr [EDX],ECX
// 00501858: LEA ECX,[EAX + 0x8]
// 0050185b: MOV ECX,dword ptr [ECX]
// 0050185d: MOV dword ptr [EDX + 0x4],ECX
// 00501860: MOV ECX,dword ptr [EAX + 0xc]
// 00501863: ADD EAX,0xc
// 00501866: MOV dword ptr [EDX + 0x8],ECX
// 00501869: LEA ECX,[EAX + 0x4]
// 0050186c: MOV ECX,dword ptr [ECX]
// 0050186e: MOV dword ptr [EDX + 0xc],ECX
// 00501871: MOV EAX,dword ptr [EAX + 0x8]
// 00501874: ADD ESP,0x4
// 00501877: MOV dword ptr [EDX + 0x10],EAX
// 0050187a: MOV EAX,EBX
// 0050187c: POP EBX
// 0050187d: RET
