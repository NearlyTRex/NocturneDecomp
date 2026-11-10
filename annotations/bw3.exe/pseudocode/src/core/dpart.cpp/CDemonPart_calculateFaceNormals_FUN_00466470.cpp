// Name: core_dpart.cpp_CDemonPart_calculateFaceNormals_FUN_00466470
// Address: 00466470
// Address Range: [[00466470, 00466538]]
// Convention: __cdecl
// Signature: void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00466470(CDemonPart *this_ptr)

#include "nocturne.h"

void __cdecl core_dpart_cpp_CDemonPart_calculateFaceNormals_FUN_00466470(CDemonPart *this_ptr)

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
      uStack_40 = *(uint *)(this_ptr->face_data + iVar1);
      uStack_3c = *(uint *)(this_ptr->face_data + iVar1 + 4);
      uStack_38 = *(uint *)(this_ptr->face_data + iVar1 + 8);
      uStack_34 = *(uint *)(this_ptr->face_data + iVar1 + 0xc);
      uStack_30 = *(uint *)(this_ptr->face_data + iVar1 + 0x10);
      uStack_24 = *(uint *)(this_ptr->face_data + iVar1 + 0x14);
      uStack_18 = *(uint *)(this_ptr->face_data + iVar1 + 0x18);
      engine_keyframe_c_calculateSurfaceNormal_FUN_004dece0(this_ptr->vertex_positions,auStack_48);
      *(uint *)(this_ptr->face_data + iVar1) = uStack_40;
      *(uint *)(this_ptr->face_data + iVar1 + 4) = uStack_3c;
      *(uint *)(this_ptr->face_data + iVar1 + 8) = uStack_38;
      *(uint *)(this_ptr->face_data + iVar1 + 0xc) = uStack_34;
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0x20;
    } while (iVar2 < this_ptr->face_count);
  }
  return;
}
