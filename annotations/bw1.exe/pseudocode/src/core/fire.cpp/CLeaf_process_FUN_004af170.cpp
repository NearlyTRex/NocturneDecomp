// Name: core_fire.cpp_CLeaf_process_FUN_004af170
// Address: 004af170
// Address Range: [[004af170, 004af26e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_process_FUN_004af170(CLeaf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLeaf_process_FUN_004af170(CLeaf *this_ptr)

{
  CVector3f *pCVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  float fStack_28;
  uint uStack_20;
  
  core_particle_cpp_CParticle_process_FUN_00532250(&this_ptr->base);
  pCVar1 = &(this_ptr->base).velocity;
  fVar2 = (this_ptr->base).velocity.y;
  fVar3 = (this_ptr->base).velocity.z;
  fVar2 = SQRT(fVar3 * fVar3 + pCVar1->x * pCVar1->x + fVar2 * fVar2);
  iVar8 = _DAT_01c43530 >> 0x1f;
  iVar5 = _DAT_01c43530 + iVar8 * -4;
  uStack_20 = SUB84(__BITCAST_UINT64((double)fVar2),0);
  dVar9 = round((double)(fVar2 * (float)_DAT_005df27c));
  iVar7 = _DAT_01c43530;
  lVar6 = (longlong)((int)(iVar5 - (uint)(iVar8 << 1 < 0)) >> 2) * (longlong)(int)ROUND(dVar9);
  (this_ptr->rotation).x =
       (this_ptr->rotation).x + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  lVar6 = (longlong)(iVar7 / 2) * (longlong)(int)ROUND(dVar9);
  (this_ptr->rotation).y =
       (this_ptr->rotation).y + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10);
  if (0.0 < __BITCAST_DOUBLE(CONCAT44(uStack_20,fVar2))) {
    fVar2 = fStack_28 - fStack_28 * this_ptr->drag * g_CGamePtr->delta_time_float;
    if (0.0 < fVar2) {
      fVar2 = fVar2 / fStack_28;
      fVar3 = (this_ptr->base).velocity.y;
      fVar4 = (this_ptr->base).velocity.z;
      pCVar1->x = pCVar1->x * fVar2;
      (this_ptr->base).velocity.y = fVar3 * fVar2;
      (this_ptr->base).velocity.z = fVar4 * fVar2;
      return;
    }
    (this_ptr->base).velocity.z = 0.0;
    (this_ptr->base).velocity.y = (this_ptr->base).velocity.z;
    pCVar1->x = (this_ptr->base).velocity.y;
  }
  return;
}
