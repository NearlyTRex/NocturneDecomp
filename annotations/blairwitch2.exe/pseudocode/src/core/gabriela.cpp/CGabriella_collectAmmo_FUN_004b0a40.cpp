// Name: core_gabriela.cpp_CGabriella_collectAmmo_FUN_004b0a40
// Address: 004b0a40
// Address Range: [[004b0a40, 004b0a80]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_collectAmmo_FUN_004b0a40(CGabriella *this_ptr)

{
  CAmmoBox *this_ptr_00;
  
  if (*(int *)&this_ptr->field_0x25608 == 0) {
    return;
  }
  this_ptr_00 = (CAmmoBox *)
                core_actor_cpp_castToClassHash_FUN_0040c8f0
                          (*(int *)&this_ptr->field_0x25608,g_CAmmoBoxClassInfo.name_hash);
  if (this_ptr_00 != (CAmmoBox *)0x0) {
    core_ammobox_cpp_CAmmoBox_addToInventory_FUN_0040e670
              (this_ptr_00,(CInventory *)&this_ptr->field_0x2437c);
  }
  *(uint *)&this_ptr->field_0x25608 = 0;
  return;
}
