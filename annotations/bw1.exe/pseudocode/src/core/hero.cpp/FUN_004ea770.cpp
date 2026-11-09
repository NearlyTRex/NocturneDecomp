// Name: core_hero.cpp_FUN_004ea770
// Address: 004ea770
// Address Range: [[004ea770, 004ea821]]
// Convention: __cdecl
// Signature: int __cdecl core_hero_cpp_FUN_004ea770(CVector3f *point,float horizontal_radius,float vertical_tolerance)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_hero_cpp_FUN_004ea770(CVector3f *point,float horizontal_radius,float vertical_tolerance)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  
  if (0 < _DAT_01d06aa0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(iVar4 + 0x1d06aa4);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *(float *)point;
        fVar3 = *(float *)(iVar1 + 0x28) - *(float *)&point->field_0x8;
        if (ABS(*(float *)(iVar1 + 0x24) - *(float *)&point->field_0x4) <= vertical_tolerance) {
          if (fVar2 * fVar2 + fVar3 * fVar3 < horizontal_radius * horizontal_radius) {
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < _DAT_01d06aa0 * 4);
  }
  return 0;
}
