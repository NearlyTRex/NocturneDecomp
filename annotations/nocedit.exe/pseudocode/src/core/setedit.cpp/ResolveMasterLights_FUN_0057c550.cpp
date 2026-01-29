// Name: core_setedit.cpp_ResolveMasterLights_FUN_0057c550
// Address: 0057c550
// Address Range: [[0057c550, 0057c5cc]]
// Convention: unknown
// Signature: int core_setedit_cpp_ResolveMasterLights_FUN_0057c550(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_ResolveMasterLights(uint param_1, uint
   param_2) */

int core_setedit_cpp_ResolveMasterLights_FUN_0057c550(void)

{
  int iVar1;
  int iVar2;
  char *str2;
  int in_stack_00000004;
  int in_stack_00000008;
  
  iVar2 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x19a2c)) {
    str2 = (char *)(in_stack_00000004 + 0x19a34);
    do {
      iVar1 = strcmp
                        ((g_MasterLightList[in_stack_00000008]->base).camera_name,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x1898;
    } while (iVar2 < *(int *)(in_stack_00000004 + 0x19a2c));
  }
  g_CurrentFilename = "..\\core\\setedit.cpp";
  g_CurrentLineNumber = 0xaa8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't resolve master light number");
  return -1;
}
