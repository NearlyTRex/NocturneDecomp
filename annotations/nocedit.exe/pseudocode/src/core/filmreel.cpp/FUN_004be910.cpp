// Name: core_filmreel.cpp_FUN_004be910
// Address: 004be910
// Address Range: [[004be910, 004be95d]]
// Convention: unknown
// Signature: undefined core_filmreel.cpp_FUN_004be910()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_filmreel.cpp_FUN_004be910(undefined4 param_1, undefined4
   param_2) */

float * core_filmreel_cpp_FUN_004be910(void)

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
// 004be910: PUSH EBX
//   Label: core_filmreel.cpp_FUN_004be910
// 004be911: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 004be915: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004be919: ADD EAX,0x158
// 004be91e: PUSH EAX
// 004be91f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 004be924: MOV EAX,dword ptr [EAX + 0x5690]
// 004be92a: MOV EDX,dword ptr [EAX]
// 004be92c: LEA ECX,[EAX + 0x4]
// 004be92f: MOV dword ptr [EBX],EDX
// 004be931: LEA EDX,[EBX + 0x4]
// 004be934: MOV ECX,dword ptr [ECX]
// 004be936: MOV dword ptr [EDX],ECX
// 004be938: LEA ECX,[EAX + 0x8]
// 004be93b: MOV ECX,dword ptr [ECX]
// 004be93d: MOV dword ptr [EDX + 0x4],ECX
// 004be940: MOV ECX,dword ptr [EAX + 0xc]
// 004be943: ADD EAX,0xc
// 004be946: MOV dword ptr [EDX + 0x8],ECX
// 004be949: LEA ECX,[EAX + 0x4]
// 004be94c: MOV ECX,dword ptr [ECX]
// 004be94e: MOV dword ptr [EDX + 0xc],ECX
// 004be951: MOV EAX,dword ptr [EAX + 0x8]
// 004be954: ADD ESP,0x4
// 004be957: MOV dword ptr [EDX + 0x10],EAX
// 004be95a: MOV EAX,EBX
// 004be95c: POP EBX
// 004be95d: RET
