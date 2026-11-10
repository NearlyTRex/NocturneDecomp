// Name: core_particle.cpp_CParticle_setup_FUN_00510e00
// Address: 00510e00
// Address Range: [[00510e00, 00510eeb]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_setup_FUN_00510e00(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_particle_cpp_CParticle_setup_FUN_00510e00(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

{
  float fVar1;
  float fVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  *(uint *)(this_ptr + 0x1c) = 0xc2000000;
  *(uint *)(this_ptr + 0x20) = 0;
  *(uint *)(this_ptr + 0x18) = 0;
  if ((CVector3f *)this_ptr != position) {
    *(float *)this_ptr = position->x;
    *(float *)(this_ptr + 4) = position->y;
    *(float *)(this_ptr + 8) = position->z;
  }
  if (velocity != (CVector3f *)0x0) {
    if ((CVector3f *)(this_ptr + 0xc) != velocity) {
      ((CVector3f *)(this_ptr + 0xc))->x = velocity->x;
      *(float *)(this_ptr + 0x10) = velocity->y;
      *(float *)(this_ptr + 0x14) = velocity->z;
    }
    *(uint *)(this_ptr + 0x24) = 0x40a00000;
    *(uint *)(this_ptr + 0x38) = 0;
    return;
  }
  fVar1 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.7853982,1.5707964);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,6.2831855);
  fVar3 = (float10)fcos((float10)fVar2);
  fVar4 = (float10)fcos((float10)fVar1);
  fVar5 = (float10)fsin((float10)fVar2);
  fVar6 = (float10)fsin((float10)fVar1);
  fVar7 = (float10)_DAT_005e1596;
  *(float *)(this_ptr + 0x10) = (float)(fVar6 * fVar7);
  *(float *)(this_ptr + 0xc) = (float)(fVar3 * fVar7 * fVar4);
  *(float *)(this_ptr + 0x14) = (float)(fVar5 * fVar7 * fVar4);
  *(uint *)(this_ptr + 0x24) = 0x40a00000;
  *(uint *)(this_ptr + 0x38) = 0;
  return;
}
