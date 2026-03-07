// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005ee4a0
// Address: 005ee4a0
// Address Range: [[005ee4a0, 005ee630]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005ee4a0(CWeapon *this_ptr)

{
  CVector3f *input_local_point;
  CDemonActor *pCVar1;
  float unaff_EBP;
  CVector3f *unaff_ESI;
  char local_res0;
  uint in_stack_ffffffc8;
  CVector3f CStack_2c;
  CVector3f local_20;
  
  input_local_point = (*(((this_ptr->base).vtable._uw)->_uw).getMuzzlePoint)(this_ptr,unaff_ESI);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,&local_20,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.volumetric_enabled = 1;
  if ((float *)&local_res0 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].z) {
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
  pCVar1 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,in_stack_ffffffc8);
  if ((pCVar1 != (CDemonActor *)0x0) &&
     (*(float *)(pCVar1[0x176].create_event + 0x30) < 15.0f)) {
    unaff_EBP = *(float *)(pCVar1[0x176].create_event + 0x30) * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,unaff_EBP);
  if (g_CGamePtr->auto_save_blocked == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00471310
            (&CDemonGlobe_03f95d7c,(CVector3f *)&local_20.y);
  CDemonGlobe_03f95d7c.intensity_multiplier = 0x8000;
  CDemonGlobe_03f95d7c.intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360(&CDemonGlobe_03f95d7c,3.0);
  CDemonGlobe_03f95d7c.corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0056d110(g_CDemonSetPtr,&CDemonGlobe_03f95d7c);
  return;
}
