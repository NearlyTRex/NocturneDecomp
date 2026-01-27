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
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  char *pcVar8;
  char *pcVar9;
  int in_stack_00000008;
  char local_118 [256];
  CDemonSet *local_18;
  int local_14;
  
  core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
  pcVar8 = local_118;
  pcVar6 = local_118;
  pcVar9 = local_118;
  pcVar7 = local_118;
  pcVar4 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar4;
    *pcVar8 = cVar1;
    pcVar5 = local_118;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
    pcVar5 = local_118;
  } while (cVar1 != '\0');
  do {
    pcVar8 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00576dff;
    if (*pcVar5 == '\0') break;
    pcVar8 = pcVar5 + 1;
    if (*pcVar8 == '.') goto LAB_00576dff;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar8 != '\0');
  pcVar8 = (char *)0x0;
LAB_00576dff:
  if (pcVar8 == (char *)0x0) {
    do {
      pcVar8 = pcVar6;
      if (*pcVar6 == '\0') goto LAB_00576e23;
      if (*pcVar6 == '\0') break;
      pcVar8 = pcVar6 + 1;
      if (*pcVar8 == '\0') goto LAB_00576e23;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar8 != '\0');
    pcVar8 = (char *)0x0;
  }
LAB_00576e23:
  pcVar6 = ".thm";
  do {
    cVar1 = *pcVar6;
    *pcVar8 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar8[1] = cVar1;
    pcVar8 = pcVar8 + 2;
  } while (cVar1 != '\0');
  if ((in_stack_00000008 == 0) &&
     (pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",local_118,"rb"),
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
  if (0 < this_ptr->camera_count) {
    local_18 = this_ptr;
    do {
      if (local_18->cameras[0].is_panning != 0) {
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
        core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      }
      core_setedit_cpp_OpenSomethingBackdropThumbs_FUN_005769a0();
      local_14 = iVar3;
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar3,(float)this_ptr->camera_count);
      local_18 = (CDemonSet *)&local_18->cameras[0].unk4;
      iVar3 = iVar3 + 1;
    } while (iVar3 < this_ptr->camera_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  if (0 < CPickList_03653fc0.base.item_count) {
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90(&CPickList_03653fc0,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              (&CPickList_03653fc0,"Can't open the following background images.",-1,0);
  }
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&CPickList_03653fc0);
  pFVar2 = engine_dosio_c_getFile_FUN_00481a50("data",local_118,"wb");
  if (pFVar2 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x17d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write thumbs");
  }
  crt_stdio_c_fwrite_FUN_005fdc00(&DAT_03365cc0,0x2ee000,1,pFVar2);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar2,"..\\core\\setedit.cpp",0x17f);
  core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(this_ptr);
  pcVar6 = this_ptr->geometry_filename;
  do {
    cVar1 = *pcVar6;
    *pcVar9 = cVar1;
    pcVar8 = local_118;
    if (cVar1 == '\0') break;
    cVar1 = pcVar6[1];
    pcVar6 = pcVar6 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
    pcVar8 = local_118;
  } while (cVar1 != '\0');
  do {
    pcVar6 = pcVar8;
    if (*pcVar8 == '.') goto LAB_00577072;
    if (*pcVar8 == '\0') break;
    pcVar6 = pcVar8 + 1;
    if (*pcVar6 == '.') goto LAB_00577072;
    pcVar8 = pcVar8 + 2;
  } while (*pcVar6 != '\0');
  pcVar6 = (char *)0x0;
LAB_00577072:
  if (pcVar6 == (char *)0x0) {
    do {
      pcVar6 = pcVar7;
      if (*pcVar7 == '\0') goto LAB_00577096;
      if (*pcVar7 == '\0') break;
      pcVar6 = pcVar7 + 1;
      if (*pcVar6 == '\0') goto LAB_00577096;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar6 != '\0');
    pcVar6 = (char *)0x0;
  }
LAB_00577096:
  pcVar7 = ".zth";
  do {
    cVar1 = *pcVar7;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar7[1];
    pcVar7 = pcVar7 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,local_118);
  return;
}
