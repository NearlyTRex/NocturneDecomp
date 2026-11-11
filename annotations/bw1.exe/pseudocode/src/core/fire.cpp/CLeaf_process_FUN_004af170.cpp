// Name: core_fire.cpp_CLeaf_process_FUN_004af170
// Address: 004af170
// Address Range: [[004af170, 004af26e]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CLeaf_process_FUN_004af170(CLeaf *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CLeaf_process_FUN_004af170(CLeaf *this_ptr)

{
  float fVar1;
  longlong lVar2;
  float fVar3;
  int iVar4;
  int iVar5;
  float *extraout_ECX;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  
  core_particle_cpp_FUN_00532250(this_ptr);
  fVar6 = (float10)(this_ptr->base).velocity.y;
  fVar7 = (float10)(this_ptr->base).velocity.x;
  fVar8 = (float10)(this_ptr->base).velocity.z;
  fVar6 = SQRT(fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6);
  fVar1 = (float)fVar6;
  fVar7 = fVar6 * (float10)_DAT_005df27c;
  iVar5 = round();
  iVar4 = _DAT_01c43530;
  lVar2 = (longlong)iVar5 * (longlong)(int)ROUND(fVar7);
  (this_ptr->rotation).x =
       (this_ptr->rotation).x + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(iVar4 / 2) * (longlong)(int)ROUND(fVar7);
  (this_ptr->rotation).y =
       (this_ptr->rotation).y + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  if (0.0 < (double)fVar6) {
    fVar3 = fVar1 - fVar1 * this_ptr->drag * g_CGamePtr->delta_time_float;
    if (0.0 < fVar3) {
      fVar3 = fVar3 / fVar1;
      *extraout_ECX = *extraout_ECX * fVar3;
      extraout_ECX[1] = extraout_ECX[1] * fVar3;
      extraout_ECX[2] = extraout_ECX[2] * fVar3;
      return;
    }
    extraout_ECX[2] = 0.0;
    extraout_ECX[1] = extraout_ECX[2];
    *extraout_ECX = extraout_ECX[1];
  }
  return;
}
