// Name: crt_unknown.c_FUN_005ad760
// Address: 005ad760
// Address Range: [[005ad760, 005ad786]]
// Convention: unknown
// Signature: ushort crt_unknown_c_FUN_005ad760(void)

#include "nocturne.h"

ushort FUN_005ad760(void)

{
  byte bVar2;
  ushort uVar1;
  float10 fVar3;
  float10 fVar4;
  
  fVar4 = (float10)1 / (float10)0;
  fVar3 = -fVar4;
  bVar2 = fVar3 < fVar4 | (byte)((ushort)((ushort)(NAN(fVar3) || NAN(fVar4)) << 10) >> 8) |
          (byte)((ushort)((ushort)(fVar3 == fVar4) << 0xe) >> 8);
  uVar1 = CONCAT11(bVar2,2);
  if ((uVar1 & 0x4000) == 0) {
    uVar1 = CONCAT11(bVar2,3);
  }
  LOCK();
  UNLOCK();
  return uVar1;
}
