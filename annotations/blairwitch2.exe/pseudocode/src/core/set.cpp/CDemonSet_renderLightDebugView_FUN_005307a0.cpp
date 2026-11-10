// Name: core_set.cpp_CDemonSet_renderLightDebugView_FUN_005307a0
// Address: 005307a0
// Address Range: [[005307a0, 005308d0]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_005307a0(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_110 [256];
  
  iVar5 = 0;
  if (0 < _DAT_01fc8e84) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0061b73c + iVar4);
      piVar2 = (int *)((int)&DAT_0061b5bc + iVar4);
      puVar3 = (uint *)(&DAT_01fc8e88 + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < _DAT_01fc8e84);
  }
  iVar4 = 0;
  if (0 < _DAT_01fc9608) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)&DAT_0061b73c + iVar5);
      piVar2 = (int *)((int)&DAT_0061b5bc + iVar5);
      puVar3 = (uint *)(iVar6 + 0x1fc960c);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044a930
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < _DAT_01fc9608);
  }
  iVar5 = _DAT_01fc8e84 + _DAT_01fc9608;
  _sprintf(local_110,"%d omni lights");
  engine_2d_c_drawText_FUN_00401fe0(local_110,(&DAT_0061b5bc)[iVar5],(&DAT_0061b73c)[iVar5]);
  _sprintf(local_110,"%d spot lights");
  engine_2d_c_drawText_FUN_00401fe0(local_110,(&DAT_0061b5bc)[iVar5],(&DAT_0061b73c)[iVar5] + 0xb);
  return;
}
