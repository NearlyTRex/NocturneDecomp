// Name: core_chain.cpp_CChain_constrainSegmentDistance_FUN_0042fed0
// Address: 0042fed0
// Address Range: [[0042fed0, 004300c5]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

#include "nocturne.h"

void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_0042fed0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

{
  float fVar1;
  float fVar7;
  float fVar8;
  float fVar6;
  float local_68 [12];
  float local_38;
  float local_34;
  float local_30;
  float fVar3;
  float fVar4;
  float *pfVar1;
  float fVar2;
  float fVar5;
  
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
                 INT_02d7a7b8);
  if (fVar6 <= this_ptr->segment_length) {
    return;
  }
  fVar1 = fVar6 - this_ptr->segment_length;
  fVar8 = 1.0 / fVar6;
  fVar4 = local_38 * fVar1 * fVar8;
  fVar5 = local_34 * fVar1 * fVar8;
  fVar8 = local_30 * fVar1 * fVar8;
  (vertex_a->position).x = (vertex_a->position).x - fVar4;
  (vertex_a->position).y = (vertex_a->position).y - fVar5;
  pfVar1 = &this_ptr->inv_delta_time;
  (vertex_a->position).z = (vertex_a->position).z - fVar8;
  fVar2 = *pfVar1;
  fVar3 = *pfVar1;
  (vertex_a->velocity).x = (vertex_a->velocity).x - fVar4 * *pfVar1;
  (vertex_a->velocity).y = (vertex_a->velocity).y - fVar5 * fVar2;
  (vertex_a->velocity).z = (vertex_a->velocity).z - fVar8 * fVar3;
  (vertex_b->position).x = (vertex_b->position).x + fVar4;
  (vertex_b->position).y = (vertex_b->position).y + fVar5;
  (vertex_b->position).z = (vertex_b->position).z + fVar8;
  fVar1 = *pfVar1;
  fVar7 = *pfVar1;
  (vertex_b->velocity).x = (vertex_b->velocity).x + fVar4 * *pfVar1;
  (vertex_b->velocity).y = (vertex_b->velocity).y + fVar5 * fVar1;
  (vertex_b->velocity).z = (vertex_b->velocity).z + fVar8 * fVar7;
  return;
}
