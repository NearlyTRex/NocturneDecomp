// Name: core_weapon.cpp_CWeapon_process_FUN_005ee110
// Address: 005ee110
// Address Range: [[005ee110, 005ee24a]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  CVector3f *pCVar2;
  float fVar3;
  
  if ((0.0 < this_ptr->fire_cooldown_timer) &&
     (fVar3 = this_ptr->fire_cooldown_timer - delta_time, this_ptr->fire_cooldown_timer = fVar3,
     fVar3 < 0.0)) {
    this_ptr->fire_cooldown_timer = 0.0;
  }
  if (((this_ptr->carried_by_actor == (CDemonActor *)0x0) && (this_ptr->weapon_state == 0)) &&
     (0.0 < this_ptr->sim_timer)) {
    fVar3 = this_ptr->sim_timer - delta_time;
    this_ptr->sim_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_0041e2f0(&this_ptr->physics_box,delta_time);
    (this_ptr->base).location.position.x = (this_ptr->physics_box).position.x;
    (this_ptr->base).location.position.y = (this_ptr->physics_box).position.y;
    (this_ptr->base).location.position.z = (this_ptr->physics_box).position.z;
    pUVar1 = &(this_ptr->base).orient;
    pCVar2 = &(this_ptr->physics_box).orientation;
    if ((CVector3f *)pUVar1 != pCVar2) {
      (pUVar1->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = (this_ptr->physics_box).orientation.y;
      (this_ptr->base).orient.vec.z = (this_ptr->physics_box).orientation.z;
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  if ((((CHero *)this_ptr->carried_by_actor == g_HeroActors[g_LocalHeroIndex]) &&
      (g_CGamePtr->flashlight_active != 0)) && (this_ptr->can_attach_light != 0)) {
    (*(((this_ptr->base).vtable._uw)->_uw).updateLighting)(this_ptr);
    if (0.0 < g_CDemonLightInstance.volumetric_intensity) {
      core_set_cpp_CDemonSet_addDynamicLight_FUN_0056d090(g_CDemonSetPtr,&g_CDemonLightInstance);
      return;
    }
  }
  return;
}
