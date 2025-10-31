// Name: core_battery.cpp_FUN_00418060
// Address: 00418060
// Address Range: [[00418060, 004180ad]]
// Convention: unknown
// Signature: undefined core_battery.cpp_FUN_00418060()
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

/* Signature: undefined1 actors_other_battery.cpp_FUN_00418060(undefined4 param_1, undefined4
   param_2) */

float * core_battery_cpp_FUN_00418060(void)

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
// 00418060: PUSH EBX
//   Label: core_battery.cpp_FUN_00418060
// 00418061: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 00418065: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00418069: ADD EAX,0x158
// 0041806e: PUSH EAX
// 0041806f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 00418074: MOV EAX,dword ptr [EAX + 0x5690]
// 0041807a: MOV EDX,dword ptr [EAX]
// 0041807c: LEA ECX,[EAX + 0x4]
// 0041807f: MOV dword ptr [EBX],EDX
// 00418081: LEA EDX,[EBX + 0x4]
// 00418084: MOV ECX,dword ptr [ECX]
// 00418086: MOV dword ptr [EDX],ECX
// 00418088: LEA ECX,[EAX + 0x8]
// 0041808b: MOV ECX,dword ptr [ECX]
// 0041808d: MOV dword ptr [EDX + 0x4],ECX
// 00418090: MOV ECX,dword ptr [EAX + 0xc]
// 00418093: ADD EAX,0xc
// 00418096: MOV dword ptr [EDX + 0x8],ECX
// 00418099: LEA ECX,[EAX + 0x4]
// 0041809c: MOV ECX,dword ptr [ECX]
// 0041809e: MOV dword ptr [EDX + 0xc],ECX
// 004180a1: MOV EAX,dword ptr [EAX + 0x8]
// 004180a4: ADD ESP,0x4
// 004180a7: MOV dword ptr [EDX + 0x10],EAX
// 004180aa: MOV EAX,EBX
// 004180ac: POP EBX
// 004180ad: RET
