// Name: core_skeleton.cpp_FUN_00563c90
// Address: 00563c90
// Address Range: [[00563c90, 00563caf]]
// Convention: __cdecl
// Signature: CVector3f * __cdecl core_skeleton_cpp_FUN_00563c90(CDeformableModel *this_ptr,int index)

#include "nocturne.h"

CVector3f * __cdecl core_skeleton_cpp_FUN_00563c90(CDeformableModel *this_ptr,int index)

{
  return (CVector3f *)(&this_ptr->field_0x2290 + index * 0xc);
}
