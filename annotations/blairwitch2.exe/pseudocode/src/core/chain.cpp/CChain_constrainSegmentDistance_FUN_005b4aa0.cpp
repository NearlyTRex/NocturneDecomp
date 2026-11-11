// Name: core_chain.cpp_CChain_constrainSegmentDistance_FUN_005b4aa0
// Address: 005b4aa0
// Address Range: [[005b4aa0, 005b4d2a]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  byte auStack_74 [104];
  
  if ((this_ptr->ground_collide_flag != 0) && ((vertex_a->position).y < this_ptr->cached_distance))
  {
    (vertex_a->velocity).z = 0.0;
    (vertex_a->velocity).y = (vertex_a->velocity).z;
    (vertex_a->velocity).x = (vertex_a->velocity).y;
    (vertex_a->position).y = this_ptr->cached_distance;
  }
  if (&fStack_a4 != (float *)auStack_74) {
    fStack_a4 = (vertex_a->position).x - (vertex_b->position).x;
    fStack_a0 = (vertex_a->position).y - (vertex_b->position).y;
    fStack_9c = (vertex_a->position).z - (vertex_b->position).z;
  }
  fVar6 = (float)(((int)(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0) >> 1
                  ) + _DAT_01caf5b4);
  if (fVar6 <= this_ptr->segment_length) {
    return;
  }
  fVar2 = fVar6 - this_ptr->segment_length;
  fVar6 = 1.0 / fVar6;
  fVar4 = fStack_a4 * fVar2 * fVar6;
  fVar5 = fStack_a0 * fVar2 * fVar6;
  fVar6 = fStack_9c * fVar2 * fVar6;
  pfVar1 = &this_ptr->inv_delta_time;
  (vertex_a->position).x = (vertex_a->position).x - fVar4;
  (vertex_a->position).y = (vertex_a->position).y - fVar5;
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
