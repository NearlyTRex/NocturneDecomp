// Name: FUN_0052c760
// Address: 0052c760
// Address Range: [[0052c760, 0052c7a6]]
// Convention: unknown
// Signature: undefined4 FUN_0052c760(UINT_PTR param_1)

#include "nocturne.h"

uint FUN_0052c760(UINT_PTR param_1)

{
  int iVar1;
  MMRESULT MVar2;
  tagWAVEOUTCAPSA local_34;
  
  iVar1 = FUN_0052c290(0x2dc9440);
  if (iVar1 == 0) {
    return 0;
  }
  MVar2 = waveOutGetDevCapsA(param_1,&local_34,0x34);
  if (MVar2 != 0) {
    return 0;
  }
  DAT_005bed44 = param_1;
  return 0x2dc9440;
}
