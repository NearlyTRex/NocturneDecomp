// Name: core_spike.cpp_FUN_005b87a0
// Address: 005b87a0
// Address Range: [[005b87a0, 005b87ed]]
// Convention: unknown
// Signature: undefined core_spike.cpp_FUN_005b87a0()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_spike.cpp_FUN_005b87a0(undefined4 param_1, undefined4 param_2)
    */

float * core_spike_cpp_FUN_005b87a0(void)

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
// 005b87a0: PUSH EBX
//   Label: core_spike.cpp_FUN_005b87a0
// 005b87a1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005b87a5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005b87a9: ADD EAX,0x158
// 005b87ae: PUSH EAX
// 005b87af: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005b87b4: MOV EAX,dword ptr [EAX + 0x5690]
// 005b87ba: MOV EDX,dword ptr [EAX]
// 005b87bc: LEA ECX,[EAX + 0x4]
// 005b87bf: MOV dword ptr [EBX],EDX
// 005b87c1: LEA EDX,[EBX + 0x4]
// 005b87c4: MOV ECX,dword ptr [ECX]
// 005b87c6: MOV dword ptr [EDX],ECX
// 005b87c8: LEA ECX,[EAX + 0x8]
// 005b87cb: MOV ECX,dword ptr [ECX]
// 005b87cd: MOV dword ptr [EDX + 0x4],ECX
// 005b87d0: MOV ECX,dword ptr [EAX + 0xc]
// 005b87d3: ADD EAX,0xc
// 005b87d6: MOV dword ptr [EDX + 0x8],ECX
// 005b87d9: LEA ECX,[EAX + 0x4]
// 005b87dc: MOV ECX,dword ptr [ECX]
// 005b87de: MOV dword ptr [EDX + 0xc],ECX
// 005b87e1: MOV EAX,dword ptr [EAX + 0x8]
// 005b87e4: ADD ESP,0x4
// 005b87e7: MOV dword ptr [EDX + 0x10],EAX
// 005b87ea: MOV EAX,EBX
// 005b87ec: POP EBX
// 005b87ed: RET
