// Name: core_weapon.cpp_CWeapon_process_FUN_005ee110
// Address: 005ee110
// Address Range: [[005ee110, 005ee24a]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_process_FUN_005ee110(CWeapon * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_process_FUN_005ee110(CWeapon *this_ptr,float delta_time)

{
  COrientation *pCVar1;
  int iVar2;
  float fVar3;
  float unaff_EBX;
  CVector3f *unaff_ESI;
  
  if ((0.0 < *(float *)(this_ptr->field7_0x2f4 + 0xc)) &&
     (fVar3 = *(float *)(this_ptr->field7_0x2f4 + 0xc) - delta_time,
     *(float *)(this_ptr->field7_0x2f4 + 0xc) = fVar3, fVar3 < 0.0)) {
    this_ptr->field7_0x2f4[0xc] = '\0';
    this_ptr->field7_0x2f4[0xd] = '\0';
    this_ptr->field7_0x2f4[0xe] = '\0';
    this_ptr->field7_0x2f4[0xf] = '\0';
  }
  iVar2._0_1_ = this_ptr->carried_by_actor;
  iVar2._1_1_ = this_ptr->field9_0x305[0];
  iVar2._2_1_ = this_ptr->field9_0x305[1];
  iVar2._3_1_ = this_ptr->field9_0x305[2];
  if (((iVar2 == 0) && (this_ptr->weapon_state == 0)) && (0.0 < this_ptr->sim_timer)) {
    fVar3 = this_ptr->sim_timer - delta_time;
    this_ptr->sim_timer = fVar3;
    if (fVar3 < 0.0) {
      this_ptr->sim_timer = 0.0;
    }
    core_box_cpp_CBox_process_FUN_0041e2f0((CBox *)(this_ptr->field9_0x305 + 3),delta_time);
    (this_ptr->base_actor).location.position.x =
         (((CBox *)(this_ptr->field9_0x305 + 3))->position).x;
    (this_ptr->base_actor).location.position.y = *(float *)(this_ptr->field9_0x305 + 7);
    (this_ptr->base_actor).location.position.z = *(float *)(this_ptr->field9_0x305 + 0xb);
    pCVar1 = &(this_ptr->base_actor).orient;
    if (pCVar1 != (COrientation *)(this_ptr->field9_0x305 + 0xf)) {
      pCVar1->pitch = *(float *)(this_ptr->field9_0x305 + 0xf);
      (this_ptr->base_actor).orient.bank = *(float *)(this_ptr->field9_0x305 + 0x13);
      (this_ptr->base_actor).orient.heading = *(float *)(this_ptr->field9_0x305 + 0x17);
    }
  }
  core_actor_cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(&this_ptr->base_actor);
  if (((*(CHero **)&this_ptr->carried_by_actor == g_HeroActors[g_LocalHeroIndex]) &&
      (g_CGamePtr->auto_save_blocked != 0)) && (this_ptr->can_attach_light != 0)) {
    (*(this_ptr->base_actor).vtable[1].processFootstepAtOffset)
              (&this_ptr->base_actor,unaff_ESI,unaff_EBX);
    if (0.0 < g_CDemonLightInstance.volumetric_intensity) {
      core_set_cpp_CDemonSet_SomethingDynamicLights_FUN_0056d090(g_CDemonSetPtr);
      return;
    }
  }
  return;
}
