// Name: core_weapon.cpp_CWeapon_addFilesToExtract_FUN_005eea60
// Address: 005eea60
// Address Range: [[005eea60, 005eea77]]
// Convention: __cdecl
// Signature: void __cdecl core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60(CWeapon *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_weapon_cpp_CWeapon_addFilesToExtract_FUN_005eea60(CWeapon *this_ptr,_FILE *file_handle)

{
  core_dmodel_cpp_CKeyFramedModelInstance_addFilesToExtract_FUN_0047edd0
            (&this_ptr->model,file_handle);
  return;
}
