// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005ee4a0
// Address: 005ee4a0
// MANUAL RECONSTRUCTION
// Address Range: [[005ee4a0, 005ee630]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0(CWeapon *this_ptr)

{
  float fVar1;
  CVector3f *input_local_point;
  CDemonActor *actor_ptr;
  CHero *pCVar1;
  float local_e2;
  CVector3f muzzle_local;
  CVector3f CStack_2c;
  CVector3f local_20;

  input_local_point = (*(((this_ptr->base).vtable._uw)->_uw).getMuzzlePoint)(this_ptr,&muzzle_local);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,&local_20,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  if (&local_20 != (CVector3f *)&g_CDemonLightInstance.base.base.position) {
    g_CDemonLightInstance.base.base.position.f.x = local_20.x;
    g_CDemonLightInstance.base.base.position.f.y = local_20.y;
    g_CDemonLightInstance.base.base.position.f.z = local_20.z;
  }
  CStack_2c.y = (this_ptr->base).orient.vec.y;
  CStack_2c.z = (this_ptr->base).orient.vec.z;
  CStack_2c.x = (this_ptr->base).orient.vec.x + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&g_CDemonLightInstance.base.base.rotation_matrix,&CStack_2c);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  local_e2 = 1.0f;
  actor_ptr = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  pCVar1 = (CHero *)core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CHeroClassInfo.name_hash);
  if ((pCVar1 != (CHero *)0x0) &&
     (fVar1 = (pCVar1->inventory).battery_charge, fVar1 < 15.0f)) {
    local_e2 = fVar1 * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,local_e2);
  if (g_CGamePtr->auto_save_blocked == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310
            (&g_WeaponCoronaGlobe,&local_20);
  g_WeaponCoronaGlobe.intensity_multiplier = 0x8000;
  g_WeaponCoronaGlobe.intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(&g_WeaponCoronaGlobe,3.0);
  g_WeaponCoronaGlobe.corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(g_CDemonSetPtr,&g_WeaponCoronaGlobe);
  return;
}
