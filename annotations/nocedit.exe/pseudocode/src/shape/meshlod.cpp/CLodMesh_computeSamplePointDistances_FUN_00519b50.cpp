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
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  int extraout_EAX_02;
  int extraout_EAX_03;
  int extraout_EAX_04;
  uint uVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  int grid_y;
  int iVar3;
  int iVar4;
  float10 fVar5;
  float10 fVar6;
  float10 fVar7;
  float10 fVar8;
  double dVar9;
  float fStack_98;
  CBoundingBox3D local_8c;
  float local_74;
  float local_70;
  CVector3f local_6c;
  int local_58;
  int local_54;
  CVector3f local_50;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  
  if (400 < g_SamplePointCount) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xd78;
    fStack_98 = 7.495988e-39;
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
  iVar4 = 0;
  if (0 < g_SamplePointCount) {
    iVar3 = 0;
    pCVar2 = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar3) = 0;
      iVar4 = iVar4 + 1;
      *(uint *)((int)g_SampleDistances + iVar3 + 4) = 0x3ff00000;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,pCVar2);
      iVar3 = iVar3 + 8;
      pCVar2 = pCVar2 + 1;
    } while (iVar4 < g_SamplePointCount);
  }
  local_50.x = (float)((float10)local_8c.min.x + (float10)local_8c.max.x);
  fVar5 = (float10)0.5f;
  local_50.y = (float)((float10)local_8c.min.y + (float10)local_8c.max.y);
  fVar6 = ((float10)local_8c.min.y + (float10)local_8c.max.y) * fVar5;
  local_50.z = (float)((float10)local_8c.min.z + (float10)local_8c.max.z);
  fVar8 = ((float10)local_8c.min.z + (float10)local_8c.max.z) * fVar5;
  local_74 = (float)(((float10)local_8c.min.x + (float10)local_8c.max.x) * fVar5);
  local_70 = (float)fVar6;
  fVar5 = (float10)0.5;
  fVar7 = (float10)16;
  fVar6 = (fVar6 + fVar5) * fVar7;
  local_6c.x = (float)fVar8;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  fVar8 = fVar7 * (fVar8 + fVar5);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(((float10)local_74 + fVar5) * fVar7));
  fVar5 = (float10)dVar9;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  fVar6 = (float10)dVar9;
  fStack_98 = 7.494835e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_3c = (int)ROUND(fVar5);
  local_40 = (int)ROUND(fVar6);
  local_38 = (int)ROUND(dVar9);
  if ((((-1 < local_3c) && (local_3c < 0x10)) && (-1 < local_40)) &&
     (((local_40 < 0x10 && (-1 < local_38)) && (local_38 < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_3c,local_40,local_38);
  }
  local_34 = 1;
  while( true ) {
    local_20 = local_3c - local_34;
    if (local_20 < 0) {
      local_20 = 0;
    }
    local_30 = local_3c + local_34;
    if (0xf < local_30) {
      local_30 = 0xf;
    }
    local_2c = local_40 - local_34;
    if (local_2c < 0) {
      local_2c = 0;
    }
    local_28 = local_40 + local_34;
    if (0xf < local_28) {
      local_28 = 0xf;
    }
    local_24 = local_38 - local_34;
    if (local_24 < 0) {
      local_24 = 0;
    }
    iVar4 = local_38 + local_34;
    if (0xf < iVar4) {
      iVar4 = 0xf;
    }
    if (local_20 <= local_30) {
      do {
        iVar3 = local_24;
        grid_y = local_2c;
        if (local_2c <= local_28) {
          do {
            for (; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
                        (this_ptr,local_20,grid_y,iVar3);
            }
            grid_y = grid_y + 1;
            iVar3 = local_24;
          } while (grid_y <= local_28);
        }
        local_20 = local_20 + 1;
      } while (local_20 <= local_30);
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[0xc].z) {
      fStack_98 = g_SamplePointArray[0].x;
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[0xb].z) {
      local_8c.min.x = g_SamplePointArray[0].x;
      local_8c.min.y = g_SamplePointArray[0].y;
      local_8c.min.z = g_SamplePointArray[0].z;
    }
    iVar4 = 0;
    if (0 < g_SamplePointCount) {
      iVar3 = 0;
      pCVar2 = g_SamplePointArray;
      do {
        local_74 = SQRT((float)*(double *)((int)g_SampleDistances + iVar3));
        iVar3 = iVar3 + 8;
        iVar4 = iVar4 + 1;
        local_50.x = pCVar2->x - local_74;
        local_50.y = pCVar2->y - local_74;
        local_50.z = pCVar2->z - local_74;
        local_70 = local_74;
        local_6c.x = local_74;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_98,&local_50);
        local_6c.x = pCVar2->x + local_8c.max.z;
        local_6c.y = pCVar2->y + local_74;
        local_6c.z = pCVar2->z + local_70;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240
                  ((CBoundingBox3D *)&stack0xffffff64,&local_6c);
        pCVar2 = pCVar2 + 1;
      } while (iVar4 < g_SamplePointCount);
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_50.z = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX - (int)local_50.z >> 0x1f;
    iVar3 = (extraout_EAX - (int)local_50.z ^ uVar1) - uVar1;
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_50.y = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_00 - (int)local_50.y >> 0x1f;
    iVar3 = (extraout_EAX_00 - (int)local_50.y ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_50.x = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_01 - (int)local_50.x >> 0x1f;
    iVar3 = (extraout_EAX_01 - (int)local_50.x ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_54 = (int)ROUND(dVar9);
    uVar1 = extraout_EAX_02 - local_54 >> 0x1f;
    iVar3 = (extraout_EAX_02 - local_54 ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_58 = (int)ROUND(dVar9);
    uVar1 = extraout_EAX_03 - local_58 >> 0x1f;
    iVar3 = (extraout_EAX_03 - local_58 ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((fStack_98 + (float)0.5) * (float)16));
    local_44 = (int)ROUND(dVar9);
    uVar1 = extraout_EAX_04 - local_44 >> 0x1f;
    iVar3 = (extraout_EAX_04 - local_44 ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 + 1 < local_34) break;
    local_34 = local_34 + 1;
  }
  return;
}
