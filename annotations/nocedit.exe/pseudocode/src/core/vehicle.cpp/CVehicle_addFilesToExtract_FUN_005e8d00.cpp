// Name: core_vehicle.cpp_CVehicle_addFilesToExtract_FUN_005e8d00
// Address: 005e8d00
// Address Range: [[005e8d00, 005e8d1c]]
// Convention: __cdecl
// Signature: void __cdecl core_vehicle_cpp_CVehicle_addFilesToExtract_FUN_005e8d00(CVehicle *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_vehicle_cpp_CVehicle_addFilesToExtract_FUN_005e8d00(CVehicle *this_ptr,_FILE *file_handle)

{
  _fprintf(file_handle,"data\\%s\n",this_ptr->course_name);
  return;
}
