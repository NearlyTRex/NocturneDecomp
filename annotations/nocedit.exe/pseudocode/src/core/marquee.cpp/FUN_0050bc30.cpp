// Name: core_marquee.cpp_FUN_0050bc30
// Address: 0050bc30
// Address Range: [[0050bc30, 0050bd53]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050bc30()

#include "nocturne.h"

void core_marquee_cpp_FUN_0050bc30(void)

{
  CCourse *this_ptr;
  float fVar1;
  int iVar2;
  int in_stack_00000004;
  float local_1c;
  float local_18;
  
  *(uint *)(in_stack_00000004 + 0x188) = 0x461c3f9a;
  *(uint *)(in_stack_00000004 + 0x18c) = 0x461c3f9a;
  *(uint *)(in_stack_00000004 + 400) = 0xc61c3f9a;
  *(uint *)(in_stack_00000004 + 0x194) = 0xc61c3f9a;
  *(uint *)(in_stack_00000004 + 0x198) = 0xc61c3f9a;
  this_ptr = (CCourse *)(in_stack_00000004 + 0x1a4);
  *(uint *)(in_stack_00000004 + 0x184) = 0x461c3f9a;
  iVar2 = 0;
  if (this_ptr->len < 1) {
    return;
  }
  do {
    fVar1 = (float)iVar2;
    core_course_cpp_CCourse_FUN_00442710(this_ptr);
    if (local_1c < *(float *)(in_stack_00000004 + 0x184)) {
      *(float *)(in_stack_00000004 + 0x184) = local_1c;
    }
    if (*(float *)(in_stack_00000004 + 400) < local_1c) {
      *(float *)(in_stack_00000004 + 400) = local_1c;
    }
    if (local_18 < *(float *)(in_stack_00000004 + 0x188)) {
      *(float *)(in_stack_00000004 + 0x188) = local_18;
    }
    if (*(float *)(in_stack_00000004 + 0x194) < local_18) {
      *(float *)(in_stack_00000004 + 0x194) = local_18;
    }
    if (fVar1 < *(float *)(in_stack_00000004 + 0x18c)) {
      *(float *)(in_stack_00000004 + 0x18c) = fVar1;
    }
    if (*(float *)(in_stack_00000004 + 0x198) < fVar1) {
      *(float *)(in_stack_00000004 + 0x198) = fVar1;
    }
    iVar2 = iVar2 + 1;
  } while (iVar2 < this_ptr->len);
  return;
}
