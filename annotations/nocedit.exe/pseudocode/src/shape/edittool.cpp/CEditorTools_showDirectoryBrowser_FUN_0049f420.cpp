// Name: shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420
// Address: 0049f420
// Address Range: [[0049f420, 0049fb65]]
// Convention: __cdecl
// Signature: bool shape_edittool.cpp_CEditorTools_showDirectoryBrowser_FUN_0049f420(CEditorTools * this_ptr, char * file_pattern, bool include_files, char * initial_path)

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
  uint *puVar5;
  uint *puVar6;
  byte *pbVar7;
  char *pcVar8;
  byte bVar9;
  char *in_stack_00000014;
  byte in_stack_00000018;
  uint in_stack_00000024;
  char *in_stack_00000034;
  uint in_stack_00000040;
  byte uStack0000004c;
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
  byte auStack_18cc [8];
  char acStack_18c4 [4];
  byte auStack_18c0 [32];
  byte auStack_18a0 [204];
  time_t tStack_17d4;
  char acStack_17d0 [12];
  byte abStack_17c4 [4];
  byte auStack_17c0 [4];
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
  uint auStack_12c4 [3];
  char acStack_12b8 [4];
  char acStack_12b4 [24];
  char acStack_129c [4];
  char cStack_1298;
  byte auStack_1180 [4];
  char acStack_117c [248];
  byte auStack_1084 [8];
  char acStack_107c [256];
  char acStack_f7c [4];
  char acStack_f78 [184];
  char acStack_ec0 [12];
  char acStack_eb4 [268];
  byte auStack_da8 [16];
  char acStack_d98 [276];
  char acStack_c84 [4];
  char acStack_c80 [4];
  byte auStack_c7c [8];
  char acStack_c74 [180];
  char acStack_bc0 [4];
  char acStack_bbc [296];
  char acStack_a94 [248];
  char acStack_99c [8];
  byte auStack_994 [276];
  char acStack_880 [12];
  char acStack_874 [240];
  char acStack_784 [4];
  char acStack_780 [236];
  char acStack_694 [4];
  char cStack_690;
  byte auStack_68f [239];
  byte auStack_5a0 [4];
  char acStack_59c [232];
  char cStack_4b4;
  byte auStack_4b3 [11];
  byte auStack_4a8 [16];
  char acStack_498 [216];
  char acStack_3c0 [12];
  char acStack_3b4 [304];
  char acStack_284 [4];
  char acStack_280 [8];
  byte auStack_278 [4];
  char acStack_274 [232];
  char acStack_18c [4];
  char acStack_188 [4];
  char *apcStack_184 [41];
  char acStack_e0 [4];
  char acStack_dc [4];
  char acStack_d8 [188];
  char acStack_1c [4];
  byte auStack_18 [16];
  
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
      *(uint *)pbVar7 = *(uint *)pcVar2;
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
        *(uint *)pcVar2 = *puVar5;
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
