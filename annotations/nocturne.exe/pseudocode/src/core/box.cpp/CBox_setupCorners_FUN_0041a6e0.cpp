// Name: core_box.cpp_CBox_setupCorners_FUN_0041a6e0
// Address: 0041a6e0
// Address Range: [[0041a6e0, 0041a90d]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupCorners_FUN_0041a6e0(CBox *this_ptr,CVector3f *position,CVector3f *orientation,CVector3f *extents,float volume)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  if (&this_ptr->extents != extents) {
    (this_ptr->extents).x = extents->x;
    (this_ptr->extents).y = extents->y;
    (this_ptr->extents).z = extents->z;
  }
  fVar1 = (this_ptr->extents).x;
  fVar8 = (float)0.5;
  fVar2 = (this_ptr->extents).z;
  fVar9 = (float)0.5;
  fVar3 = (this_ptr->extents).z;
  fVar10 = (float)0.5;
  fVar4 = (this_ptr->extents).x;
  fVar11 = (float)0.5;
  fVar5 = (this_ptr->extents).x;
  fVar12 = (float)0.5;
  fVar6 = (this_ptr->extents).y;
  fVar13 = (float)0.5;
  fVar7 = (this_ptr->extents).y;
  this_ptr->scrape_point_count = 8;
  fVar14 = (float)0.5;
  this_ptr->scrape_points[0].local_position.x = fVar1 * fVar8;
  fVar1 = (this_ptr->extents).z;
  fVar8 = (float)0.5;
  this_ptr->scrape_points[0].local_position.y = -fVar7 * fVar14;
  fVar7 = (this_ptr->extents).x;
  fVar14 = (float)0.5;
  this_ptr->scrape_points[0].local_position.z = fVar2 * fVar9;
  fVar2 = (this_ptr->extents).y;
  fVar9 = (float)0.5;
  this_ptr->scrape_points[1].local_position.x = -fVar7 * fVar14;
  fVar7 = (this_ptr->extents).y;
  fVar14 = (float)0.5;
  this_ptr->scrape_points[1].local_position.y = -fVar2 * fVar9;
  fVar2 = (this_ptr->extents).x;
  fVar9 = (float)0.5;
  this_ptr->scrape_points[1].local_position.z = fVar3 * fVar10;
  fVar3 = (this_ptr->extents).y;
  fVar10 = (float)0.5;
  this_ptr->scrape_points[2].local_position.x = -fVar2 * fVar9;
  fVar2 = (this_ptr->extents).z;
  fVar9 = (float)0.5;
  this_ptr->scrape_points[2].local_position.y = -fVar3 * fVar10;
  fVar3 = (this_ptr->extents).y;
  fVar10 = (float)0.5;
  this_ptr->scrape_points[3].local_position.x = fVar4 * fVar11;
  fVar4 = (this_ptr->extents).z;
  fVar11 = (float)0.5;
  this_ptr->scrape_points[4].local_position.x = fVar5 * fVar12;
  fVar5 = (this_ptr->extents).z;
  fVar12 = (float)0.5;
  this_ptr->scrape_points[4].local_position.y = fVar6 * fVar13;
  fVar6 = (this_ptr->extents).y;
  fVar13 = (float)0.5;
  this_ptr->scrape_points[4].local_position.z = fVar1 * fVar8;
  fVar1 = (this_ptr->extents).x;
  fVar8 = (float)0.5;
  this_ptr->scrape_points[5].local_position.y = fVar7 * fVar14;
  fVar7 = (this_ptr->extents).x;
  fVar14 = (float)0.5;
  this_ptr->scrape_points[5].local_position.z = fVar5 * fVar12;
  fVar5 = (this_ptr->extents).z;
  fVar12 = (float)0.5;
  this_ptr->scrape_points[6].local_position.y = fVar6 * fVar13;
  this_ptr->scrape_points[2].local_position.z = -fVar2 * fVar9;
  this_ptr->scrape_points[3].local_position.y = -fVar3 * fVar10;
  this_ptr->scrape_points[3].local_position.z = -fVar4 * fVar11;
  this_ptr->scrape_points[5].local_position.x = -fVar1 * fVar8;
  this_ptr->scrape_points[6].local_position.x = -fVar7 * fVar14;
  this_ptr->scrape_points[6].local_position.z = -fVar5 * fVar12;
  fVar3 = (float)0.5;
  fVar1 = (this_ptr->extents).y;
  fVar2 = (this_ptr->extents).z;
  this_ptr->scrape_points[7].local_position.x = (this_ptr->extents).x * fVar3;
  this_ptr->scrape_points[7].local_position.y = fVar1 * fVar3;
  this_ptr->scrape_points[7].local_position.z = -fVar2 * fVar3;
  core_box_cpp_CBox_updateTransform_FUN_0041aaa0(this_ptr,position,orientation,volume);
  return;
}
