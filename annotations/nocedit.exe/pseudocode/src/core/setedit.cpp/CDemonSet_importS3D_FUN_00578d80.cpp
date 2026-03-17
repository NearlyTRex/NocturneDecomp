// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// Address Range: [[00578d80, 0057a0b4]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(CDemonSet *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80(CDemonSet *this_ptr,_FILE *file_handle)

{
  int iVar4;
  uchar triangle_flags;
  int iVar1;
  int iVar2;
  int iVar5;
  int iVar6;
  int iVar3;
  uint uVar4;
  _FILE *file;
  int *piVar5;
  C3DSCamera *pCVar6;
  CDemonSet *pCVar7;
  int iVar8;
  CDemonSet *pCVar8;
  C3DSLight *pCVar9;
  C3DSLight *pCVar10;
  C3DSCamera *pCVar11;
  char *pcVar10;
  char *pcVar11;
  char *pcVar12;
  char *pcVar13;
  char (*pacVar12) [40];
  uint *puVar13;
  char (*pacVar14) [40];
  float *pfVar14;
  int *piVar15;
  CDemonFilter **ppCVar15;
  int *piVar16;
  C3DSLight *dest;
  uint *puVar16;
  uint *puVar17;
  char (*pacVar18) [40];
  float *pfVar19;
  int *piVar20;
  CDemonFilter **ppCVar21;
  byte bVar22;
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
  CEditorTools *this_ptr_00;
  
  bVar22 = 0;
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  local_78 = core_setedit_cpp_promptYesNo_FUN_00578c90(0,"Import geometry",1);
  if ((((local_78 < 0) ||
       (iVar1 = core_setedit_cpp_promptYesNo_FUN_00578c90(0xb,"Import omni lights",1),
       iVar1 < 0)) ||
      (local_74 = iVar1,
      iVar2 = core_setedit_cpp_promptYesNo_FUN_00578c90(0x16,"Import spot lights",1),
      iVar2 < 0)) ||
     (local_70 = iVar2,
     local_6c = core_setedit_cpp_promptYesNo_FUN_00578c90(0x21,"Import cameras",1),
     local_6c < 0)) {
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
  if (((local_68 == 0) && (this_ptr->light_count < 1)) &&
     (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no lights currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar5 == 0)) {
    return;
  }
  if (((local_6c == 0) && (this_ptr->camera_count < 1)) &&
     (iVar5 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no cameras currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar5 == 0)) {
    return;
  }
  local_64 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute light visibility?");
  local_60 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                       (g_CEditorToolsPtr,"Precompute fog?");
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Reading S3D header, parts, and materials");
  do {
    iVar5 = _fgetc(file_handle);
    if (iVar5 < 0) break;
  } while (iVar5 != 10);
  _fscanf(file_handle,"%d\n",&local_5c);
  if (local_5c != 0x67) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x490;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't import S3D file version %d, I can only do version %d.",local_5c,0x67);
  }
  do {
    iVar5 = _fgetc(file_handle);
    if (iVar5 < 0) break;
  } while (iVar5 != 10);
  _fscanf(file_handle,"%d,%d,%d,%d,%d,%d,%d\n",&local_58,&local_54,&local_50,&local_48,&local_4c,
             &local_44,&local_40);
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
    iVar5 = _fgetc(file_handle);
    if (iVar5 < 0) break;
  } while (iVar5 != 10);
  iVar5 = 0;
  if (0 < local_48) {
LAB_00578fc0:
    do {
      iVar6 = _fgetc(file_handle);
      if (-1 < iVar6) {
        if (iVar6 != 10) goto LAB_00578fc0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_48);
  }
  do {
    iVar5 = _fgetc(file_handle);
    if (iVar5 < 0) break;
  } while (iVar5 != 10);
  if (local_78 != 0) {
    local_34 = _ftell(file_handle);
    local_28 = this_ptr->geometry_filename;
    do {
      g_GroundTextureCount = 0;
      engine_dosio_c_ensureTrailingSlash_FUN_00481f80(".\\GroundTypes",local_14,local_1a0);
      engine_dosio_c_splitPath_FUN_00481f20(local_28,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
      engine_dosio_c_makePath_FUN_00481f50(local_6a8,local_14,local_1a0,local_3a0,".txt");
      core_setedit_cpp_loadGroundTypes_FUN_00578420(local_6a8);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading textures");
      if (1000 < local_58) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 0x4cc;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
      }
      iVar5 = 0;
      local_2c = 0;
      local_30 = 0;
      if (0 < local_58) {
        iVar6 = 0;
        do {
          _fgets(local_5a4,0x104,file_handle);
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
            pcVar13 = local_5a4;
            do {
              pcVar12 = pcVar13;
              if (*pcVar13 == '\n') goto LAB_005797bd;
              if (*pcVar13 == '\0') break;
              pcVar12 = pcVar13 + 1;
              if (*pcVar12 == '\n') goto LAB_005797bd;
              pcVar13 = pcVar13 + 2;
            } while (*pcVar12 != '\0');
            pcVar12 = (char *)0x0;
LAB_005797bd:
            *pcVar12 = '\0';
          }
          iVar8 = 0;
          engine_dosio_c_splitPath_FUN_00481f20
                    (local_5a4,(char *)0x0,(char *)0x0,local_4a0,(char *)0x0);
          if (0 < g_GroundTextureCount) {
            pacVar12 = g_GroundTextureNames;
            do {
              iVar3 = _stricmp(*pacVar12,local_4a0);
              if (iVar3 == 0) {
                if (-1 < iVar8) {
                  uVar4 = (uint)(byte)g_GroundTextureTypes[iVar8];
                  goto LAB_0057981a;
                }
                break;
              }
              iVar8 = iVar8 + 1;
              pacVar12 = pacVar12 + 1;
            } while (iVar8 < g_GroundTextureCount);
          }
          uVar4 = 0xffffffff;
LAB_0057981a:
          *(uint *)((int)g_S3DTextureGroundTypes + iVar6) = uVar4;
          if ((int)uVar4 < 0) {
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_6a8,(char *)0x0,"a+t","..\\core\\setedit.cpp",0x4e1
                             );
            if (file == (_FILE *)0x0) {
              if (INT_03365cb8 == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Warning: Can't create/append %s",local_6a8);
                INT_03365cb8 = 1;
              }
            }
            else {
              engine_dosio_c_splitPath_FUN_00481f20
                        (local_5a4,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
              pcVar13 = core_ground_cpp_getGroundTypeName_FUN_004eed80(GROUND_TYPE_DEFAULT);
              _fprintf(file,"%s, %s\n",local_3a0,pcVar13);
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",0x4eb);
            }
            *(uint *)((int)g_S3DTextureGroundTypes + iVar6) = 0;
            core_setedit_cpp_addGroundType_FUN_00578290(local_5a4,0);
            local_30 = 1;
          }
          else if (uVar4 == 0) {
            local_2c = 1;
          }
          iVar5 = iVar5 + 1;
          iVar6 = iVar6 + 4;
        } while (iVar5 < local_58);
      }
      if ((local_30 == 0) && (local_2c == 0)) goto LAB_0057904b;
      if (local_30 == 0) {
        _sprintf(local_838,"You have some textures which are currently assigned DEFAULT\nWhat do you want to do about it?");
      }
      else {
        _sprintf(local_838,"You have some new textures which have not been groun typed\nThey have been added to %s and assigned DEFAULT\nWhat do you want to do about it?",local_6a8);
      }
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_be0);
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_be0.base,"Edit the gound types now.");
      shape_edittool_cpp_CStrList_add_FUN_004a2b80
                (&local_be0.base,"Just leave the default assignments for now.  I can always fix this later.");
      iVar5 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                        (&local_be0,local_838,-1,0);
      if (iVar5 < 0) {
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setedit.cpp",0x516);
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
        return;
      }
      if (iVar5 != 0) goto LAB_00579a7e;
      core_setedit_cpp_editGroundTypes_FUN_00578630(local_6a8);
      _fseek(file_handle,local_34,0);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
    } while( true );
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping textures");
  iVar5 = 0;
  if (0 < local_58) {
LAB_0057902d:
    do {
      iVar6 = _fgetc(file_handle);
      if (-1 < iVar6) {
        if (iVar6 != 10) goto LAB_0057902d;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_58);
  }
LAB_0057904b:
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"Skipping polygons");
  do {
    iVar5 = _fgetc(file_handle);
    if (iVar5 < 0) break;
  } while (iVar5 != 10);
  local_3c = _ftell(file_handle);
  iVar5 = 0;
  if (0 < local_54) {
LAB_005790a3:
    do {
      iVar6 = _fgetc(file_handle);
      if (-1 < iVar6) {
        if (iVar6 != 10) goto LAB_005790a3;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < local_54);
  }
  local_38 = (int *)0x0;
  if (local_78 == 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Locating lights");
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_50) {
LAB_0057911a:
      do {
        iVar6 = _fgetc(file_handle);
        if (-1 < iVar6) {
          if (iVar6 != 10) goto LAB_0057911a;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_50);
    }
  }
  else {
    core_set_cpp_CDemonSet_clear_FUN_005693c0(this_ptr);
    core_dtrace_cpp_CDemonRaytrace_allocTris_FUN_004950b0(&g_CDemonRaytraceInstance);
    this_ptr_00 = g_CEditorToolsPtr;
    this_ptr->set_scale_factor = 1.0;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (this_ptr_00,"Reading vertices");
    piVar5 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
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
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_50) {
      piVar15 = local_38 + 2;
      piVar16 = local_38 + 1;
      do {
        iVar6 = _fscanf(file_handle,"%f,%f,%f\n",local_38 + iVar5 * 3,piVar16,piVar15);
        if (iVar6 != 3) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x54f;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on vertex %d of %d",iVar5,local_50);
        }
        piVar16 = piVar16 + 3;
        iVar5 = iVar5 + 1;
        piVar15 = piVar15 + 3;
      } while (iVar5 < local_50);
    }
  }
  if (local_68 == 0) {
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_44) {
LAB_00579173:
      do {
        iVar6 = _fgetc(file_handle);
        if (-1 < iVar6) {
          if (iVar6 != 10) goto LAB_00579173;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_44);
    }
  }
  else {
    iVar5 = 0;
    if (0 < this_ptr->light_count) {
      dest = this_ptr->lights;
      pCVar9 = this_ptr->lights + 1;
      pCVar8 = this_ptr;
      do {
        iVar6 = pCVar8->lights[0].light_type;
        iVar4 = local_70;
        if ((iVar6 != 0) && (iVar4 = local_74, iVar6 != 1)) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x56b;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",pCVar8->lights[0].light_type);
          iVar4 = local_24;
        }
        local_24 = iVar4;
        if (local_24 == 0) {
          dest = dest + 1;
          pCVar9 = pCVar9 + 1;
          iVar5 = iVar5 + 1;
          pCVar8 = (CDemonSet *)&pCVar8->cameras[0xe].vdir_zone;
        }
        else {
          iVar6 = this_ptr->light_count + -1;
          this_ptr->light_count = iVar6;
          memmove(dest,pCVar9,(iVar6 - iVar5) * 0x1898);
        }
      } while (iVar5 < this_ptr->light_count);
    }
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading lights");
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    local_7c = 0;
    if (0 < local_44) {
      local_1c = this_ptr->lights;
      do {
        core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(&local_2478);
        core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(&local_2478,file_handle);
        iVar5 = local_70;
        if ((local_2478.light_type == 0) || (iVar5 = local_74, local_2478.light_type == 1)) {
          local_20 = iVar5;
        }
        else {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x589;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",local_2478.light_type);
        }
        if (local_20 != 0) {
          if (199 < this_ptr->light_count) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x58f;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many lights!");
          }
          pCVar10 = local_1c + this_ptr->light_count;
          pCVar10->light_type = local_2478.light_type;
          pcVar13 = local_2478.name;
          pcVar12 = pCVar10->name;
          for (iVar5 = 0x40; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(uint *)pcVar12 = *(uint *)pcVar13;
            pcVar13 = pcVar13 + (uint)bVar22 * -8 + 4;
            pcVar12 = pcVar12 + (uint)bVar22 * -8 + 4;
          }
          if (&pCVar10->pos != &local_2478.pos) {
            (pCVar10->pos).x = local_2478.pos.x;
            (pCVar10->pos).y = local_2478.pos.y;
            (pCVar10->pos).z = local_2478.pos.z;
          }
          if (&pCVar10->orient != &local_2478.orient) {
            (pCVar10->orient).x = local_2478.orient.x;
            (pCVar10->orient).y = local_2478.orient.y;
            (pCVar10->orient).z = local_2478.orient.z;
          }
          pCVar10->fov = local_2478.fov;
          pCVar10->aspect = local_2478.aspect;
          pCVar10->intensity = local_2478.intensity;
          pcVar13 = local_2478.visible_flags;
          pcVar12 = pCVar10->visible_flags;
          for (iVar5 = 0x3e; iVar5 != 0; iVar5 = iVar5 + -1) {
            *(uint *)pcVar12 = *(uint *)pcVar13;
            pcVar13 = pcVar13 + (uint)bVar22 * -8 + 4;
            pcVar12 = pcVar12 + (uint)bVar22 * -8 + 4;
          }
          *(ushort *)pcVar12 = *(ushort *)pcVar13;
          puVar16 = (uint *)((int)pCVar10 + (uint)bVar22 * -8 + 0x228);
          pCVar10->camera_light_bounds[0].left = local_2478.camera_light_bounds[0].left;
          puVar17 = puVar16 + (uint)bVar22 * -2 + 1;
          puVar13 = (uint *)((int)&local_2478 + (uint)bVar22 * -8 + (uint)bVar22 * -8 + 0x22c)
          ;
          *puVar16 = *(uint *)((int)&local_2478 + (uint)bVar22 * -8 + 0x228);
          *puVar17 = *puVar13;
          puVar17[(uint)bVar22 * -2 + 1] = puVar13[(uint)bVar22 * -2 + 1];
          (pCVar10->color).r = local_2478.color.r;
          (pCVar10->color).g = local_2478.color.g;
          (pCVar10->color).b = local_2478.color.b;
          pCVar10->atten_start = local_2478.atten_start;
          pCVar10->atten_end = local_2478.atten_end;
          pCVar10->atten_end_squared = local_2478.atten_end_squared;
          pCVar10->atten_end_reciprocal = local_2478.atten_end_reciprocal;
          pCVar10->on_time = local_2478.on_time;
          pCVar10->cycle_time = local_2478.cycle_time;
          pCVar10->cycle_elapsed = local_2478.cycle_elapsed;
          pCVar10->filter_count = local_2478.filter_count;
          pCVar10->blend_filter = local_2478.blend_filter;
          pacVar14 = local_2478.filter_names;
          pacVar18 = pCVar10->filter_names;
          for (iVar5 = 0x140; iVar5 != 0; iVar5 = iVar5 + -1) {
            pacVar18 = (char (*) [40])((int)pacVar18 + (uint)bVar22 * -8 + 4);
            *(uint *)*pacVar18 = *(uint *)*pacVar14;
            pacVar14 = (char (*) [40])((int)pacVar14 + (uint)bVar22 * -8 + 4);
            pacVar18 = pacVar18;
          }
          pfVar14 = local_2478.filter_durations;
          pfVar19 = pCVar10->filter_durations;
          for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
            pfVar19 = pfVar19 + (uint)bVar22 * -2 + 1;
            pfVar14 = pfVar14 + (uint)bVar22 * -2 + 1;
            *pfVar19 = *pfVar14;
            pfVar14 = pfVar14;
            pfVar19 = pfVar19;
          }
          piVar15 = local_2478.filter_indices;
          piVar20 = pCVar10->filter_indices;
          for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
            piVar20 = piVar20 + (uint)bVar22 * -2 + 1;
            *piVar20 = *piVar15;
            piVar15 = piVar15 + (uint)bVar22 * -2 + 1;
            piVar20 = piVar20;
          }
          pCVar10->move_filter = local_2478.move_filter;
          (pCVar10->filter_vel).x = local_2478.filter_vel.x;
          (pCVar10->filter_vel).y = local_2478.filter_vel.y;
          (pCVar10->filter_pos).x = local_2478.filter_pos.x;
          (pCVar10->filter_pos).y = local_2478.filter_pos.y;
          (pCVar10->size).x = local_2478.size.x;
          (pCVar10->size).y = local_2478.size.y;
          ppCVar15 = local_2478.filters;
          ppCVar21 = pCVar10->filters;
          for (iVar5 = 0x20; iVar5 != 0; iVar5 = iVar5 + -1) {
            ppCVar21 = ppCVar21 + (uint)bVar22 * -2 + 1;
            ppCVar15 = ppCVar15 + (uint)bVar22 * -2 + 1;
            *ppCVar21 = *ppCVar15;
            ppCVar15 = ppCVar15;
            ppCVar21 = ppCVar21;
          }
          pCVar10->current_filter_frame = local_2478.current_filter_frame;
          pCVar10->filter_frame_elapsed = local_2478.filter_frame_elapsed;
          this_ptr->light_count = this_ptr->light_count + 1;
        }
        local_7c = local_7c + 1;
      } while (local_7c < local_44);
    }
  }
  if (local_6c == 0) {
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_40) {
LAB_0057a07e:
      do {
        iVar6 = _fgetc(file_handle);
        if (-1 < iVar6) {
          if (iVar6 != 10) goto LAB_0057a07e;
        }
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_40);
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading cameras");
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_40) {
      pCVar6 = this_ptr->cameras;
      do {
        core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(pCVar6,file_handle);
        iVar5 = iVar5 + 1;
        pCVar6 = pCVar6 + 1;
      } while (iVar5 < local_40);
    }
    this_ptr->camera_count = local_40;
  }
  if (local_78 != 0) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Reading polygons");
    _fseek(file_handle,local_3c,0);
    iVar5 = 0;
    if (0 < local_54) {
      do {
        iVar6 = _fscanf(file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_18,&local_88,local_94,
                           local_a0,&local_84,local_90,local_9c,&local_80,local_8c,local_98);
        if (iVar6 != 10) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0x5ed;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on poly %d of %d",iVar5,local_54);
        }
        triangle_flags = '\0';
        if (-1 < local_18) {
          triangle_flags = (uchar)g_S3DTextureGroundTypes[local_18];
        }
        core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
                  (&g_CDemonRaytraceInstance,(CVector3f *)(local_38 + local_88 * 3),
                   (CVector3f *)(local_38 + local_84 * 3),(CVector3f *)(local_38 + local_80 * 3),
                   triangle_flags);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_54);
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
              (&g_CDemonRaytraceInstance,this_ptr->geometry_filename);
    core_dtrace_cpp_CDemonRaytrace_loadAndSyncWithGeoFile_FUN_00494de0
              (&g_CDemonRaytraceInstance,this_ptr->geometry_filename);
  }
  if (local_64 != 0) {
    core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr,-1);
  }
  if ((local_78 != 0) || (local_6c != 0)) {
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Precalcs for virtual director");
    core_setdir_cpp_CDemonSet_saveThumbsNoFile_FUN_00575f60(this_ptr);
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Deleting possibly out-of-date fog files");
    iVar5 = 0;
    if (0 < this_ptr->camera_count) {
      pCVar11 = this_ptr->cameras;
      pCVar7 = this_ptr;
      do {
        _sprintf(local_2a0,"backdrop\\%s.fog",pCVar11);
        remove(local_2a0);
        _sprintf(local_2a0,"backdrop\\%s.pvs",pCVar11);
        remove(local_2a0);
        piVar15 = pCVar7->cameras[0].pvs_list;
        pCVar7->cameras[0].pvs_count = 0;
        if (piVar15 != (int *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(piVar15,"..\\core\\setedit.cpp",0x634);
          pCVar7->cameras[0].pvs_list = (int *)0x0;
        }
        pCVar7 = (CDemonSet *)&pCVar7->cameras[0].enabled;
        iVar5 = iVar5 + 1;
        pCVar11 = pCVar11 + 1;
      } while (iVar5 < this_ptr->camera_count);
    }
  }
  if (local_60 != 0) {
    core_setedit_cpp_CDemonSet_rebuildAllFogAndPVS_FUN_005805a0(this_ptr);
  }
  shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
            (g_CEditorToolsPtr,"CDemonSet::importS3D completed OK");
  return;
LAB_00579a7e:
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_be0,0);
  goto LAB_0057904b;
}
