// Name: core_gore.cpp_CBloodSplat_load_FUN_004e4fa0
// Address: 004e4fa0
// Address Range: [[004e4fa0, 004e5021]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004e4fa0(CBloodSplat *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodSplat_load_FUN_004e4fa0(CBloodSplat *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x4,&this_ptr->field_0x8,
             &this_ptr->field_0xc);
  _fscanf(file_handle,"%d,%d,%d\n",&this_ptr->field_0x10,&this_ptr->field_0x14,this_ptr);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x18,&this_ptr->field_0x20,
             &this_ptr->field_0x1c);
  iVar1 = _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n",&this_ptr->field_0x28,
                     &this_ptr->field_0x2c,&this_ptr->field_0x30,&this_ptr->field_0x34,
                     &this_ptr->field_0x38,&this_ptr->field_0x3c,&this_ptr->field_0x40);
  return iVar1;
}
