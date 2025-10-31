// Name: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// Address: 004b7460
// Address Range: [[004b7460, 004b76c3]]
// Convention: __cdecl
// Signature: void engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460(CFileManager * this_ptr, char * pod_filename)
// Cross-references:
//   core_fileman.cpp_CDemonFileManager_showEditorMenu_FUN_004be270 (004be270) at 004be446 [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_rebuildLastPod_FUN_004b5a50 (004b5a50) at 004b6b30 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_pod_00627d97
//   TerminatedCString s_Select_POD_file_to_catal_00627d9d
//   TerminatedCString s_Can_t_mount_s_to_catalog_00627db8
//   TerminatedCString s_m_d_y_I_M_S_p_00627dd9
//   TerminatedCString s_s_s_s_d_s_00627dee
//   TerminatedCString s_Contents_of_pod_file_s_00627dfd
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strupr_FUN_00600770
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_strftime_FUN_006002d4
//   engine_dosio.c_splitPath_FUN_00481f20
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
engine_fileio_cpp_CFileManager_catalogPodFile_FUN_004b7460
          (CFileManager *this_ptr,char *pod_filename)

{
  char cVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  tm *time_ptr;
  uint uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  char *pcVar6;
  byte bVar7;
  uint in_stack_fffff318;
  uint in_stack_fffff31c;
  uint in_stack_fffff320;
  uint in_stack_fffff324;
  uint in_stack_fffff328;
  uint local_8ec;
  CPodDirectoryEntry *pCStack_8e4;
  CPodDirectoryEntry *pCStack_8dc;
  char *pcStack_8d8;
  undefined1 auStack_8c8 [12];
  undefined1 auStack_8bc [912];
  char local_52c [8];
  char acStack_524 [4];
  char acStack_520 [4];
  char acStack_51c [4];
  char acStack_518 [4];
  char acStack_514 [488];
  char local_32c [4];
  char cStack_328;
  undefined1 auStack_327 [3];
  undefined1 auStack_324 [248];
  char local_22c [8];
  undefined1 auStack_224 [248];
  char local_12c [8];
  undefined1 auStack_124 [244];
  char acStack_30 [12];
  undefined1 auStack_24 [24];
  
  bVar7 = 0;
  if (pod_filename == (char *)0x0) {
    bVar2 = shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
                      (g_CEditorToolsPtr,"Select POD file to catalog",true,local_52c);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      return;
    }
  }
  else {
    pcVar6 = local_52c;
    do {
      cVar1 = *pod_filename;
      *pcVar6 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pod_filename[1];
      pod_filename = pod_filename + 2;
      pcVar6[1] = cVar1;
      pcVar6 = pcVar6 + 2;
    } while (cVar1 != '\0');
  }
  engine_pod_cpp_CPodFile_ctor_FUN_0054f5a0((CPodFile *)&stack0xfffff304);
  iVar3 = engine_pod_cpp_CPodFile_mountFromFile_FUN_0054f650
                    ((CPodFile *)&stack0xfffff308,acStack_524);
  if (iVar3 == 0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't mount %s to catalog files!");
    engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff310);
    return;
  }
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_8c8);
  shape_edittool_cpp_CPickList_setSelectedResult_FUN_004a3e10((CPickList *)(auStack_8c8 + 4),1);
  iVar3 = 0;
  if (0 < (int)pCStack_8dc) {
    iVar5 = 0;
    do {
      time_ptr = crt_time_c_localtime_FUN_00600288((time_t *)(pcStack_8d8 + iVar5 + 0xc));
      crt_time_c_strftime_FUN_006002d4(acStack_30,0x1e,"%m/%d/%y %I:%M:%S %p",time_ptr);
      engine_dosio_c_splitPath_FUN_00481f20
                (*(char **)(iVar5 + local_8ec),(char *)0x0,local_22c,local_12c,local_32c);
      if (cStack_328 == '.') {
        uVar4 = 0xffffffff;
        pcVar6 = &cStack_328;
        do {
          if (uVar4 == 0) break;
          uVar4 = uVar4 - 1;
          cVar1 = *pcVar6;
          pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
        } while (cVar1 != '\0');
        crt_string_c_memmove_FUN_005fe5e0(&cStack_328,auStack_327,~uVar4 - 1);
      }
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_524,"%s\t%s\t%s\t%d\t%s",auStack_224,auStack_124,auStack_324,
                 *(undefined4 *)((int)&pCStack_8e4->size + iVar5),auStack_24);
      crt_string_c_strupr_FUN_00600770(acStack_520);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_8c8 + 4),acStack_51c);
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 0x14;
    } while (iVar3 < (int)pCStack_8dc);
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_518,"Contents of pod file:\n%s");
  shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
            ((CPickList *)auStack_8bc,acStack_514,-1,0);
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)(auStack_8bc + 4),0,in_stack_fffff318,in_stack_fffff31c,in_stack_fffff320,
             in_stack_fffff324,in_stack_fffff328);
  engine_pod_cpp_CPodFile_dtor_FUN_0054f610((CPodFile *)&stack0xfffff320);
  return;
}


