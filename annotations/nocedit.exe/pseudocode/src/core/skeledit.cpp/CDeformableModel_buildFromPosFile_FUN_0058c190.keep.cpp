// Name: core_skeledit.cpp_CDeformableModel_buildFromPosFile_FUN_0058c190
// Address: 0058c190
// MANUAL RECONSTRUCTION
// Address Range: [[0058c190, 0058d782] [03fc3ef0, 03fc3f62]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CDeformableModel_buildFromPosFile_FUN_0058c190(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CDeformableModel_buildFromPosFile_FUN_0058c190(CDeformableModel *this_ptr,CLodMeshPrecomputeEntry *entry)

{
  CBoneStructure *pCVar4;
  CBoneStructure *pCVar5;
  int iVar6;
  CSkeleton *skeleton;
  int iVar5;
  int iVar8;
  _FILE *file;
  _FILE *file_ptr;
  int iVar7;
  int iVar9;
  char *pcVar16;
  int iVar12;
  char *pcVar15;
  char *pcVar21;
  CLodVert *pCLodVert;
  CBoneStructure local_a228;
  CBoneStructure local_6d04;
  CMatrix3x4f local_6d04_inverse_matrices [100];
  CMatrix3x4f local_2520 [100];
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
  int local_ec [5];
  int local_d8 [5];
  int local_c4 [2];
  int local_bc [2];
  int local_b4;
  int local_b0;
  int local_ac;
  int local_a8;
  int local_a4;
  int local_a0;
  int local_9c;
  int local_98;
  int local_94;
  int local_90;
  float local_8c;
  int local_88;
  int local_80;
  STextureSet *local_78;
  int local_74;
  float *local_70;
  STextureSet *local_6c;
  int local_40;
  STextureSet *local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  CBoneStructure *local_24;
  byte local_20 [4];
  char local_18 [4];
  char local_14 [4];
  SVert *pSVar2;

  g_SkeleditStatusMessage[0] = '\0';
  pCVar5 = (CBoneStructure *)
           shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (entry->pos_filename,(char *)0x0,"rt","..\\core\\skeledit.cpp",
                      0x60a);
  local_24 = pCVar5;
  if (pCVar5 == (CBoneStructure *)0x0) {
    _sprintf(g_SkeleditStatusMessage,"Can't open %s",entry->pos_filename);
    return 0;
  }
  iVar12 = 1;
  core_skeleton_cpp_CDeformableModel_free_FUN_0059a2b0(this_ptr);
  do {
    iVar6 = _fgetc((_FILE *)pCVar5);
    pCVar4 = local_24;
    if (iVar6 < 0) break;
  } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
  _fscanf((_FILE *)local_24,"%d\n",(int *)local_20);
  core_skeledit_cpp_CBoneStructure_readBONheader_FUN_0058a4a0
            (&local_a228,(_FILE *)pCVar4,&local_b4);
  core_skeledit_cpp_CBoneStructure_readBONframe_FUN_0058aa10
            (&local_a228,(_FILE *)pCVar4,0);
  skeleton = core_skeleton_cpp_CDeformableModel_getSkeletonPtr_FUN_0059a810(this_ptr);
  core_skeledit_cpp_CBoneStructure_copyHierarchyFromSkeleton_FUN_0058b160
            (&local_6d04,skeleton);
  iVar5 = core_skeledit_cpp_CBoneStructure_doesHierarchyMatch_FUN_0058b200
                    (&local_a228,&local_6d04);
  if (iVar5 == 0) {
    pcVar16 = this_ptr->model_name;
    _sprintf
              (g_SkeleditStatusMessage,"Heirarchy in %s does not match that in skeleton %s",entry->pos_filename,pcVar16);
    if (entry->skip_generation != 2) {
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1260);
      _sprintf(local_418,"Display %s",entry->pos_filename);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base,local_418);
      _sprintf(local_418,"Display %s",pcVar16);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1260.base,local_418);
      iVar5 = 0;
      while( true ) {
        iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                          (&local_1260,g_SkeleditStatusMessage,iVar5,0);
        if (iVar5 < 0) break;
        if (iVar5 == 0) {
          core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
                    (&local_a228,entry->pos_filename);
        }
        if (iVar5 == 1) {
          core_skeledit_cpp_CBoneStructure_showBoneHierarchy_FUN_0058afe0
                    (&local_6d04,pcVar16);
        }
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1260,0);
    }
    return 0;
  }
  iVar5 = 1;
  do {
    iVar8 = _fgetc((_FILE *)pCVar4);
    if (iVar8 < 0) break;
  } while ((iVar8 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = _fscanf((_FILE *)local_24,"%d,%d,%d\n",&local_b0,&local_ac,&local_a8);
  if (iVar5 != 3) {
LAB_0058c613:
    _sprintf(g_SkeleditStatusMessage,"%s is corrupt!",entry->pos_filename);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0((_FILE *)local_24,"..\\core\\skeledit.cpp",0x647);
    return 0;
  }
  core_skeleton_cpp_CDeformableModel_allocMemory_FUN_0059a3f0(this_ptr,1,1,local_b0,1);
  core_skeleton_cpp_CDeformableModel_allocLOD_FUN_0059a510(this_ptr,0,local_ac,local_a8,0);
  pCVar4 = local_24;
  iVar5 = core_skeledit_cpp_CDeformableModel_importTexturesS3D_FUN_0058b8e0
                    (this_ptr,(_FILE *)local_24);
  if (((iVar5 == 0) ||
      (iVar5 = core_skeledit_cpp_CDeformableModel_importFacesS3D_FUN_0058b9b0
                         (this_ptr,(_FILE *)pCVar4), iVar5 == 0)) ||
     (iVar5 = core_skeledit_cpp_CDeformableModel_importVerticesS3D_FUN_0058bc40
                        (this_ptr,(_FILE *)pCVar4), iVar5 == 0)) goto LAB_0058c613;
  if (entry->s3d_filename[0] == '\0') {
    core_skeledit_cpp_CDeformableModel_initSinglePart_FUN_0058f790(this_ptr);
  }
  else {
    iVar5 = core_skeledit_cpp_CDeformableModel_determinePartsFromS3D_FUN_0058f810
                      (this_ptr,entry);
    if (iVar5 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_CDeformableModel_removeUnusedTextures_FUN_0058ec60(this_ptr);
  core_skeledit_cpp_CBoneStructure_extractInverseBindPose_FUN_0058aeb0
            (&local_a228,local_6d04_inverse_matrices);
  core_skeledit_cpp_CDeformableModel_extractBoneScales_FUN_0058dde0
            (this_ptr,&local_a228);
  local_28 = 0;
  if (0 < (int)local_a228.bone_count) {
    local_70 = (float *)&local_a228.bones[0].world_matrix;
    do {
      core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)local_70,&local_11c);
      local_2520[local_28] = local_11c;
      local_28 = local_28 + 1;
      local_70 = local_70 + 0x21;
    } while (local_28 < (int)local_a228.bone_count);
  }
  splitpath
            (entry->pos_filename,local_14,local_718,(char *)0x0,(char *)0x0);
  makepath(local_d28,local_14,local_718,(char *)0x0,(char *)0x0);
  if ((entry->skip_generation == 0) &&
     (iVar5 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Copy textures from a directory (empty string if textures are already in art directory.)",local_d28,0x104,1),
     iVar5 == 0)) {
    return 0;
  }
  if (local_d28[0] != '\0') {
    splitpath(local_d28,local_18,local_618,local_818,local_918);
    makepath(local_518,(char *)0x0,local_618,local_818,local_918);
    local_2c = 0;
    if (0 < this_ptr->num_texture_sets) {
      local_6c = this_ptr->texture_sets;
      do {
        local_98 = 0;
        if (0 < this_ptr->num_textures) {
          pcVar16 = local_6c->textures[0].textures[0].texture_name;
          do {
            splitpath
                      (pcVar16,(char *)0x0,(char *)0x0,local_818,(char *)0x0);
            makepath(local_a1c,local_18,local_518,local_818,"tga");
            makepath
                      (local_c24,(char *)0x0,"art",local_818,"tga");
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",0x6a5
                             );
            if ((file == (_FILE *)0x0) &&
               (pcVar21 = strstr(local_818,"gore"),
               pcVar21 != (char *)0x0)) {
              makepath
                        (local_a1c,"t:","\\enemy",local_818,"tga");
              file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_a1c,(char *)0x0,"rb","..\\core\\skeledit.cpp",
                                0x6a9);
            }
            shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                      (g_CEditorToolsPtr,"Copying %s -> %s",local_a1c,local_c24);
            if (file == (_FILE *)0x0) {
              if (entry->skip_generation != 2) {
                _sprintf
                          (local_eb8,"Can't open %s.  Keep going anyway?",local_a1c);
                iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                                  (g_CEditorToolsPtr,local_eb8);
                if (iVar5 == 0) {
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
              while (iVar5 = _fgetc(file), -1 < iVar5) {
                _fputc(iVar5,file_ptr);
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
            pcVar16 = pcVar16 + 0x48;
            local_98 = local_98 + 1;
          } while (local_98 < this_ptr->num_textures);
        }
        local_6c = local_6c + 1;
        local_2c = local_2c + 1;
      } while (local_2c < this_ptr->num_texture_sets);
    }
  }
  local_a4 = 2;
  iVar5 = 0;
  if (entry->skip_generation == 1) {
    iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",&local_a4,1,1,8,1);
    if (iVar8 == 0) {
      return 0;
    }
    pcVar15 = "$$TEST";
LAB_0058c4df:
    strcpy(local_b20, pcVar15);
  }
  else {
    if (entry->skip_generation == 2) {
      pcVar15 = "$$BATCH";
      iVar5 = 0x1e;
      goto LAB_0058c4df;
    }
    iVar8 = shape_edittool_cpp_CEditorTools_promptForValidInteger_FUN_004a0020
                      (g_CEditorToolsPtr,"Enter number of 256x256 crams",&local_a4,1,1,8,1);
    if (iVar8 == 0) {
      return 0;
    }
    splitpath
              (entry->pos_filename,(char *)0x0,(char *)0x0,local_b20,(char *)0x0);
    shape_design_c_initializeTextureManager_FUN_0046a880(1);
    shape_design_c_setTextureQualityParameter_FUN_0046a8e0(0x40);
    iVar8 = shape_design_c_calculateTextureQualityLevel_FUN_0046a930(local_a4);
    if (1 < this_ptr->num_texture_sets) {
      iVar8 = iVar8 + -1;
    }
    local_b20[iVar8] = '\0';
    iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Enter crammed texture base name (no path or extension)",local_b20,iVar8 + 1,1);
    if (iVar8 == 0) {
      return 0;
    }
  }
  core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70
            (this_ptr,local_b20,local_a4,0x100,0,iVar5);
  local_a0 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
  shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_1f4);
  shape_meshlod_cpp_CLodMesh_allocate_FUN_00515ac0
            (&local_1f4,this_ptr->vertex_count[0],
             this_ptr->tri_count[0] + this_ptr->cap_tri_count[0],this_ptr->num_textures);
  pCVar4 = local_24;
  iVar5 = 1;
  do {
    iVar8 = _fgetc((_FILE *)pCVar4);
    if (iVar8 < 0) break;
  } while ((iVar8 != 10) || (iVar5 = iVar5 + -1, 0 < iVar5));
  iVar5 = 0;
  if (0 < this_ptr->vertex_count[0]) {
    do {
      pSVar2 = this_ptr->vertex_data_ptr[0];
      pCLodVert = local_1f4.vertex_data + iVar5;
      pCLodVert->position = pSVar2[iVar5].position;
      memset(&pCLodVert->material_id, 0, 400);
      iVar8 = _fscanf((_FILE *)local_24,"%d\n",&local_94);
      if (((iVar8 != 1) || (local_94 < 1)) || ((int)local_a228.bone_count < local_94)) {
LAB_0058c601:
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4,0);
        goto LAB_0058c613;
      }
      iVar8 = 0;
      if (0 < local_94) {
        do {
          iVar7 = _fscanf((_FILE *)local_24,"%d,%f\n",&local_90,&local_8c);
          if (iVar7 != 2) goto LAB_0058c601;
          local_90 = local_a228.shuffled_bone_indices[local_90];
          iVar8 = iVar8 + 1;
          ((float *)&pCLodVert->material_id)[local_90] += local_8c;
        } while (iVar8 < local_94);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->vertex_count[0]);
  }
  iVar5 = 0;
  local_30 = 0;
  if (0 < this_ptr->num_parts) {
    do {
      local_88 = 0;
      if (0 < this_ptr->parts[local_30].tri_counts[0]) {
        do {
          CLodFace *face = &local_1f4.tri_data[iVar5];
          SInputFace *src = &this_ptr->tri_data_ptr[0][iVar5];
          face->attribute_indices[0] = (uint)this_ptr->index_data_ptr[0][iVar5];
          face->attribute_indices[1] = local_30;
          face->attribute_indices[2] = 0;
          face->submesh_id = 0xfffe7961;
          face->vertex_idx_0 = (int)src->vertex_indices.vertex_index_0;
          face->vertex_idx_1 = (int)src->vertex_indices.vertex_index_1;
          face->vertex_idx_2 = (int)src->vertex_indices.vertex_index_2;
          face->uv_coords[0][0] = (float)src->u_coord_0 * 0.00390625f;
          face->uv_coords[0][1] = (float)src->v_coord_0 * 0.00390625f;
          face->uv_coords[1][0] = (float)src->u_coord_1 * 0.00390625f;
          face->uv_coords[1][1] = (float)src->v_coord_1 * 0.00390625f;
          face->uv_coords[2][0] = (float)src->u_coord_2 * 0.00390625f;
          face->uv_coords[2][1] = (float)src->v_coord_2 * 0.00390625f;
          iVar5 = iVar5 + 1;
          local_88 = local_88 + 1;
        } while (local_88 < this_ptr->parts[local_30].tri_counts[0]);
      }
      local_30 = local_30 + 1;
    } while (local_30 < this_ptr->num_parts);
  }
  local_34 = 0;
  if (0 < this_ptr->num_parts) {
    do {
      local_80 = 0;
      if (0 < this_ptr->parts[local_34].cap_tri_counts[0]) {
        do {
          CLodFace *face = &local_1f4.tri_data[iVar5];
          SInputFace *src = &this_ptr->tri_data_ptr[0][iVar5];
          face->attribute_indices[0] = (uint)this_ptr->index_data_ptr[0][iVar5];
          face->attribute_indices[1] = local_34;
          face->attribute_indices[2] = 1;
          face->submesh_id = this_ptr->cap_index_ptr[0][iVar5 - this_ptr->tri_count[0]];
          face->vertex_idx_0 = (int)src->vertex_indices.vertex_index_0;
          face->vertex_idx_1 = (int)src->vertex_indices.vertex_index_1;
          face->vertex_idx_2 = (int)src->vertex_indices.vertex_index_2;
          face->uv_coords[0][0] = (float)src->u_coord_0 * 0.00390625f;
          face->uv_coords[0][1] = (float)src->v_coord_0 * 0.00390625f;
          face->uv_coords[1][0] = (float)src->u_coord_1 * 0.00390625f;
          face->uv_coords[1][1] = (float)src->v_coord_1 * 0.00390625f;
          face->uv_coords[2][0] = (float)src->u_coord_2 * 0.00390625f;
          face->uv_coords[2][1] = (float)src->v_coord_2 * 0.00390625f;
          iVar5 = iVar5 + 1;
          local_80 = local_80 + 1;
        } while (local_80 < this_ptr->parts[local_34].cap_tri_counts[0]);
      }
      local_34 = local_34 + 1;
    } while (local_34 < this_ptr->num_parts);
  }
  local_1f4.sort_attribute_count = 2;
  local_1f4.attribute_enabled_flags[1] = 1;
  local_1f4.attribute_enabled_flags[0] = 1;
  local_1f4.attribute_enabled_flags[2] = 1;
  local_1f4.attribute_enabled_flags[3] = 0;
  local_1f4.active_attribute_count = 4;
  local_1f4.extra_attribute_count = local_a228.bone_count;
  iVar5 = 0;
  if (0 < this_ptr->num_textures) {
    do {
      local_1f4.lod_textures[iVar5] = this_ptr->texture_sets[0].textures[iVar5];
      iVar5 = iVar5 + 1;
    } while (iVar5 < this_ptr->num_textures);
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
  local_350.extra_attribute_count = local_a228.bone_count;
  local_350.attribute_enabled_flags[3] = 0;
  g_EnableMidpointSampling = 1;
  g_LodReplayMode = 0;
  if (entry->skip_generation == 2) {
    entry->for_shadows = 0;
    local_1f4.precompute_file =
         shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(&local_1f4,"wt");
    if (local_1f4.precompute_file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(entry,local_1f4.precompute_file);
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(&local_1f4,entry->dead1,2);
    entry->for_shadows = 1;
    g_LodReplayMode = 1;
    local_350.precompute_file =
         shape_meshlod_cpp_CLodMesh_openPrecomputeFile_FUN_0051b770(&local_350,"wt");
    if (local_350.precompute_file == (_FILE *)0x0) {
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x179;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't create mesh precompute file.");
    }
    core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(entry,local_350.precompute_file);
    shape_meshlod_cpp_CLodMesh_generateLOD_FUN_00516ba0(&local_350,entry->dead2,0);
    sound_sndmain_cpp_enableSoundSystem_FUN_005aaef0();
    sound_sndmain_cpp_startSfx_FUN_005a8e90("dixie.wav");
    shape_edittool_cpp_CEditorTools_createCenteredDialog_FUN_0049e940(g_CEditorToolsPtr,(char *)0x0)
    ;
    shape_edittool_cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
              (g_CEditorToolsPtr,"LOD generation complete!");
    iVar5 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
    iVar8 = 0;
    do {
      iVar9 = wincore_winrun_cpp_getTime_FUN_005f2dc0();
      if (0 < iVar9 - iVar5) {
        iVar8 = iVar8 + (iVar9 - iVar5);
      }
      iVar5 = iVar9;
    } while (iVar8 < 0x360000);
    shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
    sound_sndmain_cpp_resetSoundDevice_FUN_005ab130();
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350,0);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4,0);
    return 1;
  }
  entry->for_shadows = 0;
  local_9c = core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(&local_1f4,entry,2);
  if (-1 < local_9c) {
    if (local_9c != 0) {
      iVar5 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
                        (&local_1f4,local_d8,local_ec,5,2);
      this_ptr->num_lods = iVar5;
      if (iVar5 < 1) goto LAB_0058d5ef;
      iVar8 = 0;
      if (0 < iVar5) {
        do {
          this_ptr->lod_info[iVar8].pixel_height = local_d8[iVar8];
          this_ptr->lod_info[iVar8].shadow_only_flag = 0;
          iVar8 = iVar8 + 1;
        } while (iVar8 < this_ptr->num_lods);
      }
    }
    iVar5 = 0;
    if (0 < this_ptr->num_lods) {
      local_78 = this_ptr->texture_sets;
      local_40 = 0;
      do {
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Extracting LOD %d of %d",iVar5,this_ptr->num_lods);
        shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_2dc);
        if (local_9c == 0) {
          shape_meshlod_cpp_CLodMesh_copyFrom_FUN_0051a8c0(&local_2dc,&local_1f4);
        }
        else {
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920
                    (&local_1f4,local_ec[iVar5],&local_2dc);
        }
        shape_meshlod_cpp_CLodMesh_fixupAfterCram_FUN_0051bac0(&local_2dc);
        if (iVar5 == 0) {
          if (local_2dc.lod_texture_count != local_a0) {
            g_CurrentFilename = "..\\core\\skeledit.cpp";
            g_CurrentLineNumber = 0x7bc;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Texture cram count mismatch!");
          }
          iVar8 = 0;
          if (0 < local_2dc.lod_texture_count) {
            do {
              strcpy(local_78->textures[iVar8].textures[0].texture_name,
                     local_2dc.lod_textures[iVar8].textures[0].texture_name);
              iVar8 = iVar8 + 1;
            } while (iVar8 < local_2dc.lod_texture_count);
          }
        }
        core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790
                  (this_ptr,iVar5,&local_2dc,local_2520);
        shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_2dc,0);
        iVar5 = iVar5 + 1;
        local_40 = local_40 + 4;
      } while (iVar5 < this_ptr->num_lods);
    }
    this_ptr->lod_info[0].shadow_only_flag = 0;
    this_ptr->lod_info[0].pixel_height = 999999;
    local_ec[0] = 999999;
    if (this_ptr->num_lods < 5) {
      entry->for_shadows = 1;
      g_LodReplayMode = 1;
      iVar5 = core_skeledit_cpp_CLodMesh_selectAndGenerateLods_FUN_00589c20(&local_350,entry,0);
      if (iVar5 < 0) goto LAB_0058d5ef;
      if (iVar5 != 0) {
        iVar5 = shape_meshlod_cpp_CLodMesh_chooseLodsInteractive_FUN_0051d990
                          (&local_350,local_c4,local_bc,2,0);
        if (iVar5 < 1) goto LAB_0058d5ef;
        if (iVar5 == 2) {
          this_ptr->lod_info[this_ptr->num_lods].pixel_height = 999999;
          this_ptr->lod_info[this_ptr->num_lods].shadow_only_flag = 1;
          this_ptr->num_lods = this_ptr->num_lods + 1;
          shape_meshlod_cpp_CLodMesh_ctor_FUN_00515840(&local_268);
          shape_meshlod_cpp_CLodMesh_getLOD_FUN_0051b920(&local_350,local_bc[1],&local_268);
          core_skeledit_cpp_CDeformableModel_extractLodLevel_FUN_0058d790
                    (this_ptr,this_ptr->num_lods + -1,&local_268,local_2520);
          shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_268,0);
        }
      }
    }
    local_38 = 1;
    if (1 < this_ptr->num_texture_sets) {
      local_3c = this_ptr->texture_sets + 1;
      do {
        iVar5 = local_38;
        _sprintf(local_180,"%s%d",local_b20,local_38);
        core_skeledit_cpp_CDeformableModel_cramModelTexture_FUN_0058de70
                  (this_ptr,local_180,local_a4,0x100,iVar5,0);
        iVar5 = shape_design_c_getLastTextureProcessIndex_FUN_0046a860();
        if (iVar5 != local_a0) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x7fe;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Cram getNumCramsUsed() mismatch!");
        }
        local_74 = 0;
        if (0 < local_a0) {
          do {
            pcVar21 = shape_design_c_getTextureName_FUN_0046e060(local_74);
            strcpy(local_3c->textures[local_74].textures[0].texture_name, pcVar21);
            local_74 = local_74 + 1;
          } while (local_74 < local_a0);
        }
        local_3c = local_3c + 1;
        local_38 = local_38 + 1;
      } while (local_38 < this_ptr->num_texture_sets);
    }
    this_ptr->num_textures = local_a0;
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350,0);
    shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4,0);
    return 1;
  }
LAB_0058d5ef:
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_350,0);
  shape_meshlod_cpp_CLodMesh_dtor_FUN_00515950(&local_1f4,0);
  return 0;
}
