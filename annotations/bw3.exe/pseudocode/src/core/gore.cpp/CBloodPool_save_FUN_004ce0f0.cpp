// Name: core_gore.cpp_CBloodPool_save_FUN_004ce0f0
// Address: 004ce0f0
// Address Range: [[004ce0f0, 004ce169]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ce0f0(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_save_FUN_004ce0f0(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  FUN_005a3140
            (file_handle,"%f,%f,%f,%d\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z,this_ptr->area_id);
  FUN_005a3140();
  iVar1 = FUN_005a3140
                    (file_handle,"%d,%f,%d,%d,%d\n",this_ptr->texture_variant,
                     (double)this_ptr->age,(this_ptr->position_fixed).x,(this_ptr->position_fixed).y
                     ,(this_ptr->position_fixed).z);
  return iVar1;
}
