// Name: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
// Address Range: [[00478e10, 0047925a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

{
  uint *puVar1;
  CDemonTriangle *pCVar2;
  CVector3i **ppCVar3;
  int iVar4;
  _FILE *file;
  uint uVar5;
  CKeyFramedModel *pCVar6;
  int iVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  int iVar11;
  int local_1c;
  int local_18;
  int local_14;
  
  pcVar9 = output_filename;
  do {
    pcVar8 = pcVar9;
    if (*pcVar9 == ':') goto LAB_00478e35;
    if (*pcVar9 == '\0') break;
    pcVar8 = pcVar9 + 1;
    if (*pcVar8 == ':') goto LAB_00478e35;
    pcVar9 = pcVar9 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00478e35:
  pcVar9 = output_filename;
  if (pcVar8 == (char *)0x0) {
    do {
      pcVar8 = pcVar9;
      if (*pcVar9 == '\\') goto LAB_00478e57;
      if (*pcVar9 == '\0') break;
      pcVar8 = pcVar9 + 1;
      if (*pcVar8 == '\\') goto LAB_00478e57;
      pcVar9 = pcVar9 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
LAB_00478e57:
    if (pcVar8 == (char *)0x0) {
      file = engine_dosio_c_getFile_FUN_00481a50("models",output_filename,"wt");
      goto LAB_00478e7f;
    }
  }
  file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                   (output_filename,(char *)0x0,"wt","..\\core\\dmodel.cpp",0x569);
LAB_00478e7f:
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x56d;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Can't create demon model %s",output_filename);
  }
  pCVar2 = this_ptr->collision_triangle_list;
  _fprintf(file,"// .KFM version\n");
  _fprintf(file,"%d\n",8);
  _fprintf(file,"// vertexCount,polyCount,textureCount,partCount,frameCount\n");
  _fprintf(file,"%d,%d,%d,%d,%d\n",this_ptr->vertex_count,this_ptr->poly_count,
             this_ptr->texture_count,this_ptr->part_count,this_ptr->frame_count);
  _fprintf(file,"// useCollisionListFlag\n");
  _fprintf(file,"%d\n",(uint)(pCVar2 != (CDemonTriangle *)0x0));
  _fprintf(file,"// transparentPixelFlag\n");
  _fprintf(file,"%d\n",this_ptr->transparent_pixel_flag);
  _fprintf(file,"// disableBackfaceCulling\n");
  _fprintf(file,"%d\n",this_ptr->disable_backface_culling);
  uVar5 = (uint)(this_ptr->env_map_opac_list != (uchar *)0x0);
  _fprintf(file,"// envMapListFlag\n");
  _fprintf(file,"%d\n",uVar5);
  iVar7 = 0;
  _fprintf(file,"// vertex list: x,y,z\n");
  for (iVar10 = 0; iVar10 < this_ptr->vertex_count * this_ptr->frame_count; iVar10 = iVar10 + 1) {
    ppCVar3 = this_ptr->vertex_list;
    iVar11 = iVar7 + 8;
    iVar4 = iVar7 + 4;
    puVar1 = (uint *)((int)ppCVar3 + iVar7);
    iVar7 = iVar7 + 0xc;
    _fprintf(file,"%d,%d,%d\n",*puVar1,*(uint *)((int)ppCVar3 + iVar4),
               *(uint *)((int)ppCVar3 + iVar11));
  }
  _fprintf(file,"// poly list: textureIndex, n, verts(index,x2s,y2s)\n");
  local_14 = 0;
  if (0 < this_ptr->poly_count) {
    local_18 = 0;
    local_1c = 0;
    do {
      iVar10 = (int)this_ptr->poly_vert_list + local_18;
      iVar11 = 0;
      _fprintf(file,"%d,%d",
                 *(uint *)((int)this_ptr->poly_texture_index_list + local_1c),
                 *(uint *)(iVar10 + 4));
      iVar7 = iVar10;
      if (0 < *(int *)(iVar10 + 4)) {
        do {
          iVar11 = iVar11 + 1;
          _fprintf(file,", %d,%d,%d",*(uint *)(iVar7 + 0x18),
                     *(uint *)(iVar7 + 0x1c),*(uint *)(iVar7 + 0x20));
          iVar7 = iVar7 + 0xc;
        } while (iVar11 < *(int *)(iVar10 + 4));
      }
      _fprintf(file,"\n");
      local_1c = local_1c + 4;
      local_18 = local_18 + 0x48;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->poly_count);
  }
  if (uVar5 != 0) {
    _fprintf(file,"// envMapOpacity list\n");
    iVar7 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fprintf(file,"%d\n",(uint)this_ptr->env_map_opac_list[iVar7])
        ;
        iVar7 = iVar7 + 1;
      } while (iVar7 < this_ptr->poly_count);
    }
  }
  _fprintf(file,"// texture list\n");
  iVar7 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar9 = this_ptr->texture_list[0].textures[0].texture_name;
    do {
      _fprintf(file,"%s\n",pcVar9);
      iVar7 = iVar7 + 1;
      pcVar9 = pcVar9 + 0x48;
    } while (iVar7 < this_ptr->texture_count);
  }
  _fprintf(file,"// part list (vertexCount, polyCount)\n");
  iVar7 = 0;
  pCVar6 = this_ptr;
  if (0 < this_ptr->part_count) {
    do {
      _fprintf(file,"%d,%d\n",pCVar6->part_list[0].vertex_count,
                 pCVar6->part_list[0].poly_count);
      iVar7 = iVar7 + 1;
      pCVar6 = (CKeyFramedModel *)(pCVar6->model_filename + 8);
    } while (iVar7 < this_ptr->part_count);
  }
  if ((file->_flag & 0x20) != 0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x5e1;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("Error writing model to %s",output_filename);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\dmodel.cpp",0x5e5);
  return;
}
