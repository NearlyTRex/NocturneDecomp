// Name: core_gore.cpp_CBloodPool_save_FUN_004e5660
// Address: 004e5660
// Address Range: [[004e5660, 004e56d5]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004e5660(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004e5660(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  FUN_005c03c0(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar1 = FUN_005c03c0
                    (file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     (double)this_ptr->age,(this_ptr->position_fixed).x,(this_ptr->position_fixed).y
                     ,(this_ptr->position_fixed).z);
  return iVar1;
}
