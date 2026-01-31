// Name: core_battery.cpp_CBattery_writeDependencies_FUN_00418110
// Address: 00418110
// Address Range: [[00418110, 00418159]]
// Convention: __cdecl
// Signature: void __cdecl core_battery_cpp_CBattery_writeDependencies_FUN_00418110(CBattery *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl
core_battery_cpp_CBattery_writeDependencies_FUN_00418110(CBattery *this_ptr,_FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  core_actor_cpp_CDemonActor_writeDependencies_FUN_0040cfd0(&this_ptr->base,file_handle);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  _fprintf(file_handle,"MODELS\\%s\n",pCVar1);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModel_writeDependencies_FUN_0047ed00(pCVar1,file_handle,skip_raw_files);
  return;
}
