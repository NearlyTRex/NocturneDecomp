// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_0044ecb0
// Address: 0044ecb0
// Address Range: [[0044ecb0, 0044ee56]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_0044ecb0(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_0044ecb0(CKeyFramedModel *this_ptr)

{
  double dVar1;
  double dVar2;
  double dVar3;
  CVector3i *pCVar4;
  SMRGLPrimitiveQuad *pSVar5;
  int iVar6;
  int extraout_ECX;
  int iVar7;
  int *piVar8;
  int *extraout_EDX;
  SMRGLPrimitiveQuad *pSVar9;
  float10 fVar10;
  float10 fVar11;
  float10 fVar12;
  int local_18;
  int local_14;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i *)0x0) {
      _DAT_01d046a0 = "..\\core\\dmodel.cpp";
      _DAT_01d046a4 = 0x2f1;
      core_main_c_FUN_004e4500("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        pSVar9 = this_ptr->poly_vert_list + local_18;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(this_ptr->vertex_list,pSVar9);
        iVar7 = 0;
        pSVar5 = pSVar9;
        if (0 < *(int *)(pSVar9 + 4)) {
          do {
            pCVar4 = this_ptr->vertex_normal_list + *(int *)(pSVar5 + 0x18);
            pCVar4->x = pCVar4->x + *(int *)(pSVar9 + 8);
            pCVar4->y = pCVar4->y + *(int *)(pSVar9 + 0xc);
            pCVar4->z = pCVar4->z + *(int *)(pSVar9 + 0x10);
            iVar7 = iVar7 + 1;
            pSVar5 = pSVar5 + 0xc;
          } while (iVar7 < *(int *)(pSVar9 + 4));
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
          fVar10 = (float10)_DAT_005cf91f / (float10)dVar1;
          fVar11 = (float10)*piVar8 * fVar10;
          fVar12 = (float10)piVar8[1] * fVar10;
          fVar10 = (float10)piVar8[2] * fVar10;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar11);
          extraout_EDX[1] = (int)ROUND(fVar12);
          extraout_EDX[2] = (int)ROUND(fVar10);
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
