// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// Address Range: [[00578d80, 0057a0b4]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80()
// Cross-references:
//   core_setedit.cpp_CDemonSet_OpenAndProcessFileMaybe_FUN_00578a20 (00578a20) at 00578c0d [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Import_geometry_00646bd8
//   TerminatedCString s_Import_omni_lights_00646be8
//   TerminatedCString s_Import_spot_lights_00646bfb
//   TerminatedCString s_Import_cameras_00646c0e
//   TerminatedCString s_Nothing_to_do_00646c1d
//   TerminatedCString s_There_are_currently_no_l_00646c2c
//   TerminatedCString s_There_are_currently_no_c_00646c99
//   TerminatedCString s_Precompute_light_visibil_00646d07
//   TerminatedCString s_Precompute_fog_00646d24
//   TerminatedCString s_Reading_S3D_header_parts_00646d34
//   TerminatedCString s_d_00646d5d
//   TerminatedCString s_core_setedit_cpp_00646d61
//   TerminatedCString s_Can_t_import_S3D_file_ve_00646d75
//   TerminatedCString s_d_d_d_d_d_d_d_00646db1
//   TerminatedCString s_core_setedit_cpp_00646dc7
//   TerminatedCString s_Scene_contains_d_frames__00646ddb
//   TerminatedCString s_core_setedit_cpp_00646e1a
//   TerminatedCString s_Scene_contains_d_cameras_00646e2e
//   TerminatedCString s_Skipping_part_list_00646e6b
//   TerminatedCString s_txt_00646e7e
//   TerminatedCString s_Reading_textures_00646e83
//   TerminatedCString s_core_setedit_cpp_00646e94
//   TerminatedCString s_Too_many_textures_00646ea8
//   TerminatedCString s_core_setedit_cpp_00646ebb
//   TerminatedCString s_a_t_00646ecf
//   TerminatedCString s_Warning_Can_t_create_app_00646ed3
//   TerminatedCString s_s_s_00646ef3
//   TerminatedCString s_core_setedit_cpp_00646efb
//   TerminatedCString s_You_have_some_new_textur_00646f0f
//   TerminatedCString s_You_have_some_textures_w_00646f9b
//   TerminatedCString s_Edit_the_gound_types_now_00646ff8
//   TerminatedCString s_Just_leave_the_default_a_00647012
//   TerminatedCString s_core_setedit_cpp_0064705c
//   TerminatedCString s_Skipping_textures_00647070
//   TerminatedCString s_Skipping_polygons_00647082
//   TerminatedCString s_Reading_vertices_00647094
//   TerminatedCString s_core_setedit_cpp_006470a5
//   TerminatedCString s_core_setedit_cpp_006470b9
//   TerminatedCString s_Can_t_allocate_memory_fo_006470cd
//   TerminatedCString s_f_f_f_006470f3
//   TerminatedCString s_core_setedit_cpp_006470fd
//   TerminatedCString s_File_is_corrupt_on_verte_00647111
//   TerminatedCString s_Locating_lights_00647134
//   TerminatedCString s_core_setedit_cpp_00647144
//   TerminatedCString s_unknown_light_type_d_00647158
//   TerminatedCString s_Reading_lights_0064716f
//   TerminatedCString s_core_setedit_cpp_0064717e
//   TerminatedCString s_unknown_light_type_d_00647192
//   TerminatedCString s_core_setedit_cpp_006471a9
//   TerminatedCString s_Too_many_lights_006471bd
//   TerminatedCString s_Reading_cameras_006471ce
//   TerminatedCString s_Reading_polygons_006471de
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_006471ef
//   TerminatedCString s_core_setedit_cpp_00647211
//   TerminatedCString s_File_is_corrupt_on_poly__00647225
//   TerminatedCString s_core_setedit_cpp_00647246
//   TerminatedCString s_Saving_raytrace_database_0064725a
//   TerminatedCString s_Precalcs_for_virtual_dir_00647273
//   TerminatedCString s_Deleting_possibly_out_of_00647291
//   TerminatedCString s_backdrop_s_fog_006472b9
//   TerminatedCString s_backdrop_s_pvs_006472c9
//   TerminatedCString s_core_setedit_cpp_006472d9
//   TerminatedCString s_CDemonSet_importS3D_comp_006472ed
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   TerminatedCString s_GroundTypes_006816d8
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
//   CDemonRaytrace g_CDemonRaytraceInstance
//   undefined4 DAT_03364d18
//   undefined4 DAT_03365cb8
//   undefined4 DAT_03654368
//   undefined4 DAT_03654370
//   undefined4 DAT_03654398
//   undefined1 DAT_03659190
// Function calls:
//   core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
//   core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
//   core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
//   core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
//   core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
//   core_ground.cpp_getGroundTypeName_FUN_004eed80
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_set.cpp_CDemonSet_clear_FUN_005693c0
//   core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   core_setedit.cpp_BackdropMaybe_FUN_005805a0
//   core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
//   core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
//   core_setedit.cpp_FUN_00578c90
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420
//   core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
//   core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
//   core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
//   crt_io.c_deleteFile_FUN_005ff9d0
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_stdio.c_fseek_FUN_005ffacc
//   crt_stdio.c_ftell_FUN_00601560
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_memmove_FUN_005fe5e0
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   engine_dosio.c_makePath_FUN_00481f50
//   engine_dosio.c_splitPath_FUN_00481f20
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_debugFree_FUN_0050f460
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* Signature: void core_setedit.cpp_CDemonSet_importS3D(CDemonSet* param_1, undefined4 param_2, int*
   param_3) */

void core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80
               (undefined4 param_1,undefined4 param_2,int unaff_EBX,undefined4 param_4,int param_5,
               int param_6,int param_7,int param_8,undefined4 param_9,FILE *param_10,FILE *param_11,
               uint *param_12,char *param_13,int param_14,FILE *param_15,FILE *param_16,int param_17
               ,FILE *param_18,FILE *param_19,int param_20,char *param_21,FILE *param_22,
               FILE *param_23)

{
  bool bVar1;
  CEditorTools *this_ptr;
  FILE *pFVar2;
  CDemonSet *file;
  uchar triangle_flags;
  int iVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  FILE *pFVar8;
  void *dest;
  int iVar9;
  C3DSCamera *pCVar10;
  CDemonSet *pCVar11;
  BADSPACEBASE *in_ESP;
  char *pcVar12;
  void *src;
  int unaff_ESI;
  streambuf **ppsVar13;
  undefined4 *puVar14;
  int unaff_EDI;
  int *piVar15;
  char *pcVar16;
  byte bVar17;
  int in_stack_0000005c;
  int in_stack_00000064;
  FILE *in_stack_00000068;
  FILE *in_stack_0000006c;
  CDemonSet *in_stack_00000070;
  FILE *in_stack_00000074;
  FILE *in_stack_00000078;
  FILE *in_stack_0000007c;
  CDemonSet *in_stack_00000080;
  int in_stack_00000084;
  CDemonSet *in_stack_00000088;
  FILE *in_stack_0000008c;
  FILE *in_stack_00000090;
  int in_stack_00000094;
  float afStackY_39a0 [1357];
  CPickList *in_stack_ffffdbfc;
  uint in_stack_ffffdc00;
  uint in_stack_ffffdc04;
  uint in_stack_ffffdc08;
  uint in_stack_ffffdc0c;
  uint in_stack_ffffdc10;
  char *in_stack_ffffdc14;
  undefined4 in_stack_ffffdc18;
  float fStack_22e4;
  float fStack_22e0;
  float fStack_22dc;
  float fStack_22d8;
  float fStack_22d4;
  float fStack_22d0;
  float fStack_22cc;
  char acStack_22c8 [4];
  char acStack_22c4 [4];
  undefined4 auStack_22c0 [63];
  char acStack_21c4 [4];
  undefined4 auStack_21c0 [999];
  float fStack_1224;
  float fStack_1220;
  float fStack_121c;
  char acStack_1218 [4];
  float fStack_1214;
  float fStack_1210;
  float fStack_120c;
  float fStack_1208;
  int iStack_1204;
  int iStack_1200;
  char acStack_11fc [4];
  char acStack_11f8 [4];
  undefined4 auStack_11f4 [320];
  undefined4 auStack_cf4 [32];
  undefined4 local_c74 [32];
  int iStack_bf4;
  int iStack_bf0;
  int iStack_bec;
  int local_be8;
  CDemonFilter *local_be4;
  CDemonFilter *local_be0;
  CDemonFilter *pCStack_bdc;
  undefined4 auStack_bd8 [23];
  undefined1 auStack_b7c [16];
  undefined1 auStack_b6c [8];
  CPickList CStack_b64;
  undefined1 auStack_65c [4];
  char acStack_658 [16];
  char acStack_648 [240];
  char acStack_558 [16];
  char acStack_548 [260];
  char acStack_444 [4];
  char acStack_440 [236];
  char acStack_354 [4];
  char acStack_350 [4];
  undefined1 auStack_34c [304];
  char acStack_21c [4];
  char acStack_218 [4];
  char acStack_214 [4];
  char acStack_210 [184];
  char acStack_158 [8];
  char acStack_150 [224];
  int local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_58;
  int local_54;
  int local_48;
  int local_40;
  int local_34;
  int local_30;
  undefined1 local_2c [4];
  undefined1 local_28 [4];
  undefined1 local_24 [4];
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  int local_14;
  
  bVar17 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_70 = core_setedit_cpp_FUN_00578c90();
  if ((((local_70 < 0) || (iVar3 = core_setedit_cpp_FUN_00578c90(), iVar3 < 0)) ||
      (local_68 = iVar3, iVar4 = core_setedit_cpp_FUN_00578c90(), iVar4 < 0)) ||
     (local_60 = iVar4, local_58 = core_setedit_cpp_FUN_00578c90(), local_58 < 0)) {
    return;
  }
  if ((iVar3 == 0) && (iVar4 == 0)) {
    local_54 = 0;
  }
  else {
    local_54 = 1;
  }
  if (((local_64 == 0) && (local_54 == 0)) && (local_58 == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to do!");
    return;
  }
  if (((local_54 == 0) && (param_10[0xea6]._cnt < 1)) &&
     (iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no lights currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar3 == 0)) {
    return;
  }
  if (((local_54 == 0) && ((int)param_11->_ptr < 1)) &&
     (iVar3 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no cameras currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar3 == 0)) {
    return;
  }
  local_48 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute light visibility?");
  local_40 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute fog?");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading S3D header, parts, and materials");
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(param_15);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(param_16,"%d\n",&local_34);
  pFVar8 = param_18;
  if (local_30 != 0x67) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x490;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't import S3D file version %d, I can only do version %d.",local_30,0x67);
    pFVar8 = param_18;
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (param_19,"%d,%d,%d,%d,%d,%d,%d\n",local_24,local_20,local_1c,&local_14,local_18,
             &stack0xfffffff0,&stack0xfffffff4);
  if (local_14 != 1) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x49a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Scene contains %d frames.  Only single-frame scenes supported.",local_14);
  }
  if ((local_30 != 0) && (0xfa < unaff_EBX)) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x4a1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Scene contains %d cameras.  Maximum number of cameras is %d.",unaff_EBX,0xfa)
    ;
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping part list");
  pFVar8 = param_22;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    pFVar2 = param_23;
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  iVar3 = 0;
  pFVar8 = param_22;
  if (0 < unaff_EBX) {
LAB_00578fc0:
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
      if (-1 < iVar4) {
        if (iVar4 != 10) goto LAB_00578fc0;
      }
      iVar3 = iVar3 + 1;
      pFVar8 = param_22;
    } while (iVar3 < unaff_ESI);
  }
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  if (local_34 != 0) {
    crt_stdio_c_ftell_FUN_00601560(param_23);
    param_12 = &param_23[0xbe51]._bufsize;
    do {
      DAT_03654368 = 0;
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80
                (".\\GroundTypes",(char *)&param_17,acStack_158);
      engine_dosio_c_splitPath_FUN_00481f20
                (param_13,(char *)0x0,(char *)0x0,acStack_354,(char *)0x0);
      engine_dosio_c_makePath_FUN_00481f50
                (acStack_658,(char *)&param_19,acStack_150,acStack_350,".txt");
      core_setedit_cpp_ImportingGroundTextures_FUN_00578420();
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading textures");
      if (1000 < param_5) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0x4cc;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
      }
      iVar3 = 0;
      param_17 = 0;
      bVar1 = false;
      if (0 < param_6) {
        iVar4 = 0;
        do {
          crt_stdio_c_fgets_FUN_005fefd0(acStack_548 + 4,0x104,in_stack_00000068);
          pcVar16 = acStack_548;
          do {
            pcVar12 = pcVar16;
            if (*pcVar16 == '\n') goto LAB_0057979a;
            if (*pcVar16 == '\0') break;
            pcVar12 = pcVar16 + 1;
            if (*pcVar12 == '\n') goto LAB_0057979a;
            pcVar16 = pcVar16 + 2;
          } while (*pcVar12 != '\0');
          pcVar12 = (char *)0x0;
LAB_0057979a:
          if (pcVar12 != (char *)0x0) {
            pcVar16 = acStack_548;
            do {
              pcVar12 = pcVar16;
              if (*pcVar16 == '\n') goto LAB_005797bd;
              if (*pcVar16 == '\0') break;
              pcVar12 = pcVar16 + 1;
              if (*pcVar12 == '\n') goto LAB_005797bd;
              pcVar16 = pcVar16 + 2;
            } while (*pcVar12 != '\0');
            pcVar12 = (char *)0x0;
LAB_005797bd:
            *pcVar12 = '\0';
          }
          iVar9 = 0;
          engine_dosio_c_splitPath_FUN_00481f20
                    (acStack_548,(char *)0x0,(char *)0x0,acStack_444,(char *)0x0);
          if (0 < DAT_03654368) {
            pcVar16 = &DAT_03654370;
            do {
              iVar6 = crt_string_c_stricmp_FUN_005fe7f0(pcVar16,acStack_440);
              if (iVar6 == 0) {
                if (-1 < iVar9) {
                  uVar7 = (uint)(byte)(&DAT_03659190)[iVar9];
                  goto LAB_0057981a;
                }
                break;
              }
              iVar9 = iVar9 + 1;
              pcVar16 = pcVar16 + 0x28;
            } while (iVar9 < DAT_03654368);
          }
          uVar7 = 0xffffffff;
LAB_0057981a:
          *(uint *)((int)&DAT_03364d18 + iVar4) = uVar7;
          if ((int)uVar7 < 0) {
            pFVar8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (acStack_648,(char *)0x0,"a+t","..\\core\\setedit.cpp",
                                0x4e1);
            if (pFVar8 == (FILE *)0x0) {
              if (DAT_03365cb8 == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Warning: Can't create/append %s",auStack_65c);
                DAT_03365cb8 = 1;
              }
            }
            else {
              engine_dosio_c_splitPath_FUN_00481f20
                        (acStack_558,(char *)0x0,(char *)0x0,acStack_354,(char *)0x0);
              pcVar16 = core_ground_cpp_getGroundTypeName_FUN_004eed80(0);
              crt_stdio_c_fprintf_FUN_005fe6d0(pFVar8,"%s, %s\n",auStack_34c,pcVar16);
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\setedit.cpp",0x4eb);
            }
            *(undefined4 *)((int)&DAT_03364d18 + iVar4) = 0;
            core_setedit_cpp_DefineTexturesMaybe_FUN_00578290();
            bVar1 = true;
          }
          else if (uVar7 == 0) {
            param_17 = 1;
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 4;
        } while (iVar3 < param_6);
      }
      if ((!bVar1) && (param_17 == 0)) goto LAB_0057904b;
      if (bVar1) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_b64.cancel_button.button_text + 0xb0,"You have some new textures which have not been groun typed\nThey have been added to %s and assigned DEFAULT\nWhat do you want to do about it?",
                   acStack_648);
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (CStack_b64.cancel_button.button_text + 0xb0,"You have some textures which are currently assigned DEFAULT\nWhat do you want to do about it?");
      }
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_b7c);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_b7c + 4),"Edit the gound types now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                ((CStrList *)(auStack_b7c + 8),"Just leave the default assignments for now.  I can always fix this later.");
      iVar3 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        ((CPickList *)(auStack_b7c + 0xc),
                         CStack_b64.cancel_button.button_text + 0xc0,-1,0);
      if (iVar3 < 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_0000007c,"..\\core\\setedit.cpp",0x516)
        ;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)(auStack_b6c + 4),0,in_stack_ffffdc00,in_stack_ffffdc04,
                   in_stack_ffffdc08,in_stack_ffffdc0c,in_stack_ffffdc10);
        return;
      }
      if (iVar3 != 0) goto LAB_00579a7e;
      core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630();
      crt_stdio_c_fseek_FUN_005ffacc((FILE *)in_stack_00000080,(long)param_21,0);
      in_stack_ffffdc00 = 0;
      in_stack_ffffdbfc = &CStack_b64;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (in_stack_ffffdbfc,0,in_stack_ffffdc04,in_stack_ffffdc08,in_stack_ffffdc0c,
                 in_stack_ffffdc10,(uint)in_stack_ffffdc14);
    } while( true );
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping textures");
  pFVar8 = in_stack_00000068;
  iVar3 = 0;
  if (0 < param_6) {
LAB_0057902d:
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (-1 < iVar4) {
        if (iVar4 != 10) goto LAB_0057902d;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < param_6);
  }
