// Name: core_inv.cpp_FUN_004db8d0
// Address: 004db8d0
// Address Range: [[004db8d0, 004db980]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004db8d0(CInventory *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004db8d0(CInventory *param_1,int param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr;
  char *pcVar3;
  
  if (*(int *)(param_2 + 0x56c) == -1) {
    return;
  }
  pCVar2 = (CAmmo *)operator_new(800);
  this_ptr = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_0040de60(pCVar2);
  }
  if (this_ptr == (CAmmo *)0x0) {
    _DAT_01d71de0 = "..\\core\\inv.cpp";
    _DAT_01d71de4 = 0x498;
    core_main_c_FUN_004e4330("Out of memory");
  }
  this_ptr->ammo_count = *(int *)(param_2 + 0x568);
  this_ptr->ammo_type = *(EAmmoType *)(param_2 + 0x56c);
  (*((this_ptr->base).vtable._ub)->setup)(&this_ptr->base);
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr;
  do {
    cVar1 = *pcVar3;
    (pCVar2->base).actor_name[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    (pCVar2->base).actor_name[1] = cVar1;
    pCVar2 = (CAmmo *)((pCVar2->base).actor_name + 2);
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004da880(param_1,&this_ptr->base,0);
  return;
}
