// Name: core_dirmat.cpp_FUN_0045b9b0
// Address: 0045b9b0
// Address Range: [[0045b9b0, 0045bdaa]]
// Convention: unknown
// Signature: float * core_dirmat_cpp_FUN_0045b9b0(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float * core_dirmat_cpp_FUN_0045b9b0(float *param_1)

{
  double dVar1;
  double dVar2;
  float fVar3;
  float fVar4;
  float *extraout_ECX;
  float *extraout_ECX_00;
  float *pfVar5;
  float *extraout_ECX_01;
  float *extraout_EDX;
  float *extraout_EDX_00;
  float *extraout_EDX_01;
  float *extraout_EDX_02;
  float *extraout_EDX_03;
  float *extraout_EDX_04;
  float *pfVar6;
  float *extraout_EDX_05;
  float *unaff_ESI;
  byte bVar7;
  float10 fVar8;
  float10 fVar9;
  float afStack_100c [1024];
  
  bVar7 = 0;
  fVar3 = -param_1[5];
  if (fVar3 <= (float)_DAT_005bb16e) {
    afStack_100c[0x3fa] = -1.5707964;
  }
  else if (fVar3 < 1.0) {
    fVar9 = (float10)fVar3;
    fVar8 = fVar9;
    asin();
    fVar8 = SQRT((float10)1 - fVar8 * fVar8);
    afStack_100c[0x3fa] = (float)fVar9;
    param_1 = extraout_ECX;
    unaff_ESI = extraout_EDX_00;
    if (0.0 < (double)fVar8) {
      fVar4 = extraout_ECX[2] * (1.0 / (float)fVar8);
      fVar3 = extraout_ECX[8] * (1.0 / (float)fVar8);
      dVar1 = (double)fVar4;
      dVar2 = (double)fVar3;
      if ((_DAT_005bb176 <= dVar1) || (dVar1 <= _DAT_005bb17e)) {
        pfVar5 = extraout_ECX;
        pfVar6 = extraout_EDX_00;
        if (_DAT_005bb16e < dVar2) {
          if (dVar2 < 1.0) {
            fVar9 = (float10)fVar3;
            acos();
            afStack_100c[0x3f9] = (float)fVar9;
            pfVar5 = extraout_ECX_01;
            pfVar6 = extraout_EDX_04;
          }
          else {
            afStack_100c[0x3f9] = 0.0;
          }
        }
        else {
          afStack_100c[0x3f9] = 3.1415927;
        }
        if (dVar1 < 0.0) {
          afStack_100c[0x3f9] = -afStack_100c[0x3f9];
        }
      }
      else {
        fVar9 = (float10)fVar4;
        asin();
        afStack_100c[0x3f9] = (float)fVar9;
        pfVar5 = extraout_ECX_00;
        pfVar6 = extraout_EDX_01;
        if (dVar2 < 0.0) {
          afStack_100c[0x3f9] = (float)_DAT_005bb186 - afStack_100c[0x3f9];
        }
      }
      if (afStack_100c[0x3f9] < (float)_DAT_005bb18e) {
        afStack_100c[0x3f9] = afStack_100c[0x3f9] + _DAT_005bb196;
      }
      if ((float)_DAT_005bb186 < afStack_100c[0x3f9]) {
        afStack_100c[0x3f9] = afStack_100c[0x3f9] + _DAT_005bb19a;
      }
      fVar3 = pfVar5[4] * (1.0 / (float)fVar8);
      fVar4 = pfVar5[3] * (1.0 / (float)fVar8);
      afStack_100c[0x3fb] = afStack_100c[0x3f9];
      dVar1 = (double)fVar4;
      dVar2 = (double)fVar3;
      if ((_DAT_005bb176 <= dVar1) || (dVar1 <= _DAT_005bb17e)) {
        if (_DAT_005bb16e < dVar2) {
          if (dVar2 < 1.0) {
            fVar8 = (float10)fVar3;
            acos();
            afStack_100c[0x3f7] = (float)fVar8;
            pfVar6 = extraout_EDX_05;
          }
          else {
            afStack_100c[0x3f7] = 0.0;
          }
        }
        else {
          afStack_100c[0x3f7] = 3.1415927;
        }
        if (dVar1 < 0.0) {
          afStack_100c[0x3f7] = -afStack_100c[0x3f7];
        }
      }
      else {
        fVar8 = (float10)fVar4;
        asin();
        afStack_100c[0x3f7] = (float)fVar8;
        pfVar6 = extraout_EDX_02;
        if (dVar2 < 0.0) {
          afStack_100c[0x3f7] = (float)_DAT_005bb186 - afStack_100c[0x3f7];
        }
      }
      if (afStack_100c[0x3f7] < (float)_DAT_005bb18e) {
        afStack_100c[0x3f7] = afStack_100c[0x3f7] + _DAT_005bb196;
      }
      if ((float)_DAT_005bb186 < afStack_100c[0x3f7]) {
        afStack_100c[0x3f7] = afStack_100c[0x3f7] + _DAT_005bb19a;
      }
      afStack_100c[0x3fc] = afStack_100c[0x3f7];
      *pfVar6 = afStack_100c[0x3fa];
      pfVar6[(uint)bVar7 * -2 + 1] = afStack_100c[(uint)bVar7 * -2 + 0x3fb];
      (pfVar6 + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
           afStack_100c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3fc];
      return pfVar6;
    }
  }
  else {
    afStack_100c[0x3fa] = 1.5707964;
  }
  dVar1 = (double)-param_1[6];
  dVar2 = (double)*param_1;
  afStack_100c[0x3fc] = 0.0;
  if ((_DAT_005bb176 <= dVar1) || (dVar1 < _DAT_005bb17e)) {
    if (_DAT_005bb16e < dVar2) {
      if (dVar2 < 1.0) {
        fVar8 = (float10)*param_1;
        acos();
        afStack_100c[0x3f8] = (float)fVar8;
        unaff_ESI = extraout_EDX_03;
      }
      else {
        afStack_100c[0x3f8] = 0.0;
      }
    }
    else {
      afStack_100c[0x3f8] = 3.1415927;
    }
    if (dVar1 < 0.0) {
      afStack_100c[0x3f8] = -afStack_100c[0x3f8];
    }
  }
  else {
    fVar8 = (float10)-param_1[6];
    asin();
    afStack_100c[0x3f8] = (float)fVar8;
    unaff_ESI = extraout_EDX;
    if (dVar2 < 0.0) {
      afStack_100c[0x3f8] = (float)_DAT_005bb186 - afStack_100c[0x3f8];
    }
  }
  if (afStack_100c[0x3f8] < (float)_DAT_005bb18e) {
    afStack_100c[0x3f8] = afStack_100c[0x3f8] + _DAT_005bb196;
  }
  if ((float)_DAT_005bb186 < afStack_100c[0x3f8]) {
    afStack_100c[0x3f8] = afStack_100c[0x3f8] + _DAT_005bb19a;
  }
  afStack_100c[0x3fb] = afStack_100c[0x3f8];
  *unaff_ESI = afStack_100c[0x3fa];
  unaff_ESI[(uint)bVar7 * -2 + 1] = afStack_100c[(uint)bVar7 * -2 + 0x3fb];
  (unaff_ESI + (uint)bVar7 * -2 + 1)[(uint)bVar7 * -2 + 1] =
       afStack_100c[(uint)bVar7 * -2 + (uint)bVar7 * -2 + 0x3fc];
  return unaff_ESI;
}
