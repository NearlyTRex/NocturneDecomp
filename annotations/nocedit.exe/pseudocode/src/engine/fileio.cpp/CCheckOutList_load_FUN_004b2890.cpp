// Name: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
// Address Range: [[004b2890, 004b2a53]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b29c8) */

int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

{
  char cVar2;
  int *piVar3;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  int iVar4;
  char *pcVar5;
  char *pcVar7;
  byte bVar7;
  char local_21c [260];
  char local_118 [256];
  _FILE *local_18;
  char local_14 [4];
  char *pcVar6;
  char cVar1;
  
  bVar7 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  if (g_VersionControlDirectory[0] == '\0') {
    return 1;
  }
  engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_118);
  engine_dosio_cpp_makePath_FUN_00481f50(local_21c,local_14,local_118,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar3 = -1;
  pcVar5 = local_21c;
  do {
    pcVar5 = pcVar5;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5;
  } while (cVar1 != '\0');
  pcVar7 = pcVar5 + -1;
  do {
    cVar2 = *pcVar4;
    *pcVar7 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar2;
    pcVar7 = pcVar7 + 2;
  } while (cVar2 != '\0');
  iVar4 = 0;
  do {
    local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_21c,(char *)0x0,"rt","..\\engine\\fileio.cpp",339);
    if (local_18 != (_FILE *)0x0) {
      _setvbuf(local_18,(char *)0x0,0,0x400);
      goto LAB_004b295b;
    }
    piVar3 = _errno();
    if (*piVar3 != 6) break;
    iVar4 = iVar4 + 1;
    (*g_SleepFunc)(500);
  } while (iVar4 < 10);
  local_18 = (_FILE *)0x0;
LAB_004b295b:
  if (local_18 != (_FILE *)0x0) {
    iVar4 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(this_ptr,&local_18);
    if (local_18 != (_FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",196);
    }
    return iVar4;
  }
  piVar2 = _errno();
  if (*piVar2 != 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't access %s.",local_21c);
    return 0;
  }
  return 1;
}
