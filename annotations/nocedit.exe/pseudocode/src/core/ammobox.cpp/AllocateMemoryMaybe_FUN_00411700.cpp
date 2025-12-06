// Name: core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700
// Address: 00411700
// Address Range: [[00411700, 00411813]]
// Convention: unknown
// Signature: undefined core_ammobox.cpp_AllocateMemoryMaybe_FUN_00411700()

#include "nocturne.h"

/* Signature: byte actors_other_ammobox.cpp_AllocateMemoryMaybe(CAmmoBox* param_1, uint
   param_2) */

void core_ammobox_cpp_AllocateMemoryMaybe_FUN_00411700(void)

{
  char cVar1;
  CAmmo *this_ptr;
  char *pcVar2;
  CAmmo *pCVar3;
  int in_stack_00000004;
  CInventory *in_stack_00000008;
  CInventory *in_stack_0000002c;
  
  if (*(CDemonActor **)(in_stack_00000004 + 800) != (CDemonActor *)0x0) {
    core_inv_cpp_CInventory_addItem_FUN_004fd600
              (in_stack_00000008,*(CDemonActor **)(in_stack_00000004 + 800),1);
    *(uint *)(in_stack_00000004 + 800) = 0;
    *(uint *)(in_stack_00000004 + 0x314) = 0;
    return;
  }
  if (*(int *)(in_stack_00000004 + 0x314) == 0) {
    return;
  }
  this_ptr = (CAmmo *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0
                                (0x31c,"..\\core\\ammobox.cpp",0xa1);
  if (this_ptr != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_00410dc0(this_ptr);
  }
  if (this_ptr == (CAmmo *)0x0) {
    g_CurrentFilename = "..\\core\\ammobox.cpp";
    g_CurrentLineNumber = 0xa2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  core_ammo_cpp_CAmmo_FUN_004111b0();
  this_ptr->ammo_type = *(int *)(in_stack_00000004 + 0x318);
  (*((this_ptr->base_actor).vtable)->setup)(&this_ptr->base_actor);
  core_ammo_cpp_CAmmo_FUN_00410fd0();
  pcVar2 = "Some_ammo";
  pCVar3 = this_ptr;
  do {
    cVar1 = *pcVar2;
    (pCVar3->base_actor).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    (pCVar3->base_actor).actor_name[1] = cVar1;
    pCVar3 = (CAmmo *)((pCVar3->base_actor).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_CInventory_addItem_FUN_004fd600(in_stack_0000002c,&this_ptr->base_actor,1);
  *(uint *)(in_stack_00000004 + 0x314) = 0;
  return;
}
