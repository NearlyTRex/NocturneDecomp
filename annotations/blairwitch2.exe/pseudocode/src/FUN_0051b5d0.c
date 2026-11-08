// Name: FUN_0051b5d0
// Address: 0051b5d0
// Address Range: [[0051b5d0, 0051b6d5]]
// Convention: unknown
// Signature: undefined4 FUN_0051b5d0(int *param_1,char *param_2)

#include "nocturne.h"

uint FUN_0051b5d0(int *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (*(int *)(param_2 + 0x314) < *param_1) {
    do {
      if (*(int *)(param_2 + 0x314) < 0) {
        param_2[0x314] = '\0';
        param_2[0x315] = '\0';
        param_2[0x316] = '\0';
        param_2[0x317] = '\0';
      }
      iVar2 = param_1[*(int *)(param_2 + 0x314) + 1];
      while( true ) {
        if (*(int *)(param_2 + 0x318) < 0) {
          param_2[0x318] = '\0';
          param_2[0x319] = '\0';
          param_2[0x31a] = '\0';
          param_2[0x31b] = '\0';
        }
        if (*(int *)(iVar2 + 0x410) <= *(int *)(param_2 + 0x318)) break;
        puVar4 = (uint *)(*(int *)(iVar2 + 0x414) + *(int *)(param_2 + 0x318) * 0x14);
        iVar3 = FUN_00485840(param_2 + 0x214,*puVar4,0);
        if (iVar3 != 0) {
          pcVar5 = (char *)*puVar4;
          pcVar6 = param_2;
          goto LAB_0051b694;
        }
        *(int *)(param_2 + 0x318) = *(int *)(param_2 + 0x318) + 1;
      }
      iVar2 = *(int *)(param_2 + 0x314);
      param_2[0x318] = '\0';
      param_2[0x319] = '\0';
      param_2[0x31a] = '\0';
      param_2[0x31b] = '\0';
      *(int *)(param_2 + 0x314) = iVar2 + 1;
    } while (*(int *)(param_2 + 0x314) < *param_1);
  }
  *param_2 = '\0';
  return 0;
  while( true ) {
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
    if (cVar1 == '\0') break;
LAB_0051b694:
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
  }
  FUN_0051aa00(iVar2,*(uint *)(param_2 + 0x318),param_2);
  *(int *)(param_2 + 0x318) = *(int *)(param_2 + 0x318) + 1;
  return 1;
}
