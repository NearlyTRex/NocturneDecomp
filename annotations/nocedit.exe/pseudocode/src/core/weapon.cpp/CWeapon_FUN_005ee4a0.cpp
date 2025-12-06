// Name: core_weapon.cpp_CWeapon_FUN_005ee4a0
// Address: 005ee4a0
// Address Range: [[005ee4a0, 005ee630]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee4a0(CWeapon * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee4a0(CWeapon *this_ptr)

{
  CVector3f *input_local_point;
  CDemonActor *pCVar1;
  BADSPACEBASE *in_ESP;
  int unaff_EBP;
  int unaff_ESI;
  float in_stack_00000010;
  float in_stack_00000014;
  float class_name_hash;
  float fStack_10;
  
  input_local_point =
       (CVector3f *)(*(this_ptr->base_actor).vtable[1].renderOpaque)(&this_ptr->base_actor);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,(CVector3f *)&stack0xffffffec,input_local_point);
  g_CDemonLightInstance.light_enabled_flag = 1;
  g_CDemonLightInstance.field17_0x1cbc = 1;
  if ((int *)&stack0x00000000 != &g_CDemonLightInstance.base.base.rotation_matrix.m[0].y) {
    g_CDemonLightInstance.base.base.position.x = (int)fStack_10;
    g_CDemonLightInstance.base.base.position.y = unaff_EBP;
    g_CDemonLightInstance.base.base.position.z = unaff_ESI;
  }
  class_name_hash = (this_ptr->base_actor).orient.pitch + 0.3490658f;
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&g_CDemonLightInstance.base.base.rotation_matrix,
             (CVector3f *)&stack0xffffffe4);
  g_CDemonLightInstance.base.max_distance = 32.0;
  g_CDemonLightInstance.base.base.projection_scale = 32.0;
  g_CDemonLightInstance.antialiasing_enabled = 1;
  pCVar1 = (*((this_ptr->base_actor).vtable)->getCarrier)(&this_ptr->base_actor);
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(pCVar1,(uint)class_name_hash);
  if ((pCVar1 != (CDemonActor *)0x0) &&
     (in_stack_00000010 = *(float *)(pCVar1[0x176].create_event + 0x30),
     in_stack_00000010 < 15f)) {
    in_stack_00000014 = in_stack_00000010 * 0.06666667f;
  }
  core_dlight_cpp_CDemonLight_setVolumetricIntensity_FUN_004765e0
            (&g_CDemonLightInstance,in_stack_00000014);
  if (g_CGamePtr->auto_save_blocked == 0) {
    return;
  }
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)&DAT_03f95d7c,(CColor3f *)&stack0x00000008);
  _DAT_03f95db8 = 0x8000;
  DAT_03f95d98 = 0x20;
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360((CDemonGlobe *)&DAT_03f95d7c,3.0);
  _DAT_03f95d9c = 0;
  core_set_cpp_CDemonSet_FUN_0056d110(g_CDemonSetPtr);
  return;
}
