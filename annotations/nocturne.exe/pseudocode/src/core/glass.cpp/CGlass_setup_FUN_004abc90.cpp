// Name: core_glass.cpp_CGlass_setup_FUN_004abc90
// Address: 004abc90
// Address Range: [[004abc90, 004ac3e1]]
// Convention: unknown
// Signature: void core_glass_cpp_CGlass_setup_FUN_004abc90(int param_1)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_CGlass_setup_FUN_004abc90(int param_1)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  char *pcVar7;
  char *pcVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float *pfStack_e0;
  float *pfStack_dc;
  float local_d8;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8 [3];
  float local_9c [3];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  uint local_80;
  uint local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c [3];
  float local_60;
  float local_5c;
  float local_58;
  float local_54 [3];
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  int local_30;
  float local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  
  pfStack_dc = (float *)param_1;
  pfStack_e0 = (float *)0x4abca8;
  core_actor_cpp_CDemonActor_setup_FUN_00409fc0();
  pfStack_dc = (float *)(param_1 + 0x15c);
  pfStack_e0 = DAT_005ae704;
  engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0();
  if (*(int *)(param_1 + 0x1e0) != 0) {
    pfStack_dc = &local_84;
    local_7c = 0;
    local_80 = 0;
    pfStack_e0 = local_a8;
    local_84 = *(float *)(param_1 + 0x150) * 0.5f;
    pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(param_1 + 0x3c);
    local_78 = *(float *)(param_1 + 0x20) + *pfVar5;
    local_74 = *(float *)(param_1 + 0x24) + pfVar5[1];
    local_70 = *(float *)(param_1 + 0x28) + pfVar5[2];
    if (&local_48 != &local_78) {
      local_48 = local_78;
      local_44 = local_74;
      local_40 = local_70;
    }
    local_84 = -local_84;
    pfStack_dc = &local_84;
    pfStack_e0 = local_54;
    pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(param_1 + 0x3c);
    local_3c = *(float *)(param_1 + 0x20) + *pfVar5;
    local_38 = *(float *)(param_1 + 0x24) + pfVar5[1];
    local_34 = *(float *)(param_1 + 0x28) + pfVar5[2];
    if (&local_60 != &local_3c) {
      local_60 = local_3c;
      local_5c = local_38;
      local_58 = local_34;
    }
    local_80 = *(uint *)(param_1 + 0x154);
    pfStack_dc = &local_84;
    pfStack_e0 = local_6c;
    pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(param_1 + 0x3c);
    local_cc = *(float *)(param_1 + 0x20) + *pfVar5;
    local_c8 = *(float *)(param_1 + 0x24) + pfVar5[1];
    local_c4 = *(float *)(param_1 + 0x28) + pfVar5[2];
    if (&local_c0 != &local_cc) {
      local_c0 = local_cc;
      local_bc = local_c8;
      local_b8 = local_c4;
    }
    pfStack_dc = &local_84;
    pfStack_e0 = local_9c;
    local_84 = -local_84;
    pfVar5 = (float *)core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40(param_1 + 0x3c);
    local_90 = *(float *)(param_1 + 0x20) + *pfVar5;
    local_8c = *(float *)(param_1 + 0x24) + pfVar5[1];
    local_88 = *(float *)(param_1 + 0x28) + pfVar5[2];
    if (&local_b4 != &local_90) {
      local_b4 = local_90;
      local_b0 = local_8c;
      local_ac = local_88;
    }
    pfStack_dc = &local_b4;
    pfStack_e0 = &local_c0;
    core_mirror_cpp_CMirror_setupCorners_FUN_004d6590(param_1 + 0x1e4,&local_48,&local_60);
  }
  pfStack_dc = (float *)0x4abce0;
  fVar9 = (float10)round
                             ((float10)*(float *)(param_1 + 0x150) * (float10)0.5);
  local_18 = (int)ROUND(fVar9);
  *(int *)(param_1 + 0xb24) = local_18 + 1;
  if (4 < local_18 + 1) {
    *(uint *)(param_1 + 0xb24) = 4;
  }
  pfStack_e0 = (float *)0x4abd15;
  fVar9 = (float10)round
                             ((float10)*(float *)(param_1 + 0x154) * (float10)0.5);
  local_1c = (int)ROUND(fVar9);
  *(int *)(param_1 + 0xb28) = local_1c + 1;
  if (4 < local_1c + 1) {
    *(uint *)(param_1 + 0xb28) = 4;
  }
  iVar3 = *(int *)(param_1 + 0xb24) * *(int *)(param_1 + 0xb28);
  *(int *)(param_1 + 0xb2c) = (*(int *)(param_1 + 0xb24) + 1) * (*(int *)(param_1 + 0xb28) + 1);
  *(int *)(param_1 + 0xb30) = iVar3;
  if ((0x19 < *(int *)(param_1 + 0xb2c)) || (0x10 < iVar3)) {
    _DAT_01cc4800 = "..\\core\\glass.cpp";
    _DAT_01cc4804 = 0x86;
    FUN_004c8440("CGlass::setup - Too many verticies(%d) or faces(%d)!",*(uint *)(param_1 + 0xb2c),
                 *(uint *)(param_1 + 0xb30));
  }
  local_2c = *(float *)(param_1 + 0x150) / (float)*(int *)(param_1 + 0xb24);
  local_38 = *(float *)(param_1 + 0x154) / (float)*(int *)(param_1 + 0xb28);
  iVar3 = 0;
  pfStack_e0 = (float *)0x0;
  pfStack_dc = (float *)0x0;
  local_d8 = 0.0;
  local_30 = param_1 + 900;
  for (local_28 = 0; local_28 < *(int *)(param_1 + 0xb28) + 1; local_28 = local_28 + 1) {
    pfStack_e0 = (float *)(-*(float *)(param_1 + 0x150) * (float)0.5);
    pfVar5 = (float *)(iVar3 * 0xc + local_30);
    iVar4 = iVar3 * 4 + param_1;
    for (iVar6 = 0; iVar6 < *(int *)(param_1 + 0xb24) + 1; iVar6 = iVar6 + 1) {
      if ((float **)pfVar5 != &pfStack_e0) {
        *pfVar5 = (float)pfStack_e0;
        pfVar5[1] = (float)pfStack_dc;
        pfVar5[2] = local_d8;
      }
      fVar9 = (float10)16515072;
      fVar10 = (float10)131072;
      local_1c = iVar6;
      fVar11 = (float10)round
                                  (((float10)iVar6 / (float10)*(int *)(param_1 + 0xb24)) * fVar9 +
                                   fVar10);
      *(int *)(iVar4 + 0x5dc) = (int)ROUND(fVar11);
      local_20 = *(int *)(param_1 + 0xb28) - (int)local_2c;
      pfStack_e0 = (float *)0x4ac0e7;
      fVar9 = (float10)round
                                 (fVar10 + ((float10)local_20 / (float10)*(int *)(param_1 + 0xb28))
                                           * fVar9);
      local_24 = (int)ROUND(fVar9);
      pfVar5 = pfVar5 + 3;
      *(int *)(iVar4 + 0x640) = local_24;
      iVar3 = iVar3 + 1;
      pfStack_e0 = (float *)((float)pfStack_e0 + local_34);
      iVar4 = iVar4 + 4;
    }
    pfStack_dc = (float *)((float)pfStack_dc + local_38);
  }
  local_24 = 0;
  local_20 = 0;
  if (0 < *(int *)(param_1 + 0xb28)) {
    local_34 = (float)(param_1 + 0x6a4);
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0xb24)) {
        iVar4 = local_20 * 0x48 + (int)local_34;
        do {
          *(uint *)(iVar4 + 4) = 4;
          *(uint *)(iVar4 + 0x14) = 0;
          uVar2 = *(uint *)(iVar4 + 0x14);
          *(uint *)(iVar4 + 0x10) = uVar2;
          *(uint *)(iVar4 + 0xc) = uVar2;
          *(uint *)(iVar4 + 8) = uVar2;
          iVar6 = (*(int *)(param_1 + 0xb24) + 1) * local_24 + iVar3;
          *(int *)(iVar4 + 0x18) = iVar6;
          *(uint *)(iVar4 + 0x1c) = *(uint *)(param_1 + 0x5dc + iVar6 * 4);
          *(uint *)(iVar4 + 0x20) = *(uint *)(param_1 + 0x640 + iVar6 * 4);
          *(int *)(iVar4 + 0x24) = iVar6 + 1;
          *(uint *)(iVar4 + 0x28) = *(uint *)(param_1 + 0x5e0 + iVar6 * 4);
          *(uint *)(iVar4 + 0x2c) = *(uint *)(param_1 + 0x644 + iVar6 * 4);
          *(int *)(iVar4 + 0x30) = *(int *)(param_1 + 0xb24) + iVar6 + 2;
          *(uint *)(iVar4 + 0x34) =
               *(uint *)(param_1 + 0x5e4 + (*(int *)(param_1 + 0xb24) + iVar6) * 4);
          *(uint *)(iVar4 + 0x38) =
               *(uint *)(param_1 + 0x648 + (*(int *)(param_1 + 0xb24) + iVar6) * 4);
          *(int *)(iVar4 + 0x3c) = *(int *)(param_1 + 0xb24) + iVar6 + 1;
          *(uint *)(iVar4 + 0x40) =
               *(uint *)(param_1 + 0x5e0 + (*(int *)(param_1 + 0xb24) + iVar6) * 4);
          *(uint *)(iVar4 + 0x44) =
               *(uint *)(param_1 + 0x644 + (iVar6 + *(int *)(param_1 + 0xb24)) * 4);
          iVar3 = iVar3 + 1;
          local_20 = local_20 + 1;
          iVar4 = iVar4 + 0x48;
        } while (iVar3 < *(int *)(param_1 + 0xb24));
      }
      local_24 = local_24 + 1;
    } while (local_24 < *(int *)(param_1 + 0xb28));
  }
  *(uint *)(param_1 + 0xfc) = (uint)(*(int *)(param_1 + 0x174) < 0xfde9);
  iVar3 = _stricmp(param_1 + 0x17c,"none");
  if (iVar3 == 0) {
    *(byte *)(param_1 + 0x17c) = 0;
  }
  *(uint *)(param_1 + 0x104) = 0;
  if (*(char *)(param_1 + 0x17c) == '\0') {
    *(uint *)(param_1 + 0x104) = 1;
  }
  *(uint *)(param_1 + 0xb34) = 0;
  if (*(int *)(param_1 + 0x368) != 0) {
    pcVar8 = (char *)(param_1 + 0x374);
    iVar3 = _strcmp(pcVar8,"7YEARS.RAW");
    if (iVar3 == 0) {
      iVar3 = _stricmp(param_1 + 0x164,"factwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "factwinx.raw";
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = _stricmp(param_1 + 0x164,"dockwin.raw");
      if (iVar3 == 0) {
        pcVar7 = "dockwinx.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = _stricmp(param_1 + 0x164,"windo10.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo10x.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      iVar3 = _stricmp(param_1 + 0x164,"windo11.raw");
      if (iVar3 == 0) {
        pcVar7 = "windo11x.raw";
        pcVar8 = (char *)(param_1 + 0x374);
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') {
            return;
          }
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
        return;
      }
    }
  }
  return;
}
