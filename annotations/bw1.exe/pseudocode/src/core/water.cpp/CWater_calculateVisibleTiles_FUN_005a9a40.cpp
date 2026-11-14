// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005a9a40
// Address: 005a9a40
// Address Range: [[005a9a40, 005a9a8f] [005a9a91, 005a9f04]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005a9a40(CWater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005a9a40(CWater *this_ptr)

{
  int iVar1;
  float fVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  byte bVar9;
  float10 fVar10;
  float afStackY_1058 [990];
  SMRGLHeaderPrimitive local_c8;
  uint local_b0;
  uint local_ac;
  uint local_a8;
  uint local_a4;
  CVector3i local_a0;
  CVector3f local_94;
  CVector3i local_88;
  CVector3i local_7c;
  float local_70;
  float local_6c [2];
  CVector3i local_64;
  float local_58;
  float local_54 [5];
  int local_40;
  int local_3c;
  int local_38;
  float local_34;
  float afStack_30 [4];
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  int local_10;
  
  bVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 1;
    iVar1 = iVar6 + iVar7;
    iVar7 = iVar7 + 0x20;
    iVar6 = iVar6 + 0x400;
    *(byte *)(iVar8 + 0x2c92fe0) = *(byte *)(iVar1 + 0x1c45acf + iVar4);
    iVar8 = iVar4;
  } while (iVar4 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_FUN_0048f210();
    local_70 = local_34;
    local_6c[(uint)bVar9 * -2] = afStack_30[(uint)bVar9 * -2];
    local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_30[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_dtrace_cpp_FUN_0048f230();
    local_58 = local_54[2];
    local_54[(uint)bVar9 * -2] = local_54[(uint)bVar9 * -2 + 3];
    local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fVar2 = (float)_DAT_005f9242;
    _DAT_02c8afc8 = (local_70 + local_58) * fVar2;
    _DAT_02c8afd0 = (local_6c[1] + local_54[1]) * fVar2;
    afStack_30[2] = (local_58 - local_70) * fVar2 * (float)_DAT_005f924a;
    _DAT_02c8afcc = 0.0;
    local_1c = 0.0;
    if (0.0 < afStack_30[2]) {
      local_1c = afStack_30[2];
    }
    afStack_30[3] = local_54[0] - local_6c[0];
    if (local_1c < afStack_30[3]) {
      local_1c = afStack_30[3];
    }
    local_20 = (local_54[1] - local_6c[1]) * (float)_DAT_005f9242 * (float)_DAT_005f924a;
    if (local_1c < local_20) {
      local_1c = local_20;
    }
    fVar10 = (float10)1 + (float10)local_1c / (float10)this_ptr->tile_size;
    round();
    local_18 = (int)ROUND(fVar10);
    _DAT_02c8afdc = 0;
    iVar8 = -local_18;
    local_14 = local_18;
    if (SBORROW4(iVar8,local_18) != local_18 * -2 < 0) {
      do {
        iVar6 = -local_14;
        if (iVar6 < local_14) {
          do {
            local_94.x = (float)iVar8 * this_ptr->tile_size + _DAT_02c8afc8;
            local_94.y = this_ptr->water_level_y + _DAT_02c8afcc;
            local_94.z = (float)iVar6 * this_ptr->tile_size + _DAT_02c8afd0;
            local_10 = iVar6;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_004837b0
                      (DAT_00612560,&local_94);
            local_40 = (int)ROUND(local_94.x * _DAT_00607bac);
            local_3c = (int)ROUND(local_94.y * _DAT_00607bac);
            local_38 = (int)ROUND(local_94.z * _DAT_00607bac);
            local_94.x = 0.0;
            local_94.y = 0.0;
            local_94.z = 0.0;
            local_64.x = (int)ROUND(_DAT_00607bac * 0.0);
            local_64.y = (int)ROUND(_DAT_00607bac * 0.0);
            local_64.z = (int)ROUND(_DAT_00607bac * 0.0);
            engine_special_cpp_FUN_00580173
                      (&DAT_00612560->vertex_buffer_ptr->projected_vertex,&local_64);
            local_94.x = this_ptr->tile_size;
            local_a0.x = (int)ROUND(local_94.x * _DAT_00607bac);
            local_a0.y = (int)ROUND(local_94.y * _DAT_00607bac);
            local_a0.z = (int)ROUND(local_94.z * _DAT_00607bac);
            engine_special_cpp_FUN_00580173
                      (&DAT_00612560->vertex_buffer_ptr[1].projected_vertex,&local_a0);
            local_94.z = this_ptr->tile_size;
            local_7c.x = (int)ROUND(local_94.x * _DAT_00607bac);
            local_7c.y = (int)ROUND(local_94.y * _DAT_00607bac);
            local_7c.z = (int)ROUND(local_94.z * _DAT_00607bac);
            engine_special_cpp_FUN_00580173
                      (&DAT_00612560->vertex_buffer_ptr[2].projected_vertex,&local_7c);
            local_94.x = 0.0;
            local_88.x = (int)ROUND(_DAT_00607bac * 0.0);
            local_88.y = (int)ROUND(local_94.y * _DAT_00607bac);
            local_88.z = (int)ROUND(local_94.z * _DAT_00607bac);
            engine_special_cpp_FUN_00580173
                      (&DAT_00612560->vertex_buffer_ptr[3].projected_vertex,&local_88);
            uVar3 = DAT_00612564;
            uVar5 = DAT_00629024 & DAT_00629054 & DAT_00629084 & DAT_006290b4;
            if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
              local_c8.base.count = 4;
              local_c8.surface_normal.D.i = 0;
              local_c8.surface_normal.C.i = 0;
              local_c8.surface_normal.B.i = 0;
              local_c8.surface_normal.A.i = 0;
              local_b0 = 0;
              local_a4 = 3;
              DAT_00612564 = 0x10;
              local_ac = 1;
              local_a8 = 2;
              iVar7 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_00481eb0
                                (DAT_00612560,&local_c8);
              if (iVar7 != 0) {
                if (0xfff < _DAT_02c8afdc) {
                  _DAT_01d1d400 = "..\\core\\water.cpp";
                  _DAT_01d1d404 = 0x103;
                  core_main_c_FUN_005030e0();
                }
                *(int *)(&DAT_02c8afe0 + _DAT_02c8afdc * 4) = iVar8;
                *(int *)(&DAT_02c8efe0 + _DAT_02c8afdc * 4) = iVar6;
                _DAT_02c8afdc = _DAT_02c8afdc + 1;
              }
            }
            iVar6 = iVar6 + 1;
            DAT_00612564 = uVar3;
          } while (iVar6 < local_14);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_18);
    }
    this_ptr->visible_area_sqft = (float)_DAT_02c8afdc * this_ptr->tile_size * this_ptr->tile_size;
    engine_console_cpp_CConsole_printf_FUN_00445430
              (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f");
    return;
  }
  return;
}
