// Name: core_setutil.cpp_FUN_005148b0
// Address: 005148b0
// Address Range: [[005148b0, 0051497d]]
// Convention: unknown
// Signature: void core_setutil_cpp_FUN_005148b0(char *param_1,char *param_2)

#include "nocturne.h"

void core_setutil_cpp_FUN_005148b0(char *param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  if (param_2 + 0x104 != param_1 + 0x100) {
    *(uint *)(param_2 + 0x104) = *(uint *)(param_1 + 0x100);
    *(uint *)(param_2 + 0x108) = *(uint *)(param_1 + 0x104);
    *(uint *)(param_2 + 0x10c) = *(uint *)(param_1 + 0x108);
  }
  pcVar3 = param_1 + 0x118;
  pcVar4 = param_2 + 0x110;
  for (iVar2 = 10; iVar2 != 0; iVar2 = iVar2 + -1) {
    *(uint *)pcVar4 = *(uint *)pcVar3;
    pcVar3 = pcVar3 + 4;
    pcVar4 = pcVar4 + 4;
  }
  *(uint *)(param_2 + 0x138) = *(uint *)(param_1 + 0x140);
  pcVar3 = param_1;
  pcVar4 = param_2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00446740
            (param_2,*(uint *)(param_1 + 0x144));
  if (*(float *)(param_1 + 0x144) < *(float *)(0x01E57284 + 0x14cd68)) {
    engine_console_cpp_CConsole_printf_FUN_0043ac60
              (PTR_DAT_005ad350,"Ambient set low by script\n");
  }
  if (*(float *)(param_1 + 0x144) <= (float)0.25) {
    return;
  }
  engine_console_cpp_CConsole_printf_FUN_0043ac60
            (PTR_DAT_005ad350,"Ambient set ridiculously high\n");
  return;
}
