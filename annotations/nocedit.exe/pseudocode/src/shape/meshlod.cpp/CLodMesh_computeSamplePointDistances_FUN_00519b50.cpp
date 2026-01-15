// Name: shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
// Address: 00519b50
// Address Range: [[00519b50, 0051a026]]
// Convention: __cdecl
// Signature: void shape_meshlod.cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50(CLodMesh * this_ptr, double max_search_radius)

#include "nocturne.h"

void __cdecl
shape_meshlod_cpp_CLodMesh_computeSamplePointDistances_FUN_00519b50
          (CLodMesh *this_ptr,double max_search_radius)

{
  float fVar1;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  uint uVar2;
  CVector3f *pCVar3;
  int grid_y;
  int iVar4;
  int iVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  CBoundingBox3D local_8c;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  CVector3f local_5c;
  float local_50;
  float local_4c;
  float local_48;
  CVector3f local_44;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  if (400 < g_SamplePointCount) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many sample points!");
  }
  if ((float *)&stack0x00000000 != &g_SamplePointArray[0xb].z) {
    local_8c.min.x = g_SamplePointArray[0].x;
    local_8c.min.y = g_SamplePointArray[0].y;
    local_8c.min.z = g_SamplePointArray[0].z;
  }
  if ((float *)&stack0x00000000 != &g_SamplePointArray[10].z) {
    local_8c.max.x = g_SamplePointArray[0].x;
    local_8c.max.y = g_SamplePointArray[0].y;
    local_8c.max.z = g_SamplePointArray[0].z;
  }
  iVar5 = 0;
  if (0 < g_SamplePointCount) {
    iVar4 = 0;
    pCVar3 = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar4) = 0;
      iVar5 = iVar5 + 1;
      *(uint *)((int)g_SampleDistances + iVar4 + 4) = 0x3ff00000;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,pCVar3);
      iVar4 = iVar4 + 8;
      pCVar3 = pCVar3 + 1;
    } while (iVar5 < g_SamplePointCount);
  }
  local_50 = (float)((float10)local_8c.min.x + (float10)local_8c.max.x);
  fVar6 = (float10)0.5f;
  local_4c = (float)((float10)local_8c.min.y + (float10)local_8c.max.y);
  fVar7 = ((float10)local_8c.min.y + (float10)local_8c.max.y) * fVar6;
  local_48 = (float)((float10)local_8c.min.z + (float10)local_8c.max.z);
  fVar9 = ((float10)local_8c.min.z + (float10)local_8c.max.z) * fVar6;
  local_74 = (float)(((float10)local_8c.min.x + (float10)local_8c.max.x) * fVar6);
  local_70 = (float)fVar7;
  fVar6 = (float10)0.5;
  fVar8 = (float10)16;
  fVar7 = (fVar7 + fVar6) * fVar8;
  local_6c = (float)fVar9;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  fVar9 = fVar8 * (fVar9 + fVar6);
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)(((float10)local_74 + fVar6) * fVar8));
  fVar6 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  fVar7 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  local_44.z = (float)(int)ROUND(fVar6);
  local_44.y = (float)(int)ROUND(fVar7);
  local_38 = (int)ROUND(dVar10);
  if ((((-1 < (int)local_44.z) && ((int)local_44.z < 0x10)) && (-1 < (int)local_44.y)) &&
     ((((int)local_44.y < 0x10 && (-1 < local_38)) && (local_38 < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
              (this_ptr,(int)local_44.z,(int)local_44.y,local_38);
  }
  local_28 = 1;
  while( true ) {
    iStack_14 = local_30 - local_28;
    if (iStack_14 < 0) {
      iStack_14 = 0;
    }
    local_24 = local_30 + local_28;
    if (0xf < local_24) {
      local_24 = 0xf;
    }
    local_20 = local_34 - local_28;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_1c = local_34 + local_28;
    if (0xf < local_1c) {
      local_1c = 0xf;
    }
    local_18 = local_2c - local_28;
    if (local_18 < 0) {
      local_18 = 0;
    }
    iVar5 = local_2c + local_28;
    if (0xf < iVar5) {
      iVar5 = 0xf;
    }
    if (iStack_14 <= local_24) {
      do {
        iVar4 = local_18;
        grid_y = local_20;
        if (local_20 <= local_1c) {
          do {
            for (; iVar4 <= iVar5; iVar4 = iVar4 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
                        (this_ptr,iStack_14,grid_y,iVar4);
            }
            grid_y = grid_y + 1;
            iVar4 = local_18;
          } while (grid_y <= local_1c);
        }
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 <= local_24);
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[0xb].z) {
      local_8c.min.x = g_SamplePointArray[0].x;
      local_8c.min.y = g_SamplePointArray[0].y;
      local_8c.min.z = g_SamplePointArray[0].z;
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[10].z) {
      local_8c.max.x = g_SamplePointArray[0].x;
      local_8c.max.y = g_SamplePointArray[0].y;
      local_8c.max.z = g_SamplePointArray[0].z;
    }
    iVar5 = 0;
    if (0 < g_SamplePointCount) {
      iVar4 = 0;
      pCVar3 = g_SamplePointArray;
      do {
        local_68 = SQRT((float)*(double *)((int)g_SampleDistances + iVar4));
        iVar4 = iVar4 + 8;
        iVar5 = iVar5 + 1;
        local_44.x = pCVar3->x - local_68;
        local_44.y = pCVar3->y - local_68;
        local_44.z = pCVar3->z - local_68;
        local_64 = local_68;
        local_60 = local_68;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,&local_44);
        local_5c.x = pCVar3->x + local_68;
        local_5c.y = pCVar3->y + local_64;
        local_5c.z = pCVar3->z + local_60;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,&local_5c);
        pCVar3 = pCVar3 + 1;
      } while (iVar5 < g_SamplePointCount);
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((local_8c.min.x + (float)0.5) * (float)16)
                       );
    local_44.z = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX - (int)local_44.z >> 0x1f;
    iVar4 = (extraout_EAX - (int)local_44.z ^ uVar2) - uVar2;
    iVar5 = -1;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((local_8c.min.x + (float)0.5) * (float)16)
                       );
    local_44.y = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_00 - (int)local_44.y >> 0x1f;
    iVar4 = (extraout_EAX_00 - (int)local_44.y ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((local_8c.min.x + (float)0.5) * (float)16)
                       );
    local_44.x = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_01 - (int)local_44.x >> 0x1f;
    iVar4 = (extraout_EAX_01 - (int)local_44.x ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((local_8c.min.x + (float)0.5) * (float)16)
                       );
    local_48 = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_02 - (int)local_48 >> 0x1f;
    iVar4 = (extraout_EAX_02 - (int)local_48 ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((local_8c.min.x + (float)0.5) * (float)16)
                       );
    local_4c = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_03 - (int)local_4c >> 0x1f;
    iVar4 = (extraout_EAX_03 - (int)local_4c ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    fVar1 = local_8c.min.x + (float)0.5;
    local_8c.min.x = 7.495882e-39;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float)16));
    local_50 = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_04 - (int)local_50 >> 0x1f;
    iVar4 = (extraout_EAX_04 - (int)local_50 ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 + 1 < (int)local_44.y) break;
    local_44.y = (float)((int)local_44.y + 1);
  }
  return;
}
