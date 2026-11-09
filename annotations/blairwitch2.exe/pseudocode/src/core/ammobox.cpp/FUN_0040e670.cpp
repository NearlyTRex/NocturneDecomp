// Name: core_ammobox.cpp_FUN_0040e670
// Address: 0040e670
// Address Range: [[0040e670, 0040e77e]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_FUN_0040e670(CAmmoBox *this_ptr,CInventory *inventory)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_ammobox_cpp_FUN_0040e670(CAmmoBox *this_ptr,CInventory *inventory)

{
  char cVar1;
  CAmmo *pCVar2;
  CAmmo *this_ptr_00;
  char *pcVar3;
  
  if (*(int *)&this_ptr->field_0x47c != 0) {
    core_inv_cpp_FUN_004dadb0(inventory,*(int *)&this_ptr->field_0x47c,1,0);
    *(uint *)&this_ptr->field_0x47c = 0;
    *(uint *)&this_ptr->field_0x470 = 0;
    return;
  }
  if (*(int *)&this_ptr->field_0x470 == 0) {
    return;
  }
  pCVar2 = (CAmmo *)FUN_005b8be2(0x47c);
  this_ptr_00 = (CAmmo *)0x0;
  if (pCVar2 != (CAmmo *)0x0) {
    this_ptr_00 = core_ammo_cpp_CAmmo_ctor_FUN_0040ddb0(pCVar2);
  }
  if (this_ptr_00 == (CAmmo *)0x0) {
    _DAT_01d046a0 = "..\\core\\ammobox.cpp";
    _DAT_01d046a4 = 0xa2;
    core_main_c_FUN_004e4500("Out of memory");
  }
  core_ammo_cpp_FUN_0040e240(this_ptr_00,&this_ptr->field_0x430);
  core_ammo_cpp_FUN_0040e440(this_ptr_00,*(int *)&this_ptr->field_0x470);
  *(uint *)&this_ptr_00->field_0x474 = *(uint *)&this_ptr->field_0x474;
  (**(code **)(*(int *)&this_ptr_00->field_0x2b0 + 8))(this_ptr_00);
  core_ammo_cpp_FUN_0040e240(this_ptr_00,&this_ptr->field_0x430);
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
  core_inv_cpp_FUN_004dadb0(inventory,this_ptr_00,1,0);
  *(uint *)&this_ptr->field_0x470 = 0;
  return;
}
