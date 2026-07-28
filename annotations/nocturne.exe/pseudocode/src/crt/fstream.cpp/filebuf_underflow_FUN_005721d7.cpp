// Name: crt_fstream.cpp_filebuf_underflow_FUN_005721d7
// Address: 005721d7
// Address Range: [[005721d7, 005722db]]
// Convention: unknown
// Signature: uint crt_fstream_cpp_filebuf_underflow_FUN_005721d7(int param_1)

#include "nocturne.h"

uint crt_fstream_cpp_filebuf_underflow_FUN_005721d7(int param_1)

{
  byte *pbVar1;
  int iVar2;
  byte *pbVar3;
  
  if ((*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18) &&
       -1 < *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18)) &&
     (iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1), iVar2 == -1)) {
    return 0xffffffff;
  }
  *(uint *)(param_1 + 0x18) = 0;
  *(uint *)(param_1 + 0x20) = 0;
  iVar2 = *(int *)(param_1 + 4);
  *(uint *)(param_1 + 0x1c) = 0;
  if (iVar2 == 0) {
    if (((*(uint *)(param_1 + 0x24) & 1) == 0) &&
       (iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x28))(param_1), iVar2 == -1)) {
      return 0xffffffff;
    }
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      iVar2 = param_1 + 0x38;
      *(int *)(param_1 + 0x14) = iVar2;
      *(int *)(param_1 + 0x10) = iVar2;
      *(int *)(param_1 + 0xc) = param_1 + 0x34;
      iVar2 = ReadFileBytesMaybe(*(uint *)(param_1 + 0x2c),iVar2,1)
      ;
      if (iVar2 < 1) {
        return 0xffffffff;
      }
      pbVar3 = *(byte **)(param_1 + 0x14);
      *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + iVar2;
      goto LAB_00572243;
    }
LAB_00572211:
    *(int *)(param_1 + 0xc) = iVar2;
    *(int *)(param_1 + 0x14) = iVar2 + 4;
    *(int *)(param_1 + 0x10) = iVar2 + 4;
  }
  else if (*(uint *)(param_1 + 0x10) <= *(uint *)(param_1 + 0x14)) goto LAB_00572211;
  iVar2 = *(int *)(param_1 + 8) - *(int *)(param_1 + 0x10);
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  else {
    iVar2 = ReadFileBytesMaybe
                      (*(uint *)(param_1 + 0x2c),*(int *)(param_1 + 0x10),iVar2);
    if (iVar2 < 1) {
      return 0xffffffff;
    }
  }
  pbVar1 = (byte *)(*(int *)(param_1 + 0x10) + iVar2);
  pbVar3 = *(byte **)(param_1 + 0x14);
  *(byte **)(param_1 + 0x10) = pbVar1;
  if (pbVar1 <= pbVar3) {
    return 0xffffffff;
  }
LAB_00572243:
  return (uint)*pbVar3;
}
