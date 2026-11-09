// Name: shape_edittool.cpp_CStrList_copyToClipboard_FUN_00499ba0
// Address: 00499ba0
// Address Range: [[00499ba0, 00499c79]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00499ba0(CStrList *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl shape_edittool_cpp_CStrList_copyToClipboard_FUN_00499ba0(CStrList *this_ptr)

{
  char cVar1;
  CEditorTools *this_ptr_00;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  char *pcVar7;
  byte bVar8;
  
  bVar8 = 0;
  iVar6 = 0;
  iVar5 = 0;
  if (0 < *(int *)this_ptr) {
    do {
      pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(this_ptr,iVar6);
      uVar4 = 0xffffffff;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar2;
        pcVar2 = pcVar2 + (uint)bVar8 * -2 + 1;
      } while (cVar1 != '\0');
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + ~uVar4;
    } while (iVar6 < *(int *)this_ptr);
  }
  pcVar2 = (char *)FUN_005c1268(iVar5 + 1);
  if (pcVar2 == (char *)0x0) {
    _DAT_01d1d400 = "..\\shape\\edittool.cpp";
    _DAT_01d1d404 = 0xd4a;
    core_main_c_FUN_005030e0("CStrList::copyToClipboard - out of memory for %d items, %d bytes",*(uint *)this_ptr,iVar5 + 1);
  }
  iVar5 = 0;
  pcVar7 = pcVar2;
  if (0 < *(int *)this_ptr) {
    do {
      pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004998a0(this_ptr,iVar5);
      iVar5 = iVar5 + 1;
      iVar6 = FUN_005bfb40(pcVar7,&DAT_005dc5bd,pcVar3);
      pcVar7 = pcVar7 + iVar6;
    } while (iVar5 < *(int *)this_ptr);
  }
  this_ptr_00 = g_CEditorToolsPtr;
  *pcVar7 = '\0';
  shape_edittool_cpp_FUN_00498290(this_ptr_00,pcVar2);
  FUN_005c0336(pcVar2);
  return;
}
