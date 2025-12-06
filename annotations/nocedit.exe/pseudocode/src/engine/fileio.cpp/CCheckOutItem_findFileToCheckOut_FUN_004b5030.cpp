// Name: engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
// Address: 004b5030
// Address Range: [[004b5030, 004b5347]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030(CCheckOutItem * this_ptr, char * file_pattern, char * output_filename_buffer)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_findFileToCheckOut_FUN_004b5030
          (CCheckOutItem *this_ptr,char *file_pattern,char *output_filename_buffer)

{
  char cVar1;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  byte bVar6;
  CCheckOutItem *in_stack_00000018;
  int in_stack_0000001c;
  CStrList_vtable *in_stack_fffff7c0;
  CStrList_vtable *in_stack_fffff7c4;
  CStrList_vtable *in_stack_fffff7c8;
  CStrList_vtable *in_stack_fffff7cc;
  char **in_stack_fffff7d0;
  CStrList_vtable *in_stack_fffff7d4;
  uint in_stack_fffff7d8;
  char acStack_4b4 [8];
  char acStack_4ac [8];
  char acStack_4a4 [384];
  char acStack_324 [8];
  byte auStack_31c [8];
  byte auStack_314 [16];
  CFileFinder CStack_304;
  char acStack_114 [4];
  char acStack_110 [248];
  CCheckOutList local_18;
  
  bVar6 = 0;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_18.count = 0;
  local_18.items = (CCheckOutItem *)0x0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890(&local_18);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&local_18.items);
    return 0;
  }
  engine_dosio_c_ensureTrailingSlash_FUN_00481f80
            (output_filename_buffer,&stack0xfffffff4,acStack_114);
  engine_dosio_c_makePath_FUN_00481f50
            (CStack_304.filename + 0xf0,&stack0xfffffff8,acStack_110,(char *)0x0,(char *)0x0);
  iVar2 = -1;
  pcVar4 = CStack_304.filename + 0xf4;
  do {
    pcVar5 = pcVar4;
    if (iVar2 == 0) break;
    iVar2 = iVar2 + -1;
    pcVar5 = pcVar4 + (uint)bVar6 * -2 + 1;
    cVar1 = *pcVar4;
    pcVar4 = pcVar5;
  } while (cVar1 != '\0');
  pcVar5 = pcVar5 + -1;
  do {
    cVar1 = *file_pattern;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = file_pattern[1];
    file_pattern = file_pattern + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff7a4);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)&stack0xfffff7a8,1);
  engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)auStack_31c);
  engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
            ((CFileFinder *)(auStack_31c + 4),(char *)&CStack_304.file_size);
  while (auStack_314[0] != '\0') {
    iVar2 = crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4a4,"%s\t");
    iVar3 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0xfffffff4,acStack_324);
    if (-1 < iVar3) {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4b4 + iVar2,"Checked out by %s");
    }
    shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xfffff7ac,acStack_4ac);
    engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)(auStack_31c + 4));
  }
  pcVar4 = (char *)0x0;
  engine_dosio_c_CFileFinder_closeSearch_FUN_00481d70((CFileFinder *)auStack_314);
  while( true ) {
    pcVar4 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xfffff7b8,"Select file to check out",
                                (int)pcVar4,0);
    if ((int)pcVar4 < 0) {
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)(auStack_314 + 8),0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff7c0,0,(uint)in_stack_fffff7c0,(uint)in_stack_fffff7c4,
                 (uint)in_stack_fffff7c8,(uint)in_stack_fffff7cc,(uint)in_stack_fffff7d0);
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000014);
      return 0;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xfffff7bc,(int)output_filename_buffer,pcVar4,0);
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0x00000010,output_filename_buffer);
    if (iVar2 < 0) break;
    iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                      (in_stack_00000018[iVar2].value,g_VersionControlSession.primary_username);
    in_stack_fffff7c0 = (CStrList_vtable *)(in_stack_0000001c + iVar2 * 0x168);
    if (iVar3 == 0) {
      pcVar5 = "You already have %s checked out";
      in_stack_fffff7c4 = in_stack_fffff7c0;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You already have %s checked out");
      in_stack_fffff7c0 = (CStrList_vtable *)pcVar5;
    }
    else {
      in_stack_fffff7c4 = (CStrList_vtable *)&in_stack_fffff7c0[9].sort;
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"%s is currently checked out by %s");
    }
  }
  engine_dosio_c_CFileFinder_dtor_FUN_00481c50(&CStack_304,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffff7c8,0,(uint)in_stack_fffff7c8,(uint)in_stack_fffff7cc,
             (uint)in_stack_fffff7d0,(uint)in_stack_fffff7d4,in_stack_fffff7d8);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x0000001c);
  return 1;
}
