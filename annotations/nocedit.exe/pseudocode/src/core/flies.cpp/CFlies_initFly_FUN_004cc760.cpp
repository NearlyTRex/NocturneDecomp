// Name: core_flies.cpp_CFlies_initFly_FUN_004cc760
// Address: 004cc760
// Address Range: [[004cc760, 004cc7ee] [004cc808, 004cc819]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_initFly_FUN_004cc760(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_flies_cpp_CFlies_initFly_FUN_004cc760(CFlies *this_ptr,int fly_index)

{
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SFly *pSVar5;
  CVector3f *reference_point;
  CVector3f local_30;
  CVector3f local_24;
  SFly *local_18;
  
  pSVar5 = this_ptr->flies + fly_index;
  local_18 = pSVar5;
  pCVar2 = core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820
                     (this_ptr,&local_30,(CVector3f *)0x0);
  if (pSVar5->control_points != pCVar2) {
    pSVar5->control_points[0].x = pCVar2->x;
    pSVar5->control_points[0].y = pCVar2->y;
    pSVar5->control_points[0].z = pCVar2->z;
  }
  reference_point = local_18->control_points;
  pCVar2 = local_18->control_points;
  pCVar1 = local_18->control_points;
  do {
    pCVar2 = pCVar2 + 1;
    pCVar3 = core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820
                       (this_ptr,&local_24,reference_point);
    if (pCVar2 != pCVar3) {
      pCVar2->x = pCVar3->x;
      pCVar2->y = pCVar3->y;
      pCVar2->z = pCVar3->z;
    }
    reference_point = reference_point + 1;
  } while (reference_point != pCVar1 + 3);
  fVar4 = core_actor_cpp_getRandomFloat_FUN_0040cc10(0.0,1.0);
  local_18->t = fVar4;
  return;
}
