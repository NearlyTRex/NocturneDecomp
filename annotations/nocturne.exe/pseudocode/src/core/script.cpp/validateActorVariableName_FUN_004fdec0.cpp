// Name: core_script.cpp_validateActorVariableName_FUN_004fdec0
// Address: 004fdec0
// Address Range: [[004fdec0, 004fdf58]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *variable_name)

#include "nocturne.h"

int __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *variable_name)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  
  if (*variable_name == '@') {
    uVar3 = 0xffffffff;
    pcVar2 = variable_name;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x1f) {
      iVar4 = 1;
      pcVar2 = variable_name;
      while ((pcVar2 = pcVar2 + 1, ((&DAT_005c168c)[(byte)(*pcVar2 + 1)] & 0xe0) != 0 ||
             (*pcVar2 == '_'))) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is not valid",variable_name);
      return 0;
    }
    _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is too long",variable_name);
  }
  else {
    _sprintf(&DAT_01e56420,"Actor variable name must begin with '@'");
  }
  return 0;
}
