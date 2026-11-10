// Name: core_elephant.cpp_CElephantGun_renderAimBeam_FUN_004864d0
// Address: 004864d0
// Address Range: [[004864d0, 0048672b]]
// Convention: __cdecl
// Signature: void __cdecl core_elephant_cpp_CElephantGun_renderAimBeam_FUN_004864d0(CElephantGun *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_elephant_cpp_CElephantGun_renderAimBeam_FUN_004864d0(CElephantGun *this_ptr)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float afStackY_10a8 [1010];
  float *pfVar5;
  CVector3f CStack_c0;
  float fStack_b4;
  float afStack_b0 [4];
  float fStack_a0;
  float afStack_9c [3];
  float afStack_90 [3];
  float fStack_84;
  float afStack_80 [6];
  float afStack_68 [2];
  CVector3f CStack_60;
  float fStack_54;
  float afStack_50 [4];
  float fStack_40;
  uint uStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_18;
  
  bVar4 = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_isShadowPass_FUN_0046b960(DAT_0060b280);
  if (iVar3 != 0) {
    return;
  }
  (*(((this_ptr->base).base.vtable._uc)->_uc).isInvulnerable)((CCharacter *)this_ptr);
  pfVar5 = afStack_b0 + 5;
  afStack_9c[0] = (float)uStack_3c;
  afStack_b0[(uint)bVar4 * -2 + 6] = afStack_50[(uint)bVar4 * -2 + 6];
  afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7] =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 7];
  core_actor_cpp_FUN_00408d70(this_ptr,pfVar5);
  CStack_c0.x = fStack_b4;
  *(float *)((int)&CStack_c0 + (uint)bVar4 * -8 + 4) = afStack_b0[(uint)bVar4 * -2];
  *(float *)((int)&CStack_c0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  afStack_90[2] = (this_ptr->base).bolt_velocity;
  afStack_90[0] = 0.0;
  afStack_90[1] = 0.0;
  core_actor_cpp_FUN_00408cf0(this_ptr,afStack_b0 + 8);
  fVar2 = CStack_c0.y;
  fVar1 = CStack_c0.x;
  afStack_80[5] = fStack_24;
  afStack_68[(uint)bVar4 * -2] = afStack_50[(uint)bVar4 * -2 + 0xc];
  afStack_68[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1] =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 0xd];
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
            (0x01C3DEB4,&CStack_c0,&CStack_60,1.0,0,0xff,0,
             this_ptr->spread_angle * _DAT_005d2b86 * _DAT_005d2b8a);
  this_ptr->muzzle_flash_active = 1;
  fStack_54 = CStack_60.x - CStack_c0.x;
  afStack_50[0] = CStack_60.y - CStack_c0.y;
  afStack_50[1] = CStack_60.z - CStack_c0.z;
  afStack_b0[2] = CStack_60.x - CStack_c0.x;
  afStack_b0[(uint)bVar4 * -2 + 3] = afStack_50[(uint)bVar4 * -2];
  afStack_b0[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 4] =
       afStack_50[(uint)bVar4 * -2 + (uint)bVar4 * -2 + 1];
  this_ptr->projectile_distance =
       SQRT(fStack_a0 * fStack_a0 + afStack_b0[2] * afStack_b0[2] + afStack_b0[3] * afStack_b0[3]);
  return;
}
