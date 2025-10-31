// Name: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// Address: 004b76d0
// Address Range: [[004b76d0, 004b7ab5]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager * this_ptr)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be45c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pod_00627e16
//   TerminatedCString s_Select_POD_file_to_extra_00627e1c
//   TerminatedCString s_Can_t_mount_s_00627e37
//   TerminatedCString s_engine_fileio_cpp_00627e46
//   TerminatedCString s_rb_00627e5b
//   TerminatedCString s_Can_t_open_s_00627e5e
//   TerminatedCString s_s_d_00627e6c
//   TerminatedCString s_Select_file_to_extract_00627e72
//   TerminatedCString s_engine_fileio_cpp_00627e89
//   TerminatedCString s_Hell_froze_finding_file__00627e9e
//   TerminatedCString s_A_B_d_Y_I_M_S_p_00627ebe
//   TerminatedCString s_A_B_d_Y_I_M_S_p_00627eda
//   TerminatedCString s_s_already_exists_on_disk_00627ef6
//   TerminatedCString s_Unable_to_extract_file_s_00627f81
//   TerminatedCString s_engine_fileio_cpp_00627f9c
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_strftime_FUN_006002d4
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0(CFileManager *this_ptr)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  FILE *pFVar4;
  char *output_buffer;
  int iVar5;
  tm *ptVar6;
  BADSPACEBASE *in_ESP;
  char *pcVar7;
  char *pcVar8;
  undefined4 *puVar9;
  SFoundFileInfo *pSVar10;
  undefined4 *puVar11;
  byte bVar12;
  FILE *in_stack_00000008;
  undefined4 auStackY_30e0 [2032];
  CFileManager *source_file;
  CPodFile *this_ptr_00;
  CEditorTools *filename;
  char *format_string;
  SFoundFileInfo *info;
  uint in_stack_ffffef08;
  uint in_stack_ffffef0c;
  uint in_stack_ffffef10;
  uint in_stack_ffffef14;
  uint in_stack_ffffef18;
  undefined4 auStack_ff4 [196];
  CPodDirectoryEntry *pCStack_ce4;
  CPodDirectoryEntry *pCStack_ce0;
  char acStack_cd0 [4];
  char acStack_ccc [1016];
  undefined1 auStack_8d4 [8];
  undefined1 auStack_8cc [8];
  undefined1 auStack_8c4 [933];
  char acStack_51f [247];
  undefined1 auStack_428 [252];
  time_t atStack_32c [2];
  undefined4 uStack_324;
  char local_320 [12];
  undefined1 auStack_314 [252];
  char acStack_218 [248];
  char local_120 [8];
  char acStack_118 [4];
  CEditorTools aCStack_114 [4];
  char acStack_110 [4];
  char acStack_10c [252];
  time_t tStack_10;
  char *local_c;
  
  bVar12 = 0;
  bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                    (g_CEditorToolsPtr,"Select POD file to extract",true,local_120);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    return;
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xffffeefc);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xffffef00,acStack_118);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef08);
    return;
  }
  pFVar4 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (&stack0xffffef08,(char *)0x0,"rb","..\\engine\\fileio.cpp",0xa00)
  ;
  if (pFVar4 == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't open %s");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef0c);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_8cc);
  iVar3 = 0;
  if (0 < (int)pCStack_ce4) {
    do {
      crt_stdio_c_sprintf_FUN_005fdbd0(acStack_10c,"%s\t%d");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_8cc,acStack_110);
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)pCStack_ce4);
  }
  output_buffer = (char *)0xffffffff;
  while (format_string = output_buffer, 0 < (int)auStack_8cc._4_4_) {
    if ((int)auStack_8cc._4_4_ <= (int)format_string) {
      format_string =
           (char *)((int)&((CStrList_vtable *)(auStack_8cc._4_4_ + -0x1c))->handleInput + 3);
    }
    output_buffer =
         (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           ((CPickList *)(auStack_8cc + 4),"Select file to extract",
                            (int)format_string,0);
    if ((int)output_buffer < 0) break;
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)auStack_8d4,(int)acStack_118,output_buffer,0);
    filename = aCStack_114;
    this_ptr_00 = (CPodFile *)&stack0xffffef04;
    iVar3 = engine_pod_cpp_CPodFile_findFileIndex_FUN_00550140(this_ptr_00,&filename->field0_0x0);
    if (iVar3 < 0) {
      format_string = "Hell froze finding file in pod!";
      g_CurrentFilename = "..\\engine\\fileio.cpp";
      g_CurrentLineNumber = 0xa20;
      filename = (CEditorTools *)0x4b7a8d;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze finding file in pod!");
    }
    pcVar7 = (char *)((int)(pCStack_ce0 + iVar3) + (uint)bVar12 * -8 + 4);
    local_c = (char *)pCStack_ce0[iVar3].name_or_offset;
    puVar9 = (undefined4 *)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8);
    pcVar8 = pcVar7 + ((uint)bVar12 * -2 + 1) * 4;
    *(undefined4 *)(&stack0xfffffff8 + (uint)bVar12 * -8) = *(undefined4 *)pcVar7;
    *puVar9 = *(undefined4 *)pcVar8;
    puVar9[(uint)bVar12 * -2 + 1] = *(undefined4 *)(pcVar8 + ((uint)bVar12 * -2 + 1) * 4);
    (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
         *(undefined4 *)(pcVar8 + ((uint)bVar12 * -2 + 1) * 4 + ((uint)bVar12 * -2 + 1) * 4);
    info = (SFoundFileInfo *)(auStack_8c4 + 0x3a4);
    pcVar7 = local_c;
    pSVar10 = info;
    do {
      cVar1 = *pcVar7;
      pSVar10->found_path[0] = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar7[1];
      pcVar7 = pcVar7 + 2;
      pSVar10->found_path[1] = cVar1;
      pSVar10 = (SFoundFileInfo *)(pSVar10->found_path + 2);
    } while (cVar1 != '\0');
    iVar3 = 1;
    if (this_ptr->operation_mode != 0) {
      info = (SFoundFileInfo *)(auStack_8c4 + 0x3a4);
      iVar5 = engine_dosio_c_findFileNormally_FUN_004817c0(info);
      if (iVar5 != 0) {
        ptVar6 = crt_time_c_localtime_FUN_00600288(atStack_32c);
        crt_time_c_strftime_FUN_006002d4(local_320,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar6);
        ptVar6 = crt_time_c_localtime_FUN_00600288(&tStack_10);
        crt_time_c_strftime_FUN_006002d4(acStack_218,0x100,"%A, %B, %d, %Y, %I:%M:%S %p",ptVar6);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_cd0,"%s already exists on disk.\n\nWould you like to replace the existing file\n\n%d bytes\nmodified on %s\n\nwith this one?\n\n%d bytes\nmodified on %s\n",auStack_428,uStack_324,
                   auStack_314);
        format_string = acStack_ccc;
        this_ptr_00 = (CPodFile *)0x4b7970;
        filename = g_CEditorToolsPtr;
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,format_string);
      }
    }
    if (iVar3 != 0) {
      puVar11 = (undefined4 *)(&stack0xffffeef8 + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      puVar9 = (undefined4 *)(&stack0xfffffffc + (uint)bVar12 * -8 + (uint)bVar12 * -8);
      *(undefined4 *)(&stack0xffffeef4 + (uint)bVar12 * -8) =
           *(undefined4 *)(&stack0xfffffff8 + (uint)bVar12 * -8);
      source_file = this_ptr;
      pFVar4 = in_stack_00000008;
      pcVar7 = local_c;
      *puVar11 = *puVar9;
      puVar11[(uint)bVar12 * -2 + 1] = puVar9[(uint)bVar12 * -2 + 1];
      (puVar11 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1] =
           (puVar9 + (uint)bVar12 * -2 + 1)[(uint)bVar12 * -2 + 1];
      iVar3 = engine_fileio_cpp_extractFileWithTimestamp_FUN_004b7d50
                        ((FILE *)source_file,(char *)pFVar4,pcVar7,(int)this_ptr_00,(int)filename,
                         (int)format_string,(int)info);
      if (iVar3 == 0) {
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (g_CEditorToolsPtr,"Unable to extract file:\n%s");
      }
      else {
        shape_edittool_cpp_CStrList_removeAt_FUN_004a2de0
                  ((CStrList *)auStack_8cc,(int)output_buffer);
      }
    }
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\engine\\fileio.cpp",0xa4b);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)auStack_8c4,0,in_stack_ffffef08,in_stack_ffffef0c,in_stack_ffffef10,
             in_stack_ffffef14,in_stack_ffffef18);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xffffef14);
  return;
}


