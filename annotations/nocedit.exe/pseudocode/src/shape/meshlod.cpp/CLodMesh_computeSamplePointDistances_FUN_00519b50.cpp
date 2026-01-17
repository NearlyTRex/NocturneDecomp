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
  iVar5 = 0;
  if (0 < g_SamplePointCount) {
    iVar4 = 0;
    pCVar3 = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar4) = 0;
      iVar5 = iVar5 + 1;
      *(uint *)((int)g_SampleDistances + iVar4 + 4) = 0x3ff00000;
      fStack_9c = 7.494611e-39;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,pCVar3);
      iVar4 = iVar4 + 8;
      pCVar3 = pCVar3 + 1;
    } while (iVar5 < g_SamplePointCount);
  }
  local_54.x = (float)((float10)local_90.min.x + (float10)local_90.max.x);
  fVar6 = (float10)0.5f;
  local_54.y = (float)((float10)local_90.min.y + (float10)local_90.max.y);
  fVar7 = ((float10)local_90.min.y + (float10)local_90.max.y) * fVar6;
  local_54.z = (float)((float10)local_90.min.z + (float10)local_90.max.z);
  fVar9 = ((float10)local_90.min.z + (float10)local_90.max.z) * fVar6;
  local_78 = (float)(((float10)local_90.min.x + (float10)local_90.max.x) * fVar6);
  local_74 = (float)fVar7;
  fVar6 = (float10)0.5;
  fVar8 = (float10)16;
  fVar7 = (fVar7 + fVar6) * fVar8;
  local_70 = (float)fVar9;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  fVar9 = fVar8 * (fVar9 + fVar6);
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)(((float10)local_78 + fVar6) * fVar8));
  fVar6 = (float10)dVar10;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
  fVar7 = (float10)dVar10;
  fStack_9c = 7.494835e-39;
  dVar10 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  local_40 = (int)ROUND(fVar6);
  local_44 = (int)ROUND(fVar7);
  local_3c = (int)ROUND(dVar10);
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
    iVar5 = local_3c + local_38;
    if (0xf < iVar5) {
      iVar5 = 0xf;
    }
    if (local_24 <= local_34) {
      do {
        iVar4 = local_28;
        grid_y = local_30;
        if (local_30 <= local_2c) {
          do {
            for (; iVar4 <= iVar5; iVar4 = iVar4 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030
                        (this_ptr,local_24,grid_y,iVar4);
            }
            grid_y = grid_y + 1;
            iVar4 = local_28;
          } while (grid_y <= local_2c);
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
    iVar5 = 0;
    if (0 < g_SamplePointCount) {
      iVar4 = 0;
      pCVar3 = g_SamplePointArray;
      do {
        local_78 = SQRT((float)*(double *)((int)g_SampleDistances + iVar4));
        iVar4 = iVar4 + 8;
        iVar5 = iVar5 + 1;
        local_54.x = pCVar3->x - local_78;
        local_54.y = pCVar3->y - local_78;
        local_54.z = pCVar3->z - local_78;
        local_74 = local_78;
        local_70 = local_78;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_54);
        local_6c.x = pCVar3->x + local_78;
        local_6c.y = pCVar3->y + local_74;
        local_6c.z = pCVar3->z + local_70;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_6c);
        pCVar3 = pCVar3 + 1;
      } while (iVar5 < g_SamplePointCount);
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    local_54.z = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX - (int)local_54.z >> 0x1f;
    iVar4 = (extraout_EAX - (int)local_54.z ^ uVar2) - uVar2;
    iVar5 = -1;
    if (-1 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    local_54.y = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_00 - (int)local_54.y >> 0x1f;
    iVar4 = (extraout_EAX_00 - (int)local_54.y ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    local_54.x = (float)(int)ROUND(dVar10);
    uVar2 = extraout_EAX_01 - (int)local_54.x >> 0x1f;
    iVar4 = (extraout_EAX_01 - (int)local_54.x ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    local_58 = (int)ROUND(dVar10);
    uVar2 = extraout_EAX_02 - local_58 >> 0x1f;
    iVar4 = (extraout_EAX_02 - local_58 ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    dVar10 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    local_5c = (int)ROUND(dVar10);
    uVar2 = extraout_EAX_03 - local_5c >> 0x1f;
    iVar4 = (extraout_EAX_03 - local_5c ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    fVar1 = fStack_9c + (float)0.5;
    fStack_9c = 7.495882e-39;
    dVar10 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float)16));
    local_60 = (int)ROUND(dVar10);
    uVar2 = extraout_EAX_04 - local_60 >> 0x1f;
    iVar4 = (extraout_EAX_04 - local_60 ^ uVar2) - uVar2;
    if (iVar5 < iVar4) {
      iVar5 = iVar4;
    }
    if (iVar5 + 1 < (int)local_54.y) break;
    local_54.y = (float)((int)local_54.y + 1);
  }
  return;
}
