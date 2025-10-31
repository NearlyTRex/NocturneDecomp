// Name: core_charactr.cpp_CCharacter_FUN_0042ca30
// Address: 0042ca30
// Address Range: [[0042ca30, 0042ca5f]]
// Convention: __cdecl
// Signature: int core_charactr.cpp_CCharacter_FUN_0042ca30(CCharacter * this_ptr)

#include "nocturne.h"

int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr)

{
  if ((*(int *)this_ptr->field11_0x25a0 != 0) &&
     ((*(int *)(this_ptr->field11_0x25a0 + 0x10) != 0 ||
      (*(int *)(this_ptr->field11_0x25a0 + 0x14) != 0)))) {
    return 0;
  }
  return 1;
}


// Assembly code:
// 0042ca30: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_charactr.cpp_CCharacter_FUN_0042ca30
//   XREF to: Stack[0x4] (READ)
// 0042ca34: CMP dword ptr [EAX + 0x25a0],0x0
// 0042ca3b: JZ 0x004297fb
//   XREF to: 004297fb (CONDITIONAL_JUMP)
// 0042ca41: CMP dword ptr [EAX + 0x25b0],0x0
// 0042ca48: JNZ 0x0042ca60
//   XREF to: 0042ca60 (CONDITIONAL_JUMP)
// 0042ca4a: CMP dword ptr [EAX + 0x25b4],0x0
// 0042ca51: JZ 0x004297fb
//   XREF to: 004297fb (CONDITIONAL_JUMP)
// 0042ca57: LEA EAX,[EAX]
// 0042ca5d: LEA EDX,[EDX]
