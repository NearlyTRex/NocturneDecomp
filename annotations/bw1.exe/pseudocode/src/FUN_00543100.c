// Name: FUN_00543100
// Address: 00543100
// Address Range: [[00543100, 00543198]]
// Convention: unknown
// Signature: undefined4 FUN_00543100(char *param_1)

#include "nocturne.h"

uint FUN_00543100(char *param_1)

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
      while ((pcVar2 = pcVar2 + 1, ((&DAT_00626114)[(byte)(*pcVar2 + 1)] & 0xe0) != 0 ||
             (*pcVar2 == '_'))) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      FUN_005bfb40(&DAT_01e810b0,"Actor variable name \"%s\" is not valid",param_1);
      return 0;
    }
    FUN_005bfb40(&DAT_01e810b0,"Actor variable name \"%s\" is too long",param_1);
  }
  else {
    FUN_005bfb40(&DAT_01e810b0,"?Actor variable name must begin with '@'" + 1);
  }
  return 0;
}
