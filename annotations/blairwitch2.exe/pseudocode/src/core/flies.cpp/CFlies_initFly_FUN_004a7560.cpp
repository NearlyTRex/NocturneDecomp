// Name: core_flies.cpp_CFlies_initFly_FUN_004a7560
// Address: 004a7560
// Address Range: [[004a7560, 004a7654]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_initFly_FUN_004a7560(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_flies_cpp_CFlies_initFly_FUN_004a7560(CFlies *this_ptr,int fly_index)

{
  SFly *pSVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  SFly *pSStack_1c;
  CVector3f *pCStack_18;
  
  bVar5 = 0;
  pSStack_1c = this_ptr->flies + fly_index;
  core_flies_cpp_FUN_004a7660(this_ptr,0);
  pSVar1 = pSStack_1c;
  pCVar3 = pSStack_1c->control_points;
  fStack_4c = fStack_28;
  (&stack0xffffffb8)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (pCVar3 != (CVector3f *)&stack0xffffffb4) {
    pCVar3->x = fStack_4c;
    pSVar1->control_points[0].y = fStack_48;
    pSVar1->control_points[0].z = fStack_44;
  }
  pCVar4 = pSStack_1c->control_points;
  pCStack_18 = pSStack_1c->control_points + 3;
  pCVar3 = pSStack_1c->control_points;
  do {
    pCVar3 = pCVar3 + 1;
    core_flies_cpp_FUN_004a7660(this_ptr,pCVar4);
    fStack_40 = fStack_34;
    (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (pCVar3 != (CVector3f *)&stack0xffffffc0) {
      pCVar3->x = fStack_40;
      pCVar3->y = fStack_3c;
      pCVar3->z = fStack_38;
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != pCStack_18);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  pSStack_1c->t = fVar2;
  return;
}
