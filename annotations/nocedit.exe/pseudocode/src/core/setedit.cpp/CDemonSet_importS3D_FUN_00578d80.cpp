// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// Address Range: [[00578d80, 0057a0b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(void)

#include "nocturne.h"

/* Signature: void core_setedit.cpp_CDemonSet_importS3D(CDemonSet* param_1, uint param_2, int*
   param_3) */

void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(void)

{
  CEditorTools *this_ptr;
  uchar triangle_flags;
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  _FILE *file;
  int *piVar5;
  C3DSCamera *pCVar6;
  CDemonSet *pCVar7;
  int iVar8;
  C3DSLight *pCVar9;
  char *pcVar10;
  char *pcVar11;
  uint *puVar12;
  char (*pacVar13) [40];
  float *pfVar14;
  CDemonFilter **ppCVar15;
  C3DSLight *dest;
  uint *puVar16;
  uint *puVar17;
  char (*pacVar18) [40];
  float *pfVar19;
  int *piVar20;
  CDemonFilter **ppCVar21;
  byte bVar22;
  CDemonSet *in_stack_00000004;
  _FILE *in_stack_00000008;
  int aiStackY_3a30 [1378];
  C3DSLight local_2478;
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
  
  bVar22 = 0;
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
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(in_stack_00000008,"%d\n",&local_5c);
  if (local_5c != 0x67) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x490;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't import S3D file version %d, I can only do version %d.",local_5c,0x67);
  }
  do {
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(in_stack_00000008,"%d,%d,%d,%d,%d,%d,%d\n",&local_58,&local_54,&local_50,&local_48,
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
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < local_48) {
LAB_00578fc0:
    do {
      iVar2 = _fgetc(in_stack_00000008);
      if (-1 < iVar2) {
        if (iVar2 != 10) goto LAB_00578fc0;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < local_48);
  }
  do {
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  if (local_78 != 0) {
    local_34 = _ftell(in_stack_00000008);
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
          _fgets(local_5a4,0x104,in_stack_00000008);
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
              iVar3 = stricmp(pcVar11,local_4a0);
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
            if (file == (_FILE *)0x0) {
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
              _fprintf(file,"%s, %s\n",local_3a0,pcVar11);
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
        sprintf(local_838,"You have some textures which are currently assigned DEFAULT\nWhat do you want to do about it?");
      }
      else {
        sprintf(local_838,"You have some new textures which have not been groun typed\nThey have been added to %s and assigned DEFAULT\nWhat do you want to do about it?",local_6a8);
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
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
        return;
      }
      if (iVar1 != 0) goto LAB_00579a7e;
      core_setedit_cpp_EditingGroundTypesAndSaving_FUN_00578630();
      _fseek(in_stack_00000008,local_34,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
    } while( true );
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping textures");
  iVar1 = 0;
  if (0 < local_58) {
LAB_0057902d:
    do {
      iVar2 = _fgetc(in_stack_00000008);
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
    iVar1 = _fgetc(in_stack_00000008);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_3c = _ftell(in_stack_00000008);
  iVar1 = 0;
  if (0 < local_54) {
LAB_005790a3:
    do {
      iVar2 = _fgetc(in_stack_00000008);
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
      iVar1 = _fgetc(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_50) {
LAB_0057911a:
      do {
        iVar2 = _fgetc(in_stack_00000008);
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
      iVar1 = _fgetc(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_50) {
      piVar5 = local_38 + 2;
      piVar20 = local_38 + 1;
      do {
        iVar2 = _fscanf(in_stack_00000008,"%f,%f,%f\n",local_38 + iVar1 * 3,piVar20,piVar5);
        if (iVar2 != 3) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x54f;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on vertex %d of %d",iVar1,local_50);
        }
        piVar20 = piVar20 + 3;
        iVar1 = iVar1 + 1;
        piVar5 = piVar5 + 3;
      } while (iVar1 < local_50);
    }
  }
  if (local_68 == 0) {
    do {
      iVar1 = _fgetc(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_44) {
LAB_00579173:
      do {
        iVar2 = _fgetc(in_stack_00000008);
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
          memmove(dest,pCVar9,(iVar2 - iVar1) * 0x1898);
        }
      } while (iVar1 < in_stack_00000004->light_count);
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading lights");
    do {
      iVar1 = _fgetc(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    local_7c = 0;
    if (0 < local_44) {
      local_1c = in_stack_00000004->lights;
      do {
        core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(&local_2478);
        core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(&local_2478,in_stack_00000008);
        iVar1 = local_70;
        if ((local_2478.light_type == 0) || (iVar1 = local_74, local_2478.light_type == 1)) {
          local_20 = iVar1;
        }
        else {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x589;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",local_2478.light_type);
        }
        if (local_20 != 0) {
          if (199 < in_stack_00000004->light_count) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x58f;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many lights!");
          }
          pCVar9 = local_1c + in_stack_00000004->light_count;
          pCVar9->light_type = local_2478.light_type;
          pcVar11 = local_2478.name;
          pcVar10 = pCVar9->name;
          for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pcVar10 = *(uint *)pcVar11;
            pcVar11 = pcVar11 + ((uint)bVar22 * -2 + 1) * 4;
            pcVar10 = pcVar10 + (uint)bVar22 * -8 + 4;
          }
          if (&pCVar9->pos != &local_2478.pos) {
            (pCVar9->pos).x = local_2478.pos.x;
            (pCVar9->pos).y = local_2478.pos.y;
            (pCVar9->pos).z = local_2478.pos.z;
          }
          if (&pCVar9->orient != &local_2478.orient) {
            (pCVar9->orient).x = local_2478.orient.x;
            (pCVar9->orient).y = local_2478.orient.y;
            (pCVar9->orient).z = local_2478.orient.z;
          }
          pCVar9->fov = local_2478.fov;
          pCVar9->aspect = local_2478.aspect;
          pCVar9->intensity = local_2478.intensity;
          pcVar11 = local_2478.visible_flags;
          pcVar10 = pCVar9->visible_flags;
          for (iVar1 = 0x3e; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)pcVar10 = *(uint *)pcVar11;
            pcVar11 = pcVar11 + ((uint)bVar22 * -2 + 1) * 4;
            pcVar10 = pcVar10 + (uint)bVar22 * -8 + 4;
          }
          *(ushort *)pcVar10 = *(ushort *)pcVar11;
          puVar16 = (uint *)((int)pCVar9 + (uint)bVar22 * -8 + 0x228);
          *(uint *)(pCVar9->unk1 + 6) = local_2478.unk1._6_4_;
          puVar17 = puVar16 + (uint)bVar22 * -2 + 1;
          puVar12 = (uint *)((int)&local_2478 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 0x22c)
          ;
          *puVar16 = *(uint *)((int)&local_2478 + (uint)bVar22 * -8 + 0x228);
          *puVar17 = *puVar12;
          puVar17[(uint)bVar22 * -2 + 1] = puVar12[(uint)bVar22 * -2 + 1];
          (pCVar9->color).r = local_2478.color.r;
          (pCVar9->color).g = local_2478.color.g;
          (pCVar9->color).b = local_2478.color.b;
          pCVar9->atten_start = local_2478.atten_start;
          pCVar9->atten_end = local_2478.atten_end;
          *(uint *)pCVar9->unk2 = local_2478.unk2._0_4_;
          *(uint *)(pCVar9->unk2 + 4) = local_2478.unk2._4_4_;
          pCVar9->on_time = local_2478.on_time;
          pCVar9->cycle_time = local_2478.cycle_time;
          pCVar9->cycle_elapsed = local_2478.cycle_elapsed;
          pCVar9->filter_count = local_2478.filter_count;
          pCVar9->blend_filter = local_2478.blend_filter;
          pacVar13 = local_2478.filter_names;
          pacVar18 = pCVar9->filter_names;
          for (iVar1 = 0x140; iVar1 != 0; iVar1 = iVar1 + -1) {
            *(uint *)*pacVar18 = *(uint *)*pacVar13;
            pacVar13 = (char (*) [40])((int)pacVar13 + ((uint)bVar22 * -2 + 1) * 4);
            pacVar18 = (char (*) [40])((int)pacVar18 + (uint)bVar22 * -8 + 4);
          }
          pfVar14 = local_2478.filter_durations;
          pfVar19 = pCVar9->filter_durations;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *pfVar19 = *pfVar14;
            pfVar14 = pfVar14 + (uint)bVar22 * -2 + 1;
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
          }
          piVar5 = local_2478.filter_indices;
          piVar20 = pCVar9->filter_indices;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *piVar20 = *piVar5;
            piVar5 = piVar5 + (uint)bVar22 * -2 + 1;
            piVar20 = piVar20 + (uint)bVar22 * -2 + 1;
          }
          pCVar9->move_filter = local_2478.move_filter;
          (pCVar9->filter_vel).x = local_2478.filter_vel.x;
          (pCVar9->filter_vel).y = local_2478.filter_vel.y;
          (pCVar9->filter_pos).x = local_2478.filter_pos.x;
          (pCVar9->filter_pos).y = local_2478.filter_pos.y;
          (pCVar9->size).x = local_2478.size.x;
          (pCVar9->size).y = local_2478.size.y;
          ppCVar15 = local_2478.filters;
          ppCVar21 = pCVar9->filters;
          for (iVar1 = 0x20; iVar1 != 0; iVar1 = iVar1 + -1) {
            *ppCVar21 = *ppCVar15;
            ppCVar15 = ppCVar15 + (uint)bVar22 * -2 + 1;
            ppCVar21 = ppCVar21 + (uint)bVar22 * -2 + 1;
          }
          pCVar9->current_filter_frame = local_2478.current_filter_frame;
          pCVar9->filter_frame_elapsed = local_2478.filter_frame_elapsed;
          in_stack_00000004->light_count = in_stack_00000004->light_count + 1;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_44);
    }
  }
  if (local_6c == 0) {
    do {
      iVar1 = _fgetc(in_stack_00000008);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < local_40) {
LAB_0057a07e:
      do {
        iVar2 = _fgetc(in_stack_00000008);
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
      iVar1 = _fgetc(in_stack_00000008);
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
    _fseek(in_stack_00000008,local_3c,0);
    iVar1 = 0;
    if (0 < local_54) {
      do {
        iVar2 = _fscanf(in_stack_00000008,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_18,&local_88,
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
      shape_memdbg_cpp_free_FUN_005fe659(local_38 + -1);
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
        sprintf(local_2a0,"backdrop\\%s.fog",pCVar6);
        remove(local_2a0);
        sprintf(local_2a0,"backdrop\\%s.pvs",pCVar6);
        remove(local_2a0);
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
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
  goto LAB_0057904b;
}
