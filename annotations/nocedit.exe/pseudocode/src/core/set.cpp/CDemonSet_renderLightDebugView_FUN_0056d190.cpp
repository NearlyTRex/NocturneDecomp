// Name: core_set.cpp_CDemonSet_renderLightDebugView_FUN_0056d190
// Address: 0056d190
// Address Range: [[0056d190, 0056d2c0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_0056d190(CDemonSet *this_ptr)

{
  int *piVar3;
  int *piVar4;
  uint *puVar5;
  int iVar4;
  int iVar7;
  int iVar8;
  int iVar5;
  int iVar6;
  char local_110 [256];
  int *piVar2;
  int *piVar1;
  uint *puVar3;
  
  iVar5 = 0;
  if (0 < g_SpotLightCount) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)g_LightDebugScreenY + iVar4);
      piVar2 = (int *)((int)g_LightDebugScreenX + iVar4);
      puVar3 = (uint *)((int)g_SpotLightList + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < g_SpotLightCount);
  }
  iVar8 = 0;
  if (0 < g_DynamicLightCount) {
    iVar7 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar3 = (int *)((int)g_LightDebugScreenY + iVar7);
      piVar4 = (int *)((int)g_LightDebugScreenX + iVar7);
      puVar5 = (uint *)((int)g_DynamicLights + iVar6);
      iVar6 = iVar6 + 4;
      iVar7 = iVar7 + 4;
      iVar8 = iVar8 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar5,*piVar4,*piVar3,0x80);
    } while (iVar8 < g_DynamicLightCount);
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
