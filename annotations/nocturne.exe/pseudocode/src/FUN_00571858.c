// Name: FUN_00571858
// Address: 00571858
// Address Range: [[00571858, 0057189b]]
// Convention: unknown
// Signature: undefined2 FUN_00571858(void)

#include "nocturne.h"

ushort FUN_00571858(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  ushort in_DS;
  byte bVar4;
  
  bVar4 = 0;
  iVar2 = 8;
  do {
    iVar1 = (*(code *)PTR_crt_thread_c_GetTLS_FUN_005671dc_005c1abc)();
    iVar3 = iVar2 + 8;
    *(uint *)(iVar1 + iVar2 + 0x58) = *(uint *)(&DAT_005c20d8 + iVar2);
    *(uint *)(iVar1 + iVar2 + 0x5c + (uint)bVar4 * -8) =
         *(uint *)(iVar2 + 0x5c20dc + (uint)bVar4 * -8);
    iVar2 = iVar3;
  } while (iVar3 != 0x68);
  DAT_005c1f6c = FUN_005715ac;
  DAT_005c1f70 = processSignal;
  return in_DS;
}
