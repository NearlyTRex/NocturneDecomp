// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CRock_process_FUN_004c17f0(CRock * this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  longlong lVar1;
  int iVar2;
  float10 fVar3;
  float10 fVar4;
  float10 fVar5;
  double dVar6;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar3 = (float10)(this_ptr->base).velocity.y;
  fVar4 = (float10)(this_ptr->base).velocity.x;
  fVar5 = (float10)(this_ptr->base).velocity.z;
  iVar2 = g_GlobalDeltaTimeInt >> 0x1f;
  fVar3 = SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) * (float10)32767.700000000001;
  dVar6 = crt_math_c_round_FUN_005fe6b0
                    ((double)CONCAT44 /* combine 2-byte values */(iVar2 * 4,
                                      (int)((g_GlobalDeltaTimeInt + iVar2 * -4) -
                                           (uint)(iVar2 << 1 < 0)) >> 2));
  iVar2 = g_GlobalDeltaTimeInt;
  lVar1 = (longlong)SUB84 /* extract 2-byte value */(dVar6,0) * (longlong)(int)ROUND(fVar3);
  *(uint *)this_ptr->field1_0x38 =
       *(int *)this_ptr->field1_0x38 +
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar2 / 2) * (longlong)(int)ROUND(fVar3);
  *(uint *)(this_ptr->field1_0x38 + 4) =
       *(int *)(this_ptr->field1_0x38 + 4) +
       ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
