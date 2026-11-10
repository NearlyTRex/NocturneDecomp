// Name: core_boneguy.cpp_rgbToHsv_FUN_0041b3cc
// Address: 0041b3cc
// Address Range: [[0041b3cc, 0041b576]]
// Convention: unknown
// Signature: void core_boneguy_cpp_rgbToHsv_FUN_0041b3cc(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_boneguy_cpp_rgbToHsv_FUN_0041b3cc(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float *unaff_ESI;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_20;
  
  fVar1 = *param_1;
  fVar2 = param_1[1];
  fVar3 = param_1[2];
  fStack_20 = fVar1;
  if (fVar2 < fVar1) {
    fStack_20 = fVar2;
  }
  if (fVar3 < fStack_20) {
    fStack_20 = fVar3;
  }
  fStack_40 = fVar1;
  if (fVar1 < fVar2) {
    fStack_40 = fVar2;
  }
  if (fStack_40 < fVar3) {
    fStack_40 = fVar3;
  }
  fStack_20 = fStack_40 - fStack_20;
  if (fStack_40 <= 0.0) {
    fStack_48 = 0.0;
  }
  else {
    fStack_48 = fStack_20 / fStack_40;
  }
  if (fStack_48 <= 0.0) {
    fStack_44 = 0.0;
  }
  else {
    fStack_48 = fStack_48 * (float)_DAT_005d4561;
    if (fVar1 == fStack_40) {
      fStack_20 = (fVar2 - fVar3) / fStack_20;
    }
    else if (fVar2 == fStack_40) {
      fStack_20 = (float)_DAT_005d4571 - (fVar3 - fVar1) / fStack_20;
    }
    else {
      fStack_20 = (fVar1 - fVar2) / fStack_20 + (float)_DAT_005d4569;
    }
    fStack_44 = fStack_20 * (float)_DAT_005d4579;
    if (fStack_44 < 0.0) {
      fStack_44 = fStack_44 + _DAT_005d4581;
    }
  }
  *unaff_ESI = fStack_44;
  unaff_ESI[1] = fStack_48;
  unaff_ESI[2] = fStack_40;
  return;
}
