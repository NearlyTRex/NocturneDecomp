// Name: wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710
// Address: 005ed710
// Address Range: [[005ed710, 005ed72c]]
// Convention: __cdecl
// Signature: int wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710(uint value)

#include "nocturne.h"

int __cdecl wincore_wddvmem_cpp_findMostSignificantBit_FUN_005ed710(uint value)

{
  int iVar1;
  
  iVar1 = 0;
  if (value != 0) {
    for (; 1 < value; value = value >> 1) {
      iVar1 = iVar1 + 1;
    }
    return iVar1;
  }
  return 0x20;
}


// Assembly code:
// 005ed710: MOV EAX,dword ptr [ESP + 0x4]
//   Label: wincore_wddvmem.cpp_findMostSignificantBit_FUN_005ed710
//   XREF to: Stack[0x4] (READ)
// 005ed714: XOR EDX,EDX
// 005ed716: TEST EAX,EAX
// 005ed718: JZ 0x005ed724
//   XREF to: 005ed724 (CONDITIONAL_JUMP)
// 005ed71a: CMP EAX,0x1
//   Label: LAB_005ed71a
// 005ed71d: JBE 0x005ed72a
//   XREF to: 005ed72a (CONDITIONAL_JUMP)
// 005ed71f: INC EDX
// 005ed720: SHR EAX,0x1
// 005ed722: JMP 0x005ed71a
//   XREF to: 005ed71a (UNCONDITIONAL_JUMP)
// 005ed724: MOV EAX,0x20
//   Label: LAB_005ed724
// 005ed729: RET
// 005ed72a: MOV EAX,EDX
//   Label: LAB_005ed72a
// 005ed72c: RET
