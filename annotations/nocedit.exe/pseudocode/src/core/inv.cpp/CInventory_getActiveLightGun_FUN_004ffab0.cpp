// Name: core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
// Address: 004ffab0
// Address Range: [[004ffab0, 004ffacd]]
// Convention: __cdecl
// Signature: CLightGun * core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c5270 (005c5270) at 005c5b40 [UNCONDITIONAL_CALL]

#include "nocturne.h"

CLightGun * __cdecl core_inv_cpp_CInventory_getActiveLightGun_FUN_004ffab0(CInventory *this_ptr)

{
  CLightGun *pCVar1;
  
  pCVar1 = this_ptr->light_gun_ptr;
  if ((pCVar1 != (CLightGun *)0x0) && ((pCVar1->base_weapon).weapon_state != 0)) {
    return pCVar1;
  }
  return (CLightGun *)0x0;
}


// Assembly code:
// 004ffab0: MOV EAX,dword ptr [ESP + 0x4]
//   Label: core_inv.cpp_CInventory_getActiveLightGun_FUN_004ffab0
//   XREF to: Stack[0x4] (READ)
// 004ffab4: MOV EDX,dword ptr [EAX + 0x454]
// 004ffaba: TEST EDX,EDX
// 004ffabc: JZ 0x004ffacb
//   XREF to: 004ffacb (CONDITIONAL_JUMP)
// 004ffabe: MOV ECX,dword ptr [EDX + 0x2d4]
// 004ffac4: MOV EAX,EDX
// 004ffac6: TEST ECX,ECX
// 004ffac8: JZ 0x004ffacb
//   XREF to: 004ffacb (CONDITIONAL_JUMP)
// 004ffaca: RET
// 004ffacb: XOR EAX,EAX
//   Label: LAB_004ffacb
// 004ffacd: RET
