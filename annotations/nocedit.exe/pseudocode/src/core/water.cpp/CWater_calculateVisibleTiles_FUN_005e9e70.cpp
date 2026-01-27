// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: int core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr)

#include "nocturne.h"

int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int extraout_EAX;
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
    (&DAT_03f8f608)[iVar7] = *(byte *)(iVar4 + 0x2cf901f + iVar2);
    iVar7 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
              (&g_CDemonRaytraceInstance,(CVector3f *)local_44);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
              (&g_CDemonRaytraceInstance,(CVector3f *)local_8c);
    fVar1 = (float)0.5;
    FLOAT_03f875f0 = ((float)local_44._0_4_ + (float)local_8c._0_4_) * fVar1;
    FLOAT_03f875f8 = ((float)local_44._8_4_ + (float)local_8c._8_4_) * fVar1;
    local_28 = ((float)local_8c._0_4_ - (float)local_44._0_4_) * fVar1 * (float)1.1000000000000001;
    FLOAT_03f875f4 = 0.0;
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
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)(local_20 / this_ptr->tile_size + 1.0));
    local_20 = (float)(int)ROUND(dVar8);
    g_VisibleWaterTileCount = 0;
    iVar7 = -(int)local_20;
    local_1c = (int)local_20;
    if (SBORROW4(iVar7,(int)local_20) != (int)local_20 * -2 < 0) {
      do {
        iVar5 = -local_1c;
        if (iVar5 < local_1c) {
          do {
            local_54.x = (float)iVar7 * this_ptr->tile_size + FLOAT_03f875f0;
            local_54.y = this_ptr->water_level_y + FLOAT_03f875f4;
            local_54.z = (float)iVar5 * this_ptr->tile_size + FLOAT_03f875f8;
            local_18 = iVar5;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr2,&local_54);
            local_78 = (int)ROUND(local_54.x * 256.0f);
            local_74 = (int)ROUND(local_54.y * 256.0f);
            local_70 = (int)ROUND(local_54.z * 256.0f);
            local_54.x = 0.0;
            local_54.y = 0.0;
            local_54.z = 0.0;
            local_60.x = (int)ROUND(256.0f * 0.0);
            local_60.y = (int)ROUND(256.0f * 0.0);
            local_60.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_60);
            local_54.x = this_ptr->tile_size;
            local_8c._8_4_ = (uint)ROUND(local_54.x * 256.0f);
            local_80 = (int)ROUND(local_54.y * 256.0f);
            local_7c = (int)ROUND(local_54.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,
                       (CVector3i *)(local_8c + 8));
            local_54.z = this_ptr->tile_size;
            local_44._8_4_ = (uint)ROUND(local_54.x * 256.0f);
            local_38 = (int)ROUND(local_54.y * 256.0f);
            local_34 = (int)ROUND(local_54.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,
                       (CVector3i *)(local_44 + 8));
            local_54.x = 0.0;
            local_6c.x = (int)ROUND(256.0f * 0.0);
            local_6c.y = (int)ROUND(local_54.y * 256.0f);
            local_6c.z = (int)ROUND(local_54.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_6c);
            iVar6 = g_RenderPixelBudget;
            uVar3 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                    g_RenderVertexBuffer[1].projected_vertex.screen_x &
                    g_RenderVertexBuffer[2].projected_vertex.screen_x &
                    g_RenderVertexBuffer[3].projected_vertex.screen_x;
            if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
              g_RenderPixelBudget = 0x10;
              iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (g_CDemonRendererPtr2,(SMRGLHeaderPrimitive *)&stack0xffffff48);
              if (iVar4 != 0) {
                if (0xfff < g_VisibleWaterTileCount) {
                  g_CurrentFilename = "..\\core\\water.cpp";
                  g_CurrentLineNumber = 0x136;
                  core_main_c_displayErrorAndQuit_FUN_00506f10("Too many visible water tiles!");
                }
                g_VisibleWaterTilesX[g_VisibleWaterTileCount] = iVar7;
                g_VisibleWaterTilesY[g_VisibleWaterTileCount] = iVar5;
                g_VisibleWaterTileCount = g_VisibleWaterTileCount + 1;
              }
            }
            iVar5 = iVar5 + 1;
            g_RenderPixelBudget = iVar6;
          } while (iVar5 < local_1c);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_20);
    }
    iVar7 = g_VisibleWaterTileCount;
    fVar1 = (float)g_VisibleWaterTileCount * this_ptr->tile_size * this_ptr->tile_size;
    this_ptr->visible_area_sqft = fVar1;
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f",iVar7,(double)fVar1);
    return extraout_EAX;
  }
  return iVar2;
}
