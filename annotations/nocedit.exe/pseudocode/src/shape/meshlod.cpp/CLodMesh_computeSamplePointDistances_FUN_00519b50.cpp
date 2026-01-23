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
  float fVar2;
  uint uVar3;
  CVector3f *pCVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  double dVar13;
  double dVar14;
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
  iVar7 = 0;
  if (0 < g_SamplePointCount) {
    iVar6 = 0;
    pCVar4 = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar6) = 0;
      iVar7 = iVar7 + 1;
      *(uint *)((int)g_SampleDistances + iVar6 + 4) = 0x3ff00000;
      fStack_9c = 7.494611e-39;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_90,pCVar4);
      iVar6 = iVar6 + 8;
      pCVar4 = pCVar4 + 1;
    } while (iVar7 < g_SamplePointCount);
  }
  local_54.x = (float)((float10)local_90.min.x + (float10)local_90.max.x);
  fVar8 = (float10)0.5f;
  local_54.y = (float)((float10)local_90.min.y + (float10)local_90.max.y);
  fVar9 = ((float10)local_90.min.y + (float10)local_90.max.y) * fVar8;
  local_54.z = (float)((float10)local_90.min.z + (float10)local_90.max.z);
  fVar12 = ((float10)local_90.min.z + (float10)local_90.max.z) * fVar8;
  local_78 = (float)(((float10)local_90.min.x + (float10)local_90.max.x) * fVar8);
  local_74 = (float)fVar9;
  fVar8 = (float10)0.5;
  fVar10 = (float10)16;
  fVar9 = (fVar9 + fVar8) * fVar10;
  local_70 = (float)fVar12;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)(((float10)local_78 + fVar8) * fVar10));
  fVar11 = (float10)dVar13;
  dVar13 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
  fStack_9c = 7.494835e-39;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)(fVar10 * (fVar12 + fVar8)));
  local_40 = (int)ROUND(fVar11);
  local_44 = (int)ROUND(dVar13);
  local_3c = (int)ROUND(dVar14);
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
    iVar7 = local_3c + local_38;
    if (0xf < iVar7) {
      iVar7 = 0xf;
    }
    if (local_24 <= local_34) {
      do {
        iVar6 = local_28;
        iVar5 = local_30;
        if (local_30 <= local_2c) {
          do {
            for (; iVar6 <= iVar7; iVar6 = iVar6 + 1) {
              shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_24,iVar5,iVar6)
              ;
            }
            iVar5 = iVar5 + 1;
            iVar6 = local_28;
          } while (iVar5 <= local_2c);
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
    iVar7 = 0;
    if (0 < g_SamplePointCount) {
      iVar6 = 0;
      pCVar4 = g_SamplePointArray;
      do {
        local_78 = SQRT((float)*(double *)((int)g_SampleDistances + iVar6));
        iVar6 = iVar6 + 8;
        iVar7 = iVar7 + 1;
        local_54.x = pCVar4->x - local_78;
        local_54.y = pCVar4->y - local_78;
        local_54.z = pCVar4->z - local_78;
        local_74 = local_78;
        local_70 = local_78;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_54);
        local_6c.x = pCVar4->x + local_78;
        local_6c.y = pCVar4->y + local_74;
        local_6c.z = pCVar4->z + local_70;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&fStack_9c,&local_6c);
        pCVar4 = pCVar4 + 1;
      } while (iVar7 < g_SamplePointCount);
    }
    iVar6 = local_40;
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    iVar7 = local_48;
    local_54.z = (float)(int)ROUND(dVar13);
    uVar3 = iVar6 - (int)local_54.z >> 0x1f;
    iVar5 = (iVar6 - (int)local_54.z ^ uVar3) - uVar3;
    iVar6 = -1;
    if (-1 < iVar5) {
      iVar6 = iVar5;
    }
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    iVar5 = local_44;
    local_54.y = (float)(int)ROUND(dVar13);
    uVar3 = iVar7 - (int)local_54.y >> 0x1f;
    iVar7 = (iVar7 - (int)local_54.y ^ uVar3) - uVar3;
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar2 = local_54.z;
    local_54.x = (float)(int)ROUND(dVar13);
    uVar3 = iVar5 - (int)local_54.x >> 0x1f;
    iVar7 = (iVar5 - (int)local_54.x ^ uVar3) - uVar3;
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar1 = local_54.x;
    local_58 = (int)ROUND(dVar13);
    uVar3 = (int)fVar2 - local_58 >> 0x1f;
    iVar7 = ((int)fVar2 - local_58 ^ uVar3) - uVar3;
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    dVar13 = crt_math_c_round_FUN_005fe6b0
                       ((double)((fStack_9c + (float)0.5) * (float)16));
    fVar2 = local_54.y;
    local_5c = (int)ROUND(dVar13);
    uVar3 = (int)fVar1 - local_5c >> 0x1f;
    iVar7 = ((int)fVar1 - local_5c ^ uVar3) - uVar3;
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    fVar1 = fStack_9c + (float)0.5;
    fStack_9c = 7.495882e-39;
    dVar13 = crt_math_c_round_FUN_005fe6b0((double)(fVar1 * (float)16));
    local_60 = (int)ROUND(dVar13);
    uVar3 = (int)fVar2 - local_60 >> 0x1f;
    iVar7 = ((int)fVar2 - local_60 ^ uVar3) - uVar3;
    if (iVar6 < iVar7) {
      iVar6 = iVar7;
    }
    if (iVar6 + 1 < (int)local_54.y) break;
    local_54.y = (float)((int)local_54.y + 1);
  }
  return;
}
