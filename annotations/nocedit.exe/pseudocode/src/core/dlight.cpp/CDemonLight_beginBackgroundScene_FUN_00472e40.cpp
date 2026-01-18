// Name: core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40
// Address: 00472e40
// Address Range: [[00472e40, 00472f2d]]
// Convention: __cdecl
// Signature: void core_dlight.cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight * this_ptr)

#include "nocturne.h"

void __cdecl core_dlight_cpp_CDemonLight_beginBackgroundScene_FUN_00472e40(CDemonLight *this_ptr)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  void **ppvVar4;
  void **ppvVar5;
  byte bVar6;
  
  bVar6 = 0;
  if ((this_ptr->base).scene_open_flag == 0) {
    g_CurrentFilename = "..\\core\\dlight.cpp";
    g_CurrentLineNumber = 0x1af;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::beginBackgroundScene - Scene not open");
  }
  g_BackgroundSceneNestingCount = g_BackgroundSceneNestingCount + 1;
  if (g_BackgroundSceneNestingCount == 1) {
    ppvVar4 = g_ScreenBufferArray;
    ppvVar5 = g_SavedScreenBufferArray;
    for (uVar1 = this_ptr->shadow_map_height & 0x3fffffff; uVar1 != 0; uVar1 = uVar1 - 1) {
      *ppvVar5 = *ppvVar4;
      ppvVar4 = ppvVar4 + (uint)bVar6 * -2 + 1;
      ppvVar5 = ppvVar5 + (uint)bVar6 * -2 + 1;
    }
    for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(byte *)ppvVar5 = *(byte *)ppvVar4;
      ppvVar4 = (void **)((int)ppvVar4 + (uint)bVar6 * -2 + 1);
      ppvVar5 = (void **)((int)ppvVar5 + (uint)bVar6 * -2 + 1);
    }
    if (this_ptr->restore_memory_size == 0) {
      g_CurrentFilename = "..\\core\\dlight.cpp";
      g_CurrentLineNumber = 0x1bc;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CDemonLight::beginBackgroundScene - No master Z buffer");
    }
    iVar2 = 0;
    if (0 < this_ptr->shadow_map_height) {
      iVar3 = 0;
      do {
        *(int *)((int)g_ScreenBufferArray + iVar3) =
             this_ptr->restore_memory_size + this_ptr->shadow_map_width * iVar2 * 2;
        iVar2 = iVar2 + 1;
        iVar3 = iVar3 + 4;
      } while (iVar2 < this_ptr->shadow_map_height);
    }
    engine_drender_cpp_CDemonRenderer_setFaceCount_FUN_0048cac0(g_CDemonRendererPtr2,1);
  }
  return;
}
