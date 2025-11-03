// Name: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
// Address: 004fed10
// Address Range: [[004fed10, 004fedfe]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory * this_ptr, int direction)
// Cross-references:
//   core_game.cpp_KeypressesAndCGame_FUN_004dc3e0 (004dc3e0) at 004dc793 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   crt_string.c_strcmp_FUN_005fef20

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10(CInventory *this_ptr,int direction)

{
  CWeapon *this_ptr_00;
  CWeapon *this_ptr_01;
  char *str1;
  int iVar1;
  char *pcVar2;
  int iVar3;
  char *unaff_ESI;
  CInventory *pCVar4;
  CWeapon *in_stack_0000000c;
  
  core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,1);
  if (this_ptr->selected_weapon != (CWeapon *)0x0) {
    pcVar2 = (char *)0x0;
    pCVar4 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        if (this_ptr->selected_weapon == (CWeapon *)pCVar4->items[0]) break;
        pcVar2 = pcVar2 + 1;
        pCVar4 = (CInventory *)&pCVar4->owner;
      } while ((int)pcVar2 < this_ptr->item_count);
    }
    iVar3 = 0;
    do {
      pcVar2 = (in_stack_0000000c->base_actor).actor_name + (int)pcVar2;
      if ((int)pcVar2 < this_ptr->item_count) {
        if ((int)pcVar2 < 0) {
          pcVar2 = (char *)(this_ptr->item_count + -1);
        }
      }
      else {
        pcVar2 = (char *)0x0;
      }
      this_ptr_01 = (CWeapon *)
                    core_actor_cpp_castToClassHash_FUN_0040c790
                              (this_ptr->items[(int)pcVar2],g_CWeaponClassInfo.name_hash);
      if (this_ptr_01 != (CWeapon *)0x0) {
        core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90
                  (&this_ptr->selected_weapon->base_actor);
        str1 = core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90((CDemonActor *)this_ptr_01)
        ;
        iVar1 = crt_string_c_strcmp_FUN_005fef20(str1,unaff_ESI);
        if (iVar1 == 0) {
          this_ptr_00 = this_ptr->selected_weapon;
          if (this_ptr_01 == this_ptr_00) {
            return;
          }
          if (this_ptr_00 != (CWeapon *)0x0) {
            (*((this_ptr_00->base_actor).vtable)->process)(&this_ptr_00->base_actor);
          }
          this_ptr->selected_weapon = in_stack_0000000c;
          core_inv_cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10(this_ptr);
          return;
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 100);
  }
  return;
}


