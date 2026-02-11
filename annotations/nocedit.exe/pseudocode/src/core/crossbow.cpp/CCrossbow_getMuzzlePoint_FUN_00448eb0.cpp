// Name: core_crossbow.cpp_CCrossbow_getMuzzlePoint_FUN_00448eb0
// Address: 00448eb0
// Address Range: [[00448eb0, 00448f1d]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_00448eb0(CCrossbow *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl
core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_00448eb0(CCrossbow *this_ptr,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&(this_ptr->base).model)
  ;
  fVar1 = (pCVar3->bounds_max).y;
  fVar2 = (pCVar3->bounds_max).z;
  out_point->x = 0.0;
  out_point->y = fVar1;
  out_point->z = fVar2;
  return out_point;
}
