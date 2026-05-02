// Name: core_fire.cpp_CRock_process_FUN_004c17f0
// Address: 004c17f0
// MANUAL RECONSTRUCTION
// Address Range: [[004c17f0, 004c1867]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

#include "nocturne.h"

void __cdecl core_fire_cpp_CRock_process_FUN_004c17f0(CRock *this_ptr)

{
  longlong lVar1;
  int iVar2;
  int *piVar1;
  float fVar4;
  float fVar3;
  longlong lVar6;
  float fVar5;
  int iVar7;
  
  core_particle_cpp_CParticle_process_FUN_00545760(&this_ptr->base);
  iVar7 = g_GlobalDeltaTimeInt;
  fVar3 = (this_ptr->base).velocity.y;
  fVar4 = (this_ptr->base).velocity.x;
  fVar5 = (this_ptr->base).velocity.z;
  iVar2 = (int)ROUND(ROUND(SQRT(fVar5 * fVar5 + fVar4 * fVar4 + fVar3 * fVar3) *
                           (float)32767.700000000001));
  lVar6 = (longlong)
          ((int)((g_GlobalDeltaTimeInt + (g_GlobalDeltaTimeInt >> 0x1f) * -4) -
                (uint)((g_GlobalDeltaTimeInt >> 0x1f) << 1 < 0)) >> 2) * (longlong)iVar2;
  (this_ptr->rotation).x =
       (this_ptr->rotation).x + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar1 = (longlong)(iVar7 / 2) * (longlong)iVar2;
  piVar1 = &(this_ptr->rotation).y;
  *piVar1 = *piVar1 + ((uint)lVar1 >> 0x10 | (int)((ulonglong)lVar1 >> 0x20) << 0x10);
  return;
}
