// Name: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
// Address Range: [[004b7460, 004b76c3]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  tm *time_ptr;
  uint uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  byte bVar7;
  uint in_stack_fffff318;
  uint in_stack_fffff31c;
  uint in_stack_fffff320;
  uint in_stack_fffff324;
  uint in_stack_fffff328;
  uint local_8ec;
  CPodDirectoryEntry *pCStack_8e4;
  CPodDirectoryEntry *pCStack_8dc;
  char *pcStack_8d8;
  byte auStack_8c8 [12];
  byte auStack_8bc [912];
  char local_52c [8];
  char acStack_524 [4];
  char acStack_520 [4];
  char acStack_51c [4];
  char acStack_518 [4];
  char acStack_514 [488];
  char local_32c [4];
  char cStack_328;
  byte auStack_327 [3];
  byte auStack_324 [248];
  char local_22c [8];
  byte auStack_224 [248];
  char local_12c [8];
  byte auStack_124 [244];
  char acStack_30 [12];
  byte auStack_24 [24];
  
  bVar7 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to catalog",true,local_52c);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar6 = local_52c;
    do {
      cVar1 = *pod_filename;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff304);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffff308,acStack_524);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to catalog files!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff310);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_8c8);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)(auStack_8c8 + 4),1);
  iVar3 = 0;
  if (0 < (int)pCStack_8dc) {
    iVar5 = 0;
    do {
      time_ptr = crt_time_c_localtime_FUN_00600288((time_t *)(pcStack_8d8 + iVar5 + 0xc));
      crt_time_c_strftime_FUN_006002d4(acStack_30,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      engine_dosio_c_splitPath_FUN_00481f20
                (*(char **)(iVar5 + local_8ec),(char *)0x0,local_22c,local_12c,local_32c);
      if (cStack_328 == '.') {
        uVar4 = 0xffffffff;
        pcVar6 = &cStack_328;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_328,auStack_327,~uVar4 - 1);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_524,"%s\t%s\t%s\t%d\t%s",auStack_224,auStack_124,auStack_324,
                 *(uint *)((int)&pCStack_8e4->size + iVar5),auStack_24);
      crt_string_c_strupr_FUN_00600770(acStack_520);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_8c8 + 4),acStack_51c);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar3 < (int)pCStack_8dc);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_518,"Contents of pod file:\n%s");
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_8bc,acStack_514,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_8bc + 4),0,in_stack_fffff318,in_stack_fffff31c,in_stack_fffff320,
             in_stack_fffff324,in_stack_fffff328);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff320);
  return;
}
