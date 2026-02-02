// Name: core_platfrm.cpp_CPlatform_writeDependencies_FUN_0054f2a0
// Address: 0054f2a0
// Address Range: [[0054f2a0, 0054f2df]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_writeDependencies_FUN_0054f2a0(CPlatform *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_platfrm_cpp_CPlatform_writeDependencies_FUN_0054f2a0(CPlatform *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  if (this_ptr->course_filename[0] == '\0') {
    return;
  }
  _fprintf(file_handle,"data\\%s\n",this_ptr->course_filename);
  return;
}
