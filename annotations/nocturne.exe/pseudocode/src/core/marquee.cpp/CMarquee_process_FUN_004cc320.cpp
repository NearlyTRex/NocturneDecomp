// Name: core_marquee.cpp_CMarquee_process_FUN_004cc320
// Address: 004cc320
// Address Range: [[004cc320, 004cc3c2]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_process_FUN_004cc320(CMarquee *this_ptr,float delta_time)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_process_FUN_004cc320(CMarquee *this_ptr,float delta_time)

{
  float fVar1;
  float fVar2;
  
  fVar1 = (float)(this_ptr->course).len;
  if (this_ptr->type == 1) {
    fVar2 = (delta_time * fVar1) / this_ptr->total_time + this_ptr->param;
    this_ptr->param = fVar2;
    if (fVar1 < fVar2) {
      this_ptr->param = this_ptr->param - fVar1;
      return;
    }
  }
  else if (this_ptr->type == 0) {
    fVar1 = delta_time / this_ptr->total_time + this_ptr->param;
    this_ptr->param = fVar1;
    if ((float)this_ptr->phase < fVar1) {
      this_ptr->param = this_ptr->param - (float)this_ptr->phase;
      return;
    }
  }
  return;
}
