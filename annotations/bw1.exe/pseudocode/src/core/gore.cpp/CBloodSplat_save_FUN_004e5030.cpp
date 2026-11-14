// Name: core_gore.cpp_CBloodSplat_save_FUN_004e5030
// Address: 004e5030
// Address Range: [[004e5030, 004e50d5]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004e5030(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  FUN_005c03c0();
  FUN_005c03c0
            (file_handle,"%f,%f,%f\n",(double)(this_ptr->rotation).x,
             (double)(this_ptr->rotation).z,(double)(this_ptr->rotation).y);
  iVar1 = FUN_005c03c0
                    (file_handle,"%d,%d,%d,%d,%d,%d,%d\n",this_ptr->texture_variant,
                     (this_ptr->position_fixed).x,(this_ptr->position_fixed).y,
                     (this_ptr->position_fixed).z,(this_ptr->normal_fixed).x,
                     (this_ptr->normal_fixed).y,(this_ptr->normal_fixed).z);
  return iVar1;
}
