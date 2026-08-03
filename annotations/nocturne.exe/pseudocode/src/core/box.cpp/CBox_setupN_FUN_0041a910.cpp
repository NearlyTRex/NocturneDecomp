// Name: core_box.cpp_CBox_setupN_FUN_0041a910
// Address: 0041a910
// Address Range: [[0041a910, 0041aa97]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupN_FUN_0041a910(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume)

#include "nocturne.h"

void __cdecl core_box_cpp_CBox_setupN_FUN_0041a910(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume)

{
  int iVar1;
  CVector3f *pCVar2;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (8 < point_count) {
    g_CHAR_PTR_01cc4800 = "..\\core\\box.cpp";
    g_INT_01cc4804 = 0x80;
    core_main_c_FUN_004c8440("CBox::setupN - Too many scrape points");
  }
  local_18 = 999.0;
  local_14 = 999.0;
  local_28 = -999.0;
  local_24 = -999.0;
  local_20 = -999.0;
  local_1c = 999.0;
  iVar1 = 0;
  pCVar2 = point_array;
  if (0 < point_count) {
    do {
      if (pCVar2->x < local_1c) {
        local_1c = pCVar2->x;
      }
      if (pCVar2->y < local_18) {
        local_18 = pCVar2->y;
      }
      if (pCVar2->z < local_14) {
        local_14 = pCVar2->z;
      }
      if (local_28 < pCVar2->x) {
        local_28 = pCVar2->x;
      }
      if (local_24 < pCVar2->y) {
        local_24 = pCVar2->y;
      }
      if (local_20 < pCVar2->z) {
        local_20 = pCVar2->z;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 1;
    } while (iVar1 < point_count);
  }
  local_34 = local_28 - local_1c;
  local_30 = local_24 - local_18;
  local_2c = local_20 - local_14;
  if (&this_ptr->extents != (CVector3f *)&local_34) {
    (this_ptr->extents).x = local_34;
    (this_ptr->extents).y = local_30;
    (this_ptr->extents).z = local_2c;
  }
  iVar1 = 0;
  this_ptr->scrape_point_count = point_count;
  if (0 < point_count) {
    pCVar2 = &this_ptr->scrape_points[0].local_position;
    do {
      if (pCVar2 != point_array) {
        ((CVector3f *)&pCVar2->x)->x = point_array->x;
        pCVar2->y = point_array->y;
        pCVar2->z = point_array->z;
      }
      pCVar2 = (CVector3f *)&pCVar2[4].y;
      iVar1 = iVar1 + 1;
      point_array = point_array + 1;
    } while (iVar1 < point_count);
  }
  core_box_cpp_CBox_updateTransform_FUN_0041aaa0(this_ptr,position,orientation,volume);
  return;
}
