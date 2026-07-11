// Name: FUN_0047ab90
// Address: 0047ab90
// Address Range: [[0047ab90, 0047ac47]]
// Convention: unknown
// Signature: undefined4 FUN_0047ab90(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_0047ab90(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_6c [100];
  
  do {
    while (((&DAT_005c168c)[(byte)(*param_2 + 1)] & 2) != 0) {
      param_2 = param_2 + 1;
    }
    cVar1 = *param_2;
    pcVar2 = local_6c;
    pcVar4 = param_2;
    if (cVar1 == '\0') {
      return 1;
    }
    while (cVar1 != ';') {
      *pcVar2 = *pcVar4;
      pcVar2 = pcVar2 + 1;
      if (pcVar4[1] == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 1;
    }
    while ((param_2 = pcVar4 + 1, local_6c < pcVar2 &&
           (((&DAT_005c168c)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (local_6c < pcVar2) {
      *pcVar2 = '\0';
      iVar3 = FUN_0047ac50(param_1,local_6c);
      if (iVar3 == 0) {
        if (_DAT_01c08b5c != 0) {
          return 0;
        }
        FUN_0043ac60(PTR_DAT_005ad350,&DAT_0057f57d,&DAT_01c08b60);
      }
    }
  } while( true );
}
