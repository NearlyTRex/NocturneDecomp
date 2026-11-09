// Name: core_box.cpp_CBox_saveToFile_FUN_005b44b0
// Address: 005b44b0
// Address Range: [[005b44b0, 005b4602]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_005b44b0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_saveToFile_FUN_005b44b0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  FUN_005b8010();
  FUN_005b8010(file_handle,"%s%d\n",indent_prefix,1);
  FUN_005b8010();
  FUN_005b8010
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)*(float *)this_ptr,
             (double)*(float *)(this_ptr + 4),(double)*(float *)(this_ptr + 8));
  FUN_005b8010
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)*(float *)(this_ptr + 0xc),
             (double)*(float *)(this_ptr + 0x14),(double)*(float *)(this_ptr + 0x10));
  FUN_005b8010
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)*(float *)(this_ptr + 0xa4),
             (double)*(float *)(this_ptr + 0xa8),(double)*(float *)(this_ptr + 0xac));
  FUN_005b8010();
  FUN_005b8010
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)*(float *)(this_ptr + 0x4c),
             (double)*(float *)(this_ptr + 0x50),(double)*(float *)(this_ptr + 0x54));
  FUN_005b8010
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)*(float *)(this_ptr + 0x70),
             (double)*(float *)(this_ptr + 0x74),(double)*(float *)(this_ptr + 0x78));
  FUN_005b8010
            (file_handle,"%s%d\n",indent_prefix,*(uint *)(this_ptr + 0x254));
  return;
}
