// Name: core_set.cpp_CDemonSet_FUN_0050aa70
// Address: 0050aa70
// Address Range: [[0050aa70, 0050ab96]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_FUN_0050aa70(CDemonSet *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_FUN_0050aa70(CDemonSet *this_ptr)

{
  int *piVar1;
  int *piVar2;
  uint *puVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  char local_110 [256];
  
  iVar5 = 0;
  if (0 < _DAT_01fb9b54) {
    iVar4 = 0;
    do {
      piVar1 = (int *)((int)&DAT_005be4fc + iVar4);
      piVar2 = (int *)((int)&DAT_005be37c + iVar4);
      puVar3 = (uint *)(&DAT_01fb9b58 + iVar4);
      iVar4 = iVar4 + 4;
      iVar5 = iVar5 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar5 < _DAT_01fb9b54);
  }
  iVar4 = 0;
  if (0 < _DAT_01fba2d8) {
    iVar5 = iVar5 * 4;
    iVar6 = 0;
    do {
      piVar1 = (int *)((int)&DAT_005be4fc + iVar5);
      piVar2 = (int *)((int)&DAT_005be37c + iVar5);
      puVar3 = (uint *)(iVar6 + 0x1fba2dc);
      iVar6 = iVar6 + 4;
      iVar5 = iVar5 + 4;
      iVar4 = iVar4 + 1;
      core_dlight_cpp_CDemonLight_renderShadowMapDebugView_FUN_0044ed80
                ((CDemonLight *)*puVar3,*piVar2,*piVar1,0x80);
    } while (iVar4 < _DAT_01fba2d8);
  }
  iVar5 = _DAT_01fb9b54 + _DAT_01fba2d8;
  _sprintf(local_110,"%d omni lights",_DAT_01fba9a4);
  engine_2d_c_drawText_FUN_00402600(local_110,(&DAT_005be37c)[iVar5],(&DAT_005be4fc)[iVar5]);
  _sprintf(local_110,"%d spot lights",_DAT_01fb9b54);
  engine_2d_c_drawText_FUN_00402600(local_110,(&DAT_005be37c)[iVar5],(&DAT_005be4fc)[iVar5] + 0xb);
  return;
}
