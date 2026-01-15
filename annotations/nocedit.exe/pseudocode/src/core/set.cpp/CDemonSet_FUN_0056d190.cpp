// Name: core_set.cpp_CDemonSet_FUN_0056d190
// Address: 0056d190
// Address Range: [[0056d190, 0056d2c0]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_FUN_0056d190(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_FUN_0056d190(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_110 [256];
  
  iVar5 = 0;
  if (0 < g_ActiveLightCount) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0068125c + iVar4);
      piVar2 = (int *)((int)&DAT_006810dc + iVar4);
      puVar3 = (uint *)((int)g_ActiveLightList + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < g_ActiveLightCount);
  }
  iVar4 = 0;
  if (0 < g_DynamicLightCount) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0068125c + iVar5);
      piVar2 = (int *)((int)&DAT_006810dc + iVar5);
      puVar3 = (uint *)((int)g_DynamicLights + iVar6);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00473390
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < g_DynamicLightCount);
  }
  iVar5 = g_ActiveLightCount + g_DynamicLightCount;
  crt_stdio_c_sprintf_FUN_005fdbd0(local_110,"%d omni lights",DAT_03277d80);
  engine_2d_c_drawText_FUN_00401fd0(local_110,(&DAT_006810dc)[iVar5],(&DAT_0068125c)[iVar5]);
  crt_stdio_c_sprintf_FUN_005fdbd0(local_110,"%d spot lights",g_ActiveLightCount);
  engine_2d_c_drawText_FUN_00401fd0(local_110,(&DAT_006810dc)[iVar5],(&DAT_0068125c)[iVar5] + 0xb);
  return;
}
