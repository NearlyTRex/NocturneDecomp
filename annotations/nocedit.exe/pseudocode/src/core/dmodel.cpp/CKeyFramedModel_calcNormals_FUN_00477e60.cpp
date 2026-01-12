// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel * this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  CVector3i **ppCVar3;
  SSurfaceNormal *pSVar4;
  int iVar5;
  int extraout_ECX;
  int iVar6;
  int *piVar7;
  int *extraout_EDX;
  SSurfaceNormal *output;
  float10 fVar8;
  float10 fVar9;
  float10 fVar10;
  double dVar11;
  int local_18;
  int local_14;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i **)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    crt_memory_c_memset_FUN_005fde40(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        output = (SSurfaceNormal *)((int)this_ptr->poly_vert_list + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,output);
        iVar6 = 0;
        pSVar4 = output;
        if (0 < output->vertex_count) {
          do {
            ppCVar3 = this_ptr->vertex_normal_list + pSVar4->vertex_index_1 * 3;
            *ppCVar3 = (CVector3i *)((int)&(*ppCVar3)->x + output->normal_x);
            ppCVar3[1] = (CVector3i *)((int)&ppCVar3[1]->x + output->normal_y);
            ppCVar3[2] = (CVector3i *)((int)&ppCVar3[2]->x + output->normal_z);
            iVar6 = iVar6 + 1;
            pSVar4 = (SSurfaceNormal *)&pSVar4->normal_y;
          } while (iVar6 < output->vertex_count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar5 = 0;
      do {
        piVar7 = (int *)((int)this_ptr->vertex_normal_list + iVar5);
        dVar11 = (double)*piVar7;
        dVar2 = (double)piVar7[1];
        dVar1 = (double)piVar7[2];
        dVar11 = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar11 * dVar11);
        if (0.0 < dVar11) {
          fVar8 = (float10)65535 / (float10)dVar11;
          fVar9 = (float10)piVar7[1] * fVar8;
          fVar10 = (float10)piVar7[2] * fVar8;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)((float10)*piVar7 * fVar8));
          fVar8 = (float10)dVar11;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar9);
          fVar9 = (float10)dVar11;
          dVar11 = crt_math_c_round_FUN_005fe6b0((double)fVar10);
          *extraout_EDX = (int)ROUND(fVar8);
          extraout_EDX[1] = (int)ROUND(fVar9);
          extraout_EDX[2] = (int)ROUND(dVar11);
          iVar5 = extraout_ECX;
        }
        else {
          piVar7[2] = 0;
          piVar7[1] = piVar7[2];
          *piVar7 = piVar7[2];
        }
        iVar6 = iVar6 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar6 < this_ptr->vertex_count);
    }
  }
  return;
}
