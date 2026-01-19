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
  int iVar3;
  tm *time_ptr;
  uint unaff_EBX;
  char *pcVar4;
  int record_index;
  uint *puVar5;
  char *pcVar6;
  char *pcVar7;
  byte bVar8;
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
  
  bVar8 = 0;
  if (pod_filename == (char *)0x0) {
    iVar3 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to view audit trail",0x62813f,local_508);
    if (iVar3 == 0) {
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
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff324);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650((CPodFile *)&stack0xfffff324,local_508)
  ;
  if (iVar3 == 0) {
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
  pcVar4 = g_DefaultAuditPath;
  pcVar6 = local_98;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar6 = *(uint *)pcVar4;
    pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
    pcVar6 = pcVar6 + ((uint)bVar8 * -2 + 1) * 4;
  }
  if (0 < (int)uVar2) {
    do {
      engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
                ((CPodFile *)&stack0xfffff324,record_index,local_1d0);
      puVar5 = local_1d0;
      pcVar4 = local_308;
      for (iVar3 = 0x4e; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(uint *)pcVar4 = *puVar5;
        puVar5 = puVar5 + (uint)bVar8 * -2 + 1;
        pcVar4 = pcVar4 + ((uint)bVar8 * -2 + 1) * 4;
      }
      time_ptr = crt_time_c_localtime_FUN_00600288(&local_2e8);
      crt_time_c_strftime_FUN_006002d4(local_34,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
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
         (iVar3 = crt_string_c_stricmp_FUN_005fe7f0(local_308,local_98), iVar3 != 0)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_508,"--\t%s\t%s",local_308,local_34);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_8b0.base_strlist,local_508);
        pcVar6 = local_308;
        pcVar7 = local_98;
        local_10 = local_2e8;
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
      crt_stdio_c_sprintf_FUN_005fdbd0(local_508,"\t%s\t%s",pcVar4,local_2e0);
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
