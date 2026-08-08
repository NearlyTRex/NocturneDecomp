// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_00550800
// Address: 00550800
// Address Range: [[00550800, 0055085f] [00550861, 00550cae]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(CWater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00550800(CWater *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  double dVar8;
  byte local_8c [12];
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  CVector3i local_6c;
  CVector3i local_60;
  CVector3f local_54;
  byte local_44 [12];
  int local_38;
  int local_34;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar7 = 0;
  do {
    iVar2 = iVar7 + 1;
    iVar4 = iVar6 + iVar5;
    iVar5 = iVar5 + 0x20;
    iVar6 = iVar6 + 0x400;
    *(byte *)(iVar7 + 0x2dd9238) = *(byte *)(iVar4 + 0x1bf771f + iVar2);
    iVar7 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_0046b9c0
              (&g_CDemonRaytrace_01fba938,(CVector3f *)local_44);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_0046b9f0
              (&g_CDemonRaytrace_01fba938,(CVector3f *)local_8c);
    fVar1 = (float)0.5;
    _DAT_02dd1220 = ((float)local_44._0_4_ + (float)local_8c._0_4_) * fVar1;
    _DAT_02dd1228 = ((float)local_44._8_4_ + (float)local_8c._8_4_) * fVar1;
    local_28 = ((float)local_8c._0_4_ - (float)local_44._0_4_) * fVar1 * (float)1.1000000000000001;
    _DAT_02dd1224 = 0.0;
    local_20 = 0.0;
    if (0.0 < local_28) {
      local_20 = local_28;
    }
    local_24 = (float)local_8c._4_4_ - (float)local_44._4_4_;
    if (local_20 < local_24) {
      local_20 = local_24;
    }
    local_2c = ((float)local_8c._8_4_ - (float)local_44._8_4_) * (float)0.5 *
               (float)1.1000000000000001;
    if (local_20 < local_2c) {
      local_20 = local_2c;
    }
    dVar8 = round((double)(local_20 / this_ptr->tile_size + 1.0));
    local_20 = (float)(int)ROUND(dVar8);
    _DAT_02dd1234 = 0;
    iVar7 = -(int)local_20;
    local_1c = (int)local_20;
    if (SBORROW4(iVar7,(int)local_20) != (int)local_20 * -2 < 0) {
      do {
        iVar5 = -local_1c;
        if (iVar5 < local_1c) {
          do {
            local_54.x = (float)iVar7 * this_ptr->tile_size + _DAT_02dd1220;
            local_54.y = this_ptr->water_level_y + _DAT_02dd1224;
            local_54.z = (float)iVar5 * this_ptr->tile_size + _DAT_02dd1228;
            local_18 = iVar5;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
                      (g_CDemonRenderer_PTR_005ae704,&local_54);
            local_78 = (int)ROUND(local_54.x * _DAT_005a3e8c);
            local_74 = (int)ROUND(local_54.y * _DAT_005a3e8c);
            local_70 = (int)ROUND(local_54.z * _DAT_005a3e8c);
            local_54.x = 0.0;
            local_54.y = 0.0;
            local_54.z = 0.0;
            local_60.x = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_60.y = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_60.z = (int)ROUND(_DAT_005a3e8c * 0.0);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr->projected_vertex,&local_60
                      );
            local_54.x = this_ptr->tile_size;
            local_8c._8_4_ = (uint)ROUND(local_54.x * _DAT_005a3e8c);
            local_80 = (int)ROUND(local_54.y * _DAT_005a3e8c);
            local_7c = (int)ROUND(local_54.z * _DAT_005a3e8c);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[1].projected_vertex,
                       (CVector3i *)(local_8c + 8));
            local_54.z = this_ptr->tile_size;
            local_44._8_4_ = (uint)ROUND(local_54.x * _DAT_005a3e8c);
            local_38 = (int)ROUND(local_54.y * _DAT_005a3e8c);
            local_34 = (int)ROUND(local_54.z * _DAT_005a3e8c);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[2].projected_vertex,
                       (CVector3i *)(local_44 + 8));
            local_54.x = 0.0;
            local_6c.x = (int)ROUND(_DAT_005a3e8c * 0.0);
            local_6c.y = (int)ROUND(local_54.y * _DAT_005a3e8c);
            local_6c.z = (int)ROUND(local_54.z * _DAT_005a3e8c);
            engine_special_cpp_transformAndProjectPoint_FUN_0053075c
                      (&g_CDemonRenderer_PTR_005ae704->vertex_buffer_ptr[3].projected_vertex,
                       &local_6c);
            iVar6 = INT_005ae708;
            uVar3 = DAT_005c5024 & DAT_005c5054 & DAT_005c5084 & DAT_005c50b4;
            if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
              INT_005ae708 = 0x10;
              iVar4 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0045f190
                                (g_CDemonRenderer_PTR_005ae704,
                                 (SMRGLHeaderPrimitive *)&stack0xffffff48);
              if (iVar4 != 0) {
                if (0xfff < _DAT_02dd1234) {
                  g_CurrentFilename = "..\\core\\water.cpp";
                  g_CurrentLineNumber = 310;
                  core_main_c_displayErrorAndQuit_FUN_004c8440("Too many visible water tiles!");
                }
                *(int *)(&DAT_02dd1238 + _DAT_02dd1234 * 4) = iVar7;
                *(int *)(&DAT_02dd5238 + _DAT_02dd1234 * 4) = iVar5;
                _DAT_02dd1234 = _DAT_02dd1234 + 1;
              }
            }
            iVar5 = iVar5 + 1;
            INT_005ae708 = iVar6;
          } while (iVar5 < local_1c);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_20);
    }
    this_ptr->visible_area_sqft = (float)_DAT_02dd1234 * this_ptr->tile_size * this_ptr->tile_size;
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (g_CConsole_PTR_005ad350,"Vis water tiles : %d, SqFt : %f");
    return;
  }
  return;
}
