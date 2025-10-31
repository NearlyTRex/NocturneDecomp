// Name: core_charactr.cpp_CCharacter_FUN_0042b8a0
// Address: 0042b8a0
// Address Range: [[0042b8a0, 0042b8de]]
// Convention: __cdecl
// Signature: int * core_charactr.cpp_CCharacter_FUN_0042b8a0(CCharacter * this_ptr)

#include "nocturne.h"

int * __cdecl core_charactr_cpp_CCharacter_FUN_0042b8a0(CCharacter *this_ptr)

{
  int *in_stack_00000008;
  
  *in_stack_00000008 = *(int *)(this_ptr->field11_0x25a0 + 0x58);
  in_stack_00000008[1] = *(int *)(this_ptr->field11_0x25a0 + 0x5c);
  in_stack_00000008[2] = *(int *)(this_ptr->field11_0x25a0 + 0x60);
  in_stack_00000008[3] = *(int *)(this_ptr->field11_0x25a0 + 100);
  in_stack_00000008[4] = *(int *)(this_ptr->field11_0x25a0 + 0x68);
  in_stack_00000008[5] = *(int *)(this_ptr->field11_0x25a0 + 0x6c);
  return in_stack_00000008;
}


// Assembly code:
// 0042b8a0: PUSH EBX
//   Label: core_charactr.cpp_CCharacter_FUN_0042b8a0
// 0042b8a1: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 0042b8a5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 0042b8a9: ADD EAX,0x25f8
// 0042b8ae: MOV EDX,dword ptr [EAX]
// 0042b8b0: LEA EBX,[EAX + 0x4]
// 0042b8b3: MOV dword ptr [ECX],EDX
// 0042b8b5: LEA EDX,[ECX + 0x4]
// 0042b8b8: MOV EBX,dword ptr [EBX]
// 0042b8ba: MOV dword ptr [EDX],EBX
// 0042b8bc: LEA EBX,[EAX + 0x8]
// 0042b8bf: MOV EBX,dword ptr [EBX]
// 0042b8c1: MOV dword ptr [EDX + 0x4],EBX
// 0042b8c4: MOV EBX,dword ptr [EAX + 0xc]
// 0042b8c7: ADD EAX,0xc
// 0042b8ca: MOV dword ptr [EDX + 0x8],EBX
// 0042b8cd: LEA EBX,[EAX + 0x4]
// 0042b8d0: MOV EBX,dword ptr [EBX]
// 0042b8d2: MOV dword ptr [EDX + 0xc],EBX
// 0042b8d5: MOV EAX,dword ptr [EAX + 0x8]
// 0042b8d8: MOV dword ptr [EDX + 0x10],EAX
// 0042b8db: MOV EAX,ECX
// 0042b8dd: POP EBX
// 0042b8de: RET
