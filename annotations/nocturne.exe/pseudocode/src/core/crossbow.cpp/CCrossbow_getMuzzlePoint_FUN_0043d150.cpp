// Name: core_crossbow.cpp_CCrossbow_getMuzzlePoint_FUN_0043d150
// Address: 0043d150
// Address Range: [[0043d150, 0043d1bd]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_0043d150(CCrossbow *this_ptr,CVector3f *out_point)

#include "nocturne.h"

CVector3f * __cdecl core_crossbow_cpp_CCrossbow_getMuzzlePoint_FUN_0043d150(CCrossbow *this_ptr,CVector3f *out_point)

{
  float fVar1;
  float fVar2;
  CKeyFramedModel *pCVar3;
  
  pCVar3 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00454530(&(this_ptr->base).model)
  ;
  fVar1 = (pCVar3->bounds).max.y;
  fVar2 = (pCVar3->bounds).max.z;
  out_point->x = 0.0;
  out_point->y = fVar1;
  out_point->z = fVar2;
  return out_point;
}
