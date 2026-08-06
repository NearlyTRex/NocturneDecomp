// Name: core_gore.cpp_CBloodPool_load_FUN_004af7c0
// Address: 004af7c0
// Address Range: [[004af7c0, 004af81b]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_load_FUN_004af7c0(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  _fscanf(file_handle,"%d,%d\n",this_ptr,&this_ptr->blood_type);
  iVar1 = _fscanf(file_handle,"%d,%f,%d,%d,%d\n",&this_ptr->texture_variant,&this_ptr->age,
                     &this_ptr->position_fixed,&(this_ptr->position_fixed).y,
                     &(this_ptr->position_fixed).z);
  return iVar1;
}
