// Name: core_skeleton.cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620
// Address: 00541620
// Address Range: [[00541620, 0054163f]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_CDeformableModel_getVertexPoolPtr_FUN_00541620(CDeformableModel *this_ptr,int index)

{
  return (CVector3f *)(&this_ptr->field_0x1750 + index * 0xc);
}
