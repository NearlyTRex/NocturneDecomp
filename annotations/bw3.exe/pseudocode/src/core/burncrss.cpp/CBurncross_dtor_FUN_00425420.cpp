// Name: core_burncrss.cpp_CBurncross_dtor_FUN_00425420
// Address: 00425420
// Address Range: [[00425420, 00425484]]
// Convention: __cdecl
// Signature: CBurncross * __cdecl core_burncrss_cpp_CBurncross_dtor_FUN_00425420(CBurncross *this_ptr,uint flags)

#include "nocturne.h"

CBurncross * __cdecl core_burncrss_cpp_CBurncross_dtor_FUN_00425420(CBurncross *this_ptr,uint flags)

{
  CFlame *pCVar1;
  CBurncross *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CBurncrossTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  pCVar1 = core_burncrss_cpp_CFlame_arrdtor8_FUN_00425490(this_ptr->flames,0);
  ptr = (CBurncross *)
        core_weapon_cpp_CWeapon_dtor_FUN_0057aed0((CWeapon *)(pCVar1[-3].off_event + 0x28),1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
