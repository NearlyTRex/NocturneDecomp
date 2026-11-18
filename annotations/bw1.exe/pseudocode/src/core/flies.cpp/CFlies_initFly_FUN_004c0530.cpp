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
  CVector3f *reference_point;
  byte bVar4;
  float afStackY_1034 [1016];
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  CVector3f local_28;
  SFly *local_1c;
  CVector3f *local_18;
  
  bVar4 = 0;
  local_1c = this_ptr->flies + fly_index;
  core_flies_cpp_CFlies_generateRandomPoint_FUN_004c0630(this_ptr,(CVector3f *)0x0,&local_28);
  pSVar1 = local_1c;
  pCVar3 = local_1c->control_points;
  local_4c = local_28.x;
  (&stack0xffffffb8)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&local_28 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&stack0xffffffbc + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&local_28 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (pCVar3 != (CVector3f *)&stack0xffffffb4) {
    pCVar3->x = local_4c;
    pSVar1->control_points[0].y = local_48;
    pSVar1->control_points[0].z = local_44;
  }
  reference_point = local_1c->control_points;
  local_18 = local_1c->control_points + 3;
  pCVar3 = local_1c->control_points;
  do {
    pCVar3 = pCVar3 + 1;
    core_flies_cpp_CFlies_generateRandomPoint_FUN_004c0630(this_ptr,reference_point,&local_34);
    local_40 = local_34.x;
    (&stack0xffffffc4)[(uint)bVar4 * 0xfffffffe] =
         (float)*(uint *)((int)&local_34 + (uint)bVar4 * -8 + 4);
    *(uint *)((int)&stack0xffffffc8 + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
         *(uint *)((int)&local_34 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    if (pCVar3 != (CVector3f *)&stack0xffffffc0) {
      pCVar3->x = local_40;
      pCVar3->y = local_3c;
      pCVar3->z = local_38;
    }
    reference_point = reference_point + 1;
  } while (reference_point != local_18);
  fVar2 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc00(0.0,1.0);
  local_1c->t = fVar2;
  return;
}
