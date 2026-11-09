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
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x4,
             (double)*(float *)&this_ptr->field_0x8,(double)*(float *)&this_ptr->field_0xc);
  FUN_005c03c0
            (file_handle,"%d,%d\n",*(uint *)this_ptr,*(uint *)&this_ptr->field_0x10
            );
  iVar1 = FUN_005c03c0
                    (file_handle,"%d,%f,%d,%d,%d\n",*(uint *)&this_ptr->field_0x14,
                     (double)*(float *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                     *(uint *)&this_ptr->field_0x20,*(uint *)&this_ptr->field_0x24);
  return iVar1;
}
