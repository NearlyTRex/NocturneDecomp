// Name: core_skeleton.cpp_CDeformableModel_ctor_FUN_0059a160
// Address: 0059a160
// Address Range: [[0059a160, 0059a26d]]
// Convention: __cdecl
// Signature: CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)

#include "nocturne.h"

CDeformableModel * __cdecl core_skeleton_cpp_CDeformableModel_ctor_FUN_0059a160(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  void *pvVar2;
  CDeformableModel *pCVar3;
  SLod *pSVar4;
  
  pvVar2 = __arrinit(this_ptr->vertex_pool,100,&g_CVectorTypeInfo);
  pvVar2 = __arrinit
                     ((void *)((int)pvVar2 + 0x4bc),100,&g_CBoundingBox3DTypeInfo);
  pCVar1 = (CDeformableModel *)((int)pvVar2 + -0x814c);
  pCVar3 = pCVar1;
  do {
    pSVar4 = pCVar3->lod_info;
    pCVar3->vertex_data_ptr[0] = (SVert *)0x0;
    pCVar3->tri_count[0] = 0;
    pCVar3->cap_tri_count[0] = 0;
    pCVar3->tri_data_ptr[0] = (SInputFace *)0x0;
    pCVar3->index_data_ptr[0] = (int *)0x0;
    pCVar3->cap_index_ptr[0] = (int *)0x0;
    pCVar3->vertex_count[0] = 0;
    pCVar3 = (CDeformableModel *)pSVar4;
  } while (pSVar4 != (SLod *)((int)pvVar2 + -0x8138));
  *(uint *)((int)pvVar2 + -0x8094) = 0;
  *(uint *)((int)pvVar2 + -0x8090) = 0;
  memset((void *)((int)pvVar2 + -0x808c),0,0x7080);
  *(uint *)((int)pvVar2 + -0x100c) = 0;
  memset((void *)((int)pvVar2 + -0x1008),0,0xb40);
  *(byte *)((int)pvVar2 + 0xe10) = 0;
  *(uint *)((int)pvVar2 + 0xe60) = 0;
  *(uint *)((int)pvVar2 + -0x4c0) = 0x3f800000;
  pCVar1->num_lods = 0;
  *(uint *)((int)pvVar2 + -0x4c4) = *(uint *)((int)pvVar2 + -0x4c0);
  *(uint *)((int)pvVar2 + -0x4c8) = *(uint *)((int)pvVar2 + -0x4c4);
  memset((void *)((int)pvVar2 + -0x8148),0,0x28);
  *(uint *)((int)pvVar2 + -4) = 0;
  *(uint *)((int)pvVar2 + -8) = *(uint *)((int)pvVar2 + -4);
  *(uint *)((int)pvVar2 + -0xc) = *(uint *)((int)pvVar2 + -8);
  return pCVar1;
}
