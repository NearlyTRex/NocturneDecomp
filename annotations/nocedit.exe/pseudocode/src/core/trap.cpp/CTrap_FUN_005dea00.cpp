// Name: core_trap.cpp_CTrap_FUN_005dea00
// Address: 005dea00
// Address Range: [[005dea00, 005dea4d]]
// Convention: __cdecl
// Signature: int * core_trap.cpp_CTrap_FUN_005dea00(CTrap * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_trap_cpp_CTrap_FUN_005dea00(CTrap *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_name);
  pCVar1 = pCVar2->frame_bounds;
  *in_stack_00000008 = pCVar1->x;
  in_stack_00000008[1] = pCVar1->y;
  in_stack_00000008[2] = pCVar1->z;
  in_stack_00000008[3] = pCVar1[1].x;
  in_stack_00000008[4] = pCVar1[1].y;
  in_stack_00000008[5] = pCVar1[1].z;
  return (int *)in_stack_00000008;
}


// Assembly code:
// 005dea00: PUSH EBX
//   Label: core_trap.cpp_CTrap_FUN_005dea00
// 005dea01: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005dea05: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005dea09: ADD EAX,0x158
// 005dea0e: PUSH EAX
// 005dea0f: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005dea14: MOV EAX,dword ptr [EAX + 0x5690]
// 005dea1a: MOV EDX,dword ptr [EAX]
// 005dea1c: LEA ECX,[EAX + 0x4]
// 005dea1f: MOV dword ptr [EBX],EDX
// 005dea21: LEA EDX,[EBX + 0x4]
// 005dea24: MOV ECX,dword ptr [ECX]
// 005dea26: MOV dword ptr [EDX],ECX
// 005dea28: LEA ECX,[EAX + 0x8]
// 005dea2b: MOV ECX,dword ptr [ECX]
// 005dea2d: MOV dword ptr [EDX + 0x4],ECX
// 005dea30: MOV ECX,dword ptr [EAX + 0xc]
// 005dea33: ADD EAX,0xc
// 005dea36: MOV dword ptr [EDX + 0x8],ECX
// 005dea39: LEA ECX,[EAX + 0x4]
// 005dea3c: MOV ECX,dword ptr [ECX]
// 005dea3e: MOV dword ptr [EDX + 0xc],ECX
// 005dea41: MOV EAX,dword ptr [EAX + 0x8]
// 005dea44: ADD ESP,0x4
// 005dea47: MOV dword ptr [EDX + 0x10],EAX
// 005dea4a: MOV EAX,EBX
// 005dea4c: POP EBX
// 005dea4d: RET
