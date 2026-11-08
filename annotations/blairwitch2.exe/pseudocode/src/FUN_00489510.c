// Name: FUN_00489510
// Address: 00489510
// Address Range: [[00489510, 004895c7]]
// Convention: unknown
// Signature: undefined4 FUN_00489510(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_00489510(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_6c [100];
  
  do {
    while (((&DAT_0061ed94)[(byte)(*param_2 + 1)] & 2) != 0) {
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
           (((&DAT_0061ed94)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (local_6c < pcVar2) {
      *pcVar2 = '\0';
      iVar3 = FUN_00489670(param_1,local_6c);
      if (iVar3 == 0) {
        if (_DAT_01c3dd0c != 0) {
          return 0;
        }
        FUN_00436710(PTR_DAT_00609ed0,&DAT_005d2ff5,&DAT_01c3dd10);
      }
    }
  } while( true );
}
