// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70
// Address: 005e9e70
// Address Range: [[005e9e70, 005e9ecf] [005e9ed1, 005ea31e]]
// Convention: __cdecl
// Signature: int core_water.cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater * this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_005e9e70(CWater *this_ptr)

{
  int iVar1;
  int iVar2;
  CVector3f *pCVar4;
  float fVar5;
  uint uVar6;
  int extraout_EAX;
  int iVar7;
  uint extraout_EDX;
  int iVar8;
  BADSPACEBASE *in_ESP;
  float10 fVar9;
  CVector3f local_88;
  float local_7c;
  uint local_78;
  uint local_74;
  uint local_70;
  CVector3i local_6c;
  int local_60;
  int local_5c;
  byte local_4c [12];
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_24;
  CVector3i local_20;
  int iVar3;
  
  iVar7 = 0;
  iVar8 = 0;
  iVar3 = 0;
  do {
    iVar2 = iVar3 + 1;
    iVar1 = iVar8 + iVar7;
    iVar7 = iVar7 + 0x20;
    iVar8 = iVar8 + 0x400;
    (&DAT_03f8f608)[iVar3] = *(byte *)(iVar1 + 0x2cf901f + iVar2);
    iVar3 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) == 0.0) {
    return iVar2;
  }
  core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00499b40
            (&g_CDemonRaytraceInstance,(CVector3f *)(local_4c + 8));
  pCVar4 = core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00499b70
                     (&g_CDemonRaytraceInstance,&local_88);
  fVar5 = (float)0.5;
  _DAT_03f875f0 = (local_3c + local_88.y) * fVar5;
  _DAT_03f875f8 = (local_34 + local_7c) * fVar5;
  local_20.x = (int)((local_88.y - local_3c) * fVar5 * (float)1.1000000000000001);
  _DAT_03f875f4 = 0.0;
  local_20.z = 0;
  fVar5 = (float)((uint)CONCAT21 /* combine 2-byte values */((short)((uint)pCVar4 >> 0x10),0.0 < (float)local_20.x) << 8);
  if (0.0 < (float)local_20.x) {
    fVar5 = (float)local_20.x;
    local_20.z = local_20.x;
  }
  local_20.y = (int)(local_88.z - local_38);
  fVar5 = (float)((uint)fVar5 & 0xffff0000);
  if ((float)local_20.z < (float)local_20.y) {
    fVar5 = (float)local_20.y;
    local_20.z = local_20.y;
  }
  local_24 = (local_7c - local_34) * (float)0.5 * (float)1.1000000000000001;
  fVar5 = (float)CONCAT22 /* combine 2-byte values */((short)((uint)fVar5 >> 0x10),
                          (ushort)(local_24 < (float)local_20.z) << 8 |
                          (ushort)(NAN(local_24) || NAN((float)local_20.z)) << 10 |
                          (ushort)(local_24 == (float)local_20.z) << 0xe);
  if (local_24 >= (float)local_20.z && (local_24 == (float)local_20.z) == 0) {
    fVar5 = local_24;
    local_20.z = (int)local_24;
  }
  fVar9 = (float10)1 + (float10)(float)local_20.z / (float10)this_ptr->tile_size;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(extraout_EDX,fVar5));
  iVar3 = (int)ROUND(fVar9);
  g_VisibleWaterTileCount = 0;
  iVar7 = -iVar3;
  if (SBORROW /* signed borrow */4(iVar7,iVar3) != iVar3 * -2 < 0) {
    do {
      for (iVar8 = -iVar3; iVar8 < iVar3; iVar8 = iVar8 + 1) {
        local_4c._8_4_ = (float)iVar7 * this_ptr->tile_size + _DAT_03f875f0;
        local_40 = this_ptr->water_level_y + _DAT_03f875f4;
        local_3c = (float)iVar8 * this_ptr->tile_size + _DAT_03f875f8;
        engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
                  (g_CDemonRendererPtr,(CVector3f *)(local_4c + 8));
        local_6c.z = (int)ROUND(local_40 * 256f);
        local_60 = (int)ROUND(local_3c * 256f);
        local_5c = (int)ROUND(local_38 * 256f);
        local_40 = 0.0;
        local_3c = 0.0;
        local_38 = 0.0;
        local_4c._0_4_ = (uint)ROUND(256f * 0.0);
        local_4c._4_4_ = (uint)ROUND(256f * 0.0);
        local_4c._8_4_ = (uint)ROUND(256f * 0.0);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr->projected_vertex,(CVector3i *)local_4c);
        local_3c = this_ptr->tile_size;
        local_6c.x = (int)ROUND(local_3c * 256f);
        local_6c.y = (int)ROUND(local_38 * 256f);
        local_6c.z = (int)ROUND(local_34 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[1].projected_vertex,&local_6c);
        local_30 = this_ptr->tile_size;
        local_20.x = (int)ROUND(local_38 * 256f);
        local_20.y = (int)ROUND(local_34 * 256f);
        local_20.z = (int)ROUND(local_30 * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[2].projected_vertex,&local_20);
        local_34 = 0.0;
        local_4c._0_4_ = (uint)ROUND(256f * 0.0);
        local_4c._4_4_ = (uint)ROUND(local_30 * 256f);
        local_4c._8_4_ = (uint)ROUND(local_2c * 256f);
        wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
                  (&g_CDemonRendererPtr->vertex_buffer_ptr[3].projected_vertex,(CVector3i *)local_4c
                  );
        iVar1 = g_RenderPixelBudget;
        uVar6 = g_RenderVertexBuffer[0].projected_vertex.screen_x &
                g_RenderVertexBuffer[1].projected_vertex.screen_x &
                g_RenderVertexBuffer[2].projected_vertex.screen_x &
                g_RenderVertexBuffer[3].projected_vertex.screen_x;
        if (((uVar6 & 0x80000000) == 0) || ((char)uVar6 == '\0')) {
          local_88.z = 0.0;
          local_88.y = 0.0;
          local_88.x = 0.0;
          local_7c = 0.0;
          local_70 = 3;
          g_RenderPixelBudget = 0x10;
          local_78 = 1;
          local_74 = 2;
          iVar2 = engine_drender_cpp_CDemonRenderer_renderTexturedBasic_FUN_0048ab50
                            (g_CDemonRendererPtr,(SMRGLHeaderPrimitive *)&stack0xffffff58);
          if (iVar2 != 0) {
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
        g_RenderPixelBudget = iVar1;
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < iVar3);
  }
  iVar3 = g_VisibleWaterTileCount;
  fVar5 = (float)g_VisibleWaterTileCount * this_ptr->tile_size * this_ptr->tile_size;
  this_ptr->visible_area_sqft = fVar5;
  engine_console_cpp_CConsole_printf_FUN_00441890
            (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f",iVar3,(double)fVar5);
  return extraout_EAX;
}
