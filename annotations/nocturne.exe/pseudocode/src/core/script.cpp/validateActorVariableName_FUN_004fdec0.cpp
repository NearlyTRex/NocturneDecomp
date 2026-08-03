// Name: core_script.cpp_validateActorVariableName_FUN_004fdec0
// Address: 004fdec0
// Address Range: [[004fdec0, 004fdf58]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *variable_name)

#include "nocturne.h"

int __cdecl core_script_cpp_validateActorVariableName_FUN_004fdec0(char *variable_name)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  
  if (*variable_name == '@') {
    uVar2 = 0xffffffff;
    pcVar4 = variable_name;
    do {
      if (uVar2 == 0) break;
      uVar2 = uVar2 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    if (~uVar2 - 1 < 0x1f) {
      iVar3 = 1;
      while ((variable_name = variable_name + 1,
             ((&DAT_005c168c)[(byte)(*variable_name + 1)] & 0xe0) != 0 || (*variable_name == '_')))
      {
        iVar3 = iVar3 + 1;
      }
      if ((iVar3 != 1) && (*variable_name == '\0')) {
        return 1;
      }
      _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is not valid");
      return 0;
    }
    _sprintf(&DAT_01e56420,"Actor variable name \"%s\" is too long");
  }
  else {
    _sprintf(&DAT_01e56420,"Actor variable name must begin with '@'");
  }
  return 0;
}
