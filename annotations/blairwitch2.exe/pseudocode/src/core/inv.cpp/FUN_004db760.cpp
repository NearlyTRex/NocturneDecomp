// Name: core_inv.cpp_FUN_004db760
// Address: 004db760
// Address Range: [[004db760, 004db826]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004db760(undefined4 param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004db760(uint param_1,int param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr;
  char *pcVar3;
  
  if (*(int *)(param_2 + 0x6c8) == -1) {
    return;
  }
  pCVar2 = (CAmmo *)debugAllocTracked1(0x47c);
  this_ptr = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar2);
  }
  if (this_ptr == (CAmmo *)0x0) {
    _DAT_01d046a0 = "..\\core\\inv.cpp";
    _DAT_01d046a4 = 0x3b9;
    core_main_c_FUN_004e4500("Out of memory");
  }
  this_ptr->ammo_count = *(int *)(param_2 + 0x6c4);
  *(uint *)&this_ptr->field_0x474 = *(uint *)(param_2 + 0x6c8);
  pcVar3 = (char *)core_actor_cpp_FUN_00408a50(param_2);
  core_ammo_cpp_CAmmo_setWeaponClass_FUN_0040e240(this_ptr,pcVar3);
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
  core_inv_cpp_FUN_004dadb0(param_1,this_ptr,0,0);
  return;
}
