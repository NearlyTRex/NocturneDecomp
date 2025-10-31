// Name: core_manpuz.cpp_FUN_0050b260
// Address: 0050b260
// Address Range: [[0050b260, 0050b2ac]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050b260()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050b260(undefined4 param_1, undefined4
   param_2) */

float * core_manpuz_cpp_FUN_0050b260(void)

{
  CKeyFramedModel *pCVar1;
  int in_stack_00000004;
  float *in_stack_00000008;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  *in_stack_00000008 = (pCVar1->bounds_min).x;
  in_stack_00000008[1] = (pCVar1->bounds_min).y;
  in_stack_00000008[2] = (pCVar1->bounds_min).z;
  in_stack_00000008[3] = (pCVar1->bounds_max).x;
  in_stack_00000008[4] = (pCVar1->bounds_max).y;
  in_stack_00000008[5] = (pCVar1->bounds_max).z;
  return in_stack_00000008;
}


// Assembly code:
// 0050b260: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050b260
// 0050b261: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0050b265: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0050b269: ADD EAX,0x158
// 0050b26e: PUSH EAX
// 0050b26f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 0050b274: ADD EAX,0x5678
// 0050b279: MOV EDX,dword ptr [EAX]
// 0050b27b: LEA ECX,[EAX + 0x4]
// 0050b27e: MOV dword ptr [EBX],EDX
// 0050b280: LEA EDX,[EBX + 0x4]
// 0050b283: MOV ECX,dword ptr [ECX]
// 0050b285: MOV dword ptr [EDX],ECX
// 0050b287: LEA ECX,[EAX + 0x8]
// 0050b28a: MOV ECX,dword ptr [ECX]
// 0050b28c: MOV dword ptr [EDX + 0x4],ECX
// 0050b28f: MOV ECX,dword ptr [EAX + 0xc]
// 0050b292: ADD EAX,0xc
// 0050b295: MOV dword ptr [EDX + 0x8],ECX
// 0050b298: LEA ECX,[EAX + 0x4]
// 0050b29b: MOV ECX,dword ptr [ECX]
// 0050b29d: MOV dword ptr [EDX + 0xc],ECX
// 0050b2a0: MOV EAX,dword ptr [EAX + 0x8]
// 0050b2a3: ADD ESP,0x4
// 0050b2a6: MOV dword ptr [EDX + 0x10],EAX
// 0050b2a9: MOV EAX,EBX
// 0050b2ab: POP EBX
// 0050b2ac: RET
