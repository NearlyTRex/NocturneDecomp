// Name: core_weapon.cpp_CWeapon_dtor_FUN_005edf80
// Address: 005edf80
// Address Range: [[005edf80, 005edfee]]
// Convention: __cdecl
// Signature: CWeapon * core_weapon.cpp_CWeapon_dtor_FUN_005edf80(CWeapon * this_ptr, uint d1, uint d2, uint d3)

#include "nocturne.h"

CWeapon * __cdecl
core_weapon_cpp_CWeapon_dtor_FUN_005edf80(CWeapon *this_ptr,uint d1,uint d2,uint d3)

{
  CBox *pCVar1;
  CWeapon *ptr;
  void *ptr_00;
  
  if ((d1 & 4) != 0) {
    ptr_00 = crt_memory_c_freeSingleInstance_FUN_005fe632(this_ptr,&g_CWeaponTypeInfo);
    crt_memory_c_free_FUN_005fe659(ptr_00);
    return this_ptr;
  }
  (this_ptr->base_actor).vtable = &g_CWeaponVTable;
  pCVar1 = core_box_cpp_CBox_dtor_FUN_0041dd00((CBox *)(this_ptr->field9_0x305 + 3));
  ptr = (CWeapon *)
        core_actor_cpp_CDemonActor_dtor_FUN_00408a30
                  ((CDemonActor *)&pCVar1[-2].scrape_points[4].raytrace_intersection,1);
  if ((d3 & 2) == 0) {
    return ptr;
  }
  shape_memdbg_cpp_debugFree_FUN_0050f210(ptr);
  return ptr;
}
