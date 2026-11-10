// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005adb20
// Address: 005adb20
// Address Range: [[005adb20, 005add4f]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005adb20(CWeapon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005adb20(CWeapon *this_ptr)

{
  int iVar1;
  uint *puVar2;
  float unaff_EDI;
  byte bVar3;
  float afStackY_1060 [1007];
  CVector3f *euler_angles;
  float fStack_78;
  float fStack_68;
  CVector3f CStack_64;
  float afStack_58 [5];
  CVector3f CStack_44;
  float fStack_38;
  float afStack_34 [4];
  float fStack_24;
  uint uStack_20;
  uint uStack_1c;
  uint uStack_18;
  
  bVar3 = 0;
  (*(((this_ptr->base).vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  fStack_78 = CStack_64.z;
  *(float *)(&stack0xffffff8c + (uint)bVar3 * -8) = afStack_58[(uint)bVar3 * -2];
  *(float *)(&stack0xffffff90 + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  core_actor_cpp_FUN_00408b40();
  euler_angles = &CStack_44;
  g_CDemonLightInstance.light_enabled_flag = 1;
  fStack_68 = afStack_58[2];
  *(float *)((int)&CStack_64 + (uint)bVar3 * -8) = afStack_58[(uint)bVar3 * -2 + 3];
  afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + -2] =
       afStack_58[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
  g_CDemonLightInstance.volumetric_enabled = 1;
  puVar2 = (uint *)((int)this_ptr + (uint)bVar3 * -8 + 0x34);
  CStack_44.x = (this_ptr->base).orient.vec.x;
  *(uint *)((int)&CStack_44 + (uint)bVar3 * -8 + 4) = *puVar2;
  *(uint *)((int)&CStack_44 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
       puVar2[(uint)bVar3 * -2 + 1];
  CStack_44.x = CStack_44.x + _DAT_005f990a;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            ((CMatrix3x3f *)&stack0xffffff64,euler_angles);
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0x3f800000;
  core_dirmat_cpp_FUN_0045f690();
  afStack_34[2] = fStack_38;
  afStack_34[(uint)bVar3 * -2 + 3] = afStack_34[(uint)bVar3 * -2];
  afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4] =
       afStack_34[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
  fStack_68 = fStack_68 + afStack_34[2];
  CStack_64.x = CStack_64.x + afStack_34[3];
  CStack_64.y = CStack_64.y + fStack_24;
  if (&stack0x00000000 != g_CDemonLightInstance.base.camera_name + 0x2c) {
    g_CDemonLightInstance.base.base.position.f.x = fStack_68;
    g_CDemonLightInstance.base.base.position.f.y = CStack_64.x;
    g_CDemonLightInstance.base.base.position.f.z = CStack_64.y;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045f3e0
            (&g_CDemonLightInstance.base.base.rotation_matrix,&CStack_44);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.focal_length = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  iVar1 = core_actor_cpp_castToClassHash_FUN_0040c600();
  if ((iVar1 != 0) && (*(float *)(iVar1 + 0x1fae8) < _DAT_005f990e)) {
    unaff_EDI = *(float *)(iVar1 + 0x1fae8) * _DAT_005f9912;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00465da0(&g_CDemonLightInstance,unaff_EDI);
  if (*(int *)&g_CGamePtr->field_0x264 == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0045e970((CDemonGlobe *)0x2c99774,&CStack_64);
  _DAT_02c997b0 = 0x8000;
  DAT_02c99790 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0045e9c0((CDemonGlobe *)0x2c99774,5.0);
  _DAT_02c99794 = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_00551960(g_CDemonSetPtr,(CDemonGlobe *)0x2c99774);
  return;
}
