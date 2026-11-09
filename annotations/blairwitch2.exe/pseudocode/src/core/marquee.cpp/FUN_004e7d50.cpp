// Name: core_marquee.cpp_FUN_004e7d50
// Address: 004e7d50
// Address Range: [[004e7d50, 004e7e73]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_FUN_004e7d50(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_FUN_004e7d50(CMarquee *this_ptr)

{
  byte *this_ptr_00;
  int iVar1;
  CVector3f CStack_2c;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  int iStack_10;
  
  *(uint *)&this_ptr->field_0x2e4 = 0x461c3f9a;
  *(uint *)&this_ptr->field_0x2e8 = 0x461c3f9a;
  *(uint *)&this_ptr->field_0x2ec = 0xc61c3f9a;
  *(uint *)&this_ptr->field_0x2f0 = 0xc61c3f9a;
  *(uint *)&this_ptr->field_0x2f4 = 0xc61c3f9a;
  this_ptr_00 = &this_ptr->field_0x300;
  *(uint *)&this_ptr->field_0x2e0 = 0x461c3f9a;
  iVar1 = 0;
  if (*(int *)this_ptr_00 < 1) {
    return;
  }
  do {
    fStack_14 = (float)iVar1;
    iStack_10 = iVar1;
    core_course_cpp_FUN_00438c40
              ((CCourse *)this_ptr_00,fStack_14,(CVector3f *)&fStack_20,&CStack_2c);
    if (fStack_20 < *(float *)&this_ptr->field_0x2e0) {
      *(float *)&this_ptr->field_0x2e0 = fStack_20;
    }
    if (*(float *)&this_ptr->field_0x2ec < fStack_20) {
      *(float *)&this_ptr->field_0x2ec = fStack_20;
    }
    if (fStack_1c < *(float *)&this_ptr->field_0x2e4) {
      *(float *)&this_ptr->field_0x2e4 = fStack_1c;
    }
    if (*(float *)&this_ptr->field_0x2f0 < fStack_1c) {
      *(float *)&this_ptr->field_0x2f0 = fStack_1c;
    }
    if (fStack_18 < *(float *)&this_ptr->field_0x2e8) {
      *(float *)&this_ptr->field_0x2e8 = fStack_18;
    }
    if (*(float *)&this_ptr->field_0x2f4 < fStack_18) {
      *(float *)&this_ptr->field_0x2f4 = fStack_18;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)this_ptr_00);
  return;
}
