// Name: core_skeledit.cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0
// Address: 00589fe0
// MANUAL RECONSTRUCTION
// Address Range: [[00589fe0, 0058a0e5]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_load_FUN_00589fe0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle)

{
  int auStack_c;

  core_skeledit_cpp_CLodMeshPrecomputeEntry_reset_FUN_00589fc0(this_ptr);
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&auStack_c);
  _fscanf(file_handle,"%*[^\n]\n");
  this_ptr->pos_filename[0] = '\0';
  _fscanf(file_handle," \"%[^\"]",this_ptr->pos_filename);
  _fscanf(file_handle,"\"\n");
  _fscanf(file_handle,"%*[^\n]\n");
  this_ptr->skl_filename[0] = '\0';
  _fscanf(file_handle," \"%[^\"]",this_ptr->skl_filename);
  _fscanf(file_handle,"\"\n");
  _fscanf(file_handle,"%*[^\n]\n");
  this_ptr->s3d_filename[0] = '\0';
  _fscanf(file_handle," \"%[^\"]",this_ptr->s3d_filename);
  _fscanf(file_handle,"\"\n");
  _fscanf(file_handle,"%*[^\n]\n");
  _fscanf(file_handle,"%d\n",&this_ptr->for_shadows);
  return;
}
