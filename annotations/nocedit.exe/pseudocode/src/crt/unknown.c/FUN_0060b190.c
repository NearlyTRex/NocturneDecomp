// Name: crt_unknown.c_FUN_0060b190
// Address: 0060b190
// Address Range: [[0060b190, 0060b1b6]]
// Convention: unknown
// Signature: undefined crt_unknown.c_FUN_0060b190()

#include "nocturne.h"

ushort crt_unknown_c_FUN_0060b190(void)

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
