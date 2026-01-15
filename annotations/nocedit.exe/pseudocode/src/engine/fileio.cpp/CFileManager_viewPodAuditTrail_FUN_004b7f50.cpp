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
  uint uVar2;
  bool bVar3;
  undefined3 extraout_var;
  int iVar4;
  tm *time_ptr;
  uint unaff_EBX;
  char *pcVar5;
  int record_index;
  uint *puVar6;
  char *pcVar7;
  char *pcVar8;
  byte bVar9;
  uint in_stack_fffff324;
  uint in_stack_fffff328;
  uint in_stack_fffff32c;
  uint in_stack_fffff330;
  uint local_8c0;
  CPickList local_8b0;
  char local_508 [512];
  char local_308 [32];
  int local_2e8;
  uint local_2e4;
  byte local_2e0 [272];
  uint local_1d0 [78];
  char local_98 [100];
  char local_34 [32];
  uint local_14;
  int local_10;
  
  bVar9 = 0;
  if (pod_filename == (char *)0x0) {
    bVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to view audit trail",true,local_508);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) == 0) {
      return;
    }
  }
  else {
    pcVar5 = local_508;
    do {
      cVar1 = *pod_filename;
      *pcVar5 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar5[1] = cVar1;
      pcVar5 = pcVar5 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff324);
  iVar4 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xfffff324,local_508)
  ;
  if (iVar4 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to view audit!",local_508);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff324);
    return;
  }
  local_14 = local_8c0;
  if ((int)local_8c0 < 1) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"%s doesn't contain any audit information",local_508);
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff324);
    return;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading %d audit records from %s");
  record_index = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_8b0);
  uVar2 = local_14;
  local_10 = 0;
  pcVar5 = g_DefaultAuditPath;
  pcVar7 = local_98;
  for (iVar4 = 0x19; iVar4 != 0; iVar4 = iVar4 + -1) {
    *(uint *)pcVar7 = *(uint *)pcVar5;
    pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
    pcVar7 = pcVar7 + ((uint)bVar9 * -2 + 1) * 4;
  }
  if (0 < (int)uVar2) {
    do {
      engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
                ((CPodFile *)&stack0xfffff324,record_index,local_1d0);
      puVar6 = local_1d0;
      pcVar5 = local_308;
      for (iVar4 = 0x4e; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint *)pcVar5 = *puVar6;
        puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
        pcVar5 = pcVar5 + ((uint)bVar9 * -2 + 1) * 4;
      }
      time_ptr = crt_time_c_localtime_FUN_00600288(&local_2e8);
      crt_time_c_strftime_FUN_006002d4(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      pcVar5 = "???";
      if (local_2e4 == 0) {
        pcVar5 = "Add";
      }
      else if (local_2e4 < 2) {
        pcVar5 = "Remove";
      }
      else if (local_2e4 == 2) {
        pcVar5 = "Change";
      }
      if ((local_2e8 != local_10) ||
         (iVar4 = crt_string_c_stricmp_FUN_005fe7f0(local_308,local_98), iVar4 != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_508,"--\t%s\t%s",local_308,local_34);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8b0.base_strlist,local_508);
        pcVar7 = local_308;
        pcVar8 = local_98;
        local_10 = local_2e8;
        do {
          cVar1 = *pcVar7;
          *pcVar8 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar7[1];
          pcVar7 = pcVar7 + 2;
          pcVar8[1] = cVar1;
          pcVar8 = pcVar8 + 2;
        } while (cVar1 != '\0');
      }
      crt_stdio_c_sprintf_FUN_005fdbd0(local_508,"\t%s\t%s",pcVar5,local_2e0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8b0.base_strlist,local_508);
      record_index = record_index + 1;
    } while (record_index < (int)local_14);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(local_508,"Viewing audit history for:\n%s",&stack0xfffff328);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20(&local_8b0,local_508,-1,0)
  ;
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_8b0,0,unaff_EBX,in_stack_fffff324,in_stack_fffff328,in_stack_fffff32c,
             in_stack_fffff330);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff324);
  return;
}
