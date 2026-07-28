// Name: core_fire.cpp_CRock_process_FUN_00484cc0
// Address: 00484cc0
// Address Range: [[00484cc0, 00484d37]]
// Convention: unknown
// Signature: void core_fire_cpp_CRock_process_FUN_00484cc0(CParticle *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_fire_cpp_CRock_process_FUN_00484cc0(CParticle *param_1)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  longlong lVar6;
  int iVar7;
  int iVar8;
  double dVar9;
  
  core_particle_cpp_CParticle_process_FUN_004ef120(param_1);
  fVar2 = (param_1->velocity).y;
  fVar3 = (param_1->velocity).x;
  fVar4 = (param_1->velocity).z;
  iVar8 = _DAT_01bd1d80 >> 0x1f;
  iVar5 = _DAT_01bd1d80 + iVar8 * -4;
  dVar9 = round
                    ((double)(SQRT(fVar4 * fVar4 + fVar3 * fVar3 + fVar2 * fVar2) *
                             (float)32767.700000000001));
  iVar7 = _DAT_01bd1d80;
  lVar6 = (longlong)((int)(iVar5 - (uint)(iVar8 << 1 < 0)) >> 2) * (longlong)(int)ROUND(dVar9);
  param_1[1].position.x =
       (float)((int)param_1[1].position.x +
              ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10));
  lVar6 = (longlong)(iVar7 / 2) * (longlong)(int)ROUND(dVar9);
  pfVar1 = &param_1[1].position.y;
  *pfVar1 = (float)((int)*pfVar1 + ((uint)lVar6 >> 0x10 | (int)((ulonglong)lVar6 >> 0x20) << 0x10));
  return;
}
