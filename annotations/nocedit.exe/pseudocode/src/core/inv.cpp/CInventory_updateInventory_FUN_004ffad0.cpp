// Name: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
// Address: 004ffad0
// Address Range: [[004ffad0, 004ffd9e]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_updateInventory_FUN_004ffad0(CInventory * this_ptr)
// Cross-references:
//   core_icepick.cpp_FUN_004f80b0 (004f80b0) at 004f82ff [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_005571f0 (005571f0) at 0055740f [UNCONDITIONAL_CALL]
//   core_stranger.cpp_CStranger_FUN_005bb960 (005bb960) at 005bc50e [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00630aaa = 100
//   undefined4 DAT_00660480
//   float FLOAT_00660484 = 120
//   CGame* g_CGamePtr = 02d81a9c
//   undefined4 g_CBatteryClassInfo.name_hash
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.block_auto_save
//   undefined4 g_CGameInstance.auto_save_blocked
//   undefined4 g_CGameInstance.delta_time_float
//   undefined4 g_CLightGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_updateInventory_FUN_004ffad0(CInventory *this_ptr)

{
  CWeapon *actor_ptr;
  float fVar1;
  float fVar2;
  CDemonActor *pCVar3;
  int iVar4;
  CInventory *pCVar5;
  float fStack_18;
  float fStack_14;
  
  actor_ptr = this_ptr->selected_weapon;
  if (actor_ptr != (CWeapon *)0x0) {
    if ((this_ptr->cached_ammo_count != actor_ptr->ammo_count) &&
       (pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (&actor_ptr->base_actor,g_CLightGunClassInfo.name_hash),
       pCVar3 == (CDemonActor *)0x0)) {
      core_inv_cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0(this_ptr,0);
    }
    this_ptr->cached_ammo_count = this_ptr->selected_weapon->ammo_count;
  }
  if ((g_CGamePtr->auto_save_blocked == 0) && (g_CGamePtr->block_auto_save == 0)) {
    fStack_18 = 1.0 / FLOAT_00660484;
    iVar4 = 0;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          fStack_18 = 1.0 / pCVar3[2].location.position.z + fStack_18;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar2 = (float)DOUBLE_00630aaa;
    fVar1 = g_CGamePtr->delta_time_float * fVar2 * fStack_18 + this_ptr->battery_charge;
    this_ptr->battery_charge = fVar1;
    if (fVar2 < fVar1) {
      this_ptr->battery_charge = 100.0;
    }
  }
  else {
    iVar4 = 0;
    fStack_14 = DAT_00660480;
    pCVar5 = this_ptr;
    if (0 < this_ptr->item_count) {
      do {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (pCVar5->items[0],g_CBatteryClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          fStack_14 = fStack_14 + (float)pCVar3[2].location.area_id;
        }
        iVar4 = iVar4 + 1;
        pCVar5 = (CInventory *)&pCVar5->owner;
      } while (iVar4 < this_ptr->item_count);
    }
    fVar1 = this_ptr->battery_charge -
            (g_CGamePtr->delta_time_float * (float)DOUBLE_00630aaa) / fStack_14;
    this_ptr->battery_charge = fVar1;
    if (fVar1 < 0.0) {
      this_ptr->battery_charge = 0.0;
    }
  }
  iVar4 = 0;
  pCVar5 = this_ptr;
  if (0 < this_ptr->item_count) {
    do {
      pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                         (pCVar5->items[0],g_CLightGunClassInfo.name_hash);
      if ((pCVar3 != (CDemonActor *)0x0) && (pCVar3[2].location.position.y != 2.8026e-45)) {
        (*((pCVar3->metadata).vtable)->process)(pCVar3);
      }
      iVar4 = iVar4 + 1;
      pCVar5 = (CInventory *)&pCVar5->owner;
    } while (iVar4 < this_ptr->item_count);
  }
  this_ptr->weapon_highlight_timer = this_ptr->weapon_highlight_timer - g_CGamePtr->delta_time_float
  ;
  if (this_ptr->weapon_highlight_timer <= 0.0) {
    this_ptr->weapon_highlight_timer = 0.0;
  }
  this_ptr->item_highlight_timer = this_ptr->item_highlight_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->item_highlight_timer <= 0.0) {
    this_ptr->item_highlight_timer = 0.0;
  }
  this_ptr->inventory_display_timer =
       this_ptr->inventory_display_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->inventory_display_timer <= 0.0) {
    this_ptr->inventory_display_timer = 0.0;
  }
  this_ptr->message_display_timer = this_ptr->message_display_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->message_display_timer <= 0.0) {
    this_ptr->message_text[0] = '\0';
    this_ptr->message_display_timer = 0.0;
  }
  this_ptr->ammo_detail_timer = this_ptr->ammo_detail_timer - g_CGamePtr->delta_time_float;
  if (this_ptr->ammo_detail_timer < 0.0) {
    this_ptr->ammo_detail_timer = 0.0;
    return;
  }
  return;
}


