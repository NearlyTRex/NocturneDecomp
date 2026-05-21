// Name: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720
// Address: 00509720
// MANUAL RECONSTRUCTION
// Address Range: [[00509720, 005097c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

{
  CKeyFramedModel *pCVar1;
  SPanel *pSVar2;
  CBoundingBox3D local_24;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->panel_model);
  local_24.min = pCVar1->bounds.min;
  local_24.max = pCVar1->bounds.max;
  pSVar2 = this_ptr->panels;
  do {
    while (pSVar2->exists != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                (g_CDemonSetPtr,cylinder,&local_24,&pSVar2->local_position,&pSVar2->rotation_matrix)
      ;
      pSVar2 = pSVar2 + 1;
      if ((SGem *)pSVar2 == this_ptr->gems) {
        return;
      }
    }
    pSVar2 = pSVar2 + 1;
  } while ((SGem *)pSVar2 != this_ptr->gems);
  return;
}
