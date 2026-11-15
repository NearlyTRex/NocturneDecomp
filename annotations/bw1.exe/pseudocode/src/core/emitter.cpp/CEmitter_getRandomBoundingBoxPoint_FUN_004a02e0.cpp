// Name: core_emitter.cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a02e0
// Address: 004a02e0
// Address Range: [[004a02e0, 004a0383]]
// Convention: __stack_esi
// Signature: CVector3f * __stack_esi core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a02e0(CEmitter *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __stack_esi core_emitter_cpp_CEmitter_getRandomBoundingBoxPoint_FUN_004a02e0(CEmitter *this_ptr,CVector3f *out_point)

{
  int iVar1;
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
  uint uStack_10;
  
  bVar4 = 0;
  (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,in_stack_ffffffa8);
  puVar3 = (uint *)&stack0xffffffc8;
  puVar2 = (uint *)&stack0xffffffa8;
  for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
  }
  CStack_20.x = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_50,fStack_44);
  CStack_20.y = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_4c,local_40);
  CStack_20.z = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(fStack_48,fStack_3c);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408b40
            (&this_ptr->base,&CStack_20,(CVector3f *)&fStack_14);
  puVar3 = (uint *)((int)out_point + (uint)bVar4 * -8 + 4);
  out_point->x = fStack_14;
  *puVar3 = (&uStack_10)[(uint)bVar4 * -2];
  puVar3[(uint)bVar4 * -2 + 1] =
       *(uint *)(&stack0xfffffff4 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  return out_point;
}
