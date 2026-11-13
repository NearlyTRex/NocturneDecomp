// Name: engine_mini3d.cpp_dynamicLightHint_FUN_005142c0
// Address: 005142c0
// Address Range: [[005142c0, 005145a5]]
// Convention: __cdecl
// Signature: void __cdecl engine_mini3d_cpp_dynamicLightHint_FUN_005142c0(float *arg1,float *arg2,float *arg3,float *arg4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl engine_mini3d_cpp_dynamicLightHint_FUN_005142c0(float *arg1,float *arg2,float *arg3,float *arg4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  byte bVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  float *pfStack_20;
  int iStack_1c;
  
  iVar3 = _DAT_01d25004;
  if ((_DAT_01d25004 != 0) &&
     (((_DAT_02c834a4 == 0 || (_DAT_01c50948 == 0)) || (_DAT_02c834a8 != (code *)0x0)))) {
    if (arg1 == (float *)0x0) {
      iVar9 = 0;
      if (0 < _DAT_01d25004) {
        do {
          iVar10 = iVar9 + 1;
          *(byte *)(iVar9 + 0x1d25ee0) = 1;
          iVar9 = iVar10;
        } while (iVar10 < iVar3);
      }
      if ((_DAT_02c834a8 != (code *)0x0) && (_DAT_01c50948 != 0)) {
        (*_DAT_02c834a8)(0x1d25ee0);
      }
    }
    else {
      iStack_1c = 0;
      if (0 < _DAT_01d25004) {
        pfStack_20 = (float *)0x1d25008;
        do {
          iVar3 = _DAT_01d25004;
          uVar11 = 0;
          bVar4 = 0xff;
          do {
            if ((uVar11 & 1) == 0) {
              fVar5 = *arg4;
            }
            else {
              fVar5 = *arg3;
            }
            if ((uVar11 & 2) == 0) {
              fVar6 = arg4[1];
            }
            else {
              fVar6 = arg3[1];
            }
            if ((uVar11 & 4) == 0) {
              fVar7 = arg4[2];
            }
            else {
              fVar7 = arg3[2];
            }
            fVar1 = (fVar7 * arg2[5] + fVar5 * arg2[3] + fVar6 * arg2[4] + arg1[1]) - pfStack_20[1];
            fVar2 = (fVar7 * arg2[2] + fVar5 * *arg2 + fVar6 * arg2[1] + *arg1) - *pfStack_20;
            fVar6 = (fVar7 * arg2[8] + fVar5 * arg2[6] + fVar6 * arg2[7] + arg1[2]) - pfStack_20[2];
            fVar5 = (fVar6 * pfStack_20[9] + fVar2 * pfStack_20[3] + fVar1 * pfStack_20[6]) *
                    (1.0 / pfStack_20[0xf]);
            fVar7 = fVar6 * pfStack_20[0xb] + fVar2 * pfStack_20[5] + fVar1 * pfStack_20[8];
            fVar6 = (fVar6 * pfStack_20[10] + fVar2 * pfStack_20[4] + fVar1 * pfStack_20[7]) *
                    (1.0 / pfStack_20[0xf]);
            bVar8 = fVar7 < fVar5;
            if (fVar5 < -fVar7) {
              bVar8 = bVar8 | 2;
            }
            if (fVar7 < fVar6) {
              bVar8 = bVar8 | 4;
            }
            if (fVar6 < -fVar7) {
              bVar8 = bVar8 | 8;
            }
            if (fVar7 <= 0.0) {
              bVar8 = bVar8 | 0x10;
            }
            if (pfStack_20[0xd] < fVar7) {
              bVar8 = bVar8 | 0x20;
            }
            bVar4 = bVar4 & bVar8;
            uVar11 = uVar11 + 1;
          } while ((int)uVar11 < 8);
          *(bool *)(iStack_1c + 0x1d25ee0) = bVar4 == 0;
          iStack_1c = iStack_1c + 1;
          pfStack_20 = pfStack_20 + 0x13;
        } while (iStack_1c < iVar3);
      }
      if ((_DAT_02c834a8 != (code *)0x0) && (_DAT_01c50948 != 0)) {
        (*_DAT_02c834a8)(0x1d25ee0);
        return;
      }
    }
  }
  return;
}
