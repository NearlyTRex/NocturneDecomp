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
  CVector3f *reference_point;
  byte bVar4;
  float afStackY_1034 [1016];
  float fStack_4c;
  float fStack_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  CVector3f CStack_34;
  CVector3f CStack_28;
  SFly *pSStack_1c;
  CVector3f *pCStack_18;
  
  bVar4 = 0;
  pSStack_1c = this_ptr->flies + fly_index;
  core_flies_cpp_CFlies_generateRandomPoint_FUN_004a7660(this_ptr,(CVector3f *)0x0,&CStack_28);
  pSVar1 = pSStack_1c;
  pCVar3 = pSStack_1c->control_points;
  fStack_4c = CStack_28.x;
  (&stack0xffffffb8)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&CStack_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (pCVar3 != (CVector3f *)&stack0xffffffb4) {
    pCVar3->x = fStack_4c;
    pSVar1->control_points[0].y = fStack_48;
    pSVar1->control_points[0].z = fStack_44;
  }
  reference_point = pSStack_1c->control_points;
  pCStack_18 = pSStack_1c->control_points + 3;
  pCVar3 = pSStack_1c->control_points;
  do {
    pCVar3 = pCVar3 + 1;
    core_flies_cpp_CFlies_generateRandomPoint_FUN_004a7660(this_ptr,reference_point,&CStack_34);
    fStack_40 = CStack_34.x;
    (&stack0xffffffc4)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&CStack_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (pCVar3 != (CVector3f *)&stack0xffffffc0) {
      pCVar3->x = fStack_40;
      pCVar3->y = fStack_3c;
      pCVar3->z = fStack_38;
    }
    reference_point = reference_point + 1;
  } while (reference_point != pCStack_18);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cf60(0.0,1.0);
  pSStack_1c->t = fVar2;
  return;
}
