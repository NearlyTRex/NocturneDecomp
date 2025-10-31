// Name: core_weapon.cpp_CWeapon_FUN_005ee670
// Address: 005ee670
// Address Range: [[005ee670, 005ee6dd]]
// Convention: __cdecl
// Signature: int * core_weapon.cpp_CWeapon_FUN_005ee670(CWeapon * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee670(CWeapon *this_ptr)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  int *in_stack_00000008;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_instance);
  fVar1 = (pCVar3->bounds_max).y;
  fVar2 = (pCVar3->bounds_max).z;
  *in_stack_00000008 = 0;
  in_stack_00000008[1] = (int)fVar1;
  in_stack_00000008[2] = (int)fVar2;
  return in_stack_00000008;
}


// Assembly code:
// 005ee670: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee670
// 005ee671: SUB ESP,0x18
// 005ee674: MOV EBX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 005ee678: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005ee67c: ADD EAX,0x158
// 005ee681: PUSH EAX
// 005ee682: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005ee687: LEA EDX,[EAX + 0x5678]
// 005ee68d: ADD ESP,0x4
// 005ee690: MOV EAX,dword ptr [EDX]
// 005ee692: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1c] (DATA)
// 005ee695: LEA EAX,[EDX + 0x4]
// 005ee698: MOV EAX,dword ptr [EAX]
// 005ee69a: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005ee69e: LEA EAX,[EDX + 0x8]
// 005ee6a1: MOV EAX,dword ptr [EAX]
// 005ee6a3: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005ee6a7: MOV EAX,dword ptr [EDX + 0xc]
// 005ee6aa: ADD EDX,0xc
// 005ee6ad: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 005ee6b1: LEA EAX,[EDX + 0x4]
// 005ee6b4: MOV EAX,dword ptr [EAX]
// 005ee6b6: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 005ee6ba: LEA EAX,[EDX + 0x8]
// 005ee6bd: MOV EAX,dword ptr [EAX]
// 005ee6bf: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x8] (WRITE)
// 005ee6c3: MOV dword ptr [EBX],0x0
// 005ee6c9: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0xc] (READ)
// 005ee6cd: MOV dword ptr [EBX + 0x4],EAX
// 005ee6d0: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x8] (READ)
// 005ee6d4: MOV dword ptr [EBX + 0x8],EAX
// 005ee6d7: MOV EAX,EBX
// 005ee6d9: ADD ESP,0x18
// 005ee6dc: POP EBX
// 005ee6dd: RET
