// Name: core_marquee.cpp_CMarquee_process_FUN_00506b60
// Address: 00506b60
// Address Range: [[00506b60, 00506c02]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_process_FUN_00506b60(CMarquee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_process_FUN_00506b60(CMarquee *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)*(int *)&this_ptr->field_0x1a4;
  if (*(int *)&this_ptr->field_0x1a0 == 1) {
    fVar2 = (delta_time * fVar1) / *(float *)&this_ptr->field_0x178 +
            *(float *)&this_ptr->field_0x17c;
    *(float *)&this_ptr->field_0x17c = fVar2;
    if (fVar1 < fVar2) {
      *(float *)&this_ptr->field_0x17c = *(float *)&this_ptr->field_0x17c - fVar1;
      return;
    }
  }
  else if (*(int *)&this_ptr->field_0x1a0 == 0) {
    fVar1 = delta_time / *(float *)&this_ptr->field_0x178 + *(float *)&this_ptr->field_0x17c;
    *(float *)&this_ptr->field_0x17c = fVar1;
    if ((float)*(int *)&this_ptr->field_0x180 < fVar1) {
      *(float *)&this_ptr->field_0x17c =
           *(float *)&this_ptr->field_0x17c - (float)*(int *)&this_ptr->field_0x180;
      return;
    }
  }
  return;
}
