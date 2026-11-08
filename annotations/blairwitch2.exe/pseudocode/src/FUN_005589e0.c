// Name: FUN_005589e0
// Address: 005589e0
// Address Range: [[005589e0, 00558a26]]
// Convention: unknown
// Signature: undefined1 * FUN_005589e0(UINT_PTR param_1)

#include "nocturne.h"

byte * FUN_005589e0(UINT_PTR param_1)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = FUN_00557d10(&DAT_0264b27c);
  if (iVar1 == 0) {
    return (byte *)0x0;
  }
  MVar2 = waveOutGetDevCapsA(param_1,&local_34,0x34);
  if (MVar2 != 0) {
    return (byte *)0x0;
  }
  DAT_0061bf84 = param_1;
  return &DAT_0264b27c;
}
