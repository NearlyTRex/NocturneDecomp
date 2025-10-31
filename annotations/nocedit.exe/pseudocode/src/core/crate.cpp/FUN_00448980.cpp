// Name: core_crate.cpp_FUN_00448980
// Address: 00448980
// Address Range: [[00448980, 004489cd]]
// Convention: unknown
// Signature: undefined core_crate.cpp_FUN_00448980()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_crate.cpp_FUN_00448980(undefined4 param_1, undefined4 param_2)
    */

float * core_crate_cpp_FUN_00448980(void)

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
// 00448980: PUSH EBX
//   Label: core_crate.cpp_FUN_00448980
// 00448981: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00448985: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00448989: ADD EAX,0x158
// 0044898e: PUSH EAX
// 0044898f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00448994: MOV EAX,dword ptr [EAX + 0x5690]
// 0044899a: MOV EDX,dword ptr [EAX]
// 0044899c: LEA ECX,[EAX + 0x4]
// 0044899f: MOV dword ptr [EBX],EDX
// 004489a1: LEA EDX,[EBX + 0x4]
// 004489a4: MOV ECX,dword ptr [ECX]
// 004489a6: MOV dword ptr [EDX],ECX
// 004489a8: LEA ECX,[EAX + 0x8]
// 004489ab: MOV ECX,dword ptr [ECX]
// 004489ad: MOV dword ptr [EDX + 0x4],ECX
// 004489b0: MOV ECX,dword ptr [EAX + 0xc]
// 004489b3: ADD EAX,0xc
// 004489b6: MOV dword ptr [EDX + 0x8],ECX
// 004489b9: LEA ECX,[EAX + 0x4]
// 004489bc: MOV ECX,dword ptr [ECX]
// 004489be: MOV dword ptr [EDX + 0xc],ECX
// 004489c1: MOV EAX,dword ptr [EAX + 0x8]
// 004489c4: ADD ESP,0x4
// 004489c7: MOV dword ptr [EDX + 0x10],EAX
// 004489ca: MOV EAX,EBX
// 004489cc: POP EBX
// 004489cd: RET
