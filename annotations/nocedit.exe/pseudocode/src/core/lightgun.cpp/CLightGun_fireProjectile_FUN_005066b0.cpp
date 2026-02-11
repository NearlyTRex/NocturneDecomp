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
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  CVector3f CStack_60;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  CVector3f CStack_24;
  float fStack_18;
  int iStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 == 0) {
    input_local_point =
         (CVector3f *)(*(((this_ptr->base).base.vtable._uc)->_uc).canWalk)((CCharacter *)this_ptr);
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              ((CDemonActor *)this_ptr,&CStack_48,input_local_point);
    CStack_60.z = (this_ptr->base).bolt_velocity;
    CStack_60.x = 0.0;
    CStack_60.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              ((CDemonActor *)this_ptr,&CStack_24,&CStack_60);
    fStack_54 = -CStack_24.x;
    fStack_50 = -CStack_24.y;
    fStack_4c = -CStack_24.z;
    fStack_3c = CStack_48.x + CStack_24.x;
    fStack_38 = CStack_48.y + CStack_24.y;
    fStack_34 = CStack_48.z + CStack_24.z;
    if (&fStack_30 != &fStack_54) {
      fStack_30 = fStack_54;
      fStack_2c = fStack_50;
      fStack_28 = fStack_4c;
    }
    fVar1 = SQRT(fStack_28 * fStack_28 + fStack_30 * fStack_30 + fStack_2c * fStack_2c);
    if (fVar1 <= 0.0) {
      fStack_2c = 0.0;
      fStack_30 = 0.0;
      fStack_28 = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_30 = fStack_30 * fVar1;
      fStack_2c = fStack_2c * fVar1;
      fStack_28 = fStack_28 * fVar1;
    }
    fpatan((float10)18 / (float10)112.0f,(float10)1);
    core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
    if (*(int *)(this_ptr->unk + 0x10) != 0) {
      this_ptr->unk[0x10] = '\0';
      this_ptr->unk[0x11] = '\0';
      this_ptr->unk[0x12] = '\0';
      this_ptr->unk[0x13] = '\0';
      iVar2 = 1;
      do {
        iVar3 = iVar2 + 1;
        iStack_14 = iVar2;
        core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
        iVar2 = iVar3;
      } while (iVar3 < 10);
      CStack_48.y = fStack_38 - CStack_48.y;
      CStack_48.x = fStack_3c - CStack_48.x;
      CStack_48.z = fStack_34 - CStack_48.z;
      fStack_64 = SQRT(CStack_48.z * CStack_48.z +
                       CStack_48.x * CStack_48.x + CStack_48.y * CStack_48.y);
      if (0.0 < fStack_64) {
        fStack_64 = 1.0 / fStack_64;
        fStack_6c = CStack_48.x * fStack_64;
        fStack_68 = CStack_48.y * fStack_64;
        fStack_64 = CStack_48.z * fStack_64;
      }
      else {
        fStack_68 = 0.0;
        fStack_6c = 0.0;
        fStack_64 = 0.0;
      }
      fStack_18 = *(float *)(this_ptr->unk + 0x14) * (float)0.015625;
      fStack_78 = fStack_6c * fStack_18;
      fStack_74 = fStack_68 * fStack_18;
      fStack_70 = fStack_64 * fStack_18;
      if (&fStack_6c != &fStack_78) {
        fStack_6c = fStack_78;
        fStack_68 = fStack_74;
        fStack_64 = fStack_70;
      }
      iVar2 = 0;
      do {
        core_fire_cpp_CFireEffect_FUN_004c79d0(g_CFireEffectPtr);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0x40);
      return;
    }
  }
  return;
}
