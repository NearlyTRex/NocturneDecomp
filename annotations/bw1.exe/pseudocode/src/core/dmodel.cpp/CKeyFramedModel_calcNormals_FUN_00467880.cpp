// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00467880
// Address: 00467880
// Address Range: [[00467880, 00467a26]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00467880(CKeyFramedModel *this_ptr)

{
  double dVar1;
  CVector3i *pCVar2;
  SMRGLPrimitiveTriangle *pSVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  SMRGLPrimitiveTriangle *texture;
  double dVar7;
  double dVar8;
  double dVar9;
  int local_18;
  int local_14;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i *)0x0) {
      _DAT_01d1d400 = "..\\core\\dmodel.cpp";
      _DAT_01d1d404 = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_005030e0("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      local_18 = 0;
      do {
        texture = (SMRGLPrimitiveTriangle *)
                  ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                         base.type + local_18);
        engine_keyframe_c_calculateSurfaceNormal_FUN_004fc9c0(this_ptr->vertex_list,texture);
        iVar5 = 0;
        pSVar3 = texture;
        if (0 < (texture->base).base.count) {
          do {
            pCVar2 = this_ptr->vertex_normal_list + pSVar3->vertices[0].vertex_index;
            pCVar2->x = pCVar2->x + (texture->base).surface_normal.A.i;
            pCVar2->y = pCVar2->y + (texture->base).surface_normal.B.i;
            pCVar2->z = pCVar2->z + (texture->base).surface_normal.C.i;
            iVar5 = iVar5 + 1;
            pSVar3 = (SMRGLPrimitiveTriangle *)&(pSVar3->base).surface_normal.B;
          } while (iVar5 < (texture->base).base.count);
        }
        local_18 = local_18 + 0x48;
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar5 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar4 = 0;
      do {
        piVar6 = (int *)((int)&this_ptr->vertex_normal_list->x + iVar4);
        dVar7 = (double)*piVar6;
        dVar8 = (double)piVar6[1];
        dVar1 = (double)piVar6[2];
        dVar9 = SQRT(dVar1 * dVar1 + dVar8 * dVar8 + dVar7 * dVar7);
        if (0.0 < dVar9) {
          dVar9 = _DAT_005d963c / dVar9;
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
