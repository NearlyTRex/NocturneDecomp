// Name: core_event.cpp_CEventList_render_FUN_004a6d80
// Address: 004a6d80
// Address Range: [[004a6d80, 004a70aa]]
// Convention: __cdecl
// Signature: void __cdecl core_event_cpp_CEventList_render_FUN_004a6d80(CEventList *this_ptr)

#include "nocturne.h"

void __cdecl core_event_cpp_CEventList_render_FUN_004a6d80(CEventList *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  CEventList *text;
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
  
  iVar1 = 0x2c;
  iVar3 = 0;
  iVar2 = iVar1;
  if (0 < *(int *)(this_ptr + 0x1908)) {
    do {
      _sprintf(local_218,"Game Flag: %s");
      iVar3 = iVar3 + 1;
      iVar2 = iVar1 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0(local_218,0,iVar1);
      iVar1 = iVar2;
    } while (iVar3 < *(int *)(this_ptr + 0x1908));
  }
  iVar3 = 0;
  iVar1 = iVar2;
  if (0 < *(int *)(this_ptr + 0x258c)) {
    do {
      _sprintf(local_3a8,"Persistent: %s");
      iVar3 = iVar3 + 1;
      iVar1 = iVar2 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0(local_3a8,0,iVar2);
      iVar2 = iVar1;
    } while (iVar3 < *(int *)(this_ptr + 0x258c));
  }
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    local_24 = this_ptr;
    do {
      _sprintf(local_2e0,"Timer: %5.2f %s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fe0(local_2e0,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_24 = local_24 + 4;
    } while (iVar2 < *(int *)(this_ptr + 0x3210));
  }
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0xc84)) {
    text = this_ptr + 0xc88;
    iVar3 = iVar1;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = iVar3 + 0xb;
      engine_2d_c_drawText_FUN_00401fe0((char *)text,0,iVar3);
      text = text + 0x20;
      iVar3 = iVar1;
    } while (iVar2 < *(int *)(this_ptr + 0xc84));
  }
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x337c)) {
    local_1c = this_ptr + 0x3380;
    do {
      _sprintf(local_88,"%s=%d");
      engine_2d_c_drawText_FUN_00401fe0(local_88,0,iVar1);
      iVar2 = iVar2 + 1;
      iVar1 = iVar1 + 0xb;
      local_1c = local_1c + 0x20;
    } while (iVar2 < *(int *)(this_ptr + 0x337c));
  }
  iVar2 = 0;
  if (0 < *(int *)(this_ptr + 0x34e8)) {
    local_18 = this_ptr + 0x34ec;
    do {
      _sprintf(local_ec,"%s=%s");
      iVar2 = iVar2 + 1;
      engine_2d_c_drawText_FUN_00401fe0(local_ec,0,iVar1);
      iVar1 = iVar1 + 0xb;
      local_18 = local_18 + 0x1e;
    } while (iVar2 < *(int *)(this_ptr + 0x34e8));
  }
  core_event_cpp_CEventList_updateSfxEntries_FUN_004aa400(this_ptr);
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0x3ac8)) {
    local_20 = this_ptr + 0x3ad0;
    do {
      _sprintf(local_150,"%s=%s %.1f");
      engine_2d_c_drawText_FUN_00401fe0(local_150,0,iVar1);
      local_20 = local_20 + 0x120;
      local_14 = local_14 + 1;
      iVar1 = iVar1 + 0xb;
    } while (local_14 < *(int *)(this_ptr + 0x3ac8));
  }
  return;
}
