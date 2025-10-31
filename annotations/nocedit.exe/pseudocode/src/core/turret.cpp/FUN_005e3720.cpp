// Name: core_turret.cpp_FUN_005e3720
// Address: 005e3720
// Address Range: [[005e3720, 005e3745]]
// Convention: unknown
// Signature: undefined core_turret.cpp_FUN_005e3720()

#include "nocturne.h"

/* Signature: undefined1 actors_weapon_turret.cpp_FUN_005e3720(undefined4 param_1, undefined4
   param_2) */

undefined4 * core_turret_cpp_FUN_005e3720(void)

{
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  *in_stack_00000008 = *(undefined4 *)(in_stack_00000004 + 0x860);
  in_stack_00000008[1] = *(undefined4 *)(in_stack_00000004 + 0x864);
  in_stack_00000008[2] = *(undefined4 *)(in_stack_00000004 + 0x868);
  return in_stack_00000008;
}


// Assembly code:
// 005e3720: PUSH EBX
//   Label: core_turret.cpp_FUN_005e3720
// 005e3721: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e3725: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 005e3729: ADD EAX,0x860
// 005e372e: MOV EDX,dword ptr [EAX]
// 005e3730: LEA EBX,[EAX + 0x4]
// 005e3733: MOV dword ptr [ECX],EDX
// 005e3735: LEA EDX,[ECX + 0x4]
// 005e3738: MOV EBX,dword ptr [EBX]
// 005e373a: MOV dword ptr [EDX],EBX
// 005e373c: MOV EAX,dword ptr [EAX + 0x8]
// 005e373f: MOV dword ptr [EDX + 0x4],EAX
// 005e3742: MOV EAX,ECX
// 005e3744: POP EBX
// 005e3745: RET
