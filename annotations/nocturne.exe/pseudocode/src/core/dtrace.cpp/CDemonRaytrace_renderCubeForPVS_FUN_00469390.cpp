// Name: core_dtrace.cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390
// Address: 00469390
// Address Range: [[00469390, 00469cd6]]
// Convention: unknown
// Signature: void core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(int *param_1,int *param_2,undefined1 *param_3,float *param_4,int param_5)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_dtrace_cpp_CDemonRaytrace_renderCubeForPVS_FUN_00469390(int *param_1,int *param_2,byte *param_3,float *param_4,int param_5)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  float fVar4;
  byte *puVar5;
  int *piVar6;
  int unaff_EBX;
  float unaff_ESI;
  int unaff_EDI;
  float10 fVar7;
  uint uVar8;
  int **ppiVar9;
  int *piStack_e8;
  int *piStack_e4;
  int *piStack_e0;
  byte *puStack_dc;
  float *pfStack_d8;
  float fStack_d4;
  int local_d0;
  int local_cc;
  int local_c8;
  int local_c4;
  uint local_c0;
  uint local_bc;
  uint local_b8;
  uint local_b4;
  uint local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  int local_9c;
  int local_98;
  float local_94;
  int local_90;
  int local_8c;
  float local_88;
  int local_84;
  int local_80;
  float local_7c;
  int local_78;
  int local_74;
  float local_70;
  int local_6c;
  int local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  int local_54;
  int local_50;
  uint local_4c;
  float local_40;
  int local_3c;
  int local_38;
  int *local_34;
  float local_30;
  float *local_2c;
  float local_28;
  float local_24;
  float local_20;
  int *local_1c;
  byte *local_18;
  float *local_14;
  
  _DAT_01b7b734 = _DAT_01b7b734 + 1;
  if (((((param_1[0x15] <= (int)param_2) && (param_1[0x16] <= (int)param_3)) &&
       (param_1[0x17] <= (int)param_4)) &&
      (((int)param_2 <= param_1[0x18] && ((int)param_3 <= param_1[0x19])))) &&
     ((int)param_4 <= param_1[0x1a])) {
    pfStack_d8 = param_4;
    puStack_dc = param_3;
    piStack_e0 = param_2;
    piStack_e4 = param_1;
    piStack_e8 = (int *)0x4693fe;
    local_34 = (int *)core_dtrace_cpp_CDemonRaytrace_getCubeAt_FUN_004678d0();
    if ((local_34 != (int *)0x0) && (*local_34 != 0)) {
      local_28 = (float)(int)param_2;
      local_18 = param_3;
      local_14 = param_4;
      local_20 = (float)(int)param_3;
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_30 = (float)(int)param_4;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      _DAT_01b7b738 = _DAT_01b7b738 + 1;
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_64 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_60 = (float)(int)ROUND(local_a8 * _DAT_0059c8a0);
      local_5c = (float)(int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_64;
      puStack_dc = (byte *)*0x01B4D738;
      piStack_e0 = (int *)0x4694d1;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_14 = (float *)((int)param_2 + 1);
      local_2c = (float *)(float)(int)local_14;
      local_ac = (float)local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_7c = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_78 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_74 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_7c;
      puStack_dc = (byte *)(*0x01B4D738 + 0x30);
      piStack_e0 = (int *)0x46955c;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_14 = (float *)((int)param_4 + 1);
      local_ac = (float)local_2c * (float)param_1[10] + (float)param_1[4];
      local_24 = (float)(int)local_14;
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_40 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_3c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_38 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_40;
      puStack_dc = (byte *)(*0x01B4D738 + 0x60);
      piStack_e0 = (int *)0x4695f4;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = local_20 * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_58 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_54 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_50 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_58;
      puStack_dc = (byte *)(*0x01B4D738 + 0x90);
      piStack_e0 = (int *)0x469670;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_14 = (float *)(param_3 + 1);
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_1c = (int *)(float)(int)local_14;
      local_a8 = (float)local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_a0 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_9c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_98 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_a0;
      puStack_dc = (byte *)(*0x01B4D738 + 0xc0);
      piStack_e0 = (int *)0x469702;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_ac = (float)local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = (float)local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_30 * (float)param_1[0xc] + (float)param_1[6];
      local_94 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_90 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_8c = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_94;
      puStack_dc = (byte *)(*0x01B4D738 + 0xf0);
      piStack_e0 = (int *)0x46977e;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_ac = (float)local_2c * (float)param_1[10] + (float)param_1[4];
      local_a8 = (float)local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_70 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_6c = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_68 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_70;
      puStack_dc = (byte *)(*0x01B4D738 + 0x120);
      piStack_e0 = (int *)0x4697fa;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      local_ac = local_28 * (float)param_1[10] + (float)param_1[4];
      local_a8 = (float)local_1c * (float)param_1[0xb] + (float)param_1[5];
      local_a4 = local_24 * (float)param_1[0xc] + (float)param_1[6];
      local_88 = (float)(int)ROUND(local_ac * _DAT_0059c8a0);
      local_84 = (int)ROUND(local_a8 * _DAT_0059c8a0);
      local_80 = (int)ROUND(local_a4 * _DAT_0059c8a0);
      pfStack_d8 = &local_88;
      puStack_dc = (byte *)(*0x01B4D738 + 0x150);
      piStack_e0 = (int *)0x469876;
      wincore_windll_cpp_transformAndProjectPoint_FUN_0053075c();
      piVar1 = 0x01B4D738;
      uVar2 = DAT_005c5024 & DAT_005c5054 & DAT_005c5084 & DAT_005c50b4 & DAT_005c50e4 &
              DAT_005c5114 & DAT_005c5144 & DAT_005c5174;
      if (((uVar2 & 0x80000000) == 0) || ((char)uVar2 == '\0')) {
        _DAT_01b7b73c = _DAT_01b7b73c + 1;
        if (1 < param_5) {
          local_14 = param_4;
          local_d0 = 4;
          local_cc = 0;
          local_c8 = 0;
          local_c4 = 0xffffffff;
          local_bc = 0;
          local_b4 = 5;
          local_b0 = 4;
          puStack_dc = (byte *)0x469a74;
          pfStack_d8 = &fStack_d4;
          fVar7 = (float10)round
                                     (((float10)(int)param_4 * (float10)(float)param_1[0xc] +
                                      (float10)(float)param_1[6]) * (float10)_DAT_0057e23e);
          piStack_e0 = piVar1;
          local_c4 = (int)ROUND(fVar7);
          local_bc = 1;
          piStack_e4 = (int *)0x469a82;
          iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190();
          piVar1 = 0x01B4D738;
          if (iVar3 == 0) {
            local_18 = (byte *)((int)param_4 + 1);
            local_c8 = 1;
            local_c0 = 2;
            local_bc = 3;
            local_b8 = 7;
            local_b4 = 6;
            piStack_e0 = (int *)0x469ae8;
            puStack_dc = (byte *)&pfStack_d8;
            local_d0 = iVar3;
            local_cc = iVar3;
            fVar7 = (float10)round
                                       (((float10)(int)local_18 * (float10)(float)param_1[0xc] +
                                        (float10)(float)param_1[6]) * (float10)_DAT_0057e246);
            piStack_e4 = piVar1;
            local_c8 = (int)ROUND(fVar7);
            piStack_e8 = (int *)0x469af2;
            iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190();
            piVar1 = 0x01B4D738;
            if (iVar3 == 0) {
              local_1c = param_2;
              fStack_d4 = -NAN;
              local_c0 = 4;
              local_bc = 7;
              local_b8 = 3;
              piStack_e4 = (int *)0x469b55;
              piStack_e0 = (int *)&puStack_dc;
              local_d0 = iVar3;
              local_cc = iVar3;
              local_c4 = iVar3;
              fVar7 = (float10)round
                                         (((float10)(int)param_2 * (float10)(float)param_1[10] +
                                          (float10)(float)param_1[4]) * (float10)_DAT_0057e23e);
              piStack_e8 = piVar1;
              local_cc = (int)ROUND(fVar7);
              fVar4 = (float)engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                       ();
              piVar1 = 0x01B4D738;
              if (fVar4 == 0.0) {
                local_20 = (float)((int)param_2 + 1);
                pfStack_d8 = (float *)0x1;
                local_c8 = 1;
                local_c0 = 6;
                local_bc = 5;
                piStack_e8 = (int *)0x469bc1;
                piStack_e4 = (int *)&piStack_e0;
                fStack_d4 = fVar4;
                local_d0 = (int)fVar4;
                fVar7 = (float10)round
                                           (((float10)(int)local_20 * (float10)(float)param_1[10] +
                                            (float10)(float)param_1[4]) * (float10)_DAT_0057e246);
                local_d0 = (int)ROUND(fVar7);
                local_c8 = 2;
                puVar5 = (byte *)
                         engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                   (piVar1);
                piVar1 = 0x01B4D738;
                if (puVar5 == (byte *)0x0) {
                  pfStack_d8 = (float *)0x1;
                  local_24 = (float)(unaff_EBX + 1);
                  fStack_d4 = 0.0;
                  local_cc = 4;
                  local_c8 = 5;
                  local_c4 = 6;
                  local_c0 = 7;
                  uVar8 = 0x469c40;
                  piStack_e8 = (int *)&piStack_e4;
                  puStack_dc = puVar5;
                  fVar7 = (float10)round
                                             (((float10)(int)local_24 * (float10)(float)param_1[0xb]
                                              + (float10)(float)param_1[5]) * (float10)_DAT_0057e246
                                             );
                  fStack_d4 = (float)(int)ROUND(fVar7);
                  piVar6 = (int *)engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                            (piVar1,uVar8);
                  piVar1 = 0x01B4D738;
                  ppiVar9 = &piStack_e8;
                  if (piVar6 == (int *)0x0) {
                    puStack_dc = (byte *)0xffffffff;
                    pfStack_d8 = (float *)0x0;
                    local_d0 = 0;
                    local_c8 = 2;
                    local_c4 = 3;
                    uVar8 = 0x469cb3;
                    piStack_e0 = piVar6;
                    local_28 = unaff_ESI;
                    fVar7 = (float10)round
                                               (((float10)(int)unaff_ESI *
                                                 (float10)(float)param_1[0xb] +
                                                (float10)(float)param_1[5]) * (float10)_DAT_0057e23e
                                               );
                    pfStack_d8 = (float *)(int)ROUND(fVar7);
                    local_d0 = 1;
                    iVar3 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                      (piVar1,uVar8,ppiVar9);
                    if (iVar3 == 0) {
                      return;
                    }
                  }
                }
              }
            }
          }
        }
        local_64 = (float)(int)param_2 * (float)param_1[10] + (float)param_1[4];
        local_2c = param_4;
        local_60 = (float)unaff_EDI * (float)param_1[0xb] + (float)param_1[5];
        _DAT_01b7b740 = _DAT_01b7b740 + 1;
        local_5c = (float)(int)param_4 * (float)param_1[0xc] + (float)param_1[6];
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&local_64);
        core_dcube_cpp_CDemonCube_rotateVertices_FUN_0044aff0(local_4c,*param_1);
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                  (DAT_005ae704,&DAT_02dd1184);
        iVar3 = _DAT_01b7b744;
        *(uint *)(_DAT_01b7b744 * 4 + 0x1b7b74c) = local_4c;
        iVar3 = iVar3 * 0xc;
        if ((float *)(&DAT_01b8efcc + iVar3) != &local_64) {
          *(float *)(&DAT_01b8efcc + iVar3) = local_64;
          *(float *)(&DAT_01b8efd0 + iVar3) = local_60;
          *(float *)(&DAT_01b8efd4 + iVar3) = local_5c;
        }
        _DAT_01b7b744 = _DAT_01b7b744 + 1;
        if (19999 < _DAT_01b7b744) {
          _DAT_01cc4800 = ">..\\core\\dtrace.cpp" + 1;
          _DAT_01cc4804 = 0x792;
          FUN_004c8440("Too many drawn cubes.  Need to recompile.");
          return;
        }
      }
    }
  }
  return;
}
