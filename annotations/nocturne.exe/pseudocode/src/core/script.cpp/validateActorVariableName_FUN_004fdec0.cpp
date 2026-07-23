// Name: core_script.cpp_validateActorVariableName_FUN_004fdec0
// Address: 004fdec0
// Address Range: [[004fdec0, 004fdf58]]
// Convention: __cdecl
// Signature: undefined4 __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *param_1)

#include "nocturne.h"

uint __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *param_1)

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
      while ((pcVar2 = pcVar2 + 1, ((&DAT_005c168c)[(byte)(*pcVar2 + 1)] & 0xe0) != 0 ||
             (*pcVar2 == '_'))) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is not valid",param_1);
      return 0;
    }
    _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is too long",param_1);
  }
  else {
    _sprintf(&DAT_01e56420,"Actor variable name must begin with '@'");
  }
  return 0;
}
