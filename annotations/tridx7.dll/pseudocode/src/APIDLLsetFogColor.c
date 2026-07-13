// Name: APIDLLsetFogColor
// Address: 100049f0
// Address Range: [[100049f0, 10004a52]]
// Convention: unknown
// Signature: undefined4 APIDLLsetFogColor(int param_1,int param_2,uint param_3)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint APIDLLsetFogColor(int param_1,int param_2,uint param_3)

{
                    /* 0x49f0  29  APIDLLsetFogColor */
  DAT_100141bc = param_1;
  DAT_100141c0 = param_2;
  _DAT_100141c4 = param_3;
  if (DAT_10014204 == 0) {
    APIDLLbeginScene();
  }
  FUN_100037e0(0x22,DAT_100141bc << 0x10 | DAT_100141c0 << 8 | _DAT_100141c4);
  if (DAT_10014204 != 0) {
    APIDLLendScene();
  }
  return 1;
}
