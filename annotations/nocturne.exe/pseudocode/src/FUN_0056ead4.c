// Name: FUN_0056ead4
// Address: 0056ead4
// Address Range: [[0056ead4, 0056ecea]]
// Convention: unknown
// Signature: undefined4 FUN_0056ead4(int *param_1)

#include "nocturne.h"

uint FUN_0056ead4(int *param_1)

{
  char cVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte bVar6;
  char *pcVar7;
  char local_114 [256];
  DWORD local_14;
  
  bVar6 = 0;
  puVar2 = (uint *)*param_1;
  iVar3 = param_1[1];
  iVar4 = FUN_0056ea40();
  if ((iVar4 != 0) || (iVar4 = FUN_005714ec(), iVar4 == -1)) {
    return 0;
  }
  local_114[0] = '\0';
  uVar5 = *puVar2;
  if (uVar5 < 0xc0000090) {
    if (0xc000008c < uVar5) {
      if (uVar5 < 0xc000008e) {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused a denormal operand floating point\nexception.\n";
      }
      else if (uVar5 < 0xc000008f) {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused a division by zero floating point\nexception.\n";
      }
      else {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused an inexact value floating point\nexception.\n";
      }
      goto LAB_0056ec98;
    }
    if (0xc0000004 < uVar5) {
      if (uVar5 < 0xc0000006) {
        FUN_0056ea78(local_114,"The instruction at 0x00000000 referenced memory ",puVar2[3]);
        FUN_0056ea78(local_114,"at 0x00000000.\nThe memory could not be ",puVar2[6]);
        if (puVar2[5] == 0) {
          pcVar7 = "read.\n";
          uVar5 = 0;
        }
        else {
          uVar5 = 0;
          pcVar7 = "written.\n";
        }
        goto LAB_0056ec98;
      }
      if (uVar5 == 0xc000001d) {
        uVar5 = puVar2[3];
        pcVar7 = "An illegal instruction was executed at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
  }
  else {
    if (uVar5 < 0xc0000091) {
      uVar5 = puVar2[3];
      pcVar7 = "The instruction at 0x00000000 caused an invalid operation floating point\nexception.\n";
      goto LAB_0056ec98;
    }
    if (uVar5 < 0xc0000093) {
      if (uVar5 < 0xc0000092) {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused an overflow floating point exception.\n";
      }
      else if ((*(byte *)(iVar3 + 0x21) & 2) == 0) {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused a stack underflow floating point\nexception.\n";
      }
      else {
        uVar5 = puVar2[3];
        pcVar7 = "The instruction at 0x00000000 caused a stack overflow floating point\nexception.\n";
      }
      goto LAB_0056ec98;
    }
    if (uVar5 < 0xc0000094) {
      uVar5 = puVar2[3];
      pcVar7 = "The instruction at 0x00000000 caused an underflow floating point exception.\n";
      goto LAB_0056ec98;
    }
    if (uVar5 < 0xc0000096) {
      if (uVar5 == 0xc0000094) {
        uVar5 = puVar2[3];
        pcVar7 = "An integer divide by zero was encountered at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
    else {
      if (uVar5 < 0xc0000097) {
        uVar5 = puVar2[3];
        pcVar7 = "A privileged instruction was executed at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
      if (uVar5 == 0xc00000fd) {
        uVar5 = puVar2[3];
        pcVar7 = "A stack overflow was encountered at address 0x00000000.\n";
        goto LAB_0056ec98;
      }
    }
  }
  FUN_0056ea78(local_114,"The program encountered exception 0x00000000 at ",*puVar2);
  uVar5 = puVar2[3];
  pcVar7 = "address 0x00000000 and\ncannot continue.\n";
LAB_0056ec98:
  FUN_0056ea78(local_114,pcVar7,uVar5);
  uVar5 = 0xffffffff;
  pcVar7 = local_114;
  do {
    if (uVar5 == 0) break;
    uVar5 = uVar5 - 1;
    cVar1 = *pcVar7;
    pcVar7 = pcVar7 + (uint)bVar6 * -2 + 1;
  } while (cVar1 != '\0');
  WriteFile(*(HANDLE *)(DAT_005c1f54 + 8),local_114,~uVar5 - 1,&local_14,(LPOVERLAPPED)0x0);
  return 1;
}
