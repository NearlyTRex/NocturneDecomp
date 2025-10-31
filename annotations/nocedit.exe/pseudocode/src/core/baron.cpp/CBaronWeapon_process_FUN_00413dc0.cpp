// Name: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
// Address: 00413dc0
// Address Range: [[00413dc0, 00413dde]]
// Convention: __cdecl
// Signature: void core_baron.cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon * this_ptr)
// Function calls:
//   core_baron.cpp_FUN_00413f20
//   core_weapon.cpp_CWeapon_process_FUN_005ee110

#include "nocturne.h"

void __cdecl core_baron_cpp_CBaronWeapon_process_FUN_00413dc0(CBaronWeapon *this_ptr)

{
  CWeapon *in_stack_00000008;
  
  core_baron_cpp_FUN_00413f20();
  core_weapon_cpp_CWeapon_process_FUN_005ee110(in_stack_00000008);
  return;
}


// Assembly code:
// 00413dc0: MOV EDX,dword ptr [ESP + 0x4]
//   Label: core_baron.cpp_CBaronWeapon_process_FUN_00413dc0
//   XREF to: Stack[0x4] (READ)
// 00413dc4: PUSH EDX
// 00413dc5: CALL core_baron.cpp_FUN_00413f20
//   XREF to: 00413f20 (UNCONDITIONAL_CALL)
// 00413dca: ADD ESP,0x4
// 00413dcd: MOV ECX,dword ptr [ESP + 0x4]
//   XREF to: Stack[0x4] (READ)
// 00413dd1: PUSH dword ptr [ESP + 0x8]
//   XREF to: Stack[0x8] (READ)
// 00413dd5: PUSH ECX
// 00413dd6: CALL core_weapon.cpp_CWeapon_process_FUN_005ee110
//   XREF to: 005ee110 (UNCONDITIONAL_CALL)
// 00413ddb: ADD ESP,0x8
// 00413dde: RET
