// Name: core_dlight.cpp_renderConeLightGeometry_FUN_00451b70
// Address: 00451b70
// Address Range: [[00451b70, 00452073]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00451b70(undefined4 param_1,undefined4 param_2,float param_3,float param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_renderConeLightGeometry_FUN_00451b70(uint param_1,uint param_2,float param_3,float param_4)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  float10 fVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  unkbyte10 Var8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  float local_c0;
  float local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  uint local_a0;
  uint local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  float fStack_48;
  float local_40;
  uint uStack_3c;
  int local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  
  local_bc = param_3;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar2 != 0) {
    return;
  }
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00(DAT_005ae704,param_1);
  engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0(DAT_005ae704,param_2,0);
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005ae458);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,1);
  local_30 = 1.0 / param_4;
  iVar2 = 1;
  do {
    fVar4 = (float10)iVar2 * ((float10)18 / (float10)local_bc) *
            (float10)0.125;
    local_c0 = (float)fVar4;
    Var8 = fpatan(fVar4,(float10)1);
    fVar4 = (float10)fcos(Var8);
    iVar3 = 0;
    local_1c = (float)(fVar4 * (float10)param_4);
    do {
      piVar1 = DAT_005ae704;
      fVar4 = (float10)iVar3 * (float10)5.1392085562440189e-315._0_4_ * (float10)3.1415926535000001 *
              (float10)2;
      iVar3 = iVar3 + 1;
      fVar5 = (float10)fsin(fVar4);
      fVar9 = (float10)iVar3 * (float10)5.1392085562440189e-315._0_4_ * (float10)3.1415926535000001 *
              (float10)2;
      fVar6 = (float10)fsin(fVar9);
      fVar4 = (float10)fcos(fVar4);
      fVar9 = (float10)fcos(fVar9);
      fVar7 = (float10)local_c0;
      local_2c = (float)(fVar5 * fVar7);
      local_28 = (float)(fVar4 * fVar7);
      local_24 = (float)(fVar6 * fVar7);
      local_20 = (float)(fVar9 * fVar7);
      local_88 = local_1c * 0.0;
      fVar5 = (float10)local_30;
      local_90 = local_88 * local_2c;
      fVar4 = (float10)local_88;
      local_8c = local_88 * local_28;
      fVar6 = (float10)1024;
      uVar11 = 0x451d45;
      local_40 = local_88;
      local_18 = iVar3;
      fVar9 = (float10)round
                                 (((float10)param_4 - (float10)local_1c) * fVar5 * fVar6);
      local_38 = (int)ROUND(fVar9);
      uVar10 = 0x451d51;
      fVar4 = (float10)round(((float10)param_4 - fVar4) * fVar5 * fVar6);
      local_40 = (float)(int)ROUND(fVar4);
      local_84 = (int)ROUND(local_90 * _DAT_0059c030);
      local_80 = (int)ROUND(local_8c * _DAT_0059c030);
      local_7c = (int)ROUND(local_88 * _DAT_0059c030);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*piVar1,&local_8c,uVar10,uVar11);
      local_98 = fStack_48 * local_2c;
      local_94 = fStack_48 * local_28;
      local_90 = fStack_48;
      local_80 = (int)ROUND(local_98 * _DAT_0059c030);
      local_7c = (int)ROUND(local_94 * _DAT_0059c030);
      local_78 = (int)ROUND(fStack_48 * _DAT_0059c030);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_80);
      local_98 = local_24 * local_2c;
      local_94 = local_24 * local_28;
      local_90 = local_24;
      local_74 = (int)ROUND(local_98 * _DAT_0059c030);
      local_70 = (int)ROUND(local_94 * _DAT_0059c030);
      local_6c = (int)ROUND(local_24 * _DAT_0059c030);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_74);
      local_98 = local_24 * local_34;
      local_94 = local_24 * local_30;
      local_90 = local_24;
      local_68 = (int)ROUND(local_98 * _DAT_0059c030);
      local_64 = (int)ROUND(local_94 * _DAT_0059c030);
      local_60 = (int)ROUND(local_24 * _DAT_0059c030);
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_68);
      piVar1 = DAT_005ae704;
      *(float *)(*DAT_005ae704 + 0x2c) = local_40;
      *(uint *)(*piVar1 + 0x28) = 0xffff;
      *(uint *)(*piVar1 + 0x24) = 0xffff;
      *(uint *)(*piVar1 + 0x20) = 0xffff;
      *(uint *)(*piVar1 + 0x18) = 0xf80000;
      *(uint *)(*piVar1 + 0x1c) = 0xf80000;
      *(float *)(*piVar1 + 0x5c) = local_40;
      *(uint *)(*piVar1 + 0x58) = 0xffff;
      *(uint *)(*piVar1 + 0x54) = 0xffff;
      *(uint *)(*piVar1 + 0x50) = 0xffff;
      *(uint *)(*piVar1 + 0x48) = 0x80000;
      *(uint *)(*piVar1 + 0x4c) = 0xf80000;
      *(uint *)(*piVar1 + 0x8c) = uStack_3c;
      *(uint *)(*piVar1 + 0x88) = 0xffff;
      *(uint *)(*piVar1 + 0x84) = 0xffff;
      *(uint *)(*piVar1 + 0x80) = 0xffff;
      *(uint *)(*piVar1 + 0x78) = 0x80000;
      *(uint *)(*piVar1 + 0x7c) = 0x80000;
      *(uint *)(*piVar1 + 0xbc) = uStack_3c;
      *(uint *)(*piVar1 + 0xb8) = 0xffff;
      *(uint *)(*piVar1 + 0xb4) = 0xffff;
      *(uint *)(*piVar1 + 0xb0) = 0xffff;
      *(uint *)(*piVar1 + 0xa8) = 0xf80000;
      *(uint *)(*piVar1 + 0xac) = 0x80000;
      local_bc = 5.60519e-45;
      local_ac = 0;
      local_b0 = 0;
      local_b4 = 0;
      local_b8 = 0;
      local_9c = 3;
      local_a8 = 0;
      local_a4 = 1;
      local_a0 = 2;
      engine_drender_cpp_CDemonRenderer_renderVertexAlphaDirect_FUN_00460080(piVar1,&local_c0);
    } while (iVar3 < 8);
    iVar2 = iVar2 + 1;
  } while (iVar2 < 8);
  engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0(DAT_005ae704);
  engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
  return;
}
