// Name: core_water.cpp_CWater_calculateVisibleTiles_FUN_00577290
// Address: 00577290
// Address Range: [[00577290, 005772df] [005772e1, 00577754]]
// Convention: __cdecl
// Signature: void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(CWater *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_water_cpp_CWater_calculateVisibleTiles_FUN_00577290(CWater *this_ptr)

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
  double dVar10;
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
  
  bVar9 = 0;
  iVar7 = 0;
  iVar6 = 0;
  iVar8 = 0;
  do {
    iVar4 = iVar8 + 1;
    iVar1 = iVar6 + iVar7;
    iVar7 = iVar7 + 0x20;
    iVar6 = iVar6 + 0x400;
    *(byte *)(iVar8 + 0x2d05980) = *(byte *)(iVar1 + 0x1c6206f + iVar4);
    iVar8 = iVar4;
  } while (iVar4 < 0x20);
  this_ptr->visible_area_sqft = 0.0;
  if (ABS(this_ptr->water_level_y) != 0.0) {
    core_dtrace_cpp_CDemonRaytrace_getBBoxMin_FUN_00477d90(&g_CDemonRaytraceInstance,&local_34);
    local_70 = local_34.x;
    (&local_6c)[(uint)bVar9 * -2] = *(float *)((int)&local_34 + (uint)bVar9 * -8 + 4);
    *(uint *)((int)&local_68 + (uint)bVar9 * -8 + (uint)bVar9 * -8) =
         *(uint *)((int)&local_34 + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    core_dtrace_cpp_CDemonRaytrace_getBBoxMax_FUN_00477db0(&g_CDemonRaytraceInstance,&local_4c);
    local_58 = local_4c.x;
    local_54[(uint)bVar9 * -2] = *(float *)((int)&local_4c + (uint)bVar9 * -8 + 4);
    local_54[(uint)bVar9 * -2 + (uint)bVar9 * -2 + 1] =
         *(float *)((int)&local_4c + (uint)bVar9 * -8 + (uint)bVar9 * -8 + 8);
    fVar2 = (float)_DAT_005d71ab;
    _DAT_02cfd968 = (local_70 + local_58) * fVar2;
    _DAT_02cfd970 = ((float)local_68.x + local_54[1]) * fVar2;
    local_28 = (local_58 - local_70) * fVar2 * (float)_DAT_005d71b3;
    _DAT_02cfd96c = 0.0;
    local_1c = 0.0;
    if (0.0 < local_28) {
      local_1c = local_28;
    }
    local_24 = local_54[0] - local_6c;
    if (local_1c < local_24) {
      local_1c = local_24;
    }
    local_20 = (local_54[1] - (float)local_68.x) * (float)_DAT_005d71ab * (float)_DAT_005d71b3;
    if (local_1c < local_20) {
      local_1c = local_20;
    }
    dVar10 = round((double)(local_1c / this_ptr->tile_size + 1.0));
    local_1c = (float)(int)ROUND(dVar10);
    _DAT_02cfd97c = 0;
    iVar8 = -(int)local_1c;
    local_18 = (int)local_1c;
    if (SBORROW4(iVar8,(int)local_1c) != (int)local_1c * -2 < 0) {
      do {
        iVar6 = -local_18;
        if (iVar6 < local_18) {
          do {
            local_98.x = (float)iVar8 * this_ptr->tile_size + _DAT_02cfd968;
            local_98.y = this_ptr->water_level_y + _DAT_02cfd96c;
            local_98.z = (float)iVar6 * this_ptr->tile_size + _DAT_02cfd970;
            local_14 = iVar6;
            engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0046ce90
                      (DAT_005f2afc,&local_98);
            local_4c.z = (float)(int)ROUND(local_98.x * _DAT_005e5e7c);
            local_40 = (int)ROUND(local_98.y * _DAT_005e5e7c);
            local_3c = (int)ROUND(local_98.z * _DAT_005e5e7c);
            local_98.x = 0.0;
            local_98.y = 0.0;
            local_98.z = 0.0;
            local_68.x = (int)ROUND(_DAT_005e5e7c * 0.0);
            local_68.y = (int)ROUND(_DAT_005e5e7c * 0.0);
            local_68.z = (int)ROUND(_DAT_005e5e7c * 0.0);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr->projected_vertex,&local_68);
            local_98.x = this_ptr->tile_size;
            local_a4.x = (int)ROUND(local_98.x * _DAT_005e5e7c);
            local_a4.y = (int)ROUND(local_98.y * _DAT_005e5e7c);
            local_a4.z = (int)ROUND(local_98.z * _DAT_005e5e7c);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[1].projected_vertex,&local_a4);
            local_98.z = this_ptr->tile_size;
            local_80.x = (int)ROUND(local_98.x * _DAT_005e5e7c);
            local_80.y = (int)ROUND(local_98.y * _DAT_005e5e7c);
            local_80.z = (int)ROUND(local_98.z * _DAT_005e5e7c);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[2].projected_vertex,&local_80);
            local_98.x = 0.0;
            local_8c.x = (int)ROUND(_DAT_005e5e7c * 0.0);
            local_8c.y = (int)ROUND(local_98.y * _DAT_005e5e7c);
            local_8c.z = (int)ROUND(local_98.z * _DAT_005e5e7c);
            engine_special_cpp_transformAndProjectPoint_FUN_005632a3
                      (&DAT_005f2afc->vertex_buffer_ptr[3].projected_vertex,&local_8c);
            uVar3 = DAT_005f2b00;
            uVar5 = DAT_0060b024 & DAT_0060b054 & DAT_0060b084 & DAT_0060b0b4;
            if (((uVar5 & 0x80000000) == 0) || ((char)uVar5 == '\0')) {
              DAT_005f2b00 = 0x10;
              iVar7 = engine_drender_cpp_CDemonRenderer_renderDepthProfiledDirect_FUN_0046b580
                                (DAT_005f2afc,(SMRGLHeaderPrimitive *)&stack0xffffff34);
              if (iVar7 != 0) {
                if (0xfff < _DAT_02cfd97c) {
                  _DAT_01d71de0 = "..\\core\\water.cpp";
                  _DAT_01d71de4 = 0x117;
                  core_main_c_displayErrorAndQuit_FUN_004e4330("Too many visible water tiles!");
                }
                *(int *)(&DAT_02cfd980 + _DAT_02cfd97c * 4) = iVar8;
                *(int *)(&DAT_02d01980 + _DAT_02cfd97c * 4) = iVar6;
                _DAT_02cfd97c = _DAT_02cfd97c + 1;
              }
            }
            iVar6 = iVar6 + 1;
            DAT_005f2b00 = uVar3;
          } while (iVar6 < local_18);
        }
        iVar8 = iVar8 + 1;
      } while (iVar8 < (int)local_1c);
    }
    this_ptr->visible_area_sqft = (float)_DAT_02cfd97c * this_ptr->tile_size * this_ptr->tile_size;
    engine_console_cpp_CConsole_printf_FUN_00441ff0
              (g_CConsolePtr,"Vis water tiles : %d, SqFt : %f");
    return;
  }
  return;
}
