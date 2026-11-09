// Name: core_ammobox.cpp_FUN_0040e210
// Address: 0040e210
// Address Range: [[0040e210, 0040e319]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_FUN_0040e210(CAmmoBox *this_ptr,CInventory *inventory)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammobox_cpp_FUN_0040e210(CAmmoBox *this_ptr,CInventory *inventory)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (*(CDemonActor **)&this_ptr->field_0x320 != (CDemonActor *)0x0) {
    core_inv_cpp_FUN_004f7690(inventory,*(CDemonActor **)&this_ptr->field_0x320,1);
    *(uint *)&this_ptr->field_0x320 = 0;
    *(uint *)&this_ptr->field_0x314 = 0;
    return;
  }
  if (*(int *)&this_ptr->field_0x314 == 0) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_005c0f32(0x31c);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040dbc0(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    _DAT_01d1d400 = "..\\core\\ammobox.cpp";
    _DAT_01d1d404 = 0xa2;
    core_main_c_FUN_005030e0("Out of memory");
  }
  core_ammo_cpp_FUN_0040ddd0(this_ptr_00,&this_ptr->field_0x2d4);
  core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040dfd0(this_ptr_00,*(int *)&this_ptr->field_0x314);
  *(uint *)&this_ptr_00->field_0x318 = *(uint *)&this_ptr->field_0x318;
  (*(code *)**(uint **)&this_ptr_00->field_0x154)(this_ptr_00);
  core_ammo_cpp_FUN_0040ddd0(this_ptr_00,&this_ptr->field_0x2d4);
  pcVar3 = "Some_ammo";
  pCVar2 = this_ptr_00;
  do {
    cVar1 = *pcVar3;
    *(char *)pCVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pCVar2->field_0x1 = cVar1;
    pCVar2 = (CAmmo *)&pCVar2->field_0x2;
  } while (cVar1 != '\0');
  core_inv_cpp_FUN_004f7690(inventory,(CDemonActor *)this_ptr_00,1);
  *(uint *)&this_ptr->field_0x314 = 0;
  return;
}
