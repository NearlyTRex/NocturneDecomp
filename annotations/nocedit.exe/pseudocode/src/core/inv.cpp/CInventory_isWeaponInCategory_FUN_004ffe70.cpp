// Name: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
// Address: 004ffe70
// Address Range: [[004ffe70, 004fff99]]
// Convention: __cdecl
// Signature: int core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70(CInventory * this_ptr, CDemonActor * weapon_actor, int weapon_category)
// Cross-references:
//   core_inv.cpp_CInventory_renderAllItems_FUN_00500690 (00500690) at 00501282 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10 (004feb10) at 004febac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CGun_00630ab2
//   TerminatedCString s_CShotgun_00630ab7
//   TerminatedCString s_CCrossbow_00630ac0
//   TerminatedCString s_CTommyGun_00630aca
//   TerminatedCString s_CElephantGun_00630ad4
//   TerminatedCString s_CFlameThrower_00630ae1
//   TerminatedCString s_CLightGun_00630aef
//   TerminatedCString s_CMelee_00630af9
//   TerminatedCString s_CDynamite_00630b00
// Function calls:
//   core_actor.cpp_isOfClass_FUN_0040c6d0

#include "nocturne.h"

int __cdecl
core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
          (CInventory *this_ptr,CDemonActor *weapon_actor,int weapon_category)

{
  int iVar1;
  
  if (weapon_category == 5) {
    return 1;
  }
  if (weapon_category == 0) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CGun");
    if (iVar1 != 0) {
      return 1;
    }
  }
  if (weapon_category == 1) {
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CShotgun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CCrossbow");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CTommyGun");
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CElephantGun");
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    if (weapon_category == 2) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CFlameThrower");
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CLightGun");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if (weapon_category == 3) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CMelee");
      if (iVar1 != 0) {
        return 1;
      }
    }
    if (weapon_category == 4) {
      iVar1 = core_actor_cpp_isOfClass_FUN_0040c6d0(weapon_actor,"CDynamite");
      if (iVar1 != 0) {
        return 1;
      }
    }
    iVar1 = 0;
  }
  return iVar1;
}


