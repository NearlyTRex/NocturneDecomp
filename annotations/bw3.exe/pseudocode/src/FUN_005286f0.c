// Name: FUN_005286f0
// Address: 005286f0
// Address Range: [[005286f0, 00528788]]
// Convention: unknown
// Signature: undefined4 FUN_005286f0(char *param_1)

#include "nocturne.h"

uint FUN_005286f0(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  if (*param_1 == '@') {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x1f) {
      iVar4 = 1;
      pcVar2 = param_1;
      while ((pcVar2 = pcVar2 + 1, ((&DAT_006074b8)[(byte)(*pcVar2 + 1)] & 0xe0) != 0 ||
             (*pcVar2 == '_'))) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      FUN_005a28c0(&DAT_01ed6810,"Actor variable name \"%s\" is not valid",param_1);
      return 0;
    }
    FUN_005a28c0(&DAT_01ed6810,"Actor variable name \"%s\" is too long",param_1);
  }
  else {
    FUN_005a28c0(&DAT_01ed6810,"Actor variable name must begin with '@'");
  }
  return 0;
}
