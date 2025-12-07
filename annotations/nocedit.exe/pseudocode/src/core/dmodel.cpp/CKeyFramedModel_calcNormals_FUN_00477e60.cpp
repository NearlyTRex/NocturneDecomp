// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar1;
  CVector3i **ppCVar2;
  SSurfaceNormal *pSVar3;
  int iVar4;
  int *piVar5;
  SSurfaceNormal *output;
  float10 fVar6;
  float10 fVar7;
  double dVar8;
  double dVar9;
  int iVar10;
  int iVar11;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i **)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    crt_memory_c_memset_FUN_005fde40(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    iVar11 = 0;
    if (0 < this_ptr->poly_count) {
      iVar10 = 0;
      do {
        output = (SSurfaceNormal *)((int)this_ptr->poly_vert_list + iVar10);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,output);
        iVar4 = 0;
        pSVar3 = output;
        if (0 < output->vertex_count) {
          do {
            ppCVar2 = this_ptr->vertex_normal_list + pSVar3->vertex_index_1 * 3;
            *ppCVar2 = (CVector3i *)((int)&(*ppCVar2)->x + output->normal_x);
            ppCVar2[1] = (CVector3i *)((int)&ppCVar2[1]->x + output->normal_y);
            ppCVar2[2] = (CVector3i *)((int)&ppCVar2[2]->x + output->normal_z);
            iVar4 = iVar4 + 1;
            pSVar3 = (SSurfaceNormal *)&pSVar3->normal_y;
          } while (iVar4 < output->vertex_count);
        }
        iVar10 = iVar10 + 0x48;
        iVar11 = iVar11 + 1;
      } while (iVar11 < this_ptr->poly_count);
    }
    iVar11 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar10 = 0;
      do {
        piVar5 = (int *)((int)this_ptr->vertex_normal_list + iVar10);
        dVar8 = (double)*piVar5;
        iVar4 = piVar5[1];
        dVar1 = (double)iVar4;
        dVar9 = (double)piVar5[2];
        dVar8 = SQRT(dVar9 * dVar9 + dVar1 * dVar1 + dVar8 * dVar8);
        if (0.0 < dVar8) {
          fVar6 = (float10)65535 / (float10)dVar8;
          fVar7 = (float10)piVar5[2] * fVar6;
          dVar8 = crt_math_c_round_FUN_005fe6b0((double)((float10)*piVar5 * fVar6));
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)((float10)iVar4 * fVar6));
          fVar6 = (float10)dVar9;
          dVar9 = crt_math_c_round_FUN_005fe6b0((double)fVar7);
          *piVar5 = (int)ROUND(dVar8);
          piVar5[1] = (int)ROUND(fVar6);
          piVar5[2] = (int)ROUND(dVar9);
        }
        else {
          piVar5[2] = 0;
          piVar5[1] = piVar5[2];
          *piVar5 = piVar5[2];
        }
        iVar11 = iVar11 + 1;
        iVar10 = iVar10 + 0xc;
      } while (iVar11 < this_ptr->vertex_count);
    }
  }
  return;
}
