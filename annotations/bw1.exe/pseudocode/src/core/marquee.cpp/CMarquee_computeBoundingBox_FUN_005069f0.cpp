// Name: core_marquee.cpp_CMarquee_computeBoundingBox_FUN_005069f0
// Address: 005069f0
// Address Range: [[005069f0, 00506b13]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_005069f0(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_computeBoundingBox_FUN_005069f0(CMarquee *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  *(uint *)&this_ptr->field_0x188 = 0x461c3f9a;
  *(uint *)&this_ptr->field_0x18c = 0x461c3f9a;
  *(uint *)&this_ptr->field_0x190 = 0xc61c3f9a;
  *(uint *)&this_ptr->field_0x194 = 0xc61c3f9a;
  *(uint *)&this_ptr->field_0x198 = 0xc61c3f9a;
  this_ptr_00 = &this_ptr->field_0x1a4;
  *(uint *)&this_ptr->field_0x184 = 0x461c3f9a;
  iVar1 = 0;
  if (*(int *)this_ptr_00 < 1) {
    return;
  }
  do {
    fStack_14 = (float)iVar1;
    iStack_10 = iVar1;
    core_course_cpp_FUN_00447f00
              ((CCourse *)this_ptr_00,fStack_14,(CVector3f *)&fStack_20,&CStack_2c);
    if (fStack_20 < *(float *)&this_ptr->field_0x184) {
      *(float *)&this_ptr->field_0x184 = fStack_20;
    }
    if (*(float *)&this_ptr->field_0x190 < fStack_20) {
      *(float *)&this_ptr->field_0x190 = fStack_20;
    }
    if (fStack_1c < *(float *)&this_ptr->field_0x188) {
      *(float *)&this_ptr->field_0x188 = fStack_1c;
    }
    if (*(float *)&this_ptr->field_0x194 < fStack_1c) {
      *(float *)&this_ptr->field_0x194 = fStack_1c;
    }
    if (fStack_18 < *(float *)&this_ptr->field_0x18c) {
      *(float *)&this_ptr->field_0x18c = fStack_18;
    }
    if (*(float *)&this_ptr->field_0x198 < fStack_18) {
      *(float *)&this_ptr->field_0x198 = fStack_18;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)this_ptr_00);
  return;
}
