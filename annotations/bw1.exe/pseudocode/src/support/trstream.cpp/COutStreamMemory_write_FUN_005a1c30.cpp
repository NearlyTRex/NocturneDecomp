// Name: support_trstream.cpp_COutStreamMemory_write_FUN_005a1c30
// Address: 005a1c30
// Address Range: [[005a1c30, 005a1cbe]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_005a1c30(COutStreamMemory *this_ptr,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_COutStreamMemory_write_FUN_005a1c30(COutStreamMemory *this_ptr,uint *param_2,uint param_3)

{
  ulong new_size;
  uint uVar1;
  char *pcVar2;
  int iVar3;
  byte bVar4;
  
  bVar4 = 0;
  uVar1 = this_ptr->capacity - this_ptr->position;
  if ((int)uVar1 < (int)param_3) {
    if (this_ptr->growable == 0) {
      param_3 = uVar1;
      if (uVar1 == 0) {
        return 0xffffffff;
      }
    }
    else {
      new_size = this_ptr->position + 0x4000 + param_3;
      pcVar2 = (char *)realloc(this_ptr->buffer,new_size);
      if (pcVar2 == (char *)0x0) {
        return 0xfffffffe;
      }
      this_ptr->buffer = pcVar2;
      this_ptr->capacity = new_size;
    }
  }
  pcVar2 = this_ptr->buffer + this_ptr->position;
  for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
    *(uint *)pcVar2 = *param_2;
    param_2 = (uint *)((int)param_2 + (uint)bVar4 * -8 + 4);
    pcVar2 = pcVar2 + (uint)bVar4 * -8 + 4;
  }
  for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
    *pcVar2 = *(char *)param_2;
    param_2 = (uint *)((int)param_2 + (uint)bVar4 * -2 + 1);
    pcVar2 = pcVar2 + (uint)bVar4 * -2 + 1;
  }
  iVar3 = this_ptr->position + param_3;
  this_ptr->position = iVar3;
  if (this_ptr->length <= iVar3) {
    this_ptr->length = iVar3;
  }
  return param_3;
}
