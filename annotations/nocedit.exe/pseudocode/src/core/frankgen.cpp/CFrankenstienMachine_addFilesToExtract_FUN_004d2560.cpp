// Name: core_frankgen.cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560
// Address: 004d2560
// Address Range: [[004d2560, 004d25c4]]
// Convention: __cdecl
// Signature: void __cdecl core_frankgen_cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560 (CFrankenstienMachine *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_frankgen_cpp_CFrankenstienMachine_addFilesToExtract_FUN_004d2560
          (CFrankenstienMachine *this_ptr,_FILE *file_handle)

{
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->bed_model,file_handle);
  if (this_ptr->course_filename[0] != '\0') {
    _fprintf(file_handle,"data\\%s\n",this_ptr->course_filename);
  }
  if ((this_ptr->body_model).model_name[0] == '\0') {
    return;
  }
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->body_model,file_handle);
  return;
}
