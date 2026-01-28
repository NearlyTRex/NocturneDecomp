// Name: core_elephant.cpp_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7bd2]]
// Convention: unknown
// Signature: void core_elephant_cpp_FUN_004a79f0(void)

#include "nocturne.h"

/* Signature: byte actors_other_emitter.cpp_FUN_004a79f0(uint param_1) */

void core_elephant_cpp_FUN_004a79f0(void)

{
  float fVar1;
  int iVar2;
  CVector3f *input_local_point;
  CDemonActor *in_stack_00000004;
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  CVector3f CStack_20;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
  if (iVar2 != 0) {
    return;
  }
  input_local_point = (CVector3f *)(*(((in_stack_00000004->vtable)._uc)->_uc).cfunc3)();
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,aCStack_68,input_local_point);
  CStack_20.z = in_stack_00000004[2].orient.heading;
  CStack_20.x = 0.0;
  CStack_20.y = 0.0;
  core_actor_cpp_CDemonActor_transformVector_FUN_00408e80(in_stack_00000004,&CStack_74,&CStack_20);
  fStack_38 = -CStack_74.x;
  fStack_34 = -CStack_74.y;
  fStack_30 = -CStack_74.z;
  fStack_2c = aCStack_68[0].x + CStack_74.x;
  fStack_28 = aCStack_68[0].y + CStack_74.y;
  fStack_24 = aCStack_68[0].z + CStack_74.z;
  if (&fStack_50 != &fStack_38) {
    fStack_50 = fStack_38;
    fStack_4c = fStack_34;
    fStack_48 = fStack_30;
  }
  fVar1 = SQRT(fStack_48 * fStack_48 + fStack_50 * fStack_50 + fStack_4c * fStack_4c);
  if (fVar1 <= 0.0) {
    fStack_4c = 0.0;
    fStack_50 = 0.0;
    fStack_48 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_50 = fStack_50 * fVar1;
    fStack_4c = fStack_4c * fVar1;
    fStack_48 = fStack_48 * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  in_stack_00000004[4].actor_name[0x1c] = '\x01';
  in_stack_00000004[4].actor_name[0x1d] = '\0';
  in_stack_00000004[4].actor_name[0x1e] = '\0';
  in_stack_00000004[4].actor_name[0x1f] = '\0';
  in_stack_00000004[4].location.position.x =
       SQRT((fStack_24 - aCStack_68[0].z) * (fStack_24 - aCStack_68[0].z) +
            (fStack_2c - aCStack_68[0].x) * (fStack_2c - aCStack_68[0].x) +
            (fStack_28 - aCStack_68[0].y) * (fStack_28 - aCStack_68[0].y));
  return;
}
