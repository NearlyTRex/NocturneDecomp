// Name: crt_strstream.cpp_strstreambuf_seekoff_FUN_005700d0
// Address: 005700d0
// Address Range: [[005700d0, 005701ae]]
// Convention: unknown
// Signature: int crt_strstream_cpp_strstreambuf_seekoff_FUN_005700d0(int param_1,int param_2,int param_3,uint param_4)

#include "nocturne.h"

int crt_strstream_cpp_strstreambuf_seekoff_FUN_005700d0(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  int in_ECX;
  char *buffer_end2;
  uint uVar2;
  
  if (((param_4 & 3) != 0) && ((param_3 != 1 || ((param_4 & 3) != 3)))) {
    if ((param_4 & 1) != 0) {
      buffer_end2 = *(char **)(param_1 + 0x20);
      if ((buffer_end2 == (char *)0x0) || (buffer_end2 < *(char **)(param_1 + 0x10))) {
        buffer_end2 = *(char **)(param_1 + 0x10);
      }
      in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_00571e75
                         (param_2,param_3,*(char **)(param_1 + 0xc),*(char **)(param_1 + 0x14),
                          *(char **)(param_1 + 0x10),buffer_end2);
      if (in_ECX != -1) {
        uVar2 = *(uint *)(param_1 + 0x10);
        uVar1 = in_ECX + *(int *)(param_1 + 0xc);
        if (uVar2 < uVar1) {
          uVar2 = *(uint *)(param_1 + 0x1c);
        }
        *(uint *)(param_1 + 0x14) = uVar1;
        *(uint *)(param_1 + 0x10) = uVar2;
      }
    }
    if (((param_4 & 2) != 0) &&
       (in_ECX = crt_iostream_cpp_validateBufferSeek_FUN_00571e75
                           (param_2,param_3,*(char **)(param_1 + 0x18),*(char **)(param_1 + 0x20),
                            *(char **)(param_1 + 0x1c),*(char **)(param_1 + 0x1c)), in_ECX != -1)) {
      *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x1c) = *(uint *)(param_1 + 0x1c);
      *(int *)(param_1 + 0x20) = *(int *)(param_1 + 0x20) + in_ECX;
      if (*(int *)(param_1 + 0x38) < in_ECX) {
        *(int *)(param_1 + 0x38) = in_ECX;
      }
    }
    return in_ECX;
  }
  return -1;
}
