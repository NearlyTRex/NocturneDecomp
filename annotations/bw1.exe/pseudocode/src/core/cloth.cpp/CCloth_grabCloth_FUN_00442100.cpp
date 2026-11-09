// Name: core_cloth.cpp_CCloth_grabCloth_FUN_00442100
// Address: 00442100
// Address Range: [[00442100, 00442194]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_00442100(CCloth *this_ptr,char *bone_name,int vertex_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_00442100(CCloth *this_ptr,char *bone_name,int vertex_index)

{
  int iVar1;
  int iVar2;
  CCloth *str2;
  
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x37b4c)) {
    str2 = this_ptr + 0x37b50;
    do {
      iVar1 = _strcmp(bone_name,(char *)str2);
      if (iVar1 == 0) break;
      iVar2 = iVar2 + 1;
      str2 = str2 + 0xac;
    } while (iVar2 < *(int *)(this_ptr + 0x37b4c));
  }
  if (iVar2 == *(int *)(this_ptr + 0x37b4c)) {
    _DAT_01d1d400 = "..\\core\\cloth.cpp";
    _DAT_01d1d404 = 0xab4;
    core_main_c_FUN_005030e0("CCloth::grabCloth - Can't find bone %s",bone_name);
  }
  *(uint *)(this_ptr + vertex_index * 0x11c + 0x40c) = 1;
  *(int *)(this_ptr + vertex_index * 0x11c + 0x470) = iVar2;
  return;
}
