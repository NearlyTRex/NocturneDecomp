// Name: core_manpuz.cpp_FUN_00509720
// Address: 00509720
// Address Range: [[00509720, 005097c1]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_00509720()

#include "nocturne.h"

/* Signature: byte actors_other_manpuz.cpp_FUN_00509720(uint param_1, uint
   param_2) */

void core_manpuz_cpp_FUN_00509720(void)

{
  CKeyFramedModel *pCVar1;
  BADSPACEBASE *in_ESP;
  int *piVar2;
  int in_stack_00000004;
  CBoundingBox3D *in_stack_00000008;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  float local_10;
  
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80
                     ((CKeyFramedModelInstance *)(in_stack_00000004 + 0x158));
  local_20 = (pCVar1->bounds_min).x;
  local_1c = (pCVar1->bounds_min).y;
  local_18 = (pCVar1->bounds_min).z;
  local_14 = (pCVar1->bounds_max).x;
  local_10 = (pCVar1->bounds_max).y;
  piVar2 = (int *)(in_stack_00000004 + 0x5f0);
  do {
    while (*piVar2 != 0) {
      core_setcolid_cpp_CDemonSet_testOBBCylinderCollision_FUN_00573140
                (g_CDemonSetPtr,in_stack_00000008,(CMatrix3x3f *)&local_20,
                 (SIntersectXZCylinder *)(piVar2 + 3),(SIntersectXZCylinder *)(piVar2 + 9));
      piVar2 = piVar2 + 0x19;
      if (piVar2 == (int *)(in_stack_00000004 + 0xaa0)) {
        return;
      }
    }
    piVar2 = piVar2 + 0x19;
  } while (piVar2 != (int *)(in_stack_00000004 + 0xaa0));
  return;
}
