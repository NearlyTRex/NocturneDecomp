// Name: core_dmodel.cpp_CKeyFramedModel_ctor_FUN_00452590
// Address: 00452590
// Address Range: [[00452590, 0045262d]]
// Convention: __cdecl
// Signature: CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel *this_ptr)

#include "nocturne.h"

CKeyFramedModel * __cdecl core_dmodel_cpp_CKeyFramedModel_ctor_FUN_00452590(CKeyFramedModel *this_ptr)

{
  SMRGLTextureLod *pSVar1;
  SMRGLTextureBasic *pSVar2;
  
  this_ptr->vertex_count = 0;
  this_ptr->vertex_list = (CVector3i *)0x0;
  this_ptr->vertex_normal_list = (CVector3i *)0x0;
  this_ptr->poly_count = 0;
  this_ptr->poly_vert_list = (SMRGLPrimitiveQuad *)0x0;
  this_ptr->poly_texture_index_list = (int *)0x0;
  this_ptr->env_map_opac_list = (uchar *)0x0;
  this_ptr->texture_count = 0;
  this_ptr->texture_list[4].textures[0].base.type = 0;
  this_ptr->texture_list[7].textures[2].base.count = 0;
  this_ptr->frame_count = 0;
  pSVar1 = this_ptr->texture_list + 7;
  pSVar1->textures[2].texture_name[0] = '\0';
  pSVar1->textures[2].texture_name[1] = '\0';
  pSVar1->textures[2].texture_name[2] = '\0';
  pSVar1->textures[2].texture_name[3] = '\0';
  pSVar2 = this_ptr->texture_list[7].textures;
  pSVar2[2].texture_name[4] = '\0';
  pSVar2[2].texture_name[5] = '\0';
  pSVar2[2].texture_name[6] = '\0';
  pSVar2[2].texture_name[7] = '\0';
  pSVar2 = this_ptr->texture_list[7].textures;
  pSVar2[2].texture_name[8] = '\0';
  pSVar2[2].texture_name[9] = '\0';
  pSVar2[2].texture_name[10] = '\0';
  pSVar2[2].texture_name[0xb] = '\0';
  pSVar2 = this_ptr->texture_list[7].textures;
  pSVar2[2].texture_name[0xc] = '\0';
  pSVar2[2].texture_name[0xd] = '\0';
  pSVar2[2].texture_name[0xe] = '\0';
  pSVar2[2].texture_name[0xf] = '\0';
  this_ptr->model_filename[0] = '\0';
  return this_ptr;
}
