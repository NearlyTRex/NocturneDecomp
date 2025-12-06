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
  CVector3i **extraout_EAX;
  SSurfaceNormal *pSVar4;
  int extraout_ECX;
  int iVar5;
  int *piVar6;
  SSurfaceNormal *output;
  float10 fVar7;
  float10 fVar8;
  float10 fVar9;
  double dVar10;
  int iVar11;
  int iVar12;
  
  if (this_ptr->frame_count == 1) {
    if (this_ptr->vertex_normal_list == (CVector3i **)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x2f1;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CKeyFramedModel::calcNormals() - vertexNormalList not allocated!");
    }
    ppCVar3 = (CVector3i **)
              crt_memory_c_memset_FUN_005fde40
                        (this_ptr->vertex_normal_list,0,this_ptr->vertex_count * 0xc);
    iVar12 = 0;
    if (0 < this_ptr->poly_count) {
      iVar11 = 0;
      do {
        output = (SSurfaceNormal *)((int)this_ptr->poly_vert_list + iVar11);
        engine_keyframe_c_calculateSurfaceNormal_FUN_00501bc0
                  ((CVector3i *)this_ptr->vertex_list,output);
        iVar5 = 0;
        ppCVar3 = extraout_EAX;
        pSVar4 = output;
        if (0 < output->vertex_count) {
          do {
            ppCVar3 = this_ptr->vertex_normal_list + pSVar4->vertex_index_1 * 3;
            *ppCVar3 = (CVector3i *)((int)&(*ppCVar3)->x + output->normal_x);
            ppCVar3[1] = (CVector3i *)((int)&ppCVar3[1]->x + output->normal_y);
            ppCVar3[2] = (CVector3i *)((int)&ppCVar3[2]->x + output->normal_z);
            iVar5 = iVar5 + 1;
            pSVar4 = (SSurfaceNormal *)&pSVar4->normal_y;
          } while (iVar5 < output->vertex_count);
        }
        iVar11 = iVar11 + 0x48;
        iVar12 = iVar12 + 1;
      } while (iVar12 < this_ptr->poly_count);
    }
    iVar12 = 0;
    if (0 < this_ptr->vertex_count) {
      iVar11 = 0;
      do {
        piVar6 = (int *)((int)this_ptr->vertex_normal_list + iVar11);
        dVar10 = (double)*piVar6;
        dVar2 = (double)piVar6[1];
        dVar1 = (double)piVar6[2];
        dVar10 = SQRT(dVar1 * dVar1 + dVar2 * dVar2 + dVar10 * dVar10);
        if (0.0 < dVar10) {
          fVar7 = (float10)65535 / (float10)dVar10;
          fVar8 = (float10)*piVar6 * fVar7;
          fVar9 = (float10)piVar6[1] * fVar7;
          fVar7 = (float10)piVar6[2] * fVar7;
          dVar10 = crt_math_c_round_FUN_005fe6b0
                             ((double)CONCAT44 /* combine 2-byte values */(piVar6,CONCAT22 /* combine 2-byte values */((short)((uint)ppCVar3 >> 0x10),
                                                               (ushort)(0.0 < dVar10) << 8 |
                                                               (ushort)NAN(dVar10) << 10 |
                                                               (ushort)(dVar10 == 0.0) << 0xe)));
          dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
          dVar10 = crt_math_c_round_FUN_005fe6b0(dVar10);
          piVar6 = (int *)((ulonglong)dVar10 >> 0x20);
          ppCVar3 = SUB84 /* extract 2-byte value */(dVar10,0);
          *piVar6 = (int)ROUND(fVar8);
          piVar6[1] = (int)ROUND(fVar9);
          piVar6[2] = (int)ROUND(fVar7);
          iVar11 = extraout_ECX;
        }
        else {
          piVar6[2] = 0;
          ppCVar3 = (CVector3i **)piVar6[2];
          piVar6[1] = (int)ppCVar3;
          *piVar6 = (int)ppCVar3;
        }
        iVar12 = iVar12 + 1;
        iVar11 = iVar11 + 0xc;
      } while (iVar12 < this_ptr->vertex_count);
    }
  }
  return;
}
