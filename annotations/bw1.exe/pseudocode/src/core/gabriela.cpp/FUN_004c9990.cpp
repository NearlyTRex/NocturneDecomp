// Name: core_gabriela.cpp_FUN_004c9990
// Address: 004c9990
// Address Range: [[004c9990, 004c99d0]]
// Convention: __cdecl
// Signature: void __cdecl core_gabriela_cpp_FUN_004c9990(CGabriella *this_ptr)

#include "nocturne.h"

void __cdecl core_gabriela_cpp_FUN_004c9990(CGabriella *this_ptr)

{
  CAmmoBox *this_ptr_00;
  
  if (*(int *)&this_ptr->field_0x1ff78 == 0) {
    return;
  }
  this_ptr_00 = (CAmmoBox *)
                core_actor_cpp_castToClassHash_FUN_0040c600
                          (*(int *)&this_ptr->field_0x1ff78,g_CAmmoBoxClassInfo.name_hash);
  if (this_ptr_00 != (CAmmoBox *)0x0) {
    core_ammobox_cpp_FUN_0040e210(this_ptr_00,(CInventory *)&this_ptr->field_0x1fae8);
  }
  *(uint *)&this_ptr->field_0x1ff78 = 0;
  return;
}
