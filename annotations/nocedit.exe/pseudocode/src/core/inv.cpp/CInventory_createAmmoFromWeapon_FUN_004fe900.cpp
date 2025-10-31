// Name: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
// Address: 004fe900
// Address Range: [[004fe900, 004fe9cd]]
// Convention: __cdecl
// Signature: void core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory * this_ptr, CWeapon * weapon)
// Globals:
//   undefined4 s_..\core\inv.cpp_006307ea
//   TerminatedCString s_core_inv_cpp_006307fa
//   TerminatedCString s_Out_of_memory_0063080a
//   TerminatedCString s_Some_ammo_00630818
//   undefined4 s_ome_ammo_00630819
//   undefined4 s_me_ammo_0063081a
//   undefined4 s_e_ammo_0063081b
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   core_ammo.cpp_CAmmo_FUN_00410fd0
//   core_inv.cpp_CInventory_addItem_FUN_004fd600
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1b0

#include "nocturne.h"

void __cdecl
core_inv_cpp_CInventory_createAmmoFromWeapon_FUN_004fe900(CInventory *this_ptr,CWeapon *weapon)

{
  char cVar1;
  CAmmo *this_ptr_00;
  char *pcVar2;
  CAmmo *pCVar3;
  CInventory *in_stack_00000024;
  
  if (weapon->ammo_type == -1) {
    return;
  }
  this_ptr_00 = (CAmmo *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                   (0x31c,"?..\\core\\inv.cpp" + 1,0x2fc);
  if (this_ptr_00 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(this_ptr_00);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\inv.cpp";
    g_CurrentLineNumber = 0x2fd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  this_ptr_00->ammo_count = weapon->ammo_count;
  this_ptr_00->ammo_type = weapon->ammo_type;
  core_actor_cpp_CDemonActor_getActorClassName_FUN_00408b90(&weapon->base_actor);
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  (*((this_ptr_00->base_actor).metadata.vtable)->setup)(&this_ptr_00->base_actor);
  pcVar2 = "Some_ammo";
  pCVar3 = this_ptr_00;
  do {
    cVar1 = *pcVar2;
    (pCVar3->base_actor).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    (pCVar3->base_actor).actor_name[1] = cVar1;
    pCVar3 = (CAmmo *)((pCVar3->base_actor).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(in_stack_00000024,&this_ptr_00->base_actor,0);
  return;
}


// Assembly code:
// 004fe900: PUSH ESI
//   Label: core_inv.cpp_CInventory_createAmmoFromWeapon_FUN_004fe900
// 004fe901: PUSH EBP
// 004fe902: MOV ESI,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x8] (READ)
// 004fe906: CMP dword ptr [ESI + 0x56c],-0x1
// 004fe90d: JNZ 0x004fe912
//   XREF to: 004fe912 (CONDITIONAL_JUMP)
// 004fe90f: POP EBP
// 004fe910: POP ESI
// 004fe911: RET
// 004fe912: PUSH 0x2fc
//   Label: LAB_004fe912
// 004fe917: PUSH 0x6307ea
//   XREF to: 006307ea (DATA)
// 004fe91c: PUSH 0x31c
// 004fe921: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0
//   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)
// 004fe926: ADD ESP,0xc
// 004fe929: TEST EAX,EAX
// 004fe92b: JZ 0x004fe936
//   XREF to: 004fe936 (CONDITIONAL_JUMP)
// 004fe92d: PUSH EAX
// 004fe92e: CALL core_ammo.cpp_CAmmo_ctor_FUN_00410dc0
//   XREF to: 00410dc0 (UNCONDITIONAL_CALL)
// 004fe933: ADD ESP,0x4
// 004fe936: PUSH EDI
//   Label: LAB_004fe936
// 004fe937: PUSH EBX
// 004fe938: MOV EBX,EAX
// 004fe93a: TEST EAX,EAX
// 004fe93c: JNZ 0x004fe961
//   XREF to: 004fe961 (CONDITIONAL_JUMP)
// 004fe93e: MOV ECX,0x6307fa
//   XREF to: 006307fa (DATA)
// 004fe943: MOV EDI,0x2fd
// 004fe948: PUSH 0x63080a
//   XREF to: 0063080a (DATA)
// 004fe94d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004fe953: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004fe959: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fe95e: ADD ESP,0x4
// 004fe961: MOV EAX,dword ptr [ESI + 0x568]
//   Label: LAB_004fe961
// 004fe967: MOV dword ptr [EBX + 0x314],EAX
// 004fe96d: MOV EAX,dword ptr [ESI + 0x56c]
// 004fe973: PUSH ESI
// 004fe974: MOV dword ptr [EBX + 0x318],EAX
// 004fe97a: CALL core_actor.cpp_CDemonActor_getActorClassName_FUN_00408b90
//   XREF to: 00408b90 (UNCONDITIONAL_CALL)
// 004fe97f: ADD ESP,0x4
// 004fe982: PUSH EAX
// 004fe983: PUSH EBX
// 004fe984: CALL core_ammo.cpp_CAmmo_FUN_00410fd0
//   XREF to: 00410fd0 (UNCONDITIONAL_CALL)
// 004fe989: ADD ESP,0x8
// 004fe98c: MOV EAX,dword ptr [EBX + 0x154]
// 004fe992: PUSH EBX
// 004fe993: CALL dword ptr [EAX]
// 004fe995: ADD ESP,0x4
// 004fe998: MOV EDI,EBX
// 004fe99a: MOV ESI,0x630818
//   XREF to: 00630818 (DATA)
// 004fe99f: PUSH EDI
// 004fe9a0: MOV AL,byte ptr [ESI]
//   Label: LAB_004fe9a0
//   XREF to: 00630818 (READ)
//   XREF to: 0063081a (READ)
// 004fe9a2: MOV byte ptr [EDI],AL
// 004fe9a4: CMP AL,0x0
// 004fe9a6: JZ 0x004fe9b8
//   XREF to: 004fe9b8 (CONDITIONAL_JUMP)
// 004fe9a8: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 00630819 (READ)
//   XREF to: 0063081b (READ)
// 004fe9ab: ADD ESI,0x2
// 004fe9ae: MOV byte ptr [EDI + 0x1],AL
// 004fe9b1: ADD EDI,0x2
// 004fe9b4: CMP AL,0x0
// 004fe9b6: JNZ 0x004fe9a0
//   XREF to: 004fe9a0 (CONDITIONAL_JUMP)
// 004fe9b8: POP EDI
//   Label: LAB_004fe9b8
// 004fe9b9: PUSH 0x0
// 004fe9bb: PUSH EBX
// 004fe9bc: MOV EBP,dword ptr [ESP + 0x1c]
// 004fe9c0: PUSH EBP
// 004fe9c1: CALL core_inv.cpp_CInventory_addItem_FUN_004fd600
//   XREF to: 004fd600 (UNCONDITIONAL_CALL)
// 004fe9c6: ADD ESP,0xc
// 004fe9c9: POP EBX
// 004fe9ca: POP EDI
// 004fe9cb: POP EBP
// 004fe9cc: POP ESI
// 004fe9cd: RET
