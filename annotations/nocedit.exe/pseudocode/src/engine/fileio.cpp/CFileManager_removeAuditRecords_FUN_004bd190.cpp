// Name: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// Address: 004bd190
// Address Range: [[004bd190, 004bd70b]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190(CFileManager * this_ptr, char * pod_file_path)
// Globals:
//   TerminatedCString s_engine_fileio_cpp_006276ab
//   TerminatedCString s_engine_fileio_cpp_006276c0
//   TerminatedCString s_engine_fileio_cpp_006276d5
//   TerminatedCString s_Out_of_memory_for_pod_au_006276ea
//   TerminatedCString s_pod_006293c5
//   TerminatedCString s_Select_POD_file_to_remov_006293cb
//   TerminatedCString s_Can_t_mount_s_006293f3
//   TerminatedCString s_Can_t_remove_audit_recor_00629403
//   TerminatedCString s_Remove_audit_records_ear_00629436
//   TerminatedCString s_d_c_d_c_d_0062946f
//   TerminatedCString s_Please_enter_a_valid_dat_00629480
//   TerminatedCString s_No_audit_records_removed_0062949a
//   TerminatedCString s_engine_fileio_cpp_006294b3
//   TerminatedCString s_engine_fileio_cpp_006294c8
//   TerminatedCString s_r_b_006294dd
//   TerminatedCString s_Can_t_open_s_to_remove_a_006294e1
//   TerminatedCString s_Error_accessing_s_The_PO_00629507
//   TerminatedCString s_engine_fileio_cpp_0062953d
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[100] g_DefaultAuditRecordPath
//   undefined4 s__0067a264
//   CDemonPod* g_CDemonPodPtr = 030e5090
//   CEditorTools g_CEditorToolsPtr
//   int g_AuditRecordCount
//   CPodAuditRecord* g_AuditRecordsArray
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   CDemonPod g_CDemonPodInstance
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_memory.c_memset_FUN_005fde40
//   crt_stdio.c_fflush_FUN_00601540
//   crt_stdio.c_fread_FUN_005fd990
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_fwrite_FUN_005fdc00
//   crt_stdio.c_sscanf_FUN_0060013c
//   crt_time.c_mktime_FUN_00600f80
//   engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

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
  undefined4 *puVar7;
  int *piVar8;
  char *pcVar9;
  undefined4 *puVar10;
  CPodAuditRecord *pCVar11;
  char *pcVar12;
  byte bVar13;
  int unaff_retaddr;
  uint in_stack_00000010;
  int in_stack_0000001c;
  int in_stack_fffff634;
  undefined1 auStack_9c4 [1036];
  CPodDirectoryEntry *local_5b8;
  char *local_5ac;
  undefined4 auStack_59c [5];
  uint uStack_588;
  undefined4 auStack_470 [2];
  int aiStack_468 [11];
  char acStack_43c [260];
  undefined4 auStack_338 [3];
  undefined1 auStack_32c [296];
  char local_204 [8];
  char acStack_1fc [12];
  char acStack_1f0 [248];
  char acStack_f8 [4];
  char acStack_f4 [72];
  undefined1 auStack_ac [8];
  undefined1 auStack_a4 [88];
  int iStack_4c;
  undefined1 local_30 [4];
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
    if (CONCAT31(extraout_var,bVar2) == 0) {
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
               (CPodAuditRecord *)
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
    *(undefined4 *)pcVar9 = *(undefined4 *)pcVar12;
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


// Assembly code:
// 004bd190: PUSH EBX
//   Label: engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190
// 004bd191: PUSH ESI
// 004bd192: PUSH EDI
// 004bd193: PUSH EBP
// 004bd194: SUB ESP,0x9c8
// 004bd19a: MOV ESI,dword ptr [ESP + 0x9e0]
//   XREF to: Stack[0x8] (READ)
// 004bd1a1: TEST ESI,ESI
// 004bd1a3: JNZ 0x004bd1d6
//   XREF to: 004bd1d6 (CONDITIONAL_JUMP)
// 004bd1a5: PUSH ESI
// 004bd1a6: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x204] (DATA)
// 004bd1ad: PUSH EAX
// 004bd1ae: PUSH 0x6293c5
//   XREF to: 006293c5 (DATA)
// 004bd1b3: PUSH 0x6293cb
//   XREF to: 006293cb (DATA)
// 004bd1b8: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd1be: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004bd1bf: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004bd1c4: ADD ESP,0x14
// 004bd1c7: TEST EAX,EAX
// 004bd1c9: JNZ 0x004bd1f7
//   XREF to: 004bd1f7 (CONDITIONAL_JUMP)
// 004bd1cb: ADD ESP,0x9c8
// 004bd1d1: POP EBP
// 004bd1d2: POP EDI
// 004bd1d3: POP ESI
// 004bd1d4: POP EBX
// 004bd1d5: RET
// 004bd1d6: LEA EDI,[ESP + 0x7d4]
//   Label: LAB_004bd1d6
//   XREF to: Stack[-0x204] (DATA)
// 004bd1dd: PUSH EDI
// 004bd1de: MOV AL,byte ptr [ESI]
//   Label: LAB_004bd1de
// 004bd1e0: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x204] (DATA)
// 004bd1e2: CMP AL,0x0
// 004bd1e4: JZ 0x004bd1f6
//   XREF to: 004bd1f6 (CONDITIONAL_JUMP)
// 004bd1e6: MOV AL,byte ptr [ESI + 0x1]
// 004bd1e9: ADD ESI,0x2
// 004bd1ec: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x203] (WRITE)
// 004bd1ef: ADD EDI,0x2
// 004bd1f2: CMP AL,0x0
// 004bd1f4: JNZ 0x004bd1de
//   XREF to: 004bd1de (CONDITIONAL_JUMP)
// 004bd1f6: POP EDI
//   Label: LAB_004bd1f6
// 004bd1f7: MOV EAX,ESP
//   Label: LAB_004bd1f7
// 004bd1f9: PUSH EAX
// 004bd1fa: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004bd1ff: ADD ESP,0x4
// 004bd202: LEA EAX,[ESP + 0x7d4]
//   XREF to: Stack[-0x204] (DATA)
// 004bd209: PUSH EAX
// 004bd20a: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd20e: PUSH EAX
// 004bd20f: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004bd214: ADD ESP,0x8
// 004bd217: TEST EAX,EAX
// 004bd219: JZ 0x004bd2d7
//   XREF to: 004bd2d7 (CONDITIONAL_JUMP)
// 004bd21f: CMP dword ptr [ESP],0xc8
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd226: JZ 0x004bd23c
//   XREF to: 004bd23c (CONDITIONAL_JUMP)
// 004bd228: PUSH 0x629403
//   XREF to: 00629403 (DATA)
// 004bd22d: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd233: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 004bd234: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bd239: ADD ESP,0x8
// 004bd23c: CMP dword ptr [ESP + 0x9e4],0x0
//   Label: LAB_004bd23c
//   XREF to: Stack[0xc] (READ)
// 004bd244: JNZ 0x004bd3c3
//   XREF to: 004bd3c3 (CONDITIONAL_JUMP)
// 004bd24a: MOV ECX,0x19
// 004bd24f: LEA EDI,[ESP + 0x8d4]
//   XREF to: Stack[-0x104] (DATA)
// 004bd256: MOV ESI,0x67a260
//   XREF to: 0067a260 (DATA)
// 004bd25b: MOVSD.REP ES:EDI,ESI
//   XREF to: 0067a260 (READ)
//   XREF to: 0067a264 (READ)
// 004bd25d: MOV EDI,0xffffffff
// 004bd262: MOV ESI,0x64
// 004bd267: XOR EBX,EBX
// 004bd269: PUSH 0x1
//   Label: LAB_004bd269
// 004bd26b: PUSH ESI
// 004bd26c: LEA EAX,[ESP + 0x8dc]
//   XREF to: Stack[-0x104] (DATA)
// 004bd273: PUSH EAX
// 004bd274: PUSH 0x629436
//   XREF to: 00629436 (DATA)
// 004bd279: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd27f: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004bd280: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 004bd285: ADD ESP,0x14
// 004bd288: TEST EAX,EAX
// 004bd28a: JZ 0x004bd30d
//   XREF to: 004bd30d (CONDITIONAL_JUMP)
// 004bd290: LEA EAX,[ESP + 0x9c4]
//   XREF to: Stack[-0x14] (DATA)
// 004bd297: PUSH EAX
// 004bd298: LEA EAX,[ESP + 0x9c4]
//   XREF to: Stack[-0x18] (DATA)
// 004bd29f: PUSH EAX
// 004bd2a0: LEA EAX,[ESP + 0x9c4]
//   XREF to: Stack[-0x1c] (DATA)
// 004bd2a7: PUSH EAX
// 004bd2a8: PUSH 0x62946f
//   XREF to: 0062946f (DATA)
// 004bd2ad: LEA EAX,[ESP + 0x8e4]
//   XREF to: Stack[-0x104] (DATA)
// 004bd2b4: PUSH EAX
// 004bd2b5: CALL crt_stdio.c_sscanf_FUN_0060013c
//   XREF to: 0060013c (UNCONDITIONAL_CALL)
// 004bd2ba: ADD ESP,0x14
// 004bd2bd: CMP EAX,0x3
// 004bd2c0: JZ 0x004bd326
//   XREF to: 004bd326 (CONDITIONAL_JUMP)
// 004bd2c2: PUSH 0x629480
//   Label: LAB_004bd2c2
//   XREF to: 00629480 (DATA)
// 004bd2c7: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd2cc: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 004bd2cd: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bd2d2: ADD ESP,0x8
// 004bd2d5: JMP 0x004bd269
//   XREF to: 004bd269 (UNCONDITIONAL_JUMP)
// 004bd2d7: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004bd2d7
//   XREF to: Stack[-0x204] (DATA)
// 004bd2de: PUSH EAX
// 004bd2df: PUSH 0x6293f3
//   XREF to: 006293f3 (DATA)
// 004bd2e4: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd2ea: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004bd2eb: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bd2f0: ADD ESP,0xc
// 004bd2f3: PUSH 0x0
// 004bd2f5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd2f9: PUSH EAX
// 004bd2fa: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bd2ff: ADD ESP,0x8
// 004bd302: ADD ESP,0x9c8
// 004bd308: POP EBP
// 004bd309: POP EDI
// 004bd30a: POP ESI
// 004bd30b: POP EBX
// 004bd30c: RET
// 004bd30d: PUSH EAX
//   Label: LAB_004bd30d
// 004bd30e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd312: PUSH EAX
// 004bd313: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bd318: ADD ESP,0x8
// 004bd31b: ADD ESP,0x9c8
// 004bd321: POP EBP
// 004bd322: POP EDI
// 004bd323: POP ESI
// 004bd324: POP EBX
// 004bd325: RET
// 004bd326: MOV EAX,dword ptr [ESP + 0x9c4]
//   Label: LAB_004bd326
//   XREF to: Stack[-0x14] (READ)
// 004bd32d: CMP EAX,0x32
// 004bd330: JGE 0x004bd4ea
//   XREF to: 004bd4ea (CONDITIONAL_JUMP)
// 004bd336: LEA EBP,[EAX + 0x7d0]
// 004bd33c: MOV dword ptr [ESP + 0x9c4],EBP
//   XREF to: Stack[-0x14] (WRITE)
// 004bd343: PUSH 0x24
//   Label: LAB_004bd343
// 004bd345: PUSH EBX
// 004bd346: LEA EAX,[ESP + 0x9a0]
//   XREF to: Stack[-0x40] (DATA)
// 004bd34d: PUSH EAX
// 004bd34e: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004bd353: ADD ESP,0xc
// 004bd356: MOV EAX,dword ptr [ESP + 0x9c0]
//   XREF to: Stack[-0x18] (READ)
// 004bd35d: MOV dword ptr [ESP + 0x9a4],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004bd364: MOV EAX,dword ptr [ESP + 0x9bc]
//   XREF to: Stack[-0x1c] (READ)
// 004bd36b: ADD EAX,EDI
// 004bd36d: MOV dword ptr [ESP + 0x9a8],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004bd374: MOV EAX,dword ptr [ESP + 0x9c4]
//   XREF to: Stack[-0x14] (READ)
// 004bd37b: SUB EAX,0x76c
// 004bd380: MOV dword ptr [ESP + 0x9a0],EBX
//   XREF to: Stack[-0x38] (WRITE)
// 004bd387: MOV dword ptr [ESP + 0x9ac],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004bd38e: LEA EAX,[ESP + 0x998]
//   XREF to: Stack[-0x40] (DATA)
// 004bd395: MOV dword ptr [ESP + 0x9b8],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 004bd39c: PUSH EAX
// 004bd39d: MOV dword ptr [ESP + 0x9a0],EBX
//   XREF to: Stack[-0x3c] (WRITE)
// 004bd3a4: MOV dword ptr [ESP + 0x99c],EBX
//   XREF to: Stack[-0x40] (WRITE)
// 004bd3ab: CALL crt_time.c_mktime_FUN_00600f80
//   XREF to: 00600f80 (UNCONDITIONAL_CALL)
// 004bd3b0: ADD ESP,0x4
// 004bd3b3: MOV dword ptr [ESP + 0x9e4],EAX
//   XREF to: Stack[0xc] (WRITE)
// 004bd3ba: CMP EAX,-0x1
// 004bd3bd: JZ 0x004bd2c2
//   XREF to: 004bd2c2 (CONDITIONAL_JUMP)
// 004bd3c3: XOR EBP,EBP
//   Label: LAB_004bd3c3
// 004bd3c5: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd3cb: MOV dword ptr [0x02d12d30],EBP
//   XREF to: 02d12d30 (WRITE)
// 004bd3d1: TEST ECX,ECX
// 004bd3d3: JZ 0x004bd3ee
//   XREF to: 004bd3ee (CONDITIONAL_JUMP)
// 004bd3d5: PUSH 0x79a
// 004bd3da: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004bd3df: PUSH ECX
// 004bd3e0: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004bd3e5: ADD ESP,0xc
// 004bd3e8: MOV dword ptr [0x02d12d34],EBP
//   XREF to: 02d12d34 (WRITE)
// 004bd3ee: MOV EDI,dword ptr [ESP + 0x41c]
//   Label: LAB_004bd3ee
//   XREF to: Stack[-0x5bc] (READ)
// 004bd3f5: XOR EBX,EBX
// 004bd3f7: TEST EDI,EDI
// 004bd3f9: JLE 0x004bd446
//   XREF to: 004bd446 (CONDITIONAL_JUMP)
// 004bd3fb: PUSH EBX
//   Label: LAB_004bd3fb
// 004bd3fc: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd400: PUSH EAX
// 004bd401: LEA ESI,[ESP + 0x6a4]
//   XREF to: Stack[-0x33c] (DATA)
// 004bd408: LEA EDI,[ESP + 0x434]
//   XREF to: Stack[-0x5ac] (DATA)
// 004bd40f: CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   XREF to: 00550590 (UNCONDITIONAL_CALL)
// 004bd414: MOV ECX,0x4e
// 004bd419: LEA ESI,[ESP + 0x6a4]
//   XREF to: Stack[-0x33c] (DATA)
// 004bd420: ADD ESP,0x8
// 004bd423: MOVSD.REP ES:EDI,ESI
// 004bd425: MOV EAX,dword ptr [ESP + 0x44c]
//   XREF to: Stack[-0x58c] (READ)
// 004bd42c: CMP EAX,dword ptr [ESP + 0x9e4]
//   XREF to: Stack[0xc] (READ)
// 004bd433: JNC 0x004bd504
//   XREF to: 004bd504 (CONDITIONAL_JUMP)
// 004bd439: INC EBP
// 004bd43a: MOV EAX,dword ptr [ESP + 0x41c]
//   Label: LAB_004bd43a
//   XREF to: Stack[-0x5bc] (READ)
// 004bd441: INC EBX
// 004bd442: CMP EBX,EAX
// 004bd444: JL 0x004bd3fb
//   XREF to: 004bd3fb (CONDITIONAL_JUMP)
// 004bd446: XOR ESI,ESI
//   Label: LAB_004bd446
// 004bd448: TEST EBP,EBP
// 004bd44a: JZ 0x004bd5e6
//   XREF to: 004bd5e6 (CONDITIONAL_JUMP)
// 004bd450: PUSH 0x1170
// 004bd455: PUSH 0x6294c8
//   XREF to: 006294c8 (DATA)
// 004bd45a: PUSH 0x6294dd
//   XREF to: 006294dd (DATA)
// 004bd45f: PUSH ESI
// 004bd460: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x9d4] (DATA)
// 004bd464: PUSH EAX
// 004bd465: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004bd46a: MOV EBX,EAX
// 004bd46c: ADD ESP,0x14
// 004bd46f: MOV ESI,EAX
// 004bd471: TEST EAX,EAX
// 004bd473: JNZ 0x004bd5fc
//   XREF to: 004bd5fc (CONDITIONAL_JUMP)
// 004bd479: PUSH 0x6294e1
//   XREF to: 006294e1 (DATA)
// 004bd47e: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd484: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004bd485: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bd48a: ADD ESP,0x8
//   Label: LAB_004bd48a
// 004bd48d: TEST ESI,ESI
//   Label: LAB_004bd48d
// 004bd48f: JZ 0x004bd4a4
//   XREF to: 004bd4a4 (CONDITIONAL_JUMP)
// 004bd491: PUSH 0x1169
// 004bd496: PUSH 0x6294b3
//   XREF to: 006294b3 (DATA)
// 004bd49b: PUSH ESI
// 004bd49c: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bd4a1: ADD ESP,0xc
// 004bd4a4: XOR EAX,EAX
//   Label: LAB_004bd4a4
// 004bd4a6: MOV EDX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd4ac: MOV [0x02d12d30],EAX
//   XREF to: 02d12d30 (WRITE)
// 004bd4b1: TEST EDX,EDX
// 004bd4b3: JZ 0x004bd4d0
//   XREF to: 004bd4d0 (CONDITIONAL_JUMP)
// 004bd4b5: PUSH 0x79a
// 004bd4ba: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004bd4bf: PUSH EDX
// 004bd4c0: XOR EBX,EBX
// 004bd4c2: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004bd4c7: ADD ESP,0xc
// 004bd4ca: MOV dword ptr [0x02d12d34],EBX
//   XREF to: 02d12d34 (WRITE)
// 004bd4d0: PUSH 0x0
//   Label: LAB_004bd4d0
// 004bd4d2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd4d6: PUSH EAX
// 004bd4d7: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bd4dc: ADD ESP,0x8
// 004bd4df: ADD ESP,0x9c8
// 004bd4e5: POP EBP
// 004bd4e6: POP EDI
// 004bd4e7: POP ESI
// 004bd4e8: POP EBX
// 004bd4e9: RET
// 004bd4ea: CMP ESI,EAX
//   Label: LAB_004bd4ea
// 004bd4ec: JLE 0x004bd343
//   XREF to: 004bd343 (CONDITIONAL_JUMP)
// 004bd4f2: LEA ECX,[EAX + 0x76c]
// 004bd4f8: MOV dword ptr [ESP + 0x9c4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004bd4ff: JMP 0x004bd343
//   XREF to: 004bd343 (UNCONDITIONAL_JUMP)
// 004bd504: MOV ECX,0x4e
//   Label: LAB_004bd504
// 004bd509: LEA EDI,[ESP + 0x564]
//   XREF to: Stack[-0x474] (DATA)
// 004bd510: LEA ESI,[ESP + 0x69c]
//   XREF to: Stack[-0x33c] (DATA)
// 004bd517: MOVSD.REP ES:EDI,ESI
// 004bd519: MOV EDI,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004bd51f: INC EDI
// 004bd520: MOV dword ptr [0x02d12d30],EDI
//   XREF to: 02d12d30 (WRITE)
// 004bd526: IMUL EAX,EDI,0x138
// 004bd52c: PUSH 0x7a1
// 004bd531: PUSH 0x6276c0
//   XREF to: 006276c0 (DATA)
// 004bd536: PUSH EAX
// 004bd537: MOV ECX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd53d: PUSH ECX
// 004bd53e: CALL shape_memdbg.cpp_debugRealloc_FUN_0050f540
//   XREF to: 0050f540 (UNCONDITIONAL_CALL)
// 004bd543: ADD ESP,0x10
// 004bd546: MOV [0x02d12d34],EAX
//   XREF to: 02d12d34 (WRITE)
// 004bd54b: TEST EAX,EAX
// 004bd54d: JNZ 0x004bd572
//   XREF to: 004bd572 (CONDITIONAL_JUMP)
// 004bd54f: MOV ESI,0x6276d5
//   XREF to: 006276d5 (DATA)
// 004bd554: MOV EDI,0x7a2
// 004bd559: PUSH 0x6276ea
//   XREF to: 006276ea (DATA)
// 004bd55e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004bd564: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004bd56a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004bd56f: ADD ESP,0x4
// 004bd572: MOV EAX,[0x02d12d30]
//   Label: LAB_004bd572
//   XREF to: 02d12d30 (READ)
// 004bd577: DEC EAX
// 004bd578: IMUL EAX,EAX,0x138
// 004bd57e: PUSH 0x100
// 004bd583: MOV ESI,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd589: MOV ECX,0x4e
// 004bd58e: ADD EAX,ESI
// 004bd590: PUSH 0x0
// 004bd592: MOV EDI,EAX
// 004bd594: ADD EAX,0x28
// 004bd597: LEA ESI,[ESP + 0x56c]
//   XREF to: Stack[-0x474] (DATA)
// 004bd59e: PUSH EAX
// 004bd59f: MOVSD.REP ES:EDI,ESI
// 004bd5a1: CALL crt_memory.c_memset_FUN_005fde40
//   XREF to: 005fde40 (UNCONDITIONAL_CALL)
// 004bd5a6: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004bd5ab: DEC EAX
// 004bd5ac: IMUL EAX,EAX,0x138
// 004bd5b2: MOV ESI,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd5b8: ADD ESP,0xc
// 004bd5bb: ADD EAX,ESI
// 004bd5bd: LEA ESI,[ESP + 0x58c]
//   XREF to: Stack[-0x44c] (DATA)
// 004bd5c4: LEA EDI,[EAX + 0x28]
// 004bd5c7: PUSH EDI
// 004bd5c8: MOV AL,byte ptr [ESI]
//   Label: LAB_004bd5c8
//   XREF to: Stack[-0x44c] (DATA)
// 004bd5ca: MOV byte ptr [EDI],AL
// 004bd5cc: CMP AL,0x0
// 004bd5ce: JZ 0x004bd5e0
//   XREF to: 004bd5e0 (CONDITIONAL_JUMP)
// 004bd5d0: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x44b] (READ)
// 004bd5d3: ADD ESI,0x2
// 004bd5d6: MOV byte ptr [EDI + 0x1],AL
// 004bd5d9: ADD EDI,0x2
// 004bd5dc: CMP AL,0x0
// 004bd5de: JNZ 0x004bd5c8
//   XREF to: 004bd5c8 (CONDITIONAL_JUMP)
// 004bd5e0: POP EDI
//   Label: LAB_004bd5e0
// 004bd5e1: JMP 0x004bd43a
//   XREF to: 004bd43a (UNCONDITIONAL_JUMP)
// 004bd5e6: PUSH 0x62949a
//   Label: LAB_004bd5e6
//   XREF to: 0062949a (DATA)
// 004bd5eb: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd5f1: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 004bd5f2: CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
//   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
// 004bd5f7: JMP 0x004bd48a
//   XREF to: 004bd48a (UNCONDITIONAL_JUMP)
// 004bd5fc: PUSH EAX
//   Label: LAB_004bd5fc
// 004bd5fd: PUSH 0x1
// 004bd5ff: PUSH 0x60
// 004bd601: LEA EAX,[ESP + 0x944]
//   XREF to: Stack[-0xa0] (DATA)
// 004bd608: PUSH EAX
// 004bd609: CALL crt_stdio.c_fread_FUN_005fd990
//   XREF to: 005fd990 (UNCONDITIONAL_CALL)
// 004bd60e: ADD ESP,0x10
// 004bd611: PUSH 0x0
// 004bd613: PUSH 0x0
// 004bd615: MOV EAX,[0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004bd61a: PUSH EBX
// 004bd61b: MOV dword ptr [ESP + 0x9a0],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004bd622: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004bd627: ADD ESP,0xc
// 004bd62a: PUSH EBX
// 004bd62b: PUSH 0x1
// 004bd62d: PUSH 0x60
// 004bd62f: LEA EAX,[ESP + 0x944]
//   XREF to: Stack[-0xa0] (DATA)
// 004bd636: PUSH EAX
// 004bd637: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004bd63c: ADD ESP,0x10
// 004bd63f: PUSH 0x0
// 004bd641: MOV EDX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x5b8] (READ)
// 004bd648: PUSH EDX
// 004bd649: PUSH EBX
// 004bd64a: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 004bd64f: ADD ESP,0xc
// 004bd652: PUSH EBX
// 004bd653: MOV ECX,dword ptr [0x02d12d30]
//   XREF to: 02d12d30 (READ)
// 004bd659: PUSH ECX
// 004bd65a: PUSH 0x138
// 004bd65f: MOV EBX,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd665: PUSH EBX
// 004bd666: XOR EDI,EDI
// 004bd668: CALL crt_stdio.c_fwrite_FUN_005fdc00
//   XREF to: 005fdc00 (UNCONDITIONAL_CALL)
// 004bd66d: MOV EBP,dword ptr [0x02d12d34]
//   XREF to: 02d12d34 (READ)
// 004bd673: ADD ESP,0x10
// 004bd676: MOV dword ptr [0x02d12d30],EDI
//   XREF to: 02d12d30 (WRITE)
// 004bd67c: TEST EBP,EBP
// 004bd67e: JZ 0x004bd699
//   XREF to: 004bd699 (CONDITIONAL_JUMP)
// 004bd680: PUSH 0x79a
// 004bd685: PUSH 0x6276ab
//   XREF to: 006276ab (DATA)
// 004bd68a: PUSH EBP
// 004bd68b: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 004bd690: ADD ESP,0xc
// 004bd693: MOV dword ptr [0x02d12d34],EDI
//   XREF to: 02d12d34 (WRITE)
// 004bd699: PUSH ESI
//   Label: LAB_004bd699
// 004bd69a: CALL crt_stdio.c_fflush_FUN_00601540
//   XREF to: 00601540 (UNCONDITIONAL_CALL)
// 004bd69f: MOV AH,byte ptr [ESI + 0xc]
// 004bd6a2: ADD ESP,0x4
// 004bd6a5: TEST AH,0x20
// 004bd6a8: JZ 0x004bd6c8
//   XREF to: 004bd6c8 (CONDITIONAL_JUMP)
// 004bd6aa: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d4] (DATA)
// 004bd6ae: PUSH EAX
// 004bd6af: PUSH 0x629507
//   XREF to: 00629507 (DATA)
// 004bd6b4: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004bd6ba: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 004bd6bb: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004bd6c0: ADD ESP,0xc
// 004bd6c3: JMP 0x004bd48d
//   XREF to: 004bd48d (UNCONDITIONAL_JUMP)
// 004bd6c8: PUSH 0x118b
//   Label: LAB_004bd6c8
// 004bd6cd: PUSH 0x62953d
//   XREF to: 0062953d (DATA)
// 004bd6d2: PUSH ESI
// 004bd6d3: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004bd6d8: ADD ESP,0xc
// 004bd6db: LEA EAX,[ESP + 0x7d4]
//   XREF to: Stack[-0x204] (DATA)
// 004bd6e2: PUSH EAX
// 004bd6e3: MOV ECX,dword ptr [0x00680cdc]
//   XREF to: 00680cdc (READ)
// 004bd6e9: PUSH ECX
//   XREF to: 030e5090 (DATA)
// 004bd6ea: CALL engine_pod.cpp_CPod_computeAndStoreCRC_FUN_00551000
//   XREF to: 00551000 (UNCONDITIONAL_CALL)
// 004bd6ef: ADD ESP,0x8
// 004bd6f2: PUSH 0x0
// 004bd6f4: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x9d8] (DATA)
// 004bd6f8: PUSH EAX
// 004bd6f9: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004bd6fe: ADD ESP,0x8
// 004bd701: ADD ESP,0x9c8
// 004bd707: POP EBP
// 004bd708: POP EDI
// 004bd709: POP ESI
// 004bd70a: POP EBX
// 004bd70b: RET
