// Name: core_chain.cpp_CChain_getBoundingBox_FUN_00430eb0
// Address: 00430eb0
// MANUAL RECONSTRUCTION
// Address Range: [[00430eb0, 00430fd6]]
// Convention: __cdecl
// Signature: CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_00430eb0(CChain *this_ptr,CBoundingBox3D *out_box)

#include "nocturne.h"

CBoundingBox3D * __cdecl core_chain_cpp_CChain_getBoundingBox_FUN_00430eb0(CChain *this_ptr,CBoundingBox3D *out_box)

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
    pSVar3 = this_ptr->vertices;
    do {
      if ((pSVar3->position).x < local_1c.x) {
        local_1c.x = (pSVar3->position).x;
      }
      if ((pSVar3->position).y < local_1c.y) {
        local_1c.y = (pSVar3->position).y;
      }
      if ((pSVar3->position).z < local_1c.z) {
        local_1c.z = (pSVar3->position).z;
      }
      if (local_40.x < (pSVar3->position).x) {
        local_40.x = (pSVar3->position).x;
      }
      if (local_40.y < (pSVar3->position).y) {
        local_40.y = (pSVar3->position).y;
      }
      if (local_40.z < (pSVar3->position).z) {
        local_40.z = (pSVar3->position).z;
      }
      iVar4 = iVar4 + 1;
      pSVar3 = pSVar3 + 1;
    } while (iVar4 < this_ptr->vertex_count);
  }
  pCVar1 = (CBoundingBox3D *)
           core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_34,&local_1c);
  if (out_box != pCVar1) {
    out_box->min = pCVar1->min;
  }
  pCVar2 = core_actor_cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
                     (&this_ptr->base,&local_28,&local_40);
  if (&out_box->max == pCVar2) {
    return out_box;
  }
  out_box->max = *pCVar2;
  return out_box;
}
