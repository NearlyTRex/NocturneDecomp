// Name: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
// Address: 004feb10
// Address Range: [[004feb10, 004fec0a]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_selectWeapon_FUN_004feb10(CInventory * this_ptr, CDemonActor * specific_weapon, int weapon_category, int direction)
// Cross-references:
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dc869 [UNCONDITIONAL_CALL]
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2aa6 [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_addItem_FUN_004fd600 (004fd600) at 004fe58f [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_select_FUN_004ff800 (004ff800) at 004ff91c [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557150 (00557150) at 005571a9 [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e8da [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
          (CInventory *this_ptr,CDemonActor *specific_weapon,int weapon_category,int direction)

{
  CWeapon *this_ptr_00;
  CDemonActor *weapon_actor;
  int iVar1;
  char *pcVar2;
  int iVar3;
  CWeapon *unaff_ESI;
  CInventory *pCVar4;
  CDemonActor *in_stack_00000014;
  
  if (this_ptr->item_count < 1) {
    this_ptr->selected_weapon = (CWeapon *)0x0;
  }
  else {
    pcVar2 = (char *)0x0;
    core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
    pCVar4 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        pcVar2 = pcVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while ((int)pcVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    while( true ) {
      pcVar2 = in_stack_00000014->actor_name + (int)pcVar2;
      if ((int)pcVar2 < this_ptr->item_count) {
        if ((int)pcVar2 < 0) {
          pcVar2 = (char *)(this_ptr->item_count + -1);
        }
      }
      else {
        pcVar2 = (char *)0x0;
      }
      weapon_actor = core_actor_cpp_castToClassHash_FUN_0040c790
                               (this_ptr->items[(int)pcVar2],g_CWeaponClassInfo.name_hash);
      if (((weapon_actor != (CDemonActor *)0x0) &&
          (iVar1 = core_inv_cpp_CInventory_isWeaponInCategory_FUN_004ffe70
                             (this_ptr,weapon_actor,(int)in_stack_00000014), iVar1 != 0)) &&
         ((in_stack_00000014 == (CDemonActor *)0x0 || (weapon_actor == in_stack_00000014)))) break;
      iVar3 = iVar3 + 1;
      if (99 < iVar3) {
        return;
      }
    }
    this_ptr_00 = this_ptr->selected_weapon;
    if (this_ptr_00 != unaff_ESI) {
      if (this_ptr_00 != (CWeapon *)0x0) {
        (*((this_ptr_00->base_actor).vtable)->process)(&this_ptr_00->base_actor);
      }
      this_ptr->selected_weapon = (CWeapon *)this_ptr;
      core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
      return;
    }
  }
  return;
}


// Assembly code:
// 004feb10: PUSH EBX
//   Label: core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
// 004feb11: PUSH ESI
// 004feb12: PUSH EDI
// 004feb13: PUSH EBP
// 004feb14: SUB ESP,0x4
// 004feb17: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004feb1b: CMP dword ptr [ESI + 0x8],0x1
// 004feb1f: JGE 0x004feb33
//   XREF to: 004feb33 (CONDITIONAL_JUMP)
// 004feb21: MOV dword ptr [ESI + 0x330],0x0
// 004feb2b: ADD ESP,0x4
//   Label: LAB_004feb2b
// 004feb2e: POP EBP
// 004feb2f: POP EDI
// 004feb30: POP ESI
// 004feb31: POP EBX
// 004feb32: RET
// 004feb33: PUSH 0x1
//   Label: LAB_004feb33
// 004feb35: PUSH ESI
// 004feb36: XOR EBX,EBX
// 004feb38: CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
// 004feb3d: MOV ECX,dword ptr [ESI + 0x8]
// 004feb40: ADD ESP,0x8
// 004feb43: TEST ECX,ECX
// 004feb45: JLE 0x004feb54
//   XREF to: 004feb54 (CONDITIONAL_JUMP)
// 004feb47: MOV EDI,ESI
// 004feb49: MOV EDX,dword ptr [ESI + 0x330]
//   Label: LAB_004feb49
// 004feb4f: CMP EDX,dword ptr [EDI + 0xc]
// 004feb52: JNZ 0x004feb8f
//   XREF to: 004feb8f (CONDITIONAL_JUMP)
// 004feb54: XOR EBP,EBP
//   Label: LAB_004feb54
// 004feb56: MOV ECX,dword ptr [ESP + 0x24]
//   Label: LAB_004feb56
//   XREF to: Stack[0x10] (READ)
// 004feb5a: MOV EDI,dword ptr [ESI + 0x8]
// 004feb5d: ADD EBX,ECX
// 004feb5f: CMP EBX,EDI
// 004feb61: JL 0x004feb9c
//   XREF to: 004feb9c (CONDITIONAL_JUMP)
// 004feb63: XOR EBX,EBX
// 004feb65: MOV EAX,[0x03f95d78]
//   Label: LAB_004feb65
//   XREF to: 03f95d78 (READ)
// 004feb6a: PUSH EAX
// 004feb6b: MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc]
// 004feb6f: PUSH EDX
// 004feb70: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004feb75: ADD ESP,0x8
// 004feb78: MOV EDI,EAX
// 004feb7a: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004feb7d: TEST EAX,EAX
// 004feb7f: JNZ 0x004feba5
//   XREF to: 004feba5 (CONDITIONAL_JUMP)
// 004feb81: INC EBP
//   Label: LAB_004feb81
// 004feb82: CMP EBP,0x64
// 004feb85: JL 0x004feb56
//   XREF to: 004feb56 (CONDITIONAL_JUMP)
// 004feb87: ADD ESP,0x4
// 004feb8a: POP EBP
// 004feb8b: POP EDI
// 004feb8c: POP ESI
// 004feb8d: POP EBX
// 004feb8e: RET
// 004feb8f: INC EBX
//   Label: LAB_004feb8f
// 004feb90: MOV EBP,dword ptr [ESI + 0x8]
// 004feb93: ADD EDI,0x4
// 004feb96: CMP EBX,EBP
// 004feb98: JL 0x004feb49
//   XREF to: 004feb49 (CONDITIONAL_JUMP)
// 004feb9a: JMP 0x004feb54
//   XREF to: 004feb54 (UNCONDITIONAL_JUMP)
// 004feb9c: TEST EBX,EBX
//   Label: LAB_004feb9c
// 004feb9e: JGE 0x004feb65
//   XREF to: 004feb65 (CONDITIONAL_JUMP)
// 004feba0: LEA EBX,[EDI + -0x1]
// 004feba3: JMP 0x004feb65
//   XREF to: 004feb65 (UNCONDITIONAL_JUMP)
// 004feba5: MOV ECX,dword ptr [ESP + 0x20]
//   Label: LAB_004feba5
//   XREF to: Stack[0xc] (READ)
// 004feba9: PUSH ECX
// 004febaa: PUSH EAX
// 004febab: PUSH ESI
// 004febac: CALL core_inv.cpp_CInventory_isWeaponInCategory_FUN_004ffe70
//   XREF to: 004ffe70 (UNCONDITIONAL_CALL)
// 004febb1: ADD ESP,0xc
// 004febb4: TEST EAX,EAX
// 004febb6: JZ 0x004feb81
//   XREF to: 004feb81 (CONDITIONAL_JUMP)
// 004febb8: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004febbc: TEST EAX,EAX
// 004febbe: JZ 0x004febc4
//   XREF to: 004febc4 (CONDITIONAL_JUMP)
// 004febc0: CMP EDI,EAX
// 004febc2: JNZ 0x004feb81
//   XREF to: 004feb81 (CONDITIONAL_JUMP)
// 004febc4: MOV ECX,dword ptr [ESP]
//   Label: LAB_004febc4
//   XREF to: Stack[-0x14] (DATA)
// 004febc7: MOV EAX,dword ptr [ESI + 0x330]
// 004febcd: CMP EAX,ECX
// 004febcf: JZ 0x004feb2b
//   XREF to: 004feb2b (CONDITIONAL_JUMP)
// 004febd5: TEST EAX,EAX
// 004febd7: JZ 0x004febeb
//   XREF to: 004febeb (CONDITIONAL_JUMP)
// 004febd9: PUSH 0x3dcccccd
// 004febde: MOV EBX,dword ptr [EAX + 0x154]
// 004febe4: PUSH EAX
// 004febe5: CALL dword ptr [EBX + 0x4]
// 004febe8: ADD ESP,0x8
// 004febeb: PUSH 0x3e7
//   Label: LAB_004febeb
// 004febf0: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004febf4: PUSH ESI
// 004febf5: MOV dword ptr [ESI + 0x330],EAX
// 004febfb: CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   XREF to: 004ffe10 (UNCONDITIONAL_CALL)
// 004fec00: ADD ESP,0x8
// 004fec03: ADD ESP,0x4
// 004fec06: POP EBP
// 004fec07: POP EDI
// 004fec08: POP ESI
// 004fec09: POP EBX
// 004fec0a: RET
