// Name: core_course.cpp_FUN_00438c40
// Address: 00438c40
// Address Range: [[00438c40, 00438ce8]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_FUN_00438c40(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

#include "nocturne.h"

void __cdecl core_course_cpp_FUN_00438c40(CCourse *this_ptr,float time,CVector3f *out_pos,CVector3f *out_euler)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  uint auStackY_100c [986];
  CQuaternion4f local_34 [16];
  CVector3f local_24;
  CVector3f local_18;
  
  bVar4 = 0;
  core_course_cpp_FUN_00438cf0(this_ptr,time,out_pos,local_34);
  core_xform_cpp_quaternionToMatrix3x4_FUN_00593a10(local_34);
  puVar2 = (uint *)&stack0xffffff6c;
  puVar3 = (uint *)&stack0xffffff9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  core_xform_cpp_FUN_00591de0(&stack0xffffff9c);
  local_18._0_4_ = local_24._0_4_;
  *(uint *)((int)&local_18 + (uint)bVar4 * -8 + 4) =
       *(uint *)((int)&local_24 + (uint)bVar4 * -8 + 4);
  *(uint *)((int)&local_18 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
       *(uint *)((int)&local_24 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
  if (out_euler == &local_18) {
    return;
  }
  *(uint *)out_euler = local_18._0_4_;
  *(uint *)&out_euler->field_0x4 = local_18._4_4_;
  *(uint *)&out_euler->field_0x8 = local_18._8_4_;
  return;
}
