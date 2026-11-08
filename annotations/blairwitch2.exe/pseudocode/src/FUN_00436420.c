// Name: FUN_00436420
// Address: 00436420
// Address Range: [[00436420, 0043647d]]
// Convention: unknown
// Signature: ushort FUN_00436420(int param_1,float param_2)

#include "nocturne.h"

ushort FUN_00436420(int param_1,float param_2)

{
  uint uVar1;
  
  do {
    uVar1 = FUN_005030c0(param_1 + 0x2b4,&param_2);
    if (uVar1 < 100) {
      FUN_0042aa00(param_1,uVar1);
    }
    else if ((100 < uVar1) && (uVar1 != 0x65)) {
      FUN_0042aa00(param_1,uVar1);
    }
  } while (0.0 < param_2);
  return (ushort)(0.0 < param_2) << 8 | (ushort)NAN(param_2) << 10 | (ushort)(param_2 == 0.0) << 0xe
  ;
}
