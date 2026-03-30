// Name: core_skeledit.cpp_CBoneStructure_fixupMatrices_FUN_0058adb0
// Address: 0058adb0
// MANUAL RECONSTRUCTION
// Address Range: [[0058adb0, 0058aea1]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_fixupMatrices_FUN_0058adb0(CBoneStructure *this_ptr)

{
  int iVar1;
  CMatrix3x4f *matrix;
  double dVar2;
  int local_28;
  
  iVar1 = 0;
  if (0 < this_ptr->bone_count) {
    matrix = &this_ptr->bones[0].world_matrix;
    do {
      dVar2 = core_xform_cpp_determinant_FUN_005f61c0(matrix);
      if (dVar2 < 0.0) {
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        g_CurrentLineNumber = 0x3b2;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is mirrored.",(this_ptr->bones + iVar1)->name);
      }
      local_28 = SUB84(__BITCAST_UINT64(dVar2),0);
      if ((((ulonglong)dVar2 & 0x7fffffff00000000) == 0) && (local_28 == 0)) {
        g_CurrentLineNumber = 0x3b6;
        g_CurrentFilename = "..\\core\\skeledit.cpp";
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("CBoneStructure::fixupMatrices - %s is singular.",(this_ptr->bones + iVar1)->name);
      }
      core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)matrix,0);
      iVar1 = iVar1 + 1;
      matrix = (CMatrix3x4f *)&matrix[2].m[2].x;
    } while (iVar1 < this_ptr->bone_count);
  }
  core_skeledit_cpp_CBoneStructure_computeLocalMatrices_FUN_0058ac80(this_ptr);
  return;
}
