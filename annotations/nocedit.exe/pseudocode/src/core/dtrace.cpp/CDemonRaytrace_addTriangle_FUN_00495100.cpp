// Name: core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
// Address: 00495100
// Address Range: [[00495100, 004952ae]]
// Convention: __cdecl
// Signature: void __cdecl core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100 (CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3, uchar triangle_flags)

#include "nocturne.h"

void __cdecl
core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
          (CDemonRaytrace *this_ptr,CVector3f *vertex1,CVector3f *vertex2,CVector3f *vertex3,
          uchar triangle_flags)

{
  int iVar1;
  
  core_dtri_cpp_CDemonTriangle_buildCollision_FUN_0049a790
            (this_ptr->triangle_list + this_ptr->triangle_count,vertex1,vertex2,vertex3);
  this_ptr->triangle_flags[this_ptr->triangle_count] = triangle_flags;
  iVar1 = this_ptr->triangle_count + 1;
  this_ptr->triangle_count = iVar1;
  if (199999 < iVar1) {
    g_CurrentFilename = "..\\core\\dtrace.cpp";
    g_CurrentLineNumber = 0x290;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonRaytrace::addTriangle - Too many triangles!");
  }
  if (vertex1->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex1->x;
  }
  if (vertex2->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex2->x;
  }
  if (vertex3->x < (this_ptr->bbox_min).x) {
    (this_ptr->bbox_min).x = vertex3->x;
  }
  if ((this_ptr->bbox_max).x < vertex1->x) {
    (this_ptr->bbox_max).x = vertex1->x;
  }
  if ((this_ptr->bbox_max).x < vertex2->x) {
    (this_ptr->bbox_max).x = vertex2->x;
  }
  if ((this_ptr->bbox_max).x < vertex3->x) {
    (this_ptr->bbox_max).x = vertex3->x;
  }
  if (vertex1->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex1->y;
  }
  if (vertex2->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex2->y;
  }
  if (vertex3->y < (this_ptr->bbox_min).y) {
    (this_ptr->bbox_min).y = vertex3->y;
  }
  if ((this_ptr->bbox_max).y < vertex1->y) {
    (this_ptr->bbox_max).y = vertex1->y;
  }
  if ((this_ptr->bbox_max).y < vertex2->y) {
    (this_ptr->bbox_max).y = vertex2->y;
  }
  if ((this_ptr->bbox_max).y < vertex3->y) {
    (this_ptr->bbox_max).y = vertex3->y;
  }
  if (vertex1->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex1->z;
  }
  if (vertex2->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex2->z;
  }
  if (vertex3->z < (this_ptr->bbox_min).z) {
    (this_ptr->bbox_min).z = vertex3->z;
  }
  if ((this_ptr->bbox_max).z < vertex1->z) {
    (this_ptr->bbox_max).z = vertex1->z;
  }
  if ((this_ptr->bbox_max).z < vertex2->z) {
    (this_ptr->bbox_max).z = vertex2->z;
  }
  if (vertex3->z <= (this_ptr->bbox_max).z) {
    return;
  }
  (this_ptr->bbox_max).z = vertex3->z;
  return;
}
