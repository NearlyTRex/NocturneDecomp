// Name: core_box.cpp_CBox_setupN_FUN_0041b030
// Address: 0041b030
// Address Range: [[0041b030, 0041b1c0]]
// Convention: __cdecl
// Signature: void __cdecl core_box_cpp_CBox_setupN_FUN_0041b030(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */

void __cdecl core_box_cpp_CBox_setupN_FUN_0041b030(CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,CVector3f *point_array,float volume)

{
  CVector3f *pCVar1;
  int iVar2;
  byte bVar3;
  float afStackY_1010 [1008];
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  float fStack_28;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  
  bVar3 = 0;
  if (8 < point_count) {
    g_CHAR_PTR_01d71de0 = "..\\core\\box.cpp";
    g_INT_01d71de4 = 0x80;
    core_main_c_displayErrorAndQuit_FUN_004e4330("CBox::setupN - Too many scrape points");
  }
  fStack_30 = 999.0;
  fStack_2c = 999.0;
  fStack_40 = -999.0;
  fStack_3c = -999.0;
  fStack_38 = -999.0;
  fStack_34 = 999.0;
  iVar2 = 0;
  pCVar1 = point_array;
  if (0 < point_count) {
    do {
      if (pCVar1->x < fStack_34) {
        fStack_34 = pCVar1->x;
      }
      if (pCVar1->y < fStack_30) {
        fStack_30 = pCVar1->y;
      }
      if (pCVar1->z < fStack_2c) {
        fStack_2c = pCVar1->z;
      }
      if (fStack_40 < pCVar1->x) {
        fStack_40 = pCVar1->x;
      }
      if (fStack_3c < pCVar1->y) {
        fStack_3c = pCVar1->y;
      }
      if (fStack_38 < pCVar1->z) {
        fStack_38 = pCVar1->z;
      }
      iVar2 = iVar2 + 1;
      pCVar1 = pCVar1 + 1;
    } while (iVar2 < point_count);
  }
  fStack_24 = fStack_3c - fStack_30;
  fStack_20 = fStack_38 - fStack_2c;
  fStack_28 = fStack_40 - fStack_34;
  fStack_1c = fStack_40 - fStack_34;
  (&stack0xffffffe8)[(uint)bVar3 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar3 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar3 * -8 + (uint)bVar3 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar3 * -8 + (uint)bVar3 * -8);
  if (&this_ptr->extents != (CVector3f *)&stack0xffffffe4) {
    (this_ptr->extents).x = fStack_1c;
    (this_ptr->extents).y = fStack_18;
    (this_ptr->extents).z = fStack_14;
  }
  iVar2 = 0;
  this_ptr->scrape_point_count = point_count;
  if (0 < point_count) {
    pCVar1 = &this_ptr->scrape_points[0].local_position;
    do {
      if (pCVar1 != point_array) {
        ((CVector3f *)&pCVar1->x)->x = point_array->x;
        pCVar1->y = point_array->y;
        pCVar1->z = point_array->z;
      }
      pCVar1 = (CVector3f *)&pCVar1[4].y;
      iVar2 = iVar2 + 1;
      point_array = point_array + 1;
    } while (iVar2 < point_count);
  }
  core_box_cpp_CBox_updateTransform_FUN_0041b1d0(this_ptr,position,orientation,volume);
  return;
}
