// Name: core_cloth.cpp_CCloth_resetState_FUN_00438750
// Address: 00438750
// Address Range: [[00438750, 0043877f]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(CCloth *this_ptr,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_resetState_FUN_00438750(CCloth *this_ptr,int vertex_index)

{
  *(uint *)((int)(this_ptr->model).texture_list + vertex_index * 0x11c + 0x34c) = 0xffffffff;
  *(uint *)((int)(this_ptr->model).texture_list + vertex_index * 0x11c + 0x2e8) = 0;
  return;
}
