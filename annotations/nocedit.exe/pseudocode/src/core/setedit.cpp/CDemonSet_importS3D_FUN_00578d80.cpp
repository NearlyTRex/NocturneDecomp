// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// Address Range: [[00578d80, 0057a0b4]]
// Convention: unknown
// Signature: void core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(void)

#include "nocturne.h"

/* Signature: void core_setedit.cpp_CDemonSet_importS3D(CDemonSet* param_1, uint param_2, int*
   param_3) */

void core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(void)

{
  CEditorTools *this_ptr;
  uchar triangle_flags;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  FILE *file;
  int *piVar5;
  C3DSCamera *pCVar6;
  CDemonSet *pCVar7;
  int iVar8;
  C3DSLight *pCVar9;
  char *pcVar10;
  char *pcVar11;
  float *pfVar12;
  C3DSLight *dest;
  uint *puVar13;
  uint *puVar14;
  char (*pacVar15) [40];
  float *pfVar16;
  int *piVar17;
  CDemonFilter **ppCVar18;
  byte bVar19;
  CDemonSet *in_stack_00000004;
  FILE *in_stack_00000008;
  uint auStackY_3a30 [1378];
  uint in_stack_ffffdb88;
  uint in_stack_ffffdb8c;
  uint in_stack_ffffdb90;
  uint in_stack_ffffdb94;
  uint in_stack_ffffdb98;
  float local_2374;
  float local_2370;
  float local_236c;
  float local_2368;
  float local_2364;
  float local_2360;
  float local_235c;
  float local_2358;
  float local_2354;
  uint local_2350 [63];
  char local_2254 [4];
  uint auStack_2250 [999];
  float local_12b4;
  float local_12b0;
  float local_12ac;
  float local_12a8;
  float local_12a4;
  char local_12a0 [4];
  char local_129c [4];
  float local_1298;
  float local_1294;
  float local_1290;
  int local_128c;
  int local_1288;
  uint local_1284 [320];
  float local_d84 [32];
  int local_d04 [32];
  int local_c84;
  int local_c80;
  int local_c7c;
  int local_c78;
  int local_c74;
  int local_c70;
  int local_c6c;
  uint local_c68 [32];
  int local_be8;
  float local_be4;
  CPickList local_be0;
  char local_838 [400];
  char local_6a8 [260];
  char local_5a4 [260];
  char local_4a0 [256];
  char local_3a0 [256];
  char local_2a0 [256];
  char local_1a0 [256];
  byte local_a0 [4];
  byte local_9c [4];
  byte local_98 [4];
  byte local_94 [4];
  byte local_90 [4];
  byte local_8c [4];
  int local_88;
  int local_84;
  int local_80;
  int local_7c;
  int local_78;
  int local_74;
  int local_70;
  int local_6c;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  int local_40;
  long local_3c;
  int *local_38;
  long local_34;
  int local_30;
  int local_2c;
  char *local_28;
  int local_24;
  int local_20;
  C3DSLight *local_1c;
  int local_18;
  char local_14 [4];
  
  bVar19 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_78 = core_setedit_cpp_FUN_00578c90();
  if ((((local_78 < 0) || (iVar1 = core_setedit_cpp_FUN_00578c90(), iVar1 < 0)) ||
      (local_74 = iVar1, iVar2 = core_setedit_cpp_FUN_00578c90(), iVar2 < 0)) ||
     (local_70 = iVar2, local_6c = core_setedit_cpp_FUN_00578c90(), local_6c < 0)) {
    return;
  }
  if ((iVar1 == 0) && (iVar2 == 0)) {
    local_68 = 0;
  }
  else {
    local_68 = 1;
  }
  if (((local_78 == 0) && (local_68 == 0)) && (local_6c == 0)) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Nothing to do!");
    return;
  }
  if (((local_68 == 0) && (in_stack_00000004->light_count < 1)) &&
     (iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no lights currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar1 == 0)) {
    return;
  }
  if (((local_6c == 0) && (in_stack_00000004->camera_count < 1)) &&
     (iVar1 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no cameras currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar1 == 0)) {
    return;
  }
  local_64 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute light visibility?");
  local_60 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute fog?");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading S3D header, parts, and materials");
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&local_5c);
  if (local_5c != 0x67) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x490;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't import S3D file version %d, I can only do version %d.",local_5c,0x67);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  crt_stdio_c_fscanf_FUN_005fe7c0
            (in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",&local_58,&local_54,&local_50,&local_48,
             &local_4c,&local_44,&local_40);
  if (local_4c != 1) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x49a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Scene contains %d frames.  Only single-frame scenes supported.",local_4c);
  }
  if ((local_6c != 0) && (0xfa < local_40)) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x4a1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Scene contains %d cameras.  Maximum number of cameras is %d.",local_40,0xfa);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping part list");
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < local_48) {
LAB_00578fc0:
    do {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_00578fc0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (local_78 != 0) {
    local_34 = crt_stdio_c_ftell_FUN_00601560(in_stack_00000008);
    local_28 = in_stack_00000004->geometry_filename;
    do {
      DAT_03654368 = 0;
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80(".\\GroundTypes",local_14,local_1a0);
      engine_dosio_c_splitPath_FUN_00481f20(local_28,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
      engine_dosio_c_makePath_FUN_00481f50(local_6a8,local_14,local_1a0,local_3a0,".txt");
      core_setedit_cpp_ImportingGroundTextures_FUN_00578420();
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading textures");
      if (1000 < local_58) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0x4cc;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
      }
      iVar1 = 0;
      local_2c = 0;
      local_30 = 0;
      if (0 < local_58) {
        iVar2 = 0;
        do {
          crt_stdio_c_fgets_FUN_005fefd0(local_5a4,0x104,in_stack_00000008);
          pcVar11 = local_5a4;
          do {
            pcVar10 = pcVar11;
            if (*pcVar11 == '\n') goto LAB_0057979a;
            if (*pcVar11 == '\0') break;
            pcVar10 = pcVar11 + 1;
            if (*pcVar10 == '\n') goto LAB_0057979a;
            pcVar11 = pcVar11 + 2;
          } while (*pcVar10 != '\0');
          pcVar10 = (char *)0x0;
LAB_0057979a:
          if (pcVar10 != (char *)0x0) {
            pcVar11 = local_5a4;
            do {
              pcVar10 = pcVar11;
              if (*pcVar11 == '\n') goto LAB_005797bd;
              if (*pcVar11 == '\0') break;
              pcVar10 = pcVar11 + 1;
              if (*pcVar10 == '\n') goto LAB_005797bd;
              pcVar11 = pcVar11 + 2;
            } while (*pcVar10 != '\0');
            pcVar10 = (char *)0x0;
LAB_005797bd:
            *pcVar10 = '\0';
          }
          iVar8 = 0;
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_5a4,(char *)0x0,(char *)0x0,local_4a0,(char *)0x0);
          if (0 < DAT_03654368) {
            pcVar11 = &DAT_03654370;
            do {
              iVar3 = crt_string_c_stricmp_FUN_005fe7f0(pcVar11,local_4a0);
              if (iVar3 == 0) {
                if (-1 < iVar8) {
                  uVar4 = (uint)(byte)(&DAT_03659190)[iVar8];
                  goto LAB_0057981a;
                }
                break;
              }
              iVar8 = iVar8 + 1;
              pcVar11 = pcVar11 + 0x28;
            } while (iVar8 < DAT_03654368);
          }
          uVar4 = 0xffffffff;
LAB_0057981a:
          *(uint *)((int)&DAT_03364d18 + iVar2) = uVar4;
          if ((int)uVar4 < 0) {
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_6a8,(char *)0x0,"a+t","..\\core\\setedit.cpp",0x4e1
                             );
            if (file == (FILE *)0x0) {
              if (DAT_03365cb8 == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Warning: Can't create/append %s",local_6a8);
                DAT_03365cb8 = 1;
              }
            }
            else {
              engine_dosio_c_splitPath_FUN_00481f20
                        (local_5a4,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
              pcVar11 = core_ground_cpp_getGroundTypeName_FUN_004eed80(0);
              crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s, %s\n",local_3a0,pcVar11);
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x4eb);
            }
            *(uint *)((int)&DAT_03364d18 + iVar2) = 0;
            core_setedit_cpp_DefineTexturesMaybe_FUN_00578290();
            local_30 = 1;
          }
          else if (uVar4 == 0) {
            local_2c = 1;
          }
          iVar1 = iVar1 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar1 < local_58);
      }
      if ((local_30 == 0) && (local_2c == 0)) goto LAB_0057904b;
      if (local_30 == 0) {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_838,"You have some textures which are currently assigned DEFAULT\nWhat do you want to do about it?");
      }
      else {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_838,"You have some new textures which have not been groun typed\nThey have been added to %s and assigned DEFAULT\nWhat do you want to do about it?",local_6a8);
      }
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_be0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_be0.base,"Edit the gound types now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_be0.base,"Just leave the default assignments for now.  I can always fix this later.");
      iVar1 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_be0,local_838,-1,0);
      if (iVar1 < 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000008,"..\\core\\setedit.cpp",0x516)
        ;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_be0,0,in_stack_ffffdb88,in_stack_ffffdb8c,in_stack_ffffdb90,
                   in_stack_ffffdb94,in_stack_ffffdb98);
        return;
      }
      if (iVar1 != 0) goto LAB_00579a7e;
      core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630();
      crt_stdio_c_fseek_FUN_005ffacc(in_stack_00000008,local_34,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_be0,0,in_stack_ffffdb88,in_stack_ffffdb8c,in_stack_ffffdb90,
                 in_stack_ffffdb94,in_stack_ffffdb98);
    } while( true );
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping textures");
  iVar1 = 0;
  if (0 < local_58) {
LAB_0057902d:
    do {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_0057902d;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_58);
  }
