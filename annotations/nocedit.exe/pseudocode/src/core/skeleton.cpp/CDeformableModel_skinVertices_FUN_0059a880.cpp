// Name: core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880
// Address: 0059a880
// Address Range: [[0059a880, 0059a9f5]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModel_skinVertices_FUN_0059a880(CDeformableModel * this_ptr, int lod_index, CMatrix3x4f * bone_matrices, int * output_buffer)

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModel_skinVertices_FUN_0059a880
          (CDeformableModel *this_ptr,int lod_index,CMatrix3x4f *bone_matrices,int *output_buffer)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  float *pfVar3;
  float *pfVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CVector3f local_54;
  float local_44;
  float local_40;
  CVector3f local_3c;
  float local_30;
  CVector3f local_2c;
  int local_20;
  int local_1c;
  int *local_18;
  float *local_14;
  
  local_18 = output_buffer;
  local_2c.z = (float)(lod_index << 2);
  local_1c = 0;
  for (local_20 = 0; local_20 < *(int *)((int)this_ptr->vertex_count + (int)local_2c.z);
      local_20 = local_20 + 1) {
    pfVar3 = (float *)(local_1c + *(int *)((int)this_ptr->vertex_data_ptr + (int)local_2c.z));
    pCVar2 = (CVector3f *)(pfVar3 + 4);
    local_14 = pfVar3;
    if (*(char *)pfVar3 == '\x01') {
      pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&local_3c,pCVar2,bone_matrices + *(byte *)((int)pfVar3 + 1));
      if (&local_2c != pCVar2) {
        local_2c.x = pCVar2->x;
        local_2c.y = pCVar2->y;
        local_2c.z = pCVar2->z;
      }
    }
    else {
      iVar5 = 0;
      local_2c.x = 0.0;
      local_30 = 0.0;
      local_2c.y = 0.0;
      pfVar4 = pfVar3;
      while( true ) {
        pfVar4 = pfVar4 + 1;
        if ((int)(uint)*(byte *)local_14 <= iVar5) break;
        pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                           (&local_54,pCVar2,bone_matrices + *(byte *)((int)pfVar3 + 1));
        local_44 = pCVar1->x * *pfVar4;
        local_40 = pCVar1->y * *pfVar4;
        local_3c.x = pCVar1->z * *pfVar4;
        pfVar3 = (float *)((int)pfVar3 + 1);
        iVar5 = iVar5 + 1;
        pCVar2 = pCVar2 + 1;
        local_2c.x = local_2c.x + local_44;
        local_2c.y = local_2c.y + local_40;
        local_2c.z = local_2c.z + local_3c.x;
      }
    }
    *local_18 = (int)ROUND(local_30 * 256f);
    local_18[1] = (int)ROUND(local_2c.x * 256f);
    local_18[2] = (int)ROUND(local_2c.y * 256f);
    local_18 = local_18 + 3;
    local_1c = local_1c + 0x34;
  }
  return;
}
