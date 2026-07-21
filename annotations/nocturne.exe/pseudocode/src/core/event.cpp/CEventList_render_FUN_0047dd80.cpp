// Name: core_event.cpp_CEventList_render_FUN_0047dd80
// Address: 0047dd80
// Address Range: [[0047dd80, 0047e0aa]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(int param_1)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_0047dd80(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  byte local_3a8 [200];
  byte local_2e0 [200];
  byte local_218 [200];
  byte local_150 [100];
  byte local_ec [100];
  byte local_88 [100];
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  iVar1 = 0x2c;
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x1908)) {
    iVar3 = param_1 + 0x190c;
    iVar2 = iVar1;
    do {
      _sprintf(local_218,"Game Flag: %s",iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_218,0,iVar2);
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0x1908));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x258c)) {
    iVar3 = param_1 + 0x2590;
    iVar2 = iVar1;
    do {
      _sprintf(local_3a8,"Persistent: %s",iVar3);
      iVar4 = iVar4 + 1;
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00402600(local_3a8,0,iVar2);
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0x258c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x3210)) {
    iVar3 = param_1 + 0x3214;
    local_24 = param_1;
    do {
      _sprintf(local_2e0,"Timer: %5.2f %s",(double)*(float *)(local_24 + 0x3354),iVar3);
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00402600(local_2e0,0,iVar1);
      iVar3 = iVar3 + 0x20;
      iVar1 = iVar1 + 0xb;
      local_24 = local_24 + 4;
    } while (iVar4 < *(int *)(param_1 + 0x3210));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0xc84)) {
    iVar3 = param_1 + 0xc88;
    iVar2 = iVar1;
    do {
      iVar4 = iVar4 + 1;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00402600(iVar3,0,iVar2);
      iVar3 = iVar3 + 0x20;
      iVar2 = iVar1;
    } while (iVar4 < *(int *)(param_1 + 0xc84));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x337c)) {
    local_1c = param_1 + 0x3380;
    iVar3 = param_1;
    do {
      _sprintf(local_88,"%s=%d",local_1c,*(uint *)(iVar3 + 0x34c0));
      iVar3 = iVar3 + 4;
      engine_2d_c_drawText_FUN_00402600(local_88,0,iVar1);
      iVar4 = iVar4 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar4 < *(int *)(param_1 + 0x337c));
  }
  iVar4 = 0;
  if (0 < *(int *)(param_1 + 0x34e8)) {
    iVar3 = param_1 + 0x37da;
    local_18 = param_1 + 0x34ec;
    do {
      _sprintf(local_ec,"%s=%s",local_18,iVar3);
      iVar4 = iVar4 + 1;
      engine_2d_c_drawText_FUN_00402600(local_ec,0,iVar1);
      iVar3 = iVar3 + 0x1e;
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar4 < *(int *)(param_1 + 0x34e8));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00480d60(param_1);
  local_14 = 0;
  if (0 < *(int *)(param_1 + 0x3ac8)) {
    local_20 = param_1 + 0x3ad0;
    iVar4 = param_1 + 0x3ae4;
    iVar3 = param_1;
    do {
      _sprintf(local_150,"%s=%s %.1f",local_20,iVar4,*(uint *)(iVar3 + 0x3be4),
                 *(uint *)(iVar3 + 0x3be8));
      iVar3 = iVar3 + 0x120;
      iVar4 = iVar4 + 0x120;
      engine_2d_c_drawText_FUN_00402600(local_150,0,iVar1);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      iVar1 = iVar1 + 0xb;
    } while (local_14 < *(int *)(param_1 + 0x3ac8));
  }
  return;
}
