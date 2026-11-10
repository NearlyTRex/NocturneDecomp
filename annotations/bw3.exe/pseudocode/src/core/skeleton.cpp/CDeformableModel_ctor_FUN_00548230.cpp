// Name: core_skeleton.cpp_CDeformableModel_ctor_FUN_00548230
// Address: 00548230
// Address Range: [[00548230, 00548344]]
// Convention: unknown
// Signature: CDeformableModel * core_skeleton_cpp_CDeformableModel_ctor_FUN_00548230(CDeformableModel *this_ptr)

#include "nocturne.h"

/* WARNING: Unknown calling convention -- yet parameter storage is locked */

CDeformableModel * core_skeleton_cpp_CDeformableModel_ctor_FUN_00548230(CDeformableModel *this_ptr)

{
  CDeformableModel *pCVar1;
  int iVar2;
  CDeformableModel *pCVar3;
  SLod *pSVar4;
  
  iVar2 = __arrinit(&this_ptr->field_0x2290,100,&g_CVectorTypeInfo);
  iVar2 = __arrinit(iVar2 + 0x4bc,100,&g_CBoundingBox3DTypeInfo);
  pCVar1 = (CDeformableModel *)(iVar2 + -0x274c);
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
  } while (pSVar4 != (SLod *)(iVar2 + -0x2738));
  *(uint *)(iVar2 + -0x2694) = 0;
  *(uint *)(iVar2 + -0x2690) = 0;
  memset((void *)(iVar2 + -0x268c),0,0xb40);
  *(uint *)(iVar2 + -0x1b4c) = 0;
  memset((void *)(iVar2 + -0x1b48),0,0x1680);
  *(byte *)(iVar2 + 0xe10) = 0;
  *(uint *)(iVar2 + 0xe60) = 0;
  *(uint *)(iVar2 + -0x4c0) = 0x3f800000;
  pCVar1->num_lods = 0;
  *(uint *)(iVar2 + -0x4c4) = *(uint *)(iVar2 + -0x4c0);
  *(uint *)(iVar2 + -0x4c8) = *(uint *)(iVar2 + -0x4c4);
  memset((void *)(iVar2 + -0x2748),0,0x28);
  *(uint *)(iVar2 + -4) = 0;
  *(uint *)(iVar2 + -8) = *(uint *)(iVar2 + -4);
  *(uint *)(iVar2 + -0xc) = *(uint *)(iVar2 + -8);
  *(byte *)(iVar2 + 0xe64) = 0;
  return pCVar1;
}
