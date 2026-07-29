// Name: core_box.cpp_CBox_loadFromFile_FUN_0041c850
// Address: 0041c850
// Address Range: [[0041c850, 0041c9db]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_0041c850(CBox *this_ptr,_FILE *file_handle)

{
  CVector3f *pCVar1;
  char local_144 [256];
  CVector3f local_44;
  CVector3f local_38;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  
  _fgets(local_144,0xff,file_handle);
  _fscanf(file_handle," %d\n");
  _fgets(local_144,0xff,file_handle);
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f\n");
  core_box_cpp_CBox_setupCorners_FUN_0041a6e0(this_ptr,&local_20,&local_2c,&local_44,local_14);
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %d\n");
  pCVar1 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_0044da40
                     (&this_ptr->rotation_matrix,&local_38,&this_ptr->linear_velocity_local);
  if (&this_ptr->linear_velocity == pCVar1) {
    return;
  }
  (this_ptr->linear_velocity).x = pCVar1->x;
  (this_ptr->linear_velocity).y = pCVar1->y;
  (this_ptr->linear_velocity).z = pCVar1->z;
  return;
}
