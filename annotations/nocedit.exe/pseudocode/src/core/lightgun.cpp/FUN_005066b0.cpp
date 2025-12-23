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
  CDemonActor *in_stack_00000004;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  float fStack_4c;
  CVector3f CStack_48;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  float fStack_14;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 == 0) {
    input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004)
    ;
    core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
              (in_stack_00000004,&CStack_48,input_local_point);
    CStack_5c.z = in_stack_00000004[2].orient.heading;
    CStack_5c.x = 0.0;
    CStack_5c.y = 0.0;
    core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_20,&CStack_5c)
    ;
    fStack_4c = -CStack_20.y;
    CStack_48.x = -CStack_20.z;
    CStack_48.y = -fStack_14;
    fStack_34 = CStack_48.z + CStack_20.y;
    fStack_30 = fStack_3c + CStack_20.z;
    fStack_2c = fStack_38 + fStack_14;
    if (&fStack_2c != &fStack_4c) {
      fStack_28 = fStack_4c;
      fStack_24 = CStack_48.x;
      CStack_20.x = CStack_48.y;
    }
    fVar1 = SQRT(CStack_20.x * CStack_20.x + fStack_28 * fStack_28 + fStack_24 * fStack_24);
    if (fVar1 <= 0.0) {
      fStack_24 = 0.0;
      fStack_28 = 0.0;
      CStack_20.x = 0.0;
    }
    else {
      fVar1 = 1.0 / fVar1;
      fStack_28 = fStack_28 * fVar1;
      fStack_24 = fStack_24 * fVar1;
      CStack_20.x = CStack_20.x * fVar1;
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
      CStack_5c.y = fStack_28 - fStack_34;
      fStack_38 = fStack_2c - fStack_38;
      CStack_5c.z = fStack_24 - fStack_30;
      fVar1 = SQRT(CStack_5c.z * CStack_5c.z + fStack_38 * fStack_38 + CStack_5c.y * CStack_5c.y);
      if (0.0 < fVar1) {
        fVar1 = 1.0 / fVar1;
        CStack_5c.x = fStack_38 * fVar1;
        CStack_5c.y = CStack_5c.y * fVar1;
        CStack_5c.z = CStack_5c.z * fVar1;
      }
      else {
        CStack_5c.y = 0.0;
        CStack_5c.x = 0.0;
        CStack_5c.z = 0.0;
      }
      CStack_68.z = (float)in_stack_00000004[4].location.area_id * (float)0.015625;
      CStack_68.x = CStack_5c.x * CStack_68.z;
      CStack_68.y = CStack_5c.y * CStack_68.z;
      CStack_68.z = CStack_5c.z * CStack_68.z;
      if (&CStack_5c != &CStack_68) {
        CStack_5c.x = CStack_68.x;
        CStack_5c.y = CStack_68.y;
        CStack_5c.z = CStack_68.z;
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
