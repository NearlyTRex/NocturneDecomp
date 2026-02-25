// Name: core_setutil.cpp_CDemonLight_buildRotationMatrix_FUN_005851d0
// Address: 005851d0
// Address Range: [[005851d0, 005851e5]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_CDemonLight_buildRotationMatrix_FUN_005851d0(CDemonLight *this_ptr,CVector3f *euler_angles)

#include "nocturne.h"

void __cdecl core_setutil_cpp_CDemonLight_buildRotationMatrix_FUN_005851d0(CDemonLight *this_ptr,CVector3f *euler_angles)

{
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            (&(this_ptr->base).base.rotation_matrix,euler_angles);
  return;
}
