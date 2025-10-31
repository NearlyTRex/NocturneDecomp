// Name: core_inv.cpp_CInventory_initialize_FUN_004fd190
// Address: 004fd190
// Address Range: [[004fd190, 004fd214]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_initialize_FUN_004fd190(CInventory * this_ptr)
// Cross-references:
//   core_hero.cpp_CHero_FUN_004f2a30 (004f2a30) at 004f2a3d [UNCONDITIONAL_CALL]
//   core_inv.cpp_CInventory_load_FUN_004ff400 (004ff400) at 004ff422 [UNCONDITIONAL_CALL]
//   core_scat.cpp_FUN_00557150 (00557150) at 0055715e [UNCONDITIONAL_CALL]
//   core_script.cpp_CScript_step_FUN_0055a810 (0055a810) at 0055e340 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CAmmo_006303c4
//   float g_InventoryRandNormalizationFactor = 0.00003051851
//   double g_InventoryRandPiFactor = 3.14159265350000
//   double g_InventoryRandTwoFactor = 2
// Function calls:
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_inv.cpp_CInventory_clear_FUN_004fd0e0
//   crt_stdlib.c_rand_FUN_005feb5c

#include "nocturne.h"

void __cdecl core_inv_cpp_CInventory_initialize_FUN_004fd190(CInventory *this_ptr)

{
  int iVar1;
  CAmmo *this_ptr_00;
  CInventory *pCVar2;
  CDemonActor **ppCVar3;
  
  core_inv_cpp_CInventory_clear_FUN_004fd0e0(this_ptr);
  pCVar2 = this_ptr;
  do {
    iVar1 = crt_stdlib_c_rand_FUN_005feb5c();
    ppCVar3 = &pCVar2->owner;
    pCVar2->item_angles[0] =
         (float)iVar1 * g_InventoryRandNormalizationFactor * (float)g_InventoryRandPiFactor *
         (float)g_InventoryRandTwoFactor;
    pCVar2 = (CInventory *)ppCVar3;
  } while (ppCVar3 != this_ptr->items + 0x61);
  if (this_ptr->ammo_ptr != (CAmmo *)0x0) {
    return;
  }
  this_ptr_00 = (CAmmo *)core_actor_cpp_createActorByName_FUN_0040c430("CAmmo");
  this_ptr->ammo_ptr = this_ptr_00;
  (*((this_ptr_00->base_actor).metadata.vtable)->setup)((CDemonActor *)this_ptr_00);
  this_ptr->cached_ammo_count = 0;
  return;
}


// Assembly code:
// 004fd190: PUSH EBX
//   Label: core_inv.cpp_CInventory_initialize_FUN_004fd190
// 004fd191: PUSH ESI
// 004fd192: PUSH EDI
// 004fd193: SUB ESP,0x4
// 004fd196: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004fd19a: PUSH EDI
// 004fd19b: CALL core_inv.cpp_CInventory_clear_FUN_004fd0e0
//   XREF to: 004fd0e0 (UNCONDITIONAL_CALL)
// 004fd1a0: MOV EBX,EDI
// 004fd1a2: ADD ESP,0x4
// 004fd1a5: LEA ESI,[EDI + 0x190]
// 004fd1ab: CALL crt_stdlib.c_rand_FUN_005feb5c
//   Label: LAB_004fd1ab
//   XREF to: 005feb5c (UNCONDITIONAL_CALL)
// 004fd1b0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x10] (DATA)
// 004fd1b3: FILD dword ptr [ESP]
//   XREF to: Stack[-0x10] (DATA)
// 004fd1b6: FMUL float ptr [0x006303ca]
//   XREF to: 006303ca (READ)
// 004fd1bc: FMUL double ptr [0x006303d2]
//   XREF to: 006303d2 (READ)
// 004fd1c2: FMUL double ptr [0x006303da]
//   XREF to: 006303da (READ)
// 004fd1c8: ADD EBX,0x4
// 004fd1cb: FSTP float ptr [EBX + 0x198]
// 004fd1d1: CMP EBX,ESI
// 004fd1d3: JNZ 0x004fd1ab
//   XREF to: 004fd1ab (CONDITIONAL_JUMP)
// 004fd1d5: CMP dword ptr [EDI + 0x458],0x0
// 004fd1dc: JZ 0x004fd1e5
//   XREF to: 004fd1e5 (CONDITIONAL_JUMP)
// 004fd1de: ADD ESP,0x4
// 004fd1e1: POP EDI
// 004fd1e2: POP ESI
// 004fd1e3: POP EBX
// 004fd1e4: RET
// 004fd1e5: PUSH 0x6303c4
//   Label: LAB_004fd1e5
//   XREF to: 006303c4 (DATA)
// 004fd1ea: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004fd1ef: ADD ESP,0x4
// 004fd1f2: MOV dword ptr [EDI + 0x458],EAX
// 004fd1f8: PUSH EAX
// 004fd1f9: MOV EBX,dword ptr [EAX + 0x154]
// 004fd1ff: CALL dword ptr [EBX]
// 004fd201: ADD ESP,0x4
// 004fd204: MOV dword ptr [EDI + 0x45c],0x0
// 004fd20e: ADD ESP,0x4
// 004fd211: POP EDI
// 004fd212: POP ESI
// 004fd213: POP EBX
// 004fd214: RET
