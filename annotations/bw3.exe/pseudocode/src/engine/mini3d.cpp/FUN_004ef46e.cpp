// Name: engine_mini3d.cpp_FUN_004ef46e
// Address: 004ef46e
// Address Range: [[004ef46e, 004ef46f]]
// Convention: unknown
// Signature: void engine_mini3d_cpp_FUN_004ef46e(float *param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void engine_mini3d_cpp_FUN_004ef46e(float *param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  int iVar7;
  float fStack_78;
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_2c;
  
  if (0.0 < _DAT_01d76cc8) {
    fStack_78 = -(param_1[5] * *(float *)(_DAT_01d76cfc + 0x38) +
                 param_1[4] * *(float *)(_DAT_01d76cfc + 0x34) +
                 param_1[3] * *(float *)(_DAT_01d76cfc + 0x30));
    if (0.0 <= fStack_78) {
      if (0x3f800000 < (int)fStack_78) {
        fStack_78 = 1.0;
      }
    }
    else {
      fStack_78 = 0.0;
    }
    fStack_78 = (1.0 - _DAT_01d76cd4) * fStack_78 + _DAT_01d76cd4;
    if (0.0 <= fStack_78) {
      if (0x3f800000 < (int)fStack_78) {
        fStack_78 = 1.0;
      }
      goto LAB_004ef49e;
    }
  }
  fStack_78 = 0.0;
LAB_004ef49e:
  iVar7 = 0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  fStack_4c = 0.0;
  if (0 < _DAT_01d79784) {
    pfVar6 = (float *)0x1d79788;
    if (0 < _DAT_01d79784) {
      do {
        if ((*(char *)(iVar7 + 0x1d7a660) != '\0') &&
           (fStack_2c = (param_1[5] * _DAT_01d7f520 +
                        param_1[4] * _DAT_01d7f510 + param_1[3] * _DAT_01d7f500) * pfVar6[0xb] +
                        (param_1[5] * _DAT_01d7f51c +
                        param_1[4] * _DAT_01d7f50c + param_1[3] * _DAT_01d7f4fc) * pfVar6[8] +
                        (param_1[5] * _DAT_01d7f518 +
                        param_1[3] * _DAT_01d7f4f8 + param_1[4] * _DAT_01d7f508) * pfVar6[5],
           fStack_2c < 0.0)) {
          fVar4 = (param_1[2] * _DAT_01d7f518 +
                   *param_1 * _DAT_01d7f4f8 + param_1[1] * _DAT_01d7f508 + _DAT_01d7f528) - *pfVar6;
          fVar1 = (param_1[2] * _DAT_01d7f51c +
                   *param_1 * _DAT_01d7f4fc + param_1[1] * _DAT_01d7f50c + _DAT_01d7f52c) -
                  pfVar6[1];
          fVar3 = (param_1[2] * _DAT_01d7f520 +
                   *param_1 * _DAT_01d7f500 + param_1[1] * _DAT_01d7f510 + _DAT_01d7f530) -
                  pfVar6[2];
          fVar2 = fVar3 * pfVar6[0xb] + fVar1 * pfVar6[8] + fVar4 * pfVar6[5];
          fStack_2c = -fStack_2c;
          if (((0.0 < fVar2) &&
              (((fVar2 < pfVar6[0xd] &&
                (fVar5 = fVar3 * pfVar6[9] + fVar1 * pfVar6[6] + fVar4 * pfVar6[3], fVar5 < fVar2))
               && (-fVar2 < fVar5)))) &&
             (((fVar1 = fVar3 * pfVar6[10] + fVar1 * pfVar6[7] + fVar4 * pfVar6[4], fVar1 < fVar2 &&
               (-fVar2 < fVar1)) &&
              (fVar5 = fVar5 * (1.0 / fVar2), fVar1 = fVar1 * (1.0 / fVar2),
              fVar1 = fVar1 * fVar1 + fVar5 * fVar5, (int)fVar1 < 0x3f800000)))) {
            fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + _DAT_01d1a0a4)) *
                    _DAT_01d76cc8 * fStack_2c * (1.0 - fVar2 / pfVar6[0xd]);
            fStack_4c = pfVar6[0x10] * fVar1 + fStack_4c;
            fStack_48 = pfVar6[0x11] * fVar1 + fStack_48;
            fStack_44 = pfVar6[0x12] * fVar1 + fStack_44;
          }
        }
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 0x13;
      } while (iVar7 < _DAT_01d79784);
    }
  }
  fStack_78 = _DAT_01d76cc8 * fStack_78;
  *param_2 = fStack_44 * _DAT_01d76cc8 + fStack_78;
  if (0x3f800000 < (int)*param_2) {
    *param_2 = 1.0;
  }
  param_2[1] = fStack_48 * _DAT_01d76cc8 + fStack_78;
  if (0x3f800000 < (int)param_2[1]) {
    param_2[1] = 1.0;
  }
  param_2[2] = fStack_4c * _DAT_01d76cc8 + fStack_78;
  if (0x3f800000 < (int)param_2[2]) {
    param_2[2] = 1.0;
  }
  param_2[3] = _DAT_01d76c40;
  return;
}
