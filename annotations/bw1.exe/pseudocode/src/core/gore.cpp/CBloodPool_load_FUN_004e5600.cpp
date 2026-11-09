// Name: core_gore.cpp_CBloodPool_load_FUN_004e5600
// Address: 004e5600
// Address Range: [[004e5600, 004e565b]]
// Convention: __cdecl
// Signature: int __cdecl core_gore_cpp_CBloodPool_load_FUN_004e5600(CBloodPool *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_gore_cpp_CBloodPool_load_FUN_004e5600(CBloodPool *this_ptr,_FILE *file_handle)

{
  int iVar1;
  
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x4,&this_ptr->field_0x8,
             &this_ptr->field_0xc);
  _fscanf(file_handle,"%d,%d\n",this_ptr,&this_ptr->field_0x10);
  iVar1 = _fscanf(file_handle,"%d,%f,%d,%d,%d\n",&this_ptr->field_0x14,&this_ptr->field_0x18,
                     &this_ptr->field_0x1c,&this_ptr->field_0x20,&this_ptr->field_0x24);
  return iVar1;
}
