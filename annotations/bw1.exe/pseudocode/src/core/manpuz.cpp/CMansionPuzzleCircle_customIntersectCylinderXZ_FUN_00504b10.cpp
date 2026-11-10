// Name: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10
// Address: 00504b10
// Address Range: [[00504b10, 00504b8b]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00504b10(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

{
  CKeyFramedModel *pCVar1;
  int iVar2;
  SPanel *pSVar3;
  CBoundingBox3D *pCVar4;
  CBoundingBox3D *pCVar5;
  byte bVar6;
  CBoundingBox3D CStack_24;
  
  bVar6 = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00468900(&this_ptr->panel_model);
  pCVar4 = &pCVar1->bounds;
  pCVar5 = &CStack_24;
  for (iVar2 = 6; iVar2 != 0; iVar2 = iVar2 + -1) {
    (pCVar5->min).x = (pCVar4->min).x;
    pCVar4 = (CBoundingBox3D *)((int)pCVar4 + (uint)bVar6 * -8 + 4);
    pCVar5 = (CBoundingBox3D *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pSVar3 = this_ptr->panels;
  do {
    while (pSVar3->exists != 0) {
      core_setcolid_cpp_FUN_005580d0
                (g_CDemonSetPtr,cylinder,&CStack_24,&pSVar3->local_position,&pSVar3->rotation_matrix
                );
      pSVar3 = pSVar3 + 1;
      if ((SGem *)pSVar3 == this_ptr->gems) {
        return;
      }
    }
    pSVar3 = pSVar3 + 1;
  } while ((SGem *)pSVar3 != this_ptr->gems);
  return;
}
