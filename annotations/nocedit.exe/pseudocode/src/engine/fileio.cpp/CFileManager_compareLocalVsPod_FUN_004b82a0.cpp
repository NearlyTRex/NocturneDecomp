// Name: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// Address: 004b82a0
// Address Range: [[004b82a0, 004b8689]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be491 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_checkInPodFile_FUN_004baf00 (004baf00) at 004bb34f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_managePodFiles_FUN_004b86b0 (004b86b0) at 004b97ef [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pod_0062822a
//   TerminatedCString s_Select_POD_file_to_compa_00628230
//   TerminatedCString s_Can_t_mount_s_to_compare_0062825c
//   TerminatedCString s_s_No_local_file_00628277
//   TerminatedCString s_s_Local_file_is_newer_00628288
//   TerminatedCString s_s_Local_file_is_older_0062829f
//   TerminatedCString s_s_Local_file_has_differe_006282b6
//   TerminatedCString s_s_same_006282d7
//   TerminatedCString s_Comparing_files_in_s_006282df
//   TerminatedCString s_anon_006282f7
//   TerminatedCString s_d_files_in_sync_with_loc_00628310
//   TerminatedCString s_d_files_in_pod_don_t_exi_00628333
//   TerminatedCString s_d_files_with_local_file__00628358
//   TerminatedCString s_d_files_with_local_file__00628389
//   TerminatedCString s_d_sizeMismatch_006283ba
//   TerminatedCString s_anon_006283cb
//   TerminatedCString s_d_total_files_in_pod_006283e4
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_dosio.c_findFileNormally_FUN_004817c0
//   engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80

#include "nocturne.h"

void __cdecl
engine_fileio_cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  int iVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  char *pcVar7;
  SFoundFileInfo *pSVar8;
  int in_stack_0000000c;
  uint in_stack_ffffee20;
  uint in_stack_ffffee24;
  uint in_stack_ffffee28;
  uint in_stack_ffffee2c;
  uint in_stack_ffffee30;
  undefined1 local_a04 [12];
  undefined1 auStack_9f8 [1036];
  char *pcStack_5ec;
  uint uStack_5e8;
  CPodDirectoryEntry *pCStack_5e4;
  undefined1 auStack_5d0 [28];
  undefined1 auStack_5b4 [912];
  SFoundFileInfo SStack_224;
  int local_10;
  int iVar9;
  
  pcVar7 = &stack0xffffedf8;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to compare with local files",true,&stack0xffffedf8);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    do {
      cVar1 = *pod_filename;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)local_a04);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)(local_a04 + 4),&stack0xffffee00);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to compare!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)auStack_9f8);
    return;
  }
  iVar5 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_5d0);
  iVar6 = 0;
  iVar9 = 0;
  local_10 = 0;
  iVar3 = 0;
  if (0 < (int)uStack_5e8) {
    do {
      pSVar8 = &SStack_224;
      pcVar7 = *(char **)((int)&pCStack_5e4->name_or_offset + iVar5);
      do {
        cVar1 = *pcVar7;
        pSVar8->found_path[0] = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pSVar8->found_path[1] = cVar1;
        pSVar8 = (SFoundFileInfo *)(pSVar8->found_path + 2);
      } while (cVar1 != '\0');
      iVar4 = engine_dosio_c_findFileNormally_FUN_004817c0(&SStack_224);
      if (iVar4 == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tNo local file");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        local_10 = local_10 + 1;
      }
      else if (*(int *)(pcStack_5ec + iVar5 + 0xc) + 2U < SStack_224.file_size) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file is newer");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        iVar3 = iVar3 + 1;
      }
      else if (SStack_224.file_size < *(int *)(pcStack_5ec + iVar5 + 0xc) - 2U) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file is older");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
      }
      else if (SStack_224.target_path._252_4_ == *(int *)(pcStack_5ec + iVar5 + 4)) {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tsame");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
        iVar9 = iVar9 + 1;
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee00,"%s\tLocal file has different size");
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_5d0,&stack0xffffee04);
      }
      iVar6 = iVar6 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar6 < (int)uStack_5e8);
  }
  iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee08,"Comparing files in:\n%s\n");
  iVar6 = crt_stdio_c_sprintf_FUN_005fdbd0(&stack0xffffee0c + iVar5,"-----------------------\n");
  pcVar7 = &stack0xffffee0c + iVar5 + iVar6;
  if (0 < (int)this_ptr) {
    iVar5 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files in sync with local files\n");
    pcVar7 = pcVar7 + iVar5;
  }
  if (0 < iVar9) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files in pod don't exist locally\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < in_stack_0000000c) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files with local file newer than file in pod\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < (int)this_ptr) {
    iVar9 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d files with local file older than file in pod\n");
    pcVar7 = pcVar7 + iVar9;
  }
  if (0 < iVar3) {
    iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"%d sizeMismatch\n");
    pcVar7 = pcVar7 + iVar3;
  }
  iVar3 = crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7,"-----------------------\n");
  crt_stdio_c_sprintf_FUN_005fdbd0(pcVar7 + iVar3,"%d total files in pod");
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)(auStack_5d0 + 0x18),1);
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_5b4,&stack0xffffee20,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_5b4 + 4),0,in_stack_ffffee20,in_stack_ffffee24,in_stack_ffffee28,
             in_stack_ffffee2c,in_stack_ffffee30);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)(auStack_9f8 + 0x20));
  return;
}


