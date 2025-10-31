// Name: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
// Address: 0049f420
// Address Range: [[0049f420, 0049fb65]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443264 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047e75e [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578a72 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_CDemonSet_showEditorMenu_FUN_00584940 (00584940) at 00584d1c [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_catalogPodFile_FUN_004b7460 (004b7460) at 004b748e [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_compareLocalVsPod_FUN_004b82a0 (004b82a0) at 004b82cb [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractFilesToDirectory_FUN_004b76d0 (004b76d0) at 004b76fa [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_extractPodFile_FUN_004b6e10 (004b6e10) at 004b6e3f [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_removeAuditRecords_FUN_004bd190 (004bd190) at 004bd1bf [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_verifyPodCRC_FUN_004b7c90 (004b7c90) at 004b7cba [UNCONDITIONAL_CALL]
//   engine_fileio.cpp_CFileManager_viewPodAuditTrail_FUN_004b7f50 (004b7f50) at 004b7f7e [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Error_getting_current_di_006230f1
//   TerminatedCString s_s_s_00623112
//   TerminatedCString s_anon_00623118
//   TerminatedCString s_m_d_y_I_M_S_p_0062311c
//   TerminatedCString s_s_s_d_s_00623132
//   TerminatedCString s_anon_0062313d
//   TerminatedCString s_anon_00623141
//   TerminatedCString s_DIR_00623144
//   TerminatedCString s_anon_0062314e
//   TerminatedCString s_s_s_DIR_00623150
//   TerminatedCString s_Change_Path_0062315c
//   string s_Enter_new_path_0062316a
//   TerminatedCString s_Can_t_change_to_s_00623179
//   undefined4 DAT_00678a70
//   undefined4 DAT_00678a74
//   TerminatedCString s_ERROR_Can_t_get_current__00678b78
//   undefined4 s_OR:_Can't_get_current_directory._00678b7c
//   undefined4 DAT_00678c80
//   undefined4 DAT_00678c84
// Function calls:
//   crt_io.c_chdir_FUN_006012a0
//   crt_io.c_getcwd_wrapper_FUN_00608d20
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_strcmp_FUN_005fef20
//   crt_string.c_stricmp_FUN_005fe7f0
//   crt_string.c_strupr_FUN_00600770
//   crt_time.c_localtime_FUN_00600288
//   crt_time.c_strftime_FUN_006002d4
//   engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CPickList_sort_FUN_004a57f0
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   shape_edittool.cpp_CStrList_sort_FUN_004a2ec0

#include "nocturne.h"

bool __cdecl
shape_edittool_cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
          (CEditorTools *this_ptr,char *file_pattern,bool include_files,char *initial_path)

{
  char cVar1;
  char *pcVar2;
  tm *time_ptr;
  int iVar3;
  uint uVar4;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar5;
  undefined4 *puVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  char *in_stack_00000014;
  byte in_stack_00000018;
  undefined4 in_stack_00000024;
  char *in_stack_00000034;
  undefined4 in_stack_00000040;
  undefined1 uStack0000004c;
  char *in_stack_00000060;
  CStrList_vtable *in_stack_ffffe168;
  CStrList_vtable *pCVar10;
  char *in_stack_ffffe16c;
  CStrList_vtable *in_stack_ffffe178;
  CPickList *in_stack_ffffe17c;
  CStrList_vtable *in_stack_ffffe180;
  CStrList_vtable *in_stack_ffffe184;
  CStrList_vtable *in_stack_ffffe188;
  CStrList_vtable *in_stack_ffffe18c;
  CStrList_vtable *in_stack_ffffe190;
  char **in_stack_ffffe194;
  CStrList_vtable *in_stack_ffffe198;
  char acStack_1b04 [32];
  char acStack_1ae4 [536];
  undefined1 auStack_18cc [8];
  char acStack_18c4 [4];
  undefined1 auStack_18c0 [32];
  undefined1 auStack_18a0 [204];
  time_t tStack_17d4;
  char acStack_17d0 [12];
  byte abStack_17c4 [4];
  undefined1 auStack_17c0 [4];
  byte bStack_17bc;
  char acStack_179c [12];
  char acStack_1790 [248];
  char acStack_1698 [4];
  char acStack_1694 [232];
  char acStack_15ac [4];
  char acStack_15a8 [216];
  char local_14d0 [92];
  char acStack_1474 [176];
  char acStack_13c4 [4];
  char acStack_13c0 [252];
  undefined4 auStack_12c4 [3];
  char acStack_12b8 [4];
  char acStack_12b4 [24];
  char acStack_129c [4];
  char cStack_1298;
  undefined1 auStack_1180 [4];
  char acStack_117c [248];
  undefined1 auStack_1084 [8];
  char acStack_107c [256];
  char acStack_f7c [4];
  char acStack_f78 [184];
  char acStack_ec0 [12];
  char acStack_eb4 [268];
  undefined1 auStack_da8 [16];
  char acStack_d98 [276];
  char acStack_c84 [4];
  char acStack_c80 [4];
  undefined1 auStack_c7c [8];
  char acStack_c74 [180];
  char acStack_bc0 [4];
  char acStack_bbc [296];
  char acStack_a94 [248];
  char acStack_99c [8];
  undefined1 auStack_994 [276];
  char acStack_880 [12];
  char acStack_874 [240];
  char acStack_784 [4];
  char acStack_780 [236];
  char acStack_694 [4];
  char cStack_690;
  undefined1 auStack_68f [239];
  undefined1 auStack_5a0 [4];
  char acStack_59c [232];
  char cStack_4b4;
  undefined1 auStack_4b3 [11];
  undefined1 auStack_4a8 [16];
  char acStack_498 [216];
  char acStack_3c0 [12];
  char acStack_3b4 [304];
  char acStack_284 [4];
  char acStack_280 [8];
  undefined1 auStack_278 [4];
  char acStack_274 [232];
  char acStack_18c [4];
  char acStack_188 [4];
  char *apcStack_184 [41];
  char acStack_e0 [4];
  char acStack_dc [4];
  char acStack_d8 [188];
  char acStack_1c [4];
  undefined1 auStack_18 [16];
  
  bVar9 = 0;
  pcVar2 = crt_io_c_getcwd_wrapper_FUN_00608d20(local_14d0,0x104);
  if (pcVar2 == (char *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (this_ptr,"Error getting current directory.");
    return false;
  }
  puVar5 = &DAT_00678a70;
  puVar6 = auStack_12c4;
  for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
    puVar6 = puVar6 + (uint)bVar9 * -2 + 1;
  }
  if ((in_stack_00000018 & 1) != 0) {
    engine_dosio_c_splitPath_FUN_00481f20
              (in_stack_00000014,&stack0xfffffff8,acStack_bc0,acStack_ec0,acStack_3c0);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_13c4,&stack0xfffffffc,acStack_bbc,(char *)0x0,(char *)0x0);
    crt_io_c_chdir_FUN_006012a0(acStack_13c0);
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_12b8,(char *)0x0,(char *)0x0,acStack_eb4,acStack_3b4);
    crt_io_c_chdir_FUN_006012a0(acStack_12b4);
  }