// Assembly code:
// 004b7460: PUSH ESI
//   Label: engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460
// 004b7461: PUSH EDI
// 004b7462: PUSH EBP
// 004b7463: SUB ESP,0xcf4
// 004b7469: MOV ESI,dword ptr [ESP + 0xd08]
//   XREF to: Stack[0x8] (READ)
// 004b7470: TEST ESI,ESI
// 004b7472: JNZ 0x004b74a4
//   XREF to: 004b74a4 (CONDITIONAL_JUMP)
// 004b7474: PUSH ESI
// 004b7475: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x52c] (DATA)
// 004b747c: PUSH EAX
// 004b747d: PUSH 0x627d97
//   XREF to: 00627d97 (DATA)
// 004b7482: PUSH 0x627d9d
//   XREF to: 00627d9d (DATA)
// 004b7487: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b748d: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004b748e: CALL shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
//   XREF to: 0049f420 (UNCONDITIONAL_CALL)
// 004b7493: ADD ESP,0x14
// 004b7496: TEST EAX,EAX
// 004b7498: JNZ 0x004b74c5
//   XREF to: 004b74c5 (CONDITIONAL_JUMP)
// 004b749a: ADD ESP,0xcf4
// 004b74a0: POP EBP
// 004b74a1: POP EDI
// 004b74a2: POP ESI
// 004b74a3: RET
// 004b74a4: LEA EDI,[ESP + 0x7d4]
//   Label: LAB_004b74a4
//   XREF to: Stack[-0x52c] (DATA)
// 004b74ab: PUSH EDI
// 004b74ac: MOV AL,byte ptr [ESI]
//   Label: LAB_004b74ac
// 004b74ae: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x52c] (DATA)
// 004b74b0: CMP AL,0x0
// 004b74b2: JZ 0x004b74c4
//   XREF to: 004b74c4 (CONDITIONAL_JUMP)
// 004b74b4: MOV AL,byte ptr [ESI + 0x1]
// 004b74b7: ADD ESI,0x2
// 004b74ba: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x52b] (WRITE)
// 004b74bd: ADD EDI,0x2
// 004b74c0: CMP AL,0x0
// 004b74c2: JNZ 0x004b74ac
//   XREF to: 004b74ac (CONDITIONAL_JUMP)
// 004b74c4: POP EDI
//   Label: LAB_004b74c4
// 004b74c5: MOV EAX,ESP
//   Label: LAB_004b74c5
// 004b74c7: PUSH EAX
// 004b74c8: CALL engine_pod.cpp_CPodFile_ctor_FUN_0054f5a0
//   XREF to: 0054f5a0 (UNCONDITIONAL_CALL)
// 004b74cd: ADD ESP,0x4
// 004b74d0: LEA EAX,[ESP + 0x7d4]
//   XREF to: Stack[-0x52c] (DATA)
// 004b74d7: PUSH EAX
// 004b74d8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd00] (DATA)
// 004b74dc: PUSH EAX
// 004b74dd: CALL engine_pod.cpp_CPodFile_mountFromFile_FUN_0054f650
//   XREF to: 0054f650 (UNCONDITIONAL_CALL)
// 004b74e2: ADD ESP,0x8
// 004b74e5: TEST EAX,EAX
// 004b74e7: JZ 0x004b768f
//   XREF to: 004b768f (CONDITIONAL_JUMP)
// 004b74ed: PUSH EBX
// 004b74ee: LEA EAX,[ESP + 0x430]
//   XREF to: Stack[-0x8d4] (DATA)
// 004b74f5: PUSH EAX
// 004b74f6: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004b74fb: ADD ESP,0x4
// 004b74fe: PUSH 0x1
// 004b7500: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8d4] (DATA)
// 004b7507: PUSH EAX
// 004b7508: CALL shape_edittool.cpp_CPickList_setSelectedResult_FUN_004a3e10
//   XREF to: 004a3e10 (UNCONDITIONAL_CALL)
// 004b750d: ADD ESP,0x8
// 004b7510: MOV EBX,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x8f0] (READ)
// 004b7517: XOR ESI,ESI
// 004b7519: TEST EBX,EBX
// 004b751b: JLE 0x004b762d
//   XREF to: 004b762d (CONDITIONAL_JUMP)
// 004b7521: XOR EBX,EBX
// 004b7523: MOV EAX,dword ptr [ESP + 0x418]
//   Label: LAB_004b7523
//   XREF to: Stack[-0x8ec] (READ)
// 004b752a: ADD EAX,EBX
// 004b752c: ADD EAX,0xc
// 004b752f: PUSH EAX
// 004b7530: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 004b7535: ADD ESP,0x4
// 004b7538: PUSH EAX
// 004b7539: PUSH 0x627dd9
//   XREF to: 00627dd9 (DATA)
// 004b753e: PUSH 0x1e
// 004b7540: LEA EAX,[ESP + 0xce4]
//   XREF to: Stack[-0x2c] (DATA)
// 004b7547: PUSH EAX
// 004b7548: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 004b754d: ADD ESP,0x10
// 004b7550: LEA EAX,[ESP + 0x9d8]
//   XREF to: Stack[-0x32c] (DATA)
// 004b7557: PUSH EAX
// 004b7558: LEA EAX,[ESP + 0xbdc]
//   XREF to: Stack[-0x12c] (DATA)
// 004b755f: PUSH EAX
// 004b7560: LEA EAX,[ESP + 0xae0]
//   XREF to: Stack[-0x22c] (DATA)
// 004b7567: PUSH EAX
// 004b7568: MOV EAX,dword ptr [ESP + 0x424]
//   XREF to: Stack[-0x8ec] (READ)
// 004b756f: PUSH 0x0
// 004b7571: MOV EDX,dword ptr [EBX + EAX*0x1]
// 004b7574: PUSH EDX
// 004b7575: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 004b757a: ADD ESP,0x14
// 004b757d: CMP byte ptr [ESP + 0x9d8],0x2e
//   XREF to: Stack[-0x32c] (READ)
// 004b7585: JNZ 0x004b75b1
//   XREF to: 004b75b1 (CONDITIONAL_JUMP)
// 004b7587: LEA EDI,[ESP + 0x9d8]
//   XREF to: Stack[-0x32c] (DATA)
// 004b758e: SUB ECX,ECX
// 004b7590: DEC ECX
// 004b7591: XOR EAX,EAX
// 004b7593: SCASB.REPNE ES:EDI
// 004b7595: NOT ECX
// 004b7597: DEC ECX
// 004b7598: PUSH ECX
// 004b7599: LEA EAX,[ESP + 0x9dd]
//   XREF to: Stack[-0x32b] (DATA)
// 004b75a0: PUSH EAX
// 004b75a1: LEA EAX,[ESP + 0x9e0]
//   XREF to: Stack[-0x32c] (DATA)
// 004b75a8: PUSH EAX
// 004b75a9: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 004b75ae: ADD ESP,0xc
// 004b75b1: LEA EAX,[ESP + 0xcd8]
//   Label: LAB_004b75b1
//   XREF to: Stack[-0x2c] (DATA)
// 004b75b8: PUSH EAX
// 004b75b9: MOV EAX,dword ptr [ESP + 0x41c]
//   XREF to: Stack[-0x8ec] (READ)
// 004b75c0: MOV EDI,dword ptr [EBX + EAX*0x1 + 0x4]
// 004b75c4: PUSH EDI
// 004b75c5: LEA EAX,[ESP + 0x9e0]
//   XREF to: Stack[-0x32c] (DATA)
// 004b75cc: PUSH EAX
// 004b75cd: LEA EAX,[ESP + 0xbe4]
//   XREF to: Stack[-0x12c] (DATA)
// 004b75d4: PUSH EAX
// 004b75d5: LEA EAX,[ESP + 0xae8]
//   XREF to: Stack[-0x22c] (DATA)
// 004b75dc: PUSH EAX
// 004b75dd: PUSH 0x627dee
//   XREF to: 00627dee (DATA)
// 004b75e2: LEA EAX,[ESP + 0x7f0]
//   XREF to: Stack[-0x52c] (DATA)
// 004b75e9: PUSH EAX
// 004b75ea: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b75ef: ADD ESP,0x1c
// 004b75f2: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x52c] (DATA)
// 004b75f9: PUSH EAX
// 004b75fa: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 004b75ff: ADD ESP,0x4
// 004b7602: LEA EAX,[ESP + 0x7d8]
//   XREF to: Stack[-0x52c] (DATA)
// 004b7609: PUSH EAX
// 004b760a: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8d4] (DATA)
// 004b7611: PUSH EAX
// 004b7612: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004b7617: ADD ESP,0x8
// 004b761a: INC ESI
// 004b761b: MOV EBP,dword ptr [ESP + 0x414]
//   XREF to: Stack[-0x8f0] (READ)
// 004b7622: ADD EBX,0x14
// 004b7625: CMP ESI,EBP
// 004b7627: JL 0x004b7523
//   XREF to: 004b7523 (CONDITIONAL_JUMP)
// 004b762d: LEA EAX,[ESP + 0x8]
//   Label: LAB_004b762d
//   XREF to: Stack[-0xcfc] (DATA)
// 004b7631: PUSH EAX
// 004b7632: PUSH 0x627dfd
//   XREF to: 00627dfd (DATA)
// 004b7637: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x52c] (DATA)
// 004b763e: PUSH EAX
// 004b763f: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004b7644: ADD ESP,0xc
// 004b7647: PUSH 0x0
// 004b7649: PUSH -0x1
// 004b764b: LEA EAX,[ESP + 0x7e0]
//   XREF to: Stack[-0x52c] (DATA)
// 004b7652: PUSH EAX
// 004b7653: LEA EAX,[ESP + 0x43c]
//   XREF to: Stack[-0x8d4] (DATA)
// 004b765a: PUSH EAX
// 004b765b: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 004b7660: ADD ESP,0x10
// 004b7663: PUSH 0x0
// 004b7665: LEA EAX,[ESP + 0x434]
//   XREF to: Stack[-0x8d4] (DATA)
// 004b766c: PUSH EAX
// 004b766d: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 004b7672: ADD ESP,0x8
// 004b7675: PUSH 0x0
// 004b7677: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xd00] (DATA)
// 004b767b: PUSH EAX
// 004b767c: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b7681: ADD ESP,0x8
// 004b7684: POP EBX
// 004b7685: ADD ESP,0xcf4
// 004b768b: POP EBP
// 004b768c: POP EDI
// 004b768d: POP ESI
// 004b768e: RET
// 004b768f: LEA EAX,[ESP + 0x7d4]
//   Label: LAB_004b768f
//   XREF to: Stack[-0x52c] (DATA)
// 004b7696: PUSH EAX
// 004b7697: PUSH 0x627db8
//   XREF to: 00627db8 (DATA)
// 004b769c: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004b76a2: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 004b76a3: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 004b76a8: ADD ESP,0xc
// 004b76ab: PUSH 0x0
// 004b76ad: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd00] (DATA)
// 004b76b1: PUSH EAX
// 004b76b2: CALL engine_pod.cpp_CPodFile_dtor_FUN_0054f610
//   XREF to: 0054f610 (UNCONDITIONAL_CALL)
// 004b76b7: ADD ESP,0x8
// 004b76ba: ADD ESP,0xcf4
// 004b76c0: POP EBP
// 004b76c1: POP EDI
// 004b76c2: POP ESI
// 004b76c3: RET
