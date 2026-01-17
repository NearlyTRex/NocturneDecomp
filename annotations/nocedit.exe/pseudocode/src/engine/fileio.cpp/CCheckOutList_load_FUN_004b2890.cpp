// Name: engine_fileio.cpp_CCheckOutList_load_FUN_004b2890
// Address: 004b2890
// Address Range: [[004b2890, 004b2a53]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList * this_ptr)

#include "nocturne.h"

/* WARNING: Removing unreachable block (ram,0x004b29c8) */

int __cdecl engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(CCheckOutList *this_ptr)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  byte bVar7;
  char local_21c [260];
  char local_118 [256];
  FILE *local_18;
  char local_14 [4];
  char *pcVar6;
  
  bVar7 = 0;
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(this_ptr);
  if (g_VersionControlDirectory[0] == '\0') {
    return 1;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(g_VersionControlDirectory,local_14,local_118);
  engine_dosio_c_makePath_FUN_00481f50(local_21c,local_14,local_118,(char *)0x0,(char *)0x0);
  pcVar4 = "checkout.txt";
  iVar3 = -1;
  pcVar6 = local_21c;
  do {
    pcVar5 = pcVar6;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar5 = pcVar6 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar6;
    pcVar6 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  iVar3 = 0;
  do {
    local_18 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                         (local_21c,(char *)0x0,"rt","..\\engine\\fileio.cpp",0x153);
    if (local_18 != (FILE *)0x0) {
      crt_stdio_c_setvbuf_FUN_00601490(local_18,(char *)0x0,0,0x400);
      goto LAB_004b295b;
    }
    piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
    if (*piVar2 != 6) break;
    iVar3 = iVar3 + 1;
    (*g_SleepFunc)(500);
  } while (iVar3 < 10);
  local_18 = (FILE *)0x0;
LAB_004b295b:
  if (local_18 != (FILE *)0x0) {
    iVar3 = engine_fileio_cpp_CCheckOutList_parse_FUN_004b2a60(this_ptr,&local_18);
    if (local_18 != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_18,"..\\engine\\fileio.cpp",0xc4);
    }
    return iVar3;
  }
  piVar2 = (int *)crt_errno_c_errno_FUN_00601450();
  if (*piVar2 != 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't access %s.",local_21c);
    return 0;
  }
  return 1;
}
