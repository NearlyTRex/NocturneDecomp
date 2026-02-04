// Name: core_manpuz.cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0
// Address: 0050b7d0
// Address Range: [[0050b7d0, 0050b806]]
// Convention: __cdecl
// Signature: void __cdecl core_manpuz_cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0 (CMansionPuzzleCircle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_manpuz_cpp_CMansionPuzzleCircle_addFilesToExtract_FUN_0050b7d0
          (CMansionPuzzleCircle *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->panel_model,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->gem_model,file_handle);
  return;
}
