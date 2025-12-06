// Name: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// Address: 004b7f50
// Address Range: [[004b7f50, 004b829f]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(CFileManager * this_ptr, char * pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  tm *time_ptr;
  char *pcVar4;
  BADSPACEBASE *in_ESP;
  int record_index;
  int unaff_ESI;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
  int unaff_retaddr;
  uint in_stack_fffff33c;
  uint in_stack_fffff340;
  uint in_stack_fffff344;
  uint in_stack_fffff348;
  uint in_stack_fffff34c;
  CPodDirectoryEntry *pCStack_8b4;
  byte auStack_8a0 [12];
  CPickList CStack_894;
  char acStack_2fc [8];
  char acStack_2f4 [16];
  time_t local_2e4 [2];
  int iStack_2dc;
  uint uStack_2d8;
  uint auStack_1cc [4];
  byte auStack_1bc [304];
  char acStack_8c [4];
  uint uStack_88;
  char acStack_84 [88];
  char acStack_2c [32];
  
  bVar8 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to view audit trail",true,
                       CStack_894.cancel_button.button_text + 0xb0);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar4 = CStack_894.cancel_button.button_text + 0xb0;
    do {
      cVar1 = *pod_filename;
      *pcVar4 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar4[1] = cVar1;
      pcVar4 = pcVar4 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff328);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffff32c,CStack_894.cancel_button.button_text + 0xb8);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to view audit!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff334);
    return;
  }
  if ((int)pCStack_8b4 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s doesn't contain any audit information");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff334);
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %d audit records from %s");
  record_index = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_8a0);
  pcVar4 = g_DefaultAuditPath;
  puVar5 = &uStack_88;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
  }
  if (0 < unaff_retaddr) {
    do {
      engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
                ((CPodFile *)&stack0xfffff338,record_index,auStack_1bc);
      puVar5 = auStack_1cc;
      pcVar4 = acStack_2f4;
      for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
      }
      time_ptr = crt_time_c_localtime_FUN_00600288(local_2e4);
      crt_time_c_strftime_FUN_006002d4(acStack_2c,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      pcVar4 = "???";
      if (uStack_2d8 == 0) {
        pcVar4 = "Add";
      }
      else if (uStack_2d8 < 2) {
        pcVar4 = "Remove";
      }
      else if (uStack_2d8 == 2) {
        pcVar4 = "Change";
      }
      if ((iStack_2dc != unaff_ESI) ||
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_2fc,acStack_8c), iVar3 != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_894.cancel_button.button_text + 0xbc,"--\t%s\t%s",acStack_2fc);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80
                  ((CStrList *)auStack_8a0,CStack_894.cancel_button.button_text + 0xc0);
        pcVar6 = acStack_2f4;
        pcVar7 = acStack_84;
        do {
          cVar1 = *pcVar6;
          *pcVar7 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar7[1] = cVar1;
          pcVar7 = pcVar7 + 2;
        } while (cVar1 != '\0');
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (CStack_894.cancel_button.button_text + 0xbc,"\t%s\t%s",pcVar4);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)auStack_8a0,CStack_894.cancel_button.button_text + 0xc0);
      record_index = record_index + 1;
    } while (record_index < unaff_retaddr);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0
            (CStack_894.cancel_button.button_text + 0xc4,"Viewing audit history for:\n%s");
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)(auStack_8a0 + 8),(char *)&CStack_894.selection_state,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&CStack_894,0,in_stack_fffff33c,in_stack_fffff340,in_stack_fffff344,in_stack_fffff348,
             in_stack_fffff34c);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff344);
  return;
}
