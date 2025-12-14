// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager * this_ptr, char * pod_file_path)

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_removeAuditRecords_FUN_004bd190
          (CFileManager *this_ptr,char *pod_file_path)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  time_t tVar4;
  CPodAuditRecord *pCVar5;
  int iVar6;
  int unaff_EBX;
  int record_index;
  BADSPACEBASE *in_ESP;
  int unaff_ESI;
  FILE *file;
  uint *puVar7;
  int *piVar8;
  char *pcVar9;
  uint *puVar10;
  CPodAuditRecord *pCVar11;
  char *pcVar12;
  byte bVar13;
  int unaff_retaddr;
  uint in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_fffff634;
  byte auStack_9c4 [1036];
  CPodDirectoryEntry *local_5b8;
  char *local_5ac;
  uint auStack_59c [5];
  uint uStack_588;
  uint auStack_470 [2];
  int aiStack_468 [11];
  char acStack_43c [260];
  uint auStack_338 [3];
  byte auStack_32c [296];
  char local_204 [8];
  char acStack_1fc [12];
  char acStack_1f0 [248];
  char acStack_f8 [4];
  char acStack_f4 [72];
  byte auStack_ac [8];
  byte auStack_a4 [88];
  int iStack_4c;
  byte local_30 [4];
  int local_2c;
  int iStack_28;
  int iStack_24;
  int local_20;
  int local_1c;
  int local_18;
  
  bVar13 = 0;
  if (pod_file_path == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to remove audit records",true,local_204);
    if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar12 = local_204;
    do {
      cVar1 = *pod_file_path;
      *pcVar12 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_file_path[1];
      pod_file_path = pod_file_path + 2;
      pcVar12[1] = cVar1;
      pcVar12 = pcVar12 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff62c);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffff630,acStack_1fc);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff638);
    return;
  }
  if (in_stack_fffff634 != 200) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't remove audit records on POD of this version.");
  }
  if (in_stack_0000001c != 0) {
LAB_004bd3c3:
    iVar3 = 0;
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    record_index = 0;
    if (0 < (int)local_5ac) {
      do {
        engine_pod_cpp_CPodFile_getAuditRecord_FUN_00550590
                  ((CPodFile *)&stack0xfffff638,record_index,auStack_32c);
        puVar7 = auStack_338;
        puVar10 = auStack_59c;
        for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
          *puVar10 = *puVar7;
          puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
          puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
        }
        if (uStack_588 < in_stack_00000010) {
          iVar3 = iVar3 + 1;
        }
        else {
          puVar7 = auStack_338;
          puVar10 = auStack_470;
          for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
            *puVar10 = *puVar7;
            puVar7 = puVar7 + (uint)bVar13 * -2 + 1;
            puVar10 = puVar10 + (uint)bVar13 * -2 + 1;
          }
          g_AuditRecordCount = g_AuditRecordCount + 1;
          g_AuditRecordsArray =
               shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (g_AuditRecordsArray,g_AuditRecordCount * 0x138,
                          "..\\engine\\fileio.cpp",0x7a1);
          if (g_AuditRecordsArray == (CPodAuditRecord *)0x0) {
            g_CurrentFilename = "..\\engine\\fileio.cpp";
            g_CurrentLineNumber = 0x7a2;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for pod audit list.");
          }
          pCVar5 = g_AuditRecordsArray + g_AuditRecordCount + -1;
          piVar8 = aiStack_468;
          pCVar11 = pCVar5;
          for (iVar6 = 0x4e; iVar6 != 0; iVar6 = iVar6 + -1) {
            pCVar11->day = *piVar8;
            piVar8 = piVar8 + (uint)bVar13 * -2 + 1;
            pCVar11 = (CPodAuditRecord *)((int)pCVar11 + (uint)bVar13 * -8 + 4);
          }
          crt_memory_c_memset_FUN_005fde40(pCVar5->filename_path,0,0x100);
          pcVar9 = acStack_43c;
          pcVar12 = g_AuditRecordsArray[g_AuditRecordCount + -1].filename_path;
          do {
            cVar1 = *pcVar9;
            *pcVar12 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar9[1];
            pcVar9 = pcVar9 + 2;
            pcVar12[1] = cVar1;
            pcVar12 = pcVar12 + 2;
          } while (cVar1 != '\0');
        }
        record_index = record_index + 1;
      } while (record_index < (int)local_5ac);
    }
    file = (FILE *)0x0;
    if (iVar3 == 0) {
      shape_edittool_cpp_CEditorTools_showMessage_FUN_0049e6a0
                (g_CEditorToolsPtr,"No audit records removed");
    }
    else {
      file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (auStack_9c4,(char *)0x0,"r+b","..\\engine\\fileio.cpp",0x1170);
      if (file == (FILE *)0x0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Can't open %s to remove audit records");
      }
      else {
        crt_stdio_c_fread_FUN_005fd990(auStack_ac,0x60,1,file);
        iStack_4c = g_AuditRecordCount;
        crt_stdio_c_fseek_FUN_005ffacc(file,0,0);
        crt_stdio_c_fwrite_FUN_005fdc00(auStack_a4,0x60,1,file);
        crt_stdio_c_fseek_FUN_005ffacc(file,(long)local_5b8,0);
        crt_stdio_c_fwrite_FUN_005fdc00(g_AuditRecordsArray,0x138,g_AuditRecordCount,file);
        g_AuditRecordCount = 0;
        if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460
                    (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
          g_AuditRecordsArray = (CPodAuditRecord *)0x0;
        }
        crt_stdio_c_fflush_FUN_00601540(file);
        if ((file->_flag & 0x20) == 0) {
          shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x118b);
          engine_pod_cpp_CPod_computeAndStoreCRC_FUN_00551000((CPod *)g_CDemonPodPtr,acStack_1f0);
          auStack_9c4._0_4_ = 0;
          engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)(auStack_9c4 + 4));
          return;
        }
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Error accessing %s.  The POD may have been corrupted.");
      }
    }
    if (file != (FILE *)0x0) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\engine\\fileio.cpp",0x1169);
    }
    g_AuditRecordCount = 0;
    if (g_AuditRecordsArray != (CPodAuditRecord *)0x0) {
      shape_memdbg_cpp_debugFree_FUN_0050f460
                (g_AuditRecordsArray,"..\\engine\\fileio.cpp",0x79a);
      g_AuditRecordsArray = (CPodAuditRecord *)0x0;
    }
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_9c4);
    return;
  }
  pcVar12 = g_DefaultAuditRecordPath;
  pcVar9 = acStack_f4;
  for (iVar3 = 0x19; iVar3 != 0; iVar3 = iVar3 + -1) {
    *(uint *)pcVar9 = *(uint *)pcVar12;
    pcVar12 = pcVar12 + ((uint)bVar13 * -2 + 1) * 4;
    pcVar9 = pcVar9 + ((uint)bVar13 * -2 + 1) * 4;
  }
  do {
    iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                      (g_CEditorToolsPtr,"Remove audit records earlier than this date (MM/DD/YYYY)",acStack_f4,100,1);
    if (iVar3 == 0) {
      engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff634);
      return;
    }
    iVar3 = crt_stdio_c_sscanf_FUN_0060013c(acStack_f8,"%d %*c %d %*c %d",&stack0xfffffff0);
    if (iVar3 == 3) {
      if (unaff_EBX < 0x32) {
        unaff_EBX = unaff_EBX + 2000;
      }
      else if (unaff_EBX < 100) {
        unaff_EBX = unaff_EBX + 0x76c;
      }
      crt_memory_c_memset_FUN_005fde40(local_30,0,0x24);
      local_1c = unaff_ESI + -1;
      local_18 = unaff_retaddr + -0x76c;
      iStack_24 = 0;
      iStack_28 = 0;
      local_2c = 0;
      local_20 = unaff_EBX;
      tVar4 = crt_time_c_mktime_FUN_00600f80((tm *)&local_2c);
      if (tVar4 != -1) goto LAB_004bd3c3;
    }
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Please enter a valid date");
  } while( true );
}
