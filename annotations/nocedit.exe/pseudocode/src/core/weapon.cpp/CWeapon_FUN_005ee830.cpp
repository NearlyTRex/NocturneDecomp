// Name: core_weapon.cpp_CWeapon_FUN_005ee830
// Address: 005ee830
// Address Range: [[005ee830, 005ee85f] [005ee861, 005ee9e3]]
// Convention: __cdecl
// Signature: void core_weapon.cpp_CWeapon_FUN_005ee830(CWeapon * this_ptr)

#include "nocturne.h"

void __cdecl core_weapon_cpp_CWeapon_FUN_005ee830(CWeapon *this_ptr)

{
  int iVar1;
  CVector3f *input_local_point;
  CDemonActor *pCVar2;
  BADSPACEBASE *in_ESP;
  SLaserInfo local_94;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar1 != 0) {
    return;
  }
  input_local_point =
       (CVector3f *)(*(this_ptr->base_actor).vtable[1].renderOpaque)(&this_ptr->base_actor);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (&this_ptr->base_actor,&local_28,input_local_point);
  local_1c.z = this_ptr->bolt_velocity;
  local_1c.x = 0.0;
  local_1c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(&this_ptr->base_actor,&local_34,&local_1c)
  ;
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0(g_CDemonSetPtr,&this_ptr->base_actor);
  if (*(CDemonActor **)&this_ptr->carried_by_actor != (CDemonActor *)0x0) {
    core_setcolid_cpp_CDemonSet_ignore_FUN_005741b0
              (g_CDemonSetPtr,*(CDemonActor **)&this_ptr->carried_by_actor);
  }
  core_fire_cpp_SLaserInfo_ctor_FUN_004c81f0(&local_94);
  local_94.field0_0x0[8] = '\x01';
  local_94.field0_0x0[9] = '\0';
  local_94.field0_0x0[10] = '\0';
  local_94.field0_0x0[0xb] = '\0';
  local_94.field0_0x0._12_4_ = *(uint *)this_ptr->field7_0x2f4;
  local_94.field0_0x0._16_4_ = *(uint *)(this_ptr->field7_0x2f4 + 4);
  local_94.field0_0x0._20_4_ = *(uint *)(this_ptr->field7_0x2f4 + 8);
  local_94.field0_0x0[0] = '\0';
  local_94.field0_0x0[1] = '\0';
  local_94.field0_0x0[2] = -0x80;
  local_94.field0_0x0[3] = '?';
  pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                     (*(CDemonActor **)&this_ptr->carried_by_actor,g_CHeroClassInfo.name_hash);
  local_94.field0_0x0._24_4_ = ZEXT14(pCVar2 != (CDemonActor *)0x0);
  local_94.field0_0x0[0x1c] = '\x01';
  local_94.field0_0x0[0x1d] = '\0';
  local_94.field0_0x0[0x1e] = '\0';
  local_94.field0_0x0[0x1f] = '\0';
  core_fire_cpp_CFireEffect_FUN_004c8230(g_CFireEffectPtr);
  core_setcolid_cpp_CDemonSet_initMaybe_FUN_00574180(g_CDemonSetPtr);
  return;
}
