// Name: core_gore.cpp_CBloodPool_save_FUN_004c8e00
// Address: 004c8e00
// Address Range: [[004c8e00, 004c8e75]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004c8e00(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004c8e00(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  FUN_005b8010
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  FUN_005b8010(file_handle,"%d,%d\n",this_ptr->expired,this_ptr->blood_type);
  iVar1 = FUN_005b8010
                    (file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     (double)this_ptr->age,(this_ptr->position_fixed).x,(this_ptr->position_fixed).y
                     ,(this_ptr->position_fixed).z);
  return iVar1;
}
