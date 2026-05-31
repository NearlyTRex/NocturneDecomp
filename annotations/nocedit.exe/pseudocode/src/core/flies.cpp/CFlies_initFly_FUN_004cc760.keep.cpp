// Name: core_flies.cpp_CFlies_initFly_FUN_004cc760
// Address: 004cc760
// MANUAL RECONSTRUCTION
// Address Range: [[004cc760, 004cc819]]
// Convention: __cdecl
// Signature: void __cdecl core_flies_cpp_CFlies_initFly_FUN_004cc760(CFlies *this_ptr,int fly_index)

#include "nocturne.h"

void __cdecl core_flies_cpp_CFlies_initFly_FUN_004cc760(CFlies *this_ptr,int fly_index)

{
  CVector3f *pCVar2;
  CVector3f *pCVar3;
  float fVar4;
  SFly *pSVar5;
  CVector3f *pCVar4;
  CVector3f *reference_point;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f *pCVar1;
  
  pSVar5 = this_ptr->flies + fly_index;
  pCVar2 = core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820
                     (this_ptr,&local_30,(CVector3f *)0x0);
  if (pSVar5->control_points != pCVar2) {
    pSVar5->control_points[0] = *pCVar2;
  }
  reference_point = pSVar5->control_points;
  pCVar4 = pSVar5->control_points;
  pCVar1 = pSVar5->control_points;
  do {
    pCVar4 = pCVar4 + 1;
    pCVar3 = core_flies_cpp_CFlies_generateRandomPoint_FUN_004cc820
                       (this_ptr,&local_24,reference_point);
    if (pCVar4 != pCVar3) {
      *pCVar4 = *pCVar3;
    }
    reference_point = reference_point + 1;
  } while (reference_point != pCVar1 + 3);
  fVar4 = core_actor_cpp_getRandomFloatFromRange_FUN_0040cc10(0.0,1.0);
  pSVar5->t = fVar4;
  return;
}
