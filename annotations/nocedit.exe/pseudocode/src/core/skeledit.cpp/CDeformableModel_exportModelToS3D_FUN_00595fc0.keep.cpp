// Name: core_skeledit.cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
// Address: 00595fc0
// MANUAL RECONSTRUCTION
// Address Range: [[00595fc0, 0059685b]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0(CDeformableModel *this_ptr,char *output_filename,int lod_level,CMatrix3x4f *bone_matrices)

{
  _FILE *file;
  int *dest;
  int iVar1;
  int iVar2;
  int iVar5;
  SInputFace *pSVar1;
  int *piVar5;
  int iVar6;
  char local_340 [512];
  int aiStack_140 [30];
  CStrList local_c8;
  CStrList local_b8;
  CVector3f local_a8;
  int local_8c;
  int local_88;
  int local_84;
  int local_48;
  int local_44;
  int local_40;
  int local_3c;
  int local_30;
  int local_20;
  int local_1c;
  char *pcVar3;

  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (output_filename,(char *)0x0,"wt","..\\core\\skeledit.cpp",0x155d);
  if (file == (_FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create %s",output_filename);
    return;
  }
  dest = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                   (this_ptr->vertex_count[lod_level] << 2,"..\\core\\skeledit.cpp",0x1565);
  if (dest == (int *)0x0) {
    g_CurrentFilename = "..\\core\\skeledit.cpp";
    g_CurrentLineNumber = 0x1566;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                    (g_CEditorToolsPtr,"Export capped faces?");
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_b8);
  shape_edittool_cpp_CStrList_ctor_FUN_004a2a20(&local_c8);
  local_3c = 0;
  local_40 = this_ptr->tri_count[lod_level];
  local_84 = 0;
  if (0 < this_ptr->num_parts) {
    do {
      memset(dest,0,this_ptr->vertex_count[lod_level] << 2);
      local_44 = local_3c;
      local_30 = 0;
      if (0 < this_ptr->parts[local_84].tri_counts[lod_level]) {
        do {
          pSVar1 = &this_ptr->tri_data_ptr[lod_level][local_44];
          for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
            dest[(&pSVar1->vertex_indices.vertex_index_0)[iVar2]] = 1;
          }
          local_44 = local_44 + 1;
          local_30 = local_30 + 1;
        } while (local_30 < this_ptr->parts[local_84].tri_counts[lod_level]);
      }
      local_48 = local_40;
      if (iVar1 != 0) {
        local_20 = 0;
        if (0 < this_ptr->parts[local_84].cap_tri_counts[lod_level]) {
          do {
            pSVar1 = &this_ptr->tri_data_ptr[lod_level][local_48];
            for (iVar2 = 0; iVar2 < 3; iVar2 = iVar2 + 1) {
              dest[(&pSVar1->vertex_indices.vertex_index_0)[iVar2]] = 1;
            }
            local_48 = local_48 + 1;
            local_20 = local_20 + 1;
          } while (local_20 < this_ptr->parts[local_84].cap_tri_counts[lod_level]);
        }
      }
      aiStack_140[local_84] = 0;
      local_1c = 0;
      piVar5 = dest;
      if (0 < this_ptr->vertex_count[lod_level]) {
        do {
          if (*piVar5 == 0) {
            *piVar5 = -1;
          }
          else {
            aiStack_140[local_84] = aiStack_140[local_84] + 1;
            *piVar5 = local_b8.item_count;
            core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
                      (this_ptr,&local_a8,lod_level,local_1c,bone_matrices);
            _sprintf
                      (local_340,"%g,%g,%g",(double)local_a8.x,
                       (double)local_a8.y,(double)local_a8.z);
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_b8,local_340);
          }
          local_1c = local_1c + 1;
          piVar5 = piVar5 + 1;
        } while (local_1c < this_ptr->vertex_count[lod_level]);
      }
      for (iVar2 = 0; iVar2 < this_ptr->parts[local_84].tri_counts[lod_level]; iVar2 = iVar2 + 1) {
        pSVar1 = &this_ptr->tri_data_ptr[lod_level][local_3c];
        _sprintf
                  (local_340,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                   this_ptr->index_data_ptr[lod_level][local_3c],
                   dest[pSVar1->vertex_indices.vertex_index_0],
                   (double)pSVar1->u_coord_0 * 0.00390625,(double)pSVar1->v_coord_0 * 0.00390625,
                   dest[pSVar1->vertex_indices.vertex_index_1],
                   (double)pSVar1->u_coord_1 * 0.00390625,(double)pSVar1->v_coord_1 * 0.00390625,
                   dest[pSVar1->vertex_indices.vertex_index_2],
                   (double)pSVar1->u_coord_2 * 0.00390625,(double)pSVar1->v_coord_2 * 0.00390625);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8,local_340);
        local_3c = local_3c + 1;
      }
      if (local_3c != local_44) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x15a8;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
      }
      if (iVar1 != 0) {
        for (iVar2 = 0; iVar2 < this_ptr->parts[local_84].cap_tri_counts[lod_level]; iVar2 = iVar2 + 1) {
          pSVar1 = &this_ptr->tri_data_ptr[lod_level][local_40];
          _sprintf
                    (local_340,"%d, %d,%g,%g, %d,%g,%g, %d,%g,%g",
                     this_ptr->index_data_ptr[lod_level][local_3c],
                     dest[pSVar1->vertex_indices.vertex_index_0],
                     (double)pSVar1->u_coord_0 * 0.00390625,(double)pSVar1->v_coord_0 * 0.00390625,
                     dest[pSVar1->vertex_indices.vertex_index_1],
                     (double)pSVar1->u_coord_1 * 0.00390625,(double)pSVar1->v_coord_1 * 0.00390625,
                     dest[pSVar1->vertex_indices.vertex_index_2],
                     (double)pSVar1->u_coord_2 * 0.00390625,(double)pSVar1->v_coord_2 * 0.00390625);
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c8,local_340);
          local_40 = local_40 + 1;
        }
        if (local_40 != local_48) {
          g_CurrentFilename = "..\\core\\skeledit.cpp";
          g_CurrentLineNumber = 0x15b5;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze");
        }
      }
      local_84 = local_84 + 1;
    } while (local_84 < this_ptr->num_parts);
  }
  g_CurrentDebugFilename = "..\\core\\skeledit.cpp";
  g_CurrentDebugLine = 0x15b9;
  shape_memdbg_cpp_free_FUN_005fe659(dest);
  _fprintf(file,"// S3D version\n");
  _fprintf(file,"103\n");
  _fprintf(file,"// numTextures,numTris,numVerts,numParts,numFrames,numLights,numCameras\n");
  _fprintf(file,"%d,%d,%d,%d,1,0,0\n",this_ptr->num_textures,local_c8.item_count,
             local_b8.item_count,this_ptr->num_parts);
  local_88 = 0;
  _fprintf(file,"// partList: firstVert,numVerts,firstTri,numTris,\"name\"\n");
  local_8c = 0;
  iVar6 = 0;
  if (0 < this_ptr->num_parts) {
    iVar1 = 0;
    do {
      iVar5 = this_ptr->parts[iVar6].tri_counts[lod_level] +
              this_ptr->parts[iVar6].cap_tri_counts[lod_level];
      iVar6 = iVar6 + 1;
      _fprintf(file,"%d,%d,%d,%d,\"%s\"\n",local_88,aiStack_140[iVar1],
                 local_8c,iVar5,this_ptr->parts[iVar6].part_name);
      local_88 = local_88 + aiStack_140[iVar1];
      local_8c = local_8c + iVar5;
      iVar1 = iVar1 + 1;
    } while (iVar6 < this_ptr->num_parts);
  }
  _fprintf(file,"// texture list: name\n");
  iVar1 = 0;
  if (0 < this_ptr->num_textures) {
    do {
      _fprintf(file,"%s\n",this_ptr->texture_sets[0].textures[iVar1].textures[0].texture_name);
      iVar1 = iVar1 + 1;
    } while (iVar1 < this_ptr->num_textures);
  }
  _fprintf(file,"// triList: materialIndex,vertices(index, texX, texY)\n");
  iVar1 = 0;
  if (0 < local_c8.item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_c8,iVar1);
      iVar1 = iVar1 + 1;
      _fprintf(file,"%s\n",pcVar3);
    } while (iVar1 < local_c8.item_count);
  }
  iVar1 = 0;
  _fprintf(file,"// vertList: x,y,z\n");
  if (0 < local_b8.item_count) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70(&local_b8,iVar1);
      iVar1 = iVar1 + 1;
      _fprintf(file,"%s\n",pcVar3);
    } while (iVar1 < local_b8.item_count);
  }
  _fprintf(file,"// lightList: \"name\", type, x,y,z, r,g,b, (type-specific info)\n");
  _fprintf(file,"// cameraList: \"name\", x,y,z, p,b,h, fov(rad)\n");
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\skeledit.cpp",0x15ea);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_c8,0);
  shape_edittool_cpp_CStrList_dtor_FUN_004a2a40(&local_b8,0);
  return;
}
