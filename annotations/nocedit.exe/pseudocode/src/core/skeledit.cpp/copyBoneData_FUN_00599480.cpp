// Name: core_skeledit.cpp_copyBoneData_FUN_00599480
// Address: 00599480
// Address Range: [[00599480, 0059954b]]
// Convention: __cdecl
// Signature: SBoneData * __cdecl core_skeledit_cpp_copyBoneData_FUN_00599480(SBoneData *dest,SBoneData *src)

#include "nocturne.h"

SBoneData * __cdecl core_skeledit_cpp_copyBoneData_FUN_00599480(SBoneData *dest,SBoneData *src)

{
  int iVar1;
  SBoneData *pSVar2;
  SBoneData *pSVar3;
  
  pSVar2 = src;
  pSVar3 = dest;
  for (iVar1 = 7; iVar1 != 0; iVar1 = iVar1 + -1) {
    *(uint *)pSVar3->name = *(uint *)pSVar2->name;
    pSVar2 = (SBoneData *)(pSVar2->name + 4);
    pSVar3 = (SBoneData *)(pSVar3->name + 4);
  }
  *(ushort *)pSVar3->name = *(ushort *)pSVar2->name;
  dest->parent_index = src->parent_index;
  (dest->local_matrix).m[0].w = (src->local_matrix).m[0].w;
  (dest->local_matrix).m[0].x = (src->local_matrix).m[0].x;
  (dest->local_matrix).m[0].y = (src->local_matrix).m[0].y;
  (dest->local_matrix).m[0].z = (src->local_matrix).m[0].z;
  (dest->local_matrix).m[1].w = (src->local_matrix).m[1].w;
  (dest->local_matrix).m[1].x = (src->local_matrix).m[1].x;
  (dest->local_matrix).m[1].y = (src->local_matrix).m[1].y;
  (dest->local_matrix).m[1].z = (src->local_matrix).m[1].z;
  (dest->local_matrix).m[2].w = (src->local_matrix).m[2].w;
  (dest->local_matrix).m[2].x = (src->local_matrix).m[2].x;
  (dest->local_matrix).m[2].y = (src->local_matrix).m[2].y;
  (dest->local_matrix).m[2].z = (src->local_matrix).m[2].z;
  (dest->world_matrix).m[0].w = (src->world_matrix).m[0].w;
  (dest->world_matrix).m[0].x = (src->world_matrix).m[0].x;
  (dest->world_matrix).m[0].y = (src->world_matrix).m[0].y;
  (dest->world_matrix).m[0].z = (src->world_matrix).m[0].z;
  (dest->world_matrix).m[1].w = (src->world_matrix).m[1].w;
  (dest->world_matrix).m[1].x = (src->world_matrix).m[1].x;
  (dest->world_matrix).m[1].y = (src->world_matrix).m[1].y;
  (dest->world_matrix).m[1].z = (src->world_matrix).m[1].z;
  (dest->world_matrix).m[2].w = (src->world_matrix).m[2].w;
  (dest->world_matrix).m[2].x = (src->world_matrix).m[2].x;
  (dest->world_matrix).m[2].y = (src->world_matrix).m[2].y;
  (dest->world_matrix).m[2].z = (src->world_matrix).m[2].z;
  return dest;
}
