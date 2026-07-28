// Name: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_004f5ff0
// Address: 004f5ff0
// Address Range: [[004f5ff0, 004f614d]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_004f5ff0(CPlatform *this_ptr)

{
  CLocation *out_pos;
  UOrientationVector *out_euler;
  float *pfVar1;
  CVector3f *pCVar2;
  uint *puVar3;
  byte bVar4;
  float afStackY_1844 [1523];
  CQuaternion4f *quat_in;
  float local_68;
  CQuaternion4f local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  
  bVar4 = 0;
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
    local_48 = (this_ptr->end_pos).x * *pfVar1;
    local_44 = (this_ptr->end_pos).y * *pfVar1;
    local_40 = (this_ptr->end_pos).z * *pfVar1;
    local_18 = 1.0 - this_ptr->param;
    local_24 = (this_ptr->start_pos).x * local_18;
    local_20 = (this_ptr->start_pos).y * local_18;
    local_1c = (this_ptr->start_pos).z * local_18;
    local_3c = local_24 + local_48;
    local_38 = local_20 + local_44;
    local_34 = local_1c + local_40;
    (out_pos->position).x = local_3c;
    (this_ptr->base).location.position.y = local_38;
    (this_ptr->base).location.position.z = local_34;
    core_xform_cpp_slerpQuaternion_FUN_0055d2d0
              (&this_ptr->orig_orient,&this_ptr->end_orient,this_ptr->param);
    quat_in = &local_58;
    pCVar2 = &local_30;
    local_58.w = local_68;
    puVar3 = (uint *)((int)&local_58 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
    *(uint *)((int)&local_58 + (uint)bVar4 * -8 + 4) =
         *(uint *)(&stack0xffffff9c + (uint)bVar4 * -8);
    *puVar3 = *(uint *)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
    puVar3[(uint)bVar4 * -2 + 1] =
         *(uint *)
          ((int)(&stack0xffffffa0 + (uint)bVar4 * -8 + (uint)bVar4 * -8) +
          ((uint)bVar4 * -2 + 1) * 4);
    pCVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_0055d5b0(pCVar2,quat_in);
    if ((CVector3f *)out_euler != pCVar2) {
      (out_euler->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = pCVar2->y;
      (this_ptr->base).orient.vec.z = pCVar2->z;
      return;
    }
  }
  else {
    local_14 = (this_ptr->course).len;
    core_course_cpp_CCourse_evaluate_FUN_0043b800
              (&this_ptr->course,(float)local_14 * this_ptr->param,&out_pos->position,
               &out_euler->vec);
  }
  return;
}
