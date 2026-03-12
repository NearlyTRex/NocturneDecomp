// Name: core_dynamite.cpp_CDynamite_process_FUN_0049cfb0
// Address: 0049cfb0
// Address Range: [[0049cfb0, 0049d11a]]
// Convention: __cdecl
// Signature: void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0049cfb0(CDynamite *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0049cfb0(CDynamite *this_ptr,float delta_time)

{
  int iVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar4;
  CBoundingBox3D CStack_60;
  CBoundingBox3D local_48;
  CVector3f CStack_30;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  CSound *this_ptr_00;
  float fVar1;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (0.0 <= this_ptr->fuse_timer) {
    fVar1 = this_ptr->fuse_timer - delta_time;
    this_ptr->fuse_timer = fVar1;
    this_ptr_00 = g_CSoundPtr;
    if (fVar1 < 0.0) {
      this_ptr->fuse_timer = 0.0;
      core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr_00,this_ptr->sfx_handle);
      this_ptr->sfx_handle = 0;
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10
                        ((delta_time * (float)5 * fVar1) / 3.5f);
      if (iVar2 != 0) {
        pCVar3 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,&local_48);
        CStack_30.x = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
        CStack_30.y = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
        CStack_30.z = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
        pCVar1 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,&CStack_60);
        CStack_30.z = (pCVar1->max).z;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,&CStack_18,&CStack_30);
        if (&CStack_30 != pCVar4) {
          CStack_30.x = pCVar4->x;
          CStack_30.y = pCVar4->y;
          CStack_30.z = pCVar4->z;
        }
        core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                  (g_CFireEffectPtr,&CStack_30,(CVector3f *)0x0,0x4000,0x10000,0,0xffff);
        return;
      }
    }
  }
  return;
}
