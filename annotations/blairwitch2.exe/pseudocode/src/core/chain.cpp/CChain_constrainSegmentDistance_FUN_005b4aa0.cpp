// Name: core_chain.cpp_CChain_constrainSegmentDistance_FUN_005b4aa0
// Address: 005b4aa0
// Address Range: [[005b4aa0, 005b4d2a]]
// Convention: __cdecl
// Signature: void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_chain_cpp_CChain_constrainSegmentDistance_FUN_005b4aa0(CChain *this_ptr,SChainVertex *vertex_a,SChainVertex *vertex_b)

{
  byte *puVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  byte auStack_74 [104];
  
  if ((*(int *)&this_ptr->field_0x288 != 0) &&
     (*(float *)&vertex_a->field_0x4 < *(float *)&this_ptr->field_0x56c)) {
    *(uint *)&vertex_a->field_0x14 = 0;
    *(uint *)&vertex_a->field_0x10 = *(uint *)&vertex_a->field_0x14;
    *(uint *)&vertex_a->field_0xc = *(uint *)&vertex_a->field_0x10;
    *(uint *)&vertex_a->field_0x4 = *(uint *)&this_ptr->field_0x56c;
  }
  if (&fStack_a4 != (float *)auStack_74) {
    fStack_a4 = *(float *)vertex_a - *(float *)vertex_b;
    fStack_a0 = *(float *)&vertex_a->field_0x4 - *(float *)&vertex_b->field_0x4;
    fStack_9c = *(float *)&vertex_a->field_0x8 - *(float *)&vertex_b->field_0x8;
  }
  fVar6 = (float)(((int)(fStack_9c * fStack_9c + fStack_a4 * fStack_a4 + fStack_a0 * fStack_a0) >> 1
                  ) + _DAT_01caf5b4);
  if (fVar6 <= *(float *)&this_ptr->field_0x160) {
    return;
  }
  fVar2 = fVar6 - *(float *)&this_ptr->field_0x160;
  fVar6 = 1.0 / fVar6;
  fVar4 = fStack_a4 * fVar2 * fVar6;
  fVar5 = fStack_a0 * fVar2 * fVar6;
  fVar6 = fStack_9c * fVar2 * fVar6;
  puVar1 = &this_ptr->field_0x570;
  *(float *)vertex_a = *(float *)vertex_a - fVar4;
  *(float *)&vertex_a->field_0x4 = *(float *)&vertex_a->field_0x4 - fVar5;
  *(float *)&vertex_a->field_0x8 = *(float *)&vertex_a->field_0x8 - fVar6;
  fVar2 = *(float *)puVar1;
  fVar3 = *(float *)puVar1;
  *(float *)&vertex_a->field_0xc = *(float *)&vertex_a->field_0xc - fVar4 * *(float *)puVar1;
  *(float *)&vertex_a->field_0x10 = *(float *)&vertex_a->field_0x10 - fVar5 * fVar2;
  *(float *)&vertex_a->field_0x14 = *(float *)&vertex_a->field_0x14 - fVar6 * fVar3;
  *(float *)vertex_b = *(float *)vertex_b + fVar4;
  *(float *)&vertex_b->field_0x4 = *(float *)&vertex_b->field_0x4 + fVar5;
  *(float *)&vertex_b->field_0x8 = *(float *)&vertex_b->field_0x8 + fVar6;
  fVar2 = *(float *)puVar1;
  fVar3 = *(float *)puVar1;
  *(float *)&vertex_b->field_0xc = *(float *)&vertex_b->field_0xc + fVar4 * *(float *)puVar1;
  *(float *)&vertex_b->field_0x10 = *(float *)&vertex_b->field_0x10 + fVar5 * fVar2;
  *(float *)&vertex_b->field_0x14 = *(float *)&vertex_b->field_0x14 + fVar6 * fVar3;
  return;
}
