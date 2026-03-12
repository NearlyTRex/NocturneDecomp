// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// Address Range: [[00477e60, 00477ffe]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar5;
  CVector3i *pCVar5;
  SMRGLPrimitiveTriangle *pSVar6;
  int iVar7;
  int iVar8;
  int *piVar9;
  SMRGLPrimitiveTriangle *texture;
  int iVar6;
  int local_18;
  int local_14;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        texture = (SMRGLPrimitiveTriangle *)
                  ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                         base.type + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_list,texture);
        iVar8 = 0;
        pSVar6 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar5 = this_ptr->vertex_normal_list + pSVar6->vertices[0].vertex_index;
            pCVar5->x = pCVar5->x + (texture->base).surface_normal.A;
            pCVar5->y = pCVar5->y + (texture->base).surface_normal.B;
            pCVar5->z = pCVar5->z + (texture->base).surface_normal.C;
            iVar8 = iVar8 + 1;
            pSVar6 = (SMRGLPrimitiveTriangle *)&(pSVar6->base).surface_normal.B;
          } while (iVar8 < (texture->base).base.count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar7 = 0;
      do {
        piVar9 = (int *)((int)&this_ptr->vertex_normal_list->x + iVar7);
        dVar1 = (double)*piVar9;
        dVar4 = (double)piVar9[1];
        dVar3 = (double)piVar9[2];
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
        if (0.0 < dVar2) {
          dVar5 = 65535 / dVar2;
          *piVar9 = (int)ROUND(ROUND(dVar1 * dVar5));
          piVar9[1] = (int)ROUND(ROUND(dVar4 * dVar5));
          piVar9[2] = (int)ROUND(ROUND(dVar3 * dVar5));
        }
        else {
          piVar9[2] = 0;
          piVar9[1] = piVar9[2];
          *piVar9 = piVar9[2];
        }
        iVar6 = iVar6 + 1;
        iVar7 = iVar7 + 0xc;
      } while (iVar6 < this_ptr->vertex_count);
    }
  }
  return;
}
