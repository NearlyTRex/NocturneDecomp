// Name: core_emitter.cpp_FUN_004a02e0
// Address: 004a02e0
// Address Range: [[004a02e0, 004a0383]]
// Convention: unknown
// Signature: void core_emitter_cpp_FUN_004a02e0(CDemonActor *param_1)

#include "nocturne.h"

void core_emitter_cpp_FUN_004a02e0(CDemonActor *param_1)

{
  int iVar1;
  float *unaff_ESI;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_ffc [1000];
  CBoundingBox3D *in_stack_ffffffa8;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float local_40;
  float fStack_3c;
  CVector3f CStack_20;
  float fStack_14;
  float fStack_10;
  
  bVar4 = 0;
  (*((param_1->vtable)._ub)->getBoundingBox)(param_1,in_stack_ffffffa8);
  puVar2 = (uint *)&stack0xffffffc8;
  puVar3 = (uint *)&stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  CStack_20.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_50,fStack_44);
  CStack_20.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_4c,local_40);
  CStack_20.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_48,fStack_3c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (param_1,&CStack_20,(CVector3f *)&fStack_14);
  *unaff_ESI = fStack_14;
  unaff_ESI[(uint)bVar4 * -2 + 1] = (&fStack_10)[(uint)bVar4 * -2];
  (unaff_ESI + (uint)bVar4 * -2 + 1)[(uint)bVar4 * -2 + 1] =
       *(float *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return;
}
