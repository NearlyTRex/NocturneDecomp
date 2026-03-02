// Name: core_skeledit.cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0
// Address: 0058a0f0
// Address Range: [[0058a0f0, 0058a1a8]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_save_FUN_0058a0f0(CLodMeshPrecomputeEntry *this_ptr,_FILE *file_handle)

{
  __STK();
  _fprintf(file_handle,"// version\n");
  _fprintf(file_handle,"1\n");
  _fprintf(file_handle,"// posFilename\n");
  _fprintf(file_handle,"\"%s\"\n",this_ptr);
  _fprintf(file_handle,"// sklFilename\n");
  _fprintf(file_handle,"\"%s\"\n",this_ptr->skl_filename);
  _fprintf(file_handle,"// s3dFilename\n");
  _fprintf(file_handle,"\"%s\"\n",this_ptr->s3d_filename);
  _fprintf(file_handle,"// forShadows\n");
  _fprintf(file_handle,"%d\n",this_ptr->for_shadows);
  return;
}
