// Name: core_weapon.cpp_CWeapon_dtor_FUN_005ad5d0
// Address: 005ad5d0
// Address Range: [[005ad5d0, 005ad63e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005ad5d0(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWeaponTypeInfo);
    free(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CWeaponVTable._ub;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dab0(&this_ptr->physics_box,0);
  ptr = (CWeapon *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408730
                  ((CDemonActor *)&pCVar1[-2].scrape_points[4].raytrace_intersection,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  debugFreeChecked(ptr);
  return ptr;
}
