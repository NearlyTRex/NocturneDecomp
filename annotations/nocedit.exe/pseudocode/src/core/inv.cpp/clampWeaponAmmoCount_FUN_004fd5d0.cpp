// Name: core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0
// Address: 004fd5d0
// Address Range: [[004fd5d0, 004fd5ff]]
// Convention: __cdecl
// Signature: void core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor * actor_ptr)
// Globals:
//   undefined4 g_CTommyGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790

#include "nocturne.h"

void __cdecl core_inv_cpp_clampWeaponAmmoCount_FUN_004fd5d0(CDemonActor *actor_ptr)

{
  CDemonActor *pCVar1;
  
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CTommyGunClassInfo.name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) && (200 < *(int *)(pCVar1[4].actor_name + 8))) {
    pCVar1[4].actor_name[8] = -0x38;
    pCVar1[4].actor_name[9] = '\0';
    pCVar1[4].actor_name[10] = '\0';
    pCVar1[4].actor_name[0xb] = '\0';
    return;
  }
  return;
}


// Assembly code:
// 004fd5d0: MOV EDX,dword ptr [0x03f873dc]
//   Label: core_inv.cpp_clampWeaponAmmoCount_FUN_004fd5d0
//   XREF to: 03f873dc (READ)
// 004fd5d6: PUSH EDX
// 004fd5d7: MOV ECX,dword ptr [ESP + 0x8]
//   XREF to: Stack[0x4] (READ)
// 004fd5db: PUSH ECX
// 004fd5dc: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fd5e1: ADD ESP,0x8
// 004fd5e4: TEST EAX,EAX
// 004fd5e6: JZ 0x004fd5f4
//   XREF to: 004fd5f4 (CONDITIONAL_JUMP)
// 004fd5e8: CMP dword ptr [EAX + 0x568],0xc8
// 004fd5f2: JG 0x004fd5f5
//   XREF to: 004fd5f5 (CONDITIONAL_JUMP)
// 004fd5f4: RET
//   Label: LAB_004fd5f4
// 004fd5f5: MOV dword ptr [EAX + 0x568],0xc8
//   Label: LAB_004fd5f5
// 004fd5ff: RET
