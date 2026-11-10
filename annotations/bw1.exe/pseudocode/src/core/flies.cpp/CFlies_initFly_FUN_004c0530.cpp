// Name: core_flies.cpp_CFlies_initFly_FUN_004c0530
// Address: 004c0530
// Address Range: [[004c0530, 004c0624]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_initFly_FUN_004c0530(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_flies_cpp_CFlies_initFly_FUN_004c0530(CFlies *this_ptr,int fly_index)

{
  SFly *pSVar1;
  float fVar2;
  CVector3f *pCVar3;
  CVector3f *pCVar4;
  byte bVar5;
  float afStackY_1034 [1016];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_28;
  SFly *local_1c;
  CVector3f *local_18;
  
  bVar5 = 0;
  local_1c = this_ptr->flies + fly_index;
  core_flies_cpp_FUN_004c0630(this_ptr,0);
  pSVar1 = local_1c;
  pCVar3 = local_1c->control_points;
  local_4c = local_28;
  (&stack0xffffffb8)[(uint)bVar5 * 0xfffffffe] =
       (float)*(uint *)(&stack0xffffffdc + (uint)bVar5 * -8);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
  if (pCVar3 != (CVector3f *)&stack0xffffffb4) {
    pCVar3->x = local_4c;
    pSVar1->control_points[0].y = local_48;
    pSVar1->control_points[0].z = local_44;
  }
  pCVar4 = local_1c->control_points;
  local_18 = local_1c->control_points + 3;
  pCVar3 = local_1c->control_points;
  do {
    pCVar3 = pCVar3 + 1;
    core_flies_cpp_FUN_004c0630(this_ptr,pCVar4);
    local_40 = local_34;
    (&stack0xffffffc4)[(uint)bVar5 * 0xfffffffe] =
         (float)*(uint *)(&stack0xffffffd0 + (uint)bVar5 * -8);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) =
         *(uint *)(&stack0xffffffd4 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
    if (pCVar3 != (CVector3f *)&stack0xffffffc0) {
      pCVar3->x = local_40;
      pCVar3->y = local_3c;
      pCVar3->z = local_38;
    }
    pCVar4 = pCVar4 + 1;
  } while (pCVar4 != local_18);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  local_1c->t = fVar2;
  return;
}
