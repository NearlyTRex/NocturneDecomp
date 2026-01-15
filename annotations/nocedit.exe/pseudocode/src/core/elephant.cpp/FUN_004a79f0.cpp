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
  CDemonActor *in_stack_00000004;
  CVector3f CStack_70;
  CVector3f aCStack_64 [2];
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  CVector3f CStack_1c;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*in_stack_00000004->vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,aCStack_64,input_local_point);
  CStack_1c.z = in_stack_00000004[2].orient.heading;
  CStack_1c.x = 0.0;
  CStack_1c.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_70,&CStack_1c);
  fStack_34 = -CStack_70.x;
  fStack_30 = -CStack_70.y;
  fStack_2c = -CStack_70.z;
  fStack_28 = aCStack_64[0].x + CStack_70.x;
  fStack_24 = aCStack_64[0].y + CStack_70.y;
  fStack_20 = aCStack_64[0].z + CStack_70.z;
  if (&fStack_4c != &fStack_34) {
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
    local_44 = fStack_2c;
  }
  fVar1 = SQRT(local_44 * local_44 + fStack_4c * fStack_4c + fStack_48 * fStack_48);
  if (fVar1 <= 0.0) {
    fStack_48 = 0.0;
    fStack_4c = 0.0;
    local_44 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
    local_44 = local_44 * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  in_stack_00000004[4].actor_name[0x1c] = '\x01';
  in_stack_00000004[4].actor_name[0x1d] = '\0';
  in_stack_00000004[4].actor_name[0x1e] = '\0';
  in_stack_00000004[4].actor_name[0x1f] = '\0';
  in_stack_00000004[4].location.position.x =
       SQRT((fStack_20 - aCStack_64[0].z) * (fStack_20 - aCStack_64[0].z) +
            (fStack_28 - aCStack_64[0].x) * (fStack_28 - aCStack_64[0].x) +
            (fStack_24 - aCStack_64[0].y) * (fStack_24 - aCStack_64[0].y));
  return;
}
