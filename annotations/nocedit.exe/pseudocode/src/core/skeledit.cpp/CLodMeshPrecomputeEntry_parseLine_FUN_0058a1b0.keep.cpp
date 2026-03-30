// Name: core_skeledit.cpp_CLodMeshPrecomputeEntry_parseLine_FUN_0058a1b0
// Address: 0058a1b0
// MANUAL RECONSTRUCTION
// Address Range: [[0058a1b0, 0058a25c]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_parseLine_FUN_0058a1b0(CLodMeshPrecomputeEntry *this_ptr,char *line)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_CLodMeshPrecomputeEntry_parseLine_FUN_0058a1b0(CLodMeshPrecomputeEntry *this_ptr,char *line)

{
  int local_10;
  
  local_10 = -1;
  sscanf
            (line,"\"%[^\"]\", \"%[^\"]\", \"%[^\"]\"%n",this_ptr->pos_filename,this_ptr->skl_filename,this_ptr->s3d_filename,&local_10);
  if (local_10 < 0) {
    sscanf(line,"\"%[^\"]\", \"%[^\"]\"%n",this_ptr->pos_filename,this_ptr->skl_filename,&local_10);
    if (local_10 < 0) {
      return 0;
    }
    this_ptr->s3d_filename[0] = '\0';
  }
  this_ptr->dead1 = 0;
  this_ptr->dead2 = 0;
  sscanf(line + local_10," , %d , %d",&this_ptr->dead1,&this_ptr->dead2);
  return 1;
}