LAB_0057904b:
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping polygons");
  pFVar8 = in_stack_0000006c;
  do {
    iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar3 < 0) break;
  } while (iVar3 != 10);
  lVar5 = crt_stdio_c_ftell_FUN_00601560((FILE *)in_stack_00000070);
  pFVar8 = in_stack_00000074;
  iVar3 = 0;
  if (0 < (int)param_10) {
LAB_005790a3:
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (-1 < iVar4) {
        if (iVar4 != 10) goto LAB_005790a3;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_10);
  }
  pCVar11 = in_stack_00000070;
  param_17 = 0;
  if (unaff_EDI == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Locating lights");
    pCVar11 = in_stack_00000088;
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar11);
      file = in_stack_00000088;
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < lVar5) {
LAB_0057911a:
      do {
        iVar4 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)file);
        if (-1 < iVar4) {
          if (iVar4 != 10) goto LAB_0057911a;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < lVar5);
    }
  }
  else {
    core_set_cpp_CDemonSet_clear_FUN_005693c0(in_stack_00000070);
    core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(&g_CDemonRaytraceInstance);
    this_ptr = g_CEditorToolsPtr;
    pCVar11->set_scale_factor = 1.0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Reading vertices");
    pcVar16 = (char *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (param_14 * 0xc + 4,"..\\core\\setedit.cpp",0x547);
    param_21 = pcVar16;
    if (pcVar16 != (char *)0x0) {
      param_21 = pcVar16 + 4;
      *(FILE **)pcVar16 = param_15;
    }
    pCVar11 = in_stack_00000088;
    if (param_21 == (char *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x548;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't allocate memory for %d vertices",param_15);
      pCVar11 = in_stack_00000088;
    }
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar11);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < param_17) {
      ppsVar13 = &param_23->_link;
      piVar15 = &param_23->_cnt;
      do {
        iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                          ((FILE *)in_stack_00000088,"%f,%f,%f\n",&param_22->_ptr + iVar3 * 3,
                           piVar15,ppsVar13);
        if (iVar4 != 3) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x54f;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on vertex %d of %d",iVar3,param_17);
        }
        piVar15 = piVar15 + 3;
        iVar3 = iVar3 + 1;
        ppsVar13 = ppsVar13 + 3;
      } while (iVar3 < lVar5);
    }
  }
  pCVar11 = in_stack_00000088;
  if (param_10 == (FILE *)0x0) {
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840((FILE *)pCVar11);
      pFVar8 = in_stack_0000008c;
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < param_20) {
LAB_00579173:
      do {
        iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (-1 < iVar4) {
          if (iVar4 != 10) goto LAB_00579173;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < param_20);
    }
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(in_stack_00000084 + 0x19a2c)) {
      dest = (void *)(in_stack_00000084 + 0x19a30);
      src = (void *)(in_stack_00000084 + 0x1b2c8);
      iVar4 = in_stack_00000084;
      do {
        iVar9 = param_8;
        if ((*(int *)(iVar4 + 0x19a30) != 0) && (iVar9 = param_7, *(int *)(iVar4 + 0x19a30) != 1)) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x56b;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d","unknown light type: %d",
                     *(undefined4 *)(iVar4 + 0x19a30));
          iVar9 = in_stack_0000005c;
        }
        in_stack_0000005c = iVar9;
        if (in_stack_0000005c == 0) {
          dest = (void *)((int)dest + 0x1898);
          src = (void *)((int)src + 0x1898);
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x1898;
        }
        else {
          iVar9 = *(int *)(in_stack_00000084 + 0x19a2c) + -1;
          *(int *)(in_stack_00000084 + 0x19a2c) = iVar9;
          crt_string_c_memmove_FUN_005fe5e0(dest,src,(iVar9 - iVar3) * 0x1898);
        }
      } while (iVar3 < *(int *)(in_stack_00000084 + 0x19a2c));
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading lights");
    pFVar8 = in_stack_0000008c;
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    param_7 = 0;
    if (0 < (int)param_21) {
      in_stack_0000006c = (FILE *)&in_stack_0000008c[0xea6]._link;
      do {
        core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffdc0c);
        core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                  ((C3DSLight *)&stack0xffffdc10,in_stack_00000090);
        pFVar8 = param_11;
        if ((in_stack_ffffdc14 != (char *)0x0) &&
           (pFVar8 = param_10, in_stack_ffffdc14 != (char *)0x1)) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x589;
          core_main_c_displayErrorAndQuit_FUN_00506f10("unknown light type: %d");
          pFVar8 = in_stack_0000006c;
        }
        in_stack_0000006c = pFVar8;
        if (in_stack_00000070 != (CDemonSet *)0x0) {
          if (199 < *(int *)(in_stack_00000094 + 0x19a2c)) {
            in_stack_ffffdc14 = "Too many lights!";
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x58f;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many lights!");
          }
          pcVar12 = (char *)(*(int *)(in_stack_00000094 + 0x19a2c) * 0x1898 + (int)in_stack_00000074
                            );
          *(undefined4 *)pcVar12 = in_stack_ffffdc18;
          puVar14 = (undefined4 *)&stack0xffffdc1c;
          pcVar16 = pcVar12 + 4;
          for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          if ((float *)(pcVar12 + 0x104) != &stack0xffffdd1c) {
            *(float *)(pcVar12 + 0x104) = fStack_22e4;
            *(float *)(pcVar12 + 0x108) = fStack_22e0;
            *(float *)(pcVar12 + 0x10c) = fStack_22dc;
          }
          if ((float *)(pcVar12 + 0x110) != &stack0xffffdd28) {
            *(float *)(pcVar12 + 0x110) = fStack_22d8;
            *(float *)(pcVar12 + 0x114) = fStack_22d4;
            *(float *)(pcVar12 + 0x118) = fStack_22d0;
          }
          *(float *)(pcVar12 + 0x11c) = fStack_22cc;
          *(char (*) [4])(pcVar12 + 0x120) = acStack_22c8;
          *(char (*) [4])(pcVar12 + 0x124) = acStack_22c4;
          puVar14 = auStack_22c0;
          pcVar16 = pcVar12 + 0x128;
          for (iVar3 = 0x3e; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          *(undefined2 *)pcVar16 = *(undefined2 *)puVar14;
          pcVar16 = pcVar12 + (uint)bVar17 * -8 + 0x228;
          *(char (*) [4])(pcVar12 + 0x224) = acStack_21c4;
          *(undefined4 *)pcVar16 = auStack_21c0[(uint)bVar17 * -2];
          *(undefined4 *)(pcVar16 + (uint)bVar17 * -8 + 4) =
               auStack_21c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          *(undefined4 *)(pcVar16 + (uint)bVar17 * -8 + 4 + (uint)bVar17 * -8 + 4) =
               (auStack_21c0 + (uint)bVar17 * -2 + (uint)bVar17 * -2 + 1)[(uint)bVar17 * -2 + 1];
          *(float *)(pcVar12 + 0x11c4) = fStack_1224;
          *(float *)(pcVar12 + 0x11c8) = fStack_1220;
          *(float *)(pcVar12 + 0x11cc) = fStack_121c;
          *(char (*) [4])(pcVar12 + 0x11d0) = acStack_1218;
          *(float *)(pcVar12 + 0x11d4) = fStack_1214;
          *(float *)(pcVar12 + 0x11d8) = fStack_1210;
          *(float *)(pcVar12 + 0x11dc) = fStack_120c;
          *(float *)(pcVar12 + 0x11e0) = fStack_1208;
          *(int *)(pcVar12 + 0x11e4) = iStack_1204;
          *(int *)(pcVar12 + 0x11e8) = iStack_1200;
          *(char (*) [4])(pcVar12 + 0x11ec) = acStack_11fc;
          *(char (*) [4])(pcVar12 + 0x11f0) = acStack_11f8;
          puVar14 = auStack_11f4;
          pcVar16 = pcVar12 + 0x11f4;
          for (iVar3 = 0x140; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          puVar14 = auStack_cf4;
          pcVar16 = pcVar12 + 0x16f4;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          puVar14 = local_c74;
          pcVar16 = pcVar12 + 0x1774;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          *(int *)(pcVar12 + 0x17f4) = iStack_bf4;
          *(int *)(pcVar12 + 0x17f8) = iStack_bf0;
          *(int *)(pcVar12 + 0x17fc) = iStack_bec;
          *(int *)(pcVar12 + 0x1800) = local_be8;
          *(CDemonFilter **)(pcVar12 + 0x1804) = local_be4;
          *(CDemonFilter **)(pcVar12 + 0x1808) = local_be0;
          *(CDemonFilter **)(pcVar12 + 0x180c) = pCStack_bdc;
          puVar14 = auStack_bd8;
          pcVar16 = pcVar12 + 0x1810;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(undefined4 *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          *(CStrList_vtable **)(pcVar12 + 0x1890) = CStack_b64.base_strlist.vtable;
          *(undefined4 *)(pcVar12 + 0x1894) = CStack_b64.field1_0x10._0_4_;
          *(int *)(in_stack_00000094 + 0x19a2c) = *(int *)(in_stack_00000094 + 0x19a2c) + 1;
        }
        param_6 = param_6 + 1;
      } while (param_6 < param_20);
    }
  }
  pFVar8 = in_stack_0000008c;
  if (param_10 == (FILE *)0x0) {
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      pFVar2 = in_stack_00000090;
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < (int)param_22) {
LAB_0057a07e:
      do {
        iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar2);
        if (-1 < iVar4) {
          if (iVar4 != 10) goto LAB_0057a07e;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_22);
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading cameras");
    pFVar8 = in_stack_0000008c;
    do {
      iVar3 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      pFVar2 = in_stack_0000008c;
      if (iVar3 < 0) break;
    } while (iVar3 != 10);
    iVar3 = 0;
    if (0 < (int)param_21) {
      pCVar10 = in_stack_00000088->cameras;
      do {
        core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(pCVar10,pFVar2);
        iVar3 = iVar3 + 1;
        pCVar10 = pCVar10 + 1;
      } while (iVar3 < (int)param_21);
    }
    in_stack_00000088->camera_count = (int)param_21;
  }
  if (param_7 != 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading polygons");
    crt_stdio_c_fseek_FUN_005ffacc(in_stack_00000078,param_17,0);
    iVar3 = 0;
    if (0 < (int)param_12) {
      do {
        iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_0000007c,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&stack0x0000005c,
                           &local_14,local_20,local_2c,&stack0xfffffff0,local_1c,local_28,
                           &stack0xfffffff4,local_18,local_24);
        if (iVar4 != 10) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x5ed;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on poly %d of %d",iVar3,param_13);
        }
        triangle_flags = '\0';
        if (-1 < in_stack_00000064) {
          triangle_flags = (uchar)(&DAT_03364d18)[in_stack_00000064];
        }
        core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
                  (&g_CDemonRaytraceInstance,(CVector3f *)(param_21 + unaff_EDI * 0xc),
                   (CVector3f *)(param_21 + unaff_ESI * 0xc),
                   (CVector3f *)(param_21 + unaff_EBX * 0xc),triangle_flags);
        iVar3 = iVar3 + 1;
      } while (iVar3 < (int)param_12);
    }
    g_CurrentDebugLine = 0x601;
    g_CurrentDebugFilename = "..\\core\\setedit.cpp";
    if (param_19 != (FILE *)0x0) {
      crt_memory_c_free_FUN_005fe659(&param_19[-1]._ungotten);
    }
    core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(&g_CDemonRaytraceInstance,10.0);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Saving raytrace database");
    pcVar16 = in_stack_00000080->geometry_filename;
    core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040(&g_CDemonRaytraceInstance,pcVar16);
    core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
              (&g_CDemonRaytraceInstance,pcVar16);
  }
  if (param_12 != (uint *)0x0) {
    core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000088);
  }
  if ((param_7 != 0) || (param_10 != (FILE *)0x0)) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Precalcs for virtual director");
    core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(in_stack_00000080);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Deleting possibly out-of-date fog files");
    iVar3 = 0;
    if (0 < in_stack_00000088->camera_count) {
      pCVar10 = in_stack_00000088->cameras;
      pCVar11 = in_stack_00000088;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_21c,"backdrop\\%s.fog",pCVar10);
        crt_io_c_deleteFile_FUN_005ff9d0(acStack_218);
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_214,"backdrop\\%s.pvs");
        crt_io_c_deleteFile_FUN_005ff9d0(acStack_210);
        piVar15 = pCVar11->cameras[0].pvs_list;
        pCVar11->cameras[0].pvs_count = 0;
        if (piVar15 != (int *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(piVar15,"..\\core\\setedit.cpp",0x634);
          pCVar11->cameras[0].pvs_list = (int *)0x0;
        }
        pCVar11 = (CDemonSet *)&pCVar11->cameras[0].field17_0x1a0;
        iVar3 = iVar3 + 1;
        pCVar10 = pCVar10 + 1;
      } while (iVar3 < in_stack_00000088->camera_count);
    }
  }
  if (param_13 != (char *)0x0) {
    core_setedit_cpp_BackdropMaybe_FUN_005805a0();
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"CDemonSet::importS3D completed OK");
  return;
