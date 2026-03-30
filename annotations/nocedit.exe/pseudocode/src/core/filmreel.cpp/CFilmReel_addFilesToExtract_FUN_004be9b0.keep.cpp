// Name: core_filmreel.cpp_CFilmReel_addFilesToExtract_FUN_004be9b0
// Address: 004be9b0
// MANUAL RECONSTRUCTION
// Address Range: [[004be9b0, 004be9f9]]
// Convention: __cdecl
// Signature: void __cdecl core_filmreel_cpp_CFilmReel_addFilesToExtract_FUN_004be9b0(CFilmReel *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_filmreel_cpp_CFilmReel_addFilesToExtract_FUN_004be9b0(CFilmReel *this_ptr,_FILE *file_handle)

{
  CKeyFramedModel *pCVar1;
  int skip_raw_files;
  
  core_actor_cpp_CDemonActor_addFilesToExtract_FUN_0040cfd0(&this_ptr->base,file_handle);
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  _fprintf(file_handle,"MODELS\\%s\n",pCVar1->model_filename);
  skip_raw_files = 0;
  pCVar1 = core_dmodel_cpp_CKeyFramedModelInstance_getModelPtr_FUN_00478d80(&this_ptr->model);
  core_dmodel_cpp_CKeyFramedModel_addFilesToExtract_FUN_0047ed00(pCVar1,file_handle,skip_raw_files);
  return;
}
