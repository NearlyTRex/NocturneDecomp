// Name: core_trigger.cpp_CTrigger_getTargetPoints_FUN_005e0c30
// Address: 005e0c30
// Address Range: [[005e0c30, 005e0cc6]]
// Convention: __cdecl
// Signature: int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_005e0c30(CTrigger *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_trigger_cpp_CTrigger_getTargetPoints_FUN_005e0c30(CTrigger *this_ptr,CVector3f *out_points_array)

{
  float fVar1;
  float fVar2;
  CBoundingBox3D *pCVar3;
  CBoundingBox3D CStack_34;
  CVector3f aCStack_1c [2];
  
  if (this_ptr->hero_triggers_me != 4) {
    return 0;
  }
  pCVar3 = (*((this_ptr->base).vtable._ub)->getBoundingBox)(&this_ptr->base,&CStack_34);
  fVar1 = ((pCVar3->min).y + (pCVar3->max).y) * 0.5f;
  fVar2 = ((pCVar3->min).z + (pCVar3->max).z) * 0.5f;
  if (out_points_array != aCStack_1c) {
    out_points_array->x = ((pCVar3->min).x + (pCVar3->max).x) * 0.5f;
    out_points_array->y = fVar1;
    out_points_array->z = fVar2;
  }
  return 1;
}