// Assembly code:
// 004b82a0: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0
// 004b82a1: PUSH EDI
// 004b82a2: PUSH EBP
// 004b82a3: SUB ESP,0x11fc
// 004b82a9: MOV ESI,dword ptr [ESP + 0x1210]
//   XREF to: Stack[0x8] (READ)
// 004b82b0: TEST ESI,ESI
// 004b82b2: JNZ 0x004b82e1
//   XREF to: 004b82e1 (CONDITIONAL_JUMP)
// 004b82b4: PUSH ESI
// 004b82b5: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b82b9: PUSH EAX
// 004b82ba: PUSH 0x62822a
//   XREF to: 0062822a (DATA)
// 004b82bf: PUSH 0x628230
//   XREF to: 00628230 (DATA)
// 004b82c4: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b82ca: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b82cb: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004b82d0: ADD ESP,0x14
// 004b82d3: TEST EAX,EAX
// 004b82d5: JNZ 0x004b82fd
//   XREF to: 004b82fd (CONDITIONAL_JUMP)
// 004b82d7: ADD ESP,0x11fc
// 004b82dd: POP EBP
// 004b82de: POP EDI
// 004b82df: POP ESI
// 004b82e0: RET
// 004b82e1: MOV EDI,ESP
//   Label: LAB_004b82e1
// 004b82e3: PUSH EDI
// 004b82e4: MOV AL,byte ptr [ESI]
//   Label: LAB_004b82e4
// 004b82e6: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x1208] (DATA)
// 004b82e8: CMP AL,0x0
// 004b82ea: JZ 0x004b82fc
//   XREF to: 004b82fc (CONDITIONAL_JUMP)
// 004b82ec: MOV AL,byte ptr [ESI + 0x1]
// 004b82ef: ADD ESI,0x2
// 004b82f2: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x1207] (WRITE)
// 004b82f5: ADD EDI,0x2
// 004b82f8: CMP AL,0x0
// 004b82fa: JNZ 0x004b82e4
//   XREF to: 004b82e4 (CONDITIONAL_JUMP)
// 004b82fc: POP EDI
//   Label: LAB_004b82fc
// 004b82fd: LEA EAX,[ESP + 0x800]
//   Label: LAB_004b82fd
//   XREF to: Stack[-0xa08] (DATA)
// 004b8304: PUSH EAX
// 004b8305: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b830a: ADD ESP,0x4
// 004b830d: MOV EAX,ESP
// 004b830f: PUSH EAX
// 004b8310: LEA EAX,[ESP + 0x804]
//   XREF to: Stack[-0xa08] (DATA)
// 004b8317: PUSH EAX
// 004b8318: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b831d: ADD ESP,0x8
// 004b8320: TEST EAX,EAX
// 004b8322: JZ 0x004b8555
//   XREF to: 004b8555 (CONDITIONAL_JUMP)
// 004b8328: PUSH EBX
// 004b8329: LEA EAX,[ESP + 0xc30]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b8330: PUSH EAX
// 004b8331: XOR EBX,EBX
// 004b8333: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b8338: ADD ESP,0x4
// 004b833b: XOR EBP,EBP
// 004b833d: MOV EDX,dword ptr [ESP + 0xc14]
//   XREF to: Stack[-0x5f8] (READ)
// 004b8344: MOV dword ptr [ESP + 0x11f8],EBX
//   XREF to: Stack[-0x14] (WRITE)
// 004b834b: MOV dword ptr [ESP + 0x11ec],EBX
//   XREF to: Stack[-0x20] (WRITE)
// 004b8352: MOV dword ptr [ESP + 0x11fc],EBX
//   XREF to: Stack[-0x10] (WRITE)
// 004b8359: MOV dword ptr [ESP + 0x11f4],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004b8360: MOV dword ptr [ESP + 0x11f0],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 004b8367: TEST EDX,EDX
// 004b8369: JLE 0x004b8419
//   XREF to: 004b8419 (CONDITIONAL_JUMP)
// 004b836f: MOV ESI,dword ptr [ESP + 0xc18]
//   Label: LAB_004b836f
//   XREF to: Stack[-0x5f4] (READ)
// 004b8376: LEA EDI,[ESP + 0xfd8]
//   XREF to: Stack[-0x234] (DATA)
// 004b837d: MOV ESI,dword ptr [ESI + EBX*0x1]
// 004b8380: PUSH EDI
// 004b8381: MOV AL,byte ptr [ESI]
//   Label: LAB_004b8381
// 004b8383: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x234] (DATA)
// 004b8385: CMP AL,0x0
// 004b8387: JZ 0x004b8399
//   XREF to: 004b8399 (CONDITIONAL_JUMP)
// 004b8389: MOV AL,byte ptr [ESI + 0x1]
// 004b838c: ADD ESI,0x2
// 004b838f: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x233] (WRITE)
// 004b8392: ADD EDI,0x2
// 004b8395: CMP AL,0x0
// 004b8397: JNZ 0x004b8381
//   XREF to: 004b8381 (CONDITIONAL_JUMP)
// 004b8399: POP EDI
//   Label: LAB_004b8399
// 004b839a: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x234] (DATA)
// 004b83a1: PUSH EAX
// 004b83a2: CALL engine_dosio.c_findFileNormally_FUN_004817c0
//   XREF to: 004817c0 (UNCONDITIONAL_CALL)
// 004b83a7: ADD ESP,0x4
// 004b83aa: TEST EAX,EAX
// 004b83ac: JZ 0x004b8588
//   XREF to: 004b8588 (CONDITIONAL_JUMP)
// 004b83b2: MOV EDX,dword ptr [ESP + 0xc18]
//   XREF to: Stack[-0x5f4] (READ)
// 004b83b9: ADD EDX,EBX
// 004b83bb: MOV EAX,dword ptr [EDX + 0xc]
// 004b83be: MOV ESI,dword ptr [ESP + 0x11e4]
//   XREF to: Stack[-0x28] (READ)
// 004b83c5: ADD EAX,0x2
// 004b83c8: CMP EAX,ESI
// 004b83ca: JNC 0x004b85c3
//   XREF to: 004b85c3 (CONDITIONAL_JUMP)
// 004b83d0: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x234] (DATA)
// 004b83d7: PUSH EAX
// 004b83d8: PUSH 0x628288
//   XREF to: 00628288 (DATA)
// 004b83dd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b83e1: PUSH EAX
// 004b83e2: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b83e7: ADD ESP,0xc
// 004b83ea: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b83ee: PUSH EAX
// 004b83ef: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b83f6: PUSH EAX
// 004b83f7: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b83fc: ADD ESP,0x8
// 004b83ff: INC dword ptr [ESP + 0x11fc]
//   XREF to: Stack[-0x10] (READ_WRITE)
// 004b8406: MOV ECX,dword ptr [ESP + 0xc14]
//   Label: LAB_004b8406
//   XREF to: Stack[-0x5f8] (READ)
// 004b840d: INC EBP
// 004b840e: ADD EBX,0x14
// 004b8411: CMP EBP,ECX
// 004b8413: JL 0x004b836f
//   XREF to: 004b836f (CONDITIONAL_JUMP)
// 004b8419: LEA EAX,[ESP + 0x808]
//   Label: LAB_004b8419
//   XREF to: Stack[-0xa04] (DATA)
// 004b8420: PUSH EAX
// 004b8421: PUSH 0x6282df
//   XREF to: 006282df (DATA)
// 004b8426: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b842a: PUSH EAX
// 004b842b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8430: ADD ESP,0xc
// 004b8433: LEA EBX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8437: PUSH 0x6282f7
//   XREF to: 006282f7 (DATA)
// 004b843c: ADD EBX,EAX
// 004b843e: PUSH EBX
// 004b843f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8444: ADD ESP,0x8
// 004b8447: MOV ESI,dword ptr [ESP + 0x11f8]
//   XREF to: Stack[-0x14] (READ)
// 004b844e: ADD EBX,EAX
// 004b8450: TEST ESI,ESI
// 004b8452: JLE 0x004b8465
//   XREF to: 004b8465 (CONDITIONAL_JUMP)
// 004b8454: PUSH ESI
// 004b8455: PUSH 0x628310
//   XREF to: 00628310 (DATA)
// 004b845a: PUSH EBX
// 004b845b: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8460: ADD ESP,0xc
// 004b8463: ADD EBX,EAX
// 004b8465: MOV EBP,dword ptr [ESP + 0x11ec]
//   Label: LAB_004b8465
//   XREF to: Stack[-0x20] (READ)
// 004b846c: TEST EBP,EBP
// 004b846e: JLE 0x004b8481
//   XREF to: 004b8481 (CONDITIONAL_JUMP)
// 004b8470: PUSH EBP
// 004b8471: PUSH 0x628333
//   XREF to: 00628333 (DATA)
// 004b8476: PUSH EBX
// 004b8477: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b847c: ADD ESP,0xc
// 004b847f: ADD EBX,EAX
// 004b8481: MOV EDX,dword ptr [ESP + 0x11fc]
//   Label: LAB_004b8481
//   XREF to: Stack[-0x10] (READ)
// 004b8488: TEST EDX,EDX
// 004b848a: JLE 0x004b849d
//   XREF to: 004b849d (CONDITIONAL_JUMP)
// 004b848c: PUSH EDX
// 004b848d: PUSH 0x628358
//   XREF to: 00628358 (DATA)
// 004b8492: PUSH EBX
// 004b8493: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8498: ADD ESP,0xc
// 004b849b: ADD EBX,EAX
// 004b849d: MOV ESI,dword ptr [ESP + 0x11f4]
//   Label: LAB_004b849d
//   XREF to: Stack[-0x18] (READ)
// 004b84a4: TEST ESI,ESI
// 004b84a6: JLE 0x004b84b9
//   XREF to: 004b84b9 (CONDITIONAL_JUMP)
// 004b84a8: PUSH ESI
// 004b84a9: PUSH 0x628389
//   XREF to: 00628389 (DATA)
// 004b84ae: PUSH EBX
// 004b84af: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b84b4: ADD ESP,0xc
// 004b84b7: ADD EBX,EAX
// 004b84b9: MOV EBP,dword ptr [ESP + 0x11f0]
//   Label: LAB_004b84b9
//   XREF to: Stack[-0x1c] (READ)
// 004b84c0: TEST EBP,EBP
// 004b84c2: JLE 0x004b84d5
//   XREF to: 004b84d5 (CONDITIONAL_JUMP)
// 004b84c4: PUSH EBP
// 004b84c5: PUSH 0x6283ba
//   XREF to: 006283ba (DATA)
// 004b84ca: PUSH EBX
// 004b84cb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b84d0: ADD ESP,0xc
// 004b84d3: ADD EBX,EAX
// 004b84d5: PUSH 0x6283cb
//   Label: LAB_004b84d5
//   XREF to: 006283cb (DATA)
// 004b84da: PUSH EBX
// 004b84db: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b84e0: ADD ESP,0x8
// 004b84e3: MOV EDX,dword ptr [ESP + 0xc14]
//   XREF to: Stack[-0x5f8] (READ)
// 004b84ea: PUSH EDX
// 004b84eb: PUSH 0x6283e4
//   XREF to: 006283e4 (DATA)
// 004b84f0: ADD EBX,EAX
// 004b84f2: PUSH EBX
// 004b84f3: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b84f8: ADD ESP,0xc
// 004b84fb: PUSH 0x1
// 004b84fd: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b8504: PUSH EAX
// 004b8505: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 004b850a: ADD ESP,0x8
// 004b850d: PUSH 0x0
// 004b850f: PUSH -0x1
// 004b8511: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8515: PUSH EAX
// 004b8516: LEA EAX,[ESP + 0xc3c]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b851d: PUSH EAX
// 004b851e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b8523: ADD ESP,0x10
// 004b8526: PUSH 0x0
// 004b8528: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b852f: PUSH EAX
// 004b8530: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b8535: ADD ESP,0x8
// 004b8538: PUSH 0x0
// 004b853a: LEA EAX,[ESP + 0x808]
//   XREF to: Stack[-0xa08] (DATA)
// 004b8541: PUSH EAX
// 004b8542: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b8547: ADD ESP,0x8
// 004b854a: POP EBX
// 004b854b: ADD ESP,0x11fc
// 004b8551: POP EBP
// 004b8552: POP EDI
// 004b8553: POP ESI
// 004b8554: RET
// 004b8555: MOV EAX,ESP
//   Label: LAB_004b8555
// 004b8557: PUSH EAX
// 004b8558: PUSH 0x62825c
//   XREF to: 0062825c (DATA)
// 004b855d: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b8563: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b8564: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b8569: ADD ESP,0xc
// 004b856c: PUSH 0x0
// 004b856e: LEA EAX,[ESP + 0x804]
//   XREF to: Stack[-0xa08] (DATA)
// 004b8575: PUSH EAX
// 004b8576: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b857b: ADD ESP,0x8
// 004b857e: ADD ESP,0x11fc
// 004b8584: POP EBP
// 004b8585: POP EDI
// 004b8586: POP ESI
// 004b8587: RET
// 004b8588: LEA EAX,[ESP + 0xfd8]
//   Label: LAB_004b8588
//   XREF to: Stack[-0x234] (DATA)
// 004b858f: PUSH EAX
// 004b8590: PUSH 0x628277
//   XREF to: 00628277 (DATA)
// 004b8595: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8599: PUSH EAX
// 004b859a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b859f: ADD ESP,0xc
// 004b85a2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b85a6: PUSH EAX
// 004b85a7: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b85ae: PUSH EAX
// 004b85af: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b85b4: ADD ESP,0x8
// 004b85b7: INC dword ptr [ESP + 0x11ec]
//   XREF to: Stack[-0x20] (READ_WRITE)
// 004b85be: JMP 0x004b8406
//   XREF to: 004b8406 (UNCONDITIONAL_JUMP)
// 004b85c3: MOV EAX,dword ptr [EDX + 0xc]
//   Label: LAB_004b85c3
// 004b85c6: SUB EAX,0x2
// 004b85c9: CMP EAX,ESI
// 004b85cb: JA 0x004b8614
//   XREF to: 004b8614 (CONDITIONAL_JUMP)
// 004b85cd: MOV EAX,dword ptr [ESP + 0x11dc]
//   XREF to: Stack[-0x30] (READ)
// 004b85d4: CMP EAX,dword ptr [EDX + 0x4]
// 004b85d7: JZ 0x004b864f
//   XREF to: 004b864f (CONDITIONAL_JUMP)
// 004b85d9: LEA EAX,[ESP + 0xfd8]
//   XREF to: Stack[-0x234] (DATA)
// 004b85e0: PUSH EAX
// 004b85e1: PUSH 0x6282b6
//   XREF to: 006282b6 (DATA)
// 004b85e6: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b85ea: PUSH EAX
// 004b85eb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b85f0: ADD ESP,0xc
// 004b85f3: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b85f7: PUSH EAX
// 004b85f8: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b85ff: PUSH EAX
// 004b8600: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b8605: ADD ESP,0x8
// 004b8608: INC dword ptr [ESP + 0x11f0]
//   XREF to: Stack[-0x1c] (READ_WRITE)
// 004b860f: JMP 0x004b8406
//   XREF to: 004b8406 (UNCONDITIONAL_JUMP)
// 004b8614: LEA EAX,[ESP + 0xfd8]
//   Label: LAB_004b8614
//   XREF to: Stack[-0x234] (DATA)
// 004b861b: PUSH EAX
// 004b861c: PUSH 0x62829f
//   XREF to: 0062829f (DATA)
// 004b8621: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8625: PUSH EAX
// 004b8626: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b862b: ADD ESP,0xc
// 004b862e: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8632: PUSH EAX
// 004b8633: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b863a: PUSH EAX
// 004b863b: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b8640: ADD ESP,0x8
// 004b8643: INC dword ptr [ESP + 0x11f4]
//   XREF to: Stack[-0x18] (READ_WRITE)
// 004b864a: JMP 0x004b8406
//   XREF to: 004b8406 (UNCONDITIONAL_JUMP)
// 004b864f: LEA EAX,[ESP + 0xfd8]
//   Label: LAB_004b864f
//   XREF to: Stack[-0x234] (DATA)
// 004b8656: PUSH EAX
// 004b8657: PUSH 0x6282d7
//   XREF to: 006282d7 (DATA)
// 004b865c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1208] (DATA)
// 004b8660: PUSH EAX
// 004b8661: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b8666: ADD ESP,0xc
// 004b8669: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x1208] (DATA)
// 004b866d: PUSH EAX
// 004b866e: LEA EAX,[ESP + 0xc34]
//   XREF to: Stack[-0x5dc] (DATA)
// 004b8675: PUSH EAX
// 004b8676: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b867b: ADD ESP,0x8
// 004b867e: INC dword ptr [ESP + 0x11f8]
//   XREF to: Stack[-0x14] (READ_WRITE)
// 004b8685: JMP 0x004b8406
//   XREF to: 004b8406 (UNCONDITIONAL_JUMP)
