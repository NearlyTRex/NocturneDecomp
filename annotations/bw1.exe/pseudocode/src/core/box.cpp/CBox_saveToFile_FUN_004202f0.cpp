// Name: core_box.cpp_CBox_saveToFile_FUN_004202f0
// Address: 004202f0
// Address Range: [[004202f0, 00420442]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_004202f0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_box_cpp_CBox_saveToFile_FUN_004202f0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  FUN_005c03c0();
  FUN_005c03c0(file_handle,"%s%d\n",indent_prefix,1);
  FUN_005c03c0();
  FUN_005c03c0
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  FUN_005c03c0
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z,(double)(this_ptr->orientation).y);
  FUN_005c03c0
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->extents).x,
             (double)(this_ptr->extents).y,(double)(this_ptr->extents).z);
  FUN_005c03c0();
  FUN_005c03c0
            (file_handle,"%s%f,%f,%f\n",indent_prefix,
             (double)(this_ptr->linear_velocity_local).x,(double)(this_ptr->linear_velocity_local).y
             ,(double)(this_ptr->linear_velocity_local).z);
  FUN_005c03c0
            (file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->angular_velocity).x,
             (double)(this_ptr->angular_velocity).y,(double)(this_ptr->angular_velocity).z);
  FUN_005c03c0(file_handle,"%s%d\n",indent_prefix,this_ptr->is_valid);
  return;
}
