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
  int extraout_ECX;
  int iVar5;
  int *piVar6;
  int *extraout_EDX;
  int iVar7;
  int iVar8;
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
        iVar7 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base
                      .type + local_18;
        engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(this_ptr->vertex_list,iVar7);
        iVar5 = 0;
        iVar8 = iVar7;
        if (0 < *(int *)(iVar7 + 4)) {
          do {
            pCVar4 = this_ptr->vertex_normal_list + *(int *)(iVar8 + 0x18);
            pCVar4->x = pCVar4->x + *(int *)(iVar7 + 8);
            pCVar4->y = pCVar4->y + *(int *)(iVar7 + 0xc);
            pCVar4->z = pCVar4->z + *(int *)(iVar7 + 0x10);
            iVar5 = iVar5 + 1;
            iVar8 = iVar8 + 0xc;
          } while (iVar5 < *(int *)(iVar7 + 4));
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar8 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar5 = 0;
      do {
        piVar6 = (int *)((int)&this_ptr->vertex_normal_list->x + iVar5);
        dVar1 = (double)*piVar6;
        dVar3 = (double)piVar6[1];
        dVar2 = (double)piVar6[2];
        dVar1 = SQRT(dVar2 * dVar2 + dVar3 * dVar3 + dVar1 * dVar1);
        if (0.0 < dVar1) {
          fVar9 = (float10)_DAT_005bb954 / (float10)dVar1;
          fVar10 = (float10)*piVar6 * fVar9;
          fVar11 = (float10)piVar6[1] * fVar9;
          fVar9 = (float10)piVar6[2] * fVar9;
          round();
          round();
          round();
          *extraout_EDX = (int)ROUND(fVar10);
          extraout_EDX[1] = (int)ROUND(fVar11);
          extraout_EDX[2] = (int)ROUND(fVar9);
          iVar5 = extraout_ECX;
        }
        else {
          piVar6[2] = 0;
          piVar6[1] = piVar6[2];
          *piVar6 = piVar6[2];
        }
        iVar8 = iVar8 + 1;
        iVar5 = iVar5 + 0xc;
      } while (iVar8 < this_ptr->vertex_count);
    }
  }
  return;
}
