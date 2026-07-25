// Name: FUN_004f18c0
// Address: 004f18c0
// Address Range: [[004f18c0, 004f1c8a]]
// Convention: unknown
// Signature: void FUN_004f18c0(int param_1,int param_2,int param_3,int param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004f18c0(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float *pfVar3;
  int iVar4;
  byte bVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  int aiStackY_1040 [1004];
  uint uVar11;
  byte *local_84;
  byte *local_80;
  int local_7c;
  float *local_78;
  float *local_74;
  int local_70;
  float local_64 [3];
  float local_58;
  float local_54;
  int local_50;
  float local_4c;
  float local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  uint local_34;
  int local_2c;
  byte *local_28;
  float *local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  bVar5 = 0;
  local_74 = DAT_005ae704;
  local_78 = (float *)0x4f18d8;
  iVar4 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090();
  if (iVar4 != 0) {
    return;
  }
  local_64[0] = (float)*(int *)(param_1 + 0x24) * _DAT_01fba96c + _DAT_01fba948;
  local_64[1] = 0.0;
  local_74 = local_64;
  local_64[2] = (float)*(int *)(param_1 + 0x2c) * _DAT_01fba974 + _DAT_01fba950;
  local_78 = DAT_005ae704;
  local_7c = 0x4f1926;
  engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00();
  local_74 = (float *)&DAT_005be090;
  local_78 = DAT_005ae704;
  local_7c = 0x4f193f;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0();
  _DAT_01e42814 = 4;
  _DAT_01e42818 = 0;
  _DAT_01e4281c = 0;
  _DAT_01e42820 = 0;
  _DAT_01e42824 = 0;
  _DAT_01e42828 = 0;
  _DAT_01e42834 = 1;
  _DAT_01e42840 = 2;
  local_74 = (float *)0x0;
  _DAT_01e4282c = 0x800000;
  _DAT_01e42830 = 0x800000;
  _DAT_01e42838 = 0x800000;
  _DAT_01e4283c = 0x800000;
  _DAT_01e42844 = 0x800000;
  _DAT_01e42848 = 0x800000;
  _DAT_01e42850 = 0x800000;
  local_78 = DAT_005ae704;
  _DAT_01e42854 = 0x800000;
  _DAT_01e4284c = 3;
  local_7c = 0x4f19c6;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0();
  local_20 = param_2 << 8;
  local_28 = (byte *)(param_3 << 8);
  local_24 = (float *)(param_4 << 8);
  local_58 = 0.0;
  local_2c = 0;
  local_1c = param_5 << 8;
  do {
    local_50 = 0;
    local_18 = local_2c + param_1;
    do {
      pfVar3 = DAT_005ae704;
      if ((-1000 < *(int *)(local_18 + 0x9c70)) && (*(int *)(local_18 + 0x9c70) < 1000)) {
        fVar1 = _DAT_01fba970 * _DAT_0058ce2f;
        fVar2 = _DAT_01fba974 * _DAT_0058ce2f;
        fVar6 = (float10)_DAT_01fba94c;
        local_54 = *(float *)(local_18 + 0x30);
        fVar7 = (float10)_DAT_0058ce37;
        local_4c = local_58;
        (&local_48)[(uint)bVar5 * -2] = (&local_54)[(uint)bVar5 * -2];
        (&local_44)[(uint)bVar5 * -2 + (uint)bVar5 * -2] =
             (&local_50)[(uint)bVar5 * -2 + (uint)bVar5 * -2];
        fVar8 = (float10)(int)local_48;
        local_14 = local_44;
        fVar9 = (float10)local_44;
        local_74 = (float *)0x4f1b04;
        local_40 = _DAT_01fba96c * _DAT_0058ce2f;
        local_3c = fVar1;
        local_38 = fVar2;
        fVar10 = (float10)round();
        local_74 = (float *)(int)ROUND(fVar10);
        local_7c = 0x4f1b13;
        local_78 = (float *)&local_74;
        fVar9 = (float10)round(fVar9 * (float10)fVar2);
        local_70 = (int)ROUND(fVar9);
        local_80 = (byte *)0x4f1b22;
        fVar6 = (float10)round
                                   (fVar6 * fVar7 + fVar8 * (float10)fVar1 + fVar7);
        local_78 = (float *)(int)ROUND(fVar6);
        local_84 = (byte *)*pfVar3;
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
        pfVar3 = DAT_005ae704;
        local_80 = (byte *)&local_7c;
        local_20 = local_7c;
        local_84 = (byte *)0x4f1b52;
        fVar6 = (float10)round((float10)local_7c + (float10)local_4c);
        local_80 = (byte *)(int)ROUND(fVar6);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c((int)*pfVar3 + 0x30);
        pfVar3 = DAT_005ae704;
        local_84 = (byte *)&local_80;
        local_24 = local_78;
        uVar11 = 0x4f1b86;
        fVar6 = (float10)round((float10)(int)local_78 + (float10)local_48);
        local_7c = (int)ROUND(fVar6);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c((int)*pfVar3 + 0x60,uVar11);
        pfVar3 = DAT_005ae704;
        local_28 = local_84;
        fVar6 = (float10)round((float10)(int)local_84 - (float10)local_54);
        wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c
                  ((int)*pfVar3 + 0x90,&local_84,(int)ROUND(fVar6));
        pfVar3 = DAT_005ae704;
        *(float *)((int)*DAT_005ae704 + 0x20) = local_38;
        *(float *)((int)*pfVar3 + 0x24) = local_40;
        *(float *)((int)*pfVar3 + 0x28) = local_3c;
        *(uint *)((int)*pfVar3 + 0x2c) = local_34;
        *(float *)((int)*pfVar3 + 0x50) = local_38;
        *(float *)((int)*pfVar3 + 0x54) = local_40;
        *(float *)((int)*pfVar3 + 0x58) = local_3c;
        *(uint *)((int)*pfVar3 + 0x5c) = local_34;
        *(float *)((int)*pfVar3 + 0x80) = local_38;
        *(float *)((int)*pfVar3 + 0x84) = local_40;
        *(float *)((int)*pfVar3 + 0x88) = local_3c;
        *(uint *)((int)*pfVar3 + 0x8c) = local_34;
        *(float *)((int)*pfVar3 + 0xb0) = local_38;
        *(float *)((int)*pfVar3 + 0xb4) = local_40;
        *(float *)((int)*pfVar3 + 0xb8) = local_3c;
        *(uint *)((int)*pfVar3 + 0xbc) = local_34;
        engine_drender_cpp_CDemonRenderer_renderVertexAlphaPoly_FUN_00460150(pfVar3,0x1e42810);
      }
      local_50 = local_50 + 1;
      local_18 = local_18 + 400;
    } while (local_50 < 100);
    local_58 = (float)((int)local_58 + 1);
    local_2c = local_2c + 4;
  } while ((int)local_58 < 100);
  local_74 = (float *)0x1;
  local_78 = DAT_005ae704;
  local_7c = 0x4f1a63;
  engine_drender_cpp_CDemonRenderer_setPlaneCullingEnabled_FUN_00460fa0();
  return;
}
