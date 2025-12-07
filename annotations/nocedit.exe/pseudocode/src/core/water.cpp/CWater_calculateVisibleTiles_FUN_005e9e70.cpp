// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: int core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int extraout_EAX;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  int iVar7;
  double dVar8;
  CVector3f local_88;
  float local_7c;
  uint local_78;
  CVector3i local_74;
  int local_68;
  int local_64;
  byte local_54 [12];
  float local_48;
  CVector3f local_44;
  float local_38;
  float local_34;
  CVector3i local_28;
  float local_1c;
  float local_18;
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
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70(&g_CDemonRaytraceInstance,&local_88);
    fVar1 = (float)0.5;
    _DAT_03f875f0 = (local_44.z + local_88.y) * fVar1;
    _DAT_03f875f8 = (local_34 + local_7c) * fVar1;
    local_28.z = (int)((local_88.y - local_44.z) * fVar1 * (float)1.1000000000000001);
    _DAT_03f875f4 = 0.0;
    local_18 = 0.0;
    if (0.0 < (float)local_28.z) {
      local_18 = (float)local_28.z;
    }
    local_1c = local_88.z - local_38;
    if (local_18 < local_1c) {
      local_18 = local_1c;
    }
    local_28.y = (int)((local_7c - local_34) * (float)0.5 * (float)1.1000000000000001);
    if (local_18 < (float)local_28.y) {
      local_18 = (float)local_28.y;
    }
    dVar8 = crt_math_c_round_FUN_005fe6b0((double)(local_18 / this_ptr->tile_size + 1.0));
    local_18 = (float)(int)ROUND(dVar8);
    g_VisibleWaterTileCount = 0;
    iVar7 = -(int)local_18;
    local_14 = (int)local_18;
    if (SBORROW /* signed borrow */4(iVar7,(int)local_18) != (int)local_18 * -2 < 0) {
      do {
        iVar5 = -local_14;
        if (iVar5 < local_14) {
          do {
            local_54._8_4_ = (float)iVar7 * this_ptr->tile_size + _DAT_03f875f0;
            local_48 = this_ptr->water_level_y + _DAT_03f875f4;
            local_44.x = (float)iVar5 * this_ptr->tile_size + _DAT_03f875f8;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                      (g_CDemonRendererPtr,(CVector3f *)(local_54 + 8));
            local_74.z = (int)ROUND(local_48 * 256f);
            local_68 = (int)ROUND(local_44.x * 256f);
            local_64 = (int)ROUND(local_44.y * 256f);
            local_48 = 0.0;
            local_44.x = 0.0;
            local_44.y = 0.0;
            local_54._0_4_ = (uint)ROUND(256f * 0.0);
            local_54._4_4_ = (uint)ROUND(256f * 0.0);
            local_54._8_4_ = (uint)ROUND(256f * 0.0);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,
                       (CVector3i *)local_54);
            local_44.x = this_ptr->tile_size;
            local_74.x = (int)ROUND(local_44.x * 256f);
            local_74.y = (int)ROUND(local_44.y * 256f);
            local_74.z = (int)ROUND(local_44.z * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_74);
            local_38 = this_ptr->tile_size;
            local_28.x = (int)ROUND(local_44.y * 256f);
            local_28.y = (int)ROUND(local_44.z * 256f);
            local_28.z = (int)ROUND(local_38 * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_28);
            local_44.z = 0.0;
            local_54._0_4_ = (uint)ROUND(256f * 0.0);
            local_54._4_4_ = (uint)ROUND(local_38 * 256f);
            local_54._8_4_ = (uint)ROUND(local_34 * 256f);
            wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                      (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,
                       (CVector3i *)local_54);
            iVar6 = g_RenderPixelBudget;
            uVar3 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                    g_RenderVertexBuffer[1].projected_vertex.screen_x &
                    g_RenderVertexBuffer[2].projected_vertex.screen_x &
                    g_RenderVertexBuffer[3].projected_vertex.screen_x;
            if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
              local_88.x = 0.0;
              local_88.y = 0.0;
              local_78 = 3;
              g_RenderPixelBudget = 0x10;
              local_88.z = 1.4013e-45;
              local_7c = 2.8026e-45;
              iVar4 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                                (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff50);
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
          } while (iVar5 < local_14);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_18);
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
