// Name: core_scat.cpp_FUN_00557150
// Address: 00557150
// Address Range: [[00557150, 005571b4]]
// Convention: unknown
// Signature: undefined core_scat.cpp_FUN_00557150()
// Cross-references:
//   core_scat.cpp_CScat_ctor_FUN_00556ed0 (00556ed0) at 00556f27 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CBaronWeapon_00641357
//   TerminatedCString s_BaronProxy_00641364
//   undefined4 s_aronProxy_00641365
//   undefined4 s_ronProxy_00641366
//   undefined4 s_onProxy_00641367
// Function calls:
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_inv.cpp_CInventory_initialize_FUN_004fd190
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_scat.cpp_FUN_00557150(undefined4 param_1) */

void core_scat_cpp_FUN_00557150(void)

{
  char cVar1;
  CDemonActor *item_actor;
  CInventory *this_ptr;
  char *pcVar2;
  CDemonActor *pCVar3;
  int in_stack_00000004;
  
  this_ptr = (CInventory *)(in_stack_00000004 + 0x1f738);
  core_inv_cpp_CInventory_initialize_FUN_004fd190(this_ptr);
  pcVar2 = "BaronProxy";
  item_actor = core_actor_cpp_createActorByName_FUN_0040c430("CBaronWeapon");
  pCVar3 = item_actor;
  do {
    cVar1 = *pcVar2;
    pCVar3->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pCVar3->actor_name[1] = cVar1;
    pCVar3 = (CDemonActor *)(pCVar3->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(this_ptr,item_actor,1);
  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10(this_ptr,(CDemonActor *)0x0,5,1);
  return;
}


// Assembly code:
// 00557150: PUSH EBX
//   Label: core_scat.cpp_FUN_00557150
// 00557151: PUSH ESI
// 00557152: PUSH EDI
// 00557153: MOV EBX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00557157: ADD EBX,0x1f738
// 0055715d: PUSH EBX
// 0055715e: CALL core_inv.cpp_CInventory_initialize_FUN_004fd190
//   XREF to: 004fd190 (UNCONDITIONAL_CALL)
// 00557163: ADD ESP,0x4
// 00557166: PUSH 0x641357
//   XREF to: 00641357 (DATA)
// 0055716b: MOV ESI,0x641364
//   XREF to: 00641364 (DATA)
// 00557170: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 00557175: ADD ESP,0x4
// 00557178: MOV EDI,EAX
// 0055717a: MOV EDX,EAX
// 0055717c: PUSH EDI
// 0055717d: MOV AL,byte ptr [ESI]
//   Label: LAB_0055717d
//   XREF to: 00641364 (READ)
//   XREF to: 00641366 (READ)
// 0055717f: MOV byte ptr [EDI],AL
// 00557181: CMP AL,0x0
// 00557183: JZ 0x00557195
//   XREF to: 00557195 (CONDITIONAL_JUMP)
// 00557185: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00641365 (READ)
//   XREF to: 00641367 (READ)
// 00557188: ADD ESI,0x2
// 0055718b: MOV byte ptr [EDI + 0x1],AL
// 0055718e: ADD EDI,0x2
// 00557191: CMP AL,0x0
// 00557193: JNZ 0x0055717d
//   XREF to: 0055717d (CONDITIONAL_JUMP)
// 00557195: POP EDI
//   Label: LAB_00557195
// 00557196: PUSH 0x1
// 00557198: PUSH EDX
// 00557199: PUSH EBX
// 0055719a: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 0055719f: ADD ESP,0xc
// 005571a2: PUSH 0x1
// 005571a4: PUSH 0x5
// 005571a6: PUSH 0x0
// 005571a8: PUSH EBX
// 005571a9: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 005571ae: ADD ESP,0x10
// 005571b1: POP EDI
// 005571b2: POP ESI
// 005571b3: POP EBX
// 005571b4: RET
