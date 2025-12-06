// Name: core_script.cpp_CheckingActorVariableName_FUN_00559220
// Address: 00559220
// Address Range: [[00559220, 005592b8]]
// Convention: unknown
// Signature: undefined core_script.cpp_CheckingActorVariableName_FUN_00559220()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CheckingActorVariableName(uint param_1) */

uint core_script_cpp_CheckingActorVariableName_FUN_00559220(void)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  int iVar4;
  char *in_stack_00000004;
  
  if (*in_stack_00000004 == '@') {
    uVar3 = 0xffffffff;
    pcVar2 = in_stack_00000004;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    if (~uVar3 - 1 < 0x1f) {
      iVar4 = 1;
      pcVar2 = in_stack_00000004;
      while ((pcVar2 = pcVar2 + 1,
             (g_CharacterClassificationTable[(byte)(*pcVar2 + 1)] & 0xe0U) != 0 || (*pcVar2 == '_'))
            ) {
        iVar4 = iVar4 + 1;
      }
      if ((iVar4 != 1) && (*pcVar2 == '\0')) {
        return 1;
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&DAT_0310eca0,"Actor variable name \"%s\" is not valid",in_stack_00000004);
      return 0;
    }
    crt_stdio_c_sprintf_FUN_005fdbd0
              (&DAT_0310eca0,"Actor variable name \"%s\" is too long",in_stack_00000004);
  }
  else {
    crt_stdio_c_sprintf_FUN_005fdbd0(&DAT_0310eca0,"Actor variable name must begin with '@'");
  }
  return 0;
}
