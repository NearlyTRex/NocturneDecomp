// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  CVector3i **ppCVar5;
  SMRGLPrimitiveTriangle *pSVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  SMRGLPrimitiveTriangle *texture;
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
        texture = (SMRGLPrimitiveTriangle *)((int)this_ptr->poly_vert_list + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,texture);
        iVar8 = 0;
        pSVar6 = texture;
        if (0 < (texture->base).base.count) {
          do {
            ppCVar5 = this_ptr->vertex_normal_list + pSVar6->vertices[0].vertex_index * 3;
            *ppCVar5 = (CVector3i *)((int)&(*ppCVar5)->x + (texture->base).surface_normal.A);
            ppCVar5[1] = (CVector3i *)((int)&ppCVar5[1]->x + (texture->base).surface_normal.B);
            ppCVar5[2] = (CVector3i *)((int)&ppCVar5[2]->x + (texture->base).surface_normal.C);
            iVar8 = iVar8 + 1;
            pSVar6 = (SMRGLPrimitiveTriangle *)&(pSVar6->base).surface_normal.B;
          } while (iVar8 < (texture->base).base.count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar7 = 0;
      do {
        piVar9 = (int *)((int)this_ptr->vertex_normal_list + iVar7);
        dVar1 = (double)*piVar9;
        dVar4 = (double)piVar9[1];
        dVar3 = (double)piVar9[2];
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
        if (0.0 < dVar2) {
          dVar2 = 65535 / dVar2;
          *piVar9 = (int)ROUND(ROUND(dVar1 * dVar2));
          piVar9[1] = (int)ROUND(ROUND(dVar4 * dVar2));
          piVar9[2] = (int)ROUND(ROUND(dVar3 * dVar2));
        }
        else {
          piVar9[2] = 0;
          piVar9[1] = piVar9[2];
          *piVar9 = piVar9[2];
        }
        iVar8 = iVar8 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
  }
  return;
}
