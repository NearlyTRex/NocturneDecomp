// Name: core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220
// Address: 0059c220
// Address Range: [[0059c220, 0059c23d]]
// Convention: __cdecl
// Signature: SPart * core_skeleton.cpp_CDeformableModel_getPartPtr_FUN_0059c220(CDeformableModel * this_ptr, int part_index)

#include "nocturne.h"

SPart * __cdecl
core_skeleton_cpp_CDeformableModel_getPartPtr_FUN_0059c220
          (CDeformableModel *this_ptr,int part_index)

{
  return this_ptr->parts + part_index;
}
