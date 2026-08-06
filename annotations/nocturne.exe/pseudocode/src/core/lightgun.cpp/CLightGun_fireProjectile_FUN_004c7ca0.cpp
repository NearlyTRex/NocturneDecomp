// Name: core_lightgun.cpp_CLightGun_fireProjectile_FUN_004c7ca0
// Address: 004c7ca0
// Address Range: [[004c7ca0, 004c8033]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_fireProjectile_FUN_004c7ca0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_fireProjectile_FUN_004c7ca0(CLightGun *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  int iVar3;
  float10 fVar4;
  CVector3f CStack_88;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  CVector3f CStack_64;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  CVector3f CStack_4c;
  CVector3f CStack_40;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(g_CDemonRenderer_PTR_005ae704)
  ;
  if (iVar2 == 0) {
    input_local_point =
         (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_0040a240
              ((CDemonActor *)this_ptr,&CStack_4c,input_local_point);
    CStack_64.z = (this_ptr->base).bolt_velocity;
    CStack_64.x = 0.0;
    CStack_64.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_0040a200
              ((CDemonActor *)this_ptr,&CStack_28,&CStack_64);
    fStack_58 = -CStack_28.x;
    fStack_54 = -CStack_28.y;
    fStack_50 = -CStack_28.z;
    CStack_40.x = CStack_4c.x + CStack_28.x;
    CStack_40.y = CStack_4c.y + CStack_28.y;
    CStack_40.z = CStack_4c.z + CStack_28.z;
    if (&fStack_34 != &fStack_58) {
      fStack_34 = fStack_58;
      fStack_30 = fStack_54;
      fStack_2c = fStack_50;
    }
    fVar1 = SQRT(fStack_2c * fStack_2c + fStack_34 * fStack_34 + fStack_30 * fStack_30);
    if (fVar1 <= 0.0) {
      fStack_30 = 0.0;
      fStack_34 = 0.0;
      fStack_2c = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_34 = fStack_34 * fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
    }
    fVar4 = (float10)fpatan((float10)18 / (float10)112.0f,(float10)1);
    core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
              (g_CFireEffect_PTR_005b80f0,&CStack_4c,&CStack_40,1.0,0xff,0xff,0xb4,(float)fVar4);
    if (this_ptr->hit_enemy != 0) {
      this_ptr->hit_enemy = 0;
      iVar2 = 1;
      do {
        iVar3 = iVar2 + 1;
        iStack_18 = iVar2;
        core_fire_cpp_CFireEffect_createLaserCone_FUN_0048b3e0
                  (g_CFireEffect_PTR_005b80f0,&CStack_4c,&CStack_40,1.0,0xff,0xff,0xb4,
                   (float)iVar2 * (float)fVar4 * (float)0.10000000000000001);
        iVar2 = iVar3;
      } while (iVar3 < 10);
      fStack_6c = CStack_40.y - CStack_4c.y;
      fStack_70 = CStack_40.x - CStack_4c.x;
      fStack_68 = CStack_40.z - CStack_4c.z;
      CStack_88.x = CStack_4c.x;
      CStack_88.y = CStack_4c.y;
      CStack_88.z = CStack_4c.z;
      fVar1 = SQRT(fStack_68 * fStack_68 + fStack_70 * fStack_70 + fStack_6c * fStack_6c);
      if (0.0 < fVar1) {
        fVar1 = 1.0 / fVar1;
        fStack_70 = fStack_70 * fVar1;
        fStack_6c = fStack_6c * fVar1;
        fStack_68 = fStack_68 * fVar1;
      }
      else {
        fStack_6c = 0.0;
        fStack_70 = 0.0;
        fStack_68 = 0.0;
      }
      fStack_1c = this_ptr->beam_length * (float)0.015625;
      fStack_7c = fStack_70 * fStack_1c;
      fStack_78 = fStack_6c * fStack_1c;
      fStack_74 = fStack_68 * fStack_1c;
      if (&fStack_70 != &fStack_7c) {
        fStack_70 = fStack_7c;
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
      }
      iVar2 = 0;
      do {
        core_fire_cpp_CFireEffect_createSpark_FUN_0048ae90
                  (g_CFireEffect_PTR_005b80f0,&CStack_88,(CVector3f *)0x0,0x8000,0x4000,0,0x3333);
        iVar2 = iVar2 + 1;
        CStack_88.x = CStack_88.x + fStack_70;
        CStack_88.y = CStack_88.y + fStack_6c;
        CStack_88.z = CStack_88.z + fStack_68;
      } while (iVar2 < 0x40);
      return;
    }
  }
  return;
}
