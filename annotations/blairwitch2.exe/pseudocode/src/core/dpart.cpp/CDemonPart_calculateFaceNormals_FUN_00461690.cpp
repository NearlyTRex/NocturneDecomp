// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00461690
// Address: 00461690
// Address Range: [[00461690, 00461758]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00461690(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00461690(CDemonPart *this_ptr)

{
  int iVar1;
  int iVar2;
  byte auStack_48 [4];
  uint uStack_44;
  uint uStack_40;
  uint uStack_3c;
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_24;
  uint uStack_18;
  
  iVar2 = 0;
  if (0 < this_ptr->face_count) {
    iVar1 = 0;
    do {
      uStack_44 = 3;
      uStack_40 = *(uint *)((int)&(this_ptr->face_data->plane).A + iVar1);
      uStack_3c = *(uint *)((int)&(this_ptr->face_data->plane).B + iVar1);
      uStack_38 = *(uint *)((int)&(this_ptr->face_data->plane).C + iVar1);
      uStack_34 = *(uint *)((int)&(this_ptr->face_data->plane).D + iVar1);
      uStack_30 = *(uint *)((int)&this_ptr->face_data->vertex_index_1 + iVar1);
      uStack_24 = *(uint *)((int)&this_ptr->face_data->vertex_index_2 + iVar1);
      uStack_18 = *(uint *)((int)&this_ptr->face_data->vertex_index_3 + iVar1);
      engine_keyframe_c_calculateSurfaceNormal_FUN_004df5f0(this_ptr->vertex_positions,auStack_48);
      *(uint *)((int)&(this_ptr->face_data->plane).A + iVar1) = uStack_40;
      *(uint *)((int)&(this_ptr->face_data->plane).B + iVar1) = uStack_3c;
      *(uint *)((int)&(this_ptr->face_data->plane).C + iVar1) = uStack_38;
      *(uint *)((int)&(this_ptr->face_data->plane).D + iVar1) = uStack_34;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}
