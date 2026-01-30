// Name: core_script.cpp_FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 005592b8]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_FUN_00559220(char *param_1)

#include "nocturne.h"

int __cdecl core_script_cpp_FUN_00559220(char *param_1)

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
      while ((pcVar2 = pcVar2 + 1,
             (g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 0xe0U) != 0 || (*pcVar2 == '_'))
            ) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      sprintf(&DAT_0310eca0,"Actor variable name \"%s\" is not valid",param_1);
      return 0;
    }
    sprintf(&DAT_0310eca0,"Actor variable name \"%s\" is too long",param_1);
  }
  else {
    sprintf(&DAT_0310eca0,"Actor variable name must begin with '@'");
  }
  return 0;
}