// Assembly code:
// 004ffe70: PUSH EBX
//   Label: core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
// 004ffe71: PUSH ESI
// 004ffe72: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004ffe76: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0xc] (READ)
// 004ffe7a: CMP ESI,0x5
// 004ffe7d: JZ 0x004ffea8
//   XREF to: 004ffea8 (CONDITIONAL_JUMP)
// 004ffe7f: TEST ESI,ESI
// 004ffe81: JZ 0x004ffeb0
//   XREF to: 004ffeb0 (CONDITIONAL_JUMP)
// 004ffe83: CMP ESI,0x1
//   Label: LAB_004ffe83
// 004ffe86: JZ 0x004ffeca
//   XREF to: 004ffeca (CONDITIONAL_JUMP)
// 004ffe88: CMP ESI,0x2
// 004ffe8b: JZ 0x004fff26
//   XREF to: 004fff26 (CONDITIONAL_JUMP)
// 004ffe91: CMP ESI,0x3
//   Label: LAB_004ffe91
// 004ffe94: JZ 0x004fff5e
//   XREF to: 004fff5e (CONDITIONAL_JUMP)
// 004ffe9a: CMP ESI,0x4
//   Label: LAB_004ffe9a
// 004ffe9d: JZ 0x004fff7c
//   XREF to: 004fff7c (CONDITIONAL_JUMP)
// 004ffea3: XOR EAX,EAX
//   Label: LAB_004ffea3
// 004ffea5: POP ESI
//   Label: LAB_004ffea5
// 004ffea6: POP EBX
// 004ffea7: RET
// 004ffea8: MOV EAX,0x1
//   Label: LAB_004ffea8
// 004ffead: POP ESI
// 004ffeae: POP EBX
// 004ffeaf: RET
// 004ffeb0: PUSH 0x630ab2
//   Label: LAB_004ffeb0
//   XREF to: 00630ab2 (DATA)
// 004ffeb5: PUSH EBX
// 004ffeb6: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ffebb: ADD ESP,0x8
// 004ffebe: TEST EAX,EAX
// 004ffec0: JZ 0x004ffe83
//   XREF to: 004ffe83 (CONDITIONAL_JUMP)
// 004ffec2: MOV EAX,0x1
// 004ffec7: POP ESI
// 004ffec8: POP EBX
// 004ffec9: RET
// 004ffeca: PUSH 0x630ab7
//   Label: LAB_004ffeca
//   XREF to: 00630ab7 (DATA)
// 004ffecf: PUSH EBX
// 004ffed0: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ffed5: ADD ESP,0x8
// 004ffed8: TEST EAX,EAX
// 004ffeda: JZ 0x004ffee1
//   XREF to: 004ffee1 (CONDITIONAL_JUMP)
// 004ffedc: MOV EAX,ESI
// 004ffede: POP ESI
// 004ffedf: POP EBX
// 004ffee0: RET
// 004ffee1: PUSH 0x630ac0
//   Label: LAB_004ffee1
//   XREF to: 00630ac0 (DATA)
// 004ffee6: PUSH EBX
// 004ffee7: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004ffeec: ADD ESP,0x8
// 004ffeef: TEST EAX,EAX
// 004ffef1: JZ 0x004ffef8
//   XREF to: 004ffef8 (CONDITIONAL_JUMP)
// 004ffef3: MOV EAX,ESI
// 004ffef5: POP ESI
// 004ffef6: POP EBX
// 004ffef7: RET
// 004ffef8: PUSH 0x630aca
//   Label: LAB_004ffef8
//   XREF to: 00630aca (DATA)
// 004ffefd: PUSH EBX
// 004ffefe: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff03: ADD ESP,0x8
// 004fff06: TEST EAX,EAX
// 004fff08: JZ 0x004fff0f
//   XREF to: 004fff0f (CONDITIONAL_JUMP)
// 004fff0a: MOV EAX,ESI
// 004fff0c: POP ESI
// 004fff0d: POP EBX
// 004fff0e: RET
// 004fff0f: PUSH 0x630ad4
//   Label: LAB_004fff0f
//   XREF to: 00630ad4 (DATA)
// 004fff14: PUSH EBX
// 004fff15: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff1a: ADD ESP,0x8
// 004fff1d: TEST EAX,EAX
// 004fff1f: JZ 0x004ffea5
//   XREF to: 004ffea5 (CONDITIONAL_JUMP)
// 004fff21: MOV EAX,ESI
// 004fff23: POP ESI
// 004fff24: POP EBX
// 004fff25: RET
// 004fff26: PUSH 0x630ae1
//   Label: LAB_004fff26
//   XREF to: 00630ae1 (DATA)
// 004fff2b: PUSH EBX
// 004fff2c: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff31: ADD ESP,0x8
// 004fff34: TEST EAX,EAX
// 004fff36: JZ 0x004fff40
//   XREF to: 004fff40 (CONDITIONAL_JUMP)
// 004fff38: MOV EAX,0x1
// 004fff3d: POP ESI
// 004fff3e: POP EBX
// 004fff3f: RET
// 004fff40: PUSH 0x630aef
//   Label: LAB_004fff40
//   XREF to: 00630aef (DATA)
// 004fff45: PUSH EBX
// 004fff46: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff4b: ADD ESP,0x8
// 004fff4e: TEST EAX,EAX
// 004fff50: JZ 0x004ffe91
//   XREF to: 004ffe91 (CONDITIONAL_JUMP)
// 004fff56: MOV EAX,0x1
// 004fff5b: POP ESI
// 004fff5c: POP EBX
// 004fff5d: RET
// 004fff5e: PUSH 0x630af9
//   Label: LAB_004fff5e
//   XREF to: 00630af9 (DATA)
// 004fff63: PUSH EBX
// 004fff64: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff69: ADD ESP,0x8
// 004fff6c: TEST EAX,EAX
// 004fff6e: JZ 0x004ffe9a
//   XREF to: 004ffe9a (CONDITIONAL_JUMP)
// 004fff74: MOV EAX,0x1
// 004fff79: POP ESI
// 004fff7a: POP EBX
// 004fff7b: RET
// 004fff7c: PUSH 0x630b00
//   Label: LAB_004fff7c
//   XREF to: 00630b00 (DATA)
// 004fff81: PUSH EBX
// 004fff82: CALL core_actor.cpp_isOfClass_FUN_0040c6d0
//   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
// 004fff87: ADD ESP,0x8
// 004fff8a: TEST EAX,EAX
// 004fff8c: JZ 0x004ffea3
//   XREF to: 004ffea3 (CONDITIONAL_JUMP)
// 004fff92: MOV EAX,0x1
// 004fff97: POP ESI
// 004fff98: POP EBX
// 004fff99: RET
