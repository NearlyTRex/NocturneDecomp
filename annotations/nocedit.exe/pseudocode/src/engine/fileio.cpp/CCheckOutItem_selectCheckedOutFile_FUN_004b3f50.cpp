// Name: engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
// Address: 004b3f50
// Address Range: [[004b3f50, 004b41b3]]
// Convention: __cdecl
// Signature: int engine_fileio.cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50(CCheckOutItem * this_ptr, char * filename_out, char * out_buffer, char * wildcard_pattern, char * dialog_title)

#include "nocturne.h"

int __cdecl
engine_fileio_cpp_CCheckOutItem_selectCheckedOutFile_FUN_004b3f50
          (CCheckOutItem *this_ptr,char *filename_out,char *out_buffer,char *wildcard_pattern,
          char *dialog_title)

{
  char cVar1;
  char *pattern;
  int iVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  char *pcVar4;
  int unaff_EDI;
  char *pcVar5;
  int unaff_retaddr;
  char *in_stack_0000001c;
  int in_stack_fffffc4c;
  char **in_stack_fffffc50;
  CStrList_vtable *in_stack_fffffc54;
  CStrList_vtable *in_stack_fffffc58;
  CStrList_vtable *in_stack_fffffc5c;
  CStrList_vtable *in_stack_fffffc60;
  uint in_stack_fffffc64;
  int local_14;
  
  pattern = dialog_title;
  pcVar5 = out_buffer;
  pcVar4 = filename_out;
  iVar2 = engine_fileio_cpp_establishUserIdentity_FUN_004b1c00();
  if (iVar2 == 0) {
    return 0;
  }
  local_14 = 0;
  iVar2 = engine_fileio_cpp_CCheckOutList_load_FUN_004b2890((CCheckOutList *)&local_14);
  if (iVar2 == 0) {
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffff0);
    return 0;
  }
  if (pcVar4 != (char *)0x0) {
    iVar2 = engine_fileio_cpp_CCheckOutList_findEntry_FUN_004b2e60
                      ((CCheckOutList *)&stack0xfffffff0,pcVar4);
    if (((-1 < iVar2) &&
        (iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                           ((char *)(iVar2 * 0x168 + unaff_retaddr + 0x104),
                            g_VersionControlSession.primary_username), iVar3 != 0)) || (iVar2 < 0))
    {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"You do not currently have %s checked out");
      engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&this_ptr);
      return 0;
    }
    do {
      cVar1 = *pcVar4;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
LAB_004b3ff0:
    engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0x00000000);
    return 1;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffc48);
  if (0 < unaff_EDI) {
    pcVar4 = (char *)0x0;
    iVar2 = 0;
    do {
      iVar3 = crt_string_c_stricmp_FUN_005fe7f0
                        (pcVar4 + unaff_ESI + 0x104,g_VersionControlSession.primary_username);
      if (iVar3 == 0) {
        iVar3 = shape_edittool_cpp_wildcardStringMatch_FUN_004a6e20(pattern,pcVar4,0);
        if (iVar3 != 0) {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80
                    ((CStrList *)&stack0xfffffc4c,pcVar4 + unaff_EDI);
        }
      }
      iVar2 = iVar2 + 1;
      pcVar4 = pcVar4 + 0x168;
    } while (iVar2 < unaff_EDI);
  }
  if (in_stack_fffffc4c < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"You currently don't have any files checked out.");
  }
  else {
    iVar2 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                      ((CPickList *)&stack0xfffffc4c,in_stack_0000001c,-1,0);
    if (-1 < iVar2) {
      pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                         ((CStrList *)&stack0xfffffc50,iVar2);
      do {
        cVar1 = *pcVar4;
        *pcVar5 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar4[1];
        pcVar4 = pcVar4 + 2;
        pcVar5[1] = cVar1;
        pcVar5 = pcVar5 + 2;
      } while (cVar1 != '\0');
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffffc54,0,(uint)in_stack_fffffc54,(uint)in_stack_fffffc58,
                 (uint)in_stack_fffffc5c,(uint)in_stack_fffffc60,in_stack_fffffc64);
      goto LAB_004b3ff0;
    }
  }
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffc50,0,(uint)in_stack_fffffc50,(uint)in_stack_fffffc54,
             (uint)in_stack_fffffc58,(uint)in_stack_fffffc5c,(uint)in_stack_fffffc60);
  engine_fileio_cpp_CCheckOutList_reset_FUN_004b2860((CCheckOutList *)&stack0xfffffffc);
  return 0;
}
