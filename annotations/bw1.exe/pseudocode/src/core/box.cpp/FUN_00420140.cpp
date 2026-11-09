// Name: core_box.cpp_FUN_00420140
// Address: 00420140
// Address Range: [[00420140, 004202ef]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_FUN_00420140(CBox *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_box_cpp_FUN_00420140(CBox *this_ptr,_FILE *file_handle)

{
  byte bVar1;
  uint auStackY_1038 [949];
  byte local_150 [256];
  uint local_50;
  uint auStack_4c [2];
  CVector3f local_44;
  CVector3f local_38;
  uint local_2c;
  uint local_28 [2];
  CVector3f local_20;
  byte local_14 [4];
  float local_10;
  
  bVar1 = 0;
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle,&DAT_005d4b00,local_14);
  _fgets(local_150,0xff,file_handle);
  _fscanf(file_handle," %f,%f,%f\n",&local_20,&local_20.field_0x4,&local_20.field_0x8);
  _fscanf(file_handle," %f,%f,%f\n",&local_44,&local_44.field_0x8,&local_44.field_0x4);
  _fscanf(file_handle," %f,%f,%f\n",&local_38,&local_38.field_0x4,&local_38.field_0x8);
  _fscanf(file_handle,&DAT_005d4b26,&local_10);
  core_box_cpp_CBox_setupCorners_FUN_0041dac0(this_ptr,&local_20,&local_44,&local_38,local_10);
  _fscanf(file_handle," %f,%f,%f\n",this_ptr + 0x4c,this_ptr + 0x50,this_ptr + 0x54);
  _fscanf(file_handle," %f,%f,%f\n",this_ptr + 0x70,this_ptr + 0x74,this_ptr + 0x78);
  _fscanf(file_handle,&DAT_005d4b41,this_ptr + 0x254);
  core_dirmat_cpp_FUN_0045f690(this_ptr + 0x18,this_ptr + 0x4c);
  local_2c = local_50;
  local_28[(uint)bVar1 * -2] = auStack_4c[(uint)bVar1 * -2];
  local_28[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1] =
       auStack_4c[(uint)bVar1 * -2 + (uint)bVar1 * -2 + 1];
  if (this_ptr + 0x40 == (CBox *)&local_2c) {
    return;
  }
  *(uint *)(this_ptr + 0x40) = local_2c;
  *(uint *)(this_ptr + 0x44) = local_28[0];
  *(uint *)(this_ptr + 0x48) = local_28[1];
  return;
}
