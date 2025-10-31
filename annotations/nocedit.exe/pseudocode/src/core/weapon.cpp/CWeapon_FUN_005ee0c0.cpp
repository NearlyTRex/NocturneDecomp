// Name: core_weapon.cpp_CWeapon_FUN_005ee0c0
// Address: 005ee0c0
// Address Range: [[005ee0c0, 005ee10d]]
// Convention: __cdecl
// Signature: int * core_weapon.cpp_CWeapon_FUN_005ee0c0(CWeapon * this_ptr)
// Function calls:
//   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80

#include "nocturne.h"

int * __cdecl core_weapon_cpp_CWeapon_FUN_005ee0c0(CWeapon *this_ptr)

{
  CVector3f *pCVar1;
  CKeyFramedModel *pCVar2;
  float *in_stack_00000008;
  
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)&this_ptr->model_instance);
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
// 005ee0c0: PUSH EBX
//   Label: core_weapon.cpp_CWeapon_FUN_005ee0c0
// 005ee0c1: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005ee0c5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005ee0c9: ADD EAX,0x158
// 005ee0ce: PUSH EAX
// 005ee0cf: CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
//   XREF to: 00478d80 (UNCONDITIONAL_CALL)
// 005ee0d4: MOV EAX,dword ptr [EAX + 0x5690]
// 005ee0da: MOV EDX,dword ptr [EAX]
// 005ee0dc: LEA ECX,[EAX + 0x4]
// 005ee0df: MOV dword ptr [EBX],EDX
// 005ee0e1: LEA EDX,[EBX + 0x4]
// 005ee0e4: MOV ECX,dword ptr [ECX]
// 005ee0e6: MOV dword ptr [EDX],ECX
// 005ee0e8: LEA ECX,[EAX + 0x8]
// 005ee0eb: MOV ECX,dword ptr [ECX]
// 005ee0ed: MOV dword ptr [EDX + 0x4],ECX
// 005ee0f0: MOV ECX,dword ptr [EAX + 0xc]
// 005ee0f3: ADD EAX,0xc
// 005ee0f6: MOV dword ptr [EDX + 0x8],ECX
// 005ee0f9: LEA ECX,[EAX + 0x4]
// 005ee0fc: MOV ECX,dword ptr [ECX]
// 005ee0fe: MOV dword ptr [EDX + 0xc],ECX
// 005ee101: MOV EAX,dword ptr [EAX + 0x8]
// 005ee104: ADD ESP,0x4
// 005ee107: MOV dword ptr [EDX + 0x10],EAX
// 005ee10a: MOV EAX,EBX
// 005ee10c: POP EBX
// 005ee10d: RET
