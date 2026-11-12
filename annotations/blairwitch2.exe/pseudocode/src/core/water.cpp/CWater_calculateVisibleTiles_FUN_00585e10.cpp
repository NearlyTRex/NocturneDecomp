// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_00585e10
// Address: 00585e10
// Address Range: [[00585e10, 00585e5f] [00585e61, 005862d4]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00585e10(CWater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00585e10(CWater *this_ptr)

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
    *(byte *)(iVar8 + 0x265b7c0) = *(byte *)(iVar1 + 0x1c2c90f + iVar4);
    iVar8 = iVar4;
  } while (iVar4 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_FUN_00476d20();
    local_70 = local_34;
    local_6c[(uint)bVar9 * -2] = afStack_30[(uint)bVar9 * -2];
    local_6c[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         afStack_30[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1];
    core_dtrace_cpp_FUN_00476d40();
    local_58 = local_54[2];
    local_54[(uint)bVar9 * -2] = local_54[(uint)bVar9 * -2 + 3];
    local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 4];
    fVar2 = (float)_DAT_005edee6;
    _DAT_026537a8 = (local_70 + local_58) * fVar2;
    _DAT_026537b0 = (local_6c[1] + local_54[1]) * fVar2;
    afStack_30[2] = (local_58 - local_70) * fVar2 * (float)_DAT_005edeee;
    _DAT_026537ac = 0.0;
    local_1c = 0.0;
    if (0.0 < afStack_30[2]) {
      local_1c = afStack_30[2];
    }
    afStack_30[3] = local_54[0] - local_6c[0];
    if (local_1c < afStack_30[3]) {
      local_1c = afStack_30[3];
    }
    local_20 = (local_54[1] - local_6c[1]) * (float)_DAT_005edee6 * (float)_DAT_005edeee;
    if (local_1c < local_20) {
      local_1c = local_20;
    }
    fVar10 = (float10)1 + (float10)local_1c / (float10)this_ptr->tile_size;
    round();
    local_18 = (int)ROUND(fVar10);
    _DAT_026537bc = 0;
    iVar8 = -local_18;
    local_14 = local_18;
    if (SBORROW4(iVar8,local_18) != local_18 * -2 < 0) {
      do {
        iVar6 = -local_14;
        if (iVar6 < local_14) {
          do {
            local_94.x = (float)iVar8 * this_ptr->tile_size + _DAT_026537a8;
            local_94.y = this_ptr->water_level_y + _DAT_026537ac;
            local_94.z = (float)iVar6 * this_ptr->tile_size + _DAT_026537b0;
            local_10 = iVar6;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046b2b0
                      (DAT_0060b280,&local_94);
            local_40 = (int)ROUND(local_94.x * _DAT_005fdc5c);
            local_3c = (int)ROUND(local_94.y * _DAT_005fdc5c);
            local_38 = (int)ROUND(local_94.z * _DAT_005fdc5c);
            local_94.x = 0.0;
            local_94.y = 0.0;
            local_94.z = 0.0;
            local_64.x = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_64.y = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_64.z = (int)ROUND(_DAT_005fdc5c * 0.0);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr->projected_vertex,&local_64);
            local_94.x = this_ptr->tile_size;
            local_a0.x = (int)ROUND(local_94.x * _DAT_005fdc5c);
            local_a0.y = (int)ROUND(local_94.y * _DAT_005fdc5c);
            local_a0.z = (int)ROUND(local_94.z * _DAT_005fdc5c);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[1].projected_vertex,&local_a0);
            local_94.z = this_ptr->tile_size;
            local_7c.x = (int)ROUND(local_94.x * _DAT_005fdc5c);
            local_7c.y = (int)ROUND(local_94.y * _DAT_005fdc5c);
            local_7c.z = (int)ROUND(local_94.z * _DAT_005fdc5c);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[2].projected_vertex,&local_7c);
            local_94.x = 0.0;
            local_88.x = (int)ROUND(_DAT_005fdc5c * 0.0);
            local_88.y = (int)ROUND(local_94.y * _DAT_005fdc5c);
            local_88.z = (int)ROUND(local_94.z * _DAT_005fdc5c);
            engine_special_cpp_FUN_0055d723
                      (&DAT_0060b280->vertex_buffer_ptr[3].projected_vertex,&local_88);
            uVar3 = DAT_0060b284;
            uVar5 = DAT_00622024 & DAT_00622054 & DAT_00622084 & DAT_006220b4;
            if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
              local_c8.base.count = 4;
              local_c8.surface_normal.D.i = 0;
              local_c8.surface_normal.C.i = 0;
              local_c8.surface_normal.B.i = 0;
              local_c8.surface_normal.A.i = 0;
              local_b0 = 0;
              local_a4 = 3;
              DAT_0060b284 = 0x10;
              local_ac = 1;
              local_a8 = 2;
              iVar7 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_004699a0
                                (DAT_0060b280,&local_c8);
              if (iVar7 != 0) {
                if (0xfff < _DAT_026537bc) {
                  _DAT_01d046a0 = "..\\core\\water.cpp";
                  _DAT_01d046a4 = 0x103;
                  core_main_c_FUN_004e4500();
                }
                *(int *)(&DAT_026537c0 + _DAT_026537bc * 4) = iVar8;
                *(int *)(&DAT_026577c0 + _DAT_026537bc * 4) = iVar6;
                _DAT_026537bc = _DAT_026537bc + 1;
              }
            }
            iVar6 = iVar6 + 1;
            DAT_0060b284 = uVar3;
          } while (iVar6 < local_14);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < local_18);
    }
    this_ptr->visible_area_sqft = (float)_DAT_026537bc * this_ptr->tile_size * this_ptr->tile_size;
    engine_console_cpp_CConsole_printf_FUN_00436710
              (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f");
    return;
  }
  return;
}
