// Name: core_box.cpp_CBox_setupN_FUN_0041df50
// Address: 0041df50
// Address Range: [[0041df50, 0041df99] [0041e0b0, 0041e0d7]]
// Convention: __cdecl
// Signature: void core_box.cpp_CBox_setupN_FUN_0041df50(CBox * this_ptr, CVector3f * position, CVector3f * orientation, int point_count, CVector3f * point_array, float volume)

#include "nocturne.h"

void __cdecl
core_box_cpp_CBox_setupN_FUN_0041df50
          (CBox *this_ptr,CVector3f *position,CVector3f *orientation,int point_count,
          CVector3f *point_array,float volume)

{
  int iVar1;
  float *pfVar2;
  SScrape *pSVar3;
  BADSPACEBASE *in_ESP;
  float in_stack_0000001c;
  float fStack_30;
  float fStack_2c;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  if (8 < point_count) {
    g_CurrentFilename = "..\\core\\box.cpp";
    g_CurrentLineNumber = 0x80;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CBox::setupN - Too many scrape points");
  }
  local_14 = 999.0;
  local_28 = 999.0;
  local_24 = -999.0;
  local_20 = -999.0;
  local_1c = -999.0;
  local_18 = 999.0;
  iVar1 = 0;
  pfVar2 = (float *)volume;
  if (0 < point_count) {
    do {
      if (*pfVar2 < local_18) {
        local_18 = *pfVar2;
      }
      if (pfVar2[1] < local_14) {
        local_14 = pfVar2[1];
      }
      if (pfVar2[2] < local_28) {
        local_28 = pfVar2[2];
      }
      if (local_24 < *pfVar2) {
        local_24 = *pfVar2;
      }
      if (local_20 < pfVar2[1]) {
        local_20 = pfVar2[1];
      }
      if (local_1c < pfVar2[2]) {
        local_1c = pfVar2[2];
      }
      iVar1 = iVar1 + 1;
      pfVar2 = pfVar2 + 3;
    } while (iVar1 < point_count);
  }
  fStack_30 = local_24 - local_18;
  fStack_2c = local_20 - local_14;
  local_28 = local_1c - local_28;
  if (&this_ptr->extents != (CVector3f *)&fStack_30) {
    (this_ptr->extents).x = fStack_30;
    (this_ptr->extents).y = fStack_2c;
    (this_ptr->extents).z = local_28;
  }
  iVar1 = 0;
  this_ptr->scrape_point_count = point_count;
  if (0 < point_count) {
    pSVar3 = this_ptr->scrape_points;
    do {
      if (pSVar3 != (SScrape *)volume) {
        (pSVar3->local_position).x = *(float *)volume;
        (pSVar3->local_position).y = *(float *)((int)volume + 4);
        (pSVar3->local_position).z = *(float *)((int)volume + 8);
      }
      pSVar3 = pSVar3 + 1;
      iVar1 = iVar1 + 1;
      volume = (float)((int)volume + 0xc);
    } while (iVar1 < point_count);
  }
  core_box_cpp_CBox_updateTransform_FUN_0041e0e0
            (this_ptr,orientation,(CVector3f *)point_count,in_stack_0000001c);
  return;
}
