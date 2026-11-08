// Name: FUN_004609e0
// Address: 004609e0
// Address Range: [[004609e0, 00460a94]]
// Convention: unknown
// Signature: undefined4 FUN_004609e0(char *param_1)

#include "nocturne.h"

uint FUN_004609e0(char *param_1)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  char local_14c [256];
  byte local_4c [22];
  uint local_36;
  uint local_2e;
  
  if ((param_1 != (char *)0x0) && (*param_1 != '\0')) {
    iVar2 = FUN_00461210(local_14c,param_1);
    if ((iVar2 != 0) && (iVar2 = thunk_FUN_005bfdd4(local_14c,local_4c), iVar2 == 0)) {
      *(uint *)(param_1 + 0x204) = local_36;
      param_1[0x200] = '\0';
      param_1[0x201] = '\0';
      param_1[0x202] = '\0';
      param_1[0x203] = '\0';
      pcVar3 = local_14c;
      *(uint *)(param_1 + 0x20c) = local_2e;
      pcVar4 = param_1 + 0x100;
      *(uint *)(param_1 + 0x210) = local_2e;
      do {
        cVar1 = *pcVar3;
        *pcVar4 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar3[1];
        pcVar3 = pcVar3 + 2;
        pcVar4[1] = cVar1;
        pcVar4 = pcVar4 + 2;
      } while (cVar1 != '\0');
      param_1[0x208] = '\0';
      param_1[0x209] = '\0';
      param_1[0x20a] = '\0';
      param_1[0x20b] = '\0';
      return 1;
    }
  }
  return 0;
}
