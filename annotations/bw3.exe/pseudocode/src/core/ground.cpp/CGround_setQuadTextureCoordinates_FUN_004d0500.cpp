// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004d0500
// Address: 004d0500
// Address Range: [[004d0500, 004d05e7]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004d0500(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004d0500(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00569520
            (*(CTextureList **)&this_ptr->field_0x28,
             (uint)*(ushort *)
                    (*(int *)&this_ptr->field_0x24 + 2 + (row * *(int *)this_ptr + column) * 4));
  (&DAT_0060b02c)[*(int *)&this_ptr->field_0x50 * 0xc] = 0xf80000;
  *(uint *)(&DAT_0060b030 + *(int *)&this_ptr->field_0x50 * 0x30) = 0xf80000;
  (&DAT_0060b02c)[*(int *)&this_ptr->field_0x4c * 0xc] = 0x80000;
  *(uint *)(&DAT_0060b030 + *(int *)&this_ptr->field_0x4c * 0x30) = 0xf80000;
  (&DAT_0060b02c)[*(int *)&this_ptr->field_0x58 * 0xc] = 0x80000;
  *(uint *)(&DAT_0060b030 + *(int *)&this_ptr->field_0x58 * 0x30) = 0x80000;
  (&DAT_0060b02c)[*(int *)&this_ptr->field_0x54 * 0xc] = 0xf80000;
  *(uint *)(&DAT_0060b030 + *(int *)&this_ptr->field_0x54 * 0x30) = 0x80000;
  return;
}
