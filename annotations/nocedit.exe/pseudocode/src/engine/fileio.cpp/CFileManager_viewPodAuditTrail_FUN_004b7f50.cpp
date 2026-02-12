// Name: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// Address: 004b7f50
// Address Range: [[004b7f50, 004b829f]]
// Convention: __cdecl
// Signature: void __cdecl engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (CFileManager *this_ptr,char *pod_filename)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  int iVar2;
  _tm *time_ptr;
  int iVar3;
  char *pcVar4;
  int record_index;
  int *piVar5;
  char *pcVar6;
  int *piVar7;
  char *pcVar8;
  byte bVar9;
  CPodFile local_cdc;
  CPickList local_8b0;
  char local_508 [512];
  uint local_308;
  int local_2e8;
  uint local_2e4;
  char local_2e0 [272];
  int local_1d0 [78];
  char local_98 [100];
  char local_34 [32];
  int local_14;
  int local_10;
  
  bVar9 = 0;
  if (pod_filename == (char *)0x0) {
    iVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to view audit trail",0x62813f,local_508);
    if (iVar2 == 0) {
      return;
    }
  }
  else {
    pcVar4 = local_508;
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
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0(&local_cdc);
  iVar2 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650(&local_cdc,local_508);
  if (iVar2 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to view audit!",local_508);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_cdc,0);
    return;
  }
  local_14 = local_cdc.audit_count;
  if (local_cdc.audit_count < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s doesn't contain any audit information",local_508);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_cdc,0);
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %d audit records from %s");
  record_index = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8b0);
  iVar2 = local_14;
  local_10 = 0;
  pcVar4 = g_DefaultAuditPath;
  pcVar6 = local_98;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar6 = pcVar6 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (0 < iVar2) {
    do {
      engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590(&local_cdc,record_index,local_1d0);
      piVar5 = local_1d0;
      piVar7 = &local_308;
      for (iVar2 = 0x4e; iVar2 != 0; iVar2 = iVar2 + -1) {
        *piVar7 = *piVar5;
        piVar5 = piVar5 + (uint)bVar9 * -2 + 1;
        piVar7 = piVar7 + (uint)bVar9 * -2 + 1;
      }
      time_ptr = _localtime(&local_2e8);
      _strftime(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      pcVar4 = "???";
      if (local_2e4 == 0) {
        pcVar4 = "Add";
      }
      else if (local_2e4 < 2) {
        pcVar4 = "Remove";
      }
      else if (local_2e4 == 2) {
        pcVar4 = "Change";
      }
      if ((local_2e8 != local_10) ||
         (iVar2 = stricmp((char *)&local_308,local_98), iVar2 != 0)) {
        _sprintf(local_508,"--\t%s\t%s",&local_308,local_34);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8b0.base,local_508);
        pcVar6 = (char *)&local_308;
        pcVar8 = local_98;
        local_10 = local_2e8;
        do {
          cVar1 = *pcVar6;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar6[1];
          pcVar6 = pcVar6 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      _sprintf(local_508,"\t%s\t%s",pcVar4,local_2e0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8b0.base,local_508);
      record_index = record_index + 1;
    } while (record_index < local_14);
  }
  _sprintf
            (local_508,"Viewing audit history for:\n%s",local_cdc.filename);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(&local_8b0,local_508,-1,0)
  ;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_8b0,0);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610(&local_cdc,0);
  return;
}
