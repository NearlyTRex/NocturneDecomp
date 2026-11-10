// Name: core_dcube.cpp_intersectXZCylinder_FUN_00444c90
// Address: 00444c90
// Address Range: [[00444c90, 00444f61]]
// Convention: __cdecl
// Signature: int __cdecl core_dcube_cpp_intersectXZCylinder_FUN_00444c90(SIntersectXZCylinder *cylinder)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_dcube_cpp_intersectXZCylinder_FUN_00444c90(SIntersectXZCylinder *cylinder)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  float local_3c;
  float local_14;
  float local_10;
  
  fVar4 = *(float *)(cylinder + 0x48) - *(float *)(cylinder + 0x40);
  fVar2 = *(float *)(cylinder + 0x44) - *(float *)(cylinder + 0x3c);
  local_10 = -fVar4;
  fVar3 = fVar2 * fVar2 + local_10 * local_10;
  if (0.0 < fVar3) {
    local_14 = 1.0 / SQRT(fVar3);
    local_10 = local_10 * local_14;
    local_14 = fVar2 * local_14;
    if (0.0 < (*(float *)(cylinder + 0x14) - *(float *)(cylinder + 0x40)) * local_14 +
              (*(float *)(cylinder + 0x10) - *(float *)(cylinder + 0x3c)) * local_10) {
      local_14 = -local_14;
      local_10 = -local_10;
    }
    fVar3 = *(float *)(cylinder + 0x1c) * local_14 + *(float *)(cylinder + 0x18) * local_10;
    if (fVar3 <= 0.0) {
      return 0;
    }
    local_3c = *(float *)(cylinder + 0x40) * local_14 + *(float *)(cylinder + 0x3c) * local_10;
    if (local_3c < *(float *)(cylinder + 0x14) * local_14 + *(float *)(cylinder + 0x10) * local_10)
    {
      return 0;
    }
    fVar6 = local_10 * *(float *)(cylinder + 0x20) + *(float *)(cylinder + 0x10);
    fVar5 = local_14 * *(float *)(cylinder + 0x20) + *(float *)(cylinder + 0x14);
    local_3c = local_3c - (fVar5 * local_14 + fVar6 * local_10);
    if (fVar3 < local_3c) {
      return 0;
    }
    local_3c = local_3c / fVar3;
    if (*(float *)cylinder <= local_3c) {
      return 0;
    }
    *(float *)(cylinder + 0x54) = *(float *)(cylinder + 0x18) * local_3c + fVar6;
    *(float *)(cylinder + 0x58) = *(float *)(cylinder + 0x1c) * local_3c + fVar5;
    if (ABS(fVar2) <= ABS(fVar4)) {
      fVar2 = (*(float *)(cylinder + 0x58) - *(float *)(cylinder + 0x40)) / fVar4;
    }
    else {
      fVar2 = (*(float *)(cylinder + 0x54) - *(float *)(cylinder + 0x3c)) / fVar2;
    }
    *(float *)(cylinder + 0x50) = fVar2;
    if (0.0 <= *(float *)(cylinder + 0x50)) {
      if (*(float *)(cylinder + 0x50) <= 1.0) {
        if (local_3c < 0.0) {
          local_3c = 0.0;
        }
        *(float *)(cylinder + 0x4c) = local_3c;
        return 1;
      }
      *(uint *)(cylinder + 0x50) = 0x3f800000;
      uVar1 = *(uint *)(cylinder + 0x44);
      uVar7 = *(uint *)(cylinder + 0x48);
    }
    else {
      *(uint *)(cylinder + 0x50) = 0;
      uVar1 = *(uint *)(cylinder + 0x3c);
      uVar7 = *(uint *)(cylinder + 0x40);
    }
    *(uint *)(cylinder + 0x58) = uVar7;
    *(uint *)(cylinder + 0x54) = uVar1;
    fVar3 = *(float *)(cylinder + 0x54) - *(float *)(cylinder + 0x10);
    fVar5 = *(float *)(cylinder + 0x58) - *(float *)(cylinder + 0x14);
    fVar2 = *(float *)(cylinder + 0x1c) * *(float *)(cylinder + 0x1c) +
            *(float *)(cylinder + 0x18) * *(float *)(cylinder + 0x18);
    fVar4 = (*(float *)(cylinder + 0x1c) * fVar5 + *(float *)(cylinder + 0x18) * fVar3) *
            _DAT_005ce7da;
    fVar3 = fVar4 * fVar4 -
            fVar2 * _DAT_005ce7de *
            ((fVar5 * fVar5 + fVar3 * fVar3) -
            *(float *)(cylinder + 0x20) * *(float *)(cylinder + 0x20));
    if (0.0 <= fVar3) {
      fVar2 = (-fVar4 - SQRT(fVar3)) / (fVar2 * _DAT_005ce7e2);
      *(float *)(cylinder + 0x4c) = fVar2;
      if (((0.0 <= fVar2) && (fVar2 <= 1.0)) && (*(float *)(cylinder + 0x4c) < *(float *)cylinder))
      {
        return 1;
      }
    }
  }
  return 0;
}
