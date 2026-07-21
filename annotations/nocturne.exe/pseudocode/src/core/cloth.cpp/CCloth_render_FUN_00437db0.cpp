// Name: core_cloth.cpp_CCloth_render_FUN_00437db0
// Address: 00437db0
// Address Range: [[00437db0, 00438203]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(int param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_render_FUN_00437db0(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  byte *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  byte bVar8;
  float10 fVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  int local_20;
  int local_1c;
  byte *local_18;
  
  bVar8 = 0;
  core_set_cpp_CDemonSet_rotateVerticies_FUN_0050c200
            (0x01E57284,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x10c));
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,1);
  engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,0xffff);
  engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_00461090(DAT_005ae704);
  uVar12 = 0x437e20;
  fVar9 = (float10)round
                             ((float10)*(float *)(param_1 + 0x37b48) * (float10)_DAT_0057aedd);
  iVar1 = (int)ROUND(fVar9);
  if (iVar1 < 1000) {
    return;
  }
  if (iVar1 < 63000) {
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_00461010(DAT_005ae704,iVar1,uVar12);
  }
  engine_texture_cpp_ensureTextureLoaded_FUN_00545920(param_1 + 0x124);
  if (*(int *)(param_1 + 0x37b44) == 0) {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(uint *)(param_1 + 0x104),*(int *)(param_1 + 0x110) / 2,
               *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_005ae704;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(*DAT_005ae704 + iVar5 + 0x20) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(iVar5 + 0x24 + *piVar2) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar1 < 63000) {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar10 = 0x267;
      uVar12 = *(uint *)(param_1 + 0x114);
    }
    else {
      iVar3 = *(int *)(param_1 + 0x110);
      uVar10 = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 0x114);
    }
    FUN_0050ddd0(0x01E57284,uVar12,iVar3 / 2,uVar10);
    iVar3 = *(int *)(param_1 + 0x110) / 2;
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(uint *)(param_1 + 0x104),iVar3,
               *(int *)(param_1 + 0x114) + iVar3 * 0x48,*(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar1) {
      local_20 = *(int *)(param_1 + 0x110) / 2;
      uVar12 = 0xffffffff;
      puVar4 = (byte *)(local_20 * 0x48 + *(int *)(param_1 + 0x114));
      goto LAB_00437faa;
    }
    local_20 = *(int *)(param_1 + 0x110) / 2;
    puVar4 = (byte *)(*(int *)(param_1 + 0x114) + local_20 * 0x48);
  }
  else {
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(uint *)(param_1 + 0x104),*(uint *)(param_1 + 0x110),
               *(uint *)(param_1 + 0x114),*(uint *)(param_1 + 0x10c),4,0);
    if ((param_2 != 0) && (iVar6 = 0, iVar3 = param_1, 0 < *(int *)(param_1 + 0x39ce8))) {
      do {
        piVar2 = DAT_005ae704;
        iVar5 = *(int *)(iVar3 + 0x39cec) * 0x30;
        *(uint *)(iVar5 + 0x20 + *DAT_005ae704) = *(uint *)(iVar3 + 0x3a64c);
        *(uint *)(*piVar2 + iVar5 + 0x24) = *(uint *)(iVar3 + 0x3a7dc);
        *(uint *)(iVar5 + *piVar2 + 0x28) = *(uint *)(iVar3 + 0x3a96c);
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar6 < *(int *)(param_1 + 0x39ce8));
    }
    if (iVar1 < 63000) {
      uVar11 = 0x267;
      uVar12 = *(uint *)(param_1 + 0x110);
      uVar10 = *(uint *)(param_1 + 0x114);
    }
    else {
      uVar11 = 0xffffffff;
      uVar12 = *(uint *)(param_1 + 0x110);
      uVar10 = *(uint *)(param_1 + 0x114);
    }
    FUN_0050ddd0(0x01E57284,uVar10,uVar12,uVar11);
    local_20 = *(int *)(param_1 + 0x110);
    if (1000 < local_20) {
      local_20 = 1000;
    }
    local_1c = 0;
    if (0 < local_20) {
      local_18 = &DAT_0076934c;
      do {
        iVar6 = *(int *)(param_1 + 0x114) + local_1c * 0x48;
        *(uint *)(local_18 + 4) = *(uint *)(iVar6 + 4);
        iVar3 = 0;
        puVar4 = local_18;
        if (0 < *(int *)(iVar6 + 4)) {
          do {
            iVar5 = iVar6 + ((*(int *)(iVar6 + 4) - iVar3) + -1) * 0xc;
            puVar7 = (uint *)(iVar5 + 0x1c + (uint)bVar8 * -8);
            *(uint *)(puVar4 + 0x18) = *(uint *)(iVar5 + 0x18);
            *(uint *)(puVar4 + (uint)bVar8 * -8 + 0x1c) = *puVar7;
            *(uint *)((int)(puVar4 + (uint)bVar8 * -8 + 0x1c) + ((uint)bVar8 * -2 + 1) * 4) =
                 puVar7[(uint)bVar8 * -2 + 1];
            iVar3 = iVar3 + 1;
            puVar4 = puVar4 + 0xc;
          } while (iVar3 < *(int *)(iVar6 + 4));
        }
        local_18 = local_18 + 0x48;
        local_1c = local_1c + 1;
      } while (local_1c < local_20);
    }
    core_set_cpp_CDemonSet_lightVerticies_FUN_0050c2d0
              (0x01E57284,*(uint *)(param_1 + 0x104),local_20,&DAT_0076934c,
               *(uint *)(param_1 + 0x10c),4,0);
    if (62999 < iVar1) {
      uVar12 = 0xffffffff;
      puVar4 = &DAT_0076934c;
      goto LAB_00437faa;
    }
    puVar4 = &DAT_0076934c;
  }
  uVar12 = 0x267;
LAB_00437faa:
  FUN_0050ddd0(0x01E57284,puVar4,local_20,uVar12);
  engine_drender_cpp_CDemonRenderer_setRenderingState_FUN_00460fb0(DAT_005ae704,0);
  engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_00461050(DAT_005ae704,1);
  return;
}
