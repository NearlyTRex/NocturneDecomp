// Name: core_weapon.cpp_CWeapon_FUN_005ee4a0
// Address: 005ee4a0
// Address Range: [[005ee4a0, 005ee630]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_FUN_005ee4a0(CWeapon *this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee4a0(CWeapon *this_ptr)

{
  CVector3f *input_local_point;
  CDemonActor *pCVar1;
  float unaff_ESI;
  uint in_stack_ffffffcc;
  CVector3f CStack_28;
  byte auStack_1c [8];
  float fStack_14;
  
  input_local_point =
       (CVector3f *)(*(((this_ptr->base).vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base,(CVector3f *)auStack_1c,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.unk2 = 1;
  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[1].y) {
    g_CDemonLightInstance.base.base.position.x = auStack_1c._0_4_;
    g_CDemonLightInstance.base.base.position.y = auStack_1c._4_4_;
    g_CDemonLightInstance.base.base.position.z = (int)fStack_14;
  }
  CStack_28.y = (this_ptr->base).orient.vec.y;
  CStack_28.z = (this_ptr->base).orient.vec.z;
  CStack_28.x = (this_ptr->base).orient.vec.x + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,&CStack_28);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.projection_scale = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  pCVar1 = (*((this_ptr->base).vtable._ub)->getCarrier)(&this_ptr->base);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,in_stack_ffffffcc);
  if ((pCVar1 != (CDemonActor *)0x0) &&
     (*(float *)(pCVar1[0x176].create_event + 0x30) < 15.0f)) {
    unaff_ESI = *(float *)(pCVar1[0x176].create_event + 0x30) * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0(&g_CDemonLightInstance,unaff_ESI);
  if (g_CGamePtr->auto_save_blocked == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)&DAT_03f95d7c,(CColor3f *)(auStack_1c + 4));
  INT_03f95db8 = 0x8000;
  DAT_03f95d98 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360((CDemonGlobe *)&DAT_03f95d7c,3.0);
  INT_03f95d9c = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(g_CDemonSetPtr);
  return;
}
