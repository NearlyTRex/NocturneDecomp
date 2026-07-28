// Name: core_cloth.cpp_CCloth_grabCloth_FUN_004386b0
// Address: 004386b0
// Address Range: [[004386b0, 00438744]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(CCloth *this_ptr,char *bone_name,int vertex_index)

#include "nocturne.h"

void __cdecl core_cloth_cpp_CCloth_grabCloth_FUN_004386b0(CCloth *this_ptr,char *bone_name,int vertex_index)

{
  int iVar1;
  float fVar2;
  float *str2;
  
  fVar2 = 0.0;
  if (0 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y) {
    str2 = &this_ptr->vertices[0x2d5].secondary_velocity.z;
    do {
      iVar1 = _strcmp(bone_name,(char *)str2);
      if (iVar1 == 0) break;
      fVar2 = (float)((int)fVar2 + 1);
      str2 = str2 + 0x2b;
    } while ((int)fVar2 < (int)this_ptr->vertices[0x2d5].secondary_velocity.y);
  }
  if (fVar2 == this_ptr->vertices[0x2d5].secondary_velocity.y) {
    PTR_01cc4800 = "..\\core\\cloth.cpp";
    INT_01cc4804 = 0xaa7;
    core_main_c_FUN_004c8440("CCloth::grabCloth - Can't find bone %s",bone_name);
  }
  *(uint *)((int)(this_ptr->model).texture_list + vertex_index * 0x11c + 0x2e8) = 1;
  *(float *)((int)(this_ptr->model).texture_list + vertex_index * 0x11c + 0x34c) = fVar2;
  return;
}
