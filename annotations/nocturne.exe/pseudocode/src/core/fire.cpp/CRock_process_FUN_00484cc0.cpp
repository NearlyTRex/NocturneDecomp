// Name: core_fire.cpp_CRock_process_FUN_00484cc0
// Address: 00484cc0
// Address Range: [[00484cc0, 00484d37]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_process_FUN_00484cc0(CRock *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRock_process_FUN_00484cc0(CRock *this_ptr)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  core_particle_cpp_CParticle_process_FUN_004ef120(&this_ptr->base);
  fVar2 = (this_ptr->base).velocity.y;
  fVar3 = (this_ptr->base).velocity.x;
  fVar4 = (this_ptr->base).velocity.z;
  iVar8 = _DAT_01bd1d80 >> 0x1f;
  iVar5 = _DAT_01bd1d80 + iVar8 * -4;
  dVar9 = round
                    ((double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) *
                             (float)32767.700000000001));
  iVar7 = _DAT_01bd1d80;
  lVar6 = (longlong)((int)(iVar5 - (uint)(iVar8 << 1 < 0)) >> 2) * (longlong)(int)ROUND(dVar9);
  (this_ptr->rotation).x =
       (this_ptr->rotation).x + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar6 = (longlong)(iVar7 / 2) * (longlong)(int)ROUND(dVar9);
  piVar1 = &(this_ptr->rotation).y;
  *piVar1 = *piVar1 + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  return;
}
