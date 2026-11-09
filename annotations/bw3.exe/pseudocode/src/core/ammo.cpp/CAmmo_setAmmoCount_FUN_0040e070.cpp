// Name: core_ammo.cpp_CAmmo_setAmmoCount_FUN_0040e070
// Address: 0040e070
// Address Range: [[0040e070, 0040e07e]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040e070(CAmmo *this_ptr,int ammo_count)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmo_setAmmoCount_FUN_0040e070(CAmmo *this_ptr,int ammo_count)

{
  *(int *)&this_ptr->field_0x314 = ammo_count;
  return;
}
