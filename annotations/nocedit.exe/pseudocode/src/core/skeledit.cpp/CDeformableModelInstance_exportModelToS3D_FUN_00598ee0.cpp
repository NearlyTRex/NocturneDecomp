// Name: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f0e]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0 (CDeformableModelInstance *this_ptr,char *filename)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
          (CDeformableModelInstance *this_ptr,char *filename)

{
  CMatrix3x4f *unaff_retaddr;
  char *output_filename;
  CMatrix3x4f *lod_level;
  
  __STK(0x14);
  lod_level = (this_ptr->bone_transform).bone_world_matrices;
  output_filename = (char *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(this_ptr);
  core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
            ((CDeformableModel *)filename,output_filename,(int)lod_level,unaff_retaddr);
  return;
}
