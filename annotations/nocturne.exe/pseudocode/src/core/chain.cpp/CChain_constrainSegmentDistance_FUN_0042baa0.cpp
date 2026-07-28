// Name: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042baa0
// Address: 0042baa0
// Address Range: [[0042baa0, 0042bc95]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042baa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float local_68 [12];
  float local_38;
  float local_34;
  float local_30;
  
  if ((this_ptr->ground_collide_flag != 0) && ((vertex_a->position).y < this_ptr->cached_distance))
  {
    (vertex_a->velocity).z = 0.0;
    (vertex_a->velocity).y = (vertex_a->velocity).z;
    (vertex_a->velocity).x = (vertex_a->velocity).y;
    (vertex_a->position).y = this_ptr->cached_distance;
  }
  if (&local_38 != local_68) {
    local_38 = (vertex_a->position).x - (vertex_b->position).x;
    local_34 = (vertex_a->position).y - (vertex_b->position).y;
    local_30 = (vertex_a->position).z - (vertex_b->position).z;
  }
  fVar6 = (float)(((int)(local_30 * local_30 + local_38 * local_38 + local_34 * local_34) >> 1) +
                 (int)CVector3f_01c70708.y);
  if (fVar6 <= this_ptr->segment_length) {
    return;
  }
  fVar2 = fVar6 - this_ptr->segment_length;
  fVar6 = 1.0 / fVar6;
  fVar4 = local_38 * fVar2 * fVar6;
  fVar5 = local_34 * fVar2 * fVar6;
  fVar6 = local_30 * fVar2 * fVar6;
  (vertex_a->position).x = (vertex_a->position).x - fVar4;
  (vertex_a->position).y = (vertex_a->position).y - fVar5;
  pfVar1 = &this_ptr->inv_delta_time;
  (vertex_a->position).z = (vertex_a->position).z - fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  (vertex_a->velocity).x = (vertex_a->velocity).x - fVar4 * *pfVar1;
  (vertex_a->velocity).y = (vertex_a->velocity).y - fVar5 * fVar2;
  (vertex_a->velocity).z = (vertex_a->velocity).z - fVar6 * fVar3;
  (vertex_b->position).x = (vertex_b->position).x + fVar4;
  (vertex_b->position).y = (vertex_b->position).y + fVar5;
  (vertex_b->position).z = (vertex_b->position).z + fVar6;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  (vertex_b->velocity).x = (vertex_b->velocity).x + fVar4 * *pfVar1;
  (vertex_b->velocity).y = (vertex_b->velocity).y + fVar5 * fVar2;
  (vertex_b->velocity).z = (vertex_b->velocity).z + fVar6 * fVar3;
  return;
}
