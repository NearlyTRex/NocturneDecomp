// Name: core_set.cpp_CDemonSet_renderLightDebugView_FUN_0056d190
// Address: 0056d190
// MANUAL RECONSTRUCTION
// Address Range: [[0056d190, 0056d2c0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr)

{
  int iVar8;
  int iVar5;
  char local_110 [256];
  
  for (iVar5 = 0; iVar5 < g_SpotLightCount; iVar5 = iVar5 + 1) {
    core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
              (g_SpotLightList[iVar5],g_LightDebugScreenX[iVar5],
               g_LightDebugScreenY[iVar5],0x80);
  }
  for (iVar8 = 0; iVar8 < g_DynamicLightCount; iVar8 = iVar8 + 1) {
    core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
              (g_DynamicLights[iVar8],g_LightDebugScreenX[g_SpotLightCount + iVar8],
               g_LightDebugScreenY[g_SpotLightCount + iVar8],0x80);
  }
  iVar8 = g_SpotLightCount + g_DynamicLightCount;
  _sprintf(local_110,"%d omni lights",g_OmniLightCount);
  engine_2d_c_drawText_FUN_00401fd0(local_110,g_LightDebugScreenX[iVar8],g_LightDebugScreenY[iVar8])
  ;
  _sprintf(local_110,"%d spot lights",g_SpotLightCount);
  engine_2d_c_drawText_FUN_00401fd0
            (local_110,g_LightDebugScreenX[iVar8],g_LightDebugScreenY[iVar8] + 0xb);
  return;
}
