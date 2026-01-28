// Name: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// Address: 004b5030
// Address Range: [[004b5030, 004b5347]]
// Convention: __cdecl
// Signature: int __cdecl engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030 (CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
          (CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  CCheckOutItem *pCVar4;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  uint in_stack_fffff794;
  uint in_stack_fffff798;
  char **in_stack_fffff79c;
  CStrList_vtable *in_stack_fffff7a0;
  uint in_stack_fffff7a4;
  char local_4c4 [400];
  CFileFinder local_334;
  char local_220 [260];
  char local_11c [256];
  CCheckOutList local_1c;
  char local_14 [4];
  
  bVar7 = 0;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_1c.count = 0;
  local_1c.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_1c);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_1c);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80(this_ptr->name,local_14,local_11c);
  engine_dosio_c_makePath_FUN_00481f50(local_220,local_14,local_11c,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  pcVar5 = local_220;
  do {
    pcVar6 = pcVar5;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar6 = pcVar5 + (uint)bVar7 * -2 + 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar6;
  } while (cVar1 != '\0');
  pcVar6 = pcVar6 + -1;
  do {
    cVar1 = *file_pattern;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = file_pattern[1];
    file_pattern = file_pattern + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff794);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff794,1);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30(&local_334);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70(&local_334,local_220);
  while (local_334.filename[0] != '\0') {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(local_4c4,"%s\t",&local_334);
    iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_1c,local_334.filename);
    if (-1 < iVar3) {
      crt_stdio_c_sprintf_FUN_005fdbd0
                (local_4c4 + iVar2,"Checked out by %s",local_1c.items[iVar3].value);
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff794,local_4c4);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0(&local_334);
  }
  pcVar5 = (char *)0x0;
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70(&local_334);
  while( true ) {
    pcVar5 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff794,"Select file to check out",
                                (int)pcVar5,0);
    if ((int)pcVar5 < 0) {
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_334,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff794,0,in_stack_fffff794,in_stack_fffff798,
                 (uint)in_stack_fffff79c,(uint)in_stack_fffff7a0,in_stack_fffff7a4);
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_1c);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xfffff794,(int)output_filename_buffer,pcVar5,0);
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60(&local_1c,output_filename_buffer)
    ;
    if (iVar2 < 0) break;
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                      (local_1c.items[iVar2].value,g_VersionControlSession.primary_username);
    pCVar4 = local_1c.items + iVar2;
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out",pCVar4);
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s",pCVar4,pCVar4->value);
    }
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&local_334,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff794,0,in_stack_fffff794,in_stack_fffff798,
             (uint)in_stack_fffff79c,(uint)in_stack_fffff7a0,in_stack_fffff7a4);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860(&local_1c);
  return 1;
}
