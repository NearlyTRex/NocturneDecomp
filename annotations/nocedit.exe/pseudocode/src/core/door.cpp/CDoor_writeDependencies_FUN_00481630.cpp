// Name: core_door.cpp_CDoor_writeDependencies_FUN_00481630
// Address: 00481630
// Address Range: [[00481630, 00481647]]
// Convention: __cdecl
// Signature: void __cdecl core_door_cpp_CDoor_writeDependencies_FUN_00481630(CDoor *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_door_cpp_CDoor_writeDependencies_FUN_00481630(CDoor *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_writeDependencies_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
