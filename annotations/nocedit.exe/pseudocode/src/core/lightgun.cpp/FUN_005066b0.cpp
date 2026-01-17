// Name: core_lightgun.cpp_FUN_005066b0
// Address: 005066b0
// Address Range: [[005066b0, 005066ef] [005066f1, 00506a4d]]
// Convention: unknown
// Signature: undefined core_lightgun.cpp_FUN_005066b0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_lightgun.cpp_FUN_005066b0(uint param_1) */

void core_lightgun_cpp_FUN_005066b0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  int iVar3;
  CDemonActor *in_stack_00000004;
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
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004)
    ;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_48,input_local_point);
    CStack_60.z = in_stack_00000004[2].orient.heading;
    CStack_60.x = 0.0;
    CStack_60.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_24,&CStack_60)
    ;
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
    fpatan((float10)18 / (float10)_DAT_00660a44,(float10)1);
    core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
    if (in_stack_00000004[4].location.position.z != 0.0) {
      in_stack_00000004[4].location.position.z = 0.0;
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
      fStack_18 = (float)in_stack_00000004[4].location.area_id * (float)0.015625;
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
