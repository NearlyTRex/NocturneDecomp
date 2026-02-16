// Name: shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
// Address: 00519b50
// Address Range: [[00519b50, 0051a026]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh *this_ptr,double max_search_radius)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh *this_ptr,double max_search_radius)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  uint uVar5;
  CVector3f *pCVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  float fStack_9c;
  CBoundingBox3D local_90;
  float local_78;
  float local_74;
  float local_70;
  CVector3f local_6c;
  int local_60;
  int local_5c;
  int local_58;
  CVector3f local_54;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  
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
  iVar9 = 0;
  if (0 < g_SamplePointCount) {
    iVar8 = 0;
    pCVar6 = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar8) = 0;
      iVar9 = iVar9 + 1;
      *(uint *)((int)g_SampleDistances + iVar8 + 4) = 0x3ff00000;
      fStack_9c = 7.494611e-39;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,pCVar6);
      iVar8 = iVar8 + 8;
      pCVar6 = pCVar6 + 1;
    } while (iVar9 < g_SamplePointCount);
  }
  local_54.x = local_90.min.x + local_90.max.x;
  local_78 = local_54.x * 0.5f;
  local_54.y = local_90.min.y + local_90.max.y;
  local_54.z = local_90.min.z + local_90.max.z;
  local_74 = local_54.y * 0.5f;
  local_70 = local_54.z * 0.5f;
  fVar4 = (float)0.5;
  fVar3 = local_74 + fVar4;
  fVar2 = (float)16;
  fVar1 = local_70 + fVar4;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  dVar10 = round((double)((local_78 + fVar4) * fVar2));
  dVar11 = round((double)(fVar3 * fVar2));
  fStack_9c = 7.494835e-39;
  dVar12 = round((double)(fVar2 * fVar1));
  local_40 = (int)ROUND(dVar10);
  local_44 = (int)ROUND(dVar11);
  local_3c = (int)ROUND(dVar12);
  if ((((-1 < local_40) && (local_40 < 0x10)) && (-1 < local_44)) &&
     (((local_44 < 0x10 && (-1 < local_3c)) && (local_3c < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_40,local_44,local_3c);
  }
  local_38 = 1;
  while( true ) {
    local_24 = local_40 - local_38;
    if (local_24 < 0) {
      local_24 = 0;
    }
    local_34 = local_40 + local_38;
    if (0xf < local_34) {
      local_34 = 0xf;
    }
    local_30 = local_44 - local_38;
    if (local_30 < 0) {
      local_30 = 0;
    }
    local_2c = local_44 + local_38;
    if (0xf < local_2c) {
      local_2c = 0xf;
    }
    local_28 = local_3c - local_38;
    if (local_28 < 0) {
      local_28 = 0;
    }
    iVar9 = local_3c + local_38;
    if (0xf < iVar9) {
      iVar9 = 0xf;
    }
    if (local_24 <= local_34) {
      do {
        iVar8 = local_28;
        iVar7 = local_30;
        if (local_30 <= local_2c) {
          do {
            for (; iVar8 <= iVar9; iVar8 = iVar8 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_24,iVar7,iVar8)
              ;
            }
            iVar7 = iVar7 + 1;
            iVar8 = local_28;
          } while (iVar7 <= local_2c);
        }
        local_24 = local_24 + 1;
      } while (local_24 <= local_34);
    }
    if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xd) {
      fStack_9c = g_SamplePointArray[0].x;
    }
    if ((CVector3f *)&stack0x00000000 != g_SamplePointArray + 0xc) {
      local_90.min.x = g_SamplePointArray[0].x;
      local_90.min.y = g_SamplePointArray[0].y;
      local_90.min.z = g_SamplePointArray[0].z;
    }
    iVar9 = 0;
    if (0 < g_SamplePointCount) {
      iVar8 = 0;
      pCVar6 = g_SamplePointArray;
      do {
        local_78 = SQRT((float)*(double *)((int)g_SampleDistances + iVar8));
        iVar8 = iVar8 + 8;
        iVar9 = iVar9 + 1;
        local_54.x = pCVar6->x - local_78;
        local_54.y = pCVar6->y - local_78;
        local_54.z = pCVar6->z - local_78;
        local_74 = local_78;
        local_70 = local_78;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_54);
        local_6c.x = pCVar6->x + local_78;
        local_6c.y = pCVar6->y + local_74;
        local_6c.z = pCVar6->z + local_70;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_6c);
        pCVar6 = pCVar6 + 1;
      } while (iVar9 < g_SamplePointCount);
    }
    iVar8 = local_40;
    dVar10 = round
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    iVar9 = local_48;
    local_54.z = (float)(int)ROUND(dVar10);
    uVar5 = iVar8 - (int)local_54.z >> 0x1f;
    iVar7 = (iVar8 - (int)local_54.z ^ uVar5) - uVar5;
    iVar8 = -1;
    if (-1 < iVar7) {
      iVar8 = iVar7;
    }
    dVar10 = round
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    iVar7 = local_44;
    local_54.y = (float)(int)ROUND(dVar10);
    uVar5 = iVar9 - (int)local_54.y >> 0x1f;
    iVar9 = (iVar9 - (int)local_54.y ^ uVar5) - uVar5;
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    dVar10 = round
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar1 = local_54.z;
    local_54.x = (float)(int)ROUND(dVar10);
    uVar5 = iVar7 - (int)local_54.x >> 0x1f;
    iVar9 = (iVar7 - (int)local_54.x ^ uVar5) - uVar5;
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    dVar10 = round
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar2 = local_54.x;
    local_58 = (int)ROUND(dVar10);
    uVar5 = (int)fVar1 - local_58 >> 0x1f;
    iVar9 = ((int)fVar1 - local_58 ^ uVar5) - uVar5;
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    dVar10 = round
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar1 = local_54.y;
    local_5c = (int)ROUND(dVar10);
    uVar5 = (int)fVar2 - local_5c >> 0x1f;
    iVar9 = ((int)fVar2 - local_5c ^ uVar5) - uVar5;
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    fVar2 = fStack_9c + (float)0.5;
    fStack_9c = 7.495882e-39;
    dVar10 = round((double)(fVar2 * (float)16));
    local_60 = (int)ROUND(dVar10);
    uVar5 = (int)fVar1 - local_60 >> 0x1f;
    iVar9 = ((int)fVar1 - local_60 ^ uVar5) - uVar5;
    if (iVar8 < iVar9) {
      iVar8 = iVar9;
    }
    if (iVar8 + 1 < (int)local_54.y) break;
    local_54.y = (float)((int)local_54.y + 1);
  }
  return;
}
