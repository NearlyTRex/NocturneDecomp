// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// MANUAL RECONSTRUCTION
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

{
  int iVar1;
  float fVar2;
  int iVar3;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  SMRGLPrimitiveQuadIndex SStack_b4;
  CVector3f local_8c;
  CVector3i local_80;
  CVector3i local_68;
  CVector3i local_5c;
  CVector3f local_50;
  CVector3f local_44;
  CVector3i local_38;
  float local_20;
  float fVar1;
  
  iVar5 = 0;
  iVar6 = 0;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    iVar1 = iVar6 + iVar5;
    iVar5 = iVar5 + 0x20;
    iVar6 = iVar6 + 0x400;
    g_WaterTileSamples[iVar2] = g_ColorCubeLookup[iVar1 + iVar2 + -1];
    iVar2 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) == 0.0) {
    return;
  }
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40(&g_CDemonRaytraceInstance,&local_44);
  core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_8c);
  fVar1 = (float)0.5;
  FLOAT_03f875f0 = (local_44.x + local_8c.x) * fVar1;
  FLOAT_03f875f8 = (local_44.z + local_8c.z) * fVar1;
  fVar2 = (local_8c.x - local_44.x) * fVar1 * (float)1.1000000000000001;
  FLOAT_03f875f4 = 0.0;
  local_20 = 0.0;
  if (0.0 < fVar2) {
    local_20 = fVar2;
  }
  if (local_20 < local_8c.y - local_44.y) {
    local_20 = local_8c.y - local_44.y;
  }
  fVar2 = (local_8c.z - local_44.z) * (float)0.5 * (float)1.1000000000000001;
  if (local_20 < fVar2) {
    local_20 = fVar2;
  }
  iVar1 = (int)ROUND(ROUND(local_20 / this_ptr->tile_size + 1.0));
  g_VisibleWaterTileCount = 0;
  iVar7 = -iVar1;
  if (SBORROW4(iVar7,iVar1) != iVar1 * -2 < 0) {
    do {
      for (iVar8 = -iVar1; iVar8 < iVar1; iVar8 = iVar8 + 1) {
        local_50.x = (float)iVar7 * this_ptr->tile_size + FLOAT_03f875f0;
        local_50.y = this_ptr->water_level_y + FLOAT_03f875f4;
        local_50.z = (float)iVar8 * this_ptr->tile_size + FLOAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr2,&local_50);
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
        iVar3 = g_RenderPixelBudget;
        uVar3 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                g_RenderVertexBuffer[1].projected_vertex.screen_x &
                g_RenderVertexBuffer[2].projected_vertex.screen_x &
                g_RenderVertexBuffer[3].projected_vertex.screen_x;
        if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
          SStack_b4.base.base.count = 4;
          SStack_b4.base.surface_normal.D.i = 0;
          SStack_b4.base.surface_normal.C.i = 0;
          SStack_b4.base.surface_normal.B.i = 0;
          SStack_b4.base.surface_normal.A.i = 0;
          SStack_b4.vertices[0] = 0;
          SStack_b4.vertices[3] = 3;
          g_RenderPixelBudget = 0x10;
          SStack_b4.vertices[1] = 1;
          SStack_b4.vertices[2] = 2;
          iVar4 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0048ab50
                            (g_CDemonRendererPtr2,&SStack_b4.base);
          if (iVar4 != 0) {
            if (0xfff < g_VisibleWaterTileCount) {
              g_CurrentFilename = "..\\core\\water.cpp";
              g_CurrentLineNumber = 0x136;
              core_main_c_displayErrorAndQuit_FUN_00506f10("Too many visible water tiles!");
            }
            g_VisibleWaterTilesX[g_VisibleWaterTileCount] = iVar7;
            g_VisibleWaterTilesY[g_VisibleWaterTileCount] = iVar8;
            g_VisibleWaterTileCount = g_VisibleWaterTileCount + 1;
          }
        }
        g_RenderPixelBudget = iVar3;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar1);
  }
  iVar1 = g_VisibleWaterTileCount;
  fVar2 = (float)g_VisibleWaterTileCount * this_ptr->tile_size * this_ptr->tile_size;
  this_ptr->visible_area_sqft = fVar2;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f",iVar1,(double)fVar2);
  return;
}
