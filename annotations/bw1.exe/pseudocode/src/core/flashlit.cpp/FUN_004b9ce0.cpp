// Name: core_flashlit.cpp_FUN_004b9ce0
// Address: 004b9ce0
// Address Range: [[004b9ce0, 004b9d06]]
// Convention: unknown
// Signature: void core_flashlit_cpp_FUN_004b9ce0(char *param_1)

#include "nocturne.h"

void core_flashlit_cpp_FUN_004b9ce0(char *param_1)

{
  char *pcVar1;
  
  pcVar1 = strstr(param_1,&DAT_005df822);
  if (pcVar1 != (char *)0x0) {
    *pcVar1 = '\0';
  }
  core_flashlit_cpp_FUN_004b9c50(param_1);
  return;
}
