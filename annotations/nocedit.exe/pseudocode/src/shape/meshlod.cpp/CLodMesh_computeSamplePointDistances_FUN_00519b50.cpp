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
  local_50 = (float)((float10)local_8c.min.x + (float10)local_8c.max.x);
  fVar5 = (float10)0.5f;
  local_4c = (float)((float10)local_8c.min.y + (float10)local_8c.max.y);
  fVar6 = ((float10)local_8c.min.y + (float10)local_8c.max.y) * fVar5;
  local_48 = (float)((float10)local_8c.min.z + (float10)local_8c.max.z);
  fVar8 = ((float10)local_8c.min.z + (float10)local_8c.max.z) * fVar5;
  local_74 = (float)(((float10)local_8c.min.x + (float10)local_8c.max.x) * fVar5);
  local_70 = (float)fVar6;
  fVar5 = (float10)0.5;
  fVar7 = (float10)16;
  fVar6 = (fVar6 + fVar5) * fVar7;
  local_6c = (float)fVar8;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  fVar8 = fVar7 * (fVar8 + fVar5);
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)(((float10)local_74 + fVar5) * fVar7));
  fVar5 = (float10)dVar9;
  local_8c.min.y = 7.494825e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar6);
  fVar6 = (float10)dVar9;
  local_8c.min.x = 7.494835e-39;
  dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar8);
  local_30 = (int)ROUND(fVar5);
  local_34 = (int)ROUND(fVar6);
  local_2c = (int)ROUND(dVar9);
  if ((((-1 < local_30) && (local_30 < 0x10)) && (-1 < local_34)) &&
     (((local_34 < 0x10 && (-1 < local_2c)) && (local_2c < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_30,local_34,local_2c);
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
    iVar4 = local_2c + local_28;
    if (0xf < iVar4) {
      iVar4 = 0xf;
    }
    if (iStack_14 <= local_24) {
      do {
        iVar3 = local_18;
        grid_y = local_20;
        if (local_20 <= local_1c) {
          do {
            for (; iVar3 <= iVar4; iVar3 = iVar3 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
                        (this_ptr,iStack_14,grid_y,iVar3);
            }
            grid_y = grid_y + 1;
            iVar3 = local_18;
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
    iVar4 = 0;
    if (0 < g_SamplePointCount) {
      iVar3 = 0;
      pCVar2 = g_SamplePointArray;
      do {
        local_68 = SQRT((float)*(double *)((int)g_SampleDistances + iVar3));
        iVar3 = iVar3 + 8;
        iVar4 = iVar4 + 1;
        local_44.x = pCVar2->x - local_68;
        local_44.y = pCVar2->y - local_68;
        local_44.z = pCVar2->z - local_68;
        local_64 = local_68;
        local_60 = local_68;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,&local_44);
        local_5c.x = pCVar2->x + local_68;
        local_5c.y = pCVar2->y + local_64;
        local_5c.z = pCVar2->z + local_60;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_8c,&local_5c);
        pCVar2 = pCVar2 + 1;
      } while (iVar4 < g_SamplePointCount);
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_44.z = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX - (int)local_44.z >> 0x1f;
    iVar3 = (extraout_EAX - (int)local_44.z ^ uVar1) - uVar1;
    iVar4 = -1;
    if (-1 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_44.y = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_00 - (int)local_44.y >> 0x1f;
    iVar3 = (extraout_EAX_00 - (int)local_44.y ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_44.x = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_01 - (int)local_44.x >> 0x1f;
    iVar3 = (extraout_EAX_01 - (int)local_44.x ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_48 = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_02 - (int)local_48 >> 0x1f;
    iVar3 = (extraout_EAX_02 - (int)local_48 ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_4c = (float)(int)ROUND(dVar9);
    uVar1 = extraout_EAX_03 - (int)local_4c >> 0x1f;
    iVar3 = (extraout_EAX_03 - (int)local_4c ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    dVar9 = crt_math_c_round_FUN_005fe6b0
                      ((double)((local_8c.min.x + (float)0.5) * (float)16))
    ;
    local_38 = (int)ROUND(dVar9);
    uVar1 = extraout_EAX_04 - local_38 >> 0x1f;
    iVar3 = (extraout_EAX_04 - local_38 ^ uVar1) - uVar1;
    if (iVar4 < iVar3) {
      iVar4 = iVar3;
    }
    if (iVar4 + 1 < local_28) break;
    local_28 = local_28 + 1;
  }
  return;
}
