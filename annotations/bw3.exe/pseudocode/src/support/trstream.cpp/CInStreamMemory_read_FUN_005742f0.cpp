// Name: support_trstream.cpp_CInStreamMemory_read_FUN_005742f0
// Address: 005742f0
// Address Range: [[005742f0, 0057434e]]
// Convention: __cdecl
// Signature: uint __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005742f0(CInStreamMemory *this_ptr,undefined4 *param_2,uint param_3)

#include "nocturne.h"

uint __cdecl support_trstream_cpp_CInStreamMemory_read_FUN_005742f0(CInStreamMemory *this_ptr,uint *param_2,uint param_3)

{
  uint uVar1;
  char *pcVar2;
  
  if (this_ptr->data == (char *)0x0) {
    return 0xfffffffe;
  }
  if (this_ptr->position < this_ptr->size) {
    uVar1 = this_ptr->size - this_ptr->position;
    if ((int)uVar1 < (int)param_3) {
      param_3 = uVar1;
    }
    pcVar2 = this_ptr->data + this_ptr->position;
    for (uVar1 = param_3 >> 2; uVar1 != 0; uVar1 = uVar1 - 1) {
      *param_2 = *(uint *)pcVar2;
      pcVar2 = pcVar2 + 4;
      param_2 = (uint *)((int)param_2 + 4);
    }
    for (uVar1 = param_3 & 3; uVar1 != 0; uVar1 = uVar1 - 1) {
      *(char *)param_2 = *pcVar2;
      pcVar2 = pcVar2 + 1;
      param_2 = (uint *)((int)param_2 + 1);
    }
    this_ptr->position = this_ptr->position + param_3;
    return param_3;
  }
  return 0xffffffff;
}
