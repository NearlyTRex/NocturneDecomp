// Name: core_inv.cpp_FUN_004f8b70
// Address: 004f8b70
// Address Range: [[004f8b70, 004f8c33]]
// Convention: unknown
// Signature: void core_inv_cpp_FUN_004f8b70(CInventory *param_1,CDemonActor *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_inv_cpp_FUN_004f8b70(CInventory *param_1,CDemonActor *param_2)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr;
  char *pcVar3;
  
  if (*(int *)&param_2[4].field_0xc == -1) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_005c0f32(0x31c);
  this_ptr = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar2);
  }
  if (this_ptr == (CAmmo *)0x0) {
    _DAT_01d1d400 = "..\\core\\inv.cpp";
    _DAT_01d1d404 = 0x431;
    core_main_c_FUN_005030e0("Out of memory");
  }
  *(uint *)&this_ptr->field_0x314 = *(uint *)&param_2[4].field_0x8;
  *(uint *)&this_ptr->field_0x318 = *(uint *)&param_2[4].field_0xc;
  pcVar3 = core_actor_cpp_FUN_00408830(param_2);
  core_ammo_cpp_FUN_0040ddd0(this_ptr,pcVar3);
  (*(code *)**(uint **)&this_ptr->field_0x154)(this_ptr);
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar2->field_0x1 = cVar1;
    pCVar2 = (CAmmo *)&pCVar2->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004f7690(param_1,(CDemonActor *)this_ptr,0);
  return;
}
