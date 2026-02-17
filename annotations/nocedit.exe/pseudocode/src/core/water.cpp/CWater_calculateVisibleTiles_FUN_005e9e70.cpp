// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

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
  SMRGLHeaderPrimitive SStack_b4;
  uint local_9c;
  uint local_98;
  uint local_94;
  uint local_90;
  CVector3f local_8c;
  CVector3i local_80;
  int local_74;
  int local_70;
  int local_6c;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3i local_38;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_1c;
  int local_18;
  int local_14;
  
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
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_44);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_8c);
    fVar1 = (float)0.5;
    FLOAT_03f875f0 = (local_44.x + local_8c.x) * fVar1;
    FLOAT_03f875f8 = (local_44.z + local_8c.z) * fVar1;
    local_28 = (local_8c.x - local_44.x) * fVar1 * (float)1.1000000000000001;
    FLOAT_03f875f4 = 0.0;
    local_20 = 0.0;
    if (0.0 < local_28) {
      local_20 = local_28;
    }
    local_24 = local_8c.y - local_44.y;
    if (local_20 < local_24) {
      local_20 = local_24;
    }
    local_2c = (local_8c.z - local_44.z) * (float)0.5 * (float)1.1000000000000001;
    if (local_20 < local_2c) {
      local_20 = local_2c;
    }
    local_1c = (int)ROUND(ROUND(local_20 / this_ptr->tile_size + 1.0));
    g_VisibleWaterTileCount = 0;
    iVar7 = -local_1c;
    local_18 = local_1c;
    if (SBORROW4(iVar7,local_1c) != local_1c * -2 < 0) {
      do {
        iVar5 = -local_18;
        if (iVar5 < local_18) {
          do {
            local_50.x = (float)iVar7 * this_ptr->tile_size + FLOAT_03f875f0;
            local_50.y = this_ptr->water_level_y + FLOAT_03f875f4;
            local_50.z = (float)iVar5 * this_ptr->tile_size + FLOAT_03f875f8;
            local_14 = iVar5;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr2,&local_50);
            local_74 = (int)ROUND(local_50.x * 256.0f);
            local_70 = (int)ROUND(local_50.y * 256.0f);
            local_6c = (int)ROUND(local_50.z * 256.0f);
            local_50.x = 0.0;
            local_50.y = 0.0;
            local_50.z = 0.0;
            local_5c.x = (int)ROUND(256.0f * 0.0);
            local_5c.y = (int)ROUND(256.0f * 0.0);
            local_5c.z = (int)ROUND(256.0f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr->projected_vertex,&local_5c);
            local_50.x = this_ptr->tile_size;
            local_80.x = (int)ROUND(local_50.x * 256.0f);
            local_80.y = (int)ROUND(local_50.y * 256.0f);
            local_80.z = (int)ROUND(local_50.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[1].projected_vertex,&local_80);
            local_50.z = this_ptr->tile_size;
            local_38.x = (int)ROUND(local_50.x * 256.0f);
            local_38.y = (int)ROUND(local_50.y * 256.0f);
            local_38.z = (int)ROUND(local_50.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[2].projected_vertex,&local_38);
            local_50.x = 0.0;
            local_68.x = (int)ROUND(256.0f * 0.0);
            local_68.y = (int)ROUND(local_50.y * 256.0f);
            local_68.z = (int)ROUND(local_50.z * 256.0f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr2->vertex_buffer_ptr[3].projected_vertex,&local_68);
            iVar6 = g_RenderPixelBudget;
            uVar3 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                    g_RenderVertexBuffer[1].projected_vertex.screen_x &
                    g_RenderVertexBuffer[2].projected_vertex.screen_x &
                    g_RenderVertexBuffer[3].projected_vertex.screen_x;
            if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
              SStack_b4.base.count = 4;
              SStack_b4.surface_normal.D = 0;
              SStack_b4.surface_normal.C = 0;
              SStack_b4.surface_normal.B = 0;
              SStack_b4.surface_normal.A = 0;
              local_9c = 0;
              local_90 = 3;
              g_RenderPixelBudget = 0x10;
              local_98 = 1;
              local_94 = 2;
              iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (g_CDemonRendererPtr2,&SStack_b4);
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
          } while (iVar5 < local_18);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < local_1c);
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
