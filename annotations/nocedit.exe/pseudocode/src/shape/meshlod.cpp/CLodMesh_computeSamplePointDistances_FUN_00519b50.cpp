// Name: shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
// Address: 00519b50
// Address Range: [[00519b50, 0051a026]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh *this_ptr)

{
  int grid_y_00;
  int grid_z;
  float fVar3;
  int grid_z_00;
  int iVar4;
  uint uVar3;
  uint uVar5;
  uint uVar4;
  uint uVar6;
  int iVar8;
  CVector3f *pCVar5;
  CVector3f *point;
  int grid_y;
  int iVar6;
  int iVar7;
  int iVar9;
  CBoundingBox3D local_90;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  CVector3f local_60;
  float local_54;
  float local_50;
  float local_4c;
  CVector3f local_48;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  float fVar1;
  float fVar2;
  
  if (400 < g_SamplePointCount) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many sample points!");
  }
  if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xc) {
    local_90.min.x = g_SamplePointArray[0].x;
    local_90.min.y = g_SamplePointArray[0].y;
    local_90.min.z = g_SamplePointArray[0].z;
  }
  if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xb) {
    local_90.max.x = g_SamplePointArray[0].x;
    local_90.max.y = g_SamplePointArray[0].y;
    local_90.max.z = g_SamplePointArray[0].z;
  }
  iVar7 = 0;
  if (0 < g_SamplePointCount) {
    iVar8 = 0;
    point = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar8) = 0;
      iVar7 = iVar7 + 1;
      *(uint *)((int)g_SampleDistances + iVar8 + 4) = 0x3ff00000;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,point);
      iVar8 = iVar8 + 8;
      point = point + 1;
    } while (iVar7 < g_SamplePointCount);
  }
  fVar2 = (float)0.5;
  fVar1 = (float)16;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  iVar8 = (int)ROUND(ROUND(((local_90.min.x + local_90.max.x) * 0.5f + fVar2) * fVar1));
  grid_y_00 = (int)ROUND(ROUND(((local_90.min.y + local_90.max.y) * 0.5f + fVar2) * fVar1)
                        );
  grid_z = (int)ROUND(ROUND(fVar1 * ((local_90.min.z + local_90.max.z) * 0.5f + fVar2)));
  if ((((-1 < iVar8) && (iVar8 < 0x10)) && (-1 < grid_y_00)) &&
     (((grid_y_00 < 0x10 && (-1 < grid_z)) && (grid_z < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,iVar8,grid_y_00,grid_z);
  }
  local_2c = 1;
  while( true ) {
    iVar4 = iVar8 - local_2c;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    local_28 = iVar8 + local_2c;
    if (0xf < local_28) {
      local_28 = 0xf;
    }
    local_24 = grid_y_00 - local_2c;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_20 = grid_y_00 + local_2c;
    if (0xf < local_20) {
      local_20 = 0xf;
    }
    local_1c = grid_z - local_2c;
    if (local_1c < 0) {
      local_1c = 0;
    }
    iVar9 = grid_z + local_2c;
    if (0xf < iVar9) {
      iVar9 = 0xf;
    }
    for (; grid_y = local_24, iVar4 <= local_28; iVar4 = iVar4 + 1) {
      for (; grid_z_00 = local_1c, grid_y <= local_20; grid_y = grid_y + 1) {
        for (; grid_z_00 <= iVar9; grid_z_00 = grid_z_00 + 1) {
          shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,iVar4,grid_y,grid_z_00);
        }
      }
    }
    if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xc) {
      local_90.min.x = g_SamplePointArray[0].x;
      local_90.min.y = g_SamplePointArray[0].y;
      local_90.min.z = g_SamplePointArray[0].z;
    }
    if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xb) {
      local_90.max.x = g_SamplePointArray[0].x;
      local_90.max.y = g_SamplePointArray[0].y;
      local_90.max.z = g_SamplePointArray[0].z;
    }
    iVar4 = 0;
    if (0 < g_SamplePointCount) {
      iVar6 = 0;
      pCVar5 = g_SamplePointArray;
      do {
        fVar3 = SQRT((float)*(double *)((int)g_SampleDistances + iVar6));
        iVar6 = iVar6 + 8;
        iVar4 = iVar4 + 1;
        local_48.x = pCVar5->x - fVar3;
        local_48.y = pCVar5->y - fVar3;
        local_48.z = pCVar5->z - fVar3;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,&local_48);
        local_60.x = pCVar5->x + fVar3;
        local_60.y = pCVar5->y + fVar3;
        local_60.z = pCVar5->z + fVar3;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,&local_60);
        pCVar5 = pCVar5 + 1;
      } while (iVar4 < g_SamplePointCount);
    }
    uVar3 = iVar8 - (int)ROUND(ROUND((local_90.min.x + (float)0.5) *
                                     (float)16));
    uVar4 = (int)uVar3 >> 0x1f;
    iVar9 = (uVar3 ^ uVar4) - uVar4;
    iVar4 = -1;
    if (-1 < iVar9) {
      iVar4 = iVar9;
    }
    uVar5 = grid_y_00 -
            (int)ROUND(ROUND((local_90.min.y + (float)0.5) * (float)16));
    uVar6 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar6) - uVar6;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    uVar5 = grid_z - (int)ROUND(ROUND((local_90.min.z + (float)0.5) *
                                      (float)16));
    uVar6 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar6) - uVar6;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    uVar5 = iVar8 - (int)ROUND(ROUND((local_90.max.x + (float)0.5) *
                                     (float)16));
    uVar6 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar6) - uVar6;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    uVar5 = grid_y_00 -
            (int)ROUND(ROUND((local_90.max.y + (float)0.5) * (float)16));
    uVar6 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar6) - uVar6;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    uVar5 = grid_z - (int)ROUND(ROUND((local_90.max.z + (float)0.5) *
                                      (float)16));
    uVar6 = (int)uVar5 >> 0x1f;
    iVar9 = (uVar5 ^ uVar6) - uVar6;
    if (iVar4 < iVar9) {
      iVar4 = iVar9;
    }
    if (iVar4 + 1 < local_2c) break;
    local_2c = local_2c + 1;
  }
  return;
}
