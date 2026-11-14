// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00461530
// Address: 00461530
// Address Range: [[00461530, 004616d6]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00461530(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00461530(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveTriangle *pSVar5;
  int iVar6;
  int extraout_ECX;
  int iVar7;
  int *piVar8;
  int *extraout_EDX;
  SMRGLPrimitiveTriangle *texture;
  float10 fVar9;
  float10 fVar10;
  float10 fVar11;
  int local_18;
  int local_14;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i *)0x0) {
      _DAT_01d71de0 = "..\\core\\dmodel.cpp";
      _DAT_01d71de4 = 0x2f1;
      core_main_c_FUN_004e4330("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        texture = (SMRGLPrimitiveTriangle *)
                  ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                         base.type + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(this_ptr->vertex_list,texture);
        iVar7 = 0;
        pSVar5 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar4 = this_ptr->vertex_normal_list + pSVar5->vertices[0].vertex_index;
            pCVar4->x = pCVar4->x + (texture->base).surface_normal.A.i;
            pCVar4->y = pCVar4->y + (texture->base).surface_normal.B.i;
            pCVar4->z = pCVar4->z + (texture->base).surface_normal.C.i;
            iVar7 = iVar7 + 1;
            pSVar5 = (SMRGLPrimitiveTriangle *)&(pSVar5->base).surface_normal.B;
          } while (iVar7 < (texture->base).base.count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar7 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar6 = 0;
      do {
        piVar8 = (int *)((int)&this_ptr->vertex_normal_list->x + iVar6);
        dVar1 = (double)*piVar8;
        dVar3 = (double)piVar8[1];
        dVar2 = (double)piVar8[2];
        dVar1 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
        if (0.0 < dVar1) {
          fVar9 = (float10)_DAT_005bb954 / (float10)dVar1;
          fVar10 = (float10)*piVar8 * fVar9;
          fVar11 = (float10)piVar8[1] * fVar9;
          fVar9 = (float10)piVar8[2] * fVar9;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar10);
          extraout_EDX[1] = (int)ROUND(fVar11);
          extraout_EDX[2] = (int)ROUND(fVar9);
          iVar6 = extraout_ECX;
        }
        else {
          piVar8[2] = 0;
          piVar8[1] = piVar8[2];
          *piVar8 = piVar8[2];
        }
        iVar7 = iVar7 + 1;
        iVar6 = iVar6 + 0xc;
      } while (iVar7 < this_ptr->vertex_count);
    }
  }
  return;
}
