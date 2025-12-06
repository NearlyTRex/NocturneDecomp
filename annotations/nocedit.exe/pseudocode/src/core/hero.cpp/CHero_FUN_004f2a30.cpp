// Name: core_hero.cpp_CHero_FUN_004f2a30
// Address: 004f2a30
// Address Range: [[004f2a30, 004f2ae0]]
// Convention: __cdecl
// Signature: void core_hero.cpp_CHero_FUN_004f2a30(CHero * this_ptr)

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
