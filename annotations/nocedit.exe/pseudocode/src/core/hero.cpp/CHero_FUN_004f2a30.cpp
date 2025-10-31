// Name: core_hero.cpp_CHero_FUN_004f2a30
// Address: 004f2a30
// Address Range: [[004f2a30, 004f2ae0]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f2a30(CHero * this_ptr)
// Cross-references:
//   core_hero.cpp_FUN_004f2340 (004f2340) at 004f243e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CGun_0062ebd9
//   TerminatedCString s_core_hero_cpp_0062ebde
//   TerminatedCString s_Out_of_memory_0062ebef
//   TerminatedCString s_Your_weapon_0062ebfe
//   undefined4 s_our_weapon_0062ebff
//   undefined4 s_ur_weapon_0062ec00
//   undefined4 s_r_weapon_0062ec01
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 g_CWeaponClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_actor.cpp_createActorByName_FUN_0040c430
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_inv.cpp_CInventory_initialize_FUN_004fd190
//   core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

void __cdecl core_hero_cpp_CHero_FUN_004f2a30(CHero *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  uint unaff_ESI;
  char *pcVar3;
  CDemonActor *pCVar4;
  int in_stack_00000014;
  
  core_inv_cpp_CInventory_initialize_FUN_004fd190(&this_ptr->inventory);
  pCVar2 = core_actor_cpp_createActorByName_FUN_0040c430("CGun");
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar2,unaff_ESI);
  if (pCVar2 == (CDemonActor *)0x0) {
    g_CurrentFilename = "..\\core\\hero.cpp";
    g_CurrentLineNumber = 0x1b2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory!");
  }
  pcVar3 = "Your_weapon";
  pCVar4 = pCVar2;
  do {
    cVar1 = *pcVar3;
    pCVar4->actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar4->actor_name[1] = cVar1;
    pCVar4 = (CDemonActor *)(pCVar4->actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600((CInventory *)(in_stack_00000014 + 0x1f738),pCVar2,1)
  ;
  core_inv_cpp_CInventory_selectWeapon_FUN_004feb10
            ((CInventory *)(in_stack_00000014 + 0x1f738),(CDemonActor *)0x0,5,1);
  pCVar2[4].actor_name[8] = 'd';
  pCVar2[4].actor_name[9] = '\0';
  pCVar2[4].actor_name[10] = '\0';
  pCVar2[4].actor_name[0xb] = '\0';
  return;
}


// Assembly code:
// 004f2a30: PUSH EBX
//   Label: core_hero.cpp_CHero_FUN_004f2a30
// 004f2a31: PUSH ESI
// 004f2a32: PUSH EDI
// 004f2a33: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f2a37: ADD EAX,0x1f738
// 004f2a3c: PUSH EAX
// 004f2a3d: CALL core_inv.cpp_CInventory_initialize_FUN_004fd190
//   XREF to: 004fd190 (UNCONDITIONAL_CALL)
// 004f2a42: ADD ESP,0x4
// 004f2a45: MOV EDX,dword ptr [0x03f95d78]
//   XREF to: 03f95d78 (READ)
// 004f2a4b: PUSH EDX
// 004f2a4c: PUSH 0x62ebd9
//   XREF to: 0062ebd9 (DATA)
// 004f2a51: CALL core_actor.cpp_createActorByName_FUN_0040c430
//   XREF to: 0040c430 (UNCONDITIONAL_CALL)
// 004f2a56: ADD ESP,0x4
// 004f2a59: PUSH EAX
// 004f2a5a: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004f2a5f: ADD ESP,0x8
// 004f2a62: MOV EBX,EAX
// 004f2a64: TEST EAX,EAX
// 004f2a66: JZ 0x004f2abc
//   XREF to: 004f2abc (CONDITIONAL_JUMP)
// 004f2a68: MOV ESI,0x62ebfe
//   Label: LAB_004f2a68
//   XREF to: 0062ebfe (DATA)
// 004f2a6d: MOV EDI,EBX
// 004f2a6f: PUSH EDI
// 004f2a70: MOV AL,byte ptr [ESI]
//   Label: LAB_004f2a70
//   XREF to: 0062ebfe (READ)
//   XREF to: 0062ec00 (READ)
// 004f2a72: MOV byte ptr [EDI],AL
// 004f2a74: CMP AL,0x0
// 004f2a76: JZ 0x004f2a88
//   XREF to: 004f2a88 (CONDITIONAL_JUMP)
// 004f2a78: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062ebff (READ)
//   XREF to: 0062ec01 (READ)
// 004f2a7b: ADD ESI,0x2
// 004f2a7e: MOV byte ptr [EDI + 0x1],AL
// 004f2a81: ADD EDI,0x2
// 004f2a84: CMP AL,0x0
// 004f2a86: JNZ 0x004f2a70
//   XREF to: 004f2a70 (CONDITIONAL_JUMP)
// 004f2a88: POP EDI
//   Label: LAB_004f2a88
// 004f2a89: PUSH 0x1
// 004f2a8b: MOV ESI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004f2a8f: PUSH EBX
// 004f2a90: ADD ESI,0x1f738
// 004f2a96: PUSH ESI
// 004f2a97: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004f2a9c: ADD ESP,0xc
// 004f2a9f: PUSH 0x1
// 004f2aa1: PUSH 0x5
// 004f2aa3: PUSH 0x0
// 004f2aa5: PUSH ESI
// 004f2aa6: CALL core_inv.cpp_CInventory_selectWeapon_FUN_004feb10
//   XREF to: 004feb10 (UNCONDITIONAL_CALL)
// 004f2aab: ADD ESP,0x10
// 004f2aae: MOV dword ptr [EBX + 0x568],0x64
// 004f2ab8: POP EDI
// 004f2ab9: POP ESI
// 004f2aba: POP EBX
// 004f2abb: RET
// 004f2abc: MOV ECX,0x62ebde
//   Label: LAB_004f2abc
//   XREF to: 0062ebde (PARAM)
// 004f2ac1: MOV ESI,0x1b2
// 004f2ac6: PUSH 0x62ebef
//   XREF to: 0062ebef (DATA)
// 004f2acb: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004f2ad1: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004f2ad7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004f2adc: ADD ESP,0x4
// 004f2adf: JMP 0x004f2a68
//   XREF to: 004f2a68 (UNCONDITIONAL_JUMP)
