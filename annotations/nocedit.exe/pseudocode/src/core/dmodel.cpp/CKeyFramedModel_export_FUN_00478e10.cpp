// Name: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
// Address Range: [[00478e10, 0047925a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

{
  _FILE *file;
  uint uVar6;
  CKeyFramedModel *pCVar7;
  int iVar8;
  int iVar1;
  char *pcVar9;
  char *pcVar10;
  char *pcVar2;
  int iVar11;
  int iVar12;
  int iVar3;
  char *pcVar4;
  int local_1c;
  int local_18;
  int local_14;
  CVector3i *pCVar5;
  CDemonTriangle *pCVar4;
  uint *puVar3;
  uint *puVar2;
  uint *puVar1;
  
  pcVar10 = output_filename;
  do {
    pcVar9 = pcVar10;
    if (*pcVar10 == ':') goto LAB_00478e35;
    if (*pcVar10 == '\0') break;
    pcVar9 = pcVar10 + 1;
    if (*pcVar9 == ':') goto LAB_00478e35;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_00478e35:
  pcVar4 = output_filename;
  if (pcVar9 == (char *)0x0) {
    do {
      pcVar2 = pcVar4;
      if (*pcVar4 == '\\') goto LAB_00478e57;
      if (*pcVar4 == '\0') break;
      pcVar2 = pcVar4 + 1;
      if (*pcVar2 == '\\') goto LAB_00478e57;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar2 != '\0');
    pcVar2 = (char *)0x0;
LAB_00478e57:
    if (pcVar2 == (char *)0x0) {
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
  pCVar4 = this_ptr->collision_triangle_list;
  _fprintf(file,"// .KFM version\n");
  _fprintf(file,"%d\n",8);
  _fprintf(file,"// vertexCount,polyCount,textureCount,partCount,frameCount\n");
  _fprintf(file,"%d,%d,%d,%d,%d\n",this_ptr->vertex_count,this_ptr->poly_count,
             this_ptr->texture_count,this_ptr->part_count,this_ptr->frame_count);
  _fprintf(file,"// useCollisionListFlag\n");
  _fprintf(file,"%d\n",(uint)(pCVar4 != (CDemonTriangle *)0x0));
  _fprintf(file,"// transparentPixelFlag\n");
  _fprintf(file,"%d\n",this_ptr->transparent_pixel_flag);
  _fprintf(file,"// disableBackfaceCulling\n");
  _fprintf(file,"%d\n",this_ptr->disable_backface_culling);
  uVar6 = (uint)(this_ptr->env_map_opac_list != (uchar *)0x0);
  _fprintf(file,"// envMapListFlag\n");
  _fprintf(file,"%d\n",uVar6);
  iVar8 = 0;
  _fprintf(file,"// vertex list: x,y,z\n");
  for (iVar11 = 0; iVar11 < this_ptr->vertex_count * this_ptr->frame_count; iVar11 = iVar11 + 1) {
    pCVar5 = this_ptr->vertex_list;
    puVar2 = (uint *)((int)&pCVar5->z + iVar8);
    puVar3 = (uint *)((int)&pCVar5->y + iVar8);
    puVar1 = (uint *)((int)&pCVar5->x + iVar8);
    iVar8 = iVar8 + 0xc;
    _fprintf(file,"%d,%d,%d\n",*puVar1,*puVar3,*puVar2);
  }
  _fprintf(file,"// poly list: textureIndex, n, verts(index,x2s,y2s)\n");
  local_14 = 0;
  if (0 < this_ptr->poly_count) {
    local_18 = 0;
    local_1c = 0;
    do {
      iVar1 = (int)&(((SMRGLPrimitiveQuad *)(this_ptr->poly_vert_list->vertices + -2))->base).base.
                    type + local_18;
      iVar12 = 0;
      _fprintf(file,"%d,%d",
                 *(uint *)((int)this_ptr->poly_texture_index_list + local_1c),
                 *(uint *)(iVar1 + 4));
      iVar3 = iVar1;
      if (0 < *(int *)(iVar1 + 4)) {
        do {
          iVar12 = iVar12 + 1;
          _fprintf(file,", %d,%d,%d",*(uint *)(iVar3 + 0x18),
                     *(uint *)(iVar3 + 0x1c),*(uint *)(iVar3 + 0x20));
          iVar3 = iVar3 + 0xc;
        } while (iVar12 < *(int *)(iVar1 + 4));
      }
      _fprintf(file,"\n");
      local_1c = local_1c + 4;
      local_18 = local_18 + 0x48;
      local_14 = local_14 + 1;
    } while (local_14 < this_ptr->poly_count);
  }
  if (uVar6 != 0) {
    _fprintf(file,"// envMapOpacity list\n");
    iVar3 = 0;
    if (0 < this_ptr->poly_count) {
      do {
        _fprintf(file,"%d\n",(uint)this_ptr->env_map_opac_list[iVar3])
        ;
        iVar3 = iVar3 + 1;
      } while (iVar3 < this_ptr->poly_count);
    }
  }
  _fprintf(file,"// texture list\n");
  iVar3 = 0;
  if (0 < this_ptr->texture_count) {
    pcVar4 = this_ptr->texture_list[0].textures[0].texture_name;
    do {
      _fprintf(file,"%s\n",pcVar4);
      iVar3 = iVar3 + 1;
      pcVar4 = pcVar4 + 0x48;
    } while (iVar3 < this_ptr->texture_count);
  }
  _fprintf(file,"// part list (vertexCount, polyCount)\n");
  iVar3 = 0;
  pCVar7 = this_ptr;
  if (0 < this_ptr->part_count) {
    do {
      _fprintf(file,"%d,%d\n",pCVar7->part_list[0].vertex_count,
                 pCVar7->part_list[0].poly_count);
      iVar3 = iVar3 + 1;
      pCVar7 = (CKeyFramedModel *)(pCVar7->model_filename + 8);
    } while (iVar3 < this_ptr->part_count);
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
