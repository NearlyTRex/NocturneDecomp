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
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  float unaff_ESI;
  float unaff_EDI;
  CDemonActor *in_stack_00000004;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  float fStack_40;
  CVector3f CStack_3c;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004)
    ;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_3c,input_local_point);
    CStack_50.z = in_stack_00000004[2].orient.heading;
    CStack_50.x = 0.0;
    CStack_50.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
              (in_stack_00000004,(CVector3f *)&fStack_14,&CStack_50);
    fStack_40 = -unaff_EBP;
    CStack_3c.x = -unaff_EDI;
    CStack_3c.y = -unaff_ESI;
    fStack_28 = CStack_3c.z + unaff_EBP;
    fStack_24 = fStack_30 + unaff_EDI;
    fStack_20 = fStack_2c + unaff_ESI;
    if (&fStack_20 != &fStack_40) {
      fStack_1c = fStack_40;
      fStack_18 = CStack_3c.x;
      fStack_14 = CStack_3c.y;
    }
    fVar1 = SQRT(fStack_14 * fStack_14 + fStack_1c * fStack_1c + fStack_18 * fStack_18);
    if (fVar1 <= 0.0) {
      fStack_18 = 0.0;
      fStack_1c = 0.0;
      fStack_14 = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_1c = fStack_1c * fVar1;
      fStack_18 = fStack_18 * fVar1;
      fStack_14 = fStack_14 * fVar1;
    }
    fpatan((float10)18 / (float10)_DAT_00660a44,(float10)1);
    core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
    if (in_stack_00000004[4].location.position.z != 0.0) {
      iVar2 = 1;
      in_stack_00000004[4].location.position.z = 0.0;
      do {
        iVar2 = iVar2 + 1;
        core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
      } while (iVar2 < 10);
      CStack_50.y = fStack_1c - fStack_28;
      fStack_2c = fStack_20 - fStack_2c;
      CStack_50.z = fStack_18 - fStack_24;
      fVar1 = SQRT(CStack_50.z * CStack_50.z + fStack_2c * fStack_2c + CStack_50.y * CStack_50.y);
      if (0.0 < fVar1) {
        fVar1 = 1.0 / fVar1;
        CStack_50.x = fStack_2c * fVar1;
        CStack_50.y = CStack_50.y * fVar1;
        CStack_50.z = CStack_50.z * fVar1;
      }
      else {
        CStack_50.y = 0.0;
        CStack_50.x = 0.0;
        CStack_50.z = 0.0;
      }
      CStack_5c.z = (float)in_stack_00000004[4].location.area_id * (float)0.015625;
      CStack_5c.x = CStack_50.x * CStack_5c.z;
      CStack_5c.y = CStack_50.y * CStack_5c.z;
      CStack_5c.z = CStack_50.z * CStack_5c.z;
      if (&CStack_50 != &CStack_5c) {
        CStack_50.x = CStack_5c.x;
        CStack_50.y = CStack_5c.y;
        CStack_50.z = CStack_5c.z;
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
