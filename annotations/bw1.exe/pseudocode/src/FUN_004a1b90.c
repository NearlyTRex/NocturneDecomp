// Name: FUN_004a1b90
// Address: 004a1b90
// Address Range: [[004a1b90, 004a1c56]]
// Convention: unknown
// Signature: undefined4 FUN_004a1b90(undefined4 param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_004a1b90(uint param_1,char *param_2)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  char local_208 [512];
  
  do {
    while (((&DAT_00626114)[(byte)(*param_2 + 1)] & 2) != 0) {
      param_2 = param_2 + 1;
    }
    cVar1 = *param_2;
    pcVar2 = local_208;
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
    while ((param_2 = pcVar4 + 1, local_208 < pcVar2 &&
           (((&DAT_00626114)[(byte)(pcVar2[-1] + 1)] & 2) != 0))) {
      pcVar2 = pcVar2 + -1;
    }
    if (local_208 < pcVar2) {
      *pcVar2 = '\0';
      iVar3 = FUN_004a1d00(param_1,local_208);
      if (iVar3 == 0) {
        if (_DAT_01c56ecc != 0) {
          return 0;
        }
        FUN_00445430(PTR_DAT_00611100,&DAT_005dcd8e,&DAT_01c56ed0);
      }
    }
  } while( true );
}
