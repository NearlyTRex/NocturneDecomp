// Name: core_batcreat.cpp_CBatCreature_getTargetPoints_FUN_00412990
// Address: 00412990
// Address Range: [[00412990, 004129f7]]
// Convention: __cdecl
// Signature: int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00412990(CBatCreature *this_ptr,CVector3f *out_points_array)

#include "nocturne.h"

int __cdecl core_batcreat_cpp_CBatCreature_getTargetPoints_FUN_00412990(CBatCreature *this_ptr,CVector3f *out_points_array)

{
  byte bVar1;
  float afStackY_1010 [1016];
  float fStack_28;
  CVector3f CStack_1c;
  
  bVar1 = 0;
  core_skeleton_cpp_FUN_00546a90(&(this_ptr->base).base.model,DAT_007bc74c);
  CStack_1c.x = fStack_28;
  *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + 4) =
       *(uint *)(&stack0xffffffdc + (uint)bVar1 * -8);
  *(uint *)((int)&CStack_1c + (uint)bVar1 * -8 + (uint)bVar1 * -8 + 8) =
       *(uint *)(&stack0xffffffe0 + (uint)bVar1 * -8 + (uint)bVar1 * -8);
  if (out_points_array == &CStack_1c) {
    return 1;
  }
  out_points_array->x = CStack_1c.x;
  out_points_array->y = CStack_1c.y;
  out_points_array->z = CStack_1c.z;
  return 1;
}
