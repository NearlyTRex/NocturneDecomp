// Name: core_fire.cpp_CBulletTrail_init_FUN_00485640
// Address: 00485640
// Address Range: [[00485640, 00485692]]
// Convention: __cdecl
// Signature: void __cdecl core_fire_cpp_CBulletTrail_init_FUN_00485640(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

#include "nocturne.h"

void __cdecl core_fire_cpp_CBulletTrail_init_FUN_00485640(CBulletTrail *this_ptr,CVector3f *start_position,CVector3f *end_position,CKeyFramedModel *model_ptr,float segment_length)

{
  if (this_ptr != (CBulletTrail *)start_position) {
    (this_ptr->start_position).x = start_position->x;
    (this_ptr->start_position).y = start_position->y;
    (this_ptr->start_position).z = start_position->z;
  }
  if (&this_ptr->end_position != end_position) {
    (this_ptr->end_position).x = end_position->x;
    (this_ptr->end_position).y = end_position->y;
    (this_ptr->end_position).z = end_position->z;
  }
  this_ptr->frames_remaining = 2;
  this_ptr->model_ptr = model_ptr;
  this_ptr->segment_length = segment_length;
  return;
}
