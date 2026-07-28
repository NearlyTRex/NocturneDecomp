// Name: crt_fstream.cpp_filebuf_pbackfail_FUN_00571efe
// Address: 00571efe
// Address Range: [[00571efe, 00571fd0]]
// Convention: unknown
// Signature: uint crt_fstream_cpp_filebuf_pbackfail_FUN_00571efe(int param_1,uint param_2)

#include "nocturne.h"

uint crt_fstream_cpp_filebuf_pbackfail_FUN_00571efe(int param_1,uint param_2)

{
  byte *puVar1;
  int iVar2;
  uint uVar3;
  long distance_to_move;
  bool bVar4;
  
  bVar4 = *(int *)(param_1 + 4) == 0;
  if (bVar4) {
    if ((bVar4) && ((*(uint *)(param_1 + 0x24) & 1) == 0)) {
      iVar2 = (**(code **)(*(int *)(param_1 + 0x28) + 0x28))(param_1);
      if (iVar2 == -1) {
        return 0xffffffff;
      }
    }
    iVar2 = *(int *)(param_1 + 4);
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x14) = param_1 + 0x38;
      *(int *)(param_1 + 0x10) = param_1 + 0x38;
      *(int *)(param_1 + 0xc) = param_1 + 0x34;
    }
    else {
      *(int *)(param_1 + 0xc) = iVar2;
      *(int *)(param_1 + 0x14) = iVar2 + 4;
      *(int *)(param_1 + 0x10) = iVar2 + 4;
    }
    if (*(uint *)(param_1 + 0x14) <= *(uint *)(param_1 + 0xc)) {
      uVar3 = (**(code **)(*(int *)(param_1 + 0x28) + 8))(param_1,param_2 & 0xff);
      return uVar3;
    }
    puVar1 = (byte *)(*(uint *)(param_1 + 0x14) - 1);
    *(byte **)(param_1 + 0x14) = puVar1;
    *puVar1 = (byte)param_2;
    uVar3 = (uint)**(byte **)(param_1 + 0x14);
  }
  else {
    uVar3 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1);
    if (uVar3 != 0xffffffff) {
      if ((param_2 == 10) && ((*(byte *)(param_1 + 0x30) & 0x80) != 0)) {
        distance_to_move = -2;
      }
      else {
        distance_to_move = -1;
      }
      iVar2 = lseek(*(int *)(param_1 + 0x2c),distance_to_move,1);
      if (-1 < iVar2) {
        return param_2;
      }
      return 0xffffffff;
    }
  }
  return uVar3;
}
