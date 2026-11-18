// Name: core_ammo.cpp_CAmmoManaLarge_process_FUN_0040e2b0
// Address: 0040e2b0
// Address Range: [[0040e2b0, 0040e39f]]
// Convention: __cdecl
// Signature: void __cdecl core_ammo_cpp_CAmmoManaLarge_process_FUN_0040e2b0(CAmmoManaLarge *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_ammo_cpp_CAmmoManaLarge_process_FUN_0040e2b0(CAmmoManaLarge *this_ptr,float delta_time)

{
  int iVar1;
  CKeyFramedModel *pCVar2;
  float fVar3;
  byte bVar4;
  float afStackY_1024 [1012];
  CVector3f CStack_3c;
  float fStack_30;
  float afStack_2c [2];
  CVector3f CStack_24;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  bVar4 = 0;
  pCVar2 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_004625a0(&(this_ptr->base).model)
  ;
  fStack_18 = delta_time * 10.0f;
  iVar1 = pCVar2->frame_count + -1;
  fVar3 = core_actor_cpp_getRandomFloatFromRange_FUN_0040ce40(0.95,1.05);
  iStack_10 = iVar1;
  fStack_14 = (float)iVar1;
  fVar3 = fVar3 * fStack_18 + (this_ptr->base).anim_frame;
  (this_ptr->base).anim_frame = fVar3;
  if (fStack_14 <= fVar3) {
    (this_ptr->base).anim_frame = (this_ptr->base).anim_frame - fStack_14;
  }
  fStack_30 = (this_ptr->base).base.location.position.x;
  afStack_2c[0] = (this_ptr->base).base.location.position.y + 1.5f;
  afStack_2c[1] = (this_ptr->base).base.location.position.z;
  CStack_3c.x = fStack_30;
  *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + 4) = afStack_2c[(uint)bVar4 * -2];
  *(float *)((int)&CStack_3c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_2c[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  if (&CStack_24 != &CStack_3c) {
    CStack_24.x = CStack_3c.x;
    CStack_24.y = CStack_3c.y;
    CStack_24.z = CStack_3c.z;
  }
  core_fire_cpp_CFireEffect_createGunFlames_FUN_004a3af0
            (g_CFireEffect_PTR_005fc5a0,&CStack_24,&g_ZeroVector,1,0,4);
  return;
}