LAB_0049f47a:
  do {
    pcVar2 = "[ERROR: Can't get current directory.]";
    pbVar7 = abStack_17c4;
    for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
      *(undefined4 *)pbVar7 = *(undefined4 *)pcVar2;
      pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      pbVar7 = pbVar7 + ((uint)bVar9 * -2 + 1) * 4;
    }
    crt_io_c_getcwd_wrapper_FUN_00608d20((char *)abStack_17c4,0x104);
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_1b04,"%s\n%s",in_stack_00000024,auStack_17c0);
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xffffe158);
    engine_dosio_c_CFileFinder_ctor_FUN_00481c30((CFileFinder *)auStack_18cc);
    if (in_stack_00000034 == (char *)0x0) {
      in_stack_00000034 = "*.*";
    }
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70
              ((CFileFinder *)(auStack_18cc + 4),in_stack_00000034);
    while (acStack_18c4[0] != '\0') {
      if ((abStack_17c4[0] & 4) == 0) {
        engine_dosio_c_splitPath_FUN_00481f20
                  (acStack_18c4,(char *)0x0,(char *)0x0,acStack_d98,acStack_498);
        if (cStack_4b4 == '.') {
          uVar4 = 0xffffffff;
          pcVar2 = &cStack_4b4;
          do {
            if (uVar4 == 0) break;
            uVar4 = uVar4 - 1;
            cVar1 = *pcVar2;
            pcVar2 = pcVar2 + (uint)bVar9 * -2 + 1;
          } while (cVar1 != '\0');
          crt_string_c_memmove_FUN_005fe5e0(&cStack_4b4,auStack_4b3,~uVar4 - 1);
        }
        time_ptr = crt_time_c_localtime_FUN_00600288(&tStack_17d4);
        crt_time_c_strftime_FUN_006002d4(acStack_1c,0x1e,"\t%m/%d/%y %I:%M:%S %p",time_ptr);
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_e0,"%s\t%s\t%d%s",auStack_da8,auStack_4a8,acStack_17d0._0_4_,
                   auStack_18);
        crt_string_c_strupr_FUN_00600770(acStack_dc);
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffe15c,acStack_d8);
      }
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)(auStack_18cc + 4));
    }
    shape_edittool_cpp_CStrList_sort_FUN_004a2ec0((CStrList *)&stack0xffffe164);
    pcVar2 = (char *)0xffffffff;
    if (cStack_1298 != '\0') {
      pcVar2 = (char *)0x0;
      pCVar10 = in_stack_ffffe168;
      if (0 < (int)in_stack_ffffe168) {
        do {
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    ((CStrList *)&stack0xffffe168,(int)auStack_994,pcVar2,0);
          shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                    ((CStrList *)&stack0xffffe15c,(int)auStack_5a0,pcVar2,1);
          engine_dosio_c_makePath_FUN_00481f50
                    (acStack_15ac,(char *)0x0,(char *)0x0,acStack_99c,acStack_59c);
          iVar3 = crt_string_c_stricmp_FUN_005fe7f0(acStack_15a8,acStack_129c);
          if (iVar3 == 0) break;
          pcVar2 = pcVar2 + 1;
        } while ((int)pcVar2 < (int)pCVar10);
      }
      if ((int)pCVar10 <= (int)pcVar2) {
        pcVar2 = (char *)0xffffffff;
      }
      cStack_1298 = '\0';
    }
    engine_dosio_c_CFileFinder_openSearch_FUN_00481c70((CFileFinder *)auStack_18c0,"*.*");
    while (auStack_18c0[4] != '\0') {
      if ((bStack_17bc & 4) != 0) {
        iVar3 = crt_string_c_strcmp_FUN_005fef20(auStack_18c0 + 4,"..");
        if (iVar3 == 0) {
          in_stack_ffffe16c = "..\t\t(DIR)";
        }
        else {
          iVar3 = crt_string_c_strcmp_FUN_005fef20(acStack_18c4,".");
          if (iVar3 == 0) goto LAB_0049f64e;
          engine_dosio_c_splitPath_FUN_00481f20
                    (auStack_18c0,(char *)0x0,(char *)0x0,acStack_a94,acStack_694);
          if (cStack_690 == '.') {
            uVar4 = 0xffffffff;
            pcVar8 = &cStack_690;
            do {
              if (uVar4 == 0) break;
              uVar4 = uVar4 - 1;
              cVar1 = *pcVar8;
              pcVar8 = pcVar8 + (uint)bVar9 * -2 + 1;
            } while (cVar1 != '\0');
            crt_string_c_memmove_FUN_005fe5e0(&cStack_690,auStack_68f,~uVar4 - 1);
          }
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_18c,"%s\t%s\t(DIR)");
          crt_string_c_strupr_FUN_00600770(acStack_188);
          in_stack_ffffe16c = (char *)apcStack_184;
        }
        shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)&stack0xffffe178,in_stack_ffffe16c)
        ;
      }
