// Name: FUN_00570630
// Address: 00570630
// Address Range: [[00570630, 005706a9]]
// Convention: unknown
// Signature: void FUN_00570630(void)

#include "nocturne.h"

void FUN_00570630(void)

{
  byte uVar1;
  char cVar2;
  char cVar3;
  
  cVar3 = SBORROW1(DAT_005c1795,'\x03');
  cVar2 = (char)(DAT_005c1795 - 3) < '\0';
  uVar1 = DAT_005c1795 == 3;
  if (2 < DAT_005c1795) {
    func_0x00572446(0x80000000,0x4147ffff,0xc0000000,0x4150017e);
    func_0x00572809();
    func_0x0057264c();
    func_0x005729a6();
    if (!(bool)uVar1 && cVar3 == cVar2) {
      DAT_005c1d98 = DAT_005c1d98 | 1;
    }
  }
  return;
}
