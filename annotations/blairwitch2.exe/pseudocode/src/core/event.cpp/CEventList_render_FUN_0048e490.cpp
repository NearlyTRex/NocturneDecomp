// Name: core_event.cpp_CEventList_render_FUN_0048e490
// Address: 0048e490
// Address Range: [[0048e490, 0048e7ba]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_0048e490(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_0048e490(CEventList *this_ptr)

{
  int y;
  int iVar1;
  CEventList *pCVar2;
  int iVar3;
  CEventList *pCVar4;
  char local_3a8 [200];
  char local_2e0 [200];
  char local_218 [200];
  char local_150 [100];
  char local_ec [100];
  char local_88 [100];
  CEventList *local_24;
  CEventList *local_20;
  CEventList *local_1c;
  CEventList *local_18;
  int local_14;
  
  y = 0x2c;
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0x1908)) {
    pCVar2 = this_ptr + 0x190c;
    iVar1 = y;
    do {
      FUN_005b7790(local_218,"Game Flag: %s",pCVar2);
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 0x20;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0(local_218,0,iVar1);
      iVar1 = y;
    } while (iVar3 < *(int *)(this_ptr + 0x1908));
  }
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0x258c)) {
    pCVar2 = this_ptr + 0x2590;
    iVar1 = y;
    do {
      FUN_005b7790(local_3a8,"Persistent: %s",pCVar2);
      iVar3 = iVar3 + 1;
      pCVar2 = pCVar2 + 0x20;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0(local_3a8,0,iVar1);
      iVar1 = y;
    } while (iVar3 < *(int *)(this_ptr + 0x258c));
  }
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    pCVar2 = this_ptr + 0x3214;
    local_24 = this_ptr;
    do {
      FUN_005b7790
                (local_2e0,"Timer: %5.2f %s",(double)*(float *)(local_24 + 0x3354),pCVar2);
      iVar3 = iVar3 + 1;
      engine_2d_c_drawText_FUN_00401fe0(local_2e0,0,y);
      pCVar2 = pCVar2 + 0x20;
      y = y + 0xb;
      local_24 = local_24 + 4;
    } while (iVar3 < *(int *)(this_ptr + 0x3210));
  }
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0xc84)) {
    pCVar2 = this_ptr + 0xc88;
    iVar1 = y;
    do {
      iVar3 = iVar3 + 1;
      y = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0((char *)pCVar2,0,iVar1);
      pCVar2 = pCVar2 + 0x20;
      iVar1 = y;
    } while (iVar3 < *(int *)(this_ptr + 0xc84));
  }
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0x337c)) {
    local_1c = this_ptr + 0x3380;
    pCVar2 = this_ptr;
    do {
      FUN_005b7790(local_88,"%s=%d",local_1c,*(uint *)(pCVar2 + 0x34c0));
      pCVar2 = pCVar2 + 4;
      engine_2d_c_drawText_FUN_00401fe0(local_88,0,y);
      iVar3 = iVar3 + 1;
      y = y + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar3 < *(int *)(this_ptr + 0x337c));
  }
  iVar3 = 0;
  if (0 < *(int *)(this_ptr + 0x34e8)) {
    pCVar2 = this_ptr + 0x37da;
    local_18 = this_ptr + 0x34ec;
    do {
      FUN_005b7790(local_ec,"%s=%s",local_18,pCVar2);
      iVar3 = iVar3 + 1;
      engine_2d_c_drawText_FUN_00401fe0(local_ec,0,y);
      pCVar2 = pCVar2 + 0x1e;
      y = y + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar3 < *(int *)(this_ptr + 0x34e8));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_00491a90(this_ptr);
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0x3ac8)) {
    local_20 = this_ptr + 0x3ad0;
    pCVar2 = this_ptr + 0x3ae4;
    pCVar4 = this_ptr;
    do {
      FUN_005b7790
                (local_150,"%s=%s %.1f",local_20,pCVar2,*(uint *)(pCVar4 + 0x3be4),
                 *(uint *)(pCVar4 + 0x3be8));
      pCVar4 = pCVar4 + 0x120;
      pCVar2 = pCVar2 + 0x120;
      engine_2d_c_drawText_FUN_00401fe0(local_150,0,y);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      y = y + 0xb;
    } while (local_14 < *(int *)(this_ptr + 0x3ac8));
  }
  return;
}
