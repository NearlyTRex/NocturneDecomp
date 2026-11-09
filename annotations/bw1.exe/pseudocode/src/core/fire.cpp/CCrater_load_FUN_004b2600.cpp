// Name: core_fire.cpp_CCrater_load_FUN_004b2600
// Address: 004b2600
// Address Range: [[004b2600, 004b273b]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CCrater_load_FUN_004b2600(CCrater *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_fire_cpp_CCrater_load_FUN_004b2600(CCrater *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  byte *puVar3;
  byte *puVar4;
  
  _fscanf(file_handle,"%d,%d,%f,%f\n",this_ptr,&this_ptr->field_0x4,&this_ptr->field_0x8,
             &this_ptr->field_0x18);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0xc,&this_ptr->field_0x10,
             &this_ptr->field_0x14);
  iVar2 = 0;
  puVar3 = &this_ptr->field_0x24;
  puVar4 = &this_ptr->field_0x20;
  do {
    iVar1 = iVar2 * 0xc;
    iVar2 = iVar2 + 1;
    _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x1c + iVar1,puVar4,puVar3);
    puVar3 = puVar3 + 0xc;
    puVar4 = puVar4 + 0xc;
  } while (iVar2 < 3);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x40,&this_ptr->field_0x44,
             &this_ptr->field_0x48);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x4c,&this_ptr->field_0x50,
             &this_ptr->field_0x54);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x58,&this_ptr->field_0x5c,
             &this_ptr->field_0x60);
  _fscanf(file_handle,"%f,%f,%f\n",&this_ptr->field_0x64,&this_ptr->field_0x68,
             &this_ptr->field_0x6c);
  return;
}
