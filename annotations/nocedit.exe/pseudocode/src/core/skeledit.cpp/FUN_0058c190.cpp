// Name: core_skeledit.cpp_FUN_0058c190
// Address: 0058c190
// Address Range: [[0058c190, 0058d782]]
// Convention: unknown
// Signature: undefined core_skeledit.cpp_FUN_0058c190()

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
  bool bVar6;
  CBoneStructure *pCVar7;
  int iVar8;
  FILE *file;
  FILE *file_ptr;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar9;
  uint uVar10;
  CDeformableModel *pCVar11;
  uint *puVar13;
  ushort *puVar14;
  int iVar15;
  uint *puVar16;
  char *pcVar17;
  ushort *puVar18;
  STextureSet *pSVar19;
  char *pcVar20;
  char *pcVar21;
  SLodSubmesh *pSVar22;
  byte bVar23;
  CDeformableModel *in_stack_00000004;
  CDeformableModel *in_stack_00000008;
  CDeformableModel *in_stack_ffff5dd8;
  uint in_stack_ffff5ddc;
  uint in_stack_ffff5de0;
  uint in_stack_ffff5de4;
  uint in_stack_ffff5de8;
  float afStack_a1d0 [3279];
  int aiStack_6e94 [4701];
  uint local_2520 [1200];
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
  uint local_11c [12];
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
  int *piVar12;
  
  bVar23 = 0;
  crt_stack_c_stack_probe_FUN_005ff9f3(0xa248);
  DAT_03670650 = 0;
  pCVar7 = (CBoneStructure *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     ((char *)in_stack_00000008,(char *)0x0,"rt",
                      "..\\core\\skeledit.cpp",0x60a);
  local_24 = pCVar7;
  if (pCVar7 == (CBoneStructure *)0x0) {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"Can't open %s",in_stack_00000008);
    return 0;
  }
  iVar15 = 1;
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(in_stack_00000004);
  do {
    iVar8 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar7);
    this_ptr = local_24;
    if (iVar8 < 0) break;
  } while ((iVar8 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
  crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_24,"%d\n",local_20);
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (this_ptr,(FILE *)local_b4,&in_stack_ffff5dd8->num_lods);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
            (this_ptr,(FILE *)0x0,(int)in_stack_ffff5dd8);
  core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(in_stack_00000004);
  core_skeledit_cpp_FUN_0058b160();
  iVar15 = core_skeledit_cpp_FUN_0058b200();
  if (iVar15 == 0) {
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_03670650,"Heirarchy in %s does not match that in skeleton %s",in_stack_00000008,
               in_stack_00000004->model_name);
    if (*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name != 2
       ) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1260);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_418,"Display %s",in_stack_00000008);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base_strlist,local_418);
      crt_stdio_c_sprintf_FUN_005fdbd0(local_418,"Display %s",in_stack_00000004->model_name)
      ;
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base_strlist,local_418);
      iVar15 = 0;
      while( true ) {
        iVar15 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           (&local_1260,&DAT_03670650,iVar15,0);
        if (iVar15 < 0) break;
        if (iVar15 == 0) {
          core_skeledit_cpp_FUN_0058afe0();
        }
        if (iVar15 == 1) {
          core_skeledit_cpp_FUN_0058afe0();
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1260,0,(uint)in_stack_ffff5dd8,in_stack_ffff5ddc,in_stack_ffff5de0,
                 in_stack_ffff5de4,in_stack_ffff5de8);
    }
    return 0;
  }
  iVar15 = 1;
  do {
    iVar8 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)this_ptr);
    if (iVar8 < 0) break;
  } while ((iVar8 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
  iVar15 = crt_stdio_c_fscanf_FUN_005fe7c0
                     ((FILE *)local_24,"%d,%d,%d\n",local_b4 + 4,local_b4 + 8,local_b4 + 0xc);
  if (iVar15 != 3) {
LAB_0058c613:
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_03670650,"%s is corrupt!",in_stack_00000008);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_24,"..\\core\\skeledit.cpp",0x647);
    return 0;
  }
  core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0
            (in_stack_00000004,1,1,local_b4._4_4_,1);
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510
            (in_stack_00000004,0,local_b4._8_4_,local_b4._12_4_,0);
  iVar15 = core_skeledit_cpp_FUN_0058b8e0();
  if (((iVar15 == 0) || (iVar15 = core_skeledit_cpp_FUN_0058b9b0(), iVar15 == 0)) ||
     (iVar15 = core_skeledit_cpp_FUN_0058bc40(), iVar15 == 0)) goto LAB_0058c613;
  if (in_stack_00000008->texture_sets[0].textures[4].texture_variants[1].texture_name[0] == '\0') {
    core_skeledit_cpp_FUN_0058f790();
  }
  else {
    iVar15 = core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
                       (in_stack_00000008);
    if (iVar15 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(in_stack_ffff5dd8);
  core_skeledit_cpp_FUN_0058aeb0();
  core_skeledit_cpp_FUN_0058dde0();
  local_28 = 0;
  if (0 < (int)in_stack_ffff5dd8) {
    local_70 = afStack_a1d0;
    iVar15 = 0;
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_70,(CMatrix3x4f *)in_stack_ffff5dd8);
      puVar13 = (uint *)((int)local_2520 + iVar15);
      iVar15 = iVar15 + 0x30;
      puVar16 = local_11c;
      for (iVar8 = 0xc; iVar8 != 0; iVar8 = iVar8 + -1) {
        *puVar13 = *puVar16;
        puVar16 = puVar16 + (uint)bVar23 * -2 + 1;
        puVar13 = puVar13 + (uint)bVar23 * -2 + 1;
      }
      local_28 = local_28 + 1;
      local_70 = &((CMatrix3x4f *)((int)local_70 + 0x60))->m[2].x;
    } while (local_28 < (int)in_stack_ffff5dd8);
  }
  crt_string_c_splitpath_FUN_005ff178
            ((char *)in_stack_00000008,local_14,local_718,(char *)0x0,(char *)0x0);
  crt_file_c_makepath_FUN_005febfc(local_d28,local_14,local_718,(char *)0x0,(char *)0x0);
  if ((*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name == 0)
     && (iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                            (g_CEditorToolsPtr,"Copy textures from a directory (empty string if textures are already in art directory.)",local_d28,0x104,1
                            ), iVar15 == 0)) {
    return 0;
  }
  if (local_d28[0] != '\0') {
    crt_string_c_splitpath_FUN_005ff178(local_d28,local_18,local_618,local_818,local_918);
    crt_file_c_makepath_FUN_005febfc(local_518,(char *)0x0,local_618,local_818,local_918);
    local_2c = 0;
    if (0 < in_stack_00000004->num_texture_sets) {
      local_6c = in_stack_00000004->texture_sets;
      do {
        local_98 = 0;
        if (0 < in_stack_00000004->num_textures) {
          pcVar17 = local_6c->textures[0].texture_variants[0].texture_name;
          do {
            crt_string_c_splitpath_FUN_005ff178
                      (pcVar17,(char *)0x0,(char *)0x0,local_818,(char *)0x0);
            crt_file_c_makepath_FUN_005febfc(local_a1c,local_18,local_518,local_818,"tga");
            crt_file_c_makepath_FUN_005febfc
                      (local_c24,(char *)0x0,"art",local_818,"tga");
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",0x6a5
                             );
            if ((file == (FILE *)0x0) &&
               (pcVar21 = crt_string_c_strstr_FUN_005fedd0(local_818,"gore"),
               pcVar21 != (char *)0x0)) {
              crt_file_c_makepath_FUN_005febfc
                        (local_a1c,"t:","\\enemy",local_818,"tga");
              file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",
                                0x6a9);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Copying %s -> %s");
            if (file == (FILE *)0x0) {
              if (*(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].
                          texture_name != 2) {
                crt_stdio_c_sprintf_FUN_005fdbd0
                          (local_eb8,"Can't open %s.  Keep going anyway?",local_a1c);
                iVar15 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                                   (g_CEditorToolsPtr,local_eb8);
                if (iVar15 == 0) {
                  return 0;
                }
              }
            }
            else {
              file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                                   (local_c24,(char *)0x0,"wb","..\\core\\skeledit.cpp"
                                    ,0x6b5);
              if (file_ptr == (FILE *)0x0) {
                g_CurrentFilename = "..\\core\\skeledit.cpp";
                g_CurrentLineNumber = 0x6b6;
                core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create %s",local_c24);
              }
              while (iVar15 = crt_stdio_c_fgetc_FUN_005fe840(file), -1 < iVar15) {
                crt_stdio_c_fputc_FUN_006007a0(iVar15,file_ptr);
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
  iVar15 = *(int *)in_stack_00000008->texture_sets[0].textures[8].texture_variants[0].texture_name;
  if (iVar15 == 1) {
    bVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",
                       (int *)(local_b4 + 0x10),true,1,8,true);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar6) == 0) {
      return 0;
    }
    pcVar17 = "$$TEST";
LAB_0058c4df:
    pcVar21 = local_b20;
    do {
      cVar1 = *pcVar17;
      *pcVar21 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar17[1];
      pcVar17 = pcVar17 + 2;
      pcVar21[1] = cVar1;
      pcVar21 = pcVar21 + 2;
    } while (cVar1 != '\0');
  }
  else {
    if (iVar15 == 2) {
      pcVar17 = "$$BATCH";
      goto LAB_0058c4df;
    }
    bVar6 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",
                       (int *)(local_b4 + 0x10),true,1,8,true);
    if (CONCAT31 /* combine 2-byte values */(extraout_var_00,bVar6) == 0) {
      return 0;
    }
    crt_string_c_splitpath_FUN_005ff178
              ((char *)in_stack_00000008,(char *)0x0,(char *)0x0,local_b20,(char *)0x0);
    shape_design_c_initializeTextureManager_FUN_0046a880(1);
    shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
    iVar15 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_b4._16_4_);
    if (1 < in_stack_00000004->num_texture_sets) {
      iVar15 = iVar15 + -1;
    }
    local_b20[iVar15] = '\0';
    iVar15 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                       (g_CEditorToolsPtr,"Enter crammed texture base name (no path or extension)",local_b20,iVar15 + 1,1
                       );
    if (iVar15 == 0) {
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
  pCVar7 = local_24;
  iVar15 = 1;
  do {
    iVar8 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar7);
    if (iVar8 < 0) break;
  } while ((iVar8 != 10) || (iVar15 = iVar15 + -1, 0 < iVar15));
  iVar15 = 0;
  if (0 < in_stack_00000004->vertex_count[0]) {
    local_68 = 0;
    local_64 = 0;
    do {
      pSVar2 = in_stack_00000004->vertex_data_ptr[0];
      pcVar21 = (local_1f4.vertex_data)->lod_workspace + local_64 + -0x10;
      *(uint *)pcVar21 = *(uint *)((int)pSVar2->bone_weights + local_68 + 0xc);
      *(uint *)(pcVar21 + 4) = *(uint *)((int)pSVar2->bone_weights + local_68 + 0x10);
      *(uint *)(pcVar21 + 8) = *(uint *)((int)pSVar2->bone_weights + local_68 + 0x14);
      pcVar17 = pcVar21;
      do {
        pcVar20 = pcVar17 + 4;
        pcVar17[0xc] = '\0';
        pcVar17[0xd] = '\0';
        pcVar17[0xe] = '\0';
        pcVar17[0xf] = '\0';
        pcVar17 = pcVar20;
      } while (pcVar20 != pcVar21 + 400);
      iVar8 = crt_stdio_c_fscanf_FUN_005fe7c0((FILE *)local_24,"%d\n",&local_94);
      if (((iVar8 != 1) || (local_94 < 1)) || ((int)in_stack_ffff5dd8 < local_94)) {
LAB_0058c601:
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4);
        goto LAB_0058c613;
      }
      iVar8 = 0;
      if (0 < local_94) {
        do {
          iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0
                            ((FILE *)local_24,"%d,%f\n",&local_90,&local_8c);
          if (iVar9 != 2) goto LAB_0058c601;
          local_90 = aiStack_6e94[local_90];
          iVar8 = iVar8 + 1;
          *(float *)(pcVar21 + (local_90 + 3) * 4) =
               *(float *)(pcVar21 + (local_90 + 3) * 4) + local_8c;
        } while (iVar8 < local_94);
      }
      iVar15 = iVar15 + 1;
      local_68 = local_68 + 0x34;
      local_64 = local_64 + 0x4c4;
    } while (iVar15 < in_stack_00000004->vertex_count[0]);
  }
  iVar15 = 0;
  local_30 = 0;
  if (0 < in_stack_00000004->num_parts) {
    local_54 = in_stack_00000004;
    do {
      local_84 = local_54;
      local_60 = iVar15 * 4;
      local_5c = iVar15 * 0x12;
      local_58 = iVar15 * 0x8c;
      local_88 = 0;
      if (0 < local_54->parts[0].tri_counts[0]) {
        do {
          puVar16 = (uint *)((int)(local_1f4.tri_data)->attribute_indices + local_58);
          puVar14 = (ushort *)
                    ((int)&(in_stack_00000004->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    local_5c);
          puVar16[1] = local_30;
          uVar3 = *(uint *)((int)in_stack_00000004->index_data_ptr[0] + local_60);
          puVar16[2] = 0;
          puVar16[3] = 0xfffe7961;
          puVar18 = puVar14 + 3;
          *puVar16 = uVar3;
          fVar4 = (float)0.00390625;
          puVar13 = puVar16;
          do {
            puVar16[4] = (uint)*puVar14;
            puVar13[7] = (float)puVar14[3] * fVar4;
            local_1c = (uint)puVar14[6];
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
            puVar13[8] = (float)local_1c * fVar4;
            puVar13 = puVar13 + 2;
          } while (puVar14 != puVar18);
          iVar15 = iVar15 + 1;
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
      local_50 = iVar15 * 4;
      local_4c = iVar15 * 0x12;
      local_48 = iVar15 * 0x8c;
      if (0 < local_44->parts[0].cap_tri_counts[0]) {
        do {
          puVar16 = (uint *)((int)(local_1f4.tri_data)->attribute_indices + local_48);
          puVar14 = (ushort *)
                    ((int)&(in_stack_00000004->tri_data_ptr[0]->vertex_indices).vertex_index_0 +
                    local_4c);
          puVar16[1] = local_34;
          uVar3 = *(uint *)((int)in_stack_00000004->index_data_ptr[0] + local_50);
          puVar16[2] = 1;
          *puVar16 = uVar3;
          puVar16[3] = in_stack_00000004->cap_index_ptr[0][iVar15 - in_stack_00000004->tri_count[0]]
          ;
          puVar18 = puVar14 + 3;
          fVar4 = (float)0.00390625;
          puVar13 = puVar16;
          do {
            puVar16[4] = (uint)*puVar14;
            puVar13[7] = (float)puVar14[3] * fVar4;
            local_1c = (uint)puVar14[6];
            puVar16 = puVar16 + 1;
            puVar14 = puVar14 + 1;
            puVar13[8] = (float)local_1c * fVar4;
            puVar13 = puVar13 + 2;
          } while (puVar14 != puVar18);
          iVar15 = iVar15 + 1;
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
  iVar15 = 0;
  pCVar11 = in_stack_00000004;
  if (0 < in_stack_00000004->num_textures) {
    do {
      pSVar19 = pCVar11->texture_sets;
      pSVar22 = local_1f4.submesh_data + iVar15;
      for (iVar8 = 0x12; iVar8 != 0; iVar8 = iVar8 + -1) {
        *(int *)pSVar22->field0_0x0 = pSVar19->textures[0].texture_variants[0].base.type;
        pSVar19 = (STextureSet *)((int)pSVar19 + (uint)bVar23 * -8 + 4);
        pSVar22 = (SLodSubmesh *)((int)pSVar22 + (uint)bVar23 * -8 + 4);
      }
      iVar15 = iVar15 + 1;
      pCVar11 = (CDeformableModel *)(pCVar11->vertex_data_ptr + 2);
    } while (iVar15 < in_stack_00000004->num_textures);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0((FILE *)local_24,"..\\core\\skeledit.cpp",0x75a);
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
    if (local_1f4.precompute_file == (FILE *)0x0) {
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
    if (local_350.precompute_file == (FILE *)0x0) {
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
    iVar15 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar8 = 0;
    do {
      iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar9 - iVar15) {
        iVar8 = iVar8 + (iVar9 - iVar15);
      }
      iVar15 = iVar9;
    } while (iVar8 < 0x360000);
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
      iVar15 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(&local_1f4);
      in_stack_00000004->num_lods = iVar15;
      if (iVar15 < 1) goto LAB_0058d5ef;
      iVar8 = 0;
      if (0 < iVar15) {
        iVar15 = 0;
        pCVar11 = in_stack_00000004;
        do {
          piVar12 = &pCVar11->lod_info[0].shadow_only_flag;
          iVar9 = *(int *)((int)local_d8 + iVar15);
          *piVar12 = 0;
          pCVar11->lod_info[0].pixel_height = iVar9;
          iVar8 = iVar8 + 1;
          iVar15 = iVar15 + 4;
          pCVar11 = (CDeformableModel *)piVar12;
        } while (iVar8 < in_stack_00000004->num_lods);
      }
    }
    iVar15 = 0;
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
        if (iVar15 == 0) {
          if (local_2dc.submesh_count != local_b4._20_4_) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0x7bc;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Texture cram count mismatch!");
          }
          iVar8 = 0;
          if (0 < local_2dc.submesh_count) {
            pcVar17 = local_78->textures[0].texture_variants[0].texture_name;
            do {
              pcVar20 = local_2dc.submesh_data[iVar8].texture_filename;
              iVar8 = iVar8 + 1;
              pcVar21 = pcVar17;
              do {
                cVar1 = *pcVar20;
                *pcVar21 = cVar1;
                if (cVar1 == '\0') break;
                cVar1 = pcVar20[1];
                pcVar20 = pcVar20 + 2;
                pcVar21[1] = cVar1;
                pcVar21 = pcVar21 + 2;
              } while (cVar1 != '\0');
              pcVar17 = pcVar17 + 0x48;
            } while (iVar8 < local_2dc.submesh_count);
          }
        }
        core_skeledit_cpp_FUN_0058d790();
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_2dc);
        iVar15 = iVar15 + 1;
        local_40 = local_40 + 4;
      } while (iVar15 < in_stack_00000004->num_lods);
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
      iVar15 = core_skeledit_cpp_FUN_00589c20();
      if (iVar15 < 0) goto LAB_0058d5ef;
      if (iVar15 != 0) {
        iVar15 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990(&local_350);
        if (iVar15 < 1) goto LAB_0058d5ef;
        if (iVar15 == 2) {
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
        crt_stdio_c_sprintf_FUN_005fdbd0(local_180,"%s%d",local_b20,local_38);
        core_skeledit_cpp_FUN_0058de70();
        uVar10 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
        if (uVar10 != local_b4._20_4_) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x7fe;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Cram getNumCramsUsed() mismatch!");
        }
        local_74 = 0;
        if (0 < (int)local_b4._20_4_) {
          pcVar17 = local_3c->textures[0].texture_variants[0].texture_name;
          do {
            pcVar21 = shape_design_c_getTextureName_FUN_0046e060(local_74);
            pcVar20 = pcVar17 + 0x48;
            do {
              cVar1 = *pcVar21;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar21[1];
              pcVar21 = pcVar21 + 2;
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
