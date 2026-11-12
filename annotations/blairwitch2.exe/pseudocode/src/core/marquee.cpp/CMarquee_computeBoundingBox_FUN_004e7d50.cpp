// Name: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_004e7d50
// Address: 004e7d50
// Address Range: [[004e7d50, 004e7e73]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004e7d50(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_004e7d50(CMarquee *this_ptr)

{
  CCourse *this_ptr_00;
  int iVar1;
  CVector3f CStack_2c;
  CVector3f CStack_20;
  float fStack_14;
  int iStack_10;
  
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
    fStack_14 = (float)iVar1;
    iStack_10 = iVar1;
    core_course_cpp_CCourse_evaluate_FUN_00438c40(this_ptr_00,fStack_14,&CStack_20,&CStack_2c);
    if (CStack_20.x < (this_ptr->bounding_box).min.x) {
      (this_ptr->bounding_box).min.x = CStack_20.x;
    }
    if ((this_ptr->bounding_box).max.x < CStack_20.x) {
      (this_ptr->bounding_box).max.x = CStack_20.x;
    }
    if (CStack_20.y < (this_ptr->bounding_box).min.y) {
      (this_ptr->bounding_box).min.y = CStack_20.y;
    }
    if ((this_ptr->bounding_box).max.y < CStack_20.y) {
      (this_ptr->bounding_box).max.y = CStack_20.y;
    }
    if (CStack_20.z < (this_ptr->bounding_box).min.z) {
      (this_ptr->bounding_box).min.z = CStack_20.z;
    }
    if ((this_ptr->bounding_box).max.z < CStack_20.z) {
      (this_ptr->bounding_box).max.z = CStack_20.z;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < this_ptr_00->len);
  return;
}
