// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// MANUAL RECONSTRUCTION
// Address Range: [[00578d80, 0057a0b4] [00604acc, 00604af3]]
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
  int iVar8;
  C3DSLight *pCVar9;
  C3DSLight *pCVar10;
  C3DSCamera *pCVar11;
  char *pcVar10;
  char *pcVar13;
  char (*pacVar12) [40];
  int *piVar15;
  C3DSLight *dest;
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
  CVector3f *local_38;
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
  byte bVar22;
  
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
     (iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                        (g_CEditorToolsPtr,"There are currently no lights currently in the set, and you have chosen not to import any.  Continue anyway?"), iVar5 == 0)) {
    return;
  }
  if (((local_6c == 0) && (this_ptr->camera_count < 1)) &&
     (iVar5 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
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
    g_CurrentLineNumber = 1168;
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
    g_CurrentLineNumber = 1178;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Scene contains %d frames.  Only single-frame scenes supported.",local_4c);
  }
  if ((local_6c != 0) && (0xfa < local_40)) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 1185;
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
      engine_dosio_cpp_ensureTrailingSlash_FUN_00481f80(".\\GroundTypes",local_14,local_1a0);
      engine_dosio_cpp_splitPath_FUN_00481f20(local_28,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
      engine_dosio_cpp_makePath_FUN_00481f50(local_6a8,local_14,local_1a0,local_3a0,".txt");
      core_setedit_cpp_loadGroundTypes_FUN_00578420(local_6a8);
      shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                (g_CEditorToolsPtr,"Reading textures");
      if (1000 < local_58) {
        g_CurrentFilename = "..\\core\\setedit.cpp";
        g_CurrentLineNumber = 1228;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Too many textures!");
      }
      iVar5 = 0;
      local_2c = 0;
      local_30 = 0;
      if (0 < local_58) {
        iVar6 = 0;
        do {
          _fgets(local_5a4,0x104,file_handle);
          pcVar10 = strchr(local_5a4,'\n');
          if (pcVar10 != (char *)0x0) {
            *pcVar10 = '\0';
          }
          iVar8 = 0;
          engine_dosio_cpp_splitPath_FUN_00481f20
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
          g_S3DTextureGroundTypes[iVar6 / 4] = uVar4;
          if ((int)uVar4 < 0) {
            file = shape_memdbg_cpp_openFile_FUN_0050f7a0
                             (local_6a8,(char *)0x0,"a+t","..\\core\\setedit.cpp",1249
                             );
            if (file == (_FILE *)0x0) {
              if (INT_03365cb8 == 0) {
                shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                          (g_CEditorToolsPtr,"Warning: Can't create/append %s",local_6a8);
                INT_03365cb8 = 1;
              }
            }
            else {
              engine_dosio_cpp_splitPath_FUN_00481f20
                        (local_5a4,(char *)0x0,(char *)0x0,local_3a0,(char *)0x0);
              pcVar13 = core_ground_cpp_getGroundTypeName_FUN_004eed80(GROUND_TYPE_DEFAULT);
              _fprintf(file,"%s, %s\n",local_3a0,pcVar13);
              shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\setedit.cpp",1259);
            }
            g_S3DTextureGroundTypes[iVar6 / 4] = 0;
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
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_handle,"..\\core\\setedit.cpp",1302);
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
  local_38 = (CVector3f *)0x0;
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
    piVar5 = (int *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                       (local_50 * 0xc + 4,"..\\core\\setedit.cpp",1351);
    local_38 = (CVector3f *)0x0;
    if (piVar5 != (int *)0x0) {
      local_38 = (CVector3f *)(piVar5 + 1);
      *piVar5 = local_50;
    }
    if (local_38 == (CVector3f *)0x0) {
      g_CurrentFilename = "..\\core\\setedit.cpp";
      g_CurrentLineNumber = 1352;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Can't allocate memory for %d vertices",local_50);
    }
    do {
      iVar5 = _fgetc(file_handle);
      if (iVar5 < 0) break;
    } while (iVar5 != 10);
    iVar5 = 0;
    if (0 < local_50) {
      do {
        iVar6 = _fscanf(file_handle,"%f,%f,%f\n",&local_38[iVar5].x,&local_38[iVar5].y,
                        &local_38[iVar5].z);
        if (iVar6 != 3) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 1359;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on vertex %d of %d",iVar5,local_50);
        }
        iVar5 = iVar5 + 1;
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
      do {
        iVar6 = this_ptr->lights[iVar5].light_type;
        iVar4 = local_70;
        if ((iVar6 != 0) && (iVar4 = local_74, iVar6 != 1)) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 1387;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",this_ptr->lights[iVar5].light_type);
          iVar4 = local_24;
        }
        local_24 = iVar4;
        if (local_24 == 0) {
          dest = dest + 1;
          pCVar9 = pCVar9 + 1;
          iVar5 = iVar5 + 1;
        }
        else {
          iVar6 = this_ptr->light_count + -1;
          this_ptr->light_count = iVar6;
          memmove(dest,pCVar9,(iVar6 - iVar5) * sizeof(C3DSLight));
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
          g_CurrentLineNumber = 1417;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("unknown light type: %d",local_2478.light_type);
        }
        if (local_20 != 0) {
          if (199 < this_ptr->light_count) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 1423;
            core_main_c_displayErrorAndQuit_FUN_00506f10("Too many lights!");
          }
          pCVar10 = local_1c + this_ptr->light_count;
          pCVar10->light_type = local_2478.light_type;
          memcpy(pCVar10->name,local_2478.name,0x100);
          if (&pCVar10->pos != &local_2478.pos) {
            pCVar10->pos = local_2478.pos;
          }
          if (&pCVar10->orient != &local_2478.orient) {
            pCVar10->orient = local_2478.orient;
          }
          memcpy(&pCVar10->fov,&local_2478.fov,0xc);
          memcpy(pCVar10->visible_flags,local_2478.visible_flags,0xfa);
          pCVar10->camera_light_bounds[0] = local_2478.camera_light_bounds[0];
          pCVar10->color = local_2478.color;
          memcpy(&pCVar10->atten_start,&local_2478.atten_start,0x24);
          memcpy(pCVar10->filter_names,local_2478.filter_names,0x500);
          memcpy(pCVar10->filter_durations,local_2478.filter_durations,0x80);
          memcpy(pCVar10->filter_indices,local_2478.filter_indices,0x80);
          memcpy(&pCVar10->move_filter,&local_2478.move_filter,0x1c);
          memcpy(pCVar10->filters,local_2478.filters,0x80);
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
        iVar6 = _fscanf(file_handle,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_18,&local_88,
                           (float *)local_94,(float *)local_a0,&local_84,
                           (float *)local_90,(float *)local_9c,&local_80,
                           (float *)local_8c,(float *)local_98);
        if (iVar6 != 10) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 1517;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("File is corrupt on poly %d of %d",iVar5,local_54);
        }
        triangle_flags = '\0';
        if (-1 < local_18) {
          triangle_flags = (uchar)g_S3DTextureGroundTypes[local_18];
        }
        core_dtrace_cpp_CDemonRaytrace_addTriangle_FUN_00495100
                  (&g_CDemonRaytraceInstance,local_38 + local_88,
                   local_38 + local_84,local_38 + local_80,
                   triangle_flags);
        iVar5 = iVar5 + 1;
      } while (iVar5 < local_54);
    }
    g_CurrentDebugLine = 0x601;
    g_CurrentDebugFilename = "..\\core\\setedit.cpp";
    if (local_38 != (CVector3f *)0x0) {
      shape_memdbg_cpp_free_FUN_005fe659(piVar5);
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
      do {
        _sprintf(local_2a0,"backdrop\\%s.fog",pCVar11->name);
        remove(local_2a0);
        _sprintf(local_2a0,"backdrop\\%s.pvs",pCVar11->name);
        remove(local_2a0);
        piVar15 = pCVar11->pvs_list;
        pCVar11->pvs_count = 0;
        if (piVar15 != (int *)0x0) {
          shape_memdbg_cpp_debugFree_FUN_0050f460(piVar15,"..\\core\\setedit.cpp",1588);
          pCVar11->pvs_list = (int *)0x0;
        }
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
