// Name: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f0e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance *this_ptr,char *filename)

{
  CDeformableModel *this_ptr_00;
  int lod_level;
  CMatrix3x4f *bone_matrices;
  
  __STK();
  bone_matrices = (this_ptr->bone_transform).bone_world_matrices;
  lod_level = 0;
  this_ptr_00 = core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
            (this_ptr_00,filename,lod_level,bone_matrices);
  return;
}
