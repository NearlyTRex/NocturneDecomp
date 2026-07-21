// Name: support_codec.cpp_writeBitsToStream_FUN_00438c40
// Address: 00438c40
// Address Range: [[00438c40, 00438d54]]
// Convention: __cdecl
// Signature: void __cdecl support_codec_cpp_writeBitsToStream_FUN_00438c40(byte *param_1,int param_2,uint param_3,undefined4 param_4)

#include "nocturne.h"

void __cdecl support_codec_cpp_writeBitsToStream_FUN_00438c40(byte *param_1,int param_2,uint param_3,uint param_4)

{
  byte bVar1;
  int iVar2;
  byte local_14;
  
  iVar2 = *(int *)param_1;
  while (7 < iVar2) {
    crt_iostream_cpp_ostream_put_FUN_00564ce5(param_4,param_1[4]);
    iVar2 = *(int *)param_1 + -8;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) >> 8;
    *(int *)param_1 = iVar2;
  }
  if (0 < *(int *)param_1) {
    iVar2 = 8 - *(int *)param_1;
    if (param_2 < iVar2) {
      bVar1 = *param_1;
      *(int *)param_1 = *(int *)param_1 + param_2;
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << (bVar1 & 0x1f);
    }
    else {
      if (param_2 != iVar2) {
        crt_iostream_cpp_ostream_put_FUN_00564ce5
                  (param_4,(char)param_3 << (*param_1 & 0x1f) | param_1[4]);
        param_1[0] = 0;
        param_1[1] = 0;
        param_1[2] = 0;
        param_1[3] = 0;
        local_14 = (byte)iVar2;
        param_1[4] = 0;
        param_1[5] = 0;
        param_1[6] = 0;
        param_1[7] = 0;
        param_3 = param_3 >> (local_14 & 0x1f);
        param_2 = param_2 - iVar2;
        goto LAB_00438cd3;
      }
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | param_3 << (*param_1 & 0x1f);
      crt_iostream_cpp_ostream_put_FUN_00564ce5(param_4,param_1[4]);
      param_1[0] = 0;
      param_1[1] = 0;
      param_1[2] = 0;
      param_1[3] = 0;
      param_1[4] = 0;
      param_1[5] = 0;
      param_1[6] = 0;
      param_1[7] = 0;
    }
    return;
  }
LAB_00438cd3:
  for (; 7 < param_2; param_2 = param_2 + -8) {
    crt_iostream_cpp_ostream_put_FUN_00564ce5(param_4,param_3 & 0xff);
    param_3 = param_3 >> 8;
  }
  *(int *)param_1 = param_2;
  *(uint *)(param_1 + 4) = param_3;
  return;
}
