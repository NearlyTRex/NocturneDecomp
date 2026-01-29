// Name: core_ammobox.cpp_CAmmoBox_dtor_FUN_00411c20
// Address: 00411c20
// Address Range: [[00411c20, 00411c6d]]
// Convention: __cdecl
// Signature: CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox *this_ptr,uint d1,uint d2)

#include "nocturne.h"

CAmmoBox * __cdecl core_ammobox_cpp_CAmmoBox_dtor_FUN_00411c20(CAmmoBox *this_ptr,uint d1,uint d2)

{
  CAmmoBox *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CAmmoBoxTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  ptr = (CAmmoBox *)core_actor_cpp_CDemonActor_dtor_FUN_00408a30(&this_ptr->base,1);
  if ((d1 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
