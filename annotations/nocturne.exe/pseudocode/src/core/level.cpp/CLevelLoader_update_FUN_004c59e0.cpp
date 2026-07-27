// Name: core_level.cpp_CLevelLoader_update_FUN_004c59e0
// Address: 004c59e0
// Address Range: [[004c59e0, 004c5f9f]]
// Convention: __cdecl
// Signature: void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(int *param_1,int param_2,int param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_level_cpp_CLevelLoader_update_FUN_004c59e0(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte local_88 [4];
  uint local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  float local_30;
  float local_2c;
  float local_28;
  uint local_24;
  uint local_20;
  uint local_1c;
  uint local_18;
  int local_14;
  int local_10;
  
  if (param_1[3] != 0) {
    if (param_3 != 0) {
      engine_2d_c_fillRectColor_FUN_00403e60(0,0,DAT_005b761c + -1,DAT_005b7620 + -1,0);
    }
    if (param_1[0x44] != 0) {
      engine_drender_cpp_CDemonRenderer_pushViewport_FUN_00460e40
                (DAT_005ae704,param_1[0x45],param_1[0x46],param_1[0x47],param_1[0x48]);
    }
    engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
              (DAT_005ae704,&DAT_02dd1184);
    local_18 = 0x42600000;
    if (param_1[0x44] != 0) {
      local_18 = 0x42a80000;
    }
    engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00(DAT_005ae704,local_18);
    engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780(DAT_005ae704,&DAT_02dd1184);
    local_24 = 0;
    local_20 = 0;
    local_1c = 0x42100000;
    engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
              (DAT_005ae704,&local_24);
    *(uint *)(0x01E57284 + 0x15aa88) = 1;
    iVar5 = 0x8000 - (*param_1 << 0xf) / param_1[1];
    iVar2 = engine_matrix_c_interpolatedSin_FUN_004cca60(iVar5);
    iVar3 = 0x01E57284;
    *(uint *)(0x01E57284 + 0x15aa90) = 0xffff6f78;
    *(uint *)(iVar3 + 0x15aa8c) =
         (uint)((longlong)iVar2 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
    iVar2 = engine_matrix_c_interpolatedCos_FUN_004ccaa0(iVar5);
    iVar3 = 0x01E57284;
    *(uint *)(0x01E57284 + 0x15aa98) = 0x280;
    *(uint *)(iVar3 + 0x15aa94) =
         (uint)((longlong)iVar2 * 37000) >> 0x10 |
         (int)((ulonglong)((longlong)iVar2 * 37000) >> 0x20) << 0x10;
    core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
              (iVar3,param_1[0x49] << 8,param_1[0x4a] << 8,param_1[0x4b] << 8);
    local_30 = 7.25;
    local_2c = 7.25;
    local_28 = 0.0;
    local_60 = (int)ROUND(_DAT_0059fbfc * 7.25);
    local_5c = (int)ROUND(_DAT_0059fbfc * 7.25);
    local_58 = (int)ROUND(_DAT_0059fbfc * 0.0);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704,&local_60);
    local_30 = -local_30;
    local_54 = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_50 = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_4c = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x30,&local_54);
    local_2c = -local_2c;
    local_3c = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_38 = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_34 = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x60,&local_3c);
    local_30 = -local_30;
    local_48 = (int)ROUND(local_30 * _DAT_0059fbfc);
    local_44 = (int)ROUND(local_2c * _DAT_0059fbfc);
    local_40 = (int)ROUND(local_28 * _DAT_0059fbfc);
    engine_special_cpp_transformAndProjectPoint_FUN_0053075c(*DAT_005ae704 + 0x90,&local_48);
    piVar1 = DAT_005ae704;
    *(uint *)(*DAT_005ae704 + 0x18) = 0x1000000;
    *(uint *)(*piVar1 + 0x1c) = 0;
    *(uint *)(*piVar1 + 0x48) = 0;
    *(uint *)(*piVar1 + 0x4c) = 0;
    *(uint *)(*piVar1 + 0x78) = 0;
    *(uint *)(*piVar1 + 0x7c) = 0x1000000;
    *(uint *)(*piVar1 + 0xa8) = 0x1000000;
    *(uint *)(*piVar1 + 0xac) = 0x1000000;
    piVar1 = DAT_005ae704;
    iVar3 = (*param_1 * 0xffff) / param_1[1];
    if (0xffff < iVar3) {
      iVar3 = 0xffff;
    }
    *(uint *)(*DAT_005ae704 + 0x2c) = 0;
    *(int *)(*piVar1 + 0x5c) = iVar3;
    *(uint *)(*piVar1 + 0x8c) = 0;
    *(uint *)(*piVar1 + 0xbc) = 0;
    iVar3 = 0;
    do {
      piVar1 = DAT_005ae704;
      *(int *)(*DAT_005ae704 + 0x20 + iVar3) = param_1[0x49] << 8;
      *(int *)(*piVar1 + 0x24 + iVar3) = param_1[0x4a] << 8;
      iVar3 = iVar3 + 0x30;
      *(int *)(*piVar1 + -8 + iVar3) = param_1[0x4b] << 8;
    } while (iVar3 != 0xc0);
    local_74 = 0;
    local_78 = 0;
    local_7c = 0;
    local_80 = 0;
    local_70 = 0;
    local_84 = 4;
    local_68 = 2;
    local_64 = 3;
    local_6c = 1;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(piVar1,1);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_00461eb0(DAT_005ae704,&DAT_005baca4);
    engine_drender_cpp_CDemonRenderer_renderTexturedDirect_FUN_0045f3c0(DAT_005ae704,local_88,0x327)
    ;
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_00461000(DAT_005ae704,0);
    core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040(0x1cc3290,0,0,0x205);
    if (param_1[0x44] != 0) {
      engine_drender_cpp_CDemonRenderer_popViewport_FUN_00460e70(DAT_005ae704);
    }
    *(uint *)(0x01E57284 + 0x15aa88) = 0;
    local_10 = _DAT_014b9900;
    iVar2 = (DAT_005b761c * 0x240) / 0x280;
    iVar5 = (DAT_005b7620 * 0x18) / 0x1e0;
    iVar4 = (DAT_005b761c << 5) / 0x280;
    local_14 = (DAT_005b7620 * 0x1c0) / 0x1e0;
    iVar3 = *param_1;
    *param_1 = iVar3 + 1;
    if (param_1[1] < iVar3 + 1) {
      *param_1 = param_1[1];
    }
    if (param_1[0x44] == 0) {
      engine_2d_c_fillRectColor_FUN_00403e60
                (iVar4 + -1,local_14 + -1,iVar2 + 1 + iVar4,local_14 + iVar5 + 1,0);
      if (param_2 != 0) {
        iVar3 = engine_font_cpp_CBitFont_getTextWidth_FUN_00492da0(local_10,param_2);
        engine_font_cpp_CBitFont_drawText_FUN_00490980
                  (local_10,param_2,(iVar4 + iVar2 / 2) - iVar3 / 2,
                   (local_14 + iVar5 / 2) - *(int *)(local_10 + 0x316c) / 2,0xf8,0xffffffff);
      }
    }
    wincore_wddvmem_cpp_swapBuffers_FUN_00553910();
  }
  return;
}
