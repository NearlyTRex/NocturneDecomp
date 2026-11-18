// Name: core_lightpis.cpp_CLightPis_dtor_FUN_00502cc0
// Address: 00502cc0
// Address Range: [[00502cc0, 00502d0d]]
// Convention: __cdecl
// Signature: CLightPis * __cdecl core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0(CLightPis *this_ptr,uint flags)

#include "nocturne.h"

CLightPis * __cdecl core_lightpis_cpp_CLightPis_dtor_FUN_00502cc0(CLightPis *this_ptr,uint flags)

{
  CLightPis *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CLightPisTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  ptr = (CLightPis *)core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(&this_ptr->base,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
