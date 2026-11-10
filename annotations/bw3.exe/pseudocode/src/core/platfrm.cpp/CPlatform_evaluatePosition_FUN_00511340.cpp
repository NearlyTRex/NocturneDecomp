// Name: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_00511340
// Address: 00511340
// Address Range: [[00511340, 005114da]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(CPlatform *this_ptr)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_00511340(CPlatform *this_ptr)

{
  CLocation *out_pos;
  UOrientationVector *out_euler;
  float *pfVar1;
  byte bVar2;
  float afStackY_1874 [1523];
  uint local_98;
  uint local_88;
  CVector3f local_78;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float afStack_38 [4];
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar2 = 0;
  if (this_ptr->param < 0.0) {
    this_ptr->param = 0.0;
  }
  if (1.0 < this_ptr->param) {
    this_ptr->param = 1.0;
  }
  out_pos = &(this_ptr->base).location;
  out_euler = &(this_ptr->base).orient;
  if (this_ptr->course_filename[0] == '\0') {
    pfVar1 = &this_ptr->param;
    local_6c = (this_ptr->end_pos).x * *pfVar1;
    local_68 = (this_ptr->end_pos).y * *pfVar1;
    local_64 = (this_ptr->end_pos).z * *pfVar1;
    local_18 = 1.0 - this_ptr->param;
    local_48 = (this_ptr->start_pos).x * local_18;
    local_44 = (this_ptr->start_pos).y * local_18;
    local_40 = (this_ptr->start_pos).z * local_18;
    local_60 = local_48 + local_6c;
    local_5c = local_44 + local_68;
    local_58 = local_40 + local_64;
    (out_pos->position).x = local_60;
    (this_ptr->base).location.position.y = local_5c;
    (this_ptr->base).location.position.z = local_58;
    local_54 = local_60;
    local_50 = local_5c;
    local_4c = local_58;
    afStack_38[2] = local_6c;
    afStack_38[3] = local_68;
    local_28 = local_64;
    local_24 = local_48;
    local_20 = local_44;
    local_1c = local_40;
    core_xform_cpp_slerpQuaternion_FUN_00585b20
              (&this_ptr->orig_orient,&this_ptr->end_orient,this_ptr->param);
    local_98 = local_88;
    *(uint *)((int)&stack0xffffff6c + (uint)bVar2 * 0xfffffffe * 4) =
         *(uint *)(&stack0xffffff7c + (uint)bVar2 * -8);
    *(uint *)(&stack0xffffff70 + (uint)bVar2 * -8 + (uint)bVar2 * -8) =
         *(uint *)(&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8);
    *(uint *)
     ((int)(&stack0xffffff70 + (uint)bVar2 * -8 + (uint)bVar2 * -8) + ((uint)bVar2 * -2 + 1) * 4) =
         *(uint *)
          ((int)(&stack0xffffff80 + (uint)bVar2 * -8 + (uint)bVar2 * -8) +
          ((uint)bVar2 * -2 + 1) * 4);
    core_xform_cpp_FUN_00585de0(&stack0xffffff68);
    local_78.x = local_3c;
    *(float *)((int)&local_78 + (uint)bVar2 * -8 + 4) = afStack_38[(uint)bVar2 * -2];
    *(float *)((int)&local_78 + (uint)bVar2 * -8 + (uint)bVar2 * -8 + 8) =
         afStack_38[(uint)bVar2 * -2 + (uint)bVar2 * -2 + 1];
    if ((CVector3f *)out_euler != &local_78) {
      (out_euler->vec).x = local_78.x;
      (this_ptr->base).orient.vec.y = local_78.y;
      (this_ptr->base).orient.vec.z = local_78.z;
      return;
    }
  }
  else {
    local_14 = (this_ptr->course).len;
    core_course_cpp_CCourse_evaluate_FUN_00444ac0
              (&this_ptr->course,(float)local_14 * this_ptr->param,&out_pos->position,
               &out_euler->vec);
  }
  return;
}
