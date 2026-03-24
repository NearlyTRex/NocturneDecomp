// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047bbb4] [00609dd1, 00609e50]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  double dVar1;
  uchar *puVar3;
  CVector3i *pCVar4;
  bool bVar5;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  uint *puVar13;
  int iVar9;
  int iVar16;
  CVector3f *pCVar10;
  CVector3f *pCVar11;
  CVector3i *pCVar17;
  int iVar12;
  CVector3i *pCVar13;
  int iVar18;
  int iVar14;
  int iVar19;
  int iVar20;
  int iVar15;
  int iVar21;
  uint *puVar16;
  uint *puVar17;
  CVector3i *pCVar18;
  int *piVar22;
  byte bVar19;
  float10 fVar20;
  double dVar21;
  int aiStackY_10d8 [1006];
  uint local_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  int local_f0 [4];
  uint uStack_e0;
  uint uStack_dc;
  uint local_d8;
  uint uStack_d4;
  uint uStack_d0;
  uint local_cc;
  uint uStack_c8;
  uint uStack_c4;
  CVector3f local_c0;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  CVector3f local_9c;
  CVector3i *local_90;
  int local_8c;
  int local_88;
  int local_84;
  int local_80;
  CKeyFramedModel *local_7c;
  uint local_78;
  CKeyFramedModel *local_74;
  int local_70;
  int local_6c;
  int local_68;
  uint *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  uint *local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CVector3i *local_24;
  int local_20;
  float local_1c;
  uint *local_18;
  float fVar6;
  float fVar7;
  float fVar8;
  int *piVar1;
  uchar *puVar2;
  bool bVar4;
  float fVar5;
  uint uVar3;
  
  bVar19 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar20 = (float10)fcos((float10)angle_threshold_radians);
    bVar5 = 2000 < this_ptr->poly_count;
    if (bVar5) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
    }
    local_84 = 0;
    if (0 < this_ptr->part_count) {
      local_7c = this_ptr;
      local_50 = (uint *)0x0;
      do {
        puVar13 = (uint *)(local_7c->part_list[0].poly_count + (int)local_50);
        if (this_ptr->poly_count < (int)puVar13) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        if ((int)local_50 < (int)puVar13) {
          local_6c = (int)local_50 * 0x48;
          local_70 = (int)local_50 << 2;
          do {
            iVar18 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base)
                           .base.type + local_6c;
            if (*(int *)(iVar18 + 4) == 3) {
              if ((bVar5) && ((char)local_50 == '\0')) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)(int)local_50,(float)this_ptr->poly_count);
              }
              local_48 = (int)local_50 + 1;
              if (local_48 < (int)puVar13) {
                local_58 = local_48 * 0x48;
                local_5c = local_48 * 4;
                do {
                  iVar19 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))
                                 ->base).base.type + local_58;
                  if (((*(int *)(iVar19 + 4) == 3) &&
                      (*(int *)(local_70 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_5c + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar3 = this_ptr->env_map_opac_list, puVar3 == (uchar *)0x0 ||
                      (*(uchar *)((int)local_50 + (int)puVar3) == puVar3[local_48])))) {
                    local_3c = 0;
                    local_44 = 0;
                    local_4c = -1;
                    local_40 = iVar18;
                    do {
                      iVar20 = 0;
                      iVar21 = 0;
                      iVar16 = iVar19;
                      do {
                        if ((*(int *)(iVar16 + 0x18) == *(int *)(local_40 + 0x18)) &&
                           (*(int *)(iVar18 + *(int *)((int)g_TriangleMatchTableA + local_44) * 0xc
                                    + 0x18) ==
                            *(int *)(iVar19 + *(int *)((int)g_TriangleMatchTableB + iVar20) * 0xc +
                                    0x18))) {
                          local_4c = local_3c;
                          local_54 = iVar21;
                          break;
                        }
                        iVar20 = iVar20 + 4;
                        iVar21 = iVar21 + 1;
                        iVar16 = iVar16 + 0xc;
                      } while (iVar20 < 0xc);
                      local_44 = local_44 + 4;
                      local_3c = local_3c + 1;
                      local_40 = local_40 + 0xc;
                    } while (local_3c < 3);
                    if (-1 < local_4c) {
                      iVar16 = local_4c * 0xc + iVar18;
                      local_f0[0] = *(int *)(iVar16 + 0x18);
                      local_f0[1] = *(uint *)(iVar16 + 0x1c);
                      local_f0[2] = *(uint *)(iVar16 + 0x20);
                      iVar16 = g_TriangleMatchTableA[local_54] * 0xc + iVar19;
                      local_f0[3] = *(uint *)(iVar16 + 0x18);
                      uStack_e0 = *(uint *)(iVar16 + 0x1c);
                      uStack_dc = *(uint *)(iVar16 + 0x20);
                      iVar16 = g_TriangleMatchTableA[local_4c] * 0xc + iVar18;
                      local_d8 = *(uint *)(iVar16 + 0x18);
                      uStack_d4 = *(uint *)(iVar16 + 0x1c);
                      uStack_d0 = *(uint *)(iVar16 + 0x20);
                      iVar16 = g_TriangleMatchTableB[local_4c] * 0xc + iVar18;
                      local_cc = *(uint *)(iVar16 + 0x18);
                      uStack_c8 = *(uint *)(iVar16 + 0x1c);
                      uStack_c4 = *(uint *)(iVar16 + 0x20);
                      local_38 = 0;
                      if (this_ptr->frame_count < 1) {
LAB_0047bb1b:
                        piVar22 = (int *)(iVar18 + 0x1c + (uint)bVar19 * -8);
                        *(int *)(iVar18 + 0x18) = local_f0[0];
                        *piVar22 = local_f0[(uint)bVar19 * -2 + 1];
                        piVar22[(uint)bVar19 * -2 + 1] =
                             local_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 2];
                        piVar22 = (int *)(iVar18 + 0x28 + (uint)bVar19 * -8);
                        *(int *)(iVar18 + 0x24) = local_f0[3];
                        *piVar22 = local_f0[(uint)bVar19 * -2 + 4];
                        piVar22[(uint)bVar19 * -2 + 1] =
                             local_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 5];
                        piVar22 = (int *)(iVar18 + 0x34 + (uint)bVar19 * -8);
                        *(uint *)(iVar18 + 0x30) = local_d8;
                        *piVar22 = local_f0[(uint)bVar19 * -2 + 7];
                        piVar22[(uint)bVar19 * -2 + 1] =
                             local_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 8];
                        piVar22 = (int *)(iVar18 + 0x40 + (uint)bVar19 * -8);
                        *(uint *)(iVar18 + 0x3c) = local_cc;
                        *piVar22 = local_f0[(uint)bVar19 * -2 + 10];
                        piVar22[(uint)bVar19 * -2 + 1] =
                             local_f0[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 0xb];
                        *(uint *)(iVar18 + 4) = 4;
                        *(uint *)(iVar18 + 0x14) = 0;
                        uVar3 = *(uint *)(iVar18 + 0x14);
                        *(uint *)(iVar18 + 0x10) = uVar3;
                        *(uint *)(iVar18 + 0xc) = uVar3;
                        *(uint *)(iVar18 + 8) = uVar3;
                        *(uint *)(iVar19 + 4) = 0;
                        piVar1 = &local_7c->part_list[0].poly_count;
                        *piVar1 = *piVar1 + -1;
                        break;
                      }
                      while( true ) {
                        pCVar10 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_c0,local_38,local_48);
                        pCVar11 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                            (this_ptr,&local_9c,local_38,(int)local_50);
                        if (pCVar11->z * pCVar10->z +
                            pCVar11->x * pCVar10->x + pCVar11->y * pCVar10->y < (float)fVar20)
                        break;
                        iVar16 = local_38 * this_ptr->vertex_count;
                        dVar1 = 0.0;
                        local_20 = 0;
                        pCVar4 = this_ptr->vertex_list;
                        iVar20 = 2;
                        iVar21 = 0;
                        do {
                          uStack_104 = (uint)((ulonglong)dVar1 >> 0x20);
                          local_108 = SUB84(__BITCAST_UINT64(dVar1),0);
                          pCVar17 = pCVar4 + iVar16 + *(int *)((int)local_f0 + local_20);
                          pCVar13 = pCVar4 + iVar16 + local_f0[((iVar21 + 1) % 4) * 3];
                          pCVar18 = pCVar4 + iVar16 + local_f0[(iVar20 % 4) * 3];
                          fVar5 = (float)(pCVar17->x - pCVar13->x);
                          fVar6 = (float)(pCVar17->y - pCVar13->y);
                          fVar8 = (float)(pCVar17->z - pCVar13->z);
                          fVar7 = SQRT(fVar8 * fVar8 + fVar5 * fVar5 + fVar6 * fVar6);
                          if (fVar7 <= 0.0) {
                            local_a4 = 0.0;
                            local_a8 = 0.0;
                            local_a0 = 0.0;
                          }
                          else {
                            fVar9 = 1.0 / fVar7;
                            local_a8 = fVar5 * fVar9;
                            local_a4 = fVar6 * fVar9;
                            local_a0 = fVar8 * fVar9;
                          }
                          fVar9 = (float)(pCVar18->x - pCVar13->x);
                          fVar10 = (float)(pCVar18->y - pCVar13->y);
                          fVar12 = (float)(pCVar18->z - pCVar13->z);
                          fVar11 = SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar10 * fVar10);
                          if (fVar11 <= 0.0) {
                            local_b0 = 0.0;
                            local_b4 = 0.0;
                            local_ac = 0.0;
                          }
                          else {
                            fVar11 = 1.0 / fVar11;
                            local_b4 = fVar9 * fVar11;
                            local_b0 = fVar10 * fVar11;
                            local_ac = fVar12 * fVar11;
                          }
                          dVar1 = (double)(local_a0 * local_ac +
                                          local_a8 * local_b4 + local_a4 * local_b0);
                          if (dVar1 < 1.0) {
                            if (-1 < dVar1) {
                              dVar21 = acos(dVar1);
                              uStack_104 = SUB84(__BITCAST_UINT64(dVar21),0);
                              local_100 = (uint)((ulonglong)dVar21 >> 0x20);
                            }
                            else {
                              local_100 = 0x54411744;
                              uStack_fc = 0x400921fb;
                            }
                          }
                          else {
                            local_100 = 0;
                            uStack_fc = 0;
                          }
                          iVar20 = iVar20 + 1;
                          iVar21 = iVar21 + 1;
                          dVar1 = __BITCAST_DOUBLE(CONCAT44(uStack_104,local_108)) +
                                  __BITCAST_DOUBLE(CONCAT44(uStack_fc,local_100));
                          local_20 = local_20 + 0xc;
                        } while (iVar21 < 4);
                        if ((dVar1 < 6.2744586607402804) || (6.2919119532597199 < dVar1)) break;
                        local_38 = local_38 + 1;
                        if (this_ptr->frame_count <= local_38) goto LAB_0047bb1b;
                      }
                    }
                  }
                  local_58 = local_58 + 0x48;
                  local_5c = local_5c + 4;
                  local_48 = local_48 + 1;
                } while (local_48 < (int)puVar13);
              }
            }
            local_6c = local_6c + 0x48;
            local_70 = local_70 + 4;
            local_50 = (uint *)((int)local_50 + 1);
          } while ((int)local_50 < (int)puVar13);
        }
        local_7c = (CKeyFramedModel *)(local_7c->model_filename + 8);
        local_84 = local_84 + 1;
        local_50 = puVar13;
      } while (local_84 < this_ptr->part_count);
    }
    iVar9 = 0;
    iVar14 = 0;
    if (0 < this_ptr->poly_count) {
      local_80 = 0;
      local_8c = 0;
      local_88 = 0;
      iVar15 = 0;
      do {
        puVar13 = (uint *)
                  ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).
                         base.type + local_88);
        if (2 < (int)puVar13[1]) {
          if (iVar14 < iVar9) {
            puVar17 = (uint *)
                      ((int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->
                             base).base.type + local_8c);
            for (iVar12 = 0x12; iVar12 != 0; iVar12 = iVar12 + -1) {
              puVar17 = puVar17 + (uint)bVar19 * -2 + 1;
              *puVar17 = *puVar13;
              puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
              puVar17 = puVar17;
            }
            *(uint *)((int)this_ptr->poly_texture_index_list + iVar15) =
                 *(uint *)(local_80 + (int)this_ptr->poly_texture_index_list);
            puVar2 = this_ptr->env_map_opac_list;
            if (puVar2 != (uchar *)0x0) {
              puVar2[iVar14] = puVar2[iVar9];
            }
          }
          iVar14 = iVar14 + 1;
          local_8c = local_8c + 0x48;
          iVar15 = iVar15 + 4;
        }
        iVar9 = iVar9 + 1;
        local_88 = local_88 + 0x48;
        local_80 = local_80 + 4;
      } while (iVar9 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar14;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (bVar5) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
