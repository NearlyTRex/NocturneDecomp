// Name: core_dynamite.cpp_CDynamite_process_FUN_0046edc0
// Address: 0046edc0
// Address Range: [[0046edc0, 0046ef2a]]
// Convention: unknown
// Signature: void core_dynamite_cpp_CDynamite_process_FUN_0046edc0(CWeapon *param_1,float param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dynamite_cpp_CDynamite_process_FUN_0046edc0(CWeapon *param_1,float param_2)

{
  uint sfx_handle;
  float fVar1;
  CSound *this_ptr;
  int iVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  CBoundingBox3D CStack_60;
  CBoundingBox3D local_48;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(param_1,param_2);
  if (0.0 <= *(float *)param_1[1].base.actor_name) {
    fVar1 = *(float *)param_1[1].base.actor_name - param_2;
    *(float *)param_1[1].base.actor_name = fVar1;
    this_ptr = 0x02DC9450;
    if (fVar1 < 0.0) {
      sfx_handle = *(uint *)(param_1[1].base.actor_name + 0x10);
      param_1[1].base.actor_name[0] = '\0';
      param_1[1].base.actor_name[1] = '\0';
      param_1[1].base.actor_name[2] = '\0';
      param_1[1].base.actor_name[3] = '\0';
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(this_ptr,sfx_handle);
      param_1 = param_1 + 1;
      (param_1->base).actor_name[0x10] = '\0';
      (param_1->base).actor_name[0x11] = '\0';
      (param_1->base).actor_name[0x12] = '\0';
      (param_1->base).actor_name[0x13] = '\0';
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040dea0
                        ((param_2 * (float)5 * fVar1) / _DAT_0059c91c);
      if (iVar2 != 0) {
        pCVar3 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&local_48);
        fStack_24 = (pCVar3->min).x + (pCVar3->max).x;
        fStack_20 = (pCVar3->min).y + (pCVar3->max).y;
        CStack_30.x = fStack_24 * 0.5f;
        fStack_1c = (pCVar3->min).z + (pCVar3->max).z;
        CStack_30.y = fStack_20 * 0.5f;
        CStack_30.z = fStack_1c * 0.5f;
        pCVar3 = (*((param_1->base).vtable._ub)->getBoundingBox)(&param_1->base,&CStack_60);
        CStack_30.z = (pCVar3->max).z;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           (&param_1->base,&CStack_18,&CStack_30);
        if (&CStack_30 != pCVar4) {
          CStack_30.x = pCVar4->x;
          CStack_30.y = pCVar4->y;
          CStack_30.z = pCVar4->z;
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (0x01C08D04,&CStack_30,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
