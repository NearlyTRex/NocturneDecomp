// Name: core_platfrm.cpp_CPlatform_FUN_0054cab0
// Address: 0054cab0
// Address Range: [[0054cab0, 0054cc0d]]
// Convention: __cdecl
// Signature: void __cdecl core_platfrm_cpp_CPlatform_FUN_0054cab0(CPlatform *this_ptr)

#include "nocturne.h"

void __cdecl core_platfrm_cpp_CPlatform_FUN_0054cab0(CPlatform *this_ptr)

{
  UOrientationVector *pUVar1;
  float *pfVar2;
  CVector3f *pCVar3;
  uint *puVar4;
  uint *puVar5;
  byte bVar6;
  float afStackY_1844 [1523];
  CQuaternion4f *quat_in;
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
  
  bVar6 = 0;
  if (this_ptr->param < 0.0) {
    this_ptr->param = 0.0;
  }
  if (1.0 < this_ptr->param) {
    this_ptr->param = 1.0;
  }
  pUVar1 = &(this_ptr->base).orient;
  if (this_ptr->course_filename[0] == '\0') {
    pfVar2 = &this_ptr->param;
    local_48 = (this_ptr->end_pos).x * *pfVar2;
    local_44 = (this_ptr->end_pos).y * *pfVar2;
    local_40 = (this_ptr->end_pos).z * *pfVar2;
    local_18 = 1.0 - this_ptr->param;
    local_30.z = (this_ptr->start_pos).x * local_18;
    local_20 = (this_ptr->start_pos).y * local_18;
    local_1c = (this_ptr->start_pos).z * local_18;
    local_3c = local_30.z + local_48;
    local_38 = local_20 + local_44;
    local_34 = local_1c + local_40;
    (this_ptr->base).location.position.x = local_3c;
    (this_ptr->base).location.position.y = local_38;
    (this_ptr->base).location.position.z = local_34;
    core_xform_cpp_slerpQuaternion_FUN_005f77e0
              (&this_ptr->orig_orient,&this_ptr->end_orient,this_ptr->param,&local_68);
    pCVar3 = &local_58;
    quat_in = &local_30;
    local_58.x = local_68.w;
    puVar5 = (uint *)((int)&local_58 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    puVar4 = (uint *)((int)&local_68 + (uint)bVar6 * -8 + (uint)bVar6 * -8 + 8);
    *(uint *)((int)&local_58 + (uint)bVar6 * -8 + 4) =
         *(uint *)((int)&local_68 + (uint)bVar6 * -8 + 4);
    *puVar5 = *puVar4;
    puVar5[(uint)bVar6 * -2 + 1] = puVar4[(uint)bVar6 * -2 + 1];
    pCVar3 = core_xform_cpp_quaternionToEulerAngles_FUN_005f7ac0(quat_in,pCVar3);
    if ((CVector3f *)pUVar1 != pCVar3) {
      (pUVar1->vec).x = pCVar3->x;
      (this_ptr->base).orient.vec.y = pCVar3->y;
      (this_ptr->base).orient.vec.z = pCVar3->z;
      return;
    }
  }
  else {
    local_14 = (this_ptr->course).len;
    core_course_cpp_CCourse_FUN_00442710(&this_ptr->course);
  }
  return;
}
