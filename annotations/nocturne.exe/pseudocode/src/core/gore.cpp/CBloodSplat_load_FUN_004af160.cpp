// Name: core_gore.cpp_CBloodSplat_load_FUN_004af160
// Address: 004af160
// Address Range: [[004af160, 004af1e1]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004af160(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->position,&(this_ptr->position).y,
             &(this_ptr->position).z);
  _fscanf(file_handle,"%d,%d,%d\n",&this_ptr->is_wall_splat,&this_ptr->blood_type,this_ptr);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->rotation,&(this_ptr->rotation).z,
             &(this_ptr->rotation).y);
  iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n",&this_ptr->texture_variant,
                     &this_ptr->position_fixed,&(this_ptr->position_fixed).y,
                     &(this_ptr->position_fixed).z,&this_ptr->normal_fixed,
                     &(this_ptr->normal_fixed).y,&(this_ptr->normal_fixed).z);
  return iVar1;
}
