// Name: core_setutil.cpp_C3DSCamera_apply_FUN_0055c5f0
// Address: 0055c5f0
// Address Range: [[0055c5f0, 0055c6ee]]
// Convention: __cdecl
// Signature: void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(char *param_1,CDemonCamera *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_setutil_cpp_C3DSCamera_apply_FUN_0055c5f0(char *param_1,CDemonCamera *param_2)

{
  UVector3 *pUVar1;
  char cVar2;
  int iVar3;
  float *pfVar4;
  char *pcVar5;
  CMatrix3x3f *pCVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  if (*(int *)(param_1 + 0x140) != 0) {
    _DAT_01d1d400 = "..\\core\\setutil.cpp";
    _DAT_01d1d404 = 0xf7;
    core_main_c_FUN_005030e0("C3DSCamera::apply - shouldn't ever do this on panning camera '%s'!",param_1);
  }
  pUVar1 = &(param_2->base).position;
  if (pUVar1 != (UVector3 *)(param_1 + 0x100)) {
    (pUVar1->f).x = *(float *)(param_1 + 0x100);
    (param_2->base).position.f.y = *(float *)(param_1 + 0x104);
    (param_2->base).position.f.z = *(float *)(param_1 + 0x108);
  }
  pfVar4 = (float *)(param_1 + 0x118);
  pCVar6 = &(param_2->base).rotation_matrix;
  for (iVar3 = 10; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar6->m[0].x = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar8 * -2 + 1;
    pCVar6 = (CMatrix3x3f *)((int)pCVar6 + (uint)bVar8 * -8 + 4);
  }
  pcVar7 = param_2->camera_name;
  (param_2->base).focal_length = *(float *)(param_1 + 0x144);
  pcVar5 = param_1;
  do {
    cVar2 = *pcVar5;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  core_dcamera_cpp_CDemonCamera_setEffectIntensity_FUN_00453540(param_2,*(float *)(param_1 + 0x148))
  ;
  if (*(float *)(param_1 + 0x148) < g_CDemonSetPtr->min_ambient_value) {
    engine_console_cpp_FUN_00445430(g_CConsolePtr,"Ambient set low by script\n");
  }
  if (*(float *)(param_1 + 0x148) <= (float)_DAT_005f11e9) {
    return;
  }
  engine_console_cpp_FUN_00445430(g_CConsolePtr,"Ambient set ridiculously high\n");
  return;
}
