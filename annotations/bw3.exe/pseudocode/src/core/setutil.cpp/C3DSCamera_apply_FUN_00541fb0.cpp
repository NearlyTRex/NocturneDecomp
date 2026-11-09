// Name: core_setutil.cpp_C3DSCamera_apply_FUN_00541fb0
// Address: 00541fb0
// Address Range: [[00541fb0, 005420ae]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(char *param_1,CDemonCamera *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_00541fb0(char *param_1,CDemonCamera *param_2)

{
  char cVar1;
  char cVar2;
  char cVar3;
  int iVar4;
  char *pcVar5;
  uint *puVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x140) != 0) {
    _DAT_01d71de0 = "..\\core\\setutil.cpp";
    _DAT_01d71de4 = 0xf7;
    core_main_c_FUN_004e4330("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",param_1);
  }
  pcVar7 = param_1 + 0x100;
  if (&param_2->field_0x4 != pcVar7) {
    cVar1 = pcVar7[1];
    cVar2 = pcVar7[2];
    cVar3 = pcVar7[3];
    param_2->field_0x4 = pcVar7[0];
    param_2->field_0x5 = cVar1;
    param_2->field_0x6 = cVar2;
    param_2->field_0x7 = cVar3;
    cVar1 = param_1[0x105];
    cVar2 = param_1[0x106];
    cVar3 = param_1[0x107];
    param_2->field_0x8 = param_1[0x104];
    param_2->field_0x9 = cVar1;
    param_2->field_0xa = cVar2;
    param_2->field_0xb = cVar3;
    cVar1 = param_1[0x109];
    cVar2 = param_1[0x10a];
    cVar3 = param_1[0x10b];
    param_2->field_0xc = param_1[0x108];
    param_2->field_0xd = cVar1;
    param_2->field_0xe = cVar2;
    param_2->field_0xf = cVar3;
  }
  pcVar7 = param_1 + 0x118;
  puVar6 = (uint *)&param_2->field_0x10;
  for (iVar4 = 10; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *(uint *)pcVar7;
    pcVar7 = pcVar7 + (uint)bVar8 * -8 + 4;
    puVar6 = puVar6 + (uint)bVar8 * -2 + 1;
  }
  cVar1 = param_1[0x145];
  cVar2 = param_1[0x146];
  cVar3 = param_1[0x147];
  pcVar7 = &param_2->field_0x40;
  param_2->field_0x38 = param_1[0x144];
  param_2->field_0x39 = cVar1;
  param_2->field_0x3a = cVar2;
  param_2->field_0x3b = cVar3;
  pcVar5 = param_1;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(param_2,*(float *)(param_1 + 0x148))
  ;
  if (*(float *)(param_1 + 0x148) < *(float *)&g_CDemonSetPtr->field_0x14d150) {
    engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Ambient set low by script\n");
  }
  if (*(float *)(param_1 + 0x148) <= (float)_DAT_005d0e92) {
    return;
  }
  engine_console_cpp_FUN_00441ff0(g_CConsolePtr,"Ambient set ridiculously high\n");
  return;
}
