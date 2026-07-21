// Name: core_dtrace.cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0
// Address: 0046aff0
// Address Range: [[0046aff0, 0046b1a9]]
// Convention: __cdecl
// Signature: float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0(int param_1,float *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

float __cdecl core_dtrace_cpp_CDemonRaytrace_getVoxelHeightAtPosition_FUN_0046aff0(int param_1,float *param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  int iVar8;
  uint uVar9;
  float fVar10;
  int iStack_34;
  int iStack_30;
  
  round
            (((float10)*param_2 - (float10)*(float *)(param_1 + 0x10)) /
             (float10)*(float *)(param_1 + 0x28));
  fVar6 = (float10)_DAT_0057e3ae;
  round();
  fVar7 = (float10)round();
  iStack_34 = (int)ROUND(fVar7);
  fVar10 = *(float *)(param_1 + 0x30);
  fVar1 = *(float *)(param_1 + 0x18);
  fVar2 = param_2[2];
  fVar3 = *(float *)(param_1 + 0x30);
  fVar7 = (float10)round();
  iStack_30 = (int)ROUND(fVar7);
  uVar9 = 0x46b0a7;
  round();
  fVar6 = (float10)round
                             (((float10)fVar2 -
                              ((float10)iStack_34 * (float10)fVar10 + (float10)fVar1)) /
                              ((float10)fVar3 * fVar6));
  iVar8 = (int)ROUND(fVar6);
  if (((((iStack_30 < 0) || (iStack_30 < 0)) || (iVar8 < 0)) || ((7 < iStack_30 || (7 < iStack_30)))
      ) || (7 < iVar8)) {
    fVar10 = -999.0;
  }
  else {
    iVar5 = iVar8 * 8;
    while( true ) {
      piVar4 = (int *)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0
                                (param_1,0x46b073,iStack_34,0x46b098,iVar8,uVar9);
      if (piVar4 == (int *)0x0) break;
      if ((*piVar4 != 0) && ((*(byte *)(iStack_30 + iVar5 + *piVar4) & bRam00a21d54) != 0)) {
        return (float)iStack_30 * *(float *)(param_1 + 0x2c) * _DAT_0057e3ae +
               (float)iStack_34 * *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x14);
      }
      iStack_30 = iStack_30 + -1;
      if (iStack_30 < 0) {
        iStack_34 = iStack_34 + -1;
        iStack_30 = 7;
      }
    }
    fVar10 = -999.9;
  }
  return fVar10;
}
