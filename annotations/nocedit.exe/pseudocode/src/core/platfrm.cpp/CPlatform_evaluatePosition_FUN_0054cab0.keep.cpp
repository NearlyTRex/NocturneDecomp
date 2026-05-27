// Name: core_platfrm.cpp_CPlatform_evaluatePosition_FUN_0054cab0
// Address: 0054cab0
// MANUAL RECONSTRUCTION
// Address Range: [[0054cab0, 0054cc0d] [0060e49e, 0060e4bf]]
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
  CQuaternion4f local_68;
  CVector3f local_30;
  float *pfVar1;

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
    fVar5 = (this_ptr->start_pos).y;
    fVar6 = (this_ptr->start_pos).z;
    (out_pos_00->position).x = (this_ptr->start_pos).x * fVar7 + (this_ptr->end_pos).x * *pfVar1;
    (this_ptr->base).location.position.y = fVar5 * fVar7 + fVar1 * fVar2;
    (this_ptr->base).location.position.z = fVar6 * fVar7 + fVar3 * fVar4;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->orig_orient,&this_ptr->end_orient,this_ptr->param,&local_68);
    pCVar2 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(&local_30,&local_68);
    if ((CVector3f *)out_euler_00 != pCVar2) {
      out_euler_00->vec = *pCVar2;
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
