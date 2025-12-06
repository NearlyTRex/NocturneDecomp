// Name: core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0
// Address: 00576da0
// Address Range: [[00576da0, 00577113]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(CDemonSet *this_ptr)

{
  char cVar1;
  FILE *pFVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  int in_stack_00000008;
  int in_stack_0000000c;
  int *in_stack_00000014;
  int *in_stack_00000018;
  CDemonSet *in_stack_00000038;
  CDemonSet *in_stack_0000003c;
  char acStack_e0 [208];
  int *piVar8;
  
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  pcVar7 = &stack0xfffffeec;
  pcVar5 = &stack0xfffffeec;
  pcVar4 = (char *)(in_stack_00000008 + 0x14d0f0);
  do {
    cVar1 = *pcVar4;
    *pcVar7 = cVar1;
    pcVar6 = &stack0xfffffeec;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = &stack0xfffffeec;
  } while (cVar1 != '\0');
  do {
    pcVar7 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00576dff;
    if (*pcVar6 == '\0') break;
    pcVar7 = pcVar6 + 1;
    if (*pcVar7 == '.') goto LAB_00576dff;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar7 != '\0');
  pcVar7 = (char *)0x0;
LAB_00576dff:
  if (pcVar7 == (char *)0x0) {
    do {
      pcVar7 = pcVar5;
      if (*pcVar5 == '\0') goto LAB_00576e23;
      if (*pcVar5 == '\0') break;
      pcVar7 = pcVar5 + 1;
      if (*pcVar7 == '\0') goto LAB_00576e23;
      pcVar5 = pcVar5 + 2;
    } while (*pcVar7 != '\0');
    pcVar7 = (char *)0x0;
  }
LAB_00576e23:
  pcVar5 = ".thm";
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
  } while (cVar1 != '\0');
  if ((in_stack_0000000c == 0) &&
     (pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xfffffeec,"rb"),
     pFVar2 != (FILE *)0x0)) {
    crt_stdio_c_fread_FUN_005fd990(&DAT_03365cc0,0x2ee000,1,pFVar2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\setedit.cpp",0x152);
    return;
  }
  crt_memory_c_memset_FUN_005fde40(&DAT_03365cc0,0,0x2ee000);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&CPickList_03653fc0);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Building thumbnail images");
  iVar3 = 0;
  piVar8 = in_stack_00000018;
  if (0 < *in_stack_00000018) {
    do {
      if (piVar8[0x51] != 0) {
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      }
      core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar3,(float)*in_stack_00000014);
      piVar8 = (int *)(iVar3 + 0x1a4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *in_stack_00000018);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  if (0 < CPickList_03653fc0.base_strlist.item_count) {
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&CPickList_03653fc0,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              (&CPickList_03653fc0,"Can't open the following background images.",-1,0);
  }
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&CPickList_03653fc0);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",&stack0xffffff0c,"wb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x17d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write thumbs");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&DAT_03365cc0,0x2ee000,1,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\setedit.cpp",0x17f);
  pcVar7 = &stack0xffffff1c;
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(in_stack_00000038);
  pcVar4 = acStack_e0;
  pcVar5 = in_stack_00000038->geometry_filename;
  do {
    cVar1 = *pcVar5;
    *pcVar7 = cVar1;
    pcVar6 = acStack_e0;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar7[1] = cVar1;
    pcVar7 = pcVar7 + 2;
    pcVar6 = acStack_e0;
  } while (cVar1 != '\0');
  do {
    pcVar5 = pcVar6;
    if (*pcVar6 == '.') goto LAB_00577072;
    if (*pcVar6 == '\0') break;
    pcVar5 = pcVar6 + 1;
    if (*pcVar5 == '.') goto LAB_00577072;
    pcVar6 = pcVar6 + 2;
  } while (*pcVar5 != '\0');
  pcVar5 = (char *)0x0;
LAB_00577072:
  if (pcVar5 == (char *)0x0) {
    do {
      pcVar5 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_00577096;
      if (*pcVar4 == '\0') break;
      pcVar5 = pcVar4 + 1;
      if (*pcVar5 == '\0') goto LAB_00577096;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar5 != '\0');
    pcVar5 = (char *)0x0;
  }
LAB_00577096:
  pcVar7 = ".zth";
  do {
    cVar1 = *pcVar7;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(in_stack_0000003c,acStack_e0);
  return;
}
