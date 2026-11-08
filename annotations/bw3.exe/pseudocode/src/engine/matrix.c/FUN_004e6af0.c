// Name: FUN_004e6af0
// Address: 004e6af0
// Address Range: [[004e6af0, 004e6c49]]
// Convention: unknown
// Signature: void FUN_004e6af0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004e6af0(int param_1,int param_2,int param_3,int param_4)

{
  *(uint *)(_DAT_01d728fc * 4 + 0x1d729c8) = _DAT_01c6e2d8;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d729f0) = _DAT_01c6e2dc;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72a18) = _DAT_01c6e2e0;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72a40) = _DAT_01c6e2e4;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72a68) = _DAT_01c6e2e8;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72a90) = _DAT_01c6e2ec;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72ab8) = _DAT_01c6e2f0;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72ae0) = _DAT_01c6e2f4;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72b08) = _DAT_01c6e2f8;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72900) = _DAT_01c6b598;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72928) = _DAT_01c6b59c;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72950) = _DAT_01c6b5a0;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72978) = _DAT_01c6b5a4;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d729a0) = DAT_005fba44;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72b30) = _DAT_01c6b5a8;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72b58) = _DAT_01c6b5b0;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72b80) = _DAT_01c6b5ac;
  *(uint *)(_DAT_01d728fc * 4 + 0x1d72ba8) = _DAT_01c6b5b4;
  _DAT_01d728fc = _DAT_01d728fc + 1;
  if (9 < _DAT_01d728fc) {
    _DAT_01d71de0 = "..\\engine\\matrix.c";
    _DAT_01d71de4 = 0x540;
    FUN_004e4330("Too many 3D windows");
  }
  FUN_00401810(param_1,param_2,param_1 + param_3,param_2 + param_4);
  DAT_005fba44 = 0x10000;
  return;
}