LAB_0049f64e:
      engine_dosio_c_CFileFinder_findNext_FUN_00481cf0((CFileFinder *)auStack_18c0);
    }
    shape_edittool_cpp_CPickList_sort_FUN_004a57f0
              ((CPickList *)&stack0xffffe16c,(int)in_stack_ffffe168,(int)in_stack_ffffe16c + -1);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xffffe170,"(Change Path)");
    pcVar2 = (char *)shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                               ((CPickList *)&stack0xffffe174,acStack_1ae4,(int)pcVar2,0);
    if ((int)pcVar2 < 0) goto LAB_0049f983;
    if ((int)((int)&in_stack_ffffe178[-1].handleInput + 3) <= (int)pcVar2) {
      puVar5 = &DAT_00678c80;
      pcVar2 = acStack_1698;
      for (iVar3 = 0x41; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(undefined4 *)pcVar2 = *puVar5;
        puVar5 = puVar5 + (uint)bVar9 * -2 + 1;
        pcVar2 = pcVar2 + ((uint)bVar9 * -2 + 1) * 4;
      }
      while( true ) {
        in_stack_ffffe168 = (CStrList_vtable *)0x104;
        iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (this_ptr,"Enter new path",acStack_1698,0x104,1);
        if ((iVar3 == 0) || (iVar3 = crt_io_c_chdir_FUN_006012a0(acStack_1694), iVar3 == 0)) break;
        shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                  (this_ptr,"Can't change to %s");
        crt_io_c_chdir_FUN_006012a0(acStack_1790);
      }
      in_stack_ffffe16c = (char *)0x49f704;
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)(auStack_18c0 + 0x18),0);
      in_stack_ffffe178 = (CStrList_vtable *)0x0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffe184,0,(uint)in_stack_ffffe17c,(uint)in_stack_ffffe180,
                 (uint)in_stack_ffffe184,(uint)in_stack_ffffe188,(uint)in_stack_ffffe18c);
      goto LAB_0049f47a;
    }
    if ((int)pcVar2 < (int)in_stack_ffffe168) {
      engine_dosio_c_splitPath_FUN_00481f20
                (acStack_179c,&stack0x00000030,acStack_784,acStack_c84,acStack_284);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_880,(char *)0x0,acStack_780,acStack_c80,acStack_280);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xffffe180,(int)auStack_c7c,pcVar2,0);
      shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
                ((CStrList *)&stack0xffffe184,(int)auStack_278,pcVar2,1);
      engine_dosio_c_makePath_FUN_00481f50
                (in_stack_00000060,(char *)&stack0x00000040,acStack_874,acStack_c74,acStack_274);
      in_stack_ffffe180 = (CStrList_vtable *)0x0;
      in_stack_ffffe17c = (CPickList *)(auStack_18a0 + 4);
      in_stack_00000040 = 1;
LAB_0049f983:
      engine_dosio_c_CFileFinder_dtor_FUN_00481c50
                ((CFileFinder *)in_stack_ffffe17c,(uint)in_stack_ffffe180);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xffffe190,0,(uint)in_stack_ffffe188,(uint)in_stack_ffffe18c,
                 (uint)in_stack_ffffe190,(uint)in_stack_ffffe194,(uint)in_stack_ffffe198);
      crt_io_c_chdir_FUN_006012a0(acStack_1474);
      return (bool)uStack0000004c;
    }
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xffffe178,(int)auStack_1084,pcVar2,0);
    shape_edittool_cpp_CStrList_getFieldAt_FUN_004a2f80
              ((CStrList *)&stack0xffffe17c,(int)auStack_1180,pcVar2,1);
    in_stack_ffffe16c = (char *)0x0;
    in_stack_ffffe168 = (CStrList_vtable *)0x0;
    engine_dosio_c_makePath_FUN_00481f50
              (acStack_f7c,(char *)0x0,(char *)0x0,acStack_107c,acStack_117c);
    crt_io_c_chdir_FUN_006012a0(acStack_f78);
    engine_dosio_c_CFileFinder_dtor_FUN_00481c50((CFileFinder *)auStack_18a0,0);
    in_stack_ffffe180 = (CStrList_vtable *)0x0;
    in_stack_ffffe17c = (CPickList *)&stack0xffffe18c;
    in_stack_ffffe178 = (CStrList_vtable *)0x49fa89;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (in_stack_ffffe17c,0,(uint)in_stack_ffffe184,(uint)in_stack_ffffe188,
               (uint)in_stack_ffffe18c,(uint)in_stack_ffffe190,(uint)in_stack_ffffe194);
  } while( true );
}


