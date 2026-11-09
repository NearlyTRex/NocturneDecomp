// Name: core_gore.cpp_CBloodSplat_save_FUN_004c8750
// Address: 004c8750
// Address Range: [[004c8750, 004c87f5]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004c8750(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_save_FUN_004c8750(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  FUN_005b8010
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x4,
             (double)*(float *)&this_ptr->field_0x8,(double)*(float *)&this_ptr->field_0xc);
  FUN_005b8010();
  FUN_005b8010
            (file_handle,"%f,%f,%f\n",(double)*(float *)&this_ptr->field_0x18,
             (double)*(float *)&this_ptr->field_0x20,(double)*(float *)&this_ptr->field_0x1c);
  iVar1 = FUN_005b8010
                    (file_handle,"%d,%d,%d,%d,%d,%d,%d\n",*(uint *)&this_ptr->field_0x28,
                     *(uint *)&this_ptr->field_0x2c,*(uint *)&this_ptr->field_0x30,
                     *(uint *)&this_ptr->field_0x34,*(uint *)&this_ptr->field_0x38,
                     *(uint *)&this_ptr->field_0x3c,*(uint *)&this_ptr->field_0x40);
  return iVar1;
}
