// Name: core_ammobox.cpp_CAmmoBox_addFilesToExtract_FUN_00411c00
// Address: 00411c00
// Address Range: [[00411c00, 00411c17]]
// Convention: __cdecl
// Signature: void __cdecl core_ammobox_cpp_CAmmoBox_addFilesToExtract_FUN_00411c00(CAmmoBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_ammobox_cpp_CAmmoBox_addFilesToExtract_FUN_00411c00(CAmmoBox *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
