// Name: core_box.cpp_CBox_loadFromFile_FUN_005b4300
// Address: 005b4300
// Address Range: [[005b4300, 005b44af]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_loadFromFile_FUN_005b4300(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_loadFromFile_FUN_005b4300(CBox *this_ptr,_FILE *file_handle)

{
  byte bVar1;
  float afStackY_1038 [949];
  byte local_150 [256];
  float local_50;
  float afStack_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  float local_2c;
  float local_28 [2];
  CVector3f local_20;
  byte local_14 [4];
  float local_10;
  
  bVar1 = 0;
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f1340,local_14);
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle," %f,%f,%f\n",&local_20,&local_20.y,&local_20.z);
  _fscanf(file_handle," %f,%f,%f\n",&local_44,&local_44.z,&local_44.y);
  _fscanf(file_handle," %f,%f,%f\n",&local_38,&local_38.y,&local_38.z);
  _fscanf(file_handle,&DAT_005f1366,&local_10);
  core_box_cpp_CBox_setupCorners_FUN_005b1c80(this_ptr,&local_20,&local_44,&local_38,local_10);
  _fscanf(file_handle," %f,%f,%f\n",&this_ptr->linear_velocity_local,
             &(this_ptr->linear_velocity_local).y,&(this_ptr->linear_velocity_local).z);
  _fscanf(file_handle," %f,%f,%f\n",&this_ptr->angular_velocity,
             &(this_ptr->angular_velocity).y,&(this_ptr->angular_velocity).z);
  _fscanf(file_handle,&DAT_005f1381,&this_ptr->is_valid);
  core_dirmat_cpp_FUN_00449530(&this_ptr->rotation_matrix,&this_ptr->linear_velocity_local);
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
