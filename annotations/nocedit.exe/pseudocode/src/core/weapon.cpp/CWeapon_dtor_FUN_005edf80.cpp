// Name: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
// Address: 005edf80
// Address Range: [[005edf80, 005edfee]]
// Convention: __cdecl
// Signature: CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon *this_ptr,uint flags)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon *this_ptr,uint flags)

{
  CBox *pCVar1;
  CWeapon *ptr;
  void *ptr_00;
  
  if ((flags & 4) != 0) {
    ptr_00 = __vec_delete(this_ptr,&g_CWeaponTypeInfo);
    shape_memdbg_cpp_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base).vtable._ub = &g_CWeaponVTable;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00(&this_ptr->physics_box);
  ptr = (CWeapon *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].scrape_points[4].raytrace_intersection,1);
  if ((flags & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
