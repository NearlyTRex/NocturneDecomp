// Name: core_skeledit.cpp_FUN_0058c190
// Address: 0058c190
// Address Range: [[0058c190, 0058d782]]
// Convention: unknown
// Signature: undefined4 core_skeledit_cpp_FUN_0058c190(void)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

uint core_skeledit_cpp_FUN_0058c190(void)

{
  char cVar1;
  SVert *pSVar2;
  uint uVar3;
  float fVar4;
  STextureSlot *pSVar5;
  CBoneStructure *this_ptr;
  CBoneStructure *pCVar6;
  int iVar7;
  _FILE *file;
  _FILE *file_ptr;
  int iVar8;
  uint uVar9;
  CDeformableModel *pCVar10;
  uint *puVar12;
  ushort *puVar13;
  int iVar14;
  uint *puVar15;
  CMatrix3x4f *pCVar16;
  char *pcVar17;
  ushort *puVar18;
  STextureSet *pSVar19;
  char *pcVar20;
  float *pfVar21;
  char *pcVar22;
  SLodSubmesh *pSVar23;
  byte bVar24;
  CDeformableModel *in_stack_00000004;
  CDeformableModel *in_stack_00000008;
  CDeformableModel *in_stack_ffff5dd8;
  uint in_stack_ffff5ddc;
  uint in_stack_ffff5de0;
  uint in_stack_ffff5de4;
  uint in_stack_ffff5de8;
  float afStack_a1d0 [3279];
  int aiStack_6e94 [4701];
  float local_2520 [1200];
  CPickList local_1260;
  char local_eb8 [400];
  char local_d28 [260];
  char local_c24 [260];
  char local_b20 [260];
  char local_a1c [260];
  char local_918 [256];
  char local_818 [256];
  char local_718 [256];
  char local_618 [256];
  char local_518 [256];
  char local_418 [200];
  CLodMesh local_350;
  CLodMesh local_2dc;
  CLodMesh local_268;
  CLodMesh local_1f4;
  char local_180 [100];
  CMatrix3x4f local_11c;
  uint local_ec;
  int local_d8 [9];
  byte local_b4 [28];
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  int local_88;
  CDeformableModel *local_84;
  int local_80;
  CDeformableModel *local_7c;
  STextureSet *local_78;
  int local_74;
  float *local_70;
  STextureSet *local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  CDeformableModel *local_54;
  int local_50;
  int local_4c;
  int local_48;
  CDeformableModel *local_44;
  int local_40;
  STextureSet *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CBoneStructure *local_24;
  byte local_20 [4];
  uint local_1c;
  char local_18 [4];
  char local_14 [4];
  int *piVar11;
  
  bVar24 = 0;
  __STK(0xa248);
  DAT_03670650 = 0;
  pCVar6 = (CBoneStructure *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ((char *)in_stack_00000008,(char *)0x0,"rt",
                      "..\\core\\skeledit.cpp",0x60a);
  local_24 = pCVar6;
  if (pCVar6 == (CBoneStructure *)0x0) {
    sprintf(&DAT_03670650,"Can't open %s",in_stack_00000008);
    return 0;
  }
  iVar14 = 1;
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(in_stack_00000004);
  do {
    iVar7 = _fgetc((_FILE *)pCVar6);
    this_ptr = local_24;
    if (iVar7 < 0) break;
  } while ((iVar7 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
  _fscanf((_FILE *)local_24,"%d\n",local_20);
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (this_ptr,(_FILE *)local_b4,&in_stack_ffff5dd8->num_lods);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
            (this_ptr,(_FILE *)0x0,(int)in_stack_ffff5dd8);
  core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_00000004);
  core_skeledit_cpp_FUN_0058b160();
  iVar14 = core_skeledit_cpp_FUN_0058b200();
  if (iVar14 == 0) {
    sprintf
              (&DAT_03670650,"Heirarchy in %s does not match that in skeleton %s",in_stack_00000008,
               in_stack_00000004->model_name);
    if (*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name != 2
       ) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1260);
      sprintf(local_418,"Display %s",in_stack_00000008);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base,local_418);
      sprintf(local_418,"Display %s",in_stack_00000004->model_name)
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base,local_418);
      iVar14 = 0;
      while( true ) {
        iVar14 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_1260,&DAT_03670650,iVar14,0);
        if (iVar14 < 0) break;
        if (iVar14 == 0) {
          core_skeledit_cpp_FUN_0058afe0();
        }
        if (iVar14 == 1) {
          core_skeledit_cpp_FUN_0058afe0();
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1260,0,(uint)in_stack_ffff5dd8,in_stack_ffff5ddc,in_stack_ffff5de0,
                 in_stack_ffff5de4,in_stack_ffff5de8);
    }
    return 0;
  }
  iVar14 = 1;
  do {
    iVar7 = _fgetc((_FILE *)this_ptr);
    if (iVar7 < 0) break;
  } while ((iVar7 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
  iVar14 = _fscanf((_FILE *)local_24,"%d,%d,%d\n",local_b4 + 4,local_b4 + 8,local_b4 + 0xc);
  if (iVar14 != 3) {
LAB_0058c613:
    sprintf(&DAT_03670650,"%s is corrupt!",in_stack_00000008);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)local_24,"..\\core\\skeledit.cpp",0x647);
    return 0;
  }
  core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
            (in_stack_00000004,1,1,local_b4._4_4_,1);
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_00000004,0,local_b4._8_4_,local_b4._12_4_,0);
  iVar14 = core_skeledit_cpp_FUN_0058b8e0();
  if (((iVar14 == 0) || (iVar14 = core_skeledit_cpp_FUN_0058b9b0(), iVar14 == 0)) ||
     (iVar14 = core_skeledit_cpp_FUN_0058bc40(), iVar14 == 0)) goto LAB_0058c613;
  if (in_stack_00000008->texture_sets[0].textures[4].texture_variants[1].texture_name[0] == '\0') {
    core_skeledit_cpp_FUN_0058f790();
  }
  else {
    iVar14 = core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
                       (in_stack_00000008);
    if (iVar14 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(in_stack_ffff5dd8);
  core_skeledit_cpp_FUN_0058aeb0();
  core_skeledit_cpp_FUN_0058dde0();
  local_28 = 0;
  if (0 < (int)in_stack_ffff5dd8) {
    local_70 = afStack_a1d0;
    iVar14 = 0;
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_70,&local_11c);
      pfVar21 = (float *)((int)local_2520 + iVar14);
      iVar14 = iVar14 + 0x30;
      pCVar16 = &local_11c;
      for (iVar7 = 0xc; iVar7 != 0; iVar7 = iVar7 + -1) {
        *pfVar21 = pCVar16->m[0].w;
        pCVar16 = (CMatrix3x4f *)((int)pCVar16 + ((uint)bVar24 * -2 + 1) * 4);
        pfVar21 = pfVar21 + (uint)bVar24 * -2 + 1;
      }
      local_28 = local_28 + 1;
      local_70 = &((CMatrix3x4f *)((int)local_70 + 0x60))->m[2].x;
    } while (local_28 < (int)in_stack_ffff5dd8);
  }
  splitpath
            ((char *)in_stack_00000008,local_14,local_718,(char *)0x0,(char *)0x0);
  makepath(local_d28,local_14,local_718,(char *)0x0,(char *)0x0);
  if ((*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name == 0)
     && (iVar14 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Copy textures from a directory (empty string if textures are already in art directory.)",local_d28,0x104,1
                            ), iVar14 == 0)) {
    return 0;
  }
  if (local_d28[0] != '\0') {
    splitpath(local_d28,local_18,local_618,local_818,local_918);
    makepath(local_518,(char *)0x0,local_618,local_818,local_918);
    local_2c = 0;
    if (0 < in_stack_00000004->num_texture_sets) {
      local_6c = in_stack_00000004->texture_sets;
      do {
        local_98 = 0;
        if (0 < in_stack_00000004->num_textures) {
          pcVar17 = local_6c->textures[0].texture_variants[0].texture_name;
          do {
            splitpath
                      (pcVar17,(char *)0x0,(char *)0x0,local_818,(char *)0x0);
            makepath(local_a1c,local_18,local_518,local_818,"tga");
            makepath
                      (local_c24,(char *)0x0,"art",local_818,"tga");
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",0x6a5
                             );
            if ((file == (_FILE *)0x0) &&
               (pcVar22 = strstr(local_818,"gore"),
               pcVar22 != (char *)0x0)) {
              makepath
                        (local_a1c,"t:","\\enemy",local_818,"tga");
              file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",
                                0x6a9);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Copying %s -> %s");
            if (file == (_FILE *)0x0) {
              if (*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].
                          texture_name != 2) {
                sprintf
                          (local_eb8,"Can't open %s.  Keep going anyway?",local_a1c);
                iVar14 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                   (g_CEditorToolsPtr,local_eb8);
                if (iVar14 == 0) {
                  return 0;
                }
              }
            }
            else {
              file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (local_c24,(char *)0x0,"wb","..\\core\\skeledit.cpp"
                                    ,0x6b5);
              if (file_ptr == (_FILE *)0x0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x6b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_c24);
              }
              while (iVar14 = _fgetc(file), -1 < iVar14) {
                _fputc(iVar14,file_ptr);
              }
              if ((file->_flag & 0x20) != 0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x6bc;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error reading %s",local_a1c);
              }
              if ((file_ptr->_flag & 0x20) != 0) {
                g_CurrentLineNumber = 0x6bd;
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                core_main_c_displayErrorAndQuit_FUN_00506f10("Error writing %s",local_c24);
              }
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x6be);
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\skeledit.cpp",0x6bf);
            }
            pcVar17 = pcVar17 + 0x48;
            local_98 = local_98 + 1;
          } while (local_98 < in_stack_00000004->num_textures);
        }
        local_6c = local_6c + 1;
        local_2c = local_2c + 1;
      } while (local_2c < in_stack_00000004->num_texture_sets);
    }
  }
  local_b4._16_4_ = 2;
  iVar14 = *(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name;
  if (iVar14 == 1) {
    iVar14 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                       (g_CEditorToolsPtr,"Enter number of 256x256 crams",
                        (int *)(local_b4 + 0x10),1,1,8,1);
    if (iVar14 == 0) {
      return 0;
    }
    pcVar17 = "$$TEST";
LAB_0058c4df:
    pcVar22 = local_b20;
    do {
      cVar1 = *pcVar17;
      *pcVar22 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar22[1] = cVar1;
      pcVar22 = pcVar22 + 2;
    } while (cVar1 != '\0');
  }
  else {
    if (iVar14 == 2) {
      pcVar17 = "$$BATCH";
      goto LAB_0058c4df;
    }
    iVar14 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                       (g_CEditorToolsPtr,"Enter number of 256x256 crams",
                        (int *)(local_b4 + 0x10),1,1,8,1);
    if (iVar14 == 0) {
      return 0;
    }
    splitpath
              ((char *)in_stack_00000008,(char *)0x0,(char *)0x0,local_b20,(char *)0x0);
    shape_design_c_initializeTextureManager_FUN_0046a880(1);
    shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
    iVar14 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_b4._16_4_);
    if (1 < in_stack_00000004->num_texture_sets) {
      iVar14 = iVar14 + -1;
    }
    local_b20[iVar14] = '\0';
    iVar14 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,"Enter crammed texture base name (no path or extension)",local_b20,iVar14 + 1,1
                       );
    if (iVar14 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_FUN_0058de70();
  local_b4._20_4_ = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_1f4);
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (&local_1f4,in_stack_00000004->vertex_count[0],
             in_stack_00000004->tri_count[0] + in_stack_00000004->cap_tri_count[0],
             in_stack_00000004->num_textures);
  pCVar6 = local_24;
  iVar14 = 1;
  do {
    iVar7 = _fgetc((_FILE *)pCVar6);
    if (iVar7 < 0) break;
  } while ((iVar7 != 10) || (iVar14 = iVar14 + -1, 0 < iVar14));
  iVar14 = 0;
  if (0 < in_stack_00000004->vertex_count[0]) {
    local_68 = 0;
    local_64 = 0;
    do {
      pSVar2 = in_stack_00000004->vertex_data_ptr[0];
      pcVar22 = (local_1f4.vertex_data)->lod_workspace + local_64 + -0x10;
      *(uint *)pcVar22 = *(uint *)((int)pSVar2->bone_weights + local_68 + 0xc);
      *(uint *)(pcVar22 + 4) = *(uint *)((int)pSVar2->bone_weights + local_68 + 0x10);
      *(uint *)(pcVar22 + 8) = *(uint *)((int)pSVar2->bone_weights + local_68 + 0x14);
      pcVar17 = pcVar22;
      do {
        pcVar20 = pcVar17 + 4;
        pcVar17[0xc] = '\0';
        pcVar17[0xd] = '\0';
        pcVar17[0xe] = '\0';
        pcVar17[0xf] = '\0';
        pcVar17 = pcVar20;
      } while (pcVar20 != pcVar22 + 400);
      iVar7 = _fscanf((_FILE *)local_24,"%d\n",&local_94);
      if (((iVar7 != 1) || (local_94 < 1)) || ((int)in_stack_ffff5dd8 < local_94)) {
LAB_0058c601:
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4);
        goto LAB_0058c613;
      }
      iVar7 = 0;
      if (0 < local_94) {
        do {
          iVar8 = _fscanf((_FILE *)local_24,"%d,%f\n",&local_90,&local_8c);
          if (iVar8 != 2) goto LAB_0058c601;
          local_90 = aiStack_6e94[local_90];
          iVar7 = iVar7 + 1;
          *(float *)(pcVar22 + (local_90 + 3) * 4) =
               *(float *)(pcVar22 + (local_90 + 3) * 4) + local_8c;
        } while (iVar7 < local_94);
      }
      iVar14 = iVar14 + 1;
      local_68 = local_68 + 0x34;
      local_64 = local_64 + 0x4c4;
    } while (iVar14 < in_stack_00000004->vertex_count[0]);
  }
  iVar14 = 0;
  local_30 = 0;
  if (0 < in_stack_00000004->num_parts) {
    local_54 = in_stack_00000004;
    do {
      local_84 = local_54;
      local_60 = iVar14 * 4;
      local_5c = iVar14 * 0x12;
      local_58 = iVar14 * 0x8c;
      local_88 = 0;
      if (0 < local_54->parts[0].tri_counts[0]) {
        do {
          puVar15 = (uint *)((int)(local_1f4.tri_data)->attribute_indices + local_58);
          puVar13 = (ushort *)
                    ((int)&(in_stack_00000004->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    local_5c);
          puVar15[1] = local_30;
          uVar3 = *(uint *)((int)in_stack_00000004->index_data_ptr[0] + local_60);
          puVar15[2] = 0;
          puVar15[3] = 0xfffe7961;
          puVar18 = puVar13 + 3;
          *puVar15 = uVar3;
          fVar4 = (float)0.00390625;
          puVar12 = puVar15;
          do {
            puVar15[4] = (uint)*puVar13;
            puVar12[7] = (float)puVar13[3] * fVar4;
            local_1c = (uint)puVar13[6];
            puVar15 = puVar15 + 1;
            puVar13 = puVar13 + 1;
            puVar12[8] = (float)local_1c * fVar4;
            puVar12 = puVar12 + 2;
          } while (puVar13 != puVar18);
          iVar14 = iVar14 + 1;
          local_60 = local_60 + 4;
          local_5c = local_5c + 0x12;
          local_58 = local_58 + 0x8c;
          local_88 = local_88 + 1;
        } while (local_88 < local_54->parts[0].tri_counts[0]);
      }
      local_54 = (CDeformableModel *)(local_54->tri_count + 3);
      local_30 = local_30 + 1;
    } while (local_30 < in_stack_00000004->num_parts);
  }
  local_34 = 0;
  if (0 < in_stack_00000004->num_parts) {
    local_44 = in_stack_00000004;
    do {
      local_80 = 0;
      local_7c = local_44;
      local_50 = iVar14 * 4;
      local_4c = iVar14 * 0x12;
      local_48 = iVar14 * 0x8c;
      if (0 < local_44->parts[0].cap_tri_counts[0]) {
        do {
          puVar15 = (uint *)((int)(local_1f4.tri_data)->attribute_indices + local_48);
          puVar13 = (ushort *)
                    ((int)&(in_stack_00000004->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    local_4c);
          puVar15[1] = local_34;
          uVar3 = *(uint *)((int)in_stack_00000004->index_data_ptr[0] + local_50);
          puVar15[2] = 1;
          *puVar15 = uVar3;
          puVar15[3] = in_stack_00000004->cap_index_ptr[0][iVar14 - in_stack_00000004->tri_count[0]]
          ;
          puVar18 = puVar13 + 3;
          fVar4 = (float)0.00390625;
          puVar12 = puVar15;
          do {
            puVar15[4] = (uint)*puVar13;
            puVar12[7] = (float)puVar13[3] * fVar4;
            local_1c = (uint)puVar13[6];
            puVar15 = puVar15 + 1;
            puVar13 = puVar13 + 1;
            puVar12[8] = (float)local_1c * fVar4;
            puVar12 = puVar12 + 2;
          } while (puVar13 != puVar18);
          iVar14 = iVar14 + 1;
          local_50 = local_50 + 4;
          local_48 = local_48 + 0x8c;
          local_80 = local_80 + 1;
          local_4c = local_4c + 0x12;
        } while (local_80 < local_44->parts[0].cap_tri_counts[0]);
      }
      local_44 = (CDeformableModel *)(local_44->tri_count + 3);
      local_34 = local_34 + 1;
    } while (local_34 < in_stack_00000004->num_parts);
  }
  local_1f4.sort_attribute_count = 2;
  local_1f4.attribute_enabled_flags[1] = 1;
  local_1f4.attribute_enabled_flags[0] = 1;
  local_1f4.attribute_enabled_flags[2] = 1;
  local_1f4.attribute_enabled_flags[3] = 0;
  local_1f4.active_attribute_count = 4;
  iVar14 = 0;
  pCVar10 = in_stack_00000004;
  if (0 < in_stack_00000004->num_textures) {
    do {
      pSVar19 = pCVar10->texture_sets;
      pSVar23 = local_1f4.submesh_data + iVar14;
      for (iVar7 = 0x12; iVar7 != 0; iVar7 = iVar7 + -1) {
        *(int *)pSVar23->unk = pSVar19->textures[0].texture_variants[0].base.type;
        pSVar19 = (STextureSet *)((int)pSVar19 + (uint)bVar24 * -8 + 4);
        pSVar23 = (SLodSubmesh *)((int)pSVar23 + (uint)bVar24 * -8 + 4);
      }
      iVar14 = iVar14 + 1;
      pCVar10 = (CDeformableModel *)(pCVar10->vertex_data_ptr + 2);
    } while (iVar14 < in_stack_00000004->num_textures);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)local_24,"..\\core\\skeledit.cpp",0x75a);
  shape_meshlod_cpp_CLodMesh_postprocessMesh_FUN_0051b330(&local_1f4);
  shape_meshlod_cpp_CLodMesh_copy_FUN_00515860(&local_350,&local_1f4);
  shape_meshlod_cpp_CLodMesh_clearFaceAttributes_FUN_0051bcc0(&local_350);
  local_350.active_attribute_count = 4;
  local_350.sort_attribute_count = 2;
  local_350.attribute_enabled_flags[1] = 1;
  local_350.attribute_enabled_flags[0] = 0;
  local_350.attribute_enabled_flags[2] = 1;
  local_350.attribute_enabled_flags[3] = 0;
  g_EnableMidpointSampling = 1;
  g_LodReplayMode = 0;
  if (*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name == 2)
  {
    pSVar5 = in_stack_00000008->texture_sets[0].textures + 8;
    pSVar5->texture_variants[0].texture_name[4] = '\0';
    pSVar5->texture_variants[0].texture_name[5] = '\0';
    pSVar5->texture_variants[0].texture_name[6] = '\0';
    pSVar5->texture_variants[0].texture_name[7] = '\0';
    local_1f4.precompute_file =
         shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(&local_1f4,"wt");
    if (local_1f4.precompute_file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_FUN_0058a0f0();
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0
              (&local_1f4,
               in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].base.type,2);
    pSVar5 = in_stack_00000008->texture_sets[0].textures + 8;
    pSVar5->texture_variants[0].texture_name[4] = '\x01';
    pSVar5->texture_variants[0].texture_name[5] = '\0';
    pSVar5->texture_variants[0].texture_name[6] = '\0';
    pSVar5->texture_variants[0].texture_name[7] = '\0';
    g_LodReplayMode = 1;
    local_350.precompute_file =
         shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(&local_350,"wt");
    if (local_350.precompute_file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_FUN_0058a0f0();
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0
              (&local_350,
               in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].base.count,0);
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!");
    iVar14 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar7 = 0;
    do {
      iVar8 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar8 - iVar14) {
        iVar7 = iVar7 + (iVar8 - iVar14);
      }
      iVar14 = iVar8;
    } while (iVar7 < 0x360000);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4);
    return 1;
  }
  pSVar5 = in_stack_00000008->texture_sets[0].textures + 8;
  pSVar5->texture_variants[0].texture_name[4] = '\0';
  pSVar5->texture_variants[0].texture_name[5] = '\0';
  pSVar5->texture_variants[0].texture_name[6] = '\0';
  pSVar5->texture_variants[0].texture_name[7] = '\0';
  local_b4._24_4_ = core_skeledit_cpp_FUN_00589c20();
  if (-1 < (int)local_b4._24_4_) {
    if (local_b4._24_4_ != 0) {
      iVar14 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(&local_1f4);
      in_stack_00000004->num_lods = iVar14;
      if (iVar14 < 1) goto LAB_0058d5ef;
      iVar7 = 0;
      if (0 < iVar14) {
        iVar14 = 0;
        pCVar10 = in_stack_00000004;
        do {
          piVar11 = &pCVar10->lod_info[0].shadow_only_flag;
          iVar8 = *(int *)((int)local_d8 + iVar14);
          *piVar11 = 0;
          pCVar10->lod_info[0].pixel_height = iVar8;
          iVar7 = iVar7 + 1;
          iVar14 = iVar14 + 4;
          pCVar10 = (CDeformableModel *)piVar11;
        } while (iVar7 < in_stack_00000004->num_lods);
      }
    }
    iVar14 = 0;
    if (0 < in_stack_00000004->num_lods) {
      local_78 = in_stack_00000004->texture_sets;
      local_40 = 0;
      do {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Extracting LOD %d of %d");
        shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_2dc);
        if (local_b4._24_4_ == 0) {
          shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(&local_2dc,&local_1f4);
        }
        else {
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(&local_1f4);
        }
        shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(&local_2dc);
        if (iVar14 == 0) {
          if (local_2dc.submesh_count != local_b4._20_4_) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0x7bc;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Texture cram count mismatch!");
          }
          iVar7 = 0;
          if (0 < local_2dc.submesh_count) {
            pcVar17 = local_78->textures[0].texture_variants[0].texture_name;
            do {
              pcVar20 = local_2dc.submesh_data[iVar7].texture_filename;
              iVar7 = iVar7 + 1;
              pcVar22 = pcVar17;
              do {
                cVar1 = *pcVar20;
                *pcVar22 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar20[1];
                pcVar20 = pcVar20 + 2;
                pcVar22[1] = cVar1;
                pcVar22 = pcVar22 + 2;
              } while (cVar1 != '\0');
              pcVar17 = pcVar17 + 0x48;
            } while (iVar7 < local_2dc.submesh_count);
          }
        }
        core_skeledit_cpp_FUN_0058d790();
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_2dc);
        iVar14 = iVar14 + 1;
        local_40 = local_40 + 4;
      } while (iVar14 < in_stack_00000004->num_lods);
    }
    in_stack_00000004->lod_info[0].shadow_only_flag = 0;
    in_stack_00000004->lod_info[0].pixel_height = 999999;
    local_ec = 999999;
    if (in_stack_00000004->num_lods < 5) {
      pSVar5 = in_stack_00000008->texture_sets[0].textures + 8;
      pSVar5->texture_variants[0].texture_name[4] = '\x01';
      pSVar5->texture_variants[0].texture_name[5] = '\0';
      pSVar5->texture_variants[0].texture_name[6] = '\0';
      pSVar5->texture_variants[0].texture_name[7] = '\0';
      g_LodReplayMode = 1;
      iVar14 = core_skeledit_cpp_FUN_00589c20();
      if (iVar14 < 0) goto LAB_0058d5ef;
      if (iVar14 != 0) {
        iVar14 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(&local_350);
        if (iVar14 < 1) goto LAB_0058d5ef;
        if (iVar14 == 2) {
          in_stack_00000004->lod_info[in_stack_00000004->num_lods].pixel_height = 999999;
          in_stack_00000004->lod_info[in_stack_00000004->num_lods].shadow_only_flag = 1;
          in_stack_00000004->num_lods = in_stack_00000004->num_lods + 1;
          shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_268);
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(&local_350);
          core_skeledit_cpp_FUN_0058d790();
          shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_268);
        }
      }
    }
    local_38 = 1;
    if (1 < in_stack_00000004->num_texture_sets) {
      local_3c = in_stack_00000004->texture_sets + 1;
      do {
        sprintf(local_180,"%s%d",local_b20,local_38);
        core_skeledit_cpp_FUN_0058de70();
        uVar9 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
        if (uVar9 != local_b4._20_4_) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x7fe;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Cram getNumCramsUsed() mismatch!");
        }
        local_74 = 0;
        if (0 < (int)local_b4._20_4_) {
          pcVar17 = local_3c->textures[0].texture_variants[0].texture_name;
          do {
            pcVar22 = shape_design_c_getTextureName_FUN_0046e060(local_74);
            pcVar20 = pcVar17 + 0x48;
            do {
              cVar1 = *pcVar22;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar22[1];
              pcVar22 = pcVar22 + 2;
              pcVar17[1] = cVar1;
              pcVar17 = pcVar17 + 2;
            } while (cVar1 != '\0');
            local_74 = local_74 + 1;
            pcVar17 = pcVar20;
          } while (local_74 < (int)local_b4._20_4_);
        }
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
      } while (local_38 < in_stack_00000004->num_texture_sets);
    }
    in_stack_00000004->num_textures = local_b4._20_4_;
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4);
    return 1;
  }
LAB_0058d5ef:
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350);
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4);
  return 0;
}
