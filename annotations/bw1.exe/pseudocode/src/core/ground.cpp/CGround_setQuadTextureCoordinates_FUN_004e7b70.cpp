// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70
// Address: 004e7b70
// Address Range: [[004e7b70, 004e7c57]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00596530
            (this_ptr->texture_list,
             (uint)*(ushort *)(this_ptr->terrain_data + (row * this_ptr->width + column) * 4 + 2));
  (&DAT_0062902c)[this_ptr->vertex_indices[1] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + this_ptr->vertex_indices[1] * 0x30) = 0xf80000;
  (&DAT_0062902c)[this_ptr->vertex_indices[0] * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + this_ptr->vertex_indices[0] * 0x30) = 0xf80000;
  (&DAT_0062902c)[this_ptr->vertex_indices[3] * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + this_ptr->vertex_indices[3] * 0x30) = 0x80000;
  (&DAT_0062902c)[this_ptr->vertex_indices[2] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + this_ptr->vertex_indices[2] * 0x30) = 0x80000;
  return;
}
