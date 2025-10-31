// Name: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// Address: 004b7f50
// Address Range: [[004b7f50, 004b829f]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be4a0 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6b95 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pod_0062813f
//   TerminatedCString s_Select_POD_file_to_view__00628145
//   TerminatedCString s_Can_t_mount_s_to_view_au_00628169
//   TerminatedCString s_s_doesn_t_contain_any_au_00628187
//   TerminatedCString s_Reading_d_audit_records__006281b0
//   TerminatedCString s_m_d_y_I_M_S_p_006281d1
//   TerminatedCString s_anon_006281e6
//   TerminatedCString s_Add_006281ea
//   TerminatedCString s_Remove_006281ee
//   TerminatedCString s_Change_006281f5
//   TerminatedCString s_s_s_006281fc
//   TerminatedCString s_Viewing_audit_history_fo_0062820c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char[100] g_DefaultAuditPath
//   undefined4 DAT_00679ee4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_strftime_FUN_006002d4
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

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
  undefined4 *puVar5;
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
  undefined1 auStack_8a0 [12];
  CPickList CStack_894;
  char acStack_2fc [8];
  char acStack_2f4 [16];
  time_t local_2e4 [2];
  int iStack_2dc;
  uint uStack_2d8;
  undefined4 auStack_1cc [4];
  undefined1 auStack_1bc [304];
  char acStack_8c [4];
  undefined4 uStack_88;
  char acStack_84 [88];
  char acStack_2c [32];
  
  bVar8 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to view audit trail",true,
                       CStack_894.cancel_button.button_text + 0xb0);
    if (CONCAT31(extraout_var,bVar2) == 0) {
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
    *puVar5 = *(undefined4 *)pcVar4;
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
        *(undefined4 *)pcVar4 = *puVar5;
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


// Assembly code:
// 004b7f50: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50
// 004b7f51: PUSH EDI
// 004b7f52: PUSH EBP
// 004b7f53: SUB ESP,0xcd0
// 004b7f59: MOV ESI,dword ptr [ESP + 0xce4]
//   XREF to: Stack[0x8] (READ)
// 004b7f60: TEST ESI,ESI
// 004b7f62: JNZ 0x004b7f94
//   XREF to: 004b7f94 (CONDITIONAL_JUMP)
// 004b7f64: PUSH ESI
// 004b7f65: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x508] (DATA)
// 004b7f6c: PUSH EAX
// 004b7f6d: PUSH 0x62813f
//   XREF to: 0062813f (DATA)
// 004b7f72: PUSH 0x628145
//   XREF to: 00628145 (DATA)
// 004b7f77: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b7f7d: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b7f7e: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004b7f83: ADD ESP,0x14
// 004b7f86: TEST EAX,EAX
// 004b7f88: JNZ 0x004b7fb5
//   XREF to: 004b7fb5 (CONDITIONAL_JUMP)
// 004b7f8a: ADD ESP,0xcd0
// 004b7f90: POP EBP
// 004b7f91: POP EDI
// 004b7f92: POP ESI
// 004b7f93: RET
// 004b7f94: LEA EDI,[ESP + 0x7d4]
//   Label: LAB_004b7f94
//   XREF to: Stack[-0x508] (DATA)
// 004b7f9b: PUSH EDI
// 004b7f9c: MOV AL,byte ptr [ESI]
//   Label: LAB_004b7f9c
// 004b7f9e: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x508] (DATA)
// 004b7fa0: CMP AL,0x0
// 004b7fa2: JZ 0x004b7fb4
//   XREF to: 004b7fb4 (CONDITIONAL_JUMP)
// 004b7fa4: MOV AL,byte ptr [ESI + 0x1]
// 004b7fa7: ADD ESI,0x2
// 004b7faa: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x507] (WRITE)
// 004b7fad: ADD EDI,0x2
// 004b7fb0: CMP AL,0x0
// 004b7fb2: JNZ 0x004b7f9c
//   XREF to: 004b7f9c (CONDITIONAL_JUMP)
// 004b7fb4: POP EDI
//   Label: LAB_004b7fb4
// 004b7fb5: MOV EAX,ESP
//   Label: LAB_004b7fb5
// 004b7fb7: PUSH EAX
// 004b7fb8: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b7fbd: ADD ESP,0x4
// 004b7fc0: LEA EAX,[ESP + 0x7d4]
//   XREF to: Stack[-0x508] (DATA)
// 004b7fc7: PUSH EAX
// 004b7fc8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b7fcc: PUSH EAX
// 004b7fcd: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b7fd2: ADD ESP,0x8
// 004b7fd5: TEST EAX,EAX
// 004b7fd7: JZ 0x004b81f1
//   XREF to: 004b81f1 (CONDITIONAL_JUMP)
// 004b7fdd: MOV EAX,dword ptr [ESP + 0x41c]
//   XREF to: Stack[-0x8c0] (READ)
// 004b7fe4: MOV dword ptr [ESP + 0xcc8],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004b7feb: CMP EAX,0x1
// 004b7fee: JL 0x004b8226
//   XREF to: 004b8226 (CONDITIONAL_JUMP)
// 004b7ff4: PUSH EBX
// 004b7ff5: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x508] (DATA)
// 004b7ffc: PUSH EAX
// 004b7ffd: MOV ESI,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x8c0] (READ)
// 004b8004: PUSH ESI
// 004b8005: PUSH 0x6281b0
//   XREF to: 006281b0 (DATA)
// 004b800a: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b8010: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b8011: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004b8016: ADD ESP,0x10
// 004b8019: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x8b0] (DATA)
// 004b8020: XOR EBP,EBP
// 004b8022: PUSH EAX
// 004b8023: MOV ESI,0x679ee0
//   XREF to: 00679ee0 (DATA)
// 004b8028: LEA EDI,[ESP + 0xc4c]
//   XREF to: Stack[-0x98] (DATA)
// 004b802f: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b8034: ADD ESP,0x4
// 004b8037: MOV ECX,0x19
// 004b803c: MOV EAX,dword ptr [ESP + 0xccc]
//   XREF to: Stack[-0x14] (READ)
// 004b8043: MOV dword ptr [ESP + 0xcd0],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 004b804a: MOVSD.REP ES:EDI,ESI
//   XREF to: 00679ee0 (READ)
//   XREF to: 00679ee4 (READ)
// 004b804c: TEST EAX,EAX
// 004b804e: JLE 0x004b818f
//   XREF to: 004b818f (CONDITIONAL_JUMP)
// 004b8054: PUSH EBP
//   Label: LAB_004b8054
// 004b8055: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b8059: PUSH EAX
// 004b805a: LEA ESI,[ESP + 0xb18]
//   XREF to: Stack[-0x1d0] (DATA)
// 004b8061: LEA EDI,[ESP + 0x9e0]
//   XREF to: Stack[-0x308] (DATA)
// 004b8068: CALL engine_pod.cpp_CPodFile_getAuditRecord_FUN_00550590
//   XREF to: 00550590 (UNCONDITIONAL_CALL)
// 004b806d: MOV ECX,0x4e
// 004b8072: ADD ESP,0x8
// 004b8075: LEA EAX,[ESP + 0x9f8]
//   XREF to: Stack[-0x2e8] (DATA)
// 004b807c: LEA ESI,[ESP + 0xb10]
//   XREF to: Stack[-0x1d0] (DATA)
// 004b8083: PUSH EAX
// 004b8084: MOVSD.REP ES:EDI,ESI
// 004b8086: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004b808b: ADD ESP,0x4
// 004b808e: PUSH EAX
// 004b808f: PUSH 0x6281d1
//   XREF to: 006281d1 (DATA)
// 004b8094: PUSH 0x1e
// 004b8096: LEA EAX,[ESP + 0xcb8]
//   XREF to: Stack[-0x34] (DATA)
// 004b809d: PUSH EAX
// 004b809e: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 004b80a3: ADD ESP,0x10
// 004b80a6: MOV ESI,dword ptr [ESP + 0x9fc]
//   XREF to: Stack[-0x2e4] (READ)
// 004b80ad: MOV EBX,0x6281e6
//   XREF to: 006281e6 (DATA)
// 004b80b2: CMP ESI,0x1
// 004b80b5: JNC 0x004b826f
//   XREF to: 004b826f (CONDITIONAL_JUMP)
// 004b80bb: TEST ESI,ESI
// 004b80bd: JNZ 0x004b80c4
//   XREF to: 004b80c4 (CONDITIONAL_JUMP)
// 004b80bf: MOV EBX,0x6281ea
//   XREF to: 006281ea (PARAM)
// 004b80c4: MOV EAX,dword ptr [ESP + 0x9f8]
//   Label: LAB_004b80c4
//   XREF to: Stack[-0x2e8] (READ)
// 004b80cb: CMP EAX,dword ptr [ESP + 0xcd0]
//   XREF to: Stack[-0x10] (READ)
// 004b80d2: JZ 0x004b827b
//   XREF to: 004b827b (CONDITIONAL_JUMP)
// 004b80d8: LEA EAX,[ESP + 0xcac]
//   Label: LAB_004b80d8
//   XREF to: Stack[-0x34] (DATA)
// 004b80df: PUSH EAX
// 004b80e0: LEA EAX,[ESP + 0x9dc]
//   XREF to: Stack[-0x308] (DATA)
// 004b80e7: PUSH EAX
// 004b80e8: PUSH 0x6281fc
//   XREF to: 006281fc (DATA)
// 004b80ed: LEA EAX,[ESP + 0x7e4]
//   XREF to: Stack[-0x508] (DATA)
// 004b80f4: PUSH EAX
// 004b80f5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b80fa: ADD ESP,0x10
// 004b80fd: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x508] (DATA)
// 004b8104: PUSH EAX
// 004b8105: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8b0] (DATA)
// 004b810c: PUSH EAX
// 004b810d: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b8112: ADD ESP,0x8
// 004b8115: LEA ESI,[ESP + 0x9d8]
//   XREF to: Stack[-0x308] (DATA)
// 004b811c: MOV EAX,dword ptr [ESP + 0x9f8]
//   XREF to: Stack[-0x2e8] (READ)
// 004b8123: LEA EDI,[ESP + 0xc48]
//   XREF to: Stack[-0x98] (DATA)
// 004b812a: MOV dword ptr [ESP + 0xcd0],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004b8131: PUSH EDI
// 004b8132: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8132
//   XREF to: Stack[-0x308] (DATA)
// 004b8134: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x98] (DATA)
// 004b8136: CMP AL,0x0
// 004b8138: JZ 0x004b814a
//   XREF to: 004b814a (CONDITIONAL_JUMP)
// 004b813a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x307] (READ)
// 004b813d: ADD ESI,0x2
// 004b8140: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x97] (WRITE)
// 004b8143: ADD EDI,0x2
// 004b8146: CMP AL,0x0
// 004b8148: JNZ 0x004b8132
//   XREF to: 004b8132 (CONDITIONAL_JUMP)
// 004b814a: POP EDI
//   Label: LAB_004b814a
// 004b814b: LEA EAX,[ESP + 0xa00]
//   Label: LAB_004b814b
//   XREF to: Stack[-0x2e0] (DATA)
// 004b8152: PUSH EAX
// 004b8153: PUSH EBX
//   XREF to: 006281ea (DATA)
// 004b8154: PUSH 0x628205
//   XREF to: 00628205 (DATA)
// 004b8159: LEA EAX,[ESP + 0x7e4]
//   XREF to: Stack[-0x508] (DATA)
// 004b8160: PUSH EAX
// 004b8161: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8166: ADD ESP,0x10
// 004b8169: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x508] (DATA)
// 004b8170: PUSH EAX
// 004b8171: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8b0] (DATA)
// 004b8178: PUSH EAX
// 004b8179: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b817e: ADD ESP,0x8
// 004b8181: INC EBP
// 004b8182: CMP EBP,dword ptr [ESP + 0xccc]
//   XREF to: Stack[-0x14] (READ)
// 004b8189: JL 0x004b8054
//   XREF to: 004b8054 (CONDITIONAL_JUMP)
// 004b818f: LEA EAX,[ESP + 0x8]
//   Label: LAB_004b818f
//   XREF to: Stack[-0xcd8] (DATA)
// 004b8193: PUSH EAX
// 004b8194: PUSH 0x62820c
//   XREF to: 0062820c (DATA)
// 004b8199: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x508] (DATA)
// 004b81a0: PUSH EAX
// 004b81a1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b81a6: ADD ESP,0xc
// 004b81a9: PUSH 0x0
// 004b81ab: PUSH -0x1
// 004b81ad: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x508] (DATA)
// 004b81b4: PUSH EAX
// 004b81b5: LEA EAX,[ESP + 0x43c]
//   XREF to: Stack[-0x8b0] (DATA)
// 004b81bc: PUSH EAX
// 004b81bd: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b81c2: ADD ESP,0x10
// 004b81c5: PUSH 0x0
// 004b81c7: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8b0] (DATA)
// 004b81ce: PUSH EAX
// 004b81cf: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b81d4: ADD ESP,0x8
// 004b81d7: PUSH 0x0
// 004b81d9: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b81dd: PUSH EAX
// 004b81de: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b81e3: ADD ESP,0x8
// 004b81e6: POP EBX
// 004b81e7: ADD ESP,0xcd0
// 004b81ed: POP EBP
// 004b81ee: POP EDI
// 004b81ef: POP ESI
// 004b81f0: RET
// 004b81f1: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004b81f1
//   XREF to: Stack[-0x508] (DATA)
// 004b81f8: PUSH EAX
// 004b81f9: PUSH 0x628169
//   XREF to: 00628169 (DATA)
// 004b81fe: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b8204: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b8205: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b820a: ADD ESP,0xc
// 004b820d: PUSH 0x0
// 004b820f: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b8213: PUSH EAX
// 004b8214: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b8219: ADD ESP,0x8
// 004b821c: ADD ESP,0xcd0
// 004b8222: POP EBP
// 004b8223: POP EDI
// 004b8224: POP ESI
// 004b8225: RET
// 004b8226: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004b8226
//   XREF to: Stack[-0x508] (DATA)
// 004b822d: PUSH EAX
// 004b822e: PUSH 0x628187
//   XREF to: 00628187 (DATA)
// 004b8233: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b8239: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b823a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b823f: ADD ESP,0xc
// 004b8242: PUSH 0x0
// 004b8244: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b8248: PUSH EAX
// 004b8249: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b824e: ADD ESP,0x8
// 004b8251: ADD ESP,0xcd0
// 004b8257: POP EBP
// 004b8258: POP EDI
// 004b8259: POP ESI
// 004b825a: RET
// 004b825b: MOV EBX,0x6281ee
//   Label: LAB_004b825b
//   XREF to: 006281ee (DATA)
// 004b8260: JMP 0x004b80c4
//   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)
// 004b8265: MOV EBX,0x6281f5
//   Label: LAB_004b8265
//   XREF to: 006281f5 (DATA)
// 004b826a: JMP 0x004b80c4
//   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)
// 004b826f: JBE 0x004b825b
//   Label: LAB_004b826f
//   XREF to: 004b825b (CONDITIONAL_JUMP)
// 004b8271: CMP ESI,0x2
// 004b8274: JZ 0x004b8265
//   XREF to: 004b8265 (CONDITIONAL_JUMP)
// 004b8276: JMP 0x004b80c4
//   XREF to: 004b80c4 (UNCONDITIONAL_JUMP)
// 004b827b: LEA EAX,[ESP + 0xc48]
//   Label: LAB_004b827b
//   XREF to: Stack[-0x98] (DATA)
// 004b8282: PUSH EAX
// 004b8283: LEA EAX,[ESP + 0x9dc]
//   XREF to: Stack[-0x308] (DATA)
// 004b828a: PUSH EAX
// 004b828b: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 004b8290: ADD ESP,0x8
// 004b8293: TEST EAX,EAX
// 004b8295: JNZ 0x004b80d8
//   XREF to: 004b80d8 (CONDITIONAL_JUMP)
// 004b829b: JMP 0x004b814b
//   XREF to: 004b814b (UNCONDITIONAL_JUMP)
