// Name: core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
// Address: 00501500
// Address Range: [[00501500, 00501563]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_toggleDetailView_FUN_00501500(CInventory * this_ptr)
// Cross-references:
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dc7c6 [UNCONDITIONAL_CALL]
// Globals:
//   CHero*[4] g_HeroActors
//   int g_LocalHeroIndex
// Function calls:
//   core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
//   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_toggleDetailView_FUN_00501500(CInventory *this_ptr)

{
  if ((CHero *)this_ptr->owner == g_HeroActors[g_LocalHeroIndex]) {
    this_ptr->render_mode_flag = (uint)(this_ptr->render_mode_flag == 0);
    if (0.0 < this_ptr->item_highlight_timer) {
      core_inv_cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0(this_ptr);
    }
    if (0.0 < this_ptr->weapon_highlight_timer) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,0);
      return;
    }
  }
  return;
}


// Assembly code:
// 00501500: PUSH EBX
//   Label: core_inv.cpp_CInventory_toggleDetailView_FUN_00501500
// 00501501: MOV EBX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 00501505: MOV EDX,dword ptr [0x02db87d0]
//   XREF to: 02db87d0 (READ)
// 0050150b: MOV EAX,dword ptr [EBX + 0x4]
// 0050150e: CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0]
//   XREF to: 02db87c0 (DATA)
// 00501515: JNZ 0x0050154a
//   XREF to: 0050154a (CONDITIONAL_JUMP)
// 00501517: CMP dword ptr [EBX + 0x44c],0x0
// 0050151e: SETZ AL
// 00501521: FLD float ptr [EBX + 0x33c]
// 00501527: AND EAX,0xff
// 0050152c: FLDZ
// 0050152e: MOV dword ptr [EBX + 0x44c],EAX
// 00501534: FCOMPP
// 00501536: FNSTSW AX
// 00501538: SAHF
// 00501539: JC 0x0050154c
//   XREF to: 0050154c (CONDITIONAL_JUMP)
// 0050153b: FLD float ptr [EBX + 0x338]
//   Label: LAB_0050153b
// 00501541: FLDZ
// 00501543: FCOMPP
// 00501545: FNSTSW AX
// 00501547: SAHF
// 00501548: JC 0x00501557
//   XREF to: 00501557 (CONDITIONAL_JUMP)
// 0050154a: POP EBX
//   Label: LAB_0050154a
// 0050154b: RET
// 0050154c: PUSH EBX
//   Label: LAB_0050154c
// 0050154d: CALL core_inv.cpp_CInventory_resetItemSwitchTimers_FUN_004ffff0
//   XREF to: 004ffff0 (UNCONDITIONAL_CALL)
// 00501552: ADD ESP,0x4
// 00501555: JMP 0x0050153b
//   XREF to: 0050153b (UNCONDITIONAL_JUMP)
// 00501557: PUSH 0x0
//   Label: LAB_00501557
// 00501559: PUSH EBX
// 0050155a: CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
// 0050155f: ADD ESP,0x8
// 00501562: POP EBX
// 00501563: RET
