// Name: core_fire.cpp_CGunFlame_render_FUN_00488580
// Address: 00488580
// Address Range: [[00488580, 00488ac9]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(float *param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_render_FUN_00488580(float *param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float fVar5;
  int *piVar6;
  float *pfVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulonglong uVar18;
  double dVar19;
  float fStack_d4;
  byte local_94 [12];
  byte auStack_88 [12];
  float fStack_7c;
  float local_78;
  float local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  float fStack_2c;
  
  if (*param_1 <= 0.0) {
    return;
  }
  uVar18 = 0x4885ac;
  fVar8 = (float10)round((float10)param_1[7]);
  fStack_2c = (float)(int)ROUND(fVar8);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0
            (DAT_005ae704,(int)fStack_2c * 0x18 + 0x1c09c28,uVar18);
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
            (DAT_005ae704,param_1 + 1);
  engine_drender_cpp_CDemonRenderer_getCameraRotationRadians_FUN_00460db0(DAT_005ae704,auStack_88);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,auStack_88,0);
  fVar8 = ((float10)_DAT_0059d214 - (float10)*param_1) / (float10)_DAT_0059d214;
  dVar19 = (double)fVar8;
  fVar1 = (float)(fVar8 * (float10)_DAT_005813cc + (float10)_DAT_005813d4);
  fStack_d4 = fVar1;
  if ((float10)dVar19 < (float10)_DAT_005813d4) {
    pfVar7 = (float *)engine_drender_cpp_CDemonRenderer_getCameraOriginWorld_FUN_00460d30
                                (DAT_005ae704,local_94);
    fVar5 = *pfVar7 - param_1[1];
    fVar2 = (float)((float10)pfVar7[1] - (float10)param_1[2]);
    fVar9 = (float10)fVar5;
    fVar3 = (float)((float10)pfVar7[2] - (float10)param_1[3]);
    fVar10 = (float10)param_1[4];
    fStack_d4 = (float)(((float10)1 +
                        ((float10)1 -
                        ABS((float10)fVar3 * (float10)param_1[6] +
                            (float10)fVar5 * (float10)param_1[4] +
                            (float10)fVar2 * (float10)param_1[5]) /
                        (SQRT((float10)param_1[6] * (float10)param_1[6] +
                              fVar10 * fVar10 + (float10)param_1[5] * (float10)param_1[5]) *
                        SQRT(((float10)pfVar7[2] - (float10)param_1[3]) * (float10)fVar3 +
                             fVar9 * fVar9 +
                             ((float10)pfVar7[1] - (float10)param_1[2]) * (float10)fVar2))) *
                        ((float10)1 - (float10)dVar19 * (float10)_DAT_005813dc) *
                        (float10)_DAT_005813e4) * (float10)fVar1);
  }
  local_78 = fVar1 * _DAT_005813ec * (float)_DAT_005813f4;
  fStack_7c = -fStack_d4 * _DAT_005813ec * (float)_DAT_005813f4;
  local_74 = 0.0;
  local_4c = (int)ROUND(fStack_7c * _DAT_0059d1f8);
  local_48 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_44 = (int)ROUND(_DAT_0059d1f8 * 0.0);
  fStack_2c = fStack_7c;
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_4c);
  fStack_7c = fStack_d4 * (float)_DAT_005813fc * (float)_DAT_005813f4;
  local_58 = (int)ROUND(fStack_7c * _DAT_0059d1f8);
  local_54 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_50 = (int)ROUND(local_74 * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_58);
  local_78 = -fVar1 * (float)_DAT_005813fc * (float)_DAT_005813f4;
  local_64 = (int)ROUND(fStack_7c * _DAT_0059d1f8);
  local_60 = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_5c = (int)ROUND(local_74 * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_64);
  fStack_7c = fStack_2c;
  local_70 = (int)ROUND(fStack_2c * _DAT_0059d1f8);
  local_6c = (int)ROUND(local_78 * _DAT_0059d1f8);
  local_68 = (int)ROUND(local_74 * _DAT_0059d1f8);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_70);
  piVar6 = DAT_005ae704;
  fVar14 = ((float10)_DAT_00581408 - (float10)(float)fVar8) * (float10)(float)fVar8;
  fVar8 = (float10)_DAT_00581410;
  fVar9 = (float10)_DAT_00581418;
  fVar10 = (float10)_DAT_0058141c;
  *(uint *)(*DAT_005ae704 + 0x18) = 0x20000;
  fVar11 = ((float10)1 - fVar14) * (float10)_DAT_0058140c;
  *(uint *)(*piVar6 + 0x1c) = 0x20000;
  fVar12 = (float10)_DAT_00581414;
  *(uint *)(*piVar6 + 0x48) = 0xfe0000;
  *(uint *)(*piVar6 + 0x4c) = 0x20000;
  *(uint *)(*piVar6 + 0x78) = 0xfe0000;
  iVar4 = *piVar6;
  fVar13 = (float10)round();
  *(uint *)(iVar4 + 0x7c) = 0xfe0000;
  uVar17 = 0x48892c;
  fVar8 = (float10)round((fVar14 * fVar8 + fVar11) * fVar12);
  iVar4 = *piVar6;
  uVar16 = 0x488935;
  fVar9 = (float10)round((fVar14 * fVar9 + fVar11) * fVar12);
  *(uint *)(iVar4 + 0xa8) = 0x20000;
  uVar15 = 0x488946;
  fVar10 = (float10)round(fVar12 * (fVar14 * fVar10 + fVar11));
  iStack_34 = (int)ROUND(fVar8);
  *(uint *)(*piVar6 + 0xac) = 0xfe0000;
  iStack_38 = (int)ROUND(fVar9);
  *(int *)(*piVar6 + 0x20) = iStack_34;
  fStack_2c = (float)(int)ROUND(fVar10);
  *(int *)(*piVar6 + 0x24) = iStack_38;
  iStack_30 = (int)ROUND(fVar13);
  *(float *)(*piVar6 + 0x28) = fStack_2c;
  *(int *)(*piVar6 + 0x2c) = iStack_30;
  *(int *)(*piVar6 + 0x50) = iStack_34;
  *(int *)(*piVar6 + 0x54) = iStack_38;
  *(float *)(*piVar6 + 0x58) = fStack_2c;
  *(int *)(*piVar6 + 0x5c) = iStack_30;
  *(int *)(*piVar6 + 0x80) = iStack_34;
  *(int *)(*piVar6 + 0x84) = iStack_38;
  *(float *)(*piVar6 + 0x88) = fStack_2c;
  *(int *)(*piVar6 + 0x8c) = iStack_30;
  *(int *)(*piVar6 + 0xb0) = iStack_34;
  *(int *)(*piVar6 + 0xb4) = iStack_38;
  *(float *)(*piVar6 + 0xb8) = fStack_2c;
  *(int *)(*piVar6 + 0xbc) = iStack_30;
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(piVar6,1);
  engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080
            (DAT_005ae704,&stack0xffffff28,uVar15,uVar16,uVar17);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0,uVar15,uVar16);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704,uVar15);
  return;
}