// Assembly code:
// 0049f420: PUSH EBX
//   Label: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
// 0049f421: PUSH EBP
// 0049f422: SUB ESP,0x1ec0
// 0049f428: MOV EBX,dword ptr [ESP + 0x1ecc]
//   XREF to: Stack[0x4] (READ)
// 0049f42f: PUSH 0x104
// 0049f434: LEA EAX,[ESP + 0x9fc]
//   XREF to: Stack[-0x14d0] (DATA)
// 0049f43b: PUSH EAX
// 0049f43c: CALL crt_io.c_getcwd_wrapper_FUN_00608d20
//   XREF to: 0060128c (UNCONDITIONAL_CALL)
// 0049f441: ADD ESP,0x8
// 0049f444: TEST EAX,EAX
// 0049f446: JZ 0x0049f71b
//   XREF to: 0049f71b (CONDITIONAL_JUMP)
// 0049f44c: PUSH EDI
// 0049f44d: PUSH ESI
// 0049f44e: MOV ECX,0x41
// 0049f453: LEA EDI,[ESP + 0xc08]
//   XREF to: Stack[-0x12c8] (DATA)
// 0049f45a: MOV ESI,0x678a70
//   XREF to: 00678a70 (DATA)
// 0049f45f: MOV AH,byte ptr [ESP + 0x1ee4]
//   XREF to: Stack[0x14] (READ)
// 0049f466: MOVSD.REP ES:EDI,ESI
//   XREF to: 00678a70 (READ)
//   XREF to: 00678a74 (READ)
// 0049f468: TEST AH,0x1
// 0049f46b: JNZ 0x0049f734
//   XREF to: 0049f734 (CONDITIONAL_JUMP)
// 0049f471: XOR ECX,ECX
//   Label: LAB_0049f471
// 0049f473: MOV dword ptr [ESP + 0x1ebc],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0049f47a: MOV ECX,0x41
//   Label: LAB_0049f47a
// 0049f47f: LEA EDI,[ESP + 0x6f4]
//   XREF to: Stack[-0x17dc] (DATA)
// 0049f486: PUSH 0x104
// 0049f48b: LEA EAX,[ESP + 0x6f8]
//   XREF to: Stack[-0x17dc] (DATA)
// 0049f492: MOV ESI,0x678b78
//   XREF to: 00678b78 (DATA)
// 0049f497: PUSH EAX
// 0049f498: MOVSD.REP ES:EDI,ESI
//   XREF to: 00678b78 (READ)
//   XREF to: 00678b7c (READ)
// 0049f49a: CALL crt_io.c_getcwd_wrapper_FUN_00608d20
//   XREF to: 0060128c (UNCONDITIONAL_CALL)
// 0049f49f: ADD ESP,0x8
// 0049f4a2: LEA EAX,[ESP + 0x6f4]
//   XREF to: Stack[-0x17dc] (DATA)
// 0049f4a9: PUSH EAX
// 0049f4aa: MOV ESI,dword ptr [ESP + 0x1edc]
//   XREF to: Stack[0x8] (READ)
// 0049f4b1: PUSH ESI
// 0049f4b2: PUSH 0x623112
//   XREF to: 00623112 (DATA)
// 0049f4b7: LEA EAX,[ESP + 0x3bc]
//   XREF to: Stack[-0x1b20] (DATA)
// 0049f4be: PUSH EAX
// 0049f4bf: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0049f4c4: ADD ESP,0x10
// 0049f4c7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f4cb: PUSH EAX
// 0049f4cc: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0049f4d1: ADD ESP,0x4
// 0049f4d4: LEA EAX,[ESP + 0x5e0]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f4db: PUSH EAX
// 0049f4dc: CALL engine_dosio.c_CFileFinder_ctor_FUN_00481c30
//   XREF to: 00481c30 (UNCONDITIONAL_CALL)
// 0049f4e1: ADD ESP,0x4
// 0049f4e4: CMP dword ptr [ESP + 0x1edc],0x0
//   XREF to: Stack[0xc] (READ)
// 0049f4ec: JNZ 0x0049f4f9
//   XREF to: 0049f4f9 (CONDITIONAL_JUMP)
// 0049f4ee: MOV dword ptr [ESP + 0x1edc],0x623118
//   XREF to: Stack[0xc] (WRITE)
//   XREF to: 00623118 (DATA)
// 0049f4f9: MOV EAX,dword ptr [ESP + 0x1edc]
//   Label: LAB_0049f4f9
//   XREF to: Stack[0xc] (READ)
// 0049f500: PUSH EAX
//   XREF to: 00623118 (DATA)
// 0049f501: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f508: PUSH EAX
// 0049f509: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 0049f50e: ADD ESP,0x8
// 0049f511: CMP byte ptr [ESP + 0x5e0],0x0
//   XREF to: Stack[-0x18f0] (READ)
// 0049f519: JZ 0x0049f543
//   XREF to: 0049f543 (CONDITIONAL_JUMP)
// 0049f51b: TEST byte ptr [ESP + 0x6e0],0x4
//   Label: LAB_0049f51b
//   XREF to: Stack[-0x17f0] (READ)
// 0049f523: JZ 0x0049f7d1
//   XREF to: 0049f7d1 (CONDITIONAL_JUMP)
// 0049f529: LEA EAX,[ESP + 0x5e0]
//   Label: LAB_0049f529
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f530: PUSH EAX
// 0049f531: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 0049f536: ADD ESP,0x4
// 0049f539: CMP byte ptr [ESP + 0x5e0],0x0
//   XREF to: Stack[-0x18f0] (READ)
// 0049f541: JNZ 0x0049f51b
//   XREF to: 0049f51b (CONDITIONAL_JUMP)
// 0049f543: LEA EAX,[ESP + 0x8]
//   Label: LAB_0049f543
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f547: PUSH EAX
// 0049f548: CALL shape_edittool.cpp_CStrList_sort_FUN_004a2ec0
//   XREF to: 004a2ec0 (UNCONDITIONAL_CALL)
// 0049f54d: ADD ESP,0x4
// 0049f550: MOV ESI,0xffffffff
// 0049f555: MOV CL,byte ptr [ESP + 0xc08]
//   XREF to: Stack[-0x12c8] (READ)
// 0049f55c: MOV EBP,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1ec8] (READ)
// 0049f560: TEST CL,CL
// 0049f562: JZ 0x0049f5f6
//   XREF to: 0049f5f6 (CONDITIONAL_JUMP)
// 0049f568: XOR ESI,ESI
// 0049f56a: TEST EBP,EBP
// 0049f56c: JLE 0x0049f5e2
//   XREF to: 0049f5e2 (CONDITIONAL_JUMP)
// 0049f56e: PUSH 0x0
//   Label: LAB_0049f56e
// 0049f570: PUSH ESI
// 0049f571: LEA EAX,[ESP + 0x1514]
//   XREF to: Stack[-0x9c4] (DATA)
// 0049f578: PUSH EAX
// 0049f579: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f57d: PUSH EAX
// 0049f57e: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f583: ADD ESP,0x10
// 0049f586: PUSH 0x1
// 0049f588: PUSH ESI
// 0049f589: LEA EAX,[ESP + 0x1914]
//   XREF to: Stack[-0x5c4] (DATA)
// 0049f590: PUSH EAX
// 0049f591: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f595: PUSH EAX
// 0049f596: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049f59b: ADD ESP,0x10
// 0049f59e: LEA EAX,[ESP + 0x190c]
//   XREF to: Stack[-0x5c4] (DATA)
// 0049f5a5: PUSH EAX
// 0049f5a6: LEA EAX,[ESP + 0x1510]
//   XREF to: Stack[-0x9c4] (DATA)
// 0049f5ad: PUSH EAX
// 0049f5ae: PUSH 0x0
// 0049f5b0: PUSH 0x0
// 0049f5b2: LEA EAX,[ESP + 0x90c]
//   XREF to: Stack[-0x15d4] (DATA)
// 0049f5b9: PUSH EAX
// 0049f5ba: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049f5bf: ADD ESP,0x14
// 0049f5c2: LEA EAX,[ESP + 0xc08]
//   XREF to: Stack[-0x12c8] (DATA)
// 0049f5c9: PUSH EAX
// 0049f5ca: LEA EAX,[ESP + 0x900]
//   XREF to: Stack[-0x15d4] (DATA)
// 0049f5d1: PUSH EAX
// 0049f5d2: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 0049f5d7: ADD ESP,0x8
// 0049f5da: TEST EAX,EAX
// 0049f5dc: JNZ 0x0049f8b0
//   XREF to: 0049f8b0 (CONDITIONAL_JUMP)
// 0049f5e2: CMP ESI,dword ptr [ESP + 0x8]
//   Label: LAB_0049f5e2
//   XREF to: Stack[-0x1ec8] (READ)
// 0049f5e6: JL 0x0049f5ed
//   XREF to: 0049f5ed (CONDITIONAL_JUMP)
// 0049f5e8: MOV ESI,0xffffffff
// 0049f5ed: XOR AH,AH
//   Label: LAB_0049f5ed
// 0049f5ef: MOV byte ptr [ESP + 0xc08],AH
//   XREF to: Stack[-0x12c8] (WRITE)
// 0049f5f6: PUSH 0x62313d
//   Label: LAB_0049f5f6
//   XREF to: 0062313d (DATA)
// 0049f5fb: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f602: PUSH EAX
// 0049f603: CALL engine_dosio.c_CFileFinder_openSearch_FUN_00481c70
//   XREF to: 00481c70 (UNCONDITIONAL_CALL)
// 0049f608: ADD ESP,0x8
// 0049f60b: CMP byte ptr [ESP + 0x5e0],0x0
//   XREF to: Stack[-0x18f0] (READ)
// 0049f613: JZ 0x0049f668
//   XREF to: 0049f668 (CONDITIONAL_JUMP)
// 0049f615: TEST byte ptr [ESP + 0x6e0],0x4
//   Label: LAB_0049f615
//   XREF to: Stack[-0x17f0] (READ)
// 0049f61d: JZ 0x0049f64e
//   XREF to: 0049f64e (CONDITIONAL_JUMP)
// 0049f61f: PUSH 0x623141
//   XREF to: 00623141 (DATA)
// 0049f624: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f62b: PUSH EAX
// 0049f62c: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0049f631: ADD ESP,0x8
// 0049f634: TEST EAX,EAX
// 0049f636: JNZ 0x0049f8c2
//   XREF to: 0049f8c2 (CONDITIONAL_JUMP)
// 0049f63c: PUSH 0x623144
//   XREF to: 00623144 (DATA)
// 0049f641: LEA EAX,[ESP + 0xc]
//   Label: LAB_0049f641
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f645: PUSH EAX
// 0049f646: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f64b: ADD ESP,0x8
// 0049f64e: LEA EAX,[ESP + 0x5e0]
//   Label: LAB_0049f64e
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f655: PUSH EAX
// 0049f656: CALL engine_dosio.c_CFileFinder_findNext_FUN_00481cf0
//   XREF to: 00481cf0 (UNCONDITIONAL_CALL)
// 0049f65b: ADD ESP,0x4
// 0049f65e: CMP byte ptr [ESP + 0x5e0],0x0
//   XREF to: Stack[-0x18f0] (READ)
// 0049f666: JNZ 0x0049f615
//   XREF to: 0049f615 (CONDITIONAL_JUMP)
// 0049f668: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_0049f668
//   XREF to: Stack[-0x1ec8] (READ)
// 0049f66c: DEC EAX
// 0049f66d: PUSH EAX
// 0049f66e: PUSH EBP
// 0049f66f: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f673: PUSH EAX
// 0049f674: CALL shape_edittool.cpp_CPickList_sort_FUN_004a57f0
//   XREF to: 004a57f0 (UNCONDITIONAL_CALL)
// 0049f679: ADD ESP,0xc
// 0049f67c: PUSH 0x62315c
//   XREF to: 0062315c (DATA)
// 0049f681: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f685: PUSH EAX
// 0049f686: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f68b: ADD ESP,0x8
// 0049f68e: PUSH 0x0
// 0049f690: PUSH ESI
// 0049f691: LEA EAX,[ESP + 0x3b8]
//   XREF to: Stack[-0x1b20] (DATA)
// 0049f698: PUSH EAX
// 0049f699: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f69d: PUSH EAX
// 0049f69e: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 0049f6a3: MOV ESI,EAX
// 0049f6a5: ADD ESP,0x10
// 0049f6a8: TEST EAX,EAX
// 0049f6aa: JL 0x0049f979
//   XREF to: 0049f979 (CONDITIONAL_JUMP)
// 0049f6b0: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x1ec8] (READ)
// 0049f6b4: DEC EAX
// 0049f6b5: CMP ESI,EAX
// 0049f6b7: JL 0x0049f9ff
//   XREF to: 0049f9ff (CONDITIONAL_JUMP)
// 0049f6bd: MOV ECX,0x41
// 0049f6c2: LEA EDI,[ESP + 0x7f8]
//   XREF to: Stack[-0x16d8] (DATA)
// 0049f6c9: MOV ESI,0x678c80
//   XREF to: 00678c80 (DATA)
// 0049f6ce: MOVSD.REP ES:EDI,ESI
//   XREF to: 00678c80 (READ)
//   XREF to: 00678c84 (READ)
// 0049f6d0: PUSH 0x1
//   Label: LAB_0049f6d0
// 0049f6d2: PUSH 0x104
// 0049f6d7: LEA EAX,[ESP + 0x800]
//   XREF to: Stack[-0x16d8] (DATA)
// 0049f6de: PUSH EAX
// 0049f6df: PUSH 0x62316a
//   XREF to: 0062316a (DATA)
// 0049f6e4: PUSH EBX
// 0049f6e5: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 0049f6ea: ADD ESP,0x14
// 0049f6ed: TEST EAX,EAX
// 0049f6ef: JNZ 0x0049f9bc
//   XREF to: 0049f9bc (CONDITIONAL_JUMP)
// 0049f6f5: PUSH 0x0
//   Label: LAB_0049f6f5
// 0049f6f7: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f6fe: PUSH EAX
// 0049f6ff: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 0049f704: ADD ESP,0x8
// 0049f707: PUSH 0x0
// 0049f709: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f70d: PUSH EAX
// 0049f70e: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0049f713: ADD ESP,0x8
// 0049f716: JMP 0x0049f47a
//   XREF to: 0049f47a (UNCONDITIONAL_JUMP)
// 0049f71b: PUSH 0x6230f1
//   Label: LAB_0049f71b
//   XREF to: 006230f1 (DATA)
// 0049f720: PUSH EBX
// 0049f721: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0049f726: ADD ESP,0x8
// 0049f729: XOR EAX,EAX
// 0049f72b: ADD ESP,0x1ec0
// 0049f731: POP EBP
// 0049f732: POP EBX
// 0049f733: RET
// 0049f734: LEA EAX,[ESP + 0x1b0c]
//   Label: LAB_0049f734
//   XREF to: Stack[-0x3c4] (DATA)
// 0049f73b: PUSH EAX
// 0049f73c: LEA EAX,[ESP + 0x1010]
//   XREF to: Stack[-0xec4] (DATA)
// 0049f743: PUSH EAX
// 0049f744: LEA EAX,[ESP + 0x1314]
//   XREF to: Stack[-0xbc4] (DATA)
// 0049f74b: PUSH EAX
// 0049f74c: LEA EAX,[ESP + 0x1ed0]
//   XREF to: Stack[-0xc] (DATA)
// 0049f753: PUSH EAX
// 0049f754: MOV EDX,dword ptr [ESP + 0x1ef0]
//   XREF to: Stack[0x10] (READ)
// 0049f75b: PUSH EDX
// 0049f75c: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0049f761: ADD ESP,0x14
// 0049f764: PUSH 0x0
// 0049f766: PUSH 0x0
// 0049f768: LEA EAX,[ESP + 0x1314]
//   XREF to: Stack[-0xbc4] (DATA)
// 0049f76f: PUSH EAX
// 0049f770: LEA EAX,[ESP + 0x1ed0]
//   XREF to: Stack[-0xc] (DATA)
// 0049f777: PUSH EAX
// 0049f778: LEA EAX,[ESP + 0xb14]
//   XREF to: Stack[-0x13cc] (DATA)
// 0049f77f: PUSH EAX
// 0049f780: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049f785: ADD ESP,0x14
// 0049f788: LEA EAX,[ESP + 0xb04]
//   XREF to: Stack[-0x13cc] (DATA)
// 0049f78f: PUSH EAX
// 0049f790: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049f795: ADD ESP,0x4
// 0049f798: LEA EAX,[ESP + 0x1b0c]
//   XREF to: Stack[-0x3c4] (DATA)
// 0049f79f: PUSH EAX
// 0049f7a0: LEA EAX,[ESP + 0x1010]
//   XREF to: Stack[-0xec4] (DATA)
// 0049f7a7: PUSH EAX
// 0049f7a8: PUSH 0x0
// 0049f7aa: PUSH 0x0
// 0049f7ac: LEA EAX,[ESP + 0xc18]
//   XREF to: Stack[-0x12c8] (DATA)
// 0049f7b3: PUSH EAX
// 0049f7b4: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049f7b9: ADD ESP,0x14
// 0049f7bc: LEA EAX,[ESP + 0xc08]
//   XREF to: Stack[-0x12c8] (DATA)
// 0049f7c3: PUSH EAX
// 0049f7c4: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049f7c9: ADD ESP,0x4
// 0049f7cc: JMP 0x0049f471
//   XREF to: 0049f471 (UNCONDITIONAL_JUMP)
// 0049f7d1: LEA EAX,[ESP + 0x1a0c]
//   Label: LAB_0049f7d1
//   XREF to: Stack[-0x4c4] (DATA)
// 0049f7d8: PUSH EAX
// 0049f7d9: LEA EAX,[ESP + 0x1110]
//   XREF to: Stack[-0xdc4] (DATA)
// 0049f7e0: PUSH EAX
// 0049f7e1: PUSH 0x0
// 0049f7e3: PUSH 0x0
// 0049f7e5: LEA EAX,[ESP + 0x5f0]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f7ec: PUSH EAX
// 0049f7ed: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0049f7f2: ADD ESP,0x14
// 0049f7f5: CMP byte ptr [ESP + 0x1a0c],0x2e
//   XREF to: Stack[-0x4c4] (READ)
// 0049f7fd: JNZ 0x0049f829
//   XREF to: 0049f829 (CONDITIONAL_JUMP)
// 0049f7ff: LEA EDI,[ESP + 0x1a0c]
//   XREF to: Stack[-0x4c4] (DATA)
// 0049f806: SUB ECX,ECX
// 0049f808: DEC ECX
// 0049f809: XOR EAX,EAX
// 0049f80b: SCASB.REPNE ES:EDI
// 0049f80d: NOT ECX
// 0049f80f: DEC ECX
// 0049f810: PUSH ECX
// 0049f811: LEA EAX,[ESP + 0x1a11]
//   XREF to: Stack[-0x4c3] (DATA)
// 0049f818: PUSH EAX
// 0049f819: LEA EAX,[ESP + 0x1a14]
//   XREF to: Stack[-0x4c4] (DATA)
// 0049f820: PUSH EAX
// 0049f821: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0049f826: ADD ESP,0xc
// 0049f829: LEA EAX,[ESP + 0x6e8]
//   Label: LAB_0049f829
//   XREF to: Stack[-0x17e8] (DATA)
// 0049f830: PUSH EAX
// 0049f831: CALL crt_time.c_localtime_FUN_00600288
//   XREF to: 00600288 (UNCONDITIONAL_CALL)
// 0049f836: ADD ESP,0x4
// 0049f839: PUSH EAX
// 0049f83a: PUSH 0x62311c
//   XREF to: 0062311c (DATA)
// 0049f83f: PUSH 0x1e
// 0049f841: LEA EAX,[ESP + 0x1ea8]
//   XREF to: Stack[-0x34] (DATA)
// 0049f848: PUSH EAX
// 0049f849: CALL crt_time.c_strftime_FUN_006002d4
//   XREF to: 006002d4 (UNCONDITIONAL_CALL)
// 0049f84e: ADD ESP,0x10
// 0049f851: LEA EAX,[ESP + 0x1e9c]
//   XREF to: Stack[-0x34] (DATA)
// 0049f858: PUSH EAX
// 0049f859: MOV ECX,dword ptr [ESP + 0x6e8]
//   XREF to: Stack[-0x17ec] (READ)
// 0049f860: PUSH ECX
// 0049f861: LEA EAX,[ESP + 0x1a14]
//   XREF to: Stack[-0x4c4] (DATA)
// 0049f868: PUSH EAX
// 0049f869: LEA EAX,[ESP + 0x1118]
//   XREF to: Stack[-0xdc4] (DATA)
// 0049f870: PUSH EAX
// 0049f871: PUSH 0x623132
//   XREF to: 00623132 (DATA)
// 0049f876: LEA EAX,[ESP + 0x1de8]
//   XREF to: Stack[-0xfc] (DATA)
// 0049f87d: PUSH EAX
// 0049f87e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0049f883: ADD ESP,0x18
// 0049f886: LEA EAX,[ESP + 0x1dd4]
//   XREF to: Stack[-0xfc] (DATA)
// 0049f88d: PUSH EAX
// 0049f88e: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 0049f893: ADD ESP,0x4
// 0049f896: LEA EAX,[ESP + 0x1dd4]
//   XREF to: Stack[-0xfc] (DATA)
// 0049f89d: PUSH EAX
// 0049f89e: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f8a2: PUSH EAX
// 0049f8a3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0049f8a8: ADD ESP,0x8
// 0049f8ab: JMP 0x0049f529
//   XREF to: 0049f529 (UNCONDITIONAL_JUMP)
// 0049f8b0: MOV EDI,dword ptr [ESP + 0x8]
//   Label: LAB_0049f8b0
//   XREF to: Stack[-0x1ec8] (READ)
// 0049f8b4: INC ESI
// 0049f8b5: CMP ESI,EDI
// 0049f8b7: JL 0x0049f56e
//   XREF to: 0049f56e (CONDITIONAL_JUMP)
// 0049f8bd: JMP 0x0049f5e2
//   XREF to: 0049f5e2 (UNCONDITIONAL_JUMP)
// 0049f8c2: PUSH 0x62314e
//   Label: LAB_0049f8c2
//   XREF to: 0062314e (DATA)
// 0049f8c7: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f8ce: PUSH EAX
// 0049f8cf: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 0049f8d4: ADD ESP,0x8
// 0049f8d7: TEST EAX,EAX
// 0049f8d9: JZ 0x0049f64e
//   XREF to: 0049f64e (CONDITIONAL_JUMP)
// 0049f8df: LEA EAX,[ESP + 0x180c]
//   XREF to: Stack[-0x6c4] (DATA)
// 0049f8e6: PUSH EAX
// 0049f8e7: LEA EAX,[ESP + 0x1410]
//   XREF to: Stack[-0xac4] (DATA)
// 0049f8ee: PUSH EAX
// 0049f8ef: PUSH 0x0
// 0049f8f1: PUSH 0x0
// 0049f8f3: LEA EAX,[ESP + 0x5f0]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f8fa: PUSH EAX
// 0049f8fb: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0049f900: ADD ESP,0x14
// 0049f903: CMP byte ptr [ESP + 0x180c],0x2e
//   XREF to: Stack[-0x6c4] (READ)
// 0049f90b: JNZ 0x0049f937
//   XREF to: 0049f937 (CONDITIONAL_JUMP)
// 0049f90d: LEA EDI,[ESP + 0x180c]
//   XREF to: Stack[-0x6c4] (DATA)
// 0049f914: SUB ECX,ECX
// 0049f916: DEC ECX
// 0049f917: XOR EAX,EAX
// 0049f919: SCASB.REPNE ES:EDI
// 0049f91b: NOT ECX
// 0049f91d: DEC ECX
// 0049f91e: PUSH ECX
// 0049f91f: LEA EAX,[ESP + 0x1811]
//   XREF to: Stack[-0x6c3] (DATA)
// 0049f926: PUSH EAX
// 0049f927: LEA EAX,[ESP + 0x1814]
//   XREF to: Stack[-0x6c4] (DATA)
// 0049f92e: PUSH EAX
// 0049f92f: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 0049f934: ADD ESP,0xc
// 0049f937: LEA EAX,[ESP + 0x180c]
//   Label: LAB_0049f937
//   XREF to: Stack[-0x6c4] (DATA)
// 0049f93e: PUSH EAX
// 0049f93f: LEA EAX,[ESP + 0x1410]
//   XREF to: Stack[-0xac4] (DATA)
// 0049f946: PUSH EAX
// 0049f947: PUSH 0x623150
//   XREF to: 00623150 (DATA)
// 0049f94c: LEA EAX,[ESP + 0x1d18]
//   XREF to: Stack[-0x1c4] (DATA)
// 0049f953: PUSH EAX
// 0049f954: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0049f959: ADD ESP,0x10
// 0049f95c: LEA EAX,[ESP + 0x1d0c]
//   XREF to: Stack[-0x1c4] (DATA)
// 0049f963: PUSH EAX
// 0049f964: CALL crt_string.c_strupr_FUN_00600770
//   XREF to: 00600770 (UNCONDITIONAL_CALL)
// 0049f969: ADD ESP,0x4
// 0049f96c: LEA EAX,[ESP + 0x1d0c]
//   XREF to: Stack[-0x1c4] (DATA)
// 0049f973: PUSH EAX
// 0049f974: JMP 0x0049f641
//   XREF to: 0049f641 (UNCONDITIONAL_JUMP)
// 0049f979: PUSH 0x0
//   Label: LAB_0049f979
// 0049f97b: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049f982: PUSH EAX
// 0049f983: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   Label: LAB_0049f983
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 0049f988: ADD ESP,0x8
// 0049f98b: PUSH 0x0
// 0049f98d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049f991: PUSH EAX
// 0049f992: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0049f997: ADD ESP,0x8
// 0049f99a: LEA EAX,[ESP + 0xa00]
//   XREF to: Stack[-0x14d0] (DATA)
// 0049f9a1: PUSH EAX
// 0049f9a2: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049f9a7: ADD ESP,0x4
// 0049f9aa: MOV EAX,dword ptr [ESP + 0x1ebc]
//   XREF to: Stack[-0x14] (READ)
// 0049f9b1: POP ESI
// 0049f9b2: POP EDI
// 0049f9b3: ADD ESP,0x1ec0
// 0049f9b9: POP EBP
// 0049f9ba: POP EBX
// 0049f9bb: RET
// 0049f9bc: LEA EAX,[ESP + 0x7f8]
//   Label: LAB_0049f9bc
//   XREF to: Stack[-0x16d8] (DATA)
// 0049f9c3: PUSH EAX
// 0049f9c4: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049f9c9: ADD ESP,0x4
// 0049f9cc: TEST EAX,EAX
// 0049f9ce: JZ 0x0049f6f5
//   XREF to: 0049f6f5 (CONDITIONAL_JUMP)
// 0049f9d4: LEA EAX,[ESP + 0x7f8]
//   XREF to: Stack[-0x16d8] (DATA)
// 0049f9db: PUSH EAX
// 0049f9dc: PUSH 0x623179
//   XREF to: 00623179 (DATA)
// 0049f9e1: PUSH EBX
// 0049f9e2: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0049f9e7: ADD ESP,0xc
// 0049f9ea: LEA EAX,[ESP + 0x6f4]
//   XREF to: Stack[-0x17dc] (DATA)
// 0049f9f1: PUSH EAX
// 0049f9f2: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049f9f7: ADD ESP,0x4
// 0049f9fa: JMP 0x0049f6d0
//   XREF to: 0049f6d0 (UNCONDITIONAL_JUMP)
// 0049f9ff: CMP ESI,EBP
//   Label: LAB_0049f9ff
// 0049fa01: JL 0x0049fa91
//   XREF to: 0049fa91 (CONDITIONAL_JUMP)
// 0049fa07: PUSH 0x0
// 0049fa09: PUSH ESI
// 0049fa0a: LEA EAX,[ESP + 0xe14]
//   XREF to: Stack[-0x10c4] (DATA)
// 0049fa11: PUSH EAX
// 0049fa12: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049fa16: PUSH EAX
// 0049fa17: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049fa1c: ADD ESP,0x10
// 0049fa1f: PUSH 0x1
// 0049fa21: PUSH ESI
// 0049fa22: LEA EAX,[ESP + 0xd14]
//   XREF to: Stack[-0x11c4] (DATA)
// 0049fa29: PUSH EAX
// 0049fa2a: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049fa2e: PUSH EAX
// 0049fa2f: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049fa34: ADD ESP,0x10
// 0049fa37: LEA EAX,[ESP + 0xd0c]
//   XREF to: Stack[-0x11c4] (DATA)
// 0049fa3e: PUSH EAX
// 0049fa3f: LEA EAX,[ESP + 0xe10]
//   XREF to: Stack[-0x10c4] (DATA)
// 0049fa46: PUSH EAX
// 0049fa47: PUSH 0x0
// 0049fa49: PUSH 0x0
// 0049fa4b: LEA EAX,[ESP + 0xf1c]
//   XREF to: Stack[-0xfc4] (DATA)
// 0049fa52: PUSH EAX
// 0049fa53: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049fa58: ADD ESP,0x14
// 0049fa5b: LEA EAX,[ESP + 0xf0c]
//   XREF to: Stack[-0xfc4] (DATA)
// 0049fa62: PUSH EAX
// 0049fa63: CALL crt_io.c_chdir_FUN_006012a0
//   XREF to: 006012a0 (UNCONDITIONAL_CALL)
// 0049fa68: ADD ESP,0x4
// 0049fa6b: PUSH 0x0
// 0049fa6d: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049fa74: PUSH EAX
// 0049fa75: CALL engine_dosio.c_CFileFinder_dtor_FUN_00481c50
//   XREF to: 00481c50 (UNCONDITIONAL_CALL)
// 0049fa7a: ADD ESP,0x8
// 0049fa7d: PUSH 0x0
// 0049fa7f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049fa83: PUSH EAX
// 0049fa84: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0049fa89: ADD ESP,0x8
// 0049fa8c: JMP 0x0049f47a
//   XREF to: 0049f47a (UNCONDITIONAL_JUMP)
// 0049fa91: LEA EAX,[ESP + 0x1c0c]
//   Label: LAB_0049fa91
//   XREF to: Stack[-0x2c4] (DATA)
// 0049fa98: PUSH EAX
// 0049fa99: LEA EAX,[ESP + 0x1210]
//   XREF to: Stack[-0xcc4] (DATA)
// 0049faa0: PUSH EAX
// 0049faa1: LEA EAX,[ESP + 0x1714]
//   XREF to: Stack[-0x7c4] (DATA)
// 0049faa8: PUSH EAX
// 0049faa9: LEA EAX,[ESP + 0x1ecc]
//   XREF to: Stack[-0x10] (DATA)
// 0049fab0: PUSH EAX
// 0049fab1: LEA EAX,[ESP + 0x704]
//   XREF to: Stack[-0x17dc] (DATA)
// 0049fab8: PUSH EAX
// 0049fab9: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0049fabe: ADD ESP,0x14
// 0049fac1: LEA EAX,[ESP + 0x1c0c]
//   XREF to: Stack[-0x2c4] (DATA)
// 0049fac8: PUSH EAX
// 0049fac9: LEA EAX,[ESP + 0x1210]
//   XREF to: Stack[-0xcc4] (DATA)
// 0049fad0: PUSH EAX
// 0049fad1: LEA EAX,[ESP + 0x1714]
//   XREF to: Stack[-0x7c4] (DATA)
// 0049fad8: PUSH EAX
// 0049fad9: PUSH 0x0
// 0049fadb: LEA EAX,[ESP + 0x161c]
//   XREF to: Stack[-0x8c4] (DATA)
// 0049fae2: PUSH EAX
// 0049fae3: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049fae8: ADD ESP,0x14
// 0049faeb: PUSH 0x0
// 0049faed: PUSH ESI
// 0049faee: LEA EAX,[ESP + 0x1214]
//   XREF to: Stack[-0xcc4] (DATA)
// 0049faf5: PUSH EAX
// 0049faf6: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049fafa: PUSH EAX
// 0049fafb: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049fb00: ADD ESP,0x10
// 0049fb03: PUSH 0x1
// 0049fb05: PUSH ESI
// 0049fb06: LEA EAX,[ESP + 0x1c14]
//   XREF to: Stack[-0x2c4] (DATA)
// 0049fb0d: PUSH EAX
// 0049fb0e: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x1ec8] (DATA)
// 0049fb12: PUSH EAX
// 0049fb13: CALL shape_edittool.cpp_CStrList_getFieldAt_FUN_004a2f80
//   XREF to: 004a2f80 (UNCONDITIONAL_CALL)
// 0049fb18: ADD ESP,0x10
// 0049fb1b: LEA EAX,[ESP + 0x1c0c]
//   XREF to: Stack[-0x2c4] (DATA)
// 0049fb22: PUSH EAX
// 0049fb23: LEA EAX,[ESP + 0x1210]
//   XREF to: Stack[-0xcc4] (DATA)
// 0049fb2a: PUSH EAX
// 0049fb2b: LEA EAX,[ESP + 0x1614]
//   XREF to: Stack[-0x8c4] (DATA)
// 0049fb32: PUSH EAX
// 0049fb33: LEA EAX,[ESP + 0x1ecc]
//   XREF to: Stack[-0x10] (DATA)
// 0049fb3a: PUSH EAX
// 0049fb3b: MOV EDX,dword ptr [ESP + 0x1ef0]
//   XREF to: Stack[0x10] (READ)
// 0049fb42: PUSH EDX
// 0049fb43: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 0049fb48: ADD ESP,0x14
// 0049fb4b: PUSH 0x0
// 0049fb4d: LEA EAX,[ESP + 0x5e4]
//   XREF to: Stack[-0x18f0] (DATA)
// 0049fb54: MOV ECX,0x1
// 0049fb59: PUSH EAX
// 0049fb5a: MOV dword ptr [ESP + 0x1ec4],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 0049fb61: JMP 0x0049f983
//   XREF to: 0049f983 (UNCONDITIONAL_JUMP)
