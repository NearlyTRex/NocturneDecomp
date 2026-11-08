// Name: FUN_0040be30
// Address: 0040be30
// Address Range: [[0040be30, 0040bf1b]]
// Convention: unknown
// Signature: void FUN_0040be30(undefined4 param_1,undefined4 param_2)

#include "nocturne.h"

void FUN_0040be30(uint param_1,uint param_2)

{
  int iVar1;
  
  if (DAT_007df9b8 != 1) {
    FUN_005a3140(DAT_007df9b4,"%s{ // %s\n",&DAT_005f0990,param_2);
    FUN_0040afa0(1);
    FUN_0041d630(param_1,DAT_007df9b4,&DAT_005f0990);
    FUN_0040afa0(0xffffffff);
    FUN_005a3140(DAT_007df9b4,&DAT_005b5c48,&DAT_005f0990);
    return;
  }
  do {
    iVar1 = FUN_005a32b0(DAT_007df9b4);
    if (iVar1 < 0) {
      FUN_0040b2d0("sim box state info opening brace",param_2);
    }
  } while (iVar1 != 10);
  FUN_0041d480(param_1,DAT_007df9b4);
  do {
    while( true ) {
      iVar1 = FUN_005a32b0(DAT_007df9b4);
      if (-1 < iVar1) break;
      FUN_0040b2d0("sim box state info closing brace",param_2);
      if (iVar1 == 10) {
        return;
      }
    }
  } while (iVar1 != 10);
  return;
}