// Assembly code:
// 004ffad0: PUSH EBX
//   Label: core_inv.cpp_CInventory_updateInventory_FUN_004ffad0
// 004ffad1: PUSH ESI
// 004ffad2: PUSH EDI
// 004ffad3: PUSH EBP
// 004ffad4: MOV EBP,ESP
// 004ffad6: SUB ESP,0x10
// 004ffad9: AND ESP,0xfffffff8
// 004ffadc: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004ffadf: MOV EDX,dword ptr [EBX + 0x330]
// 004ffae5: TEST EDX,EDX
// 004ffae7: JZ 0x004ffb29
//   XREF to: 004ffb29 (CONDITIONAL_JUMP)
// 004ffae9: MOV EAX,EDX
// 004ffaeb: MOV ECX,dword ptr [EBX + 0x45c]
// 004ffaf1: CMP ECX,dword ptr [EDX + 0x568]
// 004ffaf7: JZ 0x004ffb17
//   XREF to: 004ffb17 (CONDITIONAL_JUMP)
// 004ffaf9: MOV ESI,dword ptr [0x02dd30f0]
//   XREF to: 02dd30f0 (READ)
// 004ffaff: PUSH ESI
// 004ffb00: PUSH EAX
// 004ffb01: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffb06: ADD ESP,0x8
// 004ffb09: TEST EAX,EAX
// 004ffb0b: JNZ 0x004ffb17
//   XREF to: 004ffb17 (CONDITIONAL_JUMP)
// 004ffb0d: PUSH EAX
// 004ffb0e: PUSH EBX
// 004ffb0f: CALL core_inv.cpp_CInventory_resetWeaponSwitchTimers_FUN_004fffa0
//   XREF to: 004fffa0 (UNCONDITIONAL_CALL)
// 004ffb14: ADD ESP,0x8
// 004ffb17: MOV EAX,dword ptr [EBX + 0x330]
//   Label: LAB_004ffb17
// 004ffb1d: MOV EAX,dword ptr [EAX + 0x568]
// 004ffb23: MOV dword ptr [EBX + 0x45c],EAX
// 004ffb29: MOV EAX,[0x0067b654]
//   Label: LAB_004ffb29
//   XREF to: 02d81a9c (PARAM)
//   XREF to: 0067b654 (READ)
// 004ffb2e: CMP dword ptr [EAX + 0x244],0x0
//   XREF to: 02d81ce0 (READ)
// 004ffb35: JZ 0x004ffcc1
//   XREF to: 004ffcc1 (CONDITIONAL_JUMP)
// 004ffb3b: MOV EAX,[0x00660480]
//   Label: LAB_004ffb3b
//   XREF to: 00660480 (READ)
// 004ffb40: MOV EDI,dword ptr [EBX + 0x8]
// 004ffb43: XOR ESI,ESI
// 004ffb45: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004ffb49: TEST EDI,EDI
// 004ffb4b: JLE 0x004ffb75
//   XREF to: 004ffb75 (CONDITIONAL_JUMP)
// 004ffb4d: MOV EDI,EBX
// 004ffb4f: MOV EDX,dword ptr [0x0082285c]
//   Label: LAB_004ffb4f
//   XREF to: 0082285c (READ)
// 004ffb55: PUSH EDX
// 004ffb56: MOV ECX,dword ptr [EDI + 0xc]
// 004ffb59: PUSH ECX
// 004ffb5a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffb5f: ADD ESP,0x8
// 004ffb62: TEST EAX,EAX
// 004ffb64: JNZ 0x004ffd38
//   XREF to: 004ffd38 (CONDITIONAL_JUMP)
// 004ffb6a: INC ESI
//   Label: LAB_004ffb6a
// 004ffb6b: MOV EAX,dword ptr [EBX + 0x8]
// 004ffb6e: ADD EDI,0x4
// 004ffb71: CMP ESI,EAX
// 004ffb73: JL 0x004ffb4f
//   XREF to: 004ffb4f (CONDITIONAL_JUMP)
// 004ffb75: MOV EAX,[0x0067b654]
//   Label: LAB_004ffb75
//   XREF to: 0067b654 (READ)
// 004ffb7a: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffb80: FMUL double ptr [0x00630aaa]
//   XREF to: 00630aaa (READ)
// 004ffb86: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004ffb8a: FSUBR float ptr [EBX]
// 004ffb8c: FST float ptr [EBX]
// 004ffb8e: FLDZ
// 004ffb90: FCOMPP
// 004ffb92: FNSTSW AX
// 004ffb94: SAHF
// 004ffb95: JBE 0x004ffb9d
//   XREF to: 004ffb9d (CONDITIONAL_JUMP)
// 004ffb97: MOV dword ptr [EBX],0x0
// 004ffb9d: MOV EDI,dword ptr [EBX + 0x8]
//   Label: LAB_004ffb9d
// 004ffba0: XOR ESI,ESI
// 004ffba2: TEST EDI,EDI
// 004ffba4: JLE 0x004ffbce
//   XREF to: 004ffbce (CONDITIONAL_JUMP)
// 004ffba6: MOV EDI,EBX
// 004ffba8: MOV EDX,dword ptr [0x02dd30f0]
//   Label: LAB_004ffba8
//   XREF to: 02dd30f0 (READ)
// 004ffbae: PUSH EDX
// 004ffbaf: MOV ECX,dword ptr [EDI + 0xc]
// 004ffbb2: PUSH ECX
// 004ffbb3: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffbb8: ADD ESP,0x8
// 004ffbbb: TEST EAX,EAX
// 004ffbbd: JNZ 0x004ffd5d
//   XREF to: 004ffd5d (CONDITIONAL_JUMP)
// 004ffbc3: INC ESI
//   Label: LAB_004ffbc3
// 004ffbc4: MOV EAX,dword ptr [EBX + 0x8]
// 004ffbc7: ADD EDI,0x4
// 004ffbca: CMP ESI,EAX
// 004ffbcc: JL 0x004ffba8
//   XREF to: 004ffba8 (CONDITIONAL_JUMP)
// 004ffbce: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ffbce
//   XREF to: 0067b654 (READ)
// 004ffbd4: LEA EAX,[EBX + 0x338]
// 004ffbda: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffbe0: FSUBR float ptr [EAX]
// 004ffbe2: FSTP float ptr [EAX]
// 004ffbe4: FLD float ptr [EBX + 0x338]
// 004ffbea: FLDZ
// 004ffbec: FCOMPP
// 004ffbee: FNSTSW AX
// 004ffbf0: SAHF
// 004ffbf1: JC 0x004ffbfd
//   XREF to: 004ffbfd (CONDITIONAL_JUMP)
// 004ffbf3: MOV dword ptr [EBX + 0x338],0x0
// 004ffbfd: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ffbfd
//   XREF to: 0067b654 (READ)
// 004ffc03: LEA EAX,[EBX + 0x33c]
// 004ffc09: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffc0f: FSUBR float ptr [EAX]
// 004ffc11: FSTP float ptr [EAX]
// 004ffc13: FLD float ptr [EBX + 0x33c]
// 004ffc19: FLDZ
// 004ffc1b: FCOMPP
// 004ffc1d: FNSTSW AX
// 004ffc1f: SAHF
// 004ffc20: JC 0x004ffc2c
//   XREF to: 004ffc2c (CONDITIONAL_JUMP)
// 004ffc22: MOV dword ptr [EBX + 0x33c],0x0
// 004ffc2c: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ffc2c
//   XREF to: 0067b654 (READ)
// 004ffc32: LEA EAX,[EBX + 0x340]
// 004ffc38: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffc3e: FSUBR float ptr [EAX]
// 004ffc40: FSTP float ptr [EAX]
// 004ffc42: FLD float ptr [EBX + 0x340]
// 004ffc48: FLDZ
// 004ffc4a: FCOMPP
// 004ffc4c: FNSTSW AX
// 004ffc4e: SAHF
// 004ffc4f: JC 0x004ffc5b
//   XREF to: 004ffc5b (CONDITIONAL_JUMP)
// 004ffc51: MOV dword ptr [EBX + 0x340],0x0
// 004ffc5b: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ffc5b
//   XREF to: 0067b654 (READ)
// 004ffc61: LEA EAX,[EBX + 0x344]
// 004ffc67: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffc6d: FSUBR float ptr [EAX]
// 004ffc6f: FSTP float ptr [EAX]
// 004ffc71: FLD float ptr [EBX + 0x344]
// 004ffc77: FLDZ
// 004ffc79: FCOMPP
// 004ffc7b: FNSTSW AX
// 004ffc7d: SAHF
// 004ffc7e: JC 0x004ffc91
//   XREF to: 004ffc91 (CONDITIONAL_JUMP)
// 004ffc80: MOV byte ptr [EBX + 0x34c],0x0
// 004ffc87: MOV dword ptr [EBX + 0x344],0x0
// 004ffc91: MOV EDX,dword ptr [0x0067b654]
//   Label: LAB_004ffc91
//   XREF to: 0067b654 (READ)
// 004ffc97: LEA EAX,[EBX + 0x348]
// 004ffc9d: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffca3: FSUBR float ptr [EAX]
// 004ffca5: FSTP float ptr [EAX]
// 004ffca7: FLD float ptr [EBX + 0x348]
// 004ffcad: FLDZ
// 004ffcaf: FCOMPP
// 004ffcb1: FNSTSW AX
// 004ffcb3: SAHF
// 004ffcb4: JA 0x004ffd8e
//   XREF to: 004ffd8e (CONDITIONAL_JUMP)
// 004ffcba: MOV ESP,EBP
// 004ffcbc: POP EBP
// 004ffcbd: POP EDI
// 004ffcbe: POP ESI
// 004ffcbf: POP EBX
// 004ffcc0: RET
// 004ffcc1: CMP dword ptr [EAX + 0x240],0x0
//   Label: LAB_004ffcc1
//   XREF to: 02d81cdc (READ)
// 004ffcc8: JNZ 0x004ffb3b
//   XREF to: 004ffb3b (CONDITIONAL_JUMP)
// 004ffcce: FLD float ptr [0x00660484]
//   XREF to: 00660484 (READ)
// 004ffcd4: FLD1
// 004ffcd6: FDIVRP
// 004ffcd8: MOV ECX,dword ptr [EBX + 0x8]
// 004ffcdb: XOR ESI,ESI
// 004ffcdd: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffce0: TEST ECX,ECX
// 004ffce2: JLE 0x004ffd08
//   XREF to: 004ffd08 (CONDITIONAL_JUMP)
// 004ffce4: MOV EDI,EBX
// 004ffce6: MOV EDX,dword ptr [0x0082285c]
//   Label: LAB_004ffce6
//   XREF to: 0082285c (READ)
// 004ffcec: PUSH EDX
// 004ffced: MOV ECX,dword ptr [EDI + 0xc]
// 004ffcf0: PUSH ECX
// 004ffcf1: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004ffcf6: ADD ESP,0x8
// 004ffcf9: TEST EAX,EAX
// 004ffcfb: JNZ 0x004ffd4b
//   XREF to: 004ffd4b (CONDITIONAL_JUMP)
// 004ffcfd: INC ESI
//   Label: LAB_004ffcfd
// 004ffcfe: MOV EAX,dword ptr [EBX + 0x8]
// 004ffd01: ADD EDI,0x4
// 004ffd04: CMP ESI,EAX
// 004ffd06: JL 0x004ffce6
//   XREF to: 004ffce6 (CONDITIONAL_JUMP)
// 004ffd08: MOV EAX,[0x0067b654]
//   Label: LAB_004ffd08
//   XREF to: 0067b654 (READ)
// 004ffd0d: FLD double ptr [0x00630aaa]
//   XREF to: 00630aaa (READ)
// 004ffd13: FLD float ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffd19: FMUL ST1
// 004ffd1b: FMUL float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffd1e: FADD float ptr [EBX]
// 004ffd20: FST float ptr [EBX]
// 004ffd22: FCOMPP
// 004ffd24: FNSTSW AX
// 004ffd26: SAHF
// 004ffd27: JBE 0x004ffb9d
//   XREF to: 004ffb9d (CONDITIONAL_JUMP)
// 004ffd2d: MOV dword ptr [EBX],0x42c80000
// 004ffd33: JMP 0x004ffb9d
//   XREF to: 004ffb9d (UNCONDITIONAL_JUMP)
// 004ffd38: FLD float ptr [ESP + 0x4]
//   Label: LAB_004ffd38
//   XREF to: Stack[-0x1c] (READ)
// 004ffd3c: FADD float ptr [EAX + 0x2dc]
// 004ffd42: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004ffd46: JMP 0x004ffb6a
//   XREF to: 004ffb6a (UNCONDITIONAL_JUMP)
// 004ffd4b: FLD float ptr [EAX + 0x2d8]
//   Label: LAB_004ffd4b
// 004ffd51: FLD1
// 004ffd53: FDIVRP
// 004ffd55: FADD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffd58: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004ffd5b: JMP 0x004ffcfd
//   XREF to: 004ffcfd (UNCONDITIONAL_JUMP)
// 004ffd5d: CMP dword ptr [EAX + 0x2d4],0x2
//   Label: LAB_004ffd5d
// 004ffd64: JZ 0x004ffbc3
//   XREF to: 004ffbc3 (CONDITIONAL_JUMP)
// 004ffd6a: MOV EDX,dword ptr [0x0067b654]
//   XREF to: 0067b654 (READ)
// 004ffd70: SUB ESP,0x4
// 004ffd73: MOV ECX,dword ptr [EAX + 0x154]
// 004ffd79: FLD float ptr [EDX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004ffd7f: FSTP float ptr [ESP]
//   XREF to: Stack[-0x24] (DATA)
// 004ffd82: PUSH EAX
// 004ffd83: CALL dword ptr [ECX + 0x4]
// 004ffd86: ADD ESP,0x8
// 004ffd89: JMP 0x004ffbc3
//   XREF to: 004ffbc3 (UNCONDITIONAL_JUMP)
// 004ffd8e: MOV dword ptr [EBX + 0x348],0x0
//   Label: LAB_004ffd8e
// 004ffd98: MOV ESP,EBP
// 004ffd9a: POP EBP
// 004ffd9b: POP EDI
// 004ffd9c: POP ESI
// 004ffd9d: POP EBX
// 004ffd9e: RET
