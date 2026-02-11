// Name: core_gore.cpp_CBloodSplat_FUN_004ec390
// Address: 004ec390
// Address Range: [[004ec390, 004ec462]]
// Convention: __cdecl
// Signature: void __cdecl core_gore_cpp_CBloodSplat_FUN_004ec390(CBloodSplat *this_ptr)

#include "nocturne.h"

void __cdecl core_gore_cpp_CBloodSplat_FUN_004ec390(CBloodSplat *this_ptr)

{
  int iVar1;
  float10 fVar2;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  
  this_ptr->unk[0x10] = '\x01';
  this_ptr->unk[0x11] = '\0';
  this_ptr->unk[0x12] = '\0';
  this_ptr->unk[0x13] = '\0';
  if ((float *)(this_ptr->unk + 4) != in_stack_00000008) {
    *(float *)(this_ptr->unk + 4) = *in_stack_00000008;
    *(float *)(this_ptr->unk + 8) = in_stack_00000008[1];
    *(float *)(this_ptr->unk + 0xc) = in_stack_00000008[2];
  }
  fVar2 = atan2
                    ((float10)in_stack_0000000c[1],
                     SQRT((float10)*in_stack_0000000c * (float10)*in_stack_0000000c +
                          (float10)in_stack_0000000c[2] * (float10)in_stack_0000000c[2]));
  this_ptr->unk[0x20] = '\0';
  this_ptr->unk[0x21] = '\0';
  this_ptr->unk[0x22] = '\0';
  this_ptr->unk[0x23] = '\0';
  *(float *)(this_ptr->unk + 0x18) = (float)-fVar2;
  fVar2 = atan2((float10)*in_stack_0000000c,(float10)in_stack_0000000c[2]);
  *(float *)(this_ptr->unk + 0x1c) = (float)fVar2;
  iVar1 = core_actor_cpp_getRandomInt_FUN_0040cc70(0,3);
  *(int *)(this_ptr->unk + 0x28) = iVar1;
  this_ptr->unk[0x24] = '\0';
  this_ptr->unk[0x25] = '\0';
  this_ptr->unk[0x26] = '\0';
  this_ptr->unk[0x27] = '\0';
  *(int *)(this_ptr->unk + 0x2c) = (int)ROUND(*in_stack_00000008 * 256.0f);
  *(int *)(this_ptr->unk + 0x30) = (int)ROUND(in_stack_00000008[1] * 256.0f);
  *(int *)(this_ptr->unk + 0x34) = (int)ROUND(in_stack_00000008[2] * 256.0f);
  *(int *)(this_ptr->unk + 0x38) = (int)ROUND(*in_stack_0000000c * 65536.0f);
  *(int *)(this_ptr->unk + 0x3c) = (int)ROUND(in_stack_0000000c[1] * 65536.0f);
  *(int *)(this_ptr->unk + 0x40) = (int)ROUND(in_stack_0000000c[2] * 65536.0f);
  this_ptr->unk[0] = '\0';
  this_ptr->unk[1] = '\0';
  this_ptr->unk[2] = '\0';
  this_ptr->unk[3] = '\0';
  *(float **)(this_ptr->unk + 0x14) = in_stack_00000008;
  return;
}
