// Name: core_dynamite.cpp_CDynamite_process_FUN_0046edc0
// Address: 0046edc0
// Address Range: [[0046edc0, 0046ef2a]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0046edc0(CDynamite *this_ptr,float delta_time)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0046edc0(CDynamite *this_ptr,float delta_time)

{
  float fVar1;
  CSound *this_ptr_00;
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
  
  core_weapon_cpp_CWeapon_process_FUN_00554030(&this_ptr->base,delta_time);
  if (0.0 <= this_ptr->fuse_timer) {
    fVar1 = this_ptr->fuse_timer - delta_time;
    this_ptr->fuse_timer = fVar1;
    this_ptr_00 = g_CSound_PTR_005bed68;
    if (fVar1 < 0.0) {
      this_ptr->fuse_timer = 0.0;
      core_sound_cpp_CSound_killSound_FUN_0052ebb0(this_ptr_00,this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040dea0
                        ((delta_time * (float)5 * fVar1) / _DAT_0059c91c);
      if (iVar2 != 0) {
        pCVar3 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,&local_48);
        fStack_24 = (pCVar3->min).x + (pCVar3->max).x;
        fStack_20 = (pCVar3->min).y + (pCVar3->max).y;
        CStack_30.x = fStack_24 * 0.5f;
        fStack_1c = (pCVar3->min).z + (pCVar3->max).z;
        CStack_30.y = fStack_20 * 0.5f;
        CStack_30.z = fStack_1c * 0.5f;
        pCVar3 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,&CStack_60);
        CStack_30.z = (pCVar3->max).z;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
                           ((CDemonActor *)this_ptr,&CStack_18,&CStack_30);
        if (&CStack_30 != pCVar4) {
          CStack_30.x = pCVar4->x;
          CStack_30.y = pCVar4->y;
          CStack_30.z = pCVar4->z;
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (g_CFireEffect_PTR_005b80f0,&CStack_30,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
