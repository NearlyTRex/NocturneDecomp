// Name: core_dskybox.cpp_renderSkyDome_FUN_00463580
// Address: 00463580
// Address Range: [[00463580, 00463a33]]
// Convention: __cdecl
// Signature: void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(undefined4 *param_1,char *param_2,undefined4 param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dskybox_cpp_renderSkyDome_FUN_00463580(uint *param_1,char *param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  float fVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  int *piStack_bc;
  float *pfStack_b8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint local_94;
  uint local_90;
  int local_8c;
  int local_88;
  uint local_84;
  int local_80;
  int local_7c;
  uint local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  int iStack_48;
  int iStack_44;
  int local_40;
  float local_34;
  uint local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  uint local_1c;
  
  pcVar9 = (char *)(param_1 + 3);
  do {
    cVar1 = *param_2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = param_2[1];
    param_2 = param_2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  *param_1 = param_3;
  pfStack_b8 = &local_60;
  piStack_bc = (int *)&DAT_01fba938;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0();
  pfStack_b8 = &local_54;
  piStack_bc = (int *)&DAT_01fba938;
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0();
  fVar7 = (float)0.5;
  _DAT_01b7b728 = (local_60 + local_54) * fVar7;
  _DAT_01b7b730 = (local_58 + local_4c) * fVar7;
  local_34 = (local_54 - local_60) * fVar7 * (float)1.4139999999999999;
  _DAT_005b0678 = 0.0;
  _DAT_01b7b72c = local_5c;
  if (0.0 < local_34) {
    _DAT_005b0678 = local_34;
  }
  local_2c = (local_50 - local_5c) * (float)1.4139999999999999;
  if (_DAT_005b0678 < local_2c) {
    _DAT_005b0678 = local_2c;
  }
  local_30 = (local_4c - local_58) * (float)0.5 * (float)1.4139999999999999;
  if (_DAT_005b0678 < local_30) {
    _DAT_005b0678 = local_30;
  }
  pfStack_b8 = (float *)&DAT_01b7b728;
  piStack_bc = DAT_005ae704;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00();
  pfStack_b8 = (float *)(param_1 + 1);
  local_b0 = 4;
  local_a0 = 0;
  local_a4 = 0;
  piStack_bc = DAT_005ae704;
  local_a8 = 0;
  local_ac = 0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0();
  fVar11 = (float10)fsin((float10)0.58904862253125001);
  fVar12 = (float10)_DAT_005b0678;
  fVar13 = (float10)256;
  pfStack_b8 = (float *)0x463718;
  fVar11 = (float10)round(fVar11 * fVar12 * fVar13);
  piVar4 = DAT_005ae704;
  local_70 = (int)ROUND(fVar11);
  piStack_bc = (int *)0x463733;
  local_68 = local_70;
  fVar11 = (float10)round(fVar12 * fVar13);
  local_70 = (int)ROUND(fVar11);
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*piVar4,&local_70);
  local_74 = -local_74;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_74);
  local_6c = -local_6c;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_74);
  local_74 = -local_74;
  engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_74);
  piVar4 = DAT_005ae704;
  uVar2 = *param_1;
  *(uint *)(*DAT_005ae704 + 0x20) = uVar2;
  *(uint *)(*piVar4 + 0x24) = uVar2;
  *(uint *)(*piVar4 + 0x28) = uVar2;
  *(uint *)(*piVar4 + 0x2c) = 0;
  uVar2 = *param_1;
  *(uint *)(*piVar4 + 0x50) = uVar2;
  *(uint *)(*piVar4 + 0x54) = uVar2;
  *(uint *)(*piVar4 + 0x58) = *param_1;
  *(uint *)(*piVar4 + 0x5c) = 0;
  uVar2 = *param_1;
  *(uint *)(*piVar4 + 0x80) = uVar2;
  *(uint *)(*piVar4 + 0x84) = uVar2;
  *(uint *)(*piVar4 + 0x88) = uVar2;
  *(uint *)(*piVar4 + 0x8c) = 0;
  uVar2 = *param_1;
  *(uint *)(*piVar4 + 0xb0) = uVar2;
  *(uint *)(*piVar4 + 0xb4) = uVar2;
  *(uint *)(*piVar4 + 0xb8) = uVar2;
  *(uint *)(*piVar4 + 0xbc) = 0;
  local_a4 = 0;
  local_98 = 1;
  local_a0 = 0x80000;
  local_9c = 0x80000;
  local_94 = 0x80000;
  local_90 = 0x80000;
  local_80 = 3;
  local_8c = 2;
  iVar10 = 0;
  local_88 = 0x80000;
  local_84 = 0x80000;
  local_7c = 0x80000;
  local_78 = 0x80000;
  engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460(piVar4,&piStack_bc,0x2c5);
  local_2c = 0.0;
  do {
    iVar8 = 0;
    fVar7 = local_2c;
    do {
      iVar6 = iVar8 + 1;
      core_dskybox_cpp_generateSkyDomeVertex_FUN_00463440(param_1,iVar10,iVar8,fVar7);
      iVar8 = iVar6;
      fVar7 = (float)((int)fVar7 + 1);
    } while (iVar6 < 4);
    local_2c = (float)((int)local_2c + 4);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x11);
  local_28 = 0;
  local_30 = 0.0;
  do {
    local_24 = local_28;
    iVar8 = 0x1000000;
    local_1c = (int)(((int)local_30 + ((int)local_30 >> 0x1f) * -4) -
                    (uint)(((int)local_30 >> 0x1f) << 1 < 0)) >> 2 & 0xffffff;
    iVar10 = 0;
    local_20 = local_1c + 0x400000;
    iVar6 = 0;
    do {
      local_a4 = local_24 + iVar6;
      local_98 = local_a4 + 1;
      local_8c = local_a4 + 5;
      local_80 = local_a4 + 4;
      iVar5 = iVar10 >> 0x1f;
      iVar3 = iVar10 + iVar5 * -4;
      local_a0 = local_1c;
      iVar6 = iVar6 + 1;
      local_94 = local_1c;
      iVar10 = iVar10 + 0x1000000;
      local_90 = (int)((iVar8 + (iVar8 >> 0x1f) * -4) - (uint)((iVar8 >> 0x1f) << 1 < 0)) >> 2 ^
                 0xffffff;
      local_88 = local_20;
      local_7c = local_20;
      local_9c = (int)(iVar3 - (uint)(iVar5 << 1 < 0)) >> 2 ^ 0xffffff;
      iVar8 = iVar8 + 0x1000000;
      local_84 = local_90;
      local_78 = local_9c;
      iStack_48 = local_98;
      iStack_44 = local_8c;
      local_40 = local_80;
      engine_drender_cpp_CDemonRenderer_renderTexturedPoly_FUN_0045f460
                (DAT_005ae704,&piStack_bc,0x2c5);
    } while (iVar6 < 3);
    local_28 = local_28 + 4;
    local_30 = __BITCAST_FLOAT(CONCAT13(local_30._3_1_ + '\x01',(undefined3)local_30));
  } while (local_28 != 0x40);
  return;
}
