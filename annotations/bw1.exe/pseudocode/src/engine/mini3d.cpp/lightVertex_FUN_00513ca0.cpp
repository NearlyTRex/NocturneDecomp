// Name: engine_mini3d.cpp_lightVertex_FUN_00513ca0
// Address: 00513ca0
// Address Range: [[00513ca0, 005140b3]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_lightVertex_FUN_00513ca0(float *vertex,float *out_color)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_lightVertex_FUN_00513ca0(float *vertex,float *out_color)

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
  
  if (0.0 < _DAT_01d22548) {
    fStack_78 = -(vertex[5] * *(float *)(_DAT_01d2257c + 0x38) +
                 vertex[4] * *(float *)(_DAT_01d2257c + 0x34) +
                 vertex[3] * *(float *)(_DAT_01d2257c + 0x30));
    if (0.0 <= fStack_78) {
      if (0x3f800000 < (int)fStack_78) {
        fStack_78 = 1.0;
      }
    }
    else {
      fStack_78 = 0.0;
    }
    fStack_78 = (1.0 - _DAT_01d22554) * fStack_78 + _DAT_01d22554;
    if (0.0 <= fStack_78) {
      if (0x3f800000 < (int)fStack_78) {
        fStack_78 = 1.0;
      }
      goto LAB_00513cce;
    }
  }
  fStack_78 = 0.0;
LAB_00513cce:
  iVar7 = 0;
  fStack_48 = 0.0;
  fStack_44 = 0.0;
  fStack_4c = 0.0;
  if (0 < _DAT_01d25004) {
    pfVar6 = (float *)0x1d25008;
    if (0 < _DAT_01d25004) {
      do {
        if ((*(char *)(iVar7 + 0x1d25ee0) != '\0') &&
           (fStack_2c = (vertex[5] * _DAT_01d2ada0 +
                        vertex[4] * _DAT_01d2ad90 + vertex[3] * _DAT_01d2ad80) * pfVar6[0xb] +
                        (vertex[5] * _DAT_01d2ad9c +
                        vertex[4] * _DAT_01d2ad8c + vertex[3] * _DAT_01d2ad7c) * pfVar6[8] +
                        (vertex[5] * _DAT_01d2ad98 +
                        vertex[3] * _DAT_01d2ad78 + vertex[4] * _DAT_01d2ad88) * pfVar6[5],
           fStack_2c < 0.0)) {
          fVar4 = (vertex[2] * _DAT_01d2ad98 + *vertex * _DAT_01d2ad78 + vertex[1] * _DAT_01d2ad88 +
                  _DAT_01d2ada8) - *pfVar6;
          fVar1 = (vertex[2] * _DAT_01d2ad9c + *vertex * _DAT_01d2ad7c + vertex[1] * _DAT_01d2ad8c +
                  _DAT_01d2adac) - pfVar6[1];
          fVar3 = (vertex[2] * _DAT_01d2ada0 + *vertex * _DAT_01d2ad80 + vertex[1] * _DAT_01d2ad90 +
                  _DAT_01d2adb0) - pfVar6[2];
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
            fVar1 = (1.0 - (float)(((int)fVar1 >> 1) + _DAT_01cc804c)) *
                    _DAT_01d22548 * fStack_2c * (1.0 - fVar2 / pfVar6[0xd]);
            fStack_4c = pfVar6[0x10] * fVar1 + fStack_4c;
            fStack_48 = pfVar6[0x11] * fVar1 + fStack_48;
            fStack_44 = pfVar6[0x12] * fVar1 + fStack_44;
          }
        }
        iVar7 = iVar7 + 1;
        pfVar6 = pfVar6 + 0x13;
      } while (iVar7 < _DAT_01d25004);
    }
  }
  fStack_78 = _DAT_01d22548 * fStack_78;
  *out_color = fStack_44 * _DAT_01d22548 + fStack_78;
  if (0x3f800000 < (int)*out_color) {
    *out_color = 1.0;
  }
  out_color[1] = fStack_48 * _DAT_01d22548 + fStack_78;
  if (0x3f800000 < (int)out_color[1]) {
    out_color[1] = 1.0;
  }
  out_color[2] = fStack_4c * _DAT_01d22548 + fStack_78;
  if (0x3f800000 < (int)out_color[2]) {
    out_color[2] = 1.0;
  }
  out_color[3] = _DAT_01d224c0;
  return;
}
