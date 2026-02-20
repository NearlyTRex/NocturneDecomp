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
  CVector3f CStack_2c;
  CVector3f local_20;
  float local_14;
  int local_10;
  
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
    local_14 = (float)iVar1;
    local_10 = iVar1;
    core_course_cpp_CCourse_evaluate_FUN_00442710
              ((CCourse *)this_ptr_00,local_14,&local_20,&CStack_2c);
    if (local_20.x < *(float *)this_ptr->unk2) {
      *(float *)this_ptr->unk2 = local_20.x;
    }
    if (*(float *)(this_ptr->unk2 + 0xc) < local_20.x) {
      *(float *)(this_ptr->unk2 + 0xc) = local_20.x;
    }
    if (local_20.y < *(float *)(this_ptr->unk2 + 4)) {
      *(float *)(this_ptr->unk2 + 4) = local_20.y;
    }
    if (*(float *)(this_ptr->unk2 + 0x10) < local_20.y) {
      *(float *)(this_ptr->unk2 + 0x10) = local_20.y;
    }
    if (local_20.z < *(float *)(this_ptr->unk2 + 8)) {
      *(float *)(this_ptr->unk2 + 8) = local_20.z;
    }
    if (*(float *)(this_ptr->unk2 + 0x14) < local_20.z) {
      *(float *)(this_ptr->unk2 + 0x14) = local_20.z;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < *(int *)this_ptr_00);
  return;
}
