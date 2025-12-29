// Name: core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
// Address: 0047b1e0
// Address Range: [[0047b1e0, 0047bbb4]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0(CKeyFramedModel * this_ptr, float angle_threshold_radians)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_mergeTrianglesToQuads_FUN_0047b1e0
          (CKeyFramedModel *this_ptr,float angle_threshold_radians)

{
  double x;
  uchar *puVar1;
  uint uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int iVar7;
  CVector3f *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  int iVar11;
  float unaff_EBX;
  int iVar12;
  BADSPACEBASE *in_ESP;
  uint *puVar13;
  int *piVar14;
  uint *puVar15;
  int *piVar16;
  float fVar17;
  byte bVar18;
  float10 fVar19;
  int aiStackY_10c8 [1005];
  double in_stack_ffffff08;
  double local_f0;
  int aiStack_e0 [6];
  uint uStack_c8;
  uint uStack_bc;
  CVector3f local_b0;
  float local_a4;
  float local_a0;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float local_90;
  CVector3f local_88;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  CKeyFramedModel *local_6c;
  int local_68;
  CKeyFramedModel *local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
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
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int iStack_14;
  
  bVar18 = 0;
  core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
  if ((0 < this_ptr->poly_count) && (0 < this_ptr->frame_count)) {
    core_dmodel_cpp_CKeyFramedModel_removeDegeneratePolygons_FUN_0047bdb0(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeDuplicatePolygons_FUN_0047bbc0(this_ptr);
    fVar19 = (float10)fcos((float10)angle_threshold_radians);
    fVar17 = (float)fVar19;
    local_6c = (CKeyFramedModel *)0x0;
    if (2000 < this_ptr->poly_count) {
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (g_CEditorToolsPtr,"Reducing polygons...");
      local_68 = 1;
    }
    local_74 = 0;
    if (0 < this_ptr->part_count) {
      local_6c = this_ptr;
      iVar7 = 0;
      do {
        local_54 = local_6c->part_list[0].poly_count + iVar7;
        if (this_ptr->poly_count < local_54) {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x986;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Vertex reducer bug or CKeyFramedModel corruption!");
        }
        local_40 = iVar7;
        if (iVar7 < local_54) {
          local_64 = local_6c;
          local_5c = iVar7 * 0x48;
          local_60 = iVar7 << 2;
          do {
            local_24 = local_5c + (int)this_ptr->poly_vert_list;
            if (*(int *)(local_24 + 4) == 3) {
              if ((local_68 != 0) && ((char)local_40 == '\0')) {
                shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                          (g_CEditorToolsPtr,(float)local_40,(float)this_ptr->poly_count);
              }
              local_38 = local_40 + 1;
              if (local_38 < local_54) {
                local_58 = local_60;
                local_48 = local_38 * 0x48;
                local_4c = local_38 * 4;
                do {
                  local_18 = local_48 + (int)this_ptr->poly_vert_list;
                  if (((*(int *)(local_18 + 4) == 3) &&
                      (*(int *)(local_58 + (int)this_ptr->poly_texture_index_list) ==
                       *(int *)(local_4c + (int)this_ptr->poly_texture_index_list))) &&
                     ((puVar1 = this_ptr->env_map_opac_list, puVar1 == (uchar *)0x0 ||
                      (puVar1[local_40] == puVar1[local_38])))) {
                    local_2c = 0;
                    local_34 = 0;
                    local_3c = -1;
                    local_30 = local_24;
                    do {
                      iVar11 = 0;
                      local_1c = local_34;
                      iVar12 = 0;
                      local_20 = local_30;
                      iVar7 = local_18;
                      do {
                        if ((*(int *)(iVar7 + 0x18) == *(int *)(local_30 + 0x18)) &&
                           (*(int *)(local_24 +
                                     *(int *)((int)g_TriangleMatchTableA + local_34) * 0xc + 0x18)
                            == *(int *)(local_18 +
                                        *(int *)((int)g_TriangleMatchTableB + iVar11) * 0xc + 0x18))
                           ) {
                          local_44 = iVar12;
                          local_3c = local_2c;
                          break;
                        }
                        iVar11 = iVar11 + 4;
                        iVar12 = iVar12 + 1;
                        iVar7 = iVar7 + 0xc;
                      } while (iVar11 < 0xc);
                      iVar11 = local_3c;
                      iVar7 = local_44;
                      local_2c = local_2c + 1;
                      local_34 = local_34 + 4;
                      local_30 = local_30 + 0xc;
                    } while (local_2c < 3);
                    if (-1 < local_3c) {
                      iVar12 = local_3c * 0xc + local_24;
                      piVar14 = (int *)(iVar12 + 0x1c + (uint)bVar18 * -8);
                      aiStack_e0[0] = *(int *)(iVar12 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 1] = *piVar14;
                      iVar10 = local_24;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar12 = g_TriangleMatchTableA[iVar11];
                      iVar7 = g_TriangleMatchTableA[iVar7] * 0xc + local_18;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar18 * -8);
                      aiStack_e0[3] = *(uint *)(iVar7 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 4] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar7 = iVar12 * 0xc + iVar10;
                      piVar14 = (int *)(iVar7 + 0x1c + (uint)bVar18 * -8);
                      uStack_c8 = *(uint *)(iVar7 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 7] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      iVar10 = g_TriangleMatchTableB[iVar11] * 0xc + iVar10;
                      local_50 = 1;
                      piVar14 = (int *)(iVar10 + 0x1c + (uint)bVar18 * -8);
                      uStack_bc = *(uint *)(iVar10 + 0x18);
                      aiStack_e0[(uint)bVar18 * -2 + 10] = *piVar14;
                      aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xb] =
                           piVar14[(uint)bVar18 * -2 + 1];
                      local_28 = 0;
                      if (0 < this_ptr->frame_count) {
                        do {
                          pCVar8 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&local_b0,local_28,local_38);
                          pCVar9 = core_dmodel_cpp_CKeyFramedModel_calculateTriangleNormal_FUN_0047c080
                                             (this_ptr,&local_88,local_24,local_3c);
                          if (pCVar9->z * pCVar8->z + pCVar9->x * pCVar8->x + pCVar9->y * pCVar8->y
                              < unaff_EBX) goto LAB_0047b55a;
                          iVar7 = 2;
                          iVar11 = 0;
                          do {
                            local_88.z = (float)(iStack_14 +
                                                *(int *)((int)aiStack_e0 + (int)fVar17) * 0xc);
                            piVar14 = (int *)(aiStack_e0[((iVar11 + 1) % 4) * 3] * 0xc + iStack_14);
                            piVar16 = (int *)(aiStack_e0[(iVar7 % 4) * 3] * 0xc + iStack_14);
                            fVar3 = (float)(*(int *)local_88.z - *piVar14);
                            fVar4 = (float)(*(int *)((int)local_88.z + 4) - piVar14[1]);
                            fVar6 = (float)(*(int *)((int)local_88.z + 8) - piVar14[2]);
                            fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
                            if (fVar5 <= 0.0) {
                              fStack_94 = 0.0;
                              fStack_98 = 0.0;
                              local_90 = 0.0;
                            }
                            else {
                              fVar5 = 1.0 / fVar5;
                              fStack_98 = fVar3 * fVar5;
                              fStack_94 = fVar4 * fVar5;
                              local_90 = fVar6 * fVar5;
                            }
                            fVar3 = (float)(*piVar16 - *piVar14);
                            fVar4 = (float)(piVar16[1] - piVar14[1]);
                            fVar6 = (float)(piVar16[2] - piVar14[2]);
                            fVar5 = SQRT(fVar6 * fVar6 + fVar3 * fVar3 + fVar4 * fVar4);
                            if (fVar5 <= 0.0) {
                              local_a0 = 0.0;
                              local_a4 = 0.0;
                              local_9c = 0.0;
                            }
                            else {
                              fVar5 = 1.0 / fVar5;
                              local_a4 = fVar3 * fVar5;
                              local_a0 = fVar4 * fVar5;
                              local_9c = fVar6 * fVar5;
                            }
                            x = (double)(local_90 * local_9c +
                                        fStack_98 * local_a4 + fStack_94 * local_a0);
                            if (x < 1.0) {
                              if (-1 < x) {
                                local_f0 = crt_math_c_acos_FUN_00600162(x);
                              }
                              else {
                                local_f0 = 3.1415926535;
                              }
                            }
                            else {
                              local_f0 = 0.0;
                            }
                            iVar7 = iVar7 + 1;
                            iVar11 = iVar11 + 1;
                            in_stack_ffffff08 = in_stack_ffffff08 + local_f0;
                            fVar17 = (float)((int)fVar17 + 0xc);
                          } while (iVar11 < 4);
                          if ((in_stack_ffffff08 < 6.2744586607402804) ||
                             (6.2919119532597199 < in_stack_ffffff08)) goto LAB_0047b55a;
                          local_28 = local_28 + 1;
                        } while (local_28 < this_ptr->frame_count);
                      }
                      if (local_50 != 0) {
                        piVar14 = (int *)(local_24 + 0x1c + (uint)bVar18 * -8);
                        *(int *)(local_24 + 0x18) = aiStack_e0[0];
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 1];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 2];
                        piVar14 = (int *)(local_24 + 0x28 + (uint)bVar18 * -8);
                        *(int *)(local_24 + 0x24) = aiStack_e0[3];
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 4];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 5];
                        piVar14 = (int *)(local_24 + 0x34 + (uint)bVar18 * -8);
                        *(uint *)(local_24 + 0x30) = uStack_c8;
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 7];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 8];
                        piVar14 = (int *)(local_24 + 0x40 + (uint)bVar18 * -8);
                        *(uint *)(local_24 + 0x3c) = uStack_bc;
                        *piVar14 = aiStack_e0[(uint)bVar18 * -2 + 10];
                        piVar14[(uint)bVar18 * -2 + 1] =
                             aiStack_e0[(uint)bVar18 * -2 + (uint)bVar18 * -2 + 0xb];
                        *(uint *)(local_24 + 4) = 4;
                        *(uint *)(local_24 + 0x14) = 0;
                        uVar2 = *(uint *)(local_24 + 0x14);
                        *(uint *)(local_24 + 0x10) = uVar2;
                        *(uint *)(local_24 + 0xc) = uVar2;
                        *(uint *)(local_24 + 8) = uVar2;
                        *(uint *)(local_18 + 4) = 0;
                        piVar14 = &local_64->part_list[0].poly_count;
                        *piVar14 = *piVar14 + -1;
                        break;
                      }
                    }
                  }
LAB_0047b55a:
                  local_38 = local_38 + 1;
                  local_48 = local_48 + 0x48;
                  local_4c = local_4c + 4;
                } while (local_38 < local_54);
              }
            }
            local_40 = local_40 + 1;
            local_5c = local_5c + 0x48;
            local_60 = local_60 + 4;
          } while (local_40 < local_54);
        }
        local_74 = local_74 + 1;
        local_6c = (CKeyFramedModel *)(local_6c->model_filename + 8);
        iVar7 = local_54;
      } while (local_74 < this_ptr->part_count);
    }
    iVar7 = 0;
    iVar11 = 0;
    if (0 < this_ptr->poly_count) {
      local_70 = 0;
      local_7c = 0;
      local_78 = 0;
      iVar12 = 0;
      do {
        puVar13 = (uint *)(local_78 + (int)this_ptr->poly_vert_list);
        if (2 < (int)puVar13[1]) {
          if (iVar11 < iVar7) {
            puVar15 = (uint *)(local_7c + (int)this_ptr->poly_vert_list);
            for (iVar10 = 0x12; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar15 = *puVar13;
              puVar13 = puVar13 + (uint)bVar18 * -2 + 1;
              puVar15 = puVar15 + (uint)bVar18 * -2 + 1;
            }
            *(uint *)((int)this_ptr->poly_texture_index_list + iVar12) =
                 *(uint *)(local_70 + (int)this_ptr->poly_texture_index_list);
            puVar1 = this_ptr->env_map_opac_list;
            if (puVar1 != (uchar *)0x0) {
              puVar1[iVar11] = puVar1[iVar7];
            }
          }
          iVar11 = iVar11 + 1;
          local_7c = local_7c + 0x48;
          iVar12 = iVar12 + 4;
        }
        iVar7 = iVar7 + 1;
        local_78 = local_78 + 0x48;
        local_70 = local_70 + 4;
      } while (iVar7 < this_ptr->poly_count);
    }
    this_ptr->poly_count = iVar11;
    core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_removeUnusedVertices_FUN_0047aa30(this_ptr);
    core_dmodel_cpp_CKeyFramedModel_calcNormals_FUN_00477e60(this_ptr);
    if (local_5c != 0) {
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      return;
    }
  }
  return;
}
