// Name: core_ammobox.cpp_CAmmoBox_dtor_FUN_0040e980
// Address: 0040e980
// Address Range: [[0040e980, 0040e9cd]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040e980(CAmmoBox *this_ptr,uint flags)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040e980(CAmmoBox *this_ptr,uint flags)

{
  CAmmoBox *pCVar1;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CAmmoBoxTypeInfo);
    FUN_005b7fce(ptr);
    return this_ptr;
  }
  pCVar1 = (CAmmoBox *)core_actor_cpp_CDemonActor_dtor_FUN_00408930(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return pCVar1;
  }
  FUN_005b7fdc(pCVar1);
  return pCVar1;
}
