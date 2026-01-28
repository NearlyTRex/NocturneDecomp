// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  fVar1 = (this_ptr->base).velocity.y;
  fVar2 = (this_ptr->base).velocity.x;
  fVar3 = (this_ptr->base).velocity.z;
  iVar7 = g_GlobalDeltaTimeInt >> 0x1f;
  iVar4 = g_GlobalDeltaTimeInt + iVar7 * -4;
  dVar8 = crt_math_c_round_FUN_005fe6b0
                    ((double)(SQRT(fVar3 * fVar3 + fVar2 * fVar2 + fVar1 * fVar1) *
                             (float)32767.700000000001));
  iVar6 = g_GlobalDeltaTimeInt;
  lVar5 = (longlong)((int)(iVar4 - (uint)(iVar7 << 1 < 0)) >> 2) * (longlong)(int)ROUND(dVar8);
  *(uint *)this_ptr->unk =
       *(int *)this_ptr->unk + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10);
  lVar5 = (longlong)(iVar6 / 2) * (longlong)(int)ROUND(dVar8);
  *(uint *)(this_ptr->unk + 4) =
       *(int *)(this_ptr->unk + 4) + ((uint)lVar5 >> 0x10 | (int)((ulonglong)lVar5 >> 0x20) << 0x10)
  ;
  return;
}
