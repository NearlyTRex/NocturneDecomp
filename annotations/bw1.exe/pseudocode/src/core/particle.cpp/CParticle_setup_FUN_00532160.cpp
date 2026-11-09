// Name: core_particle.cpp_CParticle_setup_FUN_00532160
// Address: 00532160
// Address Range: [[00532160, 0053224b]]
// Convention: __cdecl
// Signature: void __cdecl core_particle_cpp_CParticle_setup_FUN_00532160(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_particle_cpp_CParticle_setup_FUN_00532160(CParticle *this_ptr,CVector3f *position,CVector3f *velocity)

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
    *(uint *)this_ptr = *(uint *)position;
    *(uint *)(this_ptr + 4) = *(uint *)&position->field_0x4;
    *(uint *)(this_ptr + 8) = *(uint *)&position->field_0x8;
  }
  if (velocity != (CVector3f *)0x0) {
    if ((CVector3f *)(this_ptr + 0xc) != velocity) {
      *(uint *)(this_ptr + 0xc) = *(uint *)velocity;
      *(uint *)(this_ptr + 0x10) = *(uint *)&velocity->field_0x4;
      *(uint *)(this_ptr + 0x14) = *(uint *)&velocity->field_0x8;
    }
    *(uint *)(this_ptr + 0x24) = 0x40a00000;
    *(uint *)(this_ptr + 0x38) = 0;
    return;
  }
  fVar1 = (float)core_actor_cpp_FUN_0040cc00(0x3f490fdb,0x3fc90fdb);
  fVar2 = (float)core_actor_cpp_FUN_0040cc00(0,0x40c90fdb);
  fVar3 = (float10)fcos((float10)fVar2);
  fVar4 = (float10)fcos((float10)fVar1);
  fVar5 = (float10)fsin((float10)fVar2);
  fVar6 = (float10)fsin((float10)fVar1);
  fVar7 = (float10)_DAT_005ec7f1;
  *(float *)(this_ptr + 0x10) = (float)(fVar6 * fVar7);
  *(float *)(this_ptr + 0xc) = (float)(fVar3 * fVar7 * fVar4);
  *(float *)(this_ptr + 0x14) = (float)(fVar5 * fVar7 * fVar4);
  *(uint *)(this_ptr + 0x24) = 0x40a00000;
  *(uint *)(this_ptr + 0x38) = 0;
  return;
}
