// Name: core_fire.cpp_CRock_process_FUN_0049a010
// Address: 0049a010
// Address Range: [[0049a010, 0049a08c]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CRock_process_FUN_0049a010(CRock *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CRock_process_FUN_0049a010(CRock *this_ptr)

{
  int *piVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  
  core_particle_cpp_FUN_00509f30(this_ptr);
  fVar5 = (float10)(this_ptr->base).velocity.y;
  fVar6 = (float10)(this_ptr->base).velocity.x;
  fVar7 = (float10)(this_ptr->base).velocity.z;
  fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) * (float10)_DAT_005c05a0;
  iVar4 = round();
  iVar3 = _DAT_01c5fad0;
  lVar2 = (longlong)iVar4 * (longlong)(int)ROUND(fVar5);
  (this_ptr->rotation).x =
       (this_ptr->rotation).x + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  lVar2 = (longlong)(iVar3 / 2) * (longlong)(int)ROUND(fVar5);
  piVar1 = &(this_ptr->rotation).y;
  *piVar1 = *piVar1 + ((uint)lVar2 >> 0x10 | (int)((ulonglong)lVar2 >> 0x20) << 0x10);
  return;
}
