// Name: core_charactr.cpp_CCharacter_renderCollision_FUN_00425cc0
// Address: 00425cc0
// Address Range: [[00425cc0, 00426434]]
// Convention: __cdecl
// Signature: void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_charactr_cpp_CCharacter_renderCollision_FUN_00425cc0(int param_1)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  int iVar6;
  char *pcVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float fVar11;
  int iVar12;
  byte local_e8 [4];
  uint local_e4;
  int local_e0;
  int local_dc;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  int local_c0;
  int local_bc;
  int local_b8;
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  byte local_9c [12];
  byte local_90 [12];
  float local_84;
  float local_80;
  float local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  float local_44;
  int local_40;
  int local_3c;
  float local_38;
  int local_34;
  int local_30;
  uint local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  local_e0 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (local_e0 != 0) {
    return;
  }
  pcVar5 = "?headlite.raw" + 1;
  pcVar7 = &DAT_007658cc;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  local_dc = local_e0;
  local_d8 = local_e0;
  local_d4 = local_e0;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_007658c4);
  iVar3 = 0;
  do {
    piVar2 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18 + iVar3) = 0x800000;
    iVar3 = iVar3 + 0x30;
    *(uint *)(*piVar2 + -0x14 + iVar3) = 0x800000;
  } while (iVar3 != 0x12c0);
  local_2c = 0x267;
  local_e4 = 3;
  local_d0 = 0;
  local_cc = 1;
  local_c8 = 2;
  local_c4 = 3;
  local_20 = param_1 + 0x2c54;
  local_40 = param_1 + 0x2d08;
  local_30 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_30 / 5);
    iVar6 = 0;
    iVar3 = local_20;
    do {
      piVar2 = DAT_005ae704;
      *(uint *)(*DAT_005ae704 + 0x20 + iVar6) = 0;
      *(uint *)(*piVar2 + 0x24 + iVar6) = 0xffff;
      *(uint *)(iVar6 + 0x28 + *piVar2) = 0;
      pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                  (param_1,local_90,iVar3);
      if (&local_84 != pfVar4) {
        local_84 = *pfVar4;
        local_80 = pfVar4[1];
        local_7c = pfVar4[2];
      }
      local_78 = (int)ROUND(local_84 * _DAT_0059b070);
      local_74 = (int)ROUND(local_80 * _DAT_0059b070);
      local_70 = (int)ROUND(local_7c * _DAT_0059b070);
      iVar3 = iVar3 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar6,&local_78);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,local_e8,0x267)
    ;
    local_20 = local_20 + 0x24;
    local_30 = local_30 + -0x8000;
  } while (local_20 != local_40);
  local_24 = param_1 + 0x2d08;
  local_3c = param_1 + 0x2dbc;
  local_28 = 0x28000;
  do {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,local_28 / 5);
    iVar6 = 0;
    iVar3 = local_24;
    do {
      piVar2 = DAT_005ae704;
      *(uint *)(*DAT_005ae704 + 0x20 + iVar6) = 0;
      *(uint *)(*piVar2 + 0x24 + iVar6) = 0;
      *(uint *)(iVar6 + 0x28 + *piVar2) = 0xffff;
      pfVar4 = (float *)core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
                                  (param_1,local_9c,iVar3);
      if (&local_84 != pfVar4) {
        local_84 = *pfVar4;
        local_80 = pfVar4[1];
        local_7c = pfVar4[2];
      }
      local_6c = (int)ROUND(local_84 * _DAT_0059b070);
      local_68 = (int)ROUND(local_80 * _DAT_0059b070);
      local_64 = (int)ROUND(local_7c * _DAT_0059b070);
      iVar3 = iVar3 + 0xc;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar6,&local_6c);
      iVar6 = iVar6 + 0x30;
    } while (iVar6 != 0x90);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
              (DAT_005ae704,local_e8,local_2c);
    local_24 = local_24 + 0x24;
    local_28 = local_28 + -0x8000;
  } while (local_24 != local_3c);
  local_38 = *(float *)(param_1 + 0x2de8) * *(float *)(param_1 + 0x2614);
  if (local_38 < *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614)) {
    local_38 = *(float *)(param_1 + 0x2398);
  }
  fVar11 = *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614);
  if (local_38 < fVar11) {
    local_38 = *(float *)(param_1 + 0x2614) * (float)_DAT_00579f7a + fVar11;
  }
  local_44 = *(float *)(param_1 + 0x2de4) * *(float *)(param_1 + 0x2614);
  fVar11 = *(float *)(param_1 + 0x2dd8) * *(float *)(param_1 + 0x2614);
  iVar3 = 0x30;
  iVar6 = 0;
  local_1c = 0;
  do {
    iVar12 = local_1c * 2;
    fVar9 = (float10)iVar12 * (float10)_DAT_00579f82 * (float10)_DAT_00579f8a;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_80 = local_44;
    local_84 = (float)(fVar10 * (float10)fVar11);
    local_7c = (float)(fVar9 * (float10)fVar11);
    local_60 = (int)ROUND(local_84 * _DAT_0059b070);
    local_5c = (int)ROUND(local_44 * _DAT_0059b070);
    local_58 = (int)ROUND(local_7c * _DAT_0059b070);
    local_18 = iVar12;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
              (*DAT_005ae704 + iVar6,&local_60,fVar11,iVar12);
    piVar2 = DAT_005ae704;
    *(uint *)(iVar6 + 0x20 + *DAT_005ae704) = 0xffff;
    *(uint *)(iVar6 + 0x24 + *piVar2) = 0;
    *(uint *)(iVar6 + 0x28 + *piVar2) = 0;
    local_80 = local_38;
    local_34 = iVar12 + 1;
    local_b4 = (int)ROUND(local_84 * _DAT_0059b070);
    local_b0 = (int)ROUND(local_38 * _DAT_0059b070);
    local_ac = (int)ROUND(local_7c * _DAT_0059b070);
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*piVar2 + iVar3,&local_b4);
    piVar2 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x20 + iVar3) = 0xffff;
    *(uint *)(*piVar2 + 0x24 + iVar3) = 0;
    *(uint *)(*piVar2 + 0x28 + iVar3) = 0;
    if (0 < local_1c) {
      local_d0 = iVar12 + -2;
      local_cc = iVar12 + -1;
      local_c8 = local_34;
      local_e4 = 4;
      local_c4 = iVar12;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(piVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
                (DAT_005ae704,local_e8,local_2c);
    }
    iVar6 = iVar6 + 0x60;
    local_1c = local_1c + 1;
    iVar3 = iVar3 + 0x60;
  } while (local_1c < 0x19);
  local_c0 = (int)ROUND(_DAT_02dd1184 * _DAT_0059b070);
  local_bc = (int)ROUND(_DAT_02dd1188 * _DAT_0059b070);
  local_b8 = (int)ROUND(_DAT_02dd118c * _DAT_0059b070);
  wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_c0);
  piVar2 = DAT_005ae704;
  *(uint *)(*DAT_005ae704 + 0x20) = 0xffff;
  iVar8 = 0;
  *(uint *)(*piVar2 + 0x24) = 0;
  iVar6 = 0x30;
  iVar3 = 0;
  *(uint *)(*piVar2 + 0x28) = 0;
  do {
    fVar9 = (float10)iVar3 * (float10)_DAT_00579f82 * (float10)_DAT_00579f8a;
    fVar10 = (float10)fsin(fVar9);
    fVar9 = (float10)fcos(fVar9);
    local_84 = (float)((float10)*(float *)(param_1 + 0x2614) *
                      (float10)*(float *)(param_1 + 0x2dd4) * fVar10);
    local_80 = 0.0;
    local_7c = (float)(fVar9 * (float10)*(float *)(param_1 + 0x2dd4) *
                      (float10)*(float *)(param_1 + 0x2614));
    local_a8 = (int)ROUND(local_84 * _DAT_0059b070);
    local_a4 = (int)ROUND(_DAT_0059b070 * 0.0);
    local_a0 = (int)ROUND(local_7c * _DAT_0059b070);
    local_18 = iVar3;
    wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + iVar6,&local_a8);
    piVar2 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x20 + iVar6) = 0xffff;
    *(uint *)(*piVar2 + 0x24 + iVar6) = 0;
    *(uint *)(*piVar2 + 0x28 + iVar6) = 0;
    if (0 < iVar8) {
      local_e4 = 3;
      local_d0 = 0;
      local_cc = iVar8 + -1;
      local_c8 = iVar8;
      engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(piVar2,0x4000);
      engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0
                (DAT_005ae704,local_e8,local_2c);
    }
    iVar8 = iVar8 + 1;
    iVar3 = iVar3 + 2;
    iVar6 = iVar6 + 0x30;
  } while (iVar8 < 0x19);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010
            (DAT_005ae704,0xffff,fVar11,iVar12,iVar3);
  return;
}
