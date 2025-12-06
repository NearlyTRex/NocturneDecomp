// Name: core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
// Address: 00598ee0
// Address Range: [[00598ee0, 00598f0e]]
// Convention: __cdecl
// Signature: void core_skeledit.cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0(CDeformableModelInstance * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
core_skeledit_cpp_CDeformableModelInstance_exportModelToS3D_FUN_00598ee0
          (CDeformableModelInstance *this_ptr,char *filename)

{
  CDeformableModel *this_ptr_00;
  CDeformableModelInstance *in_stack_0000000c;
  
  crt_stack_c_stack_probe_FUN_005ff9f3(0x14);
  this_ptr_00 = (CDeformableModel *)0x0;
  core_skeleton_cpp_CDeformableModelInstance_getModelPtr_FUN_005a07a0(in_stack_0000000c);
  core_skeledit_cpp_CDeformableModel_exportModelToS3D_FUN_00595fc0
            (this_ptr_00,(char *)(in_stack_0000000c->bone_transform).bone_world_matrices,
             (int)filename,(CMatrix3x4f *)in_stack_0000000c);
  return;
}
