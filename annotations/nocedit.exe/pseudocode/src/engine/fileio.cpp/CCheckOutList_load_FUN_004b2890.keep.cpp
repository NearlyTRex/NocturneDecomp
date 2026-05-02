// Name: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
// MANUAL RECONSTRUCTION
// Address Range: [[004b2890, 004b2a53]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

#include "nocturne.h"

int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

{
  int *piVar3;
  int *piVar2;
  int iVar4;
  char local_21c [260];
  char local_118 [256];
  _FILE *local_18;
  char local_14 [4];
  byte bVar7;
  
  bVar7 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  if (g_VersionControlDirectory[0] == '\0') {
    return 1;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_118);
  engine_dosio_c_makePath_FUN_00481f50(local_21c,local_14,local_118,(char *)0x0,(char *)0x0);
  strcat(local_21c,"checkout.txt");
  iVar4 = 0;
  do {
    local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_21c,(char *)0x0,"rt","..\\engine\\fileio.cpp",0x153);
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
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
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
