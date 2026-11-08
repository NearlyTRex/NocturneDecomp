// Name: FUN_005c3a30
// Address: 005c3a30
// Address Range: [[005c3a30, 005c3aa9]]
// Convention: unknown
// Signature: void FUN_005c3a30(void)

#include "nocturne.h"

void FUN_005c3a30(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(DAT_0061ee9d,'\x03');
  cVar2 = (char)(DAT_0061ee9d - 3) < '\0';
  uVar1 = DAT_0061ee9d == 3;
  if (2 < DAT_0061ee9d) {
    FUN_005c51be(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    FUN_005c5581();
    FUN_005c53c4();
    FUN_005c571e();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      DAT_0061f458 = DAT_0061f458 | 1;
    }
  }
  return;
}
