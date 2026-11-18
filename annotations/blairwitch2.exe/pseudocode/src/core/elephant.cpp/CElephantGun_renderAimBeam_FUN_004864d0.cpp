// Name: core_elephant.cpp_CElephantGun_renderAimBeam_FUN_004864d0
// Address: 004864d0
// Address Range: [[004864d0, 0048672b]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_renderAimBeam_FUN_004864d0(CElephantGun *this_ptr)

#include "nocturne.h"

void __cdecl core_elephant_cpp_CElephantGun_renderAimBeam_FUN_004864d0(CElephantGun *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10a8 [1010];
  CVector3f *input_local_point;
  CVector3f CStack_c0;
  CVector3f CStack_b4;
  float fStack_a8;
  float afStack_a4 [2];
  CVector3f CStack_9c;
  CVector3f CStack_90;
  float fStack_84;
  float afStack_80 [6];
  float afStack_68 [2];
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  
  bVar4 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(g_CDemonRenderer_PTR_0060b280)
  ;
  if (iVar3 != 0) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  input_local_point = &CStack_9c;
  CStack_9c.x = fStack_3c;
  *(float *)((int)&CStack_9c + (uint)bVar4 * -8 + 4) = afStack_50[(uint)bVar4 * -2 + 6];
  *(float *)((int)&CStack_9c + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
            ((CDemonActor *)this_ptr,input_local_point,&CStack_b4);
  CStack_c0.x = CStack_b4.x;
  *(uint *)((int)&CStack_c0 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&CStack_b4 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&CStack_b4 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  CStack_90.z = (this_ptr->base).bolt_velocity;
  CStack_90.x = 0.0;
  CStack_90.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408cf0
            ((CDemonActor *)this_ptr,&CStack_90,&CStack_24);
  fVar2 = CStack_c0.y;
  fVar1 = CStack_c0.x;
  afStack_80[5] = CStack_24.x;
  afStack_68[(uint)bVar4 * -2] = *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + 4);
  afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       *(float *)((int)&CStack_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  afStack_50[2] = -afStack_80[5];
  fStack_30 = fVar1 + afStack_80[5];
  fStack_2c = fVar2 + afStack_68[0];
  fStack_28 = CStack_c0.z + afStack_68[1];
  CStack_60.x = fVar1 + afStack_80[5];
  *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + 4) = afStack_50[(uint)bVar4 * -2 + 9];
  *(float *)((int)&CStack_60 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 10];
  afStack_50[3] = -afStack_68[0];
  fStack_40 = -afStack_68[1];
  fStack_84 = afStack_50[2];
  afStack_80[(uint)bVar4 * -2] = afStack_50[(uint)bVar4 * -2 + 3];
  afStack_80[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4];
  if (afStack_80 + 2 != &fStack_84) {
    afStack_80[2] = fStack_84;
    afStack_80[3] = afStack_80[0];
    afStack_80[4] = afStack_80[1];
  }
  fStack_18 = SQRT(afStack_80[4] * afStack_80[4] +
                   afStack_80[2] * afStack_80[2] + afStack_80[3] * afStack_80[3]);
  if (fStack_18 <= 0.0) {
    afStack_80[3] = 0.0;
    afStack_80[2] = 0.0;
    afStack_80[4] = 0.0;
  }
  else {
    fVar1 = 1.0 / fStack_18;
    afStack_80[2] = afStack_80[2] * fVar1;
    afStack_80[3] = afStack_80[3] * fVar1;
    afStack_80[4] = afStack_80[4] * fVar1;
  }
  core_fire_cpp_CFireEffect_createLaserCone_FUN_0049d7e0
            (g_CFireEffectPtr,&CStack_c0,&CStack_60,1.0,0,0xff,0,
             this_ptr->spread_angle * 3.141593f * 0.005555556f);
  this_ptr->muzzle_flash_active = 1;
  fStack_54 = CStack_60.x - CStack_c0.x;
  afStack_50[0] = CStack_60.y - CStack_c0.y;
  afStack_50[1] = CStack_60.z - CStack_c0.z;
  fStack_a8 = CStack_60.x - CStack_c0.x;
  afStack_a4[(uint)bVar4 * -2] = afStack_50[(uint)bVar4 * -2];
  afStack_a4[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  this_ptr->projectile_distance =
       SQRT(afStack_a4[1] * afStack_a4[1] + fStack_a8 * fStack_a8 + afStack_a4[0] * afStack_a4[0]);
  return;
}
