// Name: core_weapon.cpp_CWeapon_ctor_FUN_005ede70
// Address: 005ede70
// Address Range: [[005ede70, 005edf7f]]
// Convention: __cdecl
// Signature: CWeapon * core_weapon.cpp_CWeapon_ctor_FUN_005ede70(CWeapon * this_ptr)

#include "nocturne.h"

CWeapon * __cdecl core_weapon_cpp_CWeapon_ctor_FUN_005ede70(CWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  CKeyFramedModelInstance *pCVar2;
  CBox *pCVar3;
  
  pCVar1 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base);
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_ctor_FUN_00478ce0
                     ((CKeyFramedModelInstance *)(pCVar1 + 1));
  pCVar3 = core_box_cpp_CBox_ctor_FUN_0041dc50((CBox *)(pCVar2[1].part_visibility_flags + 0xd));
  pCVar3[-1].extents.x = (float)&g_CWeaponVTable;
  pCVar3[1].position.y = 5.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.z = 0.0;
  pCVar3[-1].scrape_points[7].local_position.y = 0.0;
  pCVar3[-1].is_valid = 0;
  pCVar3[1].position.z = 2.8026e-44;
  pCVar3[1].orientation.x = 0.0;
  pCVar3[-1].linear_velocity_local.y = 1.4013e-45;
  pCVar3[-1].scrape_points[7].local_position.z = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.x = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.y = 0.0;
  pCVar3[-1].scrape_points[7].transformed_position.z = 0.0;
  pCVar3[-1].scrape_points[7].previous_position.x = 200.0;
  pCVar3[-1].scrape_points[7].previous_position.y = 0.0;
  pCVar3[-1].scrape_points[7].previous_position.z = 1.4013e-45;
  pCVar3[-1].scrape_points[7].raytrace_intersection = 3.57331e-43;
  pCVar3[-1].scrape_points[7].raytrace_normal.x = 0.0;
  pCVar3[-1].scrape_points[7].raytrace_normal.y = 0.0;
  core_dmodel_cpp_CKeyFramedModelInstance_setModelName_FUN_00478dd0
            ((CKeyFramedModelInstance *)&pCVar3[-1].extents.y,"gat.kfm");
  pCVar3[1].orientation.y = 0.0;
  pCVar3[1].orientation.z = 0.0;
  return (CWeapon *)&pCVar3[-2].scrape_points[4].raytrace_intersection;
}
