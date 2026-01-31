// Name: core_marquee.cpp_CMarquee_FUN_0050bc30
// Address: 0050bc30
// Address Range: [[0050bc30, 0050bd53]]
// Convention: __cdecl
// Signature: void __cdecl core_marquee_cpp_CMarquee_FUN_0050bc30(CMarquee *this_ptr)

#include "nocturne.h"

void __cdecl core_marquee_cpp_CMarquee_FUN_0050bc30(CMarquee *this_ptr)

{
  char *this_ptr_00;
  int iVar1;
  float local_20;
  float local_1c;
  float local_18;
  
  this_ptr->unk2[4] = -0x66;
  this_ptr->unk2[5] = '?';
  this_ptr->unk2[6] = '\x1c';
  this_ptr->unk2[7] = 'F';
  this_ptr->unk2[8] = -0x66;
  this_ptr->unk2[9] = '?';
  this_ptr->unk2[10] = '\x1c';
  this_ptr->unk2[0xb] = 'F';
  this_ptr->unk2[0xc] = -0x66;
  this_ptr->unk2[0xd] = '?';
  this_ptr->unk2[0xe] = '\x1c';
  this_ptr->unk2[0xf] = -0x3a;
  this_ptr->unk2[0x10] = -0x66;
  this_ptr->unk2[0x11] = '?';
  this_ptr->unk2[0x12] = '\x1c';
  this_ptr->unk2[0x13] = -0x3a;
  this_ptr->unk2[0x14] = -0x66;
  this_ptr->unk2[0x15] = '?';
  this_ptr->unk2[0x16] = '\x1c';
  this_ptr->unk2[0x17] = -0x3a;
  this_ptr_00 = this_ptr->unk3;
  this_ptr->unk2[0] = -0x66;
  this_ptr->unk2[1] = '?';
  this_ptr->unk2[2] = '\x1c';
  this_ptr->unk2[3] = 'F';
  iVar1 = 0;
  if (*(int *)this_ptr_00 < 1) {
    return;
  }
  do {
    core_course_cpp_CCourse_FUN_00442710((CCourse *)this_ptr_00);
    if (local_20 < *(float *)this_ptr->unk2) {
      *(float *)this_ptr->unk2 = local_20;
    }
    if (*(float *)(this_ptr->unk2 + 0xc) < local_20) {
      *(float *)(this_ptr->unk2 + 0xc) = local_20;
    }
    if (local_1c < *(float *)(this_ptr->unk2 + 4)) {
      *(float *)(this_ptr->unk2 + 4) = local_1c;
    }
    if (*(float *)(this_ptr->unk2 + 0x10) < local_1c) {
      *(float *)(this_ptr->unk2 + 0x10) = local_1c;
    }
    if (local_18 < *(float *)(this_ptr->unk2 + 8)) {
      *(float *)(this_ptr->unk2 + 8) = local_18;
    }
    if (*(float *)(this_ptr->unk2 + 0x14) < local_18) {
      *(float *)(this_ptr->unk2 + 0x14) = local_18;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)this_ptr_00);
  return;
}
