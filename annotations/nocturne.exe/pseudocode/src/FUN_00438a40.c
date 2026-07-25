// Name: FUN_00438a40
// Address: 00438a40
// Address Range: [[00438a40, 00438a8a]]
// Convention: unknown
// Signature: uint FUN_00438a40(int *param_1,int *param_2)

#include "nocturne.h"

uint FUN_00438a40(int *param_1,int *param_2)

{
  byte local_14 [4];
  
  if (0 < *param_2) {
    crt_iostream_cpp_istream_get_FUN_00564c53(param_1,local_14);
    if (*(int *)((int)param_1 + *(int *)(*param_1 + 4) + 0x10) == 0) {
      *param_2 = *param_2 + -1;
      return (uint)local_14[0];
    }
  }
  return 0xffffffff;
}
