// Name: core_dynamite.cpp_CDynamite_process_FUN_0049cfb0
// Address: 0049cfb0
// Address Range: [[0049cfb0, 0049d11a]]
// Convention: __cdecl
// Signature: void core_dynamite.cpp_CDynamite_process_FUN_0049cfb0(CDynamite * this_ptr, float delta_time)

#include "nocturne.h"

void __cdecl core_dynamite_cpp_CDynamite_process_FUN_0049cfb0(CDynamite *this_ptr,float delta_time)

{
  uint sfx_handle;
  float fVar1;
  CSound *this_ptr_00;
  int iVar2;
  CBoundingBox3D *pCVar3;
  CVector3f *pCVar4;
  byte auStack_58 [48];
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  float fStack_14;
  
  core_weapon_cpp_CWeapon_process_FUN_005ee110(&this_ptr->base,delta_time);
  if (0.0 <= *(float *)this_ptr->unk) {
    fVar1 = *(float *)this_ptr->unk - delta_time;
    *(float *)this_ptr->unk = fVar1;
    this_ptr_00 = g_CSoundPtr;
    if (fVar1 < 0.0) {
      sfx_handle = *(uint *)(this_ptr->unk + 0x10);
      this_ptr->unk[0] = '\0';
      this_ptr->unk[1] = '\0';
      this_ptr->unk[2] = '\0';
      this_ptr->unk[3] = '\0';
      core_sound_cpp_CSound_killSound_FUN_005b3b90(this_ptr_00,sfx_handle);
      this_ptr->unk[0x10] = '\0';
      this_ptr->unk[0x11] = '\0';
      this_ptr->unk[0x12] = '\0';
      this_ptr->unk[0x13] = '\0';
    }
    else {
      iVar2 = core_actor_cpp_randomChance_FUN_0040cd10
                        ((delta_time * (float)5 * fVar1) / 3.5f);
      if (iVar2 != 0) {
        pCVar3 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,(CBoundingBox3D *)(auStack_58 + 0x10));
        CStack_20.y = (pCVar3->min).x + (pCVar3->max).x;
        CStack_20.z = (pCVar3->min).y + (pCVar3->max).y;
        fStack_28 = CStack_20.y * 0.5f;
        fStack_14 = (pCVar3->min).z + (pCVar3->max).z;
        fStack_24 = CStack_20.z * 0.5f;
        CStack_20.x = fStack_14 * 0.5f;
        pCVar3 = (*((this_ptr->base).base.vtable._ub)->getBoundingBox)
                           ((CDemonActor *)this_ptr,(CBoundingBox3D *)auStack_58);
        CStack_20.z = (pCVar3->max).z;
        pCVar4 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                           ((CDemonActor *)this_ptr,(CVector3f *)&stack0xfffffff8,&CStack_20);
        if (&CStack_20 != pCVar4) {
          CStack_20.x = pCVar4->x;
          CStack_20.y = pCVar4->y;
          CStack_20.z = pCVar4->z;
        }
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        return;
      }
    }
  }
  return;
}
