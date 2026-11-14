// Name: core_set.cpp_CDemonSet_renderLightDebugView_FUN_00551a50
// Address: 00551a50
// Address Range: [[00551a50, 00551b80]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_00551a50(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_renderLightDebugView_FUN_00551a50(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_110 [256];
  
  iVar5 = 0;
  if (0 < _DAT_01fe4e38) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00622dac + iVar4);
      piVar2 = (int *)((int)&DAT_00622c2c + iVar4);
      puVar3 = (uint *)(&DAT_01fe4e3c + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00463130
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < _DAT_01fe4e38);
  }
  iVar4 = 0;
  if (0 < _DAT_01fe55bc) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)&DAT_00622dac + iVar5);
      piVar2 = (int *)((int)&DAT_00622c2c + iVar5);
      puVar3 = (uint *)(iVar6 + 0x1fe55c0);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_00463130
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < _DAT_01fe55bc);
  }
  iVar5 = _DAT_01fe4e38 + _DAT_01fe55bc;
  _sprintf(local_110,"%d omni lights");
  engine_2d_c_drawText_FUN_00401fe0(local_110,(&DAT_00622c2c)[iVar5],(&DAT_00622dac)[iVar5]);
  _sprintf(local_110,"%d spot lights");
  engine_2d_c_drawText_FUN_00401fe0(local_110,(&DAT_00622c2c)[iVar5],(&DAT_00622dac)[iVar5] + 0xb);
  return;
}
