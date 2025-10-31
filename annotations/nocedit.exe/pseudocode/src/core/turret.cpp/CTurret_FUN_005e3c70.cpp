// Name: core_turret.cpp_CTurret_FUN_005e3c70
// Address: 005e3c70
// Address Range: [[005e3c70, 005e3c95]]
// Convention: __cdecl
// Signature: int core_turret.cpp_CTurret_FUN_005e3c70(CTurret * this_ptr)
// Globals:
//   CGame* g_CGamePtr = 02d81a9c
//   CGame g_CGameInstance
//   undefined4 DAT_02d81ca0
// Function calls:
//   core_weapon.cpp_CWeapon_FUN_005ee340

#include "nocturne.h"

int __cdecl core_turret_cpp_CTurret_FUN_005e3c70(CTurret *this_ptr)

{
  int iVar1;
  
  if (g_CGamePtr->field66_0x204 == 0) {
    return 0;
  }
  iVar1 = core_weapon_cpp_CWeapon_FUN_005ee340(&this_ptr->base_weapon);
  return iVar1;
}


// Assembly code:
// 005e3c70: MOV EAX,[0x0067b654]
//   Label: core_turret.cpp_CTurret_FUN_005e3c70
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 005e3c75: CMP dword ptr [EAX + 0x204],0x0
//   XREF to: 02d81ca0 (READ)
// 005e3c7c: JNZ 0x005e3c81
//   XREF to: 005e3c81 (CONDITIONAL_JUMP)
// 005e3c7e: XOR EAX,EAX
// 005e3c80: RET
// 005e3c81: PUSH EBX
//   Label: LAB_005e3c81
// 005e3c82: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x8] (READ)
// 005e3c86: PUSH ECX
// 005e3c87: MOV EBX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 005e3c8b: PUSH EBX
// 005e3c8c: CALL core_weapon.cpp_CWeapon_FUN_005ee340
//   XREF to: 005ee340 (UNCONDITIONAL_CALL)
// 005e3c91: ADD ESP,0x8
// 005e3c94: POP EBX
// 005e3c95: RET
