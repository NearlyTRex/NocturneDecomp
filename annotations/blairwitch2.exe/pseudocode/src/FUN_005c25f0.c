// Name: FUN_005c25f0
// Address: 005c25f0
// Address Range: [[005c25f0, 005c2616]]
// Convention: unknown
// Signature: ushort FUN_005c25f0(void)

#include "nocturne.h"

ushort FUN_005c25f0(void)

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
