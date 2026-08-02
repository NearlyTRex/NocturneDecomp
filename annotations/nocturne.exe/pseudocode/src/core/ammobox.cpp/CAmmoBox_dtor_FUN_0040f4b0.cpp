// Name: core_ammobox.cpp_CAmmoBox_dtor_FUN_0040f4b0
// Address: 0040f4b0
// Address Range: [[0040f4b0, 0040f4fd]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040f4b0(CAmmoBox *this_ptr,uint flags)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040f4b0(CAmmoBox *this_ptr,uint flags)

{
  CAmmoBox *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAmmoBoxTypeInfo_00599650);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmoBox *)core_actor_cpp_CDemonActor_dtor_FUN_00409ea0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_00564494(pCVar1);
  return pCVar1;
}
