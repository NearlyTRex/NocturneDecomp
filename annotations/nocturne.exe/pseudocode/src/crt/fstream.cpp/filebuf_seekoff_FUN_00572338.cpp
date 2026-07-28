// Name: crt_fstream.cpp_filebuf_seekoff_FUN_00572338
// Address: 00572338
// Address Range: [[00572338, 005723ad]]
// Convention: unknown
// Signature: int crt_fstream_cpp_filebuf_seekoff_FUN_00572338(int param_1,long param_2,uint param_3)

#include "nocturne.h"

int crt_fstream_cpp_filebuf_seekoff_FUN_00572338(int param_1,long param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (iVar1 != -1) {
    if (((*(int *)(param_1 + 0x20) != *(int *)(param_1 + 0x18)) ||
        (*(int *)(param_1 + 0x10) != *(int *)(param_1 + 0x14))) &&
       (iVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1), iVar1 == -1)) {
      return -1;
    }
    if (param_3 == 0) {
      iVar1 = 0;
    }
    else if (param_3 < 2) {
      iVar1 = 1;
    }
    else {
      if (param_3 != 2) {
        return -1;
      }
      iVar1 = 2;
    }
    iVar1 = lseek(*(int *)(param_1 + 0x2c),param_2,iVar1);
  }
  return iVar1;
}
