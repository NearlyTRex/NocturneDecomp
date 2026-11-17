// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290
// Address: 00577290
// Address Range: [[00577290, 005772df] [005772e1, 00577754]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(CWater *this_ptr)

#include "nocturne.h"

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(CWater *this_ptr)

{
  float fVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  double dVar9;
  float afStackY_1058 [989];
  CVector3i local_a4;
  CVector3f local_98;
  CVector3i local_8c;
  CVector3i local_80;
  float local_70;
  float local_6c;
  CVector3i local_68;
  float local_58;
  float local_54 [2];
  CVector3f local_4c;
  int local_40;
  int local_3c;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  int local_18;
  int local_14;
  
  bVar8 = 0;
  iVar6 = 0;
  iVar5 = 0;
  iVar7 = 0;
  do {
    iVar2 = iVar7 + 1;
    iVar4 = iVar5 + iVar6;
    iVar6 = iVar6 + 0x20;
    iVar5 = iVar5 + 0x400;
    *(byte *)(iVar7 + 0x2d05980) = *(byte *)(iVar4 + 0x1c6206f + iVar2);
    iVar7 = iVar2;
  } while (iVar2 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(&g_CDemonRaytraceInstance,&local_34);
    local_70 = local_34.x;
    (&local_6c)[(uint)bVar8 * -2] = *(float *)((int)&local_34 + (uint)bVar8 * -8 + 4);
    *(uint *)((int)&local_68 + (uint)bVar8 * -8 + (uint)bVar8 * -8) =
         *(uint *)((int)&local_34 + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00477db0(&g_CDemonRaytraceInstance,&local_4c);
    local_58 = local_4c.x;
    local_54[(uint)bVar8 * -2] = *(float *)((int)&local_4c + (uint)bVar8 * -8 + 4);
    local_54[(uint)bVar8 * -2 + (uint)bVar8 * -2 + 1] =
         *(float *)((int)&local_4c + (uint)bVar8 * -8 + (uint)bVar8 * -8 + 8);
    fVar1 = (float)0.5;
    g_FLOAT_02cfd968 = (local_70 + local_58) * fVar1;
    g_FLOAT_02cfd970 = ((float)local_68.x + local_54[1]) * fVar1;
    local_28 = (local_58 - local_70) * fVar1 * (float)1.1000000000000001;
    g_FLOAT_02cfd96c = 0.0;
    local_1c = 0.0;
    if (0.0 < local_28) {
      local_1c = local_28;
    }
    local_24 = local_54[0] - local_6c;
    if (local_1c < local_24) {
      local_1c = local_24;
    }
    local_20 = (local_54[1] - (float)local_68.x) * (float)0.5 *
               (float)1.1000000000000001;
    if (local_1c < local_20) {
      local_1c = local_20;
    }
    dVar9 = round((double)(local_1c / this_ptr->tile_size + 1.0));
    local_1c = (float)(int)ROUND(dVar9);
    g_INT_02cfd97c = 0;
    iVar7 = -(int)local_1c;
    local_18 = (int)local_1c;
    if (SBORROW4(iVar7,(int)local_1c) != (int)local_1c * -2 < 0) {
      do {
        iVar5 = -local_18;
        if (iVar5 < local_18) {
          do {
            local_98.x = (float)iVar7 * this_ptr->tile_size + g_FLOAT_02cfd968;
            local_98.y = this_ptr->water_level_y + g_FLOAT_02cfd96c;
            local_98.z = (float)iVar5 * this_ptr->tile_size + g_FLOAT_02cfd970;
            local_14 = iVar5;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                      (g_CDemonRenderer_PTR_005f2afc,&local_98);
            local_4c.z = (float)(int)ROUND(local_98.x * 256.0f);
            local_40 = (int)ROUND(local_98.y * 256.0f);
            local_3c = (int)ROUND(local_98.z * 256.0f);
            local_98.x = 0.0;
            local_98.y = 0.0;
            local_98.z = 0.0;
            local_68.x = (int)ROUND(256.0f * 0.0);
            local_68.y = (int)ROUND(256.0f * 0.0);
            local_68.z = (int)ROUND(256.0f * 0.0);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr->projected_vertex,&local_68
                      );
            local_98.x = this_ptr->tile_size;
            local_a4.x = (int)ROUND(local_98.x * 256.0f);
            local_a4.y = (int)ROUND(local_98.y * 256.0f);
            local_a4.z = (int)ROUND(local_98.z * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[1].projected_vertex,
                       &local_a4);
            local_98.z = this_ptr->tile_size;
            local_80.x = (int)ROUND(local_98.x * 256.0f);
            local_80.y = (int)ROUND(local_98.y * 256.0f);
            local_80.z = (int)ROUND(local_98.z * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[2].projected_vertex,
                       &local_80);
            local_98.x = 0.0;
            local_8c.x = (int)ROUND(256.0f * 0.0);
            local_8c.y = (int)ROUND(local_98.y * 256.0f);
            local_8c.z = (int)ROUND(local_98.z * 256.0f);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&g_CDemonRenderer_PTR_005f2afc->vertex_buffer_ptr[3].projected_vertex,
                       &local_8c);
            iVar6 = g_INT_005f2b00;
            uVar3 = g_SRenderVertex_ARRAY_0060b014[0].projected_vertex.screen_x &
                    g_SRenderVertex_ARRAY_0060b014[1].projected_vertex.screen_x &
                    g_SRenderVertex_ARRAY_0060b014[2].projected_vertex.screen_x &
                    g_SRenderVertex_ARRAY_0060b014[3].projected_vertex.screen_x;
            if (((uVar3 & 0x80000000) == 0) || ((char)uVar3 == '\0')) {
              g_INT_005f2b00 = 0x10;
              iVar4 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                (g_CDemonRenderer_PTR_005f2afc,
                                 (SMRGLHeaderPrimitive *)&stack0xffffff34);
              if (iVar4 != 0) {
                if (0xfff < g_INT_02cfd97c) {
                  g_CHAR_PTR_01d71de0 = "..\\core\\water.cpp";
                  g_INT_01d71de4 = 0x117;
                  core_main_c_displayErrorAndQuit_FUN_004e4330("Too many visible water tiles!");
                }
                g_INT_ARRAY_02cfd980[g_INT_02cfd97c] = iVar7;
                g_INT_ARRAY_02d01980[g_INT_02cfd97c] = iVar5;
                g_INT_02cfd97c = g_INT_02cfd97c + 1;
              }
            }
            iVar5 = iVar5 + 1;
            g_INT_005f2b00 = iVar6;
          } while (iVar5 < local_18);
        }
        iVar7 = iVar7 + 1;
      } while (iVar7 < (int)local_1c);
    }
    this_ptr->visible_area_sqft = (float)g_INT_02cfd97c * this_ptr->tile_size * this_ptr->tile_size;
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f");
    return;
  }
  return;
}
