// Name: core_chain.cpp_CChain_FUN_00430eb0
// Address: 00430eb0
// Address Range: [[00430eb0, 00430fd6]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_chain_cpp_CChain_FUN_00430eb0(CChain *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl
core_chain_cpp_CChain_FUN_00430eb0(CChain *this_ptr,CBoundingBox3D *out_box)

{
  CBoundingBox3D *pCVar1;
  CVector3f *pCVar2;
  SChainVertex *pSVar3;
  int iVar4;
  CVector3f local_40;
  CVector3f local_34;
  CVector3f local_28;
  CVector3f local_1c;
  
  local_1c.y = 9999.0;
  local_1c.z = 9999.0;
  local_40.x = -9999.0;
  local_40.y = -9999.0;
  local_40.z = -9999.0;
  local_1c.x = 9999.0;
  iVar4 = 0;
  if (0 < this_ptr->vertex_count) {
    pSVar3 = this_ptr->unk3;
    do {
      if (*(float *)pSVar3->unk < local_1c.x) {
        local_1c.x = *(float *)pSVar3->unk;
      }
      if (*(float *)(pSVar3->unk + 4) < local_1c.y) {
        local_1c.y = *(float *)(pSVar3->unk + 4);
      }
      if (*(float *)(pSVar3->unk + 8) < local_1c.z) {
        local_1c.z = *(float *)(pSVar3->unk + 8);
      }
      if (local_40.x < *(float *)pSVar3->unk) {
        local_40.x = *(float *)pSVar3->unk;
      }
      if (local_40.y < *(float *)(pSVar3->unk + 4)) {
        local_40.y = *(float *)(pSVar3->unk + 4);
      }
      if (local_40.z < *(float *)(pSVar3->unk + 8)) {
        local_40.z = *(float *)(pSVar3->unk + 8);
      }
      iVar4 = iVar4 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar4 < this_ptr->vertex_count);
  }
  pCVar1 = (CBoundingBox3D *)
           core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_34,&local_1c);
  if (out_box != pCVar1) {
    (out_box->min).x = (pCVar1->min).x;
    (out_box->min).y = (pCVar1->min).y;
    (out_box->min).z = (pCVar1->min).z;
  }
  pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_28,&local_40);
  if (&out_box->max == pCVar2) {
    return out_box;
  }
  (out_box->max).x = pCVar2->x;
  (out_box->max).y = pCVar2->y;
  (out_box->max).z = pCVar2->z;
  return out_box;
}
