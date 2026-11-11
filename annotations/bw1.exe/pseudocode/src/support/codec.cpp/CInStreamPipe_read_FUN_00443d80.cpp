// Name: support_codec.cpp_CInStreamPipe_read_FUN_00443d80
// Address: 00443d80
// Address Range: [[00443d80, 00443e3a]]
// Convention: __cdecl
// Signature: int __cdecl support_codec_cpp_CInStreamPipe_read_FUN_00443d80(CInStreamPipe *this_ptr,undefined4 *param_2,uint param_3)

#include "nocturne.h"

int __cdecl support_codec_cpp_CInStreamPipe_read_FUN_00443d80(CInStreamPipe *this_ptr,uint *param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  int iStack_18;
  char *pcStack_14;
  
  bVar6 = 0;
  if (this_ptr->buffer == (char *)0x0) {
    iStack_18 = -2;
  }
  else {
    iStack_18 = 0;
    pcStack_14 = (char *)param_2;
    if (0 < (int)param_3) {
      while( true ) {
        if (this_ptr->position < this_ptr->buffer_length) {
          uVar3 = this_ptr->buffer_length - this_ptr->position;
          if ((int)param_3 < (int)uVar3) {
            uVar3 = param_3;
          }
          param_3 = param_3 - uVar3;
          pcVar4 = this_ptr->buffer + this_ptr->position;
          pcVar5 = pcStack_14;
          for (uVar2 = uVar3 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(uint *)pcVar5 = *(uint *)pcVar4;
            pcVar4 = pcVar4 + (uint)bVar6 * -8 + 4;
            pcVar5 = pcVar5 + (uint)bVar6 * -8 + 4;
          }
          for (uVar2 = uVar3 & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *pcVar5 = *pcVar4;
            pcVar4 = pcVar4 + (uint)bVar6 * -2 + 1;
            pcVar5 = pcVar5 + (uint)bVar6 * -2 + 1;
          }
          pcStack_14 = pcStack_14 + uVar3;
          iStack_18 = iStack_18 + uVar3;
          this_ptr->position = this_ptr->position + uVar3;
        }
        if ((int)param_3 < 1) {
          return iStack_18;
        }
        iVar1 = support_codec_cpp_CInStreamPipe_fillBuffer_FUN_00444020(this_ptr);
        if (iVar1 < -1) {
          return iVar1;
        }
        if (iVar1 < 0) break;
        if ((int)param_3 < 1) {
          return iStack_18;
        }
      }
      if (iStack_18 < 1) {
        return -1;
      }
    }
  }
  return iStack_18;
}