LAB_00579a7e:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)auStack_b6c,0,(uint)in_stack_ffffdbfc,in_stack_ffffdc00,in_stack_ffffdc04,
             in_stack_ffffdc08,in_stack_ffffdc0c);
  goto LAB_0057904b;
}


// Assembly code:
// 00578d80: PUSH EBX
//   Label: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// 00578d81: PUSH ESI
// 00578d82: PUSH EDI
// 00578d83: PUSH EBP
// 00578d84: SUB ESP,0x2468
// 00578d8a: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00578d8f: PUSH 0x1
// 00578d91: PUSH 0x646bd8
//   XREF to: 00646bd8 (DATA)
// 00578d96: PUSH 0x0
// 00578d98: CALL core_setedit.cpp_FUN_00578c90
//   XREF to: 00578c90 (UNCONDITIONAL_CALL)
// 00578d9d: ADD ESP,0xc
// 00578da0: MOV dword ptr [ESP + 0x2400],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00578da7: TEST EAX,EAX
// 00578da9: JGE 0x00578db6
//   XREF to: 00578db6 (CONDITIONAL_JUMP)
// 00578dab: ADD ESP,0x2468
//   Label: LAB_00578dab
// 00578db1: POP EBP
// 00578db2: POP EDI
// 00578db3: POP ESI
// 00578db4: POP EBX
// 00578db5: RET
// 00578db6: PUSH 0x1
//   Label: LAB_00578db6
// 00578db8: PUSH 0x646be8
//   XREF to: 00646be8 (DATA)
// 00578dbd: PUSH 0xb
// 00578dbf: CALL core_setedit.cpp_FUN_00578c90
//   XREF to: 00578c90 (UNCONDITIONAL_CALL)
// 00578dc4: ADD ESP,0xc
// 00578dc7: MOV EBX,EAX
// 00578dc9: MOV dword ptr [ESP + 0x2404],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 00578dd0: TEST EAX,EAX
// 00578dd2: JL 0x00578dab
//   XREF to: 00578dab (CONDITIONAL_JUMP)
// 00578dd4: PUSH 0x1
// 00578dd6: PUSH 0x646bfb
//   XREF to: 00646bfb (DATA)
// 00578ddb: PUSH 0x16
// 00578ddd: CALL core_setedit.cpp_FUN_00578c90
//   XREF to: 00578c90 (UNCONDITIONAL_CALL)
// 00578de2: ADD ESP,0xc
// 00578de5: MOV ESI,EAX
// 00578de7: MOV dword ptr [ESP + 0x2408],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 00578dee: TEST EAX,EAX
// 00578df0: JL 0x00578dab
//   XREF to: 00578dab (CONDITIONAL_JUMP)
// 00578df2: PUSH 0x1
// 00578df4: PUSH 0x646c0e
//   XREF to: 00646c0e (DATA)
// 00578df9: PUSH 0x21
// 00578dfb: CALL core_setedit.cpp_FUN_00578c90
//   XREF to: 00578c90 (UNCONDITIONAL_CALL)
// 00578e00: ADD ESP,0xc
// 00578e03: MOV dword ptr [ESP + 0x240c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 00578e0a: TEST EAX,EAX
// 00578e0c: JL 0x00578dab
//   XREF to: 00578dab (CONDITIONAL_JUMP)
// 00578e0e: TEST EBX,EBX
// 00578e10: JZ 0x00579529
//   XREF to: 00579529 (CONDITIONAL_JUMP)
// 00578e16: MOV EAX,0x1
//   Label: LAB_00578e16
// 00578e1b: MOV EDX,dword ptr [ESP + 0x2400]
//   Label: LAB_00578e1b
//   XREF to: Stack[-0x78] (READ)
// 00578e22: MOV dword ptr [ESP + 0x2410],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 00578e29: TEST EDX,EDX
// 00578e2b: JZ 0x00579538
//   XREF to: 00579538 (CONDITIONAL_JUMP)
// 00578e31: CMP dword ptr [ESP + 0x2410],0x0
//   Label: LAB_00578e31
//   XREF to: Stack[-0x68] (READ)
// 00578e39: JZ 0x0057956d
//   XREF to: 0057956d (CONDITIONAL_JUMP)
// 00578e3f: CMP dword ptr [ESP + 0x240c],0x0
//   Label: LAB_00578e3f
//   XREF to: Stack[-0x6c] (READ)
// 00578e47: JZ 0x005795a8
//   XREF to: 005795a8 (CONDITIONAL_JUMP)
// 00578e4d: PUSH 0x646d07
//   Label: LAB_00578e4d
//   XREF to: 00646d07 (DATA)
// 00578e52: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00578e58: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00578e59: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00578e5e: ADD ESP,0x8
// 00578e61: PUSH 0x646d24
//   XREF to: 00646d24 (DATA)
// 00578e66: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00578e6c: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00578e6d: MOV dword ptr [ESP + 0x241c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 00578e74: CALL shape_edittool.cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
//   XREF to: 0049f0f0 (UNCONDITIONAL_CALL)
// 00578e79: ADD ESP,0x8
// 00578e7c: PUSH 0x646d34
//   XREF to: 00646d34 (DATA)
// 00578e81: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00578e87: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00578e88: MOV dword ptr [ESP + 0x2420],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 00578e8f: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00578e94: ADD ESP,0x8
// 00578e97: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00578e9e: PUSH EBX
//   Label: LAB_00578e9e
// 00578e9f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578ea4: ADD ESP,0x4
// 00578ea7: TEST EAX,EAX
// 00578ea9: JL 0x00578eb0
//   XREF to: 00578eb0 (CONDITIONAL_JUMP)
// 00578eab: CMP EAX,0xa
// 00578eae: JNZ 0x00578e9e
//   XREF to: 00578e9e (CONDITIONAL_JUMP)
// 00578eb0: LEA EAX,[ESP + 0x241c]
//   Label: LAB_00578eb0
//   XREF to: Stack[-0x5c] (DATA)
// 00578eb7: PUSH EAX
// 00578eb8: PUSH 0x646d5d
//   XREF to: 00646d5d (DATA)
// 00578ebd: MOV EBP,dword ptr [ESP + 0x2488]
//   XREF to: Stack[0x8] (READ)
// 00578ec4: PUSH EBP
// 00578ec5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00578eca: ADD ESP,0xc
// 00578ecd: MOV EAX,dword ptr [ESP + 0x241c]
//   XREF to: Stack[-0x5c] (READ)
// 00578ed4: CMP EAX,0x67
// 00578ed7: JNZ 0x005795df
//   XREF to: 005795df (CONDITIONAL_JUMP)
// 00578edd: MOV EBX,dword ptr [ESP + 0x2480]
//   Label: LAB_00578edd
//   XREF to: Stack[0x8] (READ)
// 00578ee4: PUSH EBX
//   Label: LAB_00578ee4
// 00578ee5: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578eea: ADD ESP,0x4
// 00578eed: TEST EAX,EAX
// 00578eef: JL 0x00578ef6
//   XREF to: 00578ef6 (CONDITIONAL_JUMP)
// 00578ef1: CMP EAX,0xa
// 00578ef4: JNZ 0x00578ee4
//   XREF to: 00578ee4 (CONDITIONAL_JUMP)
// 00578ef6: LEA EAX,[ESP + 0x2438]
//   Label: LAB_00578ef6
//   XREF to: Stack[-0x40] (DATA)
// 00578efd: PUSH EAX
// 00578efe: LEA EAX,[ESP + 0x2438]
//   XREF to: Stack[-0x44] (DATA)
// 00578f05: PUSH EAX
// 00578f06: LEA EAX,[ESP + 0x2434]
//   XREF to: Stack[-0x4c] (DATA)
// 00578f0d: PUSH EAX
// 00578f0e: LEA EAX,[ESP + 0x243c]
//   XREF to: Stack[-0x48] (DATA)
// 00578f15: PUSH EAX
// 00578f16: LEA EAX,[ESP + 0x2438]
//   XREF to: Stack[-0x50] (DATA)
// 00578f1d: PUSH EAX
// 00578f1e: LEA EAX,[ESP + 0x2438]
//   XREF to: Stack[-0x54] (DATA)
// 00578f25: PUSH EAX
// 00578f26: LEA EAX,[ESP + 0x2438]
//   XREF to: Stack[-0x58] (DATA)
// 00578f2d: PUSH EAX
// 00578f2e: PUSH 0x646db1
//   XREF to: 00646db1 (DATA)
// 00578f33: MOV ESI,dword ptr [ESP + 0x24a0]
//   XREF to: Stack[0x8] (READ)
// 00578f3a: PUSH ESI
// 00578f3b: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00578f40: ADD ESP,0x24
// 00578f43: MOV EDI,dword ptr [ESP + 0x242c]
//   XREF to: Stack[-0x4c] (READ)
// 00578f4a: CMP EDI,0x1
// 00578f4d: JZ 0x00578f72
//   XREF to: 00578f72 (CONDITIONAL_JUMP)
// 00578f4f: PUSH EDI
// 00578f50: MOV EBP,0x646dc7
//   XREF to: 00646dc7 (DATA)
// 00578f55: MOV EAX,0x49a
// 00578f5a: PUSH 0x646ddb
//   XREF to: 00646ddb (DATA)
// 00578f5f: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00578f65: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00578f6a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00578f6f: ADD ESP,0x8
// 00578f72: CMP dword ptr [ESP + 0x240c],0x0
//   Label: LAB_00578f72
//   XREF to: Stack[-0x6c] (READ)
// 00578f7a: JNZ 0x0057960a
//   XREF to: 0057960a (CONDITIONAL_JUMP)
// 00578f80: PUSH 0x646e6b
//   Label: LAB_00578f80
//   XREF to: 00646e6b (DATA)
// 00578f85: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00578f8a: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00578f8b: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00578f90: ADD ESP,0x8
// 00578f93: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00578f9a: PUSH EBX
//   Label: LAB_00578f9a
// 00578f9b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578fa0: ADD ESP,0x4
// 00578fa3: TEST EAX,EAX
// 00578fa5: JL 0x00578fac
//   XREF to: 00578fac (CONDITIONAL_JUMP)
// 00578fa7: CMP EAX,0xa
// 00578faa: JNZ 0x00578f9a
//   XREF to: 00578f9a (CONDITIONAL_JUMP)
// 00578fac: MOV EDX,dword ptr [ESP + 0x2430]
//   Label: LAB_00578fac
//   XREF to: Stack[-0x48] (READ)
// 00578fb3: XOR ESI,ESI
// 00578fb5: TEST EDX,EDX
// 00578fb7: JLE 0x00578fde
//   XREF to: 00578fde (CONDITIONAL_JUMP)
// 00578fb9: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00578fc0: PUSH EBX
//   Label: LAB_00578fc0
// 00578fc1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578fc6: ADD ESP,0x4
// 00578fc9: TEST EAX,EAX
// 00578fcb: JL 0x00578fd2
//   XREF to: 00578fd2 (CONDITIONAL_JUMP)
// 00578fcd: CMP EAX,0xa
// 00578fd0: JNZ 0x00578fc0
//   XREF to: 00578fc0 (CONDITIONAL_JUMP)
// 00578fd2: MOV ECX,dword ptr [ESP + 0x2430]
//   Label: LAB_00578fd2
//   XREF to: Stack[-0x48] (READ)
// 00578fd9: INC ESI
// 00578fda: CMP ESI,ECX
// 00578fdc: JL 0x00578fc0
//   XREF to: 00578fc0 (CONDITIONAL_JUMP)
// 00578fde: MOV EBX,dword ptr [ESP + 0x2480]
//   Label: LAB_00578fde
//   XREF to: Stack[0x8] (READ)
// 00578fe5: PUSH EBX
//   Label: LAB_00578fe5
// 00578fe6: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00578feb: ADD ESP,0x4
// 00578fee: TEST EAX,EAX
// 00578ff0: JL 0x00578ff7
//   XREF to: 00578ff7 (CONDITIONAL_JUMP)
// 00578ff2: CMP EAX,0xa
// 00578ff5: JNZ 0x00578fe5
//   XREF to: 00578fe5 (CONDITIONAL_JUMP)
// 00578ff7: CMP dword ptr [ESP + 0x2400],0x0
//   Label: LAB_00578ff7
//   XREF to: Stack[-0x78] (READ)
// 00578fff: JNZ 0x0057964b
//   XREF to: 0057964b (CONDITIONAL_JUMP)
// 00579005: PUSH 0x647070
//   XREF to: 00647070 (DATA)
// 0057900a: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00579010: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00579011: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00579016: ADD ESP,0x8
// 00579019: MOV EDI,dword ptr [ESP + 0x2420]
//   XREF to: Stack[-0x58] (READ)
// 00579020: XOR ESI,ESI
// 00579022: TEST EDI,EDI
// 00579024: JLE 0x0057904b
//   XREF to: 0057904b (CONDITIONAL_JUMP)
// 00579026: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 0057902d: PUSH EBX
//   Label: LAB_0057902d
// 0057902e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579033: ADD ESP,0x4
// 00579036: TEST EAX,EAX
// 00579038: JL 0x0057903f
//   XREF to: 0057903f (CONDITIONAL_JUMP)
// 0057903a: CMP EAX,0xa
// 0057903d: JNZ 0x0057902d
//   XREF to: 0057902d (CONDITIONAL_JUMP)
// 0057903f: MOV EAX,dword ptr [ESP + 0x2420]
//   Label: LAB_0057903f
//   XREF to: Stack[-0x58] (READ)
// 00579046: INC ESI
// 00579047: CMP ESI,EAX
// 00579049: JL 0x0057902d
//   XREF to: 0057902d (CONDITIONAL_JUMP)
// 0057904b: PUSH 0x647082
//   Label: LAB_0057904b
//   XREF to: 00647082 (DATA)
// 00579050: MOV EDI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00579056: PUSH EDI
//   XREF to: 02cf1cd4 (DATA)
// 00579057: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057905c: ADD ESP,0x8
// 0057905f: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00579066: PUSH EBX
//   Label: LAB_00579066
// 00579067: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057906c: ADD ESP,0x4
// 0057906f: TEST EAX,EAX
// 00579071: JL 0x00579078
//   XREF to: 00579078 (CONDITIONAL_JUMP)
// 00579073: CMP EAX,0xa
// 00579076: JNZ 0x00579066
//   XREF to: 00579066 (CONDITIONAL_JUMP)
// 00579078: MOV EBP,dword ptr [ESP + 0x2480]
//   Label: LAB_00579078
//   XREF to: Stack[0x8] (READ)
// 0057907f: PUSH EBP
// 00579080: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 00579085: ADD ESP,0x4
// 00579088: MOV dword ptr [ESP + 0x243c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0057908f: MOV EAX,dword ptr [ESP + 0x2424]
//   XREF to: Stack[-0x54] (READ)
// 00579096: XOR ESI,ESI
// 00579098: TEST EAX,EAX
// 0057909a: JLE 0x005790c1
//   XREF to: 005790c1 (CONDITIONAL_JUMP)
// 0057909c: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 005790a3: PUSH EBX
//   Label: LAB_005790a3
// 005790a4: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005790a9: ADD ESP,0x4
// 005790ac: TEST EAX,EAX
// 005790ae: JL 0x005790b5
//   XREF to: 005790b5 (CONDITIONAL_JUMP)
// 005790b0: CMP EAX,0xa
// 005790b3: JNZ 0x005790a3
//   XREF to: 005790a3 (CONDITIONAL_JUMP)
// 005790b5: MOV EDX,dword ptr [ESP + 0x2424]
//   Label: LAB_005790b5
//   XREF to: Stack[-0x54] (READ)
// 005790bc: INC ESI
// 005790bd: CMP ESI,EDX
// 005790bf: JL 0x005790a3
//   XREF to: 005790a3 (CONDITIONAL_JUMP)
// 005790c1: XOR ECX,ECX
//   Label: LAB_005790c1
// 005790c3: MOV EBX,dword ptr [ESP + 0x2400]
//   XREF to: Stack[-0x78] (READ)
// 005790ca: MOV dword ptr [ESP + 0x2440],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 005790d1: TEST EBX,EBX
// 005790d3: JNZ 0x00579a95
//   XREF to: 00579a95 (CONDITIONAL_JUMP)
// 005790d9: PUSH 0x647134
//   XREF to: 00647134 (DATA)
// 005790de: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005790e4: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005790e5: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005790ea: ADD ESP,0x8
// 005790ed: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 005790f4: PUSH EBX
//   Label: LAB_005790f4
// 005790f5: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005790fa: ADD ESP,0x4
// 005790fd: TEST EAX,EAX
// 005790ff: JL 0x00579106
//   XREF to: 00579106 (CONDITIONAL_JUMP)
// 00579101: CMP EAX,0xa
// 00579104: JNZ 0x005790f4
//   XREF to: 005790f4 (CONDITIONAL_JUMP)
// 00579106: MOV EBX,dword ptr [ESP + 0x2428]
//   Label: LAB_00579106
//   XREF to: Stack[-0x50] (READ)
// 0057910d: XOR ESI,ESI
// 0057910f: TEST EBX,EBX
// 00579111: JLE 0x00579138
//   XREF to: 00579138 (CONDITIONAL_JUMP)
// 00579113: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 0057911a: PUSH EBX
//   Label: LAB_0057911a
// 0057911b: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579120: ADD ESP,0x4
// 00579123: TEST EAX,EAX
// 00579125: JL 0x0057912c
//   XREF to: 0057912c (CONDITIONAL_JUMP)
// 00579127: CMP EAX,0xa
// 0057912a: JNZ 0x0057911a
//   XREF to: 0057911a (CONDITIONAL_JUMP)
// 0057912c: MOV ECX,dword ptr [ESP + 0x2428]
//   Label: LAB_0057912c
//   XREF to: Stack[-0x50] (READ)
// 00579133: INC ESI
// 00579134: CMP ESI,ECX
// 00579136: JL 0x0057911a
//   XREF to: 0057911a (CONDITIONAL_JUMP)
// 00579138: CMP dword ptr [ESP + 0x2410],0x0
//   Label: LAB_00579138
//   XREF to: Stack[-0x68] (READ)
// 00579140: JNZ 0x00579bf4
//   XREF to: 00579bf4 (CONDITIONAL_JUMP)
// 00579146: MOV ESI,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 0057914d: PUSH ESI
//   Label: LAB_0057914d
// 0057914e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579153: ADD ESP,0x4
// 00579156: TEST EAX,EAX
// 00579158: JL 0x0057915f
//   XREF to: 0057915f (CONDITIONAL_JUMP)
// 0057915a: CMP EAX,0xa
// 0057915d: JNZ 0x0057914d
//   XREF to: 0057914d (CONDITIONAL_JUMP)
// 0057915f: MOV EBP,dword ptr [ESP + 0x2434]
//   Label: LAB_0057915f
//   XREF to: Stack[-0x44] (READ)
// 00579166: XOR ESI,ESI
// 00579168: TEST EBP,EBP
// 0057916a: JLE 0x00579191
//   XREF to: 00579191 (CONDITIONAL_JUMP)
// 0057916c: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00579173: PUSH EBX
//   Label: LAB_00579173
// 00579174: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579179: ADD ESP,0x4
// 0057917c: TEST EAX,EAX
// 0057917e: JL 0x00579185
//   XREF to: 00579185 (CONDITIONAL_JUMP)
// 00579180: CMP EAX,0xa
// 00579183: JNZ 0x00579173
//   XREF to: 00579173 (CONDITIONAL_JUMP)
// 00579185: MOV EDI,dword ptr [ESP + 0x2434]
//   Label: LAB_00579185
//   XREF to: Stack[-0x44] (READ)
// 0057918c: INC ESI
// 0057918d: CMP ESI,EDI
// 0057918f: JL 0x00579173
//   XREF to: 00579173 (CONDITIONAL_JUMP)
// 00579191: CMP dword ptr [ESP + 0x240c],0x0
//   Label: LAB_00579191
//   XREF to: Stack[-0x6c] (READ)
// 00579199: JZ 0x0057a04d
//   XREF to: 0057a04d (CONDITIONAL_JUMP)
// 0057919f: PUSH 0x6471ce
//   XREF to: 006471ce (DATA)
// 005791a4: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005791a9: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005791aa: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005791af: ADD ESP,0x8
// 005791b2: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 005791b9: PUSH EBX
//   Label: LAB_005791b9
// 005791ba: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 005791bf: ADD ESP,0x4
// 005791c2: TEST EAX,EAX
// 005791c4: JL 0x005791cb
//   XREF to: 005791cb (CONDITIONAL_JUMP)
// 005791c6: CMP EAX,0xa
// 005791c9: JNZ 0x005791b9
//   XREF to: 005791b9 (CONDITIONAL_JUMP)
// 005791cb: MOV ECX,dword ptr [ESP + 0x2438]
//   Label: LAB_005791cb
//   XREF to: Stack[-0x40] (READ)
// 005791d2: XOR ESI,ESI
// 005791d4: TEST ECX,ECX
// 005791d6: JLE 0x00579210
//   XREF to: 00579210 (CONDITIONAL_JUMP)
// 005791d8: MOV EBX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 005791df: MOV EDI,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 005791e6: ADD EBX,0x4
// 005791e9: PUSH EDI
//   Label: LAB_005791e9
// 005791ea: PUSH EBX
// 005791eb: CALL core_setutil.cpp_C3DSCamera_importS3D_FUN_00585ff0
//   XREF to: 00585ff0 (UNCONDITIONAL_CALL)
// 005791f0: ADD ESP,0x8
// 005791f3: INC ESI
// 005791f4: MOV EBP,dword ptr [ESP + 0x2438]
//   XREF to: Stack[-0x40] (READ)
// 005791fb: ADD EBX,0x1a4
// 00579201: CMP ESI,EBP
// 00579203: JL 0x005791e9
//   XREF to: 005791e9 (CONDITIONAL_JUMP)
// 00579205: LEA EAX,[EAX]
// 0057920b: LEA EDX,[EDX]
// 0057920e: MOV EBX,EBX
// 00579210: MOV EBX,dword ptr [ESP + 0x247c]
//   Label: LAB_00579210
//   XREF to: Stack[0x4] (READ)
// 00579217: MOV EAX,dword ptr [ESP + 0x2438]
//   XREF to: Stack[-0x40] (READ)
// 0057921e: MOV dword ptr [EBX],EAX
// 00579220: CMP dword ptr [ESP + 0x2400],0x0
//   Label: LAB_00579220
//   XREF to: Stack[-0x78] (READ)
// 00579228: JZ 0x005793dc
//   XREF to: 005793dc (CONDITIONAL_JUMP)
// 0057922e: PUSH 0x6471de
//   XREF to: 006471de (DATA)
// 00579233: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00579239: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 0057923a: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057923f: ADD ESP,0x8
// 00579242: PUSH 0x0
// 00579244: MOV EBX,dword ptr [ESP + 0x2440]
//   XREF to: Stack[-0x3c] (READ)
// 0057924b: PUSH EBX
// 0057924c: MOV ESI,dword ptr [ESP + 0x2488]
//   XREF to: Stack[0x8] (READ)
// 00579253: PUSH ESI
// 00579254: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 00579259: ADD ESP,0xc
// 0057925c: MOV EDI,dword ptr [ESP + 0x2424]
//   XREF to: Stack[-0x54] (READ)
// 00579263: XOR EBX,EBX
// 00579265: TEST EDI,EDI
// 00579267: JLE 0x00579360
//   XREF to: 00579360 (CONDITIONAL_JUMP)
// 0057926d: LEA EAX,[ESP + 0x23e0]
//   Label: LAB_0057926d
//   XREF to: Stack[-0x98] (DATA)
// 00579274: PUSH EAX
// 00579275: LEA EAX,[ESP + 0x23f0]
//   XREF to: Stack[-0x8c] (DATA)
// 0057927c: PUSH EAX
// 0057927d: LEA EAX,[ESP + 0x2400]
//   XREF to: Stack[-0x80] (DATA)
// 00579284: PUSH EAX
// 00579285: LEA EAX,[ESP + 0x23e8]
//   XREF to: Stack[-0x9c] (DATA)
// 0057928c: PUSH EAX
// 0057928d: LEA EAX,[ESP + 0x23f8]
//   XREF to: Stack[-0x90] (DATA)
// 00579294: PUSH EAX
// 00579295: LEA EAX,[ESP + 0x2408]
//   XREF to: Stack[-0x84] (DATA)
// 0057929c: PUSH EAX
// 0057929d: LEA EAX,[ESP + 0x23f0]
//   XREF to: Stack[-0xa0] (DATA)
// 005792a4: PUSH EAX
// 005792a5: LEA EAX,[ESP + 0x2400]
//   XREF to: Stack[-0x94] (DATA)
// 005792ac: PUSH EAX
// 005792ad: LEA EAX,[ESP + 0x2410]
//   XREF to: Stack[-0x88] (DATA)
// 005792b4: PUSH EAX
// 005792b5: LEA EAX,[ESP + 0x2484]
//   XREF to: Stack[-0x18] (DATA)
// 005792bc: PUSH EAX
// 005792bd: PUSH 0x6471ef
//   XREF to: 006471ef (DATA)
// 005792c2: MOV EDI,dword ptr [ESP + 0x24ac]
//   XREF to: Stack[0x8] (READ)
// 005792c9: PUSH EDI
// 005792ca: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 005792cf: ADD ESP,0x30
// 005792d2: CMP EAX,0xa
// 005792d5: JZ 0x00579302
//   XREF to: 00579302 (CONDITIONAL_JUMP)
// 005792d7: MOV EDX,dword ptr [ESP + 0x2424]
//   XREF to: Stack[-0x54] (READ)
// 005792de: PUSH EDX
// 005792df: PUSH EBX
// 005792e0: MOV EBP,0x647211
//   XREF to: 00647211 (DATA)
// 005792e5: MOV EAX,0x5ed
// 005792ea: PUSH 0x647225
//   XREF to: 00647225 (DATA)
// 005792ef: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 005792f5: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005792fa: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005792ff: ADD ESP,0xc
// 00579302: MOV ECX,dword ptr [ESP + 0x2460]
//   Label: LAB_00579302
//   XREF to: Stack[-0x18] (READ)
// 00579309: XOR EAX,EAX
// 0057930b: TEST ECX,ECX
// 0057930d: JL 0x00579316
//   XREF to: 00579316 (CONDITIONAL_JUMP)
// 0057930f: MOV EAX,dword ptr [ECX*0x4 + 0x3364d18]
//   XREF to: 03364d18 (DATA)
// 00579316: MOV EBP,dword ptr [ESP + 0x23f8]
//   Label: LAB_00579316
//   XREF to: Stack[-0x80] (READ)
// 0057931d: PUSH EAX
// 0057931e: IMUL EAX,EBP,0xc
// 00579321: MOV EDX,dword ptr [ESP + 0x2444]
//   XREF to: Stack[-0x38] (READ)
// 00579328: ADD EAX,EDX
// 0057932a: MOV ECX,dword ptr [ESP + 0x23f8]
//   XREF to: Stack[-0x84] (READ)
// 00579331: PUSH EAX
// 00579332: IMUL EAX,ECX,0xc
// 00579335: ADD EAX,EDX
// 00579337: MOV EDI,dword ptr [ESP + 0x23f8]
//   XREF to: Stack[-0x88] (READ)
// 0057933e: PUSH EAX
// 0057933f: IMUL EAX,EDI,0xc
// 00579342: ADD EAX,EDX
// 00579344: PUSH EAX
// 00579345: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 0057934a: CALL core_dtrace.cpp_CDemonRaytrace_addTriangle_FUN_00495100
//   XREF to: 00495100 (UNCONDITIONAL_CALL)
// 0057934f: ADD ESP,0x14
// 00579352: INC EBX
// 00579353: CMP EBX,dword ptr [ESP + 0x2424]
//   XREF to: Stack[-0x54] (READ)
// 0057935a: JL 0x0057926d
//   XREF to: 0057926d (CONDITIONAL_JUMP)
// 00579360: MOV ECX,0x601
//   Label: LAB_00579360
// 00579365: MOV EDX,0x647246
//   XREF to: 00647246 (PARAM)
// 0057936a: MOV EBX,dword ptr [ESP + 0x2440]
//   XREF to: Stack[-0x38] (READ)
// 00579371: MOV dword ptr [0x02f0d944],ECX
//   XREF to: 02f0d944 (WRITE)
// 00579377: MOV dword ptr [0x0067d20c],EDX
//   XREF to: 0067d20c (WRITE)
// 0057937d: TEST EBX,EBX
// 0057937f: JZ 0x0057938d
//   XREF to: 0057938d (CONDITIONAL_JUMP)
// 00579381: LEA EAX,[EBX + -0x4]
// 00579384: PUSH EAX
// 00579385: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 0057938a: ADD ESP,0x4
// 0057938d: PUSH 0x41200000
//   Label: LAB_0057938d
// 00579392: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00579397: CALL core_dtrace.cpp_CDemonRaytrace_crunch_FUN_00495310
//   XREF to: 00495310 (UNCONDITIONAL_CALL)
// 0057939c: ADD ESP,0x8
// 0057939f: PUSH 0x64725a
//   XREF to: 0064725a (DATA)
// 005793a4: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 005793aa: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 005793ab: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 005793b0: ADD ESP,0x8
// 005793b3: MOV EBX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 005793ba: ADD EBX,0x14d0f0
// 005793c0: PUSH EBX
// 005793c1: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005793c6: CALL core_dtrace.cpp_CDemonRaytrace_save_FUN_00495040
//   XREF to: 00495040 (UNCONDITIONAL_CALL)
// 005793cb: ADD ESP,0x8
// 005793ce: PUSH EBX
// 005793cf: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 005793d4: CALL core_dtrace.cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
//   XREF to: 00494de0 (UNCONDITIONAL_CALL)
// 005793d9: ADD ESP,0x8
// 005793dc: CMP dword ptr [ESP + 0x2414],0x0
//   Label: LAB_005793dc
//   XREF to: Stack[-0x64] (READ)
// 005793e4: JZ 0x005793f8
//   XREF to: 005793f8 (CONDITIONAL_JUMP)
// 005793e6: PUSH -0x1
// 005793e8: MOV ESI,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x4] (READ)
// 005793ef: PUSH ESI
// 005793f0: CALL core_set.cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
//   XREF to: 0056a470 (UNCONDITIONAL_CALL)
// 005793f5: ADD ESP,0x8
// 005793f8: CMP dword ptr [ESP + 0x2400],0x0
//   Label: LAB_005793f8
//   XREF to: Stack[-0x78] (READ)
// 00579400: JZ 0x0057a0a2
//   XREF to: 0057a0a2 (CONDITIONAL_JUMP)
// 00579406: PUSH 0x647273
//   Label: LAB_00579406
//   XREF to: 00647273 (DATA)
// 0057940b: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00579410: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00579411: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00579416: ADD ESP,0x8
// 00579419: MOV EDX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579420: PUSH EDX
// 00579421: CALL core_setdir.cpp_CDemonSet_saveThumbs_FUN_00575f60
//   XREF to: 00575f60 (UNCONDITIONAL_CALL)
// 00579426: ADD ESP,0x4
// 00579429: PUSH 0x647291
//   XREF to: 00647291 (DATA)
// 0057942e: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00579434: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00579435: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057943a: ADD ESP,0x8
// 0057943d: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579444: MOV EBX,dword ptr [EAX]
// 00579446: XOR EDI,EDI
// 00579448: TEST EBX,EBX
// 0057944a: JLE 0x005794f0
//   XREF to: 005794f0 (CONDITIONAL_JUMP)
// 00579450: LEA ESI,[EAX + 0x4]
// 00579453: MOV EBX,EAX
// 00579455: PUSH ESI
//   Label: LAB_00579455
// 00579456: PUSH 0x6472b9
//   XREF to: 006472b9 (DATA)
// 0057945b: LEA EAX,[ESP + 0x21e0]
//   XREF to: Stack[-0x2a0] (DATA)
// 00579462: PUSH EAX
// 00579463: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00579468: ADD ESP,0xc
// 0057946b: LEA EAX,[ESP + 0x21d8]
//   XREF to: Stack[-0x2a0] (DATA)
// 00579472: PUSH EAX
// 00579473: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 00579478: ADD ESP,0x4
// 0057947b: PUSH ESI
// 0057947c: PUSH 0x6472c9
//   XREF to: 006472c9 (DATA)
// 00579481: LEA EAX,[ESP + 0x21e0]
//   XREF to: Stack[-0x2a0] (DATA)
// 00579488: PUSH EAX
// 00579489: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057948e: ADD ESP,0xc
// 00579491: LEA EAX,[ESP + 0x21d8]
//   XREF to: Stack[-0x2a0] (DATA)
// 00579498: PUSH EAX
// 00579499: CALL crt_io.c_deleteFile_FUN_005ff9d0
//   XREF to: 005ff9d0 (UNCONDITIONAL_CALL)
// 0057949e: ADD ESP,0x4
// 005794a1: MOV EAX,dword ptr [EBX + 0x19c]
// 005794a7: MOV dword ptr [EBX + 0x198],0x0
// 005794b1: TEST EAX,EAX
// 005794b3: JZ 0x005794d2
//   XREF to: 005794d2 (CONDITIONAL_JUMP)
// 005794b5: PUSH 0x634
// 005794ba: PUSH 0x6472d9
//   XREF to: 006472d9 (DATA)
// 005794bf: PUSH EAX
// 005794c0: CALL shape_memdbg.cpp_debugFree_FUN_0050f460
//   XREF to: 0050f460 (UNCONDITIONAL_CALL)
// 005794c5: ADD ESP,0xc
// 005794c8: MOV dword ptr [EBX + 0x19c],0x0
// 005794d2: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_005794d2
//   XREF to: Stack[0x4] (READ)
// 005794d9: ADD EBX,0x1a4
// 005794df: INC EDI
// 005794e0: MOV EBP,dword ptr [EAX]
// 005794e2: ADD ESI,0x1a4
// 005794e8: CMP EDI,EBP
// 005794ea: JL 0x00579455
//   XREF to: 00579455 (CONDITIONAL_JUMP)
// 005794f0: CMP dword ptr [ESP + 0x2418],0x0
//   Label: LAB_005794f0
//   XREF to: Stack[-0x60] (READ)
// 005794f8: JZ 0x0057950a
//   XREF to: 0057950a (CONDITIONAL_JUMP)
// 005794fa: MOV EBX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579501: PUSH EBX
// 00579502: CALL core_setedit.cpp_BackdropMaybe_FUN_005805a0
//   XREF to: 005805a0 (UNCONDITIONAL_CALL)
// 00579507: ADD ESP,0x4
// 0057950a: PUSH 0x6472ed
//   Label: LAB_0057950a
//   XREF to: 006472ed (DATA)
// 0057950f: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00579515: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00579516: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 0057951b: ADD ESP,0x8
// 0057951e: ADD ESP,0x2468
// 00579524: POP EBP
// 00579525: POP EDI
// 00579526: POP ESI
// 00579527: POP EBX
// 00579528: RET
// 00579529: TEST ESI,ESI
//   Label: LAB_00579529
// 0057952b: JNZ 0x00578e16
//   XREF to: 00578e16 (CONDITIONAL_JUMP)
// 00579531: XOR EAX,EAX
// 00579533: JMP 0x00578e1b
//   XREF to: 00578e1b (UNCONDITIONAL_JUMP)
// 00579538: TEST EAX,EAX
//   Label: LAB_00579538
// 0057953a: JNZ 0x00578e31
//   XREF to: 00578e31 (CONDITIONAL_JUMP)
// 00579540: CMP dword ptr [ESP + 0x240c],0x0
//   XREF to: Stack[-0x6c] (READ)
// 00579548: JNZ 0x00578e31
//   XREF to: 00578e31 (CONDITIONAL_JUMP)
// 0057954e: PUSH 0x646c1d
//   XREF to: 00646c1d (DATA)
// 00579553: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00579559: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 0057955a: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 0057955f: ADD ESP,0x8
// 00579562: ADD ESP,0x2468
// 00579568: POP EBP
// 00579569: POP EDI
// 0057956a: POP ESI
// 0057956b: POP EBX
// 0057956c: RET
// 0057956d: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_0057956d
//   XREF to: Stack[0x4] (READ)
// 00579574: CMP dword ptr [EAX + 0x19a2c],0x1
// 0057957b: JGE 0x00578e3f
//   XREF to: 00578e3f (CONDITIONAL_JUMP)
// 00579581: PUSH 0x646c2c
//   XREF to: 00646c2c (DATA)
// 00579586: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 0057958c: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 0057958d: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 00579592: ADD ESP,0x8
// 00579595: TEST EAX,EAX
// 00579597: JNZ 0x00578e3f
//   XREF to: 00578e3f (CONDITIONAL_JUMP)
// 0057959d: ADD ESP,0x2468
// 005795a3: POP EBP
// 005795a4: POP EDI
// 005795a5: POP ESI
// 005795a6: POP EBX
// 005795a7: RET
// 005795a8: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_005795a8
//   XREF to: Stack[0x4] (READ)
// 005795af: CMP dword ptr [EAX],0x1
// 005795b2: JGE 0x00578e4d
//   XREF to: 00578e4d (CONDITIONAL_JUMP)
// 005795b8: PUSH 0x646c99
//   XREF to: 00646c99 (DATA)
// 005795bd: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 005795c3: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 005795c4: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 005795c9: ADD ESP,0x8
// 005795cc: TEST EAX,EAX
// 005795ce: JNZ 0x00578e4d
//   XREF to: 00578e4d (CONDITIONAL_JUMP)
// 005795d4: ADD ESP,0x2468
// 005795da: POP EBP
// 005795db: POP EDI
// 005795dc: POP ESI
// 005795dd: POP EBX
// 005795de: RET
// 005795df: PUSH 0x67
//   Label: LAB_005795df
// 005795e1: PUSH EAX
// 005795e2: MOV EDX,0x646d61
//   XREF to: 00646d61 (PARAM)
// 005795e7: MOV ECX,0x490
// 005795ec: PUSH 0x646d75
//   XREF to: 00646d75 (DATA)
// 005795f1: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005795f7: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005795fd: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579602: ADD ESP,0xc
// 00579605: JMP 0x00578edd
//   XREF to: 00578edd (UNCONDITIONAL_JUMP)
// 0057960a: MOV EBX,dword ptr [ESP + 0x2438]
//   Label: LAB_0057960a
//   XREF to: Stack[-0x40] (READ)
// 00579611: CMP EBX,0xfa
// 00579617: JLE 0x00578f80
//   XREF to: 00578f80 (CONDITIONAL_JUMP)
// 0057961d: PUSH 0xfa
// 00579622: PUSH EBX
// 00579623: MOV ESI,0x646e1a
//   XREF to: 00646e1a (DATA)
// 00579628: MOV EDI,0x4a1
// 0057962d: PUSH 0x646e2e
//   XREF to: 00646e2e (DATA)
// 00579632: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00579638: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 0057963e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579643: ADD ESP,0xc
// 00579646: JMP 0x00578f80
//   XREF to: 00578f80 (UNCONDITIONAL_JUMP)
// 0057964b: MOV EBP,dword ptr [ESP + 0x2480]
//   Label: LAB_0057964b
//   XREF to: Stack[0x8] (READ)
// 00579652: PUSH EBP
// 00579653: CALL crt_stdio.c_ftell_FUN_00601560
//   XREF to: 00601560 (UNCONDITIONAL_CALL)
// 00579658: ADD ESP,0x4
// 0057965b: MOV dword ptr [ESP + 0x2444],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00579662: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579669: ADD EAX,0x14d0f0
// 0057966e: MOV dword ptr [ESP + 0x2450],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00579675: LEA EAX,[ESP + 0x22d8]
//   Label: LAB_00579675
//   XREF to: Stack[-0x1a0] (DATA)
// 0057967c: PUSH EAX
// 0057967d: LEA EAX,[ESP + 0x2468]
//   XREF to: Stack[-0x14] (DATA)
// 00579684: PUSH EAX
// 00579685: XOR EDX,EDX
// 00579687: PUSH 0x6816d8
//   XREF to: 006816d8 (DATA)
// 0057968c: MOV dword ptr [0x03654368],EDX
//   XREF to: 03654368 (WRITE)
// 00579692: CALL engine_dosio.c_ensureTrailingSlash_FUN_00481f80
//   XREF to: 00481f80 (UNCONDITIONAL_CALL)
// 00579697: ADD ESP,0xc
// 0057969a: PUSH 0x0
// 0057969c: LEA EAX,[ESP + 0x20dc]
//   XREF to: Stack[-0x3a0] (DATA)
// 005796a3: PUSH EAX
// 005796a4: PUSH 0x0
// 005796a6: PUSH 0x0
// 005796a8: MOV ECX,dword ptr [ESP + 0x2460]
//   XREF to: Stack[-0x28] (READ)
// 005796af: PUSH ECX
// 005796b0: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005796b5: ADD ESP,0x14
// 005796b8: PUSH 0x646e7e
//   XREF to: 00646e7e (DATA)
// 005796bd: LEA EAX,[ESP + 0x20dc]
//   XREF to: Stack[-0x3a0] (DATA)
// 005796c4: PUSH EAX
// 005796c5: LEA EAX,[ESP + 0x22e0]
//   XREF to: Stack[-0x1a0] (DATA)
// 005796cc: PUSH EAX
// 005796cd: LEA EAX,[ESP + 0x2470]
//   XREF to: Stack[-0x14] (DATA)
// 005796d4: PUSH EAX
// 005796d5: LEA EAX,[ESP + 0x1de0]
//   XREF to: Stack[-0x6a8] (DATA)
// 005796dc: PUSH EAX
// 005796dd: CALL engine_dosio.c_makePath_FUN_00481f50
//   XREF to: 00481f50 (UNCONDITIONAL_CALL)
// 005796e2: ADD ESP,0x14
// 005796e5: LEA EAX,[ESP + 0x1dd0]
//   XREF to: Stack[-0x6a8] (DATA)
// 005796ec: PUSH EAX
// 005796ed: CALL core_setedit.cpp_ImportingGroundTextures_FUN_00578420
//   XREF to: 00578420 (UNCONDITIONAL_CALL)
// 005796f2: ADD ESP,0x4
// 005796f5: PUSH 0x646e83
//   XREF to: 00646e83 (DATA)
// 005796fa: MOV EBX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00579700: PUSH EBX
//   XREF to: 02cf1cd4 (DATA)
// 00579701: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00579706: ADD ESP,0x8
// 00579709: CMP dword ptr [ESP + 0x2420],0x3e8
//   XREF to: Stack[-0x58] (READ)
// 00579714: JLE 0x00579739
//   XREF to: 00579739 (CONDITIONAL_JUMP)
// 00579716: MOV EDI,0x646e94
//   XREF to: 00646e94 (DATA)
// 0057971b: MOV EBP,0x4cc
// 00579720: PUSH 0x646ea8
//   XREF to: 00646ea8 (DATA)
// 00579725: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 0057972b: MOV dword ptr [0x02f0ca4c],EBP
//   XREF to: 02f0ca4c (WRITE)
// 00579731: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579736: ADD ESP,0x4
// 00579739: MOV ECX,dword ptr [ESP + 0x2420]
//   Label: LAB_00579739
//   XREF to: Stack[-0x58] (READ)
// 00579740: XOR EAX,EAX
// 00579742: XOR EBP,EBP
// 00579744: MOV dword ptr [ESP + 0x244c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 0057974b: MOV dword ptr [ESP + 0x2448],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00579752: TEST ECX,ECX
// 00579754: JLE 0x00579848
//   XREF to: 00579848 (CONDITIONAL_JUMP)
// 0057975a: XOR EDI,EDI
// 0057975c: MOV EBX,dword ptr [ESP + 0x2480]
//   Label: LAB_0057975c
//   XREF to: Stack[0x8] (READ)
// 00579763: PUSH EBX
// 00579764: PUSH 0x104
// 00579769: LEA EAX,[ESP + 0x1edc]
//   XREF to: Stack[-0x5a4] (DATA)
// 00579770: PUSH EAX
// 00579771: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00579776: ADD ESP,0xc
// 00579779: LEA ESI,[ESP + 0x1ed4]
//   XREF to: Stack[-0x5a4] (DATA)
// 00579780: MOV DL,0xa
// 00579782: MOV AL,byte ptr [ESI]
//   Label: LAB_00579782
//   XREF to: Stack[-0x5a4] (DATA)
// 00579784: CMP AL,DL
// 00579786: JZ 0x0057979a
//   XREF to: 0057979a (CONDITIONAL_JUMP)
// 00579788: CMP AL,0x0
// 0057978a: JZ 0x00579798
//   XREF to: 00579798 (CONDITIONAL_JUMP)
// 0057978c: INC ESI
// 0057978d: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x5a3] (DATA)
// 0057978f: CMP AL,DL
// 00579791: JZ 0x0057979a
//   XREF to: 0057979a (CONDITIONAL_JUMP)
// 00579793: INC ESI
// 00579794: CMP AL,0x0
// 00579796: JNZ 0x00579782
//   XREF to: 00579782 (CONDITIONAL_JUMP)
// 00579798: SUB ESI,ESI
//   Label: LAB_00579798
// 0057979a: TEST ESI,ESI
//   Label: LAB_0057979a
// 0057979c: JZ 0x005797c0
//   XREF to: 005797c0 (CONDITIONAL_JUMP)
// 0057979e: LEA ESI,[ESP + 0x1ed4]
//   XREF to: Stack[-0x5a4] (DATA)
// 005797a5: MOV AL,byte ptr [ESI]
//   Label: LAB_005797a5
//   XREF to: Stack[-0x5a4] (DATA)
// 005797a7: CMP AL,DL
// 005797a9: JZ 0x005797bd
//   XREF to: 005797bd (CONDITIONAL_JUMP)
// 005797ab: CMP AL,0x0
// 005797ad: JZ 0x005797bb
//   XREF to: 005797bb (CONDITIONAL_JUMP)
// 005797af: INC ESI
// 005797b0: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x5a3] (DATA)
// 005797b2: CMP AL,DL
// 005797b4: JZ 0x005797bd
//   XREF to: 005797bd (CONDITIONAL_JUMP)
// 005797b6: INC ESI
// 005797b7: CMP AL,0x0
// 005797b9: JNZ 0x005797a5
//   XREF to: 005797a5 (CONDITIONAL_JUMP)
// 005797bb: SUB ESI,ESI
//   Label: LAB_005797bb
// 005797bd: MOV byte ptr [ESI],0x0
//   Label: LAB_005797bd
//   XREF to: Stack[-0x5a3] (DATA)
// 005797c0: PUSH 0x0
//   Label: LAB_005797c0
// 005797c2: LEA EAX,[ESP + 0x1fdc]
//   XREF to: Stack[-0x4a0] (DATA)
// 005797c9: PUSH EAX
// 005797ca: PUSH 0x0
// 005797cc: PUSH 0x0
// 005797ce: LEA EAX,[ESP + 0x1ee4]
//   XREF to: Stack[-0x5a4] (DATA)
// 005797d5: PUSH EAX
// 005797d6: XOR EBX,EBX
// 005797d8: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005797dd: MOV ESI,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 005797e3: ADD ESP,0x14
// 005797e6: TEST ESI,ESI
// 005797e8: JLE 0x00579937
//   XREF to: 00579937 (CONDITIONAL_JUMP)
// 005797ee: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 005797f3: LEA EAX,[ESP + 0x1fd8]
//   Label: LAB_005797f3
//   XREF to: Stack[-0x4a0] (DATA)
// 005797fa: PUSH EAX
// 005797fb: PUSH ESI
//   XREF to: 03654370 (DATA)
//   XREF to: 03654398 (DATA)
// 005797fc: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00579801: ADD ESP,0x8
// 00579804: TEST EAX,EAX
// 00579806: JNZ 0x00579926
//   XREF to: 00579926 (CONDITIONAL_JUMP)
// 0057980c: TEST EBX,EBX
// 0057980e: JL 0x00579937
//   XREF to: 00579937 (CONDITIONAL_JUMP)
// 00579814: MOV AL,byte ptr [EBX + 0x3659190]
//   XREF to: 03659190 (READ)
// 0057981a: MOV dword ptr [EDI + 0x3364d18],EAX
//   Label: LAB_0057981a
//   XREF to: 03364d18 (WRITE)
// 00579820: TEST EAX,EAX
// 00579822: JL 0x00579941
//   XREF to: 00579941 (CONDITIONAL_JUMP)
// 00579828: JNZ 0x00579835
//   XREF to: 00579835 (CONDITIONAL_JUMP)
// 0057982a: MOV dword ptr [ESP + 0x244c],0x1
//   XREF to: Stack[-0x2c] (WRITE)
// 00579835: MOV EBX,dword ptr [ESP + 0x2420]
//   Label: LAB_00579835
//   XREF to: Stack[-0x58] (READ)
// 0057983c: INC EBP
// 0057983d: ADD EDI,0x4
// 00579840: CMP EBP,EBX
// 00579842: JL 0x0057975c
//   XREF to: 0057975c (CONDITIONAL_JUMP)
// 00579848: CMP dword ptr [ESP + 0x2448],0x0
//   Label: LAB_00579848
//   XREF to: Stack[-0x30] (READ)
// 00579850: JZ 0x00579a1a
//   XREF to: 00579a1a (CONDITIONAL_JUMP)
// 00579856: CMP dword ptr [ESP + 0x2448],0x0
//   Label: LAB_00579856
//   XREF to: Stack[-0x30] (READ)
// 0057985e: JZ 0x00579a2d
//   XREF to: 00579a2d (CONDITIONAL_JUMP)
// 00579864: LEA EAX,[ESP + 0x1dd0]
//   XREF to: Stack[-0x6a8] (DATA)
// 0057986b: PUSH EAX
// 0057986c: PUSH 0x646f0f
//   XREF to: 00646f0f (DATA)
// 00579871: LEA EAX,[ESP + 0x1c48]
//   XREF to: Stack[-0x838] (DATA)
// 00579878: PUSH EAX
// 00579879: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 0057987e: ADD ESP,0xc
// 00579881: LEA EAX,[ESP + 0x1898]
//   Label: LAB_00579881
//   XREF to: Stack[-0xbe0] (DATA)
// 00579888: PUSH EAX
// 00579889: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 0057988e: ADD ESP,0x4
// 00579891: PUSH 0x646ff8
//   XREF to: 00646ff8 (DATA)
// 00579896: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0xbe0] (DATA)
// 0057989d: PUSH EAX
// 0057989e: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005798a3: ADD ESP,0x8
// 005798a6: PUSH 0x647012
//   XREF to: 00647012 (DATA)
// 005798ab: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0xbe0] (DATA)
// 005798b2: PUSH EAX
// 005798b3: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 005798b8: ADD ESP,0x8
// 005798bb: PUSH 0x0
// 005798bd: PUSH -0x1
// 005798bf: LEA EAX,[ESP + 0x1c48]
//   XREF to: Stack[-0x838] (DATA)
// 005798c6: PUSH EAX
// 005798c7: LEA EAX,[ESP + 0x18a4]
//   XREF to: Stack[-0xbe0] (DATA)
// 005798ce: PUSH EAX
// 005798cf: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 005798d4: ADD ESP,0x10
// 005798d7: TEST EAX,EAX
// 005798d9: JL 0x00579a47
//   XREF to: 00579a47 (CONDITIONAL_JUMP)
// 005798df: JNZ 0x00579a7e
//   XREF to: 00579a7e (CONDITIONAL_JUMP)
// 005798e5: LEA EAX,[ESP + 0x1dd0]
//   XREF to: Stack[-0x6a8] (DATA)
// 005798ec: PUSH EAX
// 005798ed: CALL core_setedit.cpp_EditingGroundTypesAndSaving_FUN_00578630
//   XREF to: 00578630 (UNCONDITIONAL_CALL)
// 005798f2: ADD ESP,0x4
// 005798f5: PUSH 0x0
// 005798f7: MOV EAX,dword ptr [ESP + 0x2448]
//   XREF to: Stack[-0x34] (READ)
// 005798fe: PUSH EAX
// 005798ff: MOV EDX,dword ptr [ESP + 0x2488]
//   XREF to: Stack[0x8] (READ)
// 00579906: PUSH EDX
// 00579907: CALL crt_stdio.c_fseek_FUN_005ffacc
//   XREF to: 005ffacc (UNCONDITIONAL_CALL)
// 0057990c: ADD ESP,0xc
// 0057990f: PUSH 0x0
// 00579911: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0xbe0] (DATA)
// 00579918: PUSH EAX
// 00579919: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0057991e: ADD ESP,0x8
// 00579921: JMP 0x00579675
//   XREF to: 00579675 (UNCONDITIONAL_JUMP)
// 00579926: MOV EAX,[0x03654368]
//   Label: LAB_00579926
//   XREF to: 03654368 (READ)
// 0057992b: INC EBX
// 0057992c: ADD ESI,0x28
// 0057992f: CMP EBX,EAX
// 00579931: JL 0x005797f3
//   XREF to: 005797f3 (CONDITIONAL_JUMP)
// 00579937: MOV EAX,0xffffffff
//   Label: LAB_00579937
// 0057993c: JMP 0x0057981a
//   XREF to: 0057981a (UNCONDITIONAL_JUMP)
// 00579941: PUSH 0x4e1
//   Label: LAB_00579941
// 00579946: PUSH 0x646ebb
//   XREF to: 00646ebb (DATA)
// 0057994b: PUSH 0x646ecf
//   XREF to: 00646ecf (DATA)
// 00579950: PUSH 0x0
// 00579952: LEA EAX,[ESP + 0x1de0]
//   XREF to: Stack[-0x6a8] (DATA)
// 00579959: PUSH EAX
// 0057995a: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0057995f: MOV EBX,EAX
// 00579961: ADD ESP,0x14
// 00579964: TEST EAX,EAX
// 00579966: JNZ 0x005799c3
//   XREF to: 005799c3 (CONDITIONAL_JUMP)
// 00579968: CMP dword ptr [0x03365cb8],0x0
//   XREF to: 03365cb8 (READ)
// 0057996f: JZ 0x0057999b
//   XREF to: 0057999b (CONDITIONAL_JUMP)
// 00579971: XOR ECX,ECX
//   Label: LAB_00579971
// 00579973: PUSH ECX
// 00579974: LEA EAX,[ESP + 0x1ed8]
//   XREF to: Stack[-0x5a4] (DATA)
// 0057997b: PUSH EAX
// 0057997c: MOV ESI,0x1
// 00579981: MOV dword ptr [EDI + 0x3364d18],ECX
//   XREF to: 03364d18 (WRITE)
// 00579987: CALL core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
//   XREF to: 00578290 (UNCONDITIONAL_CALL)
// 0057998c: ADD ESP,0x8
// 0057998f: MOV dword ptr [ESP + 0x2448],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 00579996: JMP 0x00579835
//   XREF to: 00579835 (UNCONDITIONAL_JUMP)
// 0057999b: LEA EAX,[ESP + 0x1dd0]
//   Label: LAB_0057999b
//   XREF to: Stack[-0x6a8] (DATA)
// 005799a2: PUSH EAX
// 005799a3: PUSH 0x646ed3
//   XREF to: 00646ed3 (DATA)
// 005799a8: MOV EAX,[0x00678a60]
//   XREF to: 00678a60 (READ)
// 005799ad: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 005799ae: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 005799b3: MOV EDX,0x1
// 005799b8: ADD ESP,0xc
// 005799bb: MOV dword ptr [0x03365cb8],EDX
//   XREF to: 03365cb8 (WRITE)
// 005799c1: JMP 0x00579971
//   XREF to: 00579971 (UNCONDITIONAL_JUMP)
// 005799c3: PUSH 0x0
//   Label: LAB_005799c3
// 005799c5: LEA EAX,[ESP + 0x20dc]
//   XREF to: Stack[-0x3a0] (DATA)
// 005799cc: PUSH EAX
// 005799cd: PUSH 0x0
// 005799cf: PUSH 0x0
// 005799d1: LEA EAX,[ESP + 0x1ee4]
//   XREF to: Stack[-0x5a4] (DATA)
// 005799d8: PUSH EAX
// 005799d9: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005799de: ADD ESP,0x14
// 005799e1: PUSH 0x0
// 005799e3: CALL core_ground.cpp_getGroundTypeName_FUN_004eed80
//   XREF to: 004eed80 (UNCONDITIONAL_CALL)
// 005799e8: ADD ESP,0x4
// 005799eb: PUSH EAX
// 005799ec: LEA EAX,[ESP + 0x20dc]
//   XREF to: Stack[-0x3a0] (DATA)
// 005799f3: PUSH EAX
// 005799f4: PUSH 0x646ef3
//   XREF to: 00646ef3 (DATA)
// 005799f9: PUSH EBX
// 005799fa: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 005799ff: ADD ESP,0x10
// 00579a02: PUSH 0x4eb
// 00579a07: PUSH 0x646efb
//   XREF to: 00646efb (DATA)
// 00579a0c: PUSH EBX
// 00579a0d: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00579a12: ADD ESP,0xc
// 00579a15: JMP 0x00579971
//   XREF to: 00579971 (UNCONDITIONAL_JUMP)
// 00579a1a: CMP dword ptr [ESP + 0x244c],0x0
//   Label: LAB_00579a1a
//   XREF to: Stack[-0x2c] (READ)
// 00579a22: JNZ 0x00579856
//   XREF to: 00579856 (CONDITIONAL_JUMP)
// 00579a28: JMP 0x0057904b
//   XREF to: 0057904b (UNCONDITIONAL_JUMP)
// 00579a2d: PUSH 0x646f9b
//   Label: LAB_00579a2d
//   XREF to: 00646f9b (DATA)
// 00579a32: LEA EAX,[ESP + 0x1c44]
//   XREF to: Stack[-0x838] (DATA)
// 00579a39: PUSH EAX
// 00579a3a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00579a3f: ADD ESP,0x8
// 00579a42: JMP 0x00579881
//   XREF to: 00579881 (UNCONDITIONAL_JUMP)
// 00579a47: PUSH 0x516
//   Label: LAB_00579a47
// 00579a4c: PUSH 0x64705c
//   XREF to: 0064705c (DATA)
// 00579a51: MOV ECX,dword ptr [ESP + 0x2488]
//   XREF to: Stack[0x8] (READ)
// 00579a58: PUSH ECX
// 00579a59: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00579a5e: ADD ESP,0xc
// 00579a61: PUSH 0x0
// 00579a63: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0xbe0] (DATA)
// 00579a6a: PUSH EAX
// 00579a6b: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00579a70: ADD ESP,0x8
// 00579a73: ADD ESP,0x2468
// 00579a79: POP EBP
// 00579a7a: POP EDI
// 00579a7b: POP ESI
// 00579a7c: POP EBX
// 00579a7d: RET
// 00579a7e: PUSH 0x0
//   Label: LAB_00579a7e
// 00579a80: LEA EAX,[ESP + 0x189c]
//   XREF to: Stack[-0xbe0] (DATA)
// 00579a87: PUSH EAX
// 00579a88: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00579a8d: ADD ESP,0x8
// 00579a90: JMP 0x0057904b
//   XREF to: 0057904b (UNCONDITIONAL_JUMP)
// 00579a95: MOV EDI,dword ptr [ESP + 0x247c]
//   Label: LAB_00579a95
//   XREF to: Stack[0x4] (READ)
// 00579a9c: PUSH EDI
// 00579a9d: CALL core_set.cpp_CDemonSet_clear_FUN_005693c0
//   XREF to: 005693c0 (UNCONDITIONAL_CALL)
// 00579aa2: ADD ESP,0x4
// 00579aa5: PUSH 0x3277d14
//   XREF to: 03277d14 (DATA)
// 00579aaa: CALL core_dtrace.cpp_CDemonRaytrace_allocTris_FUN_004950b0
//   XREF to: 004950b0 (UNCONDITIONAL_CALL)
// 00579aaf: ADD ESP,0x4
// 00579ab2: PUSH 0x647094
//   XREF to: 00647094 (DATA)
// 00579ab7: MOV EBP,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00579abd: PUSH EBP
//   XREF to: 02cf1cd4 (DATA)
// 00579abe: MOV dword ptr [EDI + 0x15ae94],0x3f800000
// 00579ac8: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00579acd: ADD ESP,0x8
// 00579ad0: MOV EBX,dword ptr [ESP + 0x2428]
//   XREF to: Stack[-0x50] (READ)
// 00579ad7: LEA EAX,[EBX*0x4 + 0x0]
// 00579ade: SUB EAX,EBX
// 00579ae0: PUSH 0x547
// 00579ae5: SHL EAX,0x2
// 00579ae8: PUSH 0x6470a5
//   XREF to: 006470a5 (DATA)
// 00579aed: ADD EAX,0x4
// 00579af0: PUSH EAX
// 00579af1: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00579af6: MOV EBX,EAX
// 00579af8: ADD ESP,0xc
// 00579afb: TEST EAX,EAX
// 00579afd: JZ 0x00579b0c
//   XREF to: 00579b0c (CONDITIONAL_JUMP)
// 00579aff: ADD EBX,0x4
// 00579b02: MOV EAX,dword ptr [ESP + 0x2428]
//   XREF to: Stack[-0x50] (READ)
// 00579b09: MOV dword ptr [EBX + -0x4],EAX
// 00579b0c: MOV dword ptr [ESP + 0x2440],EBX
//   Label: LAB_00579b0c
//   XREF to: Stack[-0x38] (WRITE)
// 00579b13: TEST EBX,EBX
// 00579b15: JZ 0x00579bc5
//   XREF to: 00579bc5 (CONDITIONAL_JUMP)
// 00579b1b: MOV EBX,dword ptr [ESP + 0x2480]
//   Label: LAB_00579b1b
//   XREF to: Stack[0x8] (READ)
// 00579b22: PUSH EBX
//   Label: LAB_00579b22
// 00579b23: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579b28: ADD ESP,0x4
// 00579b2b: TEST EAX,EAX
// 00579b2d: JL 0x00579b34
//   XREF to: 00579b34 (CONDITIONAL_JUMP)
// 00579b2f: CMP EAX,0xa
// 00579b32: JNZ 0x00579b22
//   XREF to: 00579b22 (CONDITIONAL_JUMP)
// 00579b34: MOV ESI,dword ptr [ESP + 0x2428]
//   Label: LAB_00579b34
//   XREF to: Stack[-0x50] (READ)
// 00579b3b: XOR EBX,EBX
// 00579b3d: TEST ESI,ESI
// 00579b3f: JLE 0x00579138
//   XREF to: 00579138 (CONDITIONAL_JUMP)
// 00579b45: MOV ESI,dword ptr [ESP + 0x2440]
//   XREF to: Stack[-0x38] (READ)
// 00579b4c: MOV EDI,dword ptr [ESP + 0x2440]
//   XREF to: Stack[-0x38] (READ)
// 00579b53: ADD ESI,0x8
// 00579b56: ADD EDI,0x4
// 00579b59: IMUL EAX,EBX,0xc
//   Label: LAB_00579b59
// 00579b5c: PUSH ESI
// 00579b5d: MOV EDX,dword ptr [ESP + 0x2444]
//   XREF to: Stack[-0x38] (READ)
// 00579b64: PUSH EDI
// 00579b65: ADD EAX,EDX
// 00579b67: PUSH EAX
// 00579b68: PUSH 0x6470f3
//   XREF to: 006470f3 (DATA)
// 00579b6d: MOV ECX,dword ptr [ESP + 0x2490]
//   XREF to: Stack[0x8] (READ)
// 00579b74: PUSH ECX
// 00579b75: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00579b7a: ADD ESP,0x14
// 00579b7d: CMP EAX,0x3
// 00579b80: JZ 0x00579bad
//   XREF to: 00579bad (CONDITIONAL_JUMP)
// 00579b82: MOV EDX,dword ptr [ESP + 0x2428]
//   XREF to: Stack[-0x50] (READ)
// 00579b89: PUSH EDX
// 00579b8a: PUSH EBX
// 00579b8b: MOV EBP,0x6470fd
//   XREF to: 006470fd (DATA)
// 00579b90: MOV EAX,0x54f
// 00579b95: PUSH 0x647111
//   XREF to: 00647111 (DATA)
// 00579b9a: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00579ba0: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00579ba5: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579baa: ADD ESP,0xc
// 00579bad: MOV EBP,dword ptr [ESP + 0x2428]
//   Label: LAB_00579bad
//   XREF to: Stack[-0x50] (READ)
// 00579bb4: ADD EDI,0xc
// 00579bb7: INC EBX
// 00579bb8: ADD ESI,0xc
// 00579bbb: CMP EBX,EBP
// 00579bbd: JGE 0x00579138
//   XREF to: 00579138 (CONDITIONAL_JUMP)
// 00579bc3: JMP 0x00579b59
//   XREF to: 00579b59 (UNCONDITIONAL_JUMP)
// 00579bc5: MOV ECX,dword ptr [ESP + 0x2428]
//   Label: LAB_00579bc5
//   XREF to: Stack[-0x50] (READ)
// 00579bcc: PUSH ECX
// 00579bcd: MOV EAX,0x6470b9
//   XREF to: 006470b9 (PARAM)
// 00579bd2: MOV EDX,0x548
// 00579bd7: PUSH 0x6470cd
//   XREF to: 006470cd (DATA)
// 00579bdc: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00579be1: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00579be7: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579bec: ADD ESP,0x8
// 00579bef: JMP 0x00579b1b
//   XREF to: 00579b1b (UNCONDITIONAL_JUMP)
// 00579bf4: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_00579bf4
//   XREF to: Stack[0x4] (READ)
// 00579bfb: MOV EDI,dword ptr [EAX + 0x19a2c]
// 00579c01: XOR ESI,ESI
// 00579c03: TEST EDI,EDI
// 00579c05: JLE 0x00579c7d
//   XREF to: 00579c7d (CONDITIONAL_JUMP)
// 00579c07: ADD EAX,0x19a30
// 00579c0c: MOV EBX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579c13: MOV EDI,EAX
// 00579c15: LEA EBP,[EAX + 0x1898]
// 00579c1b: MOV EAX,dword ptr [EBX + 0x19a30]
//   Label: LAB_00579c1b
// 00579c21: TEST EAX,EAX
// 00579c23: JNZ 0x00579fbc
//   XREF to: 00579fbc (CONDITIONAL_JUMP)
// 00579c29: MOV EAX,dword ptr [ESP + 0x2408]
//   XREF to: Stack[-0x70] (READ)
// 00579c30: MOV dword ptr [ESP + 0x2454],EAX
//   Label: LAB_00579c30
//   XREF to: Stack[-0x24] (WRITE)
// 00579c37: CMP dword ptr [ESP + 0x2454],0x0
//   Label: LAB_00579c37
//   XREF to: Stack[-0x24] (READ)
// 00579c3f: JZ 0x00579ffb
//   XREF to: 00579ffb (CONDITIONAL_JUMP)
// 00579c45: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579c4c: MOV EDX,dword ptr [EAX + 0x19a2c]
// 00579c52: DEC EDX
// 00579c53: MOV dword ptr [EAX + 0x19a2c],EDX
// 00579c59: MOV EAX,EDX
// 00579c5b: SUB EAX,ESI
// 00579c5d: IMUL EAX,EAX,0x1898
// 00579c63: PUSH EAX
// 00579c64: PUSH EBP
// 00579c65: PUSH EDI
// 00579c66: CALL crt_string.c_memmove_FUN_005fe5e0
//   XREF to: 005fe5e0 (UNCONDITIONAL_CALL)
// 00579c6b: ADD ESP,0xc
// 00579c6e: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_00579c6e
//   XREF to: Stack[0x4] (READ)
// 00579c75: CMP ESI,dword ptr [EAX + 0x19a2c]
// 00579c7b: JL 0x00579c1b
//   XREF to: 00579c1b (CONDITIONAL_JUMP)
// 00579c7d: PUSH 0x64716f
//   Label: LAB_00579c7d
//   XREF to: 0064716f (DATA)
// 00579c82: MOV ECX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00579c88: PUSH ECX
//   XREF to: 02cf1cd4 (DATA)
// 00579c89: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00579c8e: ADD ESP,0x8
// 00579c91: MOV EDI,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00579c98: PUSH EDI
//   Label: LAB_00579c98
// 00579c99: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00579c9e: ADD ESP,0x4
// 00579ca1: TEST EAX,EAX
// 00579ca3: JL 0x00579caa
//   XREF to: 00579caa (CONDITIONAL_JUMP)
// 00579ca5: CMP EAX,0xa
// 00579ca8: JNZ 0x00579c98
//   XREF to: 00579c98 (CONDITIONAL_JUMP)
// 00579caa: XOR ECX,ECX
//   Label: LAB_00579caa
// 00579cac: MOV EBX,dword ptr [ESP + 0x2434]
//   XREF to: Stack[-0x44] (READ)
// 00579cb3: MOV dword ptr [ESP + 0x23fc],ECX
//   XREF to: Stack[-0x7c] (WRITE)
// 00579cba: TEST EBX,EBX
// 00579cbc: JLE 0x00579191
//   XREF to: 00579191 (CONDITIONAL_JUMP)
// 00579cc2: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579cc9: ADD EAX,0x19a30
// 00579cce: MOV dword ptr [ESP + 0x245c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00579cd5: MOV EAX,ESP
//   Label: LAB_00579cd5
// 00579cd7: PUSH EAX
// 00579cd8: CALL core_setutil.cpp_C3DSLight_ctor_FUN_005862f0
//   XREF to: 005862f0 (UNCONDITIONAL_CALL)
// 00579cdd: ADD ESP,0x4
// 00579ce0: MOV EBP,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 00579ce7: PUSH EBP
// 00579ce8: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x2478] (DATA)
// 00579cec: PUSH EAX
// 00579ced: CALL core_setutil.cpp_C3DSLight_importS3D_FUN_00587710
//   XREF to: 00587710 (UNCONDITIONAL_CALL)
// 00579cf2: ADD ESP,0x8
// 00579cf5: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x2478] (DATA)
// 00579cf8: TEST EAX,EAX
// 00579cfa: JNZ 0x0057a013
//   XREF to: 0057a013 (CONDITIONAL_JUMP)
// 00579d00: MOV EAX,dword ptr [ESP + 0x2408]
//   XREF to: Stack[-0x70] (READ)
// 00579d07: MOV dword ptr [ESP + 0x2458],EAX
//   Label: LAB_00579d07
//   XREF to: Stack[-0x20] (WRITE)
// 00579d0e: CMP dword ptr [ESP + 0x2458],0x0
//   Label: LAB_00579d0e
//   XREF to: Stack[-0x20] (READ)
// 00579d16: JZ 0x00579f99
//   XREF to: 00579f99 (CONDITIONAL_JUMP)
// 00579d1c: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579d23: CMP dword ptr [EAX + 0x19a2c],0xc8
// 00579d2d: JL 0x00579d51
//   XREF to: 00579d51 (CONDITIONAL_JUMP)
// 00579d2f: MOV EAX,0x6471a9
//   XREF to: 006471a9 (PARAM)
// 00579d34: MOV EDX,0x58f
// 00579d39: PUSH 0x6471bd
//   XREF to: 006471bd (DATA)
// 00579d3e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00579d43: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00579d49: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579d4e: ADD ESP,0x4
// 00579d51: MOV EAX,dword ptr [ESP + 0x247c]
//   Label: LAB_00579d51
//   XREF to: Stack[0x4] (READ)
// 00579d58: IMUL EBP,dword ptr [EAX + 0x19a2c],0x1898
// 00579d62: MOV EBX,dword ptr [ESP + 0x245c]
//   XREF to: Stack[-0x1c] (READ)
// 00579d69: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x2474] (DATA)
// 00579d6d: ADD EBP,EBX
// 00579d6f: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x2478] (DATA)
// 00579d72: MOV ECX,0x40
// 00579d77: LEA EDI,[EBP + 0x4]
// 00579d7a: MOV dword ptr [EBP],EAX
// 00579d7d: MOV EBX,EBP
// 00579d7f: MOVSD.REP ES:EDI,ESI
// 00579d81: LEA EAX,[ESP + 0x104]
//   XREF to: Stack[-0x2374] (DATA)
// 00579d88: LEA ESI,[EBP + 0x104]
// 00579d8e: CMP ESI,EAX
// 00579d90: JZ 0x00579daf
//   XREF to: 00579daf (CONDITIONAL_JUMP)
// 00579d92: MOV EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x2374] (DATA)
// 00579d99: MOV dword ptr [ESI],EAX
// 00579d9b: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x2370] (READ)
// 00579da2: MOV dword ptr [ESI + 0x4],EAX
// 00579da5: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x236c] (READ)
// 00579dac: MOV dword ptr [ESI + 0x8],EAX
// 00579daf: LEA EAX,[ESP + 0x110]
//   Label: LAB_00579daf
//   XREF to: Stack[-0x2368] (DATA)
// 00579db6: LEA ESI,[EBX + 0x110]
// 00579dbc: CMP ESI,EAX
// 00579dbe: JZ 0x00579ddd
//   XREF to: 00579ddd (CONDITIONAL_JUMP)
// 00579dc0: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x2368] (DATA)
// 00579dc7: MOV dword ptr [ESI],EAX
// 00579dc9: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x2364] (READ)
// 00579dd0: MOV dword ptr [ESI + 0x4],EAX
// 00579dd3: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x2360] (READ)
// 00579dda: MOV dword ptr [ESI + 0x8],EAX
// 00579ddd: MOV EAX,dword ptr [ESP + 0x11c]
//   Label: LAB_00579ddd
//   XREF to: Stack[-0x235c] (READ)
// 00579de4: MOV dword ptr [EBX + 0x11c],EAX
// 00579dea: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x2358] (READ)
// 00579df1: MOV ECX,0x3e
// 00579df6: MOV dword ptr [EBX + 0x120],EAX
// 00579dfc: LEA ESI,[ESP + 0x128]
//   XREF to: Stack[-0x2350] (DATA)
// 00579e03: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x2354] (READ)
// 00579e0a: LEA EDI,[EBX + 0x128]
// 00579e10: MOV dword ptr [EBX + 0x124],EAX
// 00579e16: MOVSD.REP ES:EDI,ESI
// 00579e18: MOVSW ES:EDI,ESI
// 00579e1a: LEA ESI,[ESP + 0x224]
//   XREF to: Stack[-0x2254] (DATA)
// 00579e21: LEA EDI,[EBX + 0x224]
// 00579e27: MOVSD ES:EDI,ESI
// 00579e28: MOVSD ES:EDI,ESI
// 00579e29: MOVSD ES:EDI,ESI
// 00579e2a: MOVSD ES:EDI,ESI
// 00579e2b: MOV EAX,dword ptr [ESP + 0x11c4]
//   XREF to: Stack[-0x12b4] (READ)
// 00579e32: MOV dword ptr [EBX + 0x11c4],EAX
// 00579e38: MOV EAX,dword ptr [ESP + 0x11c8]
//   XREF to: Stack[-0x12b0] (READ)
// 00579e3f: MOV dword ptr [EBX + 0x11c8],EAX
// 00579e45: MOV EAX,dword ptr [ESP + 0x11cc]
//   XREF to: Stack[-0x12ac] (READ)
// 00579e4c: MOV dword ptr [EBX + 0x11cc],EAX
// 00579e52: MOV EAX,dword ptr [ESP + 0x11d0]
//   XREF to: Stack[-0x12a8] (READ)
// 00579e59: MOV dword ptr [EBX + 0x11d0],EAX
// 00579e5f: MOV EAX,dword ptr [ESP + 0x11d4]
//   XREF to: Stack[-0x12a4] (READ)
// 00579e66: MOV dword ptr [EBX + 0x11d4],EAX
// 00579e6c: MOV EAX,dword ptr [ESP + 0x11d8]
//   XREF to: Stack[-0x12a0] (READ)
// 00579e73: MOV dword ptr [EBX + 0x11d8],EAX
// 00579e79: MOV EAX,dword ptr [ESP + 0x11dc]
//   XREF to: Stack[-0x129c] (READ)
// 00579e80: MOV dword ptr [EBX + 0x11dc],EAX
// 00579e86: MOV EAX,dword ptr [ESP + 0x11e0]
//   XREF to: Stack[-0x1298] (READ)
// 00579e8d: MOV dword ptr [EBX + 0x11e0],EAX
// 00579e93: MOV EAX,dword ptr [ESP + 0x11e4]
//   XREF to: Stack[-0x1294] (READ)
// 00579e9a: MOV dword ptr [EBX + 0x11e4],EAX
// 00579ea0: MOV EAX,dword ptr [ESP + 0x11e8]
//   XREF to: Stack[-0x1290] (READ)
// 00579ea7: MOV dword ptr [EBX + 0x11e8],EAX
// 00579ead: MOV EAX,dword ptr [ESP + 0x11ec]
//   XREF to: Stack[-0x128c] (READ)
// 00579eb4: MOV ECX,0x140
// 00579eb9: MOV dword ptr [EBX + 0x11ec],EAX
// 00579ebf: LEA ESI,[ESP + 0x11f4]
//   XREF to: Stack[-0x1284] (DATA)
// 00579ec6: MOV EAX,dword ptr [ESP + 0x11f0]
//   XREF to: Stack[-0x1288] (READ)
// 00579ecd: LEA EDI,[EBX + 0x11f4]
// 00579ed3: MOV dword ptr [EBX + 0x11f0],EAX
// 00579ed9: MOVSD.REP ES:EDI,ESI
// 00579edb: MOV ECX,0x20
// 00579ee0: LEA ESI,[ESP + 0x16f4]
//   XREF to: Stack[-0xd84] (DATA)
// 00579ee7: LEA EDI,[EBX + 0x16f4]
// 00579eed: MOVSD.REP ES:EDI,ESI
// 00579eef: MOV ECX,0x20
// 00579ef4: LEA ESI,[ESP + 0x1774]
//   XREF to: Stack[-0xd04] (DATA)
// 00579efb: LEA EDI,[EBX + 0x1774]
// 00579f01: MOVSD.REP ES:EDI,ESI
// 00579f03: MOV EAX,dword ptr [ESP + 0x17f4]
//   XREF to: Stack[-0xc84] (READ)
// 00579f0a: MOV dword ptr [EBX + 0x17f4],EAX
// 00579f10: MOV EAX,dword ptr [ESP + 0x17f8]
//   XREF to: Stack[-0xc80] (READ)
// 00579f17: MOV dword ptr [EBX + 0x17f8],EAX
// 00579f1d: MOV EAX,dword ptr [ESP + 0x17fc]
//   XREF to: Stack[-0xc7c] (READ)
// 00579f24: MOV dword ptr [EBX + 0x17fc],EAX
// 00579f2a: MOV EAX,dword ptr [ESP + 0x1800]
//   XREF to: Stack[-0xc78] (READ)
// 00579f31: MOV dword ptr [EBX + 0x1800],EAX
// 00579f37: MOV EAX,dword ptr [ESP + 0x1804]
//   XREF to: Stack[-0xc74] (READ)
// 00579f3e: MOV dword ptr [EBX + 0x1804],EAX
// 00579f44: MOV EAX,dword ptr [ESP + 0x1808]
//   XREF to: Stack[-0xc70] (READ)
// 00579f4b: MOV ECX,0x20
// 00579f50: MOV dword ptr [EBX + 0x1808],EAX
// 00579f56: LEA ESI,[ESP + 0x1810]
//   XREF to: Stack[-0xc68] (DATA)
// 00579f5d: MOV EAX,dword ptr [ESP + 0x180c]
//   XREF to: Stack[-0xc6c] (READ)
// 00579f64: LEA EDI,[EBX + 0x1810]
// 00579f6a: MOV dword ptr [EBX + 0x180c],EAX
// 00579f70: MOVSD.REP ES:EDI,ESI
// 00579f72: MOV EAX,dword ptr [ESP + 0x1890]
//   XREF to: Stack[-0xbe8] (READ)
// 00579f79: MOV dword ptr [EBX + 0x1890],EAX
// 00579f7f: MOV EAX,dword ptr [ESP + 0x1894]
//   XREF to: Stack[-0xbe4] (READ)
// 00579f86: MOV dword ptr [EBX + 0x1894],EAX
// 00579f8c: MOV EAX,dword ptr [ESP + 0x247c]
//   XREF to: Stack[0x4] (READ)
// 00579f93: INC dword ptr [EAX + 0x19a2c]
// 00579f99: MOV ESI,dword ptr [ESP + 0x23fc]
//   Label: LAB_00579f99
//   XREF to: Stack[-0x7c] (READ)
// 00579fa0: INC ESI
// 00579fa1: MOV EDI,dword ptr [ESP + 0x2434]
//   XREF to: Stack[-0x44] (READ)
// 00579fa8: MOV dword ptr [ESP + 0x23fc],ESI
//   XREF to: Stack[-0x7c] (WRITE)
// 00579faf: CMP ESI,EDI
// 00579fb1: JGE 0x00579191
//   XREF to: 00579191 (CONDITIONAL_JUMP)
// 00579fb7: JMP 0x00579cd5
//   XREF to: 00579cd5 (UNCONDITIONAL_JUMP)
// 00579fbc: CMP EAX,0x1
//   Label: LAB_00579fbc
// 00579fbf: JNZ 0x00579fcd
//   XREF to: 00579fcd (CONDITIONAL_JUMP)
// 00579fc1: MOV EAX,dword ptr [ESP + 0x2404]
//   XREF to: Stack[-0x74] (READ)
// 00579fc8: JMP 0x00579c30
//   XREF to: 00579c30 (UNCONDITIONAL_JUMP)
// 00579fcd: MOV EDX,dword ptr [EBX + 0x19a30]
//   Label: LAB_00579fcd
// 00579fd3: PUSH EDX
// 00579fd4: MOV ECX,0x647144
//   XREF to: 00647144 (PARAM)
// 00579fd9: MOV EAX,0x56b
// 00579fde: PUSH 0x647158
//   XREF to: 00647158 (DATA)
// 00579fe3: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00579fe9: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00579fee: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00579ff3: ADD ESP,0x8
// 00579ff6: JMP 0x00579c37
//   XREF to: 00579c37 (UNCONDITIONAL_JUMP)
// 00579ffb: ADD EDI,0x1898
//   Label: LAB_00579ffb
// 0057a001: ADD EBP,0x1898
// 0057a007: INC ESI
// 0057a008: ADD EBX,0x1898
// 0057a00e: JMP 0x00579c6e
//   XREF to: 00579c6e (UNCONDITIONAL_JUMP)
// 0057a013: CMP EAX,0x1
//   Label: LAB_0057a013
// 0057a016: JNZ 0x0057a024
//   XREF to: 0057a024 (CONDITIONAL_JUMP)
// 0057a018: MOV EAX,dword ptr [ESP + 0x2404]
//   XREF to: Stack[-0x74] (READ)
// 0057a01f: JMP 0x00579d07
//   XREF to: 00579d07 (UNCONDITIONAL_JUMP)
// 0057a024: PUSH EAX
//   Label: LAB_0057a024
// 0057a025: MOV ECX,0x64717e
//   XREF to: 0064717e (PARAM)
// 0057a02a: MOV EBX,0x589
// 0057a02f: PUSH 0x647192
//   XREF to: 00647192 (DATA)
// 0057a034: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 0057a03a: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0057a040: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057a045: ADD ESP,0x8
// 0057a048: JMP 0x00579d0e
//   XREF to: 00579d0e (UNCONDITIONAL_JUMP)
// 0057a04d: MOV EBX,dword ptr [ESP + 0x2480]
//   Label: LAB_0057a04d
//   XREF to: Stack[0x8] (READ)
// 0057a054: PUSH EBX
//   Label: LAB_0057a054
// 0057a055: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057a05a: ADD ESP,0x4
// 0057a05d: TEST EAX,EAX
// 0057a05f: JL 0x0057a066
//   XREF to: 0057a066 (CONDITIONAL_JUMP)
// 0057a061: CMP EAX,0xa
// 0057a064: JNZ 0x0057a054
//   XREF to: 0057a054 (CONDITIONAL_JUMP)
// 0057a066: MOV EDX,dword ptr [ESP + 0x2438]
//   Label: LAB_0057a066
//   XREF to: Stack[-0x40] (READ)
// 0057a06d: XOR ESI,ESI
// 0057a06f: TEST EDX,EDX
// 0057a071: JLE 0x00579220
//   XREF to: 00579220 (CONDITIONAL_JUMP)
// 0057a077: MOV EBX,dword ptr [ESP + 0x2480]
//   XREF to: Stack[0x8] (READ)
// 0057a07e: PUSH EBX
//   Label: LAB_0057a07e
// 0057a07f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0057a084: ADD ESP,0x4
// 0057a087: TEST EAX,EAX
// 0057a089: JL 0x0057a090
//   XREF to: 0057a090 (CONDITIONAL_JUMP)
// 0057a08b: CMP EAX,0xa
// 0057a08e: JNZ 0x0057a07e
//   XREF to: 0057a07e (CONDITIONAL_JUMP)
// 0057a090: MOV EAX,dword ptr [ESP + 0x2438]
//   Label: LAB_0057a090
//   XREF to: Stack[-0x40] (READ)
// 0057a097: INC ESI
// 0057a098: CMP ESI,EAX
// 0057a09a: JGE 0x00579220
//   XREF to: 00579220 (CONDITIONAL_JUMP)
// 0057a0a0: JMP 0x0057a07e
//   XREF to: 0057a07e (UNCONDITIONAL_JUMP)
// 0057a0a2: CMP dword ptr [ESP + 0x240c],0x0
//   Label: LAB_0057a0a2
//   XREF to: Stack[-0x6c] (READ)
// 0057a0aa: JNZ 0x00579406
//   XREF to: 00579406 (CONDITIONAL_JUMP)
// 0057a0b0: JMP 0x005794f0
//   XREF to: 005794f0 (UNCONDITIONAL_JUMP)
