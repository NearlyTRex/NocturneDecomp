// Name: core_box.cpp_FUN_0041dcf0
// Address: 0041dcf0
// Address Range: [[0041dcf0, 0041de80]]
// Convention: unknown
// Signature: void core_box_cpp_FUN_0041dcf0(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_box_cpp_FUN_0041dcf0(CBox *param_1,CVector3f *param_2,CVector3f *param_3,int param_4,float *param_5,float param_6)

{
  SScrape *pSVar1;
  int iVar2;
  float *pfVar3;
  byte bVar4;
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
  
  bVar4 = 0;
  if (8 < param_4) {
    _DAT_01d1d400 = "..\\core\\box.cpp";
    _DAT_01d1d404 = 0x80;
    core_main_c_FUN_005030e0("CBox::setupN - Too many scrape points");
  }
  fStack_30 = 999.0;
  fStack_2c = 999.0;
  fStack_40 = -999.0;
  fStack_3c = -999.0;
  fStack_38 = -999.0;
  fStack_34 = 999.0;
  iVar2 = 0;
  pfVar3 = param_5;
  if (0 < param_4) {
    do {
      if (*pfVar3 < fStack_34) {
        fStack_34 = *pfVar3;
      }
      if (pfVar3[1] < fStack_30) {
        fStack_30 = pfVar3[1];
      }
      if (pfVar3[2] < fStack_2c) {
        fStack_2c = pfVar3[2];
      }
      if (fStack_40 < *pfVar3) {
        fStack_40 = *pfVar3;
      }
      if (fStack_3c < pfVar3[1]) {
        fStack_3c = pfVar3[1];
      }
      if (fStack_38 < pfVar3[2]) {
        fStack_38 = pfVar3[2];
      }
      iVar2 = iVar2 + 1;
      pfVar3 = pfVar3 + 3;
    } while (iVar2 < param_4);
  }
  fStack_24 = fStack_3c - fStack_30;
  fStack_20 = fStack_38 - fStack_2c;
  fStack_28 = fStack_40 - fStack_34;
  fStack_1c = fStack_40 - fStack_34;
  (&stack0xffffffe8)[(uint)bVar4 * 0xfffffffe] =
       (float)*(uint *)((int)&stack0xffffffdc + (uint)bVar4 * -8);
  *(uint *)((int)&stack0xffffffec + (uint)bVar4 * -8 + (uint)bVar4 * -8) =
       *(uint *)((int)&stack0xffffffe0 + (uint)bVar4 * -8 + (uint)bVar4 * -8);
  if (&param_1->extents != (CVector3f *)&stack0xffffffe4) {
    (param_1->extents).x = fStack_1c;
    (param_1->extents).y = fStack_18;
    (param_1->extents).z = fStack_14;
  }
  iVar2 = 0;
  param_1->scrape_point_count = param_4;
  if (0 < param_4) {
    pSVar1 = param_1->scrape_points;
    do {
      if (pSVar1 != (SScrape *)param_5) {
        (pSVar1->local_position).x = *param_5;
        (pSVar1->local_position).y = param_5[1];
        (pSVar1->local_position).z = param_5[2];
      }
      pSVar1 = pSVar1 + 1;
      iVar2 = iVar2 + 1;
      param_5 = param_5 + 3;
    } while (iVar2 < param_4);
  }
  core_box_cpp_FUN_0041de90(param_1,param_2,param_3,param_6);
  return;
}
