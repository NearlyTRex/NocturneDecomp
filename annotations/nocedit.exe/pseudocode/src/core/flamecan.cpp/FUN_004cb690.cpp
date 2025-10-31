// Name: core_flamecan.cpp_FUN_004cb690
// Address: 004cb690
// Address Range: [[004cb690, 004cb6dd]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cb690()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_flame.cpp_FUN_004cb690(undefined4 param_1, undefined4 param_2)
    */

float * core_flamecan_cpp_FUN_004cb690(void)

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
// 004cb690: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cb690
// 004cb691: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004cb695: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004cb699: ADD EAX,0x158
// 004cb69e: PUSH EAX
// 004cb69f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004cb6a4: MOV EAX,dword ptr [EAX + 0x5690]
// 004cb6aa: MOV EDX,dword ptr [EAX]
// 004cb6ac: LEA ECX,[EAX + 0x4]
// 004cb6af: MOV dword ptr [EBX],EDX
// 004cb6b1: LEA EDX,[EBX + 0x4]
// 004cb6b4: MOV ECX,dword ptr [ECX]
// 004cb6b6: MOV dword ptr [EDX],ECX
// 004cb6b8: LEA ECX,[EAX + 0x8]
// 004cb6bb: MOV ECX,dword ptr [ECX]
// 004cb6bd: MOV dword ptr [EDX + 0x4],ECX
// 004cb6c0: MOV ECX,dword ptr [EAX + 0xc]
// 004cb6c3: ADD EAX,0xc
// 004cb6c6: MOV dword ptr [EDX + 0x8],ECX
// 004cb6c9: LEA ECX,[EAX + 0x4]
// 004cb6cc: MOV ECX,dword ptr [ECX]
// 004cb6ce: MOV dword ptr [EDX + 0xc],ECX
// 004cb6d1: MOV EAX,dword ptr [EAX + 0x8]
// 004cb6d4: ADD ESP,0x4
// 004cb6d7: MOV dword ptr [EDX + 0x10],EAX
// 004cb6da: MOV EAX,EBX
// 004cb6dc: POP EBX
// 004cb6dd: RET
