// Name: crt_fstream.cpp_filebuf_overflow_FUN_00571fd1
// Address: 00571fd1
// Address Range: [[00571fd1, 005721d6]]
// Convention: unknown
// Signature: int crt_fstream_cpp_filebuf_overflow_FUN_00571fd1(int param_1,int param_2)

#include "nocturne.h"

int crt_fstream_cpp_filebuf_overflow_FUN_00571fd1(int param_1,int param_2)

{
  int iVar1;
  uint n;
  SIZE_T count;
  long unaff_EDI;
  byte local_14 [4];
  
  if (*(int *)(param_1 + 0x10) == *(int *)(param_1 + 0x14) ||
      *(int *)(param_1 + 0x10) - *(int *)(param_1 + 0x14) < 0) {
    *(uint *)(param_1 + 0xc) = 0;
    *(uint *)(param_1 + 0x14) = 0;
    *(uint *)(param_1 + 0x10) = 0;
  }
  else {
    iVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x20))(param_1);
    if (iVar1 == -1) {
      return -1;
    }
  }
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 == 0) {
    if (((*(uint *)(param_1 + 0x24) & 1) == 0) &&
       (iVar1 = (**(code **)(*(int *)(param_1 + 0x28) + 0x28))(param_1), iVar1 == -1)) {
      return -1;
    }
    iVar1 = *(int *)(param_1 + 4);
    if (iVar1 == 0) {
      if (param_2 != -1) {
        local_14[0] = (byte)param_2;
        iVar1 = write(*(int *)(param_1 + 0x2c),local_14,1);
        return (iVar1 == 1) - 1;
      }
      return 0;
    }
  }
  else if (*(uint *)(param_1 + 0x18) < *(uint *)(param_1 + 0x20)) goto LAB_00572080;
  *(int *)(param_1 + 0x18) = iVar1;
  *(int *)(param_1 + 0x20) = iVar1;
  *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 8);
LAB_00572080:
  if (((*(byte *)(param_1 + 0x30) & 8) == 0) ||
     ((unaff_EDI = tell(*(int *)(param_1 + 0x2c)), -1 < unaff_EDI &&
      (iVar1 = lseek(*(int *)(param_1 + 0x2c),0,2), -1 < iVar1)))) {
    if ((param_2 != -1) && (*(byte **)(param_1 + 0x20) < *(byte **)(param_1 + 0x1c))) {
      **(byte **)(param_1 + 0x20) = (byte)param_2;
      param_2 = -1;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    n = *(int *)(param_1 + 0x20) - *(int *)(param_1 + 0x18);
    while (n != 0) {
      count = n;
      if (0x7fffffff < n) {
        count = 0x7fffffff;
      }
      iVar1 = write(*(int *)(param_1 + 0x2c),*(void **)(param_1 + 0x18),count)
      ;
      if (iVar1 == -1) {
        return -1;
      }
      if (iVar1 == 0) break;
      n = n - iVar1;
      if (n == 0) {
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c);
      }
      else {
        memmove
                  (*(void **)(param_1 + 0x18),(void *)(iVar1 + (int)*(void **)(param_1 + 0x18)),n);
        *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x18);
        *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c);
        *(uint *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + n;
      }
    }
    if (param_2 != -1) {
      if (*(byte **)(param_1 + 0x1c) <= *(byte **)(param_1 + 0x20)) {
        return -1;
      }
      **(byte **)(param_1 + 0x20) = (byte)param_2;
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + 1;
    }
    if ((((*(byte *)(param_1 + 0x30) & 8) == 0) ||
        (iVar1 = lseek(*(int *)(param_1 + 0x2c),unaff_EDI,0), -1 < iVar1))
       && (n == 0)) {
      return 0;
    }
  }
  return -1;
}
