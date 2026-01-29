// Name: core_box.cpp_CBox_loadFromFile_FUN_0041fe90
// Address: 0041fe90
// Address Range: [[0041fe90, 0042001b]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041fe90(CBox *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar1;
  char local_144 [256];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  byte local_10 [4];
  
  _fgets(local_144,0xff,file_handle);
  _fscanf(file_handle," %d\n",local_10);
  _fgets(local_144,0xff,file_handle);
  _fscanf(file_handle," %f,%f,%f\n",&local_20,&local_20.y,&local_20.z);
  _fscanf(file_handle," %f,%f,%f\n",&local_2c,&local_2c.z,&local_2c.y);
  _fscanf(file_handle," %f,%f,%f\n",&local_44,&local_44.y,&local_44.z);
  _fscanf(file_handle," %f\n",&local_14);
  core_box_cpp_CBox_setupCorners_FUN_0041dd20(this_ptr,&local_20,&local_2c,&local_44,local_14);
  _fscanf(file_handle," %f,%f,%f\n",&this_ptr->linear_velocity_local,
             &(this_ptr->linear_velocity_local).y,&(this_ptr->linear_velocity_local).z);
  _fscanf(file_handle," %f,%f,%f\n",&this_ptr->angular_velocity,
             &(this_ptr->angular_velocity).y,&(this_ptr->angular_velocity).z);
  _fscanf(file_handle," %d\n",&this_ptr->is_valid);
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                     (&this_ptr->rotation_matrix,&local_38,&this_ptr->linear_velocity_local);
  if (&this_ptr->linear_velocity == pCVar1) {
    return;
  }
  (this_ptr->linear_velocity).x = pCVar1->x;
  (this_ptr->linear_velocity).y = pCVar1->y;
  (this_ptr->linear_velocity).z = pCVar1->z;
  return;
}
