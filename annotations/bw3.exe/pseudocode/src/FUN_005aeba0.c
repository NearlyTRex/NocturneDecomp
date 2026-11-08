// Name: FUN_005aeba0
// Address: 005aeba0
// Address Range: [[005aeba0, 005aec19]]
// Convention: unknown
// Signature: void FUN_005aeba0(void)

#include "nocturne.h"

void FUN_005aeba0(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(DAT_006075c1,'\x03');
  cVar2 = (char)(DAT_006075c1 - 3) < '\0';
  uVar1 = DAT_006075c1 == 3;
  if (2 < DAT_006075c1) {
    FUN_005b024e(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    FUN_005b0611();
    FUN_005b0454();
    FUN_005b07ae();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      DAT_00607b5c = DAT_00607b5c | 1;
    }
  }
  return;
}
