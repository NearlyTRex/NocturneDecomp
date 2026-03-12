// Name: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_0050bc30
// Address: 0050bc30
// Address Range: [[0050bc30, 0050bd53]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_0050bc30(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_0050bc30(CMarquee *this_ptr)

{
  int iVar1;
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  int local_10;
  CCourse *this_ptr_00;
  
  (this_ptr->bounding_box).min.y = 9999.9;
  (this_ptr->bounding_box).min.z = 9999.9;
  (this_ptr->bounding_box).max.x = -9999.9;
  (this_ptr->bounding_box).max.y = -9999.9;
  (this_ptr->bounding_box).max.z = -9999.9;
  this_ptr_00 = &this_ptr->course;
  (this_ptr->bounding_box).min.x = 9999.9;
  iVar1 = 0;
  if (this_ptr_00->len < 1) {
    return;
  }
  do {
    core_course_cpp_CCourse_evaluate_FUN_00442710(this_ptr_00,(float)iVar1,&local_20,&CStack_2c);
    if (local_20.x < (this_ptr->bounding_box).min.x) {
      (this_ptr->bounding_box).min.x = local_20.x;
    }
    if ((this_ptr->bounding_box).max.x < local_20.x) {
      (this_ptr->bounding_box).max.x = local_20.x;
    }
    if (local_20.y < (this_ptr->bounding_box).min.y) {
      (this_ptr->bounding_box).min.y = local_20.y;
    }
    if ((this_ptr->bounding_box).max.y < local_20.y) {
      (this_ptr->bounding_box).max.y = local_20.y;
    }
    if (local_20.z < (this_ptr->bounding_box).min.z) {
      (this_ptr->bounding_box).min.z = local_20.z;
    }
    if ((this_ptr->bounding_box).max.z < local_20.z) {
      (this_ptr->bounding_box).max.z = local_20.z;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < this_ptr_00->len);
  return;
}
