// Name: core_shotgun.cpp_FUN_005888f0
// Address: 005888f0
// Address Range: [[005888f0, 00588ad2]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_005888f0()

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: byte actors_weapon_shotgun.cpp_FUN_005888f0(uint param_1) */

void core_shotgun_cpp_FUN_005888f0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  byte auStack_60 [12];
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_60 + 8),input_local_point);
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_60,(CVector3f *)&stack0xfffffff4);
  fStack_20 = -(float)auStack_60._4_4_;
  fStack_1c = -(float)auStack_60._8_4_;
  fStack_18 = -fStack_54;
  fStack_14 = fStack_50 + (float)auStack_60._4_4_;
  fStack_10 = fStack_4c + (float)auStack_60._8_4_;
  fStack_54 = fStack_48 + fStack_54;
  if (&fStack_38 != &fStack_20) {
    fStack_38 = fStack_20;
    fStack_34 = fStack_1c;
    fStack_30 = fStack_18;
  }
  auStack_60._0_4_ = SQRT(fStack_30 * fStack_30 + fStack_38 * fStack_38 + fStack_34 * fStack_34);
  if ((float)auStack_60._0_4_ <= 0.0) {
    fStack_34 = 0.0;
    fStack_38 = 0.0;
    fStack_30 = 0.0;
  }
  else {
    fVar1 = 1.0 / (float)auStack_60._0_4_;
    fStack_38 = fStack_38 * fVar1;
    fStack_34 = fStack_34 * fVar1;
    fStack_30 = fStack_30 * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  in_stack_00000004[4].actor_name[0x1c] = '\x01';
  in_stack_00000004[4].actor_name[0x1d] = '\0';
  in_stack_00000004[4].actor_name[0x1e] = '\0';
  in_stack_00000004[4].actor_name[0x1f] = '\0';
  fStack_54 = fStack_54 - fStack_48;
  in_stack_00000004[4].location.position.x =
       SQRT((0.0 - local_44) * (0.0 - local_44) +
            (fStack_10 - fStack_4c) * (fStack_10 - fStack_4c) + fStack_54 * fStack_54);
  return;
}
