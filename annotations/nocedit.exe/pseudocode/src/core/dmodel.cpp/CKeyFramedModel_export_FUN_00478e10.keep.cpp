// Name: core_dmodel.cpp_CKeyFramedModel_export_FUN_00478e10
// Address: 00478e10
// MANUAL RECONSTRUCTION
// Address Range: [[00478e10, 0047925a]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

#include "nocturne.h"

void __cdecl core_dmodel_cpp_CKeyFramedModel_export_FUN_00478e10(CKeyFramedModel *this_ptr,char *output_filename)

{
  _FILE *file;
  uint uVar6;
  char *pcVar9;
  char *pcVar2;
  int iVar11;
  int iVar12;
  int iVar3;
  char *pcVar4;
  int local_14;
  CDemonTriangle *pCVar4;
  SMRGLPrimitiveQuad *poly;

  pcVar9 = strchr(output_filename,':');
  if (pcVar9 == (char *)0x0) {
    pcVar2 = strchr(output_filename,'\\');
    if (pcVar2 == (char *)0x0) {
      file = engine_dosio_cpp_getFile_FUN_00481a50("models",output_filename,"wt");
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
  _fprintf(file,"// vertex list: x,y,z\n");
  for (iVar11 = 0; iVar11 < this_ptr->vertex_count * this_ptr->frame_count; iVar11 = iVar11 + 1) {
    _fprintf(file,"%d,%d,%d\n",this_ptr->vertex_list[iVar11].x,
               this_ptr->vertex_list[iVar11].y,this_ptr->vertex_list[iVar11].z);
  }
  _fprintf(file,"// poly list: textureIndex, n, verts(index,x2s,y2s)\n");
  if (0 < this_ptr->poly_count) {
    for (local_14 = 0; local_14 < this_ptr->poly_count; local_14 = local_14 + 1) {
      poly = this_ptr->poly_vert_list + local_14;
      _fprintf(file,"%d,%d",this_ptr->poly_texture_index_list[local_14],poly->base.base.count);
      if (0 < poly->base.base.count) {
        for (iVar12 = 0; iVar12 < poly->base.base.count; iVar12 = iVar12 + 1) {
          _fprintf(file,", %d,%d,%d",poly->vertices[iVar12].vertex_index,
                     poly->vertices[iVar12].texture_u,poly->vertices[iVar12].texture_v);
        }
      }
      _fprintf(file,"\n");
    }
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
  if (0 < this_ptr->part_count) {
    for (iVar3 = 0; iVar3 < this_ptr->part_count; iVar3 = iVar3 + 1) {
      _fprintf(file,"%d,%d\n",this_ptr->part_list[iVar3].vertex_count,
                 this_ptr->part_list[iVar3].poly_count);
    }
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
