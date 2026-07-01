// Name: core_setedit.cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0
// Address: 00576da0
// Address Range: [[00576da0, 00577113]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet *this_ptr,int force_rebuild)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(CDemonSet *this_ptr,int force_rebuild)

{
  char cVar2;
  _FILE *p_Var2;
  _FILE *file;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar3;
  char *pcVar6;
  char *pcVar10;
  int thumbnail_index;
  int thumbnail_index_00;
  char *pcVar7;
  char *pcVar8;
  C3DSCamera *prefix;
  char *pcVar9;
  char local_118 [256];
  CDemonSet *local_18;
  int local_14;
  char cVar1;
  
  core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(this_ptr);
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
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar8[1] = cVar2;
    pcVar8 = pcVar8 + 2;
    pcVar5 = local_118;
  } while (cVar2 != '\0');
  do {
    pcVar3 = pcVar5;
    if (*pcVar5 == '.') goto LAB_00576dff;
    if (*pcVar5 == '\0') break;
    pcVar3 = pcVar5 + 1;
    if (*pcVar3 == '.') goto LAB_00576dff;
    pcVar5 = pcVar5 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_00576dff:
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar6;
      if (*pcVar6 == '\0') goto LAB_00576e23;
      if (*pcVar6 == '\0') break;
      pcVar3 = pcVar6 + 1;
      if (*pcVar3 == '\0') goto LAB_00576e23;
      pcVar6 = pcVar6 + 2;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
  }
LAB_00576e23:
  pcVar10 = ".thm";
  do {
    cVar2 = *pcVar10;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  if ((force_rebuild == 0) &&
     (p_Var2 = engine_dosio_cpp_getFile_FUN_00481a50("data",local_118,"rb"),
     p_Var2 != (_FILE *)0x0)) {
    _fread(g_ThumbnailImageBuffer,0x2ee000,1,p_Var2);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var2,"..\\core\\setedit.cpp",338);
    return;
  }
  memset(g_ThumbnailImageBuffer,0,0x2ee000);
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_MissingBackdropFiles);
  shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
            (g_CEditorToolsPtr,"Building thumbnail images");
  thumbnail_index = 0;
  iVar3 = 0;
  if (0 < this_ptr->camera_count) {
    prefix = this_ptr->cameras;
    local_18 = this_ptr;
    do {
      thumbnail_index_00 = thumbnail_index + 1;
      if (local_18->cameras[0].is_panning == 0) {
        pcVar3 = s_b_s_p_d_p_p_d_p_00646726;
      }
      else {
        core_setedit_cpp_loadCameraThumbnail_FUN_005769a0(prefix->name,"w",thumbnail_index)
        ;
        core_setedit_cpp_loadCameraThumbnail_FUN_005769a0
                  (prefix->name,"n",thumbnail_index_00);
        core_setedit_cpp_loadCameraThumbnail_FUN_005769a0
                  (prefix->name,"e",thumbnail_index + 2);
        pcVar3 = "s";
        thumbnail_index_00 = thumbnail_index + 4;
        thumbnail_index = thumbnail_index + 3;
      }
      core_setedit_cpp_loadCameraThumbnail_FUN_005769a0(prefix->name,pcVar3,thumbnail_index);
      shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                (g_CEditorToolsPtr,(float)iVar3,(float)this_ptr->camera_count);
      local_18 = (CDemonSet *)&local_18->cameras[0].enabled;
      iVar3 = iVar3 + 1;
      prefix = prefix + 1;
      thumbnail_index = thumbnail_index_00;
    } while (iVar3 < this_ptr->camera_count);
  }
  shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
  if (0 < g_MissingBackdropFiles.base.item_count) {
    shape_edittool_cpp_CPickList_setCancelButtonText_FUN_004a3d90
              (&g_MissingBackdropFiles,(char *)0x0);
    shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
              (&g_MissingBackdropFiles,"Can't open the following background images.",-1,0);
  }
  shape_edittool_cpp_CPickList_clear_FUN_004a5770(&g_MissingBackdropFiles);
  file = engine_dosio_cpp_getFile_FUN_00481a50("data",local_118,"wb");
  if (file == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 381;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Unable to write thumbs");
  }
  _fwrite(g_ThumbnailImageBuffer,0x2ee000,1,file);
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",383);
  core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(this_ptr);
  pcVar3 = this_ptr->geometry_filename;
  do {
    cVar2 = *pcVar3;
    *pcVar9 = cVar2;
    pcVar10 = local_118;
    if (cVar2 == '\0') break;
    cVar2 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
    pcVar10 = local_118;
  } while (cVar2 != '\0');
  do {
    pcVar3 = pcVar10;
    if (*pcVar10 == '.') goto LAB_00577072;
    if (*pcVar10 == '\0') break;
    pcVar3 = pcVar10 + 1;
    if (*pcVar3 == '.') goto LAB_00577072;
    pcVar10 = pcVar10 + 2;
  } while (*pcVar3 != '\0');
  pcVar3 = (char *)0x0;
LAB_00577072:
  if (pcVar3 == (char *)0x0) {
    do {
      pcVar3 = pcVar7;
      if (*pcVar7 == '\0') goto LAB_00577096;
      if (*pcVar7 == '\0') break;
      pcVar3 = pcVar7 + 1;
      if (*pcVar3 == '\0') goto LAB_00577096;
      pcVar7 = pcVar7 + 2;
    } while (*pcVar3 != '\0');
    pcVar3 = (char *)0x0;
  }
LAB_00577096:
  pcVar10 = ".zth";
  do {
    cVar2 = *pcVar10;
    *pcVar3 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar10[1];
    pcVar10 = pcVar10 + 2;
    pcVar3[1] = cVar2;
    pcVar3 = pcVar3 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_CDemonSet_writeThumbs_FUN_00575e40(this_ptr,local_118);
  return;
}
