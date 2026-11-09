// Name: core_dtri.cpp_FUN_00479e0c
// Address: 00479e0c
// Address Range: [[00479e0c, 00479f5b]]
// Convention: unknown
// Signature: void core_dtri_cpp_FUN_00479e0c(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtri_cpp_FUN_00479e0c(float *param_1)

{
  float10 fVar1;
  float10 fVar2;
  CDemonRenderer *this_ptr;
  SMRGLPrimitivePoly *poly;
  SMRGLPrimitivePoly aSStack_78 [4];
  uint uStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int iStack_64;
  uint uStack_60;
  uint uStack_54;
  uint uStack_48;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  iStack_30 = (int)ROUND(*param_1 * _DAT_005f5b50);
  iStack_2c = (int)ROUND(param_1[1] * _DAT_005f5b50);
  iStack_28 = (int)ROUND(param_1[2] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723(*(SProjectedVertex **)0x01BA5C50,(CVector3i *)&iStack_30);
  iStack_18 = (int)ROUND(param_1[3] * _DAT_005f5b50);
  iStack_14 = (int)ROUND(param_1[4] * _DAT_005f5b50);
  iStack_10 = (int)ROUND(param_1[5] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)0x01BA5C50 + 0x30),(CVector3i *)&iStack_18);
  iStack_24 = (int)ROUND(param_1[6] * _DAT_005f5b50);
  iStack_20 = (int)ROUND(param_1[7] * _DAT_005f5b50);
  iStack_1c = (int)ROUND(param_1[8] * _DAT_005f5b50);
  engine_special_cpp_FUN_0055d723
            ((SProjectedVertex *)(*(int *)0x01BA5C50 + 0x60),(CVector3i *)&iStack_24);
  poly = aSStack_78;
  uStack_74 = 3;
  fVar1 = (float10)_DAT_005d1e23;
  fVar2 = (float10)param_1[9] * fVar1;
  round();
  iStack_70 = (int)ROUND(fVar2);
  fVar2 = (float10)param_1[10] * fVar1;
  round();
  iStack_6c = (int)ROUND(fVar2);
  fVar1 = fVar1 * (float10)param_1[0xb];
  round();
  iStack_68 = (int)ROUND(fVar1);
  fVar2 = (float10)param_1[0xc] * (float10)_DAT_005d1e2b * (float10)_DAT_005d1e33;
  uStack_60 = 0;
  uStack_54 = 1;
  uStack_48 = 2;
  this_ptr = 0x01BA5C50;
  round();
  iStack_64 = (int)ROUND(fVar2);
  engine_drender_cpp_CDemonRenderer_renderSolidColorPoly_FUN_004696f0(this_ptr,poly);
  return;
}