LAB_0057904b:
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping polygons");
  do {
    iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_3c = crt_stdio_c_ftell_FUN_00601560(in_stack_00000008);
  iVar1 = 0;
  if (0 < local_54) {
LAB_005790a3:
    do {
      iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_005790a3;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_54);
  }
  local_38 = (int *)0x0;
  if (local_78 == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Locating lights");
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_50) {
LAB_0057911a:
      do {
        iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (-1 < iVar2) {
          if (iVar2 != 10) goto LAB_0057911a;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_50);
    }
  }
  else {
    core_set_cpp_CDemonSet_clear_FUN_005693c0(in_stack_00000004);
    core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(&g_CDemonRaytraceInstance);
    this_ptr = g_CEditorToolsPtr;
    in_stack_00000004->set_scale_factor = 1.0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr,"Reading vertices");
    piVar5 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (local_50 * 0xc + 4,"..\\core\\setedit.cpp",0x547);
    local_38 = piVar5;
    if (piVar5 != (int *)0x0) {
      local_38 = piVar5 + 1;
      *piVar5 = local_50;
    }
    if (local_38 == (int *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 0x548;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't allocate memory for %d vertices",local_50);
    }
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_50) {
      piVar5 = local_38 + 2;
      piVar17 = local_38 + 1;
      do {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000008,"%f,%f,%f\n",local_38 + iVar1 * 3,piVar17,piVar5);
        if (iVar2 != 3) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x54f;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on vertex %d of %d",iVar1,local_50);
        }
        piVar17 = piVar17 + 3;
        iVar1 = iVar1 + 1;
        piVar5 = piVar5 + 3;
      } while (iVar1 < local_50);
    }
  }
  if (local_68 == 0) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_44) {
LAB_00579173:
      do {
        iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (-1 < iVar2) {
          if (iVar2 != 10) goto LAB_00579173;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_44);
    }
  }
  else {
    iVar1 = 0;
    if (0 < in_stack_00000004->light_count) {
      dest = in_stack_00000004->lights;
      pCVar9 = in_stack_00000004->lights + 1;
      pCVar7 = in_stack_00000004;
      do {
        iVar2 = pCVar7->lights[0].light_type;
        iVar8 = local_70;
        if ((iVar2 != 0) && (iVar8 = local_74, iVar2 != 1)) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x56b;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",pCVar7->lights[0].light_type);
          iVar8 = local_24;
        }
        local_24 = iVar8;
        if (local_24 == 0) {
          dest = dest + 1;
          pCVar9 = pCVar9 + 1;
          iVar1 = iVar1 + 1;
          pCVar7 = (CDemonSet *)&pCVar7->cameras[0xe].unk3;
        }
        else {
          iVar2 = in_stack_00000004->light_count + -1;
          in_stack_00000004->light_count = iVar2;
          crt_string_c_memmove_FUN_005fe5e0(dest,pCVar9,(iVar2 - iVar1) * 0x1898);
        }
      } while (iVar1 < in_stack_00000004->light_count);
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading lights");
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    local_7c = 0;
    if (0 < local_44) {
      local_1c = in_stack_00000004->lights;
      do {
        core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffdb88);
        core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                  ((C3DSLight *)&stack0xffffdb88,in_stack_00000008);
        iVar1 = local_70;
        if ((in_stack_ffffdb88 == 0) || (iVar1 = local_74, in_stack_ffffdb88 == 1)) {
          local_20 = iVar1;
        }
        else {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x589;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",in_stack_ffffdb88);
        }
        if (local_20 != 0) {
          if (199 < in_stack_00000004->light_count) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x58f;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many lights!");
          }
          pCVar9 = local_1c + in_stack_00000004->light_count;
          pCVar9->light_type = in_stack_ffffdb88;
          puVar13 = (uint *)&stack0xffffdb8c;
          pcVar11 = pCVar9->name;
          for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pcVar11 = *puVar13;
            puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
            pcVar11 = pcVar11 + (uint)bVar19 * -8 + 4;
          }
          if (&pCVar9->pos != (CVector3f *)&local_2374) {
            (pCVar9->pos).x = local_2374;
            (pCVar9->pos).y = local_2370;
            (pCVar9->pos).z = local_236c;
          }
          if (&pCVar9->orient != (CVector3f *)&local_2368) {
            (pCVar9->orient).x = local_2368;
            (pCVar9->orient).y = local_2364;
            (pCVar9->orient).z = local_2360;
          }
          pCVar9->fov = local_235c;
          pCVar9->aspect = local_2358;
          pCVar9->intensity = local_2354;
          puVar13 = local_2350;
          pcVar11 = pCVar9->visible_flags;
          for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pcVar11 = *puVar13;
            puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
            pcVar11 = pcVar11 + (uint)bVar19 * -8 + 4;
          }
          *(ushort *)pcVar11 = *(ushort *)puVar13;
          puVar13 = (uint *)((int)pCVar9 + (uint)bVar19 * -8 + 0x228);
          *(char (*) [4])(pCVar9->unk1 + 6) = local_2254;
          puVar14 = puVar13 + (uint)bVar19 * -2 + 1;
          *puVar13 = auStack_2250[(uint)bVar19 * -2];
          *puVar14 = auStack_2250[(uint)bVar19 * -2 + (uint)bVar19 * -2 + 1];
          puVar14[(uint)bVar19 * -2 + 1] =
               (auStack_2250 + (uint)bVar19 * -2 + (uint)bVar19 * -2 + 1)[(uint)bVar19 * -2 + 1];
          (pCVar9->color).r = local_12b4;
          (pCVar9->color).g = local_12b0;
          (pCVar9->color).b = local_12ac;
          pCVar9->atten_start = local_12a8;
          pCVar9->atten_end = local_12a4;
          *(char (*) [4])pCVar9->unk2 = local_12a0;
          *(char (*) [4])(pCVar9->unk2 + 4) = local_129c;
          pCVar9->on_time = local_1298;
          pCVar9->cycle_time = local_1294;
          pCVar9->cycle_elapsed = local_1290;
          pCVar9->filter_count = local_128c;
          pCVar9->blend_filter = local_1288;
          puVar13 = local_1284;
          pacVar15 = pCVar9->filter_names;
          for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)*pacVar15 = *puVar13;
            puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
            pacVar15 = (char (*) [40])((int)pacVar15 + (uint)bVar19 * -8 + 4);
          }
          pfVar12 = local_d84;
          pfVar16 = pCVar9->filter_durations;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar16 = *pfVar12;
            pfVar12 = pfVar12 + (uint)bVar19 * -2 + 1;
            pfVar16 = pfVar16 + (uint)bVar19 * -2 + 1;
          }
          piVar5 = local_d04;
          piVar17 = pCVar9->filter_indices;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar17 = *piVar5;
            piVar5 = piVar5 + (uint)bVar19 * -2 + 1;
            piVar17 = piVar17 + (uint)bVar19 * -2 + 1;
          }
          pCVar9->move_filter = local_c84;
          (pCVar9->filter_vel).x = local_c80;
          (pCVar9->filter_vel).y = local_c7c;
          (pCVar9->filter_pos).x = local_c78;
          (pCVar9->filter_pos).y = local_c74;
          (pCVar9->size).x = local_c70;
          (pCVar9->size).y = local_c6c;
          puVar13 = local_c68;
          ppCVar18 = pCVar9->filters;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *ppCVar18 = (CDemonFilter *)*puVar13;
            puVar13 = puVar13 + (uint)bVar19 * -2 + 1;
            ppCVar18 = ppCVar18 + (uint)bVar19 * -2 + 1;
          }
          pCVar9->current_filter_frame = local_be8;
          pCVar9->filter_frame_elapsed = local_be4;
          in_stack_00000004->light_count = in_stack_00000004->light_count + 1;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_44);
    }
  }
  if (local_6c == 0) {
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_40) {
LAB_0057a07e:
      do {
        iVar2 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
        if (-1 < iVar2) {
          if (iVar2 != 10) goto LAB_0057a07e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_40);
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading cameras");
    do {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_40) {
      pCVar6 = in_stack_00000004->cameras;
      do {
        core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(pCVar6,in_stack_00000008);
        iVar1 = iVar1 + 1;
        pCVar6 = pCVar6 + 1;
      } while (iVar1 < local_40);
    }
    in_stack_00000004->camera_count = local_40;
  }
  if (local_78 != 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading polygons");
    crt_stdio_c_fseek_FUN_005ffacc(in_stack_00000008,local_3c,0);
    iVar1 = 0;
    if (0 < local_54) {
      do {
        iVar2 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000008,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_18,&local_88,
                           local_94,local_a0,&local_84,local_90,local_9c,&local_80,local_8c,local_98
                          );
        if (iVar2 != 10) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x5ed;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on poly %d of %d",iVar1,local_54);
        }
        triangle_flags = '\0';
        if (-1 < local_18) {
          triangle_flags = (uchar)(&DAT_03364d18)[local_18];
        }
        core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
                  (&g_CDemonRaytraceInstance,(CVector3f *)(local_38 + local_88 * 3),
                   (CVector3f *)(local_38 + local_84 * 3),(CVector3f *)(local_38 + local_80 * 3),
                   triangle_flags);
        iVar1 = iVar1 + 1;
      } while (iVar1 < local_54);
    }
    g_CurrentDebugLine = 0x601;
    g_CurrentDebugFilename = "..\\core\\setedit.cpp";
    if (local_38 != (int *)0x0) {
      crt_memory_c_free_FUN_005fe659(local_38 + -1);
    }
    core_dtrace_cpp_CDemonRaytrace_crunch_FUN_00495310(&g_CDemonRaytraceInstance,10.0);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Saving raytrace database");
    core_dtrace_cpp_CDemonRaytrace_save_FUN_00495040
              (&g_CDemonRaytraceInstance,in_stack_00000004->geometry_filename);
    core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
              (&g_CDemonRaytraceInstance,in_stack_00000004->geometry_filename);
  }
  if (local_64 != 0) {
    core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
  }
  if ((local_78 != 0) || (local_6c != 0)) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Precalcs for virtual director");
    core_setdir_cpp_CDemonSet_saveThumbs_FUN_00575f60(in_stack_00000004);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Deleting possibly out-of-date fog files");
    iVar1 = 0;
    if (0 < in_stack_00000004->camera_count) {
      pCVar6 = in_stack_00000004->cameras;
      pCVar7 = in_stack_00000004;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2a0,"backdrop\\%s.fog",pCVar6);
        crt_io_c_deleteFile_FUN_005ff9d0(local_2a0);
        crt_stdio_c_sprintf_FUN_005fdbd0(local_2a0,"backdrop\\%s.pvs",pCVar6);
        crt_io_c_deleteFile_FUN_005ff9d0(local_2a0);
        piVar5 = pCVar7->cameras[0].pvs_list;
        pCVar7->cameras[0].pvs_count = 0;
        if (piVar5 != (int *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(piVar5,"..\\core\\setedit.cpp",0x634);
          pCVar7->cameras[0].pvs_list = (int *)0x0;
        }
        pCVar7 = (CDemonSet *)&pCVar7->cameras[0].unk4;
        iVar1 = iVar1 + 1;
        pCVar6 = pCVar6 + 1;
      } while (iVar1 < in_stack_00000004->camera_count);
    }
  }
  if (local_60 != 0) {
    core_setedit_cpp_BackdropMaybe_FUN_005805a0();
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"CDemonSet::importS3D completed OK");
  return;
LAB_00579a7e:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            (&local_be0,0,in_stack_ffffdb88,in_stack_ffffdb8c,in_stack_ffffdb90,in_stack_ffffdb94,
             in_stack_ffffdb98);
  goto LAB_0057904b;
}
