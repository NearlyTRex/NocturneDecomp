// Name: core_set.cpp_CDemonSet_lightVerticies_FUN_0050c2d0
// Address: 0050c2d0
// Address Range: [[0050c2d0, 0050d034]]
// Convention: __cdecl
// Signature: int __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(int param_1,int param_2,int param_3,ushort *param_4,int param_5,int param_6,undefined4 *param_7)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0(int param_1,int param_2,int param_3,ushort *param_4,int param_5,int param_6,uint *param_7)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  ushort *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  byte *puVar11;
  uint *puVar12;
  int iVar13;
  float *pfVar14;
  byte bVar15;
  int aiStackY_1158 [1013];
  int *piVar16;
  uint local_170;
  uint local_164;
  uint local_160;
  uint local_15c;
  uint local_158;
  int local_14c;
  int local_148;
  int local_144;
  uint local_140;
  uint local_134;
  uint local_130;
  uint local_12c;
  int local_128;
  int local_124;
  int local_120;
  uint local_11c;
  uint local_118;
  uint local_114;
  uint local_110;
  uint local_10c;
  uint local_108;
  uint local_104;
  uint local_f8;
  uint local_ec;
  uint local_e0;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_a8;
  float local_a4;
  float local_9c;
  uint local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_80;
  float local_7c;
  float local_74;
  float local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint *local_48;
  float local_44;
  float local_40;
  float local_3c;
  int local_38;
  int local_34;
  int local_30;
  float local_2c;
  float local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar15 = 0;
  if (20000 < param_2) {
    _DAT_01cc4800 = "..\\core\\set.cpp";
    _DAT_01cc4804 = 0xd26;
    FUN_004c8440("CDemonSet::lightVerticies - tried to light %d vertices, but GLOBAL_VERTEX_COUNT = %d",param_2,20000);
  }
  iVar5 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  if (iVar5 == 0) {
    iVar5 = *(int *)(param_1 + 0x15a898);
    iVar8 = param_2 * 0x30;
    if (iVar5 == 0) {
      iVar5 = param_1;
      if (*(int *)(param_1 + 0x161270) == 0) {
        if (*(int *)(param_1 + 0x15a8a0) == 0) {
          if (param_7 == (uint *)0x0) {
            if (param_3 == 0) {
              local_34 = 0;
              iVar8 = 0;
              if (0 < param_2) {
                do {
                  local_11c = *(uint *)((int)&DAT_005c5014 + iVar8);
                  local_118 = *(uint *)((int)&DAT_005c5018 + iVar8);
                  local_114 = *(uint *)((int)&DAT_005c501c + iVar8);
                  FUN_00441440(0x1fb8508,&stack0xfffffee4);
                  local_e0 = local_158;
                  *(uint *)((int)&stack0xffffff24 + (uint)bVar15 * 0xfffffffe * 4) =
                       *(uint *)((int)&stack0xfffffeac + (uint)bVar15 * 0xfffffffe * 4);
                  iVar5 = local_34;
                  *(uint *)(&stack0xffffff28 + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
                       *(uint *)(&stack0xfffffeb0 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
                  core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                            (param_1,&stack0xffffff20,0,local_34,0);
                  *(int *)((int)&DAT_005c5040 + iVar8) = _DAT_01c038f4;
                  local_34 = iVar5 + 1;
                  iVar8 = iVar8 + 0x30;
                } while (local_34 < param_2);
                return local_34;
              }
            }
            else {
              if (0 < param_2) {
                iVar6 = 0;
                local_58 = 0;
                local_68 = iVar8;
                do {
                  local_134 = *(uint *)((int)&DAT_005c5014 + iVar6);
                  local_130 = *(uint *)((int)&DAT_005c5018 + iVar6);
                  local_12c = *(uint *)((int)&DAT_005c501c + iVar6);
                  FUN_00441440(0x1fb8508,&stack0xfffffecc);
                  puVar12 = (uint *)(local_58 + 0x200b134 + (uint)bVar15 * -8);
                  *(uint *)(local_58 + 0x200b130) = local_140;
                  *puVar12 = *(uint *)((int)&stack0xfffffec4 + (uint)bVar15 * 0xfffffffe * 4);
                  puVar12[(uint)bVar15 * -2 + 1] =
                       *(uint *)(&stack0xfffffec8 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
                  iVar6 = iVar6 + 0x30;
                  local_58 = local_58 + 0xc;
                } while (iVar6 < local_68);
              }
              if (param_6 < 1) {
                if (4000 < param_3) {
                  _DAT_01cc4800 = "..\\core\\set.cpp";
                  _DAT_01cc4804 = 0xde8;
                  FUN_004c8440("Too many normals on this packed tri list");
                  _DAT_01cc4800 = "..\\core\\set.cpp";
                  _DAT_01cc4804 = 0xdea;
                  FUN_004c8440("Need more normals for packed models");
                }
                iVar8 = 0;
                if (0 < param_3) {
                  pfVar14 = (float *)&DAT_01fff5b0;
                  puVar7 = param_4;
                  do {
                    iVar10 = (uint)puVar7[1] * 0xc;
                    iVar9 = (uint)*puVar7 * 0xc;
                    local_94 = (uint)puVar7[2];
                    local_24 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar9 + 0x200b130);
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar9 + 0x200b134);
                    iVar13 = local_94 * 0xc;
                    iVar6 = *(int *)(iVar13 + 0x200b130) - *(int *)(iVar10 + 0x200b130);
                    local_a8 = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar9 + 0x200b138));
                    local_a4 = (float)iVar6;
                    local_1c = *(int *)(iVar13 + 0x200b134) - *(int *)(iVar10 + 0x200b134);
                    local_88 = (float)local_18;
                    local_20 = *(int *)(iVar13 + 0x200b138) - *(int *)(iVar10 + 0x200b138);
                    local_9c = (float)local_20;
                    local_40 = local_88 * local_9c - (float)local_1c * local_a8;
                    local_44 = (float)iVar6 * local_a8 - (float)local_24 * local_9c;
                    local_3c = (float)local_24 * (float)local_1c - local_a4 * local_88;
                    local_90 = local_3c * local_3c + local_44 * local_44 + local_40 * local_40;
                    local_8c = (float)(_DAT_01c70710 - ((int)local_90 >> 1));
                    fVar1 = local_8c * (float)_DAT_00590792;
                    puVar7 = puVar7 + 9;
                    iVar8 = iVar8 + 1;
                    *pfVar14 = local_40 * fVar1;
                    pfVar14[1] = local_44 * fVar1;
                    pfVar14[2] = local_3c * fVar1;
                    pfVar14 = pfVar14 + 3;
                  } while (iVar8 < param_3);
                }
                memset(&DAT_02045ab0,0,param_2 * 0xc);
                iVar8 = 0;
                if (0 < param_3) {
                  pfVar14 = (float *)&DAT_01fff5b0;
                  do {
                    iVar6 = (uint)*param_4 * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         pfVar14[1] + *(float *)(&DAT_02045ab4 + iVar6);
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         pfVar14[2] + *(float *)(&DAT_02045ab8 + iVar6);
                    iVar6 = (uint)param_4[1] * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         pfVar14[1] + *(float *)(&DAT_02045ab4 + iVar6);
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         pfVar14[2] + *(float *)(&DAT_02045ab8 + iVar6);
                    iVar6 = (uint)param_4[2] * 0xc;
                    param_4 = param_4 + 9;
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         pfVar14[1] + *(float *)(&DAT_02045ab4 + iVar6);
                    iVar8 = iVar8 + 1;
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         pfVar14[2] + *(float *)(&DAT_02045ab8 + iVar6);
                    pfVar14 = pfVar14 + 3;
                  } while (iVar8 < param_3);
                }
              }
              else {
                iVar8 = 0;
                puVar7 = param_4;
                if (0 < param_3) {
                  do {
                    iVar9 = *(int *)(puVar7 + 0x12) * 0xc;
                    iVar6 = *(int *)(puVar7 + 0xc) * 0xc;
                    local_20 = *(int *)(iVar9 + 0x200b130) - *(int *)(iVar6 + 0x200b130);
                    local_1c = *(int *)(iVar9 + 0x200b134) - *(int *)(iVar6 + 0x200b134);
                    iVar10 = *(int *)(puVar7 + 0x18) * 0xc;
                    iVar13 = *(int *)(iVar10 + 0x200b130) - *(int *)(iVar9 + 0x200b130);
                    fVar2 = (float)(*(int *)(iVar9 + 0x200b138) - *(int *)(iVar6 + 0x200b138));
                    local_c4 = (float)iVar13;
                    local_18 = *(int *)(iVar10 + 0x200b134) - *(int *)(iVar9 + 0x200b134);
                    local_bc = (float)(*(int *)(iVar10 + 0x200b138) - *(int *)(iVar9 + 0x200b138));
                    local_c0 = (float)local_18;
                    fVar1 = (float)local_1c * local_bc - local_c0 * fVar2;
                    fVar4 = (float)iVar13 * fVar2 - (float)local_20 * local_bc;
                    fVar3 = (float)local_20 * local_c0 - local_c4 * (float)local_1c;
                    local_2c = fVar3 * fVar3 + fVar4 * fVar4 + fVar1 * fVar1;
                    local_28 = (float)(_DAT_01c70710 - ((int)local_2c >> 1));
                    fVar2 = local_28 * (float)_DAT_00590792;
                    *(float *)(puVar7 + 4) = fVar1 * fVar2;
                    *(float *)(puVar7 + 6) = fVar4 * fVar2;
                    *(float *)(puVar7 + 8) = fVar3 * fVar2;
                    if (param_6 == 4) {
                      puVar7 = puVar7 + 0x24;
                    }
                    else {
                      puVar7 = puVar7 + 0x1e;
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < param_3);
                }
                memset(&DAT_02045ab0,0,param_2 * 0xc);
                iVar8 = 0;
                if (0 < param_3) {
                  do {
                    iVar6 = *(int *)(param_4 + 0xc) * 0xc;
                    pfVar14 = (float *)(param_4 + 4);
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02045ab4 + iVar6);
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02045ab8 + iVar6);
                    iVar6 = *(int *)(param_4 + 0x12) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02045ab4 + iVar6);
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02045ab8 + iVar6);
                    iVar6 = *(int *)(param_4 + 0x18) * 0xc;
                    *(float *)(&DAT_02045ab0 + iVar6) = *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6)
                    ;
                    *(float *)(&DAT_02045ab4 + iVar6) =
                         *(float *)(param_4 + 6) + *(float *)(&DAT_02045ab4 + iVar6);
                    *(float *)(&DAT_02045ab8 + iVar6) =
                         *(float *)(param_4 + 8) + *(float *)(&DAT_02045ab8 + iVar6);
                    if (*(int *)(param_4 + 2) == 4) {
                      iVar6 = *(int *)(param_4 + 0x1e) * 0xc;
                      *(float *)(&DAT_02045ab0 + iVar6) =
                           *pfVar14 + *(float *)(&DAT_02045ab0 + iVar6);
                      *(float *)(&DAT_02045ab4 + iVar6) =
                           *(float *)(param_4 + 6) + *(float *)(&DAT_02045ab4 + iVar6);
                      *(float *)(&DAT_02045ab8 + iVar6) =
                           *(float *)(param_4 + 8) + *(float *)(&DAT_02045ab8 + iVar6);
                    }
                    if (param_6 == 4) {
                      param_4 = param_4 + 0x24;
                    }
                    else {
                      param_4 = param_4 + 0x1e;
                    }
                    iVar8 = iVar8 + 1;
                  } while (iVar8 < param_3);
                }
              }
              if (*(int *)(param_1 + 0x15aa9c) == 0) {
                if (0 < param_2) {
                  pfVar14 = (float *)&DAT_02045ab0;
                  local_54 = 0x200b130;
                  iVar5 = 0;
                  local_4c = 0;
                  do {
                    iVar8 = local_54;
                    local_74 = pfVar14[2] * pfVar14[2] +
                               *pfVar14 * *pfVar14 + pfVar14[1] * pfVar14[1];
                    local_70 = (float)(_DAT_01c70710 - ((int)local_74 >> 1));
                    fVar1 = local_70 * (float)_DAT_00590792;
                    *pfVar14 = *pfVar14 * fVar1;
                    pfVar14[1] = pfVar14[1] * fVar1;
                    pfVar14[2] = pfVar14[2] * fVar1;
                    local_128 = (int)ROUND(*pfVar14);
                    local_124 = (int)ROUND(pfVar14[1]);
                    local_120 = (int)ROUND(pfVar14[2]);
                    pfVar14 = pfVar14 + 3;
                    iVar9 = iVar5 + 1;
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (param_1,local_54,&stack0xfffffed8,iVar5,0);
                    iVar6 = _DAT_01c038f4;
                    local_54 = iVar8 + 0xc;
                    *(int *)((int)&DAT_005c5040 + local_4c) = _DAT_01c038f4;
                    iVar5 = iVar9;
                    local_4c = local_4c + 0x30;
                  } while (iVar9 < param_2);
                  return iVar6;
                }
              }
              else {
                local_30 = 0;
                if (0 < param_2) {
                  pfVar14 = (float *)&DAT_02045ab0;
                  local_60 = 0;
                  local_50 = 0x200b130;
                  do {
                    if (((1.0 <= ABS(*pfVar14)) || (1.0 <= ABS(pfVar14[1]))) ||
                       (1.0 <= ABS(pfVar14[2]))) {
                      local_80 = pfVar14[2] * pfVar14[2] +
                                 *pfVar14 * *pfVar14 + pfVar14[1] * pfVar14[1];
                      local_7c = (float)(_DAT_01c70710 - ((int)local_80 >> 1));
                      fVar1 = local_7c * (float)_DAT_00590792;
                      *pfVar14 = *pfVar14 * fVar1;
                      pfVar14[1] = pfVar14[1] * fVar1;
                      pfVar14[2] = pfVar14[2] * fVar1;
                      local_14c = (int)ROUND(*pfVar14);
                      local_148 = (int)ROUND(pfVar14[1]);
                      local_144 = (int)ROUND(pfVar14[2]);
                      piVar16 = &stack0xfffffeb4;
                      iVar5 = local_50;
                    }
                    else {
                      piVar16 = (int *)0x0;
                      iVar5 = local_30 * 0xc + 0x200b130;
                    }
                    core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                              (param_1,iVar5,piVar16,local_30,0);
                    iVar5 = _DAT_01c038f4;
                    pfVar14 = pfVar14 + 3;
                    local_30 = local_30 + 1;
                    *(int *)((int)&DAT_005c5040 + local_60) = _DAT_01c038f4;
                    local_50 = local_50 + 0xc;
                    local_60 = local_60 + 0x30;
                  } while (local_30 < param_2);
                }
              }
            }
          }
          else {
            if (*(int *)(param_1 + 0x15aa88) == 0) {
              if (0 < param_2) {
                local_5c = 0;
                iVar5 = 0;
                local_6c = iVar8;
                do {
                  local_110 = *(uint *)((int)&DAT_005c5014 + iVar5);
                  local_10c = *(uint *)((int)&DAT_005c5018 + iVar5);
                  local_108 = *(uint *)((int)&DAT_005c501c + iVar5);
                  FUN_00441440(0x1fb8508,&stack0xfffffef0);
                  iVar5 = iVar5 + 0x30;
                  puVar12 = (uint *)(local_5c + 0x200b134 + (uint)bVar15 * -8);
                  *(uint *)(local_5c + 0x200b130) = local_f8;
                  *puVar12 = *(uint *)(&stack0xffffff0c + (uint)bVar15 * -8);
                  puVar12[(uint)bVar15 * -2 + 1] =
                       *(uint *)(&stack0xffffff10 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
                  local_5c = local_5c + 0xc;
                } while (iVar5 < local_6c);
              }
              iVar5 = 0;
              if (0 < param_2) {
                local_48 = param_7;
                do {
                  core_dcamera_cpp_CDemonCamera_transformVectorWithAlpha_FUN_00441a10
                            (0x1fb8508,local_48,&stack0xfffffe90);
                  local_48 = local_48 + 3;
                  *(uint *)(&DAT_02045ab0 + iVar5 * 0xc) = local_170;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar15 * -8 + iVar5 * 0xc) =
                       *(uint *)((int)&stack0xfffffe94 + (uint)bVar15 * 0xfffffffe * 4);
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar15 * -8 + iVar5 * 0xc) +
                   ((uint)bVar15 * -2 + 1) * 4) =
                       *(uint *)(&stack0xfffffe98 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
                  iVar5 = iVar5 + 1;
                } while (iVar5 < param_2);
              }
            }
            else {
              iVar5 = 0;
              if (0 < param_2) {
                do {
                  *(uint *)(&DAT_02045ab0 + iVar5 * 0xc) = *param_7;
                  *(uint *)(&DAT_02045ab4 + (uint)bVar15 * -8 + iVar5 * 0xc) =
                       param_7[(uint)bVar15 * -2 + 1];
                  *(uint *)
                   ((int)(&DAT_02045ab4 + (uint)bVar15 * -8 + iVar5 * 0xc) +
                   ((uint)bVar15 * -2 + 1) * 4) =
                       (param_7 + (uint)bVar15 * -2 + 1)[(uint)bVar15 * -2 + 1];
                  iVar5 = iVar5 + 1;
                  param_7 = param_7 + 3;
                } while (iVar5 < param_2);
              }
            }
            iVar5 = param_2;
            if (0 < param_2) {
              puVar11 = &DAT_02045ab0;
              local_64 = 0x200b130;
              iVar5 = 0;
              iVar8 = 0;
              do {
                iVar6 = iVar5 + 1;
                core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                          (param_1,local_64,puVar11,iVar5,0);
                *(int *)((int)&DAT_005c5040 + iVar8) = _DAT_01c038f4;
                puVar11 = puVar11 + 0xc;
                local_64 = local_64 + 0xc;
                iVar5 = iVar6;
                iVar8 = iVar8 + 0x30;
              } while (iVar6 < param_2);
              return local_64;
            }
          }
        }
        else if (0 < param_2) {
          local_38 = 0;
          iVar5 = 0;
          do {
            local_164 = *(uint *)((int)&DAT_005c5014 + iVar5);
            local_160 = *(uint *)((int)&DAT_005c5018 + iVar5);
            local_15c = *(uint *)((int)&DAT_005c501c + iVar5);
            FUN_00441440(0x1fb8508,&stack0xfffffe9c);
            local_ec = local_104;
            *(uint *)((int)&stack0xffffff18 + (uint)bVar15 * 0xfffffffe * 4) =
                 *(uint *)((int)&stack0xffffff00 + (uint)bVar15 * 0xfffffffe * 4);
            iVar8 = local_38;
            *(uint *)(&stack0xffffff1c + (uint)bVar15 * -8 + (uint)bVar15 * -8) =
                 *(uint *)(&stack0xffffff04 + (uint)bVar15 * -8 + (uint)bVar15 * -8);
            core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                      (param_1,&stack0xffffff14,0,local_38,0);
            *(int *)((int)&DAT_005c5040 + iVar5) = _DAT_01c038f4;
            local_38 = iVar8 + 1;
            iVar5 = iVar5 + 0x30;
          } while (local_38 < param_2);
          return local_38;
        }
      }
      else if (0 < param_2) {
        iVar5 = 0;
        do {
          *(uint *)((int)&DAT_005c5034 + iVar5) = *(uint *)(param_1 + 0x161274);
          *(uint *)((int)&DAT_005c5038 + iVar5) = *(uint *)(param_1 + 0x161278);
          iVar6 = iVar5 + 0x30;
          *(uint *)((int)&DAT_005c503c + iVar5) = *(uint *)(param_1 + 0x16127c);
          iVar5 = iVar6;
        } while (iVar6 < iVar8);
        return iVar6;
      }
    }
    else {
      if (_DAT_01ffb060 == 0) {
        if (iVar5 == 2) {
          iVar5 = 0;
          iVar6 = param_2;
          if (0 < param_2) {
            iVar8 = 0;
            do {
              *(uint *)((int)&DAT_005c5040 + iVar8) = 0;
              iVar6 = core_set_cpp_CDemonSet_lightVertexColor_FUN_0050b7f0
                                (param_1,param_5,0,iVar5,1);
              iVar5 = iVar5 + 1;
              param_5 = param_5 + 0xc;
              iVar8 = iVar8 + 0x30;
            } while (iVar5 < param_2);
          }
        }
        else {
          iVar6 = param_1;
          if (iVar5 == 3) {
            if (0 < param_2) {
              iVar5 = 0;
              do {
                *(uint *)((int)&DAT_005c5034 + iVar5) = *(uint *)(param_1 + 0x15aaa0);
                *(uint *)((int)&DAT_005c5038 + iVar5) = *(uint *)(param_1 + 0x15aaa4);
                iVar6 = iVar5 + 0x30;
                *(uint *)((int)&DAT_005c503c + iVar5) = *(uint *)(param_1 + 0x15aaa8);
                *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
                iVar5 = iVar6;
              } while (iVar6 < iVar8);
              _DAT_01c038f4 = 0;
              return iVar6;
            }
          }
          else if (0 < param_2) {
            iVar5 = 0;
            do {
              iVar6 = iVar5 + 0x30;
              *(uint *)((int)&DAT_005c5034 + iVar5) = 0xffff;
              *(uint *)((int)&DAT_005c5038 + iVar5) = 0xffff;
              *(uint *)((int)&DAT_005c503c + iVar5) = 0xffff;
              *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
              iVar5 = iVar6;
            } while (iVar6 < iVar8);
            _DAT_01c038f4 = 0;
            return iVar6;
          }
        }
        _DAT_01c038f4 = 0;
        return iVar6;
      }
      if (0 < param_2) {
        iVar5 = 0;
        do {
          param_1 = iVar5 + 0x30;
          *(uint *)((int)&DAT_005c5034 + iVar5) = 0;
          *(uint *)((int)&DAT_005c5038 + iVar5) = 0;
          *(uint *)((int)&DAT_005c503c + iVar5) = 0;
          *(uint *)((int)&DAT_005c5040 + iVar5) = 0;
          iVar5 = param_1;
        } while (param_1 < iVar8);
      }
      _DAT_01c038f4 = 0;
      iVar5 = param_1;
    }
  }
  return iVar5;
}
