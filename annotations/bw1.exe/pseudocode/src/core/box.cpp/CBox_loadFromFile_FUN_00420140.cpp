// Name: core_box.cpp_CBox_loadFromFile_FUN_00420140
// Address: 00420140
// Address Range: [[00420140, 004202ef]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_loadFromFile_FUN_00420140(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_00420140(CBox *this_ptr,_FILE *file_handle)

{
  byte bVar1;
  float afStackY_1038 [949];
  char local_150 [256];
  float local_50;
  float afStack_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28 [2];
  CVector3f local_20;
  float local_10;
  
  bVar1 = 0;
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle,&DAT_005d4b00);
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle,&DAT_005d4b26);
  core_box_cpp_CBox_setupCorners_FUN_0041dac0(this_ptr,&local_20,&local_44,&local_38,local_10);
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle," %f,%f,%f\n");
  _fscanf(file_handle,&DAT_005d4b41);
  core_dirmat_cpp_FUN_0045f690(&this_ptr->rotation_matrix,&this_ptr->linear_velocity_local);
  local_2c = local_50;
  local_28[(uint)bVar1 * -2] = afStack_4c[(uint)bVar1 * -2];
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       afStack_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (&this_ptr->linear_velocity == (CVector3f *)&local_2c) {
    return;
  }
  (this_ptr->linear_velocity).x = local_2c;
  (this_ptr->linear_velocity).y = local_28[0];
  (this_ptr->linear_velocity).z = local_28[1];
  return;
}
