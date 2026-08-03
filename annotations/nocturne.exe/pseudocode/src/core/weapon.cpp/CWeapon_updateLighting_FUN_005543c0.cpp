// Name: core_weapon.cpp_CWeapon_updateLighting_FUN_005543c0
// Address: 005543c0
// Address Range: [[005543c0, 00554550]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CWeapon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_updateLighting_FUN_005543c0(CWeapon *this_ptr)

{
  float fVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  float unaff_ESI;
  uint in_stack_ffffffcc;
  CVector3f CStack_28;
  byte auStack_1c [8];
  float fStack_14;
  
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
            (&this_ptr->base,(CVector3f *)auStack_1c,input_local_point);
  g_CDemonLight_01c74640.light_enabled_flag = 1;
  g_CDemonLight_01c74640.volumetric_enabled = 1;
  if ((float *)&stack0x00000000 != &g_CDemonLight_01c74640.base.rotation_matrix.m[1].y) {
    g_CDemonLight_01c74640.base.position.x = (float)auStack_1c._0_4_;
    g_CDemonLight_01c74640.base.position.y = (float)auStack_1c._4_4_;
    g_CDemonLight_01c74640.base.position.z = fStack_14;
  }
  CStack_28.y = (this_ptr->base).orient.vec.y;
  CStack_28.z = (this_ptr->base).orient.vec.z;
  CStack_28.x = (this_ptr->base).orient.vec.x + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_0044d7a0
            (&g_CDemonLight_01c74640.base.rotation_matrix,&CStack_28);
  g_CDemonLight_01c74640.base.fixed_point_scale = 32.0;
  g_CDemonLight_01c74640.base.focal_length = 32.0;
  g_CDemonLight_01c74640.antialiasing_enabled = 1;
  pCVar2 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040d890(pCVar2,in_stack_ffffffcc);
  if ((pCVar2 != (CDemonActor *)0x0) &&
     (fVar1 = pCVar2[0x17e].orient_matrix.m[0].y, fVar1 < 15.0f)) {
    unaff_ESI = fVar1 * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_00452080(&g_CDemonLight_01c74640,unaff_ESI)
  ;
  if (g_CGame_PTR_005b9354->flashlight_active == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setPosition_FUN_0044cd90
            ((CDemonGlobe *)0x2ddf9ac,(CVector3f *)(auStack_1c + 4));
  _DAT_02ddf9e8 = 0x8000;
  DAT_02ddf9c8 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_0044cde0((CDemonGlobe *)0x2ddf9ac,3.0);
  _DAT_02ddf9cc = 0;
  core_set_cpp_CDemonSet_addCoronaGlobe_FUN_0050a9f0
            (g_CDemonSet_PTR_005be368,(CDemonGlobe *)0x2ddf9ac);
  return;
}