// Assembly code:
// 004fed10: PUSH EBX
//   Label: core_inv.cpp_CInventory_cycleWeaponOfSameClass_FUN_004fed10
// 004fed11: PUSH ESI
// 004fed12: PUSH EDI
// 004fed13: PUSH EBP
// 004fed14: SUB ESP,0x4
// 004fed17: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004fed1b: PUSH 0x1
// 004fed1d: PUSH ESI
// 004fed1e: CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
// 004fed23: MOV EDX,dword ptr [ESI + 0x330]
// 004fed29: ADD ESP,0x8
// 004fed2c: TEST EDX,EDX
// 004fed2e: JZ 0x004fed79
//   XREF to: 004fed79 (CONDITIONAL_JUMP)
// 004fed30: MOV ECX,dword ptr [ESI + 0x8]
// 004fed33: XOR EBX,EBX
// 004fed35: TEST ECX,ECX
// 004fed37: JLE 0x004fed46
//   XREF to: 004fed46 (CONDITIONAL_JUMP)
// 004fed39: MOV EDI,ESI
// 004fed3b: MOV EDX,dword ptr [ESI + 0x330]
//   Label: LAB_004fed3b
// 004fed41: CMP EDX,dword ptr [EDI + 0xc]
// 004fed44: JNZ 0x004fed81
//   XREF to: 004fed81 (CONDITIONAL_JUMP)
// 004fed46: XOR EBP,EBP
//   Label: LAB_004fed46
// 004fed48: MOV ECX,dword ptr [ESP + 0x1c]
//   Label: LAB_004fed48
//   XREF to: Stack[0x8] (READ)
// 004fed4c: MOV EDI,dword ptr [ESI + 0x8]
// 004fed4f: ADD EBX,ECX
// 004fed51: CMP EBX,EDI
// 004fed53: JL 0x004fed8e
//   XREF to: 004fed8e (CONDITIONAL_JUMP)
// 004fed55: XOR EBX,EBX
// 004fed57: MOV EAX,[0x03f95d78]
//   Label: LAB_004fed57
//   XREF to: 03f95d78 (READ)
// 004fed5c: PUSH EAX
// 004fed5d: MOV EDX,dword ptr [ESI + EBX*0x4 + 0xc]
// 004fed61: PUSH EDX
// 004fed62: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004fed67: ADD ESP,0x8
// 004fed6a: MOV EDI,EAX
// 004fed6c: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x14] (DATA)
// 004fed6f: TEST EAX,EAX
// 004fed71: JNZ 0x004fed97
//   XREF to: 004fed97 (CONDITIONAL_JUMP)
// 004fed73: INC EBP
//   Label: LAB_004fed73
// 004fed74: CMP EBP,0x64
// 004fed77: JL 0x004fed48
//   XREF to: 004fed48 (CONDITIONAL_JUMP)
// 004fed79: ADD ESP,0x4
//   Label: LAB_004fed79
// 004fed7c: POP EBP
// 004fed7d: POP EDI
// 004fed7e: POP ESI
// 004fed7f: POP EBX
// 004fed80: RET
// 004fed81: INC EBX
//   Label: LAB_004fed81
// 004fed82: MOV EBP,dword ptr [ESI + 0x8]
// 004fed85: ADD EDI,0x4
// 004fed88: CMP EBX,EBP
// 004fed8a: JL 0x004fed3b
//   XREF to: 004fed3b (CONDITIONAL_JUMP)
// 004fed8c: JMP 0x004fed46
//   XREF to: 004fed46 (UNCONDITIONAL_JUMP)
// 004fed8e: TEST EBX,EBX
//   Label: LAB_004fed8e
// 004fed90: JGE 0x004fed57
//   XREF to: 004fed57 (CONDITIONAL_JUMP)
// 004fed92: LEA EBX,[EDI + -0x1]
// 004fed95: JMP 0x004fed57
//   XREF to: 004fed57 (UNCONDITIONAL_JUMP)
// 004fed97: MOV ECX,dword ptr [ESI + 0x330]
//   Label: LAB_004fed97
// 004fed9d: PUSH ECX
// 004fed9e: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004feda3: ADD ESP,0x4
// 004feda6: PUSH EAX
// 004feda7: PUSH EDI
// 004feda8: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fedad: ADD ESP,0x4
// 004fedb0: PUSH EAX
// 004fedb1: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fedb6: ADD ESP,0x8
// 004fedb9: TEST EAX,EAX
// 004fedbb: JNZ 0x004fed73
//   XREF to: 004fed73 (CONDITIONAL_JUMP)
// 004fedbd: MOV EBX,dword ptr [ESI + 0x330]
// 004fedc3: CMP EDI,EBX
// 004fedc5: JZ 0x004fed79
//   XREF to: 004fed79 (CONDITIONAL_JUMP)
// 004fedc7: TEST EBX,EBX
// 004fedc9: JZ 0x004feddf
//   XREF to: 004feddf (CONDITIONAL_JUMP)
// 004fedcb: MOV EAX,EBX
// 004fedcd: PUSH 0x3dcccccd
// 004fedd2: PUSH EAX
// 004fedd3: MOV EBX,dword ptr [EBX + 0x154]
// 004fedd9: CALL dword ptr [EBX + 0x4]
// 004feddc: ADD ESP,0x8
// 004feddf: PUSH 0x3e7
//   Label: LAB_004feddf
// 004fede4: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 004fede8: PUSH ESI
// 004fede9: MOV dword ptr [ESI + 0x330],EAX
// 004fedef: CALL core_inv.cpp_CInventory_updateSelectedWeaponAmmoDisplay_FUN_004ffe10
//   XREF to: 004ffe10 (UNCONDITIONAL_CALL)
// 004fedf4: ADD ESP,0x8
// 004fedf7: ADD ESP,0x4
// 004fedfa: POP EBP
// 004fedfb: POP EDI
// 004fedfc: POP ESI
// 004fedfd: POP EBX
// 004fedfe: RET
