// Name: core_dcube.cpp_CDemonCube_load_FUN_00453fa0
// Address: 00453fa0
// Address Range: [[00453fa0, 0045409d]]
// Convention: __cdecl
// Signature: void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00453fa0(CDemonCube *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_dcube_cpp_CDemonCube_load_FUN_00453fa0(CDemonCube *this_ptr,_FILE *file_handle)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  byte bVar5;
  
  bVar5 = 0;
  _fread(&this_ptr->field_0x8,1,0xc,file_handle);
  _fread(&this_ptr->field_0x14,1,0xc,file_handle);
  _fread(&this_ptr->field_0x20,1,4,file_handle);
  _fread(&this_ptr->field_0x28,1,4,file_handle);
  if (*(int *)&this_ptr->field_0x28 != 0) {
    core_dcube_cpp_CDemonCube_allocGeometryMemory_FUN_00453d90(this_ptr);
  }
  _fread(*(uint *)&this_ptr->field_0x24,*(uint *)&this_ptr->field_0x20,0xc,
             file_handle);
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x28) {
    iVar3 = 0;
    do {
      iVar1 = iVar1 + 1;
      core_dcube_cpp_CDemonCubeTriangle_readFromFile_FUN_00451fb0
                ((CDemonCubeTriangle *)(*(int *)&this_ptr->field_0x2c + iVar3),file_handle,
                 *(CVector3f **)&this_ptr->field_0x24);
      iVar3 = iVar3 + 0x20;
    } while (iVar1 < *(int *)&this_ptr->field_0x28);
  }
  if (*(int *)&this_ptr->field_0x28 != 0) {
    _fread(*(uint *)&this_ptr->field_0x30,1,*(int *)&this_ptr->field_0x28,file_handle);
  }
  if (*(int *)&this_ptr->field_0x28 != 0) {
    _fread(*(uint *)this_ptr,1,0x40,file_handle);
    puVar2 = *(uint **)this_ptr;
    puVar4 = *(uint **)&this_ptr->field_0x4;
    for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
      *puVar4 = *puVar2;
      puVar2 = puVar2 + (uint)bVar5 * -2 + 1;
      puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
    }
    for (iVar1 = 0; iVar1 != 0; iVar1 = iVar1 + -1) {
      *(byte *)puVar4 = *(byte *)puVar2;
      puVar2 = (uint *)((int)puVar2 + (uint)bVar5 * -2 + 1);
      puVar4 = (uint *)((int)puVar4 + (uint)bVar5 * -2 + 1);
    }
    return;
  }
  return;
}
