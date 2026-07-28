// Name: core_box.cpp_CBox_saveToFile_FUN_0041c9e0
// Address: 0041c9e0
// Address Range: [[0041c9e0, 0041cb32]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_saveToFile_FUN_0041c9e0(CBox *this_ptr,_FILE *file_handle,char *indent_prefix)

{
  _fprintf();
  _fprintf(file_handle,"%s%d\n",indent_prefix,1);
  _fprintf();
  _fprintf(file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->position).x,
             (double)(this_ptr->position).y,(double)(this_ptr->position).z);
  _fprintf(file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->orientation).x,
             (double)(this_ptr->orientation).z,(double)(this_ptr->orientation).y);
  _fprintf(file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->extents).x,
             (double)(this_ptr->extents).y,(double)(this_ptr->extents).z);
  _fprintf();
  _fprintf(file_handle,"%s%f,%f,%f\n",indent_prefix,
             (double)(this_ptr->linear_velocity_local).x,(double)(this_ptr->linear_velocity_local).y
             ,(double)(this_ptr->linear_velocity_local).z);
  _fprintf(file_handle,"%s%f,%f,%f\n",indent_prefix,(double)(this_ptr->angular_velocity).x,
             (double)(this_ptr->angular_velocity).y,(double)(this_ptr->angular_velocity).z);
  _fprintf(file_handle,"%s%d\n",indent_prefix,this_ptr->is_valid);
  return;
}
