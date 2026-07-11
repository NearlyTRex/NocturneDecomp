// Name: FUN_004ce7c0
// Address: 004ce7c0
// Address Range: [[004ce7c0, 004ce919]]
// Convention: unknown
// Signature: void FUN_004ce7c0(int param_1,int param_2,int param_3,int param_4)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_004ce7c0(int param_1,int param_2,int param_3,int param_4)

{
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc549c) = _DAT_01c039c4;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc54c4) = _DAT_01c039c8;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc54ec) = _DAT_01c039cc;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5514) = _DAT_01c039d0;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc553c) = _DAT_01c039d4;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5564) = _DAT_01c039d8;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc558c) = _DAT_01c039dc;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55b4) = _DAT_01c039e0;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc55dc) = _DAT_01c039e4;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc53d4) = _DAT_01c00c48;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc53fc) = _DAT_01c00c4c;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5424) = _DAT_01c00c50;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc544c) = _DAT_01c00c54;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5474) = DAT_005b7648;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5604) = _DAT_01c00c58;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc562c) = _DAT_01c00c60;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc5654) = _DAT_01c00c5c;
  *(uint *)(_DAT_01cc53d0 * 4 + 0x1cc567c) = _DAT_01c00c64;
  _DAT_01cc53d0 = _DAT_01cc53d0 + 1;
  if (9 < _DAT_01cc53d0) {
    _DAT_01cc4800 = "@..\\engine\\matrix.c" + 1;
    _DAT_01cc4804 = 0x53d;
    FUN_004c8440("Too many 3D windows");
  }
  FUN_00401e30(param_1,param_2,param_1 + param_3,param_2 + param_4);
  DAT_005b7648 = 0x10000;
  return;
}
