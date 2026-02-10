// Name: core_weapon.cpp_CWeapon_process_FUN_005ee110
// Address: 005ee110
// Address Range: [[005ee110, 005ee24a]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)

{
  UOrientationVector *pUVar1;
  float fVar2;
  
  if ((0.0 < *(float *)(this_ptr->unk2 + 0xc)) &&
     (fVar2 = *(float *)(this_ptr->unk2 + 0xc) - delta_time,
     *(float *)(this_ptr->unk2 + 0xc) = fVar2, fVar2 < 0.0)) {
    this_ptr->unk2[0xc] = '\0';
    this_ptr->unk2[0xd] = '\0';
    this_ptr->unk2[0xe] = '\0';
    this_ptr->unk2[0xf] = '\0';
  }
  if (((this_ptr->carried_by_actor == (CDemonActor *)0x0) && (this_ptr->weapon_state == 0)) &&
     (0.0 < this_ptr->sim_timer)) {
    fVar2 = this_ptr->sim_timer - delta_time;
    this_ptr->sim_timer = fVar2;
    if (fVar2 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)this_ptr->unk3,delta_time);
    (this_ptr->base).location.position.x = *(float *)this_ptr->unk3;
    (this_ptr->base).location.position.y = *(float *)(this_ptr->unk3 + 4);
    (this_ptr->base).location.position.z = *(float *)(this_ptr->unk3 + 8);
    pUVar1 = &(this_ptr->base).orient;
    if (pUVar1 != (UOrientationVector *)(this_ptr->unk3 + 0xc)) {
      (pUVar1->vec).x = *(float *)(this_ptr->unk3 + 0xc);
      (this_ptr->base).orient.vec.y = *(float *)(this_ptr->unk3 + 0x10);
      (this_ptr->base).orient.vec.z = *(float *)(this_ptr->unk3 + 0x14);
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base);
  if ((((CHero *)this_ptr->carried_by_actor == g_HeroActors[g_LocalHeroIndex]) &&
      (g_CGamePtr->auto_save_blocked != 0)) && (this_ptr->can_attach_light != 0)) {
    (*(((this_ptr->base).vtable._uc)->_uc).getGrabber)((CCharacter *)this_ptr);
    if (0.0 < g_CDemonLightInstance.volumetric_intensity) {
      core_set_cpp_CDemonSet_FUN_0056d090(g_CDemonSetPtr);
      return;
    }
  }
  return;
}
