// Name: core_box.cpp_CBox_ctor_FUN_0041dc50
// Address: 0041dc50
// Address Range: [[0041dc50, 0041dcfd]]
// Convention: __cdecl
// Signature: CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041dc50(CBox *this_ptr)

#include "nocturne.h"

CBox * __cdecl core_box_cpp_CBox_ctor_FUN_0041dc50(CBox *this_ptr)

{
  float fVar1;
  CBox_ptr_180 pvVar1;
  
  pvVar1 = __arrinit(this_ptr->scrape_points,8,&g_SScrapeTypeInfo);
  ADJ(pvVar1)->position.z = 0.0;
  fVar1 = ADJ(pvVar1)->position.z;
  ADJ(pvVar1)->position.y = fVar1;
  ADJ(pvVar1)->position.x = fVar1;
  (ADJ(pvVar1)->orientation).z = 0.0;
  (ADJ(pvVar1)->orientation).y = (ADJ(pvVar1)->orientation).z;
  (ADJ(pvVar1)->orientation).x = (ADJ(pvVar1)->orientation).y;
  (ADJ(pvVar1)->extents).z = 0.0;
  (ADJ(pvVar1)->extents).y = (ADJ(pvVar1)->extents).z;
  (ADJ(pvVar1)->extents).x = (ADJ(pvVar1)->extents).y;
  ADJ(pvVar1)->mass = 0;
  (ADJ(pvVar1)->linear_velocity_local).z = 0.0;
  (ADJ(pvVar1)->linear_velocity_local).y = (ADJ(pvVar1)->linear_velocity_local).z;
  (ADJ(pvVar1)->linear_velocity_local).x = (ADJ(pvVar1)->linear_velocity_local).y;
  (ADJ(pvVar1)->linear_velocity).z = 0.0;
  (ADJ(pvVar1)->linear_velocity).y = (ADJ(pvVar1)->linear_velocity).z;
  (ADJ(pvVar1)->linear_velocity).x = (ADJ(pvVar1)->linear_velocity).y;
  (ADJ(pvVar1)->angular_velocity).z = 0.0;
  (ADJ(pvVar1)->angular_velocity).y = (ADJ(pvVar1)->angular_velocity).z;
  (ADJ(pvVar1)->angular_velocity).x = (ADJ(pvVar1)->angular_velocity).y;
  ADJ(pvVar1)->is_valid = 0;
  return ADJ(pvVar1);
}
