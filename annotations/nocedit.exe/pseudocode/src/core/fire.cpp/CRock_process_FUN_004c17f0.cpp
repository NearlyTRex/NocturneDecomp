// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  longlong lVar5;
  int iVar6;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar6 = g_GlobalDeltaTimeInt;
  fVar2 = (this_ptr->base).velocity.y;
  fVar3 = (this_ptr->base).velocity.x;
  fVar4 = (this_ptr->base).velocity.z;
  iVar1 = (int)ROUND(ROUND(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) *
                           (float)32767.700000000001));
  lVar5 = (longlong)
          ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
                (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2) * (longlong)iVar1;
  *(uint *)this_ptr->unk =
       *(int *)this_ptr->unk + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  lVar5 = (longlong)(iVar6 / 2) * (longlong)iVar1;
  *(uint *)(this_ptr->unk + 4) =
       *(int *)(this_ptr->unk + 4) + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10)
  ;
  return;
}