// Assembly code:
// 004b76d0: PUSH EDI
//   Label: engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0
// 004b76d1: PUSH EBP
// 004b76d2: SUB ESP,0x1100
// 004b76d8: MOV EBP,dword ptr [ESP + 0x110c]
//   XREF to: Stack[0x4] (READ)
// 004b76df: PUSH 0x0
// 004b76e1: LEA EAX,[ESP + 0xfec]
//   XREF to: Stack[-0x120] (DATA)
// 004b76e8: PUSH EAX
// 004b76e9: PUSH 0x627e16
//   XREF to: 00627e16 (DATA)
// 004b76ee: PUSH 0x627e1c
//   XREF to: 00627e1c (DATA)
// 004b76f3: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b76f9: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b76fa: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004b76ff: ADD ESP,0x14
// 004b7702: TEST EAX,EAX
// 004b7704: JNZ 0x004b770f
//   XREF to: 004b770f (CONDITIONAL_JUMP)
// 004b7706: ADD ESP,0x1100
// 004b770c: POP EBP
// 004b770d: POP EDI
// 004b770e: RET
// 004b770f: MOV EAX,ESP
//   Label: LAB_004b770f
// 004b7711: PUSH EAX
// 004b7712: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b7717: ADD ESP,0x4
// 004b771a: LEA EAX,[ESP + 0xfe8]
//   XREF to: Stack[-0x120] (DATA)
// 004b7721: PUSH EAX
// 004b7722: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1108] (DATA)
// 004b7726: PUSH EAX
// 004b7727: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b772c: ADD ESP,0x8
// 004b772f: TEST EAX,EAX
// 004b7731: JZ 0x004b7a08
//   XREF to: 004b7a08 (CONDITIONAL_JUMP)
// 004b7737: PUSH 0xa00
// 004b773c: PUSH 0x627e46
//   XREF to: 00627e46 (DATA)
// 004b7741: PUSH 0x627e5b
//   XREF to: 00627e5b (DATA)
// 004b7746: PUSH 0x0
// 004b7748: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1104] (DATA)
// 004b774c: PUSH EAX
// 004b774d: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004b7752: ADD ESP,0x14
// 004b7755: MOV dword ptr [ESP + 0x10fc],EAX
//   XREF to: Stack[-0xc] (WRITE)
// 004b775c: TEST EAX,EAX
// 004b775e: JZ 0x004b7a3c
//   XREF to: 004b7a3c (CONDITIONAL_JUMP)
// 004b7764: PUSH ESI
// 004b7765: PUSH EBX
// 004b7766: LEA EAX,[ESP + 0x834]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b776d: PUSH EAX
// 004b776e: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b7773: ADD ESP,0x4
// 004b7776: MOV ESI,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0xcf8] (READ)
// 004b777d: XOR EBX,EBX
// 004b777f: TEST ESI,ESI
// 004b7781: JLE 0x004b77e0
//   XREF to: 004b77e0 (CONDITIONAL_JUMP)
// 004b7783: XOR EDI,EDI
// 004b7785: MOV EAX,dword ptr [ESP + 0x41c]
//   Label: LAB_004b7785
//   XREF to: Stack[-0xcf4] (READ)
// 004b778c: MOV EDX,dword ptr [EDI + EAX*0x1 + 0x4]
// 004b7790: PUSH EDX
// 004b7791: MOV ECX,dword ptr [EDI + EAX*0x1]
// 004b7794: PUSH ECX
// 004b7795: PUSH 0x627e6c
//   XREF to: 00627e6c (DATA)
// 004b779a: LEA EAX,[ESP + 0xffc]
//   XREF to: Stack[-0x120] (DATA)
// 004b77a1: PUSH EAX
// 004b77a2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b77a7: ADD ESP,0x10
// 004b77aa: LEA EAX,[ESP + 0xff0]
//   XREF to: Stack[-0x120] (DATA)
// 004b77b1: PUSH EAX
// 004b77b2: LEA EAX,[ESP + 0x838]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b77b9: PUSH EAX
// 004b77ba: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b77bf: ADD ESP,0x8
// 004b77c2: INC EBX
// 004b77c3: MOV ESI,dword ptr [ESP + 0x418]
//   XREF to: Stack[-0xcf8] (READ)
// 004b77ca: ADD EDI,0x14
// 004b77cd: CMP EBX,ESI
// 004b77cf: JL 0x004b7785
//   XREF to: 004b7785 (CONDITIONAL_JUMP)
// 004b77d1: LEA EAX,[EAX]
// 004b77d7: LEA EDX,[EDX]
// 004b77dd: LEA EAX,[EAX]
// 004b77e0: MOV EDI,dword ptr [ESP + 0x834]
//   Label: LAB_004b77e0
//   XREF to: Stack[-0x8dc] (READ)
// 004b77e7: MOV EBX,0xffffffff
// 004b77ec: TEST EDI,EDI
// 004b77ee: JLE 0x004b79c2
//   XREF to: 004b79c2 (CONDITIONAL_JUMP)
// 004b77f4: MOV EDX,dword ptr [ESP + 0x834]
//   Label: LAB_004b77f4
//   XREF to: Stack[-0x8dc] (READ)
// 004b77fb: CMP EBX,EDX
// 004b77fd: JL 0x004b7802
//   XREF to: 004b7802 (CONDITIONAL_JUMP)
// 004b77ff: LEA EBX,[EDX + -0x1]
// 004b7802: PUSH 0x0
//   Label: LAB_004b7802
// 004b7804: PUSH EBX
// 004b7805: PUSH 0x627e72
//   XREF to: 00627e72 (DATA)
// 004b780a: LEA EAX,[ESP + 0x840]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b7811: PUSH EAX
// 004b7812: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b7817: ADD ESP,0x10
// 004b781a: MOV EBX,EAX
// 004b781c: TEST EAX,EAX
// 004b781e: JL 0x004b79c2
//   XREF to: 004b79c2 (CONDITIONAL_JUMP)
// 004b7824: PUSH 0x0
// 004b7826: PUSH EAX
// 004b7827: LEA EAX,[ESP + 0xff8]
//   XREF to: Stack[-0x120] (DATA)
// 004b782e: PUSH EAX
// 004b782f: LEA EAX,[ESP + 0x840]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b7836: PUSH EAX
// 004b7837: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 004b783c: ADD ESP,0x10
// 004b783f: LEA EAX,[ESP + 0xff0]
//   XREF to: Stack[-0x120] (DATA)
// 004b7846: PUSH EAX
// 004b7847: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1108] (DATA)
// 004b784b: PUSH EAX
// 004b784c: CALL engine_pod.cpp_CPodFile_findFileIndex_FUN_00550140
//   XREF to: 00550140 (UNCONDITIONAL_CALL)
// 004b7851: ADD ESP,0x8
// 004b7854: MOV ESI,EAX
// 004b7856: TEST EAX,EAX
// 004b7858: JL 0x004b7a6d
//   XREF to: 004b7a6d (CONDITIONAL_JUMP)
// 004b785e: IMUL ESI,ESI,0x14
//   Label: LAB_004b785e
// 004b7861: MOV EAX,dword ptr [ESP + 0x41c]
//   XREF to: Stack[-0xcf4] (READ)
// 004b7868: LEA EDI,[ESP + 0x10f0]
//   XREF to: Stack[-0x20] (DATA)
// 004b786f: ADD ESI,EAX
// 004b7871: MOVSD ES:EDI,ESI
// 004b7872: MOVSD ES:EDI,ESI
// 004b7873: MOVSD ES:EDI,ESI
// 004b7874: MOVSD ES:EDI,ESI
// 004b7875: MOVSD ES:EDI,ESI
// 004b7876: MOV ESI,dword ptr [ESP + 0x10f0]
//   XREF to: Stack[-0x20] (READ)
// 004b787d: LEA EDI,[ESP + 0xbdc]
//   XREF to: Stack[-0x534] (DATA)
// 004b7884: PUSH EDI
// 004b7885: MOV AL,byte ptr [ESI]
//   Label: LAB_004b7885
// 004b7887: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x534] (DATA)
// 004b7889: CMP AL,0x0
// 004b788b: JZ 0x004b789d
//   XREF to: 004b789d (CONDITIONAL_JUMP)
// 004b788d: MOV AL,byte ptr [ESI + 0x1]
// 004b7890: ADD ESI,0x2
// 004b7893: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x533] (WRITE)
// 004b7896: ADD EDI,0x2
// 004b7899: CMP AL,0x0
// 004b789b: JNZ 0x004b7885
//   XREF to: 004b7885 (CONDITIONAL_JUMP)
// 004b789d: POP EDI
//   Label: LAB_004b789d
// 004b789e: MOV EDX,dword ptr [EBP + 0x138808]
// 004b78a4: MOV ESI,0x1
// 004b78a9: TEST EDX,EDX
// 004b78ab: JZ 0x004b7975
//   XREF to: 004b7975 (CONDITIONAL_JUMP)
// 004b78b1: LEA EAX,[ESP + 0xbdc]
//   XREF to: Stack[-0x534] (DATA)
// 004b78b8: PUSH EAX
// 004b78b9: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b78be: ADD ESP,0x4
// 004b78c1: TEST EAX,EAX
// 004b78c3: JZ 0x004b7975
//   XREF to: 004b7975 (CONDITIONAL_JUMP)
// 004b78c9: LEA EAX,[ESP + 0xde8]
//   XREF to: Stack[-0x328] (DATA)
// 004b78d0: PUSH EAX
// 004b78d1: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004b78d6: ADD ESP,0x4
// 004b78d9: PUSH EAX
// 004b78da: PUSH 0x627ebe
//   XREF to: 00627ebe (DATA)
// 004b78df: PUSH 0x100
// 004b78e4: LEA EAX,[ESP + 0xdfc]
//   XREF to: Stack[-0x320] (DATA)
// 004b78eb: PUSH EAX
// 004b78ec: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 004b78f1: ADD ESP,0x10
// 004b78f4: LEA EAX,[ESP + 0x10fc]
//   XREF to: Stack[-0x14] (DATA)
// 004b78fb: PUSH EAX
// 004b78fc: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004b7901: ADD ESP,0x4
// 004b7904: PUSH EAX
// 004b7905: PUSH 0x627eda
//   XREF to: 00627eda (DATA)
// 004b790a: PUSH 0x100
// 004b790f: LEA EAX,[ESP + 0xefc]
//   XREF to: Stack[-0x220] (DATA)
// 004b7916: PUSH EAX
// 004b7917: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 004b791c: ADD ESP,0x10
// 004b791f: LEA EAX,[ESP + 0xef0]
//   XREF to: Stack[-0x220] (DATA)
// 004b7926: PUSH EAX
// 004b7927: MOV ECX,dword ptr [ESP + 0x10f8]
//   XREF to: Stack[-0x1c] (READ)
// 004b792e: PUSH ECX
// 004b792f: LEA EAX,[ESP + 0xdf8]
//   XREF to: Stack[-0x320] (DATA)
// 004b7936: PUSH EAX
// 004b7937: MOV ESI,dword ptr [ESP + 0xdec]
//   XREF to: Stack[-0x330] (READ)
// 004b793e: PUSH ESI
// 004b793f: LEA EAX,[ESP + 0xcec]
//   XREF to: Stack[-0x434] (DATA)
// 004b7946: PUSH EAX
// 004b7947: PUSH 0x627ef6
//   XREF to: 00627ef6 (DATA)
// 004b794c: LEA EAX,[ESP + 0x44c]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b7953: PUSH EAX
// 004b7954: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b7959: ADD ESP,0x1c
// 004b795c: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0xcdc] (DATA)
// 004b7963: PUSH EAX
// 004b7964: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b796a: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b796b: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 004b7970: ADD ESP,0x8
// 004b7973: MOV ESI,EAX
// 004b7975: TEST ESI,ESI
//   Label: LAB_004b7975
// 004b7977: JZ 0x004b79b4
//   XREF to: 004b79b4 (CONDITIONAL_JUMP)
// 004b7979: SUB ESP,0x14
// 004b797c: MOV EDI,ESP
// 004b797e: MOV EAX,dword ptr [ESP + 0x1118]
//   XREF to: Stack[-0xc] (READ)
// 004b7985: PUSH EAX
// 004b7986: LEA ESI,[ESP + 0x1108]
//   XREF to: Stack[-0x20] (DATA)
// 004b798d: PUSH EBP
// 004b798e: MOVSD ES:EDI,ESI
// 004b798f: MOVSD ES:EDI,ESI
// 004b7990: MOVSD ES:EDI,ESI
// 004b7991: MOVSD ES:EDI,ESI
// 004b7992: MOVSD ES:EDI,ESI
// 004b7993: CALL engine_fileio.cpp_extractFileWithTimestamp_FUN_004b7d50
//   XREF to: 004b7d50 (UNCONDITIONAL_CALL)
// 004b7998: ADD ESP,0x1c
// 004b799b: TEST EAX,EAX
// 004b799d: JZ 0x004b7a95
//   XREF to: 004b7a95 (CONDITIONAL_JUMP)
// 004b79a3: PUSH EBX
// 004b79a4: LEA EAX,[ESP + 0x838]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b79ab: PUSH EAX
// 004b79ac: CALL shape_edittool.cpp_CStrList_removeAt_FUN_004a2de0
//   XREF to: 004a2de0 (UNCONDITIONAL_CALL)
// 004b79b1: ADD ESP,0x8
// 004b79b4: CMP dword ptr [ESP + 0x834],0x0
//   Label: LAB_004b79b4
//   XREF to: Stack[-0x8dc] (READ)
// 004b79bc: JG 0x004b77f4
//   XREF to: 004b77f4 (CONDITIONAL_JUMP)
// 004b79c2: PUSH 0xa4b
//   Label: LAB_004b79c2
// 004b79c7: PUSH 0x627f9c
//   XREF to: 00627f9c (DATA)
// 004b79cc: MOV EBX,dword ptr [ESP + 0x110c]
//   XREF to: Stack[-0xc] (READ)
// 004b79d3: PUSH EBX
// 004b79d4: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004b79d9: ADD ESP,0xc
// 004b79dc: PUSH 0x0
// 004b79de: LEA EAX,[ESP + 0x838]
//   XREF to: Stack[-0x8dc] (DATA)
// 004b79e5: PUSH EAX
// 004b79e6: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b79eb: ADD ESP,0x8
// 004b79ee: PUSH 0x0
// 004b79f0: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1108] (DATA)
// 004b79f4: PUSH EAX
// 004b79f5: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b79fa: ADD ESP,0x8
// 004b79fd: POP EBX
// 004b79fe: POP ESI
// 004b79ff: ADD ESP,0x1100
// 004b7a05: POP EBP
// 004b7a06: POP EDI
// 004b7a07: RET
// 004b7a08: LEA EAX,[ESP + 0xfe8]
//   Label: LAB_004b7a08
//   XREF to: Stack[-0x120] (DATA)
// 004b7a0f: PUSH EAX
// 004b7a10: PUSH 0x627e37
//   XREF to: 00627e37 (DATA)
// 004b7a15: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b7a1b: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b7a1c: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b7a21: ADD ESP,0xc
// 004b7a24: PUSH 0x0
// 004b7a26: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1108] (DATA)
// 004b7a2a: PUSH EAX
// 004b7a2b: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b7a30: ADD ESP,0x8
// 004b7a33: ADD ESP,0x1100
// 004b7a39: POP EBP
// 004b7a3a: POP EDI
// 004b7a3b: RET
// 004b7a3c: LEA EAX,[ESP + 0x4]
//   Label: LAB_004b7a3c
//   XREF to: Stack[-0x1104] (DATA)
// 004b7a40: PUSH EAX
// 004b7a41: PUSH 0x627e5e
//   XREF to: 00627e5e (DATA)
// 004b7a46: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b7a4c: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 004b7a4d: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b7a52: ADD ESP,0xc
// 004b7a55: PUSH 0x0
// 004b7a57: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1108] (DATA)
// 004b7a5b: PUSH EAX
// 004b7a5c: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b7a61: ADD ESP,0x8
// 004b7a64: ADD ESP,0x1100
// 004b7a6a: POP EBP
// 004b7a6b: POP EDI
// 004b7a6c: RET
// 004b7a6d: MOV ECX,0x627e89
//   Label: LAB_004b7a6d
//   XREF to: 00627e89 (PARAM)
// 004b7a72: MOV EDI,0xa20
// 004b7a77: PUSH 0x627e9e
//   XREF to: 00627e9e (DATA)
// 004b7a7c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004b7a82: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004b7a88: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004b7a8d: ADD ESP,0x4
// 004b7a90: JMP 0x004b785e
//   XREF to: 004b785e (UNCONDITIONAL_JUMP)
// 004b7a95: MOV EDX,dword ptr [ESP + 0x10f0]
//   Label: LAB_004b7a95
//   XREF to: Stack[-0x20] (READ)
// 004b7a9c: PUSH EDX
// 004b7a9d: PUSH 0x627f81
//   XREF to: 00627f81 (DATA)
// 004b7aa2: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 004b7aa8: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b7aa9: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b7aae: ADD ESP,0xc
// 004b7ab1: JMP 0x004b79b4
//   XREF to: 004b79b4 (UNCONDITIONAL_JUMP)
