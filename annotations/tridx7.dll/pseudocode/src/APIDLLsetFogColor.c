// Name: APIDLLsetFogColor
// Address: 100049f0
// Address Range: [[100049f0, 10004a52]]
// Convention: __cdecl
// Signature: int __cdecl APIDLLsetFogColor(int red,int green,int blue)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl APIDLLsetFogColor(int red,int green,int blue)

{
                    /* 0x49f0  29  APIDLLsetFogColor */
  DAT_100141bc = red;
  DAT_100141c0 = green;
  _DAT_100141c4 = blue;
  if (DAT_10014204 == 0) {
    APIDLLbeginScene();
  }
  FUN_100037e0(0x22,DAT_100141bc << 0x10 | DAT_100141c0 << 8 | _DAT_100141c4);
  if (DAT_10014204 != 0) {
    APIDLLendScene();
  }
  return 1;
}
