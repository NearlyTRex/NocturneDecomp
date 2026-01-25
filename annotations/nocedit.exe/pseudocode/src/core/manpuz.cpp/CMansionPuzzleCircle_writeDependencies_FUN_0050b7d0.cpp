// Name: core_manpuz.cpp_CMansionPuzzleCircle_writeDependencies_FUN_0050b7d0
// Address: 0050b7d0
// Address Range: [[0050b7d0, 0050b806]]
// Convention: __cdecl
// Signature: void core_manpuz.cpp_CMansionPuzzleCircle_writeDependencies_FUN_0050b7d0(CMansionPuzzleCircle * this_ptr, FILE * file_handle)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_writeDependencies_FUN_0050b7d0
          (CMansionPuzzleCircle *this_ptr,FILE *file_handle)

{
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base_actor,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)this_ptr->field1_0x158,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            ((CKeyFramedModelInstance *)(this_ptr->field1_0x158 + 0x17c),file_handle);
  return;
}
