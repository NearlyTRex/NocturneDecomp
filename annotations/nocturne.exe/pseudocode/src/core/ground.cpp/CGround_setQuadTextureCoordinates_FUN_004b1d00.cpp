// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00
// Address: 004b1d00
// Address Range: [[004b1d00, 004b1de7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004b1d00(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00544db0
            (this_ptr->texture_list,this_ptr->terrain_data[row * this_ptr->width + column].color);
  (&DAT_005c502c)[this_ptr->vertex_indices[1] * 0xc] = 0xf80000;
  *(uint *)(&DAT_005c5030 + this_ptr->vertex_indices[1] * 0x30) = 0xf80000;
  (&DAT_005c502c)[this_ptr->vertex_indices[0] * 0xc] = 0x80000;
  *(uint *)(&DAT_005c5030 + this_ptr->vertex_indices[0] * 0x30) = 0xf80000;
  (&DAT_005c502c)[this_ptr->vertex_indices[3] * 0xc] = 0x80000;
  *(uint *)(&DAT_005c5030 + this_ptr->vertex_indices[3] * 0x30) = 0x80000;
  (&DAT_005c502c)[this_ptr->vertex_indices[2] * 0xc] = 0xf80000;
  *(uint *)(&DAT_005c5030 + this_ptr->vertex_indices[2] * 0x30) = 0x80000;
  return;
}
