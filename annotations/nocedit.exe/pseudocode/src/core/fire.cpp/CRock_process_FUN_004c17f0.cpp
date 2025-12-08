// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRock_process_FUN_004c17f0(CRock * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  longlong lVar4;
  int iVar5;
  int extraout_EAX;
  double dVar6;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar1 = (this_ptr->base).velocity.y;
  fVar2 = (this_ptr->base).velocity.x;
  fVar3 = (this_ptr->base).velocity.z;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) *
                             (float)32767.700000000001));
  iVar5 = g_GlobalDeltaTimeInt;
  lVar4 = (longlong)extraout_EAX * (longlong)(int)ROUND(dVar6);
  *(uint *)this_ptr->field1_0x38 =
       *(int *)this_ptr->field1_0x38 +
       ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  lVar4 = (longlong)(iVar5 / 2) * (longlong)(int)ROUND(dVar6);
  *(uint *)(this_ptr->field1_0x38 + 4) =
       *(int *)(this_ptr->field1_0x38 + 4) +
       ((uint)lVar4 >> 0x10 | (int)((ulonglong)lVar4 >> 0x20) << 0x10);
  return;
}
