// Name: core_manpuz.cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720
// Address: 00509720
// Address Range: [[00509720, 005097c1]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

#include "nocturne.h"

void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_customIntersectCylinderXZ_FUN_00509720(CMansionPuzzleCircle *this_ptr,SIntersectXZCylinder *cylinder)

{
  CKeyFramedModel *pCVar1;
  int *piVar2;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->panel_model);
  local_24 = (pCVar1->bounds_min).x;
  local_20 = (pCVar1->bounds_min).y;
  local_1c = (pCVar1->bounds_min).z;
  local_18 = (pCVar1->bounds_max).x;
  local_14 = (pCVar1->bounds_max).y;
  piVar2 = &this_ptr->exists;
  local_10 = (pCVar1->bounds_max).z;
  do {
    while (*piVar2 != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                (g_CDemonSetPtr,(CBoundingBox3D *)cylinder,(CMatrix3x3f *)&local_24,
                 (SIntersectXZCylinder *)(piVar2 + 3),(SIntersectXZCylinder *)(piVar2 + 9));
      piVar2 = piVar2 + 0x19;
      if (piVar2 == (int *)(this_ptr->unk3 + 0x458)) {
        return;
      }
    }
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(this_ptr->unk3 + 0x458));
  return;
}
