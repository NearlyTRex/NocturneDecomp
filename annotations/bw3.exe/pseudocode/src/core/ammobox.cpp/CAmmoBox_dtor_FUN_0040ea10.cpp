// Name: core_ammobox.cpp_CAmmoBox_dtor_FUN_0040ea10
// Address: 0040ea10
// Address Range: [[0040ea10, 0040ea5d]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040ea10(CAmmoBox *this_ptr,uint flags)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_0040ea10(CAmmoBox *this_ptr,uint flags)

{
  CAmmoBox *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoBoxTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmoBox *)core_actor_cpp_CDemonActor_dtor_FUN_00408770(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
