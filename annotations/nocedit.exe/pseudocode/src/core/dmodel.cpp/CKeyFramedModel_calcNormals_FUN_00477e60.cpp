// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar1;
  CVector3i **ppCVar2;
  SSurfaceNormal *pSVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SSurfaceNormal *output;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_18;
  int local_14;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i **)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        output = (SSurfaceNormal *)((int)this_ptr->poly_vert_list + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,output);
        iVar5 = 0;
        pSVar3 = output;
        if (0 < output->vertex_count) {
          do {
            ppCVar2 = this_ptr->vertex_normal_list + pSVar3->vertex_index_1 * 3;
            *ppCVar2 = (CVector3i *)((int)&(*ppCVar2)->x + output->normal_x);
            ppCVar2[1] = (CVector3i *)((int)&ppCVar2[1]->x + output->normal_y);
            ppCVar2[2] = (CVector3i *)((int)&ppCVar2[2]->x + output->normal_z);
            iVar5 = iVar5 + 1;
            pSVar3 = (SSurfaceNormal *)&pSVar3->normal_y;
          } while (iVar5 < output->vertex_count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar5 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar4 = 0;
      do {
        piVar6 = (int *)((int)this_ptr->vertex_normal_list + iVar4);
        dVar7 = (double)*piVar6;
        dVar8 = (double)piVar6[1];
        dVar1 = (double)piVar6[2];
        dVar9 = SQRT(dVar1 * dVar1 + dVar8 * dVar8 + dVar7 * dVar7);
        if (0.0 < dVar9) {
          dVar9 = 65535 / dVar9;
          dVar7 = round(dVar7 * dVar9);
          dVar8 = round(dVar8 * dVar9);
          dVar9 = round(dVar1 * dVar9);
          *piVar6 = (int)ROUND(dVar7);
          piVar6[1] = (int)ROUND(dVar8);
          piVar6[2] = (int)ROUND(dVar9);
        }
        else {
          piVar6[2] = 0;
          piVar6[1] = piVar6[2];
          *piVar6 = piVar6[2];
        }
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0xc;
      } while (iVar5 < this_ptr->vertex_count);
    }
  }
  return;
}
