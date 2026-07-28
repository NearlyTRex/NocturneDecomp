// Name: crt_strstream.cpp_strstreambuf_underflow_FUN_00570075
// Address: 00570075
// Address Range: [[00570075, 005700bf]]
// Convention: unknown
// Signature: uint crt_strstream_cpp_strstreambuf_underflow_FUN_00570075(int param_1)

#include "nocturne.h"

uint crt_strstream_cpp_strstreambuf_underflow_FUN_00570075(int param_1)

{
  uint uVar1;
  
  if ((*(byte *)(param_1 + 0x3c) & 4) == 0) {
    uVar1 = *(uint *)(param_1 + 0x20);
    if (uVar1 <= *(uint *)(param_1 + 0x10)) {
      return 0xffffffff;
    }
    if (*(int *)(param_1 + 0x14) == 0) {
      *(uint *)(param_1 + 0x10) = uVar1;
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0x18);
      *(uint *)(param_1 + 0x14) = *(uint *)(param_1 + 0x18);
    }
    else {
      *(uint *)(param_1 + 0x10) = uVar1;
    }
  }
  else {
    *(int *)(param_1 + 0x10) = *(int *)(param_1 + 0x10) + 0x200;
  }
  return (uint)**(byte **)(param_1 + 0x14);
}
