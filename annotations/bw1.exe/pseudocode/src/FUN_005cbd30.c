// Name: FUN_005cbd30
// Address: 005cbd30
// Address Range: [[005cbd30, 005cbda9]]
// Convention: unknown
// Signature: void FUN_005cbd30(void)

#include "nocturne.h"

void FUN_005cbd30(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(DAT_0062621d,'\x03');
  cVar2 = (char)(DAT_0062621d - 3) < '\0';
  uVar1 = DAT_0062621d == 3;
  if (2 < DAT_0062621d) {
    FUN_005cd4be(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    FUN_005cd881();
    FUN_005cd6c4();
    FUN_005cda1e();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      DAT_006267b8 = DAT_006267b8 | 1;
    }
  }
  return;
}
