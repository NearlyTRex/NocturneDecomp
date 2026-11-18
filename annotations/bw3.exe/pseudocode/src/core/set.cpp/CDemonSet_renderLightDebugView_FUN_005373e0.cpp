// Name: core_set.cpp_CDemonSet_renderLightDebugView_FUN_005373e0
// Address: 005373e0
// Address Range: [[005373e0, 00537510]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005373e0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005373e0(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_110 [256];
  
  iVar5 = 0;
  if (0 < g_SpotLightCount) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)g_LightDebugScreenY + iVar4);
      piVar2 = (int *)((int)g_LightDebugScreenX + iVar4);
      puVar3 = (uint *)((int)g_CDemonLight_PTR_ARRAY_0203a59c + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < g_SpotLightCount);
  }
  iVar4 = 0;
  if (0 < g_INT_0203ad1c) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)g_LightDebugScreenY + iVar5);
      piVar2 = (int *)((int)g_LightDebugScreenX + iVar5);
      puVar3 = (uint *)((int)g_DynamicLights + iVar6);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0045ce40
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < g_INT_0203ad1c);
  }
  iVar5 = g_SpotLightCount + g_INT_0203ad1c;
  _sprintf(local_110,"%d omni lights");
  engine_2d_c_drawText_FUN_00401fe0(local_110,g_LightDebugScreenX[iVar5],g_LightDebugScreenY[iVar5])
  ;
  _sprintf(local_110,"%d spot lights");
  engine_2d_c_drawText_FUN_00401fe0
            (local_110,g_LightDebugScreenX[iVar5],g_LightDebugScreenY[iVar5] + 0xb);
  return;
}
