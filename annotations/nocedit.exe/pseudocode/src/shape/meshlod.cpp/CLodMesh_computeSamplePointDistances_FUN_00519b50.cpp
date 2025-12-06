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
  int grid_y;
  int grid_z;
  CVector3f *extraout_EAX;
  CVector3f *pCVar1;
  uint uVar2;
  uint in_EDX;
  uint extraout_EDX;
  uint extraout_EDX_00;
  uint uVar3;
  uint extraout_EDX_01;
  uint extraout_EDX_02;
  int iVar4;
  int iVar5;
  int iVar6;
  BADSPACEBASE *in_ESP;
  CVector3f *point;
  int iVar7;
  int iVar8;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int unaff_retaddr;
  float in_stack_ffffff74;
  float in_stack_ffffff78;
  float in_stack_ffffff7c;
  float in_stack_ffffff80;
  CBoundingBox3D local_7c;
  float local_64;
  float local_5c;
  float local_58;
  float local_54;
  CVector3f local_50 [2];
  CVector3f local_34;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  uint uStack_14;
  
  if (400 < g_SamplePointCount) {
    g_CurrentFilename = "..\\shape\\meshlod.cpp";
    g_CurrentLineNumber = 0xd78;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many sample points!");
    in_EDX = extraout_EDX_01;
  }
  if ((float *)&stack0x00000000 != &g_SamplePointArray[0xb].z) {
    in_stack_ffffff74 = g_SamplePointArray[0].x;
    in_stack_ffffff78 = g_SamplePointArray[0].y;
    in_stack_ffffff7c = g_SamplePointArray[0].z;
  }
  pCVar1 = (CVector3f *)&stack0xffffff80;
  if ((CVector3f *)&stack0xffffff80 != g_SamplePointArray) {
    local_7c.min.x = g_SamplePointArray[0].y;
    local_7c.min.y = g_SamplePointArray[0].z;
    pCVar1 = (CVector3f *)g_SamplePointArray[0].z;
    in_stack_ffffff80 = g_SamplePointArray[0].x;
  }
  iVar7 = 0;
  if (0 < g_SamplePointCount) {
    iVar4 = 0;
    point = g_SamplePointArray;
    do {
      *(uint *)((int)g_SampleDistances + iVar4) = 0;
      iVar7 = iVar7 + 1;
      *(uint *)((int)g_SampleDistances + iVar4 + 4) = 0x3ff00000;
      core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffff74,point);
      pCVar1 = extraout_EAX;
      in_EDX = extraout_EDX;
      iVar4 = iVar4 + 8;
      point = point + 1;
    } while (iVar7 < g_SamplePointCount);
  }
  local_50[0].x = (float)((float10)in_stack_ffffff74 + (float10)in_stack_ffffff80);
  fVar9 = (float10)0.5f;
  local_50[0].y = (float)((float10)in_stack_ffffff78 + (float10)local_7c.min.x);
  fVar10 = ((float10)in_stack_ffffff78 + (float10)local_7c.min.x) * fVar9;
  local_50[0].z = (float)((float10)in_stack_ffffff7c + (float10)local_7c.min.y);
  fVar13 = ((float10)in_stack_ffffff7c + (float10)local_7c.min.y) * fVar9;
  local_7c.min.z = (float)(((float10)in_stack_ffffff74 + (float10)in_stack_ffffff80) * fVar9);
  local_7c.max.x = (float)fVar10;
  fVar9 = (float10)0.5;
  fVar11 = (float10)16;
  fVar12 = ((float10)local_7c.min.z + fVar9) * fVar11;
  fVar10 = (fVar10 + fVar9) * fVar11;
  local_7c.max.y = (float)fVar13;
  g_LodGenerationStamp = g_LodGenerationStamp + 1;
  fVar11 = fVar11 * (fVar13 + fVar9);
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(in_EDX,pCVar1));
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  dVar14 = crt_math_c_round_FUN_005fe6b0(dVar14);
  uVar2 = (uint)((ulonglong)dVar14 >> 0x20);
  local_24 = (int)ROUND(fVar12);
  local_28 = (int)ROUND(fVar10);
  local_20 = (int)ROUND(fVar11);
  if ((((-1 < local_24) && (local_24 < 0x10)) && (-1 < local_28)) &&
     (((local_28 < 0x10 && (-1 < local_20)) && (local_20 < 0x10)))) {
    shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,local_24,local_28,local_20);
    uVar2 = extraout_EDX_02;
  }
  local_18 = 1;
  while( true ) {
    iVar7 = local_20 - local_18;
    if (iVar7 < 0) {
      iVar7 = 0;
    }
    uStack_14 = local_20 + local_18;
    if (0xf < (int)uStack_14) {
      uStack_14 = 0xf;
    }
    iVar4 = local_24 - local_18;
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    iVar5 = local_24 + local_18;
    if (0xf < iVar5) {
      iVar5 = 0xf;
    }
    iVar6 = local_1c - local_18;
    if (iVar6 < 0) {
      uVar2 = 0;
      iVar6 = 0;
    }
    iVar8 = local_1c + local_18;
    if (0xf < iVar8) {
      iVar8 = 0xf;
    }
    grid_y = iVar4;
    if (iVar7 <= (int)uStack_14) {
      do {
        for (; uVar2 = uStack_14, uStack_14 = uVar2, grid_z = iVar6, grid_y <= iVar5;
            grid_y = grid_y + 1) {
          for (; grid_z <= iVar8; grid_z = grid_z + 1) {
            shape_meshlod_cpp_CLodMesh_processGridCell_FUN_0051a030(this_ptr,iVar7,grid_y,grid_z);
          }
        }
        iVar7 = iVar7 + 1;
        grid_y = iVar4;
      } while (iVar7 <= (int)uVar2);
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[10].y) {
      local_7c.min.x = g_SamplePointArray[0].x;
      local_7c.min.y = g_SamplePointArray[0].y;
      local_7c.min.z = g_SamplePointArray[0].z;
    }
    if ((float *)&stack0x00000000 != &g_SamplePointArray[9].y) {
      local_7c.max.x = g_SamplePointArray[0].x;
      local_7c.max.y = g_SamplePointArray[0].y;
      local_7c.max.z = g_SamplePointArray[0].z;
    }
    iVar7 = 0;
    if (0 < g_SamplePointCount) {
      iVar4 = 0;
      pCVar1 = g_SamplePointArray;
      do {
        local_58 = SQRT((float)*(double *)((int)g_SampleDistances + iVar4));
        iVar4 = iVar4 + 8;
        iVar7 = iVar7 + 1;
        local_34.x = pCVar1->x - local_58;
        local_34.y = pCVar1->y - local_58;
        local_34.z = pCVar1->z - local_58;
        local_54 = local_58;
        local_50[0].x = local_58;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240(&local_7c,&local_34);
        local_50[0].x = pCVar1->x + local_5c;
        local_50[0].y = pCVar1->y + local_58;
        local_50[0].z = pCVar1->z + local_54;
        core_box_cpp_CBoundingBox3D_expand_FUN_00420240((CBoundingBox3D *)&stack0xffffff80,local_50)
        ;
        uVar2 = extraout_EDX_00;
        pCVar1 = pCVar1 + 1;
      } while (iVar7 < g_SamplePointCount);
    }
    fVar9 = ((float10)local_7c.min.x + (float10)0.5) * (float10)16;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar2,local_20));
    local_24 = (int)ROUND(fVar9);
    uVar2 = SUB84 /* extract 2-byte value */(dVar14,0) - local_24;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    iVar7 = -1;
    if (-1 < iVar4) {
      iVar7 = iVar4;
    }
    fVar9 = ((float10)local_7c.min.z + (float10)0.5) * (float10)16;
    local_7c.min.x = 7.495635e-39;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,local_20));
    local_20 = (int)ROUND(fVar9);
    uVar2 = SUB84 /* extract 2-byte value */(dVar14,0) - local_20;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    fVar9 = ((float10)local_7c.max.y + (float10)0.5) * (float10)16;
    local_7c.min.y = 7.495697e-39;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,uStack_14));
    local_1c = (int)ROUND(fVar9);
    uVar2 = SUB84 /* extract 2-byte value */(dVar14,0) - local_1c;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    fVar9 = ((float10)local_64 + (float10)0.5) * (float10)16;
    local_7c.min.z = 7.495758e-39;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,uStack_14));
    local_18 = (int)ROUND(fVar9);
    uVar2 = SUB84 /* extract 2-byte value */(dVar14,0) - local_18;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    fVar9 = ((float10)local_5c + (float10)0.5) * (float10)16;
    local_7c.max.x = 7.49582e-39;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,uStack_14));
    uStack_14 = (uint)ROUND(fVar9);
    uVar2 = SUB84 /* extract 2-byte value */(dVar14,0) - uStack_14;
    uVar3 = (int)uVar2 >> 0x1f;
    iVar4 = (uVar2 ^ uVar3) - uVar3;
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    fVar9 = ((float10)local_54 + (float10)0.5) * (float10)16;
    local_7c.max.y = 7.495882e-39;
    dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44 /* combine 2-byte values */(uVar3,iVar6));
    uVar3 = SUB84 /* extract 2-byte value */(dVar14,0) - (int)ROUND(fVar9);
    uVar2 = (int)uVar3 >> 0x1f;
    iVar4 = (uVar3 ^ uVar2) - uVar2;
    if (iVar7 < iVar4) {
      iVar7 = iVar4;
    }
    if (iVar7 + 1 < unaff_retaddr) break;
    unaff_retaddr = unaff_retaddr + 1;
  }
  return;
}
