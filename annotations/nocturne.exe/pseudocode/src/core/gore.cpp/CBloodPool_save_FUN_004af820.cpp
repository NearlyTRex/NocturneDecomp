// Name: core_gore.cpp_CBloodPool_save_FUN_004af820
// Address: 004af820
// Address Range: [[004af820, 004af895]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004af820(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004af820(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fprintf(file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  _fprintf(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar1 = _fprintf(file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     (double)this_ptr->age,(this_ptr->position_fixed).x,(this_ptr->position_fixed).y
                     ,(this_ptr->position_fixed).z);
  return iVar1;
}
