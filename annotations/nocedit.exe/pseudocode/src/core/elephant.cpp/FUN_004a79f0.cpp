// Name: core_elephant.cpp_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7bd2]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a79f0()

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a79f0(uint param_1) */

void core_elephant_cpp_FUN_004a79f0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  byte auStack_6c [12];
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float local_44;
  float fStack_40;
  float fStack_3c;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  CVector3f CStack_18;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,(CVector3f *)(auStack_6c + 8),input_local_point);
  CStack_18.z = in_stack_00000004[2].orient.heading;
  CStack_18.x = 0.0;
  CStack_18.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80
            (in_stack_00000004,(CVector3f *)auStack_6c,&CStack_18);
  fStack_2c = -(float)auStack_6c._4_4_;
  fStack_28 = -(float)auStack_6c._8_4_;
  fStack_24 = -fStack_60;
  fStack_20 = fStack_5c + (float)auStack_6c._4_4_;
  fStack_1c = fStack_58 + (float)auStack_6c._8_4_;
  CStack_18.x = fStack_54 + fStack_60;
  if (&local_44 != &fStack_2c) {
    local_44 = fStack_2c;
    fStack_40 = fStack_28;
    fStack_3c = fStack_24;
  }
  auStack_6c._0_4_ = SQRT(fStack_3c * fStack_3c + local_44 * local_44 + fStack_40 * fStack_40);
  if ((float)auStack_6c._0_4_ <= 0.0) {
    fStack_40 = 0.0;
    local_44 = 0.0;
    fStack_3c = 0.0;
  }
  else {
    fVar1 = 1.0 / (float)auStack_6c._0_4_;
    local_44 = local_44 * fVar1;
    fStack_40 = fStack_40 * fVar1;
    fStack_3c = fStack_3c * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  in_stack_00000004[4].actor_name[0x1c] = '\x01';
  in_stack_00000004[4].actor_name[0x1d] = '\0';
  in_stack_00000004[4].actor_name[0x1e] = '\0';
  in_stack_00000004[4].actor_name[0x1f] = '\0';
  in_stack_00000004[4].location.position.x =
       SQRT((CStack_18.y - fStack_50) * (CStack_18.y - fStack_50) +
            (fStack_1c - fStack_58) * (fStack_1c - fStack_58) +
            (CStack_18.x - fStack_54) * (CStack_18.x - fStack_54));
  return;
}
