// Name: core_weapon.cpp_CWeapon_dtor_FUN_00553ea0
// Address: 00553ea0
// Address Range: [[00553ea0, 00553f0e]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_00553ea0(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *pCVar2;
  void *ptr;
  
  if ((flags & 4) != 0) {
    ptr = __vec_delete(this_ptr,&g_CWeaponTypeInfo_005a4250);
    shape_memdbg_cpp_free_FUN_00564486(ptr);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CWeaponVTable._ub;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041a6c0(&this_ptr->physics_box,0);
  pCVar2 = (CWeapon *)
           core_actor_cpp_CDemonActor_dtor_FUN_00409ea0
                     ((CDemonActor *)&pCVar1[-2].scrape_points[4].raytrace_normal.y,1);
  if ((flags & 2) == 0) {
    return pCVar2;
  }
  FUN_00564494(pCVar2);
  return pCVar2;
}
