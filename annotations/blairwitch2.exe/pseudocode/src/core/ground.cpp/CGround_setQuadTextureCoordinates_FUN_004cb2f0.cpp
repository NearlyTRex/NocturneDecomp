// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0
// Address: 004cb2f0
// Address Range: [[004cb2f0, 004cb3d7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004cb2f0(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00573910
            (this_ptr->texture_list,
             (uint)(ushort)this_ptr->terrain_data[row * this_ptr->width + column].color);
  (&DAT_0062202c)[this_ptr->vertex_indices[1] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00622030 + this_ptr->vertex_indices[1] * 0x30) = 0xf80000;
  (&DAT_0062202c)[this_ptr->vertex_indices[0] * 0xc] = 0x80000;
  *(uint *)(&DAT_00622030 + this_ptr->vertex_indices[0] * 0x30) = 0xf80000;
  (&DAT_0062202c)[this_ptr->vertex_indices[3] * 0xc] = 0x80000;
  *(uint *)(&DAT_00622030 + this_ptr->vertex_indices[3] * 0x30) = 0x80000;
  (&DAT_0062202c)[this_ptr->vertex_indices[2] * 0xc] = 0xf80000;
  *(uint *)(&DAT_00622030 + this_ptr->vertex_indices[2] * 0x30) = 0x80000;
  return;
}
