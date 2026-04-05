// Name: core_gore.cpp_CBloodSplat_save_FUN_004ecb90
// Address: 004ecb90
// MANUAL RECONSTRUCTION
// Address Range: [[004ecb90, 004ecc35]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004ecb90(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004ecb90(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d,%d\n",this_ptr->is_wall_splat,this_ptr->blood_type,
             this_ptr->expired);
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation).x,
             (double)(this_ptr->rotation).z,(double)(this_ptr->rotation).y);
  iVar1 = _fprintf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n",this_ptr->texture_variant,
                     (this_ptr->position_fixed).x,(this_ptr->position_fixed).y,
                     (this_ptr->position_fixed).z,(this_ptr->normal_fixed).x,
                     (this_ptr->normal_fixed).y,(this_ptr->normal_fixed).z);
  return iVar1;
}
