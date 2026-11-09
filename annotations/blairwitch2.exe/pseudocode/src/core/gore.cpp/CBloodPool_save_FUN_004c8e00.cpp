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
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x4,
             (double)*(float *)&this_ptr->field_0x8,(double)*(float *)&this_ptr->field_0xc);
  FUN_005b8010
            (file_handle,"%d,%d\n",*(uint *)this_ptr,*(uint *)&this_ptr->field_0x10
            );
  iVar1 = FUN_005b8010
                    (file_handle,"%d,%f,%d,%d,%d\n",*(uint *)&this_ptr->field_0x14,
                     (double)*(float *)&this_ptr->field_0x18,*(uint *)&this_ptr->field_0x1c,
                     *(uint *)&this_ptr->field_0x20,*(uint *)&this_ptr->field_0x24);
  return iVar1;
}
