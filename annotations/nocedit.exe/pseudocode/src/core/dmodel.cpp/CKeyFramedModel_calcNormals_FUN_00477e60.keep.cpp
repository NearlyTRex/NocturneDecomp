// Name: core_dmodel.cpp_CKeyFramedModel_calcNormals_FUN_00477e60
// Address: 00477e60
// MANUAL RECONSTRUCTION
// Address Range: [[00477e60, 00478006]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(CKeyFramedModel *this_ptr)

{
  double dVar5;
  CVector3i *pCVar5;
  int iVar8;
  SMRGLPrimitiveTriangle *texture;
  int iVar6;
  int local_14;
  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 753;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    memset(this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    local_14 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        // poly_vert_list[] holds SMRGLPrimitiveQuads but each entry is reinterpreted
        // as a variable-vertex-count triangle for normal accumulation.
        texture = (SMRGLPrimitiveTriangle *)&this_ptr->poly_vert_list[local_14];
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0(this_ptr->vertex_list,texture);
        iVar8 = 0;
        if (0 < (texture->base).base.count) {
          do {
            pCVar5 = this_ptr->vertex_normal_list + texture->vertices[iVar8].vertex_index;
            pCVar5->x = pCVar5->x + (texture->base).surface_normal.A.i;
            pCVar5->y = pCVar5->y + (texture->base).surface_normal.B.i;
            pCVar5->z = pCVar5->z + (texture->base).surface_normal.C.i;
            iVar8 = iVar8 + 1;
          } while (iVar8 < (texture->base).base.count);
        }
        local_14 = local_14 + 1;
      } while (local_14 < this_ptr->poly_count);
    }
    iVar6 = 0;
    if (0 < this_ptr->vertex_count) {
      do {
        pCVar5 = &this_ptr->vertex_normal_list[iVar6];
        dVar1 = (double)pCVar5->x;
        dVar4 = (double)pCVar5->y;
        dVar3 = (double)pCVar5->z;
        dVar2 = SQRT(dVar3 * dVar3 + dVar4 * dVar4 + dVar1 * dVar1);
        if (0.0 < dVar2) {
          dVar5 = 65535 / dVar2;
          pCVar5->x = (int)ROUND(ROUND(dVar1 * dVar5));
          pCVar5->y = (int)ROUND(ROUND(dVar4 * dVar5));
          pCVar5->z = (int)ROUND(ROUND(dVar3 * dVar5));
        }
        else {
          pCVar5->x = 0;
          pCVar5->y = 0;
          pCVar5->z = 0;
        }
        iVar6 = iVar6 + 1;
      } while (iVar6 < this_ptr->vertex_count);
    }
  }
  return;
}
