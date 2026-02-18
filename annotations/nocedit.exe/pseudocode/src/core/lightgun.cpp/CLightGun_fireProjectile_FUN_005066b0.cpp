// Name: core_lightgun.cpp_CLightGun_fireProjectile_FUN_005066b0
// Address: 005066b0
// Address Range: [[005066b0, 005066ef] [005066f1, 00506a4d]]
// Convention: __cdecl
// Signature: void __cdecl core_lightgun_cpp_CLightGun_fireProjectile_FUN_005066b0(CLightGun *this_ptr)

#include "nocturne.h"

void __cdecl core_lightgun_cpp_CLightGun_fireProjectile_FUN_005066b0(CLightGun *this_ptr)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  int iVar3;
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
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  CVector3f CStack_28;
  float fStack_1c;
  int iStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    input_local_point =
         (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_4c,input_local_point);
    CStack_64.z = (this_ptr->base).bolt_velocity;
    CStack_64.x = 0.0;
    CStack_64.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&CStack_28,&CStack_64);
    fStack_58 = -CStack_28.x;
    fStack_54 = -CStack_28.y;
    fStack_50 = -CStack_28.z;
    fStack_40 = CStack_4c.x + CStack_28.x;
    fStack_3c = CStack_4c.y + CStack_28.y;
    fStack_38 = CStack_4c.z + CStack_28.z;
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
    fpatan((float10)18 / (float10)112.0f,(float10)1);
    core_fire_cpp_CFireEffect_createLaserSegment2_FUN_004c7f20(g_CFireEffectPtr);
    if (*(int *)(this_ptr->unk + 0x10) != 0) {
      this_ptr->unk[0x10] = '\0';
      this_ptr->unk[0x11] = '\0';
      this_ptr->unk[0x12] = '\0';
      this_ptr->unk[0x13] = '\0';
      iVar2 = 1;
      do {
        iVar3 = iVar2 + 1;
        iStack_18 = iVar2;
        core_fire_cpp_CFireEffect_createLaserSegment2_FUN_004c7f20(g_CFireEffectPtr);
        iVar2 = iVar3;
      } while (iVar3 < 10);
      fStack_6c = fStack_3c - CStack_4c.y;
      fStack_70 = fStack_40 - CStack_4c.x;
      fStack_68 = fStack_38 - CStack_4c.z;
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
      fStack_1c = *(float *)(this_ptr->unk + 0x14) * (float)0.015625;
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
        core_fire_cpp_CFireEffect_createSpark_FUN_004c79d0
                  (g_CFireEffectPtr,&CStack_88,(CVector3f *)0x0,0x8000,0x4000,0,0x3333);
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
