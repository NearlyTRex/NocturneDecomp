// Name: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
// Address: 0054cab0
// Address Range: [[0054cab0, 0054cc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_evaluatePosition_FUN_0054cab0(CPlatform *this_ptr)

{
  CLocation *out_pos_00;
  UOrientationVector *out_euler_00;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  CVector3f *pCVar2;
  uint *puVar3;
  uint *puVar4;
  byte bVar5;
  float afStackY_1844 [1523];
  CVector3f *vector_out;
  CQuaternion4f local_68;
  CVector3f local_58;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  CQuaternion4f local_30;
  float local_20;
  float local_1c;
  float local_18;
  int local_14;
  CLocation *out_pos;
  float *pfVar1;
  CQuaternion4f *quat_in;
  UOrientationVector *out_euler;
  
  bVar5 = 0;
  if (this_ptr->param < 0.0) {
    this_ptr->param = 0.0;
  }
  if (1.0 < this_ptr->param) {
    this_ptr->param = 1.0;
  }
  out_pos_00 = &(this_ptr->base).location;
  out_euler_00 = &(this_ptr->base).orient;
  if (this_ptr->course_filename[0] == '\0') {
    pfVar1 = &this_ptr->param;
    fVar1 = (this_ptr->end_pos).y;
    fVar2 = *pfVar1;
    fVar3 = (this_ptr->end_pos).z;
    fVar4 = *pfVar1;
    fVar7 = 1.0 - this_ptr->param;
    local_30.z = (this_ptr->start_pos).x * fVar7;
    fVar5 = (this_ptr->start_pos).y;
    fVar6 = (this_ptr->start_pos).z;
    (out_pos_00->position).x = local_30.z + (this_ptr->end_pos).x * *pfVar1;
    (this_ptr->base).location.position.y = fVar5 * fVar7 + fVar1 * fVar2;
    (this_ptr->base).location.position.z = fVar6 * fVar7 + fVar3 * fVar4;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->orig_orient,&this_ptr->end_orient,this_ptr->param,&local_68);
    vector_out = &local_58;
    quat_in = &local_30;
    local_58.x = local_68.w;
    puVar4 = (uint *)((int)&local_58 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    puVar3 = (uint *)((int)&local_68 + (uint)bVar5 * -8 + (uint)bVar5 * -8 + 8);
    *(uint *)((int)&local_58 + (uint)bVar5 * -8 + 4) =
         *(uint *)((int)&local_68 + (uint)bVar5 * -8 + 4);
    *puVar4 = *puVar3;
    puVar4[(uint)bVar5 * -2 + 1] = puVar3[(uint)bVar5 * -2 + 1];
    pCVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(quat_in,vector_out);
    if ((CVector3f *)out_euler_00 != pCVar2) {
      (out_euler_00->vec).x = pCVar2->x;
      (this_ptr->base).orient.vec.y = pCVar2->y;
      (this_ptr->base).orient.vec.z = pCVar2->z;
      return;
    }
  }
  else {
    core_course_cpp_CCourse_evaluate_FUN_00442710
              (&this_ptr->course,(float)(this_ptr->course).len * this_ptr->param,
               &out_pos_00->position,&out_euler_00->vec);
  }
  return;
}
