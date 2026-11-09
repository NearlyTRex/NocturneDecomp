// Name: core_ground.cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70
// Address: 004e7b70
// Address Range: [[004e7b70, 004e7c57]]
// Convention: __cdecl
// Signature: void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70(CGround *this_ptr,int column,int row)

#include "nocturne.h"

void __cdecl core_ground_cpp_CGround_setQuadTextureCoordinates_FUN_004e7b70(CGround *this_ptr,int column,int row)

{
  core_texlist_cpp_CTextureList_captureTexture_FUN_00596530
            (*(CTextureList **)&this_ptr->field_0x28,
             (uint)*(ushort *)
                    (*(int *)&this_ptr->field_0x24 + 2 + (row * *(int *)this_ptr + column) * 4));
  (&DAT_0062902c)[*(int *)&this_ptr->field_0x50 * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + *(int *)&this_ptr->field_0x50 * 0x30) = 0xf80000;
  (&DAT_0062902c)[*(int *)&this_ptr->field_0x4c * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + *(int *)&this_ptr->field_0x4c * 0x30) = 0xf80000;
  (&DAT_0062902c)[*(int *)&this_ptr->field_0x58 * 0xc] = 0x80000;
  *(uint *)(&DAT_00629030 + *(int *)&this_ptr->field_0x58 * 0x30) = 0x80000;
  (&DAT_0062902c)[*(int *)&this_ptr->field_0x54 * 0xc] = 0xf80000;
  *(uint *)(&DAT_00629030 + *(int *)&this_ptr->field_0x54 * 0x30) = 0x80000;
  return;
}
