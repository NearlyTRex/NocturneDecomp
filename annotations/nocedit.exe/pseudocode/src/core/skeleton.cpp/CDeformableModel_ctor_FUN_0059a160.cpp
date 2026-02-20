// Name: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
// Address: 0059a160
// Address Range: [[0059a160, 0059a26d]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  CDeformableModel_ptr_31888 pvVar2;
  CDeformableModel_ptr_33100 pvVar3;
  CDeformableModel *pCVar2;
  SLod *pSVar3;
  
  pvVar2 = __arrinit(this_ptr->vertex_pool,100,&g_CVectorTypeInfo);
  pvVar3 = __arrinit
                     (&ADJ(pvVar2)->bbox_pool[0].max,100,&g_CBoundingBox3DTypeInfo);
  pCVar1 = ADJ(pvVar3);
  pCVar2 = pCVar1;
  do {
    pSVar3 = pCVar2->lod_info;
    pCVar2->vertex_data_ptr[0] = (SVert *)0x0;
    pCVar2->tri_count[0] = 0;
    pCVar2->cap_tri_count[0] = 0;
    pCVar2->tri_data_ptr[0] = (SInputFace *)0x0;
    pCVar2->index_data_ptr[0] = (int *)0x0;
    pCVar2->cap_index_ptr[0] = (int *)0x0;
    pCVar2->vertex_count[0] = 0;
    pCVar2 = (CDeformableModel *)pSVar3;
  } while (pSVar3 != ADJ(pvVar3)->lod_info + 2);
  ADJ(pvVar3)->num_texture_sets = 0;
  ADJ(pvVar3)->num_textures = 0;
  memset(ADJ(pvVar3)->texture_sets,0,0x7080);
  ADJ(pvVar3)->num_parts = 0;
  memset(ADJ(pvVar3)->parts,0,0xb40);
  ADJ(pvVar3)->model_name[0] = '\0';
  ADJ(pvVar3)->skeleton_ptr = (CSkeleton *)0x0;
  (ADJ(pvVar3)->model_scale).z = 1.0;
  pCVar1->num_lods = 0;
  (ADJ(pvVar3)->model_scale).y = (ADJ(pvVar3)->model_scale).z;
  (ADJ(pvVar3)->model_scale).x = (ADJ(pvVar3)->model_scale).y;
  memset(ADJ(pvVar3)->lod_info,0,0x28);
  ADJ(pvVar3)->bbox_pool[0].min.z = 0.0;
  ADJ(pvVar3)->bbox_pool[0].min.y = ADJ(pvVar3)->bbox_pool[0].min.z;
  ADJ(pvVar3)->bbox_pool[0].min.x = ADJ(pvVar3)->bbox_pool[0].min.y;
  return pCVar1;
}
