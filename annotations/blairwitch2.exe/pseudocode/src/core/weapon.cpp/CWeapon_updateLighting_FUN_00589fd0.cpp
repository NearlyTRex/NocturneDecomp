// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_00589fd0
// Address: 00589fd0
// Address Range: [[00589fd0, 0058a1ff]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_00589fd0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_00589fd0(CWeapon *this_ptr)

{
  CDemonActor *pCVar1;
  uint *puVar2;
  float unaff_EDI;
  byte bVar3;
  float afStackY_1060 [1007];
  CVector3f *pCVar4;
  float in_stack_ffffff64;
  float fStack_78;
  CVector3f CStack_74;
  float fStack_68;
  CVector3f CStack_64;
  float afStack_58 [2];
  CVector3f CStack_50;
  CVector3f CStack_44;
  CVector3f CStack_38;
  float fStack_2c;
  float afStack_28 [2];
  CVector3f CStack_20;
  
  bVar3 = 0;
  (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pCVar4 = &CStack_74;
  fStack_78 = CStack_64.z;
  *(float *)((int)&CStack_74 + (uint)bVar3 * -8) = afStack_58[(uint)bVar3 * -2];
  *(float *)((int)&CStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 4) =
       afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70(&this_ptr->base,pCVar4,&CStack_50);
  pCVar4 = &CStack_44;
  g_CDemonLightInstance.light_enabled_flag = 1;
  fStack_68 = CStack_50.x;
  *(uint *)((int)&CStack_64 + (uint)bVar3 * -8) =
       *(uint *)((int)&CStack_50 + (uint)bVar3 * -8 + 4);
  afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -2] =
       *(float *)((int)&CStack_50 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  g_CDemonLightInstance.volumetric_enabled = 1;
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x34);
  CStack_44.x = (this_ptr->base).orient.vec.x;
  *(uint *)((int)&CStack_44 + (uint)bVar3 * -8 + 4) = *puVar2;
  *(uint *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       puVar2[(uint)bVar3 * -2 + 1];
  CStack_44.x = CStack_44.x + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            ((CMatrix3x3f *)&stack0xffffff64,pCVar4);
  CStack_20.x = 0.0;
  CStack_20.y = 0.0;
  CStack_20.z = 1.0;
  core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00449530
            ((CMatrix3x3f *)&stack0xffffff64,&CStack_20,&CStack_38);
  fStack_2c = CStack_38.x;
  afStack_28[(uint)bVar3 * -2] = *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + 4);
  afStack_28[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1] =
       *(float *)((int)&CStack_38 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
  fStack_68 = fStack_68 + fStack_2c;
  CStack_64.x = CStack_64.x + afStack_28[0];
  CStack_64.y = CStack_64.y + afStack_28[1];
  if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x2c) {
    g_CDemonLightInstance.base.base.position.f.x = fStack_68;
    g_CDemonLightInstance.base.base.position.f.y = CStack_64.x;
    g_CDemonLightInstance.base.base.position.f.z = CStack_64.y;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00449280
            (&g_CDemonLightInstance.base.base.rotation_matrix,&CStack_44);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  pCVar1 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c8f0(pCVar1,(uint)in_stack_ffffff64);
  if ((pCVar1 != (CDemonActor *)0x0) && ((float)pCVar1[0xd6].process_disabled < 15.0f)) {
    unaff_EDI = (float)pCVar1[0xd6].process_disabled * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_0044d570(&g_CDemonLightInstance,unaff_EDI);
  if (g_CGamePtr->flashlight_active == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_00448810(&g_CDemonGlobe_02661f3c,&CStack_64);
  g_CDemonGlobe_02661f3c.intensity_multiplier = 0x8000;
  g_CDemonGlobe_02661f3c.intensity.bytes[0] = ' ';
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00448860(&g_CDemonGlobe_02661f3c,5.0);
  g_CDemonGlobe_02661f3c.corona_mode = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_005306b0(g_CDemonSetPtr,&g_CDemonGlobe_02661f3c);
  return;
}
