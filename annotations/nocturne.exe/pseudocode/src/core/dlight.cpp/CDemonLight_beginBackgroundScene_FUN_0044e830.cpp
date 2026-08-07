// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_0044e830
// Address: 0044e830
// Address Range: [[0044e830, 0044e91d]]
// Convention: __cdecl
// Signature: void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(CDemonLight *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_0044e830(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  uint *puVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 431;
    core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonLight::beginBackgroundScene - Scene not open");
  }
  _DAT_01ab99f0 = _DAT_01ab99f0 + 1;
  if (_DAT_01ab99f0 == 1) {
    ppvVar4 = g_ScreenBufferArray;
    puVar5 = (uint *)&DAT_01ab99f4;
    for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *puVar5 = *ppvVar4;
      ppvVar4 = ppvVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)puVar5 = *(byte *)ppvVar4;
      ppvVar4 = (void **)((int)ppvVar4 + (uint)bVar6 * -2 + 1);
      puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
    }
    if (this_ptr->master_zbuffer == (void *)0x0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 444;
      core_main_c_displayErrorAndQuit_FUN_004c8440("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(void **)((int)g_ScreenBufferArray + iVar3) =
             (void *)((int)this_ptr->master_zbuffer + this_ptr->shadow_map_width * iVar2 * 2);
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_00461070(g_CDemonRenderer_PTR_005ae704,1);
  }
  return;
}
