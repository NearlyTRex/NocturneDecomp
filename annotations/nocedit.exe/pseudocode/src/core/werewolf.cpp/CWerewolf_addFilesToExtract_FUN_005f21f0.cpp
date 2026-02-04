// Name: core_werewolf.cpp_CWerewolf_addFilesToExtract_FUN_005f21f0
// Address: 005f21f0
// Address Range: [[005f21f0, 005f221b]]
// Convention: __cdecl
// Signature: void __cdecl core_werewolf_cpp_CWerewolf_addFilesToExtract_FUN_005f21f0(CWerewolf *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_werewolf_cpp_CWerewolf_addFilesToExtract_FUN_005f21f0(CWerewolf *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0((CDemonActor *)this_ptr,file_handle);
  core_skeledit_cpp_CDeformableModelInstance_addFilesToExtract_FUN_0058a260
            (&(this_ptr->base).base.model,file_handle);
  return;
}
