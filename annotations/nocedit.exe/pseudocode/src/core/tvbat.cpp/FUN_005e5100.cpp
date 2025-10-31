// Name: core_tvbat.cpp_FUN_005e5100
// Address: 005e5100
// Address Range: [[005e5100, 005e512e]]
// Convention: unknown
// Signature: undefined core_tvbat.cpp_FUN_005e5100()

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_tvbat.cpp_FUN_005e5100(undefined4 param_1) */

int core_tvbat_cpp_FUN_005e5100(void)

{
  int iVar1;
  int in_stack_00000004;
  
  if (*(int *)(in_stack_00000004 + 0x70) == 2) {
    return 2;
  }
  iVar1 = *(int *)(in_stack_00000004 + 0xc078);
  if (iVar1 != 0) {
    if ((iVar1 != 1) && (iVar1 != 2)) {
      return 2;
    }
    return iVar1;
  }
  return 0;
}


// Assembly code:
// 005e5100: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_tvbat.cpp_FUN_005e5100
//   XREF to: Stack[0x4] (READ)
// 005e5104: MOV EDX,dword ptr [EAX + 0x70]
// 005e5107: CMP EDX,0x2
// 005e510a: JZ 0x005e5129
//   XREF to: 005e5129 (CONDITIONAL_JUMP)
// 005e510c: MOV ECX,dword ptr [EAX + 0xc078]
// 005e5112: TEST ECX,ECX
// 005e5114: JZ 0x005e50f0
//   XREF to: 005e50f0 (CONDITIONAL_JUMP)
// 005e5116: CMP ECX,0x1
// 005e5119: JZ 0x005e512c
//   XREF to: 005e512c (CONDITIONAL_JUMP)
// 005e511b: CMP ECX,0x2
// 005e511e: JZ 0x005e512c
//   XREF to: 005e512c (CONDITIONAL_JUMP)
// 005e5120: CMP ECX,0x3
// 005e5123: MOV EAX,0x2
// 005e5128: RET
// 005e5129: MOV EAX,EDX
//   Label: LAB_005e5129
// 005e512b: RET
// 005e512c: MOV EAX,ECX
//   Label: LAB_005e512c
// 005e512e: RET
