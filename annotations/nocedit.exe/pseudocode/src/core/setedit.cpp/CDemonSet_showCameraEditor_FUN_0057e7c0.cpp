// Name: core_setedit.cpp_CDemonSet_showCameraEditor_FUN_0057e7c0
// Address: 0057e7c0
// Address Range: [[0057e7c0, 0057fcf2]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)

{
  CVector3f *pCVar2;
  char cVar3;
  byte bVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  C3DSCamera *pCVar9;
  int iVar10;
  int iVar11;
  byte *pbVar12;
  int character;
  _FILE *p_Var4;
  _FILE *p_Var5;
  _FILE *p_Var13;
  _FILE *p_Var14;
  uint uVar6;
  C3DSCamera *pCVar7;
  CVector3f *pCVar8;
  int iVar9;
  C3DSCamera *pCVar15;
  C3DSCamera *pCVar10;
  C3DSCamera *pCVar11;
  CDemonSet *pCVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  C3DSCamera *pCVar18;
  char *pcVar16;
  byte bVar19;
  _FILE *p_Var17;
  C3DSLight local_4788;
  C3DSLight local_2ef0;
  CPickList local_1658;
  CPickList local_12b0;
  CPickList local_f08;
  C3DSCamera local_b60;
  char local_9bc [256];
  char local_8bc [256];
  byte local_7bc [256];
  char local_6bc [256];
  char local_5bc [254];
  byte abStack_4be [258];
  char local_3bc [256];
  char local_2bc [256];
  char local_1bc [256];
  char local_bc [16];
  char local_ac [16];
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  int local_84;
  C3DSCamera *local_80;
  C3DSCamera *local_7c;
  C3DSCamera *local_78;
  char *local_74;
  C3DSCamera *local_70;
  int local_6c;
  int local_68;
  int local_64;
  C3DSCamera *local_60;
  C3DSCamera *local_5c;
  _FILE *local_58;
  int local_54;
  int local_50;
  int local_4c;
  _FILE *local_48;
  C3DSCamera *local_44;
  C3DSCamera *local_40;
  C3DSCamera *local_3c;
  C3DSCamera *local_38;
  C3DSCamera *local_34;
  C3DSCamera *local_30;
  C3DSCamera *local_2c;
  C3DSCamera *local_28;
  C3DSCamera *local_24;
  C3DSCamera *local_20;
  int local_1c;
  int local_18;
  int local_14;
  _FILE *p_Var20;
  CEditorTools *this_ptr_00;
  char cVar2;
  CVector3f *pCVar1;
  int *ptr;
  byte bVar3;
  
  bVar19 = 0;
  core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,0);
  pCVar9 = this_ptr->cameras;
  local_60 = pCVar9;
  local_5c = pCVar9;
  local_44 = pCVar9;
  local_40 = pCVar9;
  local_3c = pCVar9;
  local_38 = pCVar9;
  local_34 = pCVar9;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented Camera Editor",0,0);
    iVar15 = 0x16;
    iVar13 = 0;
    iVar9 = 0;
    pCVar15 = pCVar9;
    if (0 < this_ptr->camera_count) {
      do {
        local_30 = pCVar15;
        _sprintf((char *)(abStack_4be + 2),"%s",local_30);
        engine_2d_c_drawText_FUN_00401fd0((char *)(abStack_4be + 2),iVar13,iVar15);
        iVar15 = iVar15 + 0xb;
        if (g_WindowHeight / 2 + -0xb < iVar15) {
          iVar15 = 0x16;
          iVar13 = iVar13 + g_WindowWidth / 7;
        }
        local_30 = local_30 + 1;
        iVar9 = iVar9 + 1;
        pCVar15 = local_30;
      } while (iVar9 < this_ptr->camera_count);
    }
    iVar10 = g_WindowHeight / 2;
    engine_2d_c_drawText_FUN_00401fd0("1.  Add new camera",0,iVar10);
    iVar11 = iVar10 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("2.  Delete existing camera",0,iVar11);
    engine_2d_c_drawText_FUN_00401fd0("3.  Edit existing camera",0,iVar10 + 0x16);
    local_14 = iVar10 + 0x21;
    engine_2d_c_drawText_FUN_00401fd0("4.  Save set",0,local_14);
    engine_2d_c_drawText_FUN_00401fd0("5.  Rename all cameras",g_WindowWidth / 3,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("6.  Clone a camera",g_WindowWidth / 3,iVar11);
    engine_2d_c_drawText_FUN_00401fd0("7.  Merge .LC file",g_WindowWidth / 3,iVar10 + 0x16);
    engine_2d_c_drawText_FUN_00401fd0("8.  Precompute all PVS",g_WindowWidth / 3,local_14);
    engine_2d_c_drawText_FUN_00401fd0("9.  Merge2",(g_WindowWidth * 2) / 3,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("A.  Rename2",(g_WindowWidth * 2) / 3,iVar11);
    iVar11 = core_setedit_cpp_CDemonSet_drawCameraThumbnailBar_FUN_00577af0(this_ptr,(int *)0x0);
    if ((iVar11 != -1) &&
       (iVar11 = core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(this_ptr,iVar11),
       iVar11 != 0)) {
      core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
    }
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar11 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar11 == 0) {
      local_84 = -1;
    }
    else {
      local_84 = engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    }
    switch(local_84) {
    case 0x31:
      if (this_ptr->camera_count < 0xfa) {
        core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(local_44 + this_ptr->camera_count);
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  ((char *)(abStack_4be + 2),8,0,0,"Name this new camera : ");
        pbVar12 = abStack_4be;
        pCVar15 = local_44 + this_ptr->camera_count;
        do {
          pbVar12 = pbVar12 + 2;
          bVar4 = *pbVar12;
          pCVar15->name[0] = bVar4;
          if (bVar4 == 0) break;
          bVar4 = pbVar12[1];
          pCVar15->name[1] = bVar4;
          pCVar15 = (C3DSCamera *)(pCVar15->name + 2);
        } while (bVar4 != 0);
        iVar11 = -1;
        pbVar12 = abStack_4be + 2;
        do {
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          bVar4 = *pbVar12;
          pbVar12 = pbVar12 + (uint)bVar19 * -2 + 1;
        } while (bVar4 != 0);
        if ((iVar11 != -2) &&
           (iVar11 = core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660
                               (this_ptr,this_ptr->camera_count), iVar11 != 0)) {
          this_ptr->camera_count = this_ptr->camera_count + 1;
          goto LAB_0057eb3b;
        }
      }
      break;
    case 0x32:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_f08);
      iVar11 = 0;
      pCVar15 = pCVar9;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f08.base,pCVar15->name);
          iVar11 = iVar11 + 1;
          pCVar15 = pCVar15 + 1;
        } while (iVar11 < this_ptr->camera_count);
      }
      iVar11 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_f08,"Delete which camera",-1,0);
      if (-1 < iVar11) {
        core_setedit_cpp_CDemonSet_deleteCamera_FUN_0057e430(this_ptr,iVar11);
        core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_f08,0);
      break;
    case 0x33:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1658);
      iVar11 = 0;
      pCVar15 = pCVar9;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1658.base,pCVar15->name);
          iVar11 = iVar11 + 1;
          pCVar15 = pCVar15 + 1;
        } while (iVar11 < this_ptr->camera_count);
      }
      iVar11 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1658,"Move which camera",-1,0);
      if ((-1 < iVar11) &&
         (iVar11 = core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660(this_ptr,iVar11),
         iVar11 != 0)) {
        core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_1658,0);
      break;
    case 0x34:
      if (this_ptr->geometry_filename[0] == '\0') {
        abStack_4be[2] = 0;
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (this_ptr->geometry_filename,(char *)0x0,(char *)0x0,(char *)(abStack_4be + 2),
                   (char *)0x0);
        pcVar14 = ".set";
        iVar11 = -1;
        pbVar16 = abStack_4be + 2;
        do {
          pbVar16 = pbVar16;
          if (iVar11 == 0) break;
          iVar11 = iVar11 + -1;
          pbVar16 = pbVar16 + (uint)bVar19 * -2 + 1;
          bVar4 = *pbVar16;
          pbVar16 = pbVar16;
        } while (bVar4 != 0);
        pbVar12 = pbVar16 + -1;
        do {
          bVar4 = *pcVar14;
          *pbVar12 = bVar4;
          if (bVar4 == 0) break;
          bVar4 = ((byte *)pcVar14)[1];
          pcVar14 = (char *)((byte *)pcVar14 + 2);
          pbVar12[1] = bVar4;
          pbVar12 = pbVar12 + 2;
        } while (bVar4 != 0);
        strupr((char *)(abStack_4be + 2));
      }
      iVar11 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                         (g_CEditorToolsPtr,"Save set","models","set",
                          (char *)(abStack_4be + 2),1);
      if (iVar11 != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,(char *)(abStack_4be + 2));
      }
      break;
    case 0x35:
      local_bc[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_bc,5,0,0,"Enter new base name : ");
      iVar11 = -1;
      pcVar16 = local_bc;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar3 = *pcVar16;
        pcVar16 = pcVar16 + (uint)bVar19 * -2 + 1;
      } while (cVar3 != '\0');
      if (iVar11 != -2) {
        iVar11 = 0;
        pCVar10 = pCVar9;
        if (0 < this_ptr->camera_count) {
          do {
            _sprintf(pCVar10->name,"%s%d",local_bc,iVar11);
            core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340(this_ptr,pCVar10);
            iVar11 = iVar11 + 1;
            pCVar10 = pCVar10 + 1;
          } while (iVar11 < this_ptr->camera_count);
        }
LAB_0057eb3b:
        core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
      }
      break;
    case 0x36:
      if (this_ptr->camera_count < 0xfa) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_12b0);
        iVar11 = 0;
        pCVar15 = local_44;
        if (0 < this_ptr->camera_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_12b0.base,pCVar15->name);
            iVar11 = iVar11 + 1;
            pCVar15 = pCVar15 + 1;
          } while (iVar11 < this_ptr->camera_count);
        }
        local_1c = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             (&local_12b0,"Clone which camera",-1,0);
        if (-1 < local_1c) {
          pbVar12 = abStack_4be;
          pCVar15 = local_44 + local_1c;
          do {
            pbVar12 = pbVar12 + 2;
            bVar3 = pCVar15->name[0];
            *pbVar12 = bVar3;
            if (bVar3 == 0) break;
            bVar4 = pCVar15->name[1];
            pCVar15 = (C3DSCamera *)(pCVar15->name + 2);
            pbVar12[1] = bVar4;
          } while (bVar4 != 0);
          uVar6 = 0xffffffff;
          pbVar12 = abStack_4be + 2;
          do {
            if (uVar6 == 0) break;
            uVar6 = uVar6 - 1;
            bVar4 = *pbVar12;
            pbVar12 = pbVar12 + (uint)bVar19 * -2 + 1;
          } while (bVar4 != 0);
          iVar11 = ~uVar6 - 2;
          if (0 < iVar11) {
            pbVar12 = abStack_4be + ~uVar6;
            do {
              if ((*pbVar12 < 0x30) || (0x39 < *pbVar12)) break;
              iVar11 = iVar11 + -1;
              pbVar12 = pbVar12 + -1;
            } while (0 < iVar11);
          }
          iVar10 = atoi((char *)(abStack_4be + iVar11 + 3));
          _sprintf
                    ((char *)(abStack_4be + iVar11 + 3),"%d",iVar10 + 1);
          iVar11 = 0;
          if (0 < this_ptr->camera_count) {
            do {
              iVar10 = _strcmp
                                 (local_44[iVar11].name,(char *)(abStack_4be + 2));
              if (iVar10 == 0) {
                pbVar12 = abStack_4be;
                pbVar17 = local_7bc;
                do {
                  pbVar12 = pbVar12 + 2;
                  bVar4 = *pbVar12;
                  *pbVar17 = bVar4;
                  if (bVar4 == 0) break;
                  bVar4 = pbVar12[1];
                  pbVar17[1] = bVar4;
                  pbVar17 = pbVar17 + 2;
                } while (bVar4 != 0);
                iVar11 = -1;
                _sprintf((char *)(abStack_4be + 2),"%s1",local_7bc)
                ;
              }
              iVar11 = iVar11 + 1;
            } while (iVar11 < this_ptr->camera_count);
          }
          iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                             (g_CEditorToolsPtr,"Enter name of clone",
                              (char *)(abStack_4be + 2),0x1f,1);
          if (iVar11 != 0) {
            pCVar7 = local_44 + local_1c;
            pCVar11 = local_44 + this_ptr->camera_count;
            pCVar15 = pCVar7;
            pCVar18 = pCVar11;
            for (iVar11 = 0x40; iVar11 != 0; iVar11 = iVar11 + -1) {
              pCVar18 = (C3DSCamera *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
              *(uint *)pCVar18->name = *(uint *)pCVar15->name;
              pCVar15 = (C3DSCamera *)((int)pCVar15 + (uint)bVar19 * -8 + 4);
              pCVar18 = pCVar18;
            }
            if (&pCVar11->position != &pCVar7->position) {
              (pCVar11->position).x = (pCVar7->position).x;
              (pCVar11->position).y = (pCVar7->position).y;
              (pCVar11->position).z = (pCVar7->position).z;
            }
            if (&pCVar11->orientation != &pCVar7->orientation) {
              (pCVar11->orientation).x = (pCVar7->orientation).x;
              (pCVar11->orientation).y = (pCVar7->orientation).y;
              (pCVar11->orientation).z = (pCVar7->orientation).z;
            }
            (pCVar11->rotation_matrix).m[0].x = (pCVar7->rotation_matrix).m[0].x;
            (pCVar11->rotation_matrix).m[0].y = (pCVar7->rotation_matrix).m[0].y;
            (pCVar11->rotation_matrix).m[0].z = (pCVar7->rotation_matrix).m[0].z;
            (pCVar11->rotation_matrix).m[1].x = (pCVar7->rotation_matrix).m[1].x;
            (pCVar11->rotation_matrix).m[1].y = (pCVar7->rotation_matrix).m[1].y;
            (pCVar11->rotation_matrix).m[1].z = (pCVar7->rotation_matrix).m[1].z;
            (pCVar11->rotation_matrix).m[2].x = (pCVar7->rotation_matrix).m[2].x;
            (pCVar11->rotation_matrix).m[2].y = (pCVar7->rotation_matrix).m[2].y;
            (pCVar11->rotation_matrix).m[2].z = (pCVar7->rotation_matrix).m[2].z;
            pCVar11->dead = pCVar7->dead;
            pCVar11->is_panning = pCVar7->is_panning;
            pCVar11->projection_scale = pCVar7->projection_scale;
            pCVar11->ambient_value = pCVar7->ambient_value;
            pCVar11->camera_group = pCVar7->camera_group;
            pCVar11->fog_enabled = pCVar7->fog_enabled;
            (pCVar11->fog).color_index.r = (pCVar7->fog).color_index.r;
            (pCVar11->fog).color_index.g = (pCVar7->fog).color_index.g;
            pCVar2 = &(pCVar11->fog).scroll;
            pCVar1 = &(pCVar7->fog).scroll;
            (pCVar11->fog).color_index.b = (pCVar7->fog).color_index.b;
            if (pCVar2 != pCVar1) {
              pCVar2->x = pCVar1->x;
              (pCVar11->fog).scroll.y = (pCVar7->fog).scroll.y;
              (pCVar11->fog).scroll.z = (pCVar7->fog).scroll.z;
            }
            (pCVar11->fog).height_threshold = (pCVar7->fog).height_threshold;
            (pCVar11->fog).density_multiplier = (pCVar7->fog).density_multiplier;
            (pCVar11->fog).temperature = (pCVar7->fog).temperature;
            pCVar11->reverb_preset = pCVar7->reverb_preset;
            if (&pCVar11->box_min != &pCVar7->box_min) {
              (pCVar11->box_min).x = (pCVar7->box_min).x;
              (pCVar11->box_min).y = (pCVar7->box_min).y;
              (pCVar11->box_min).z = (pCVar7->box_min).z;
            }
            if (&pCVar11->box_max != &pCVar7->box_max) {
              (pCVar11->box_max).x = (pCVar7->box_max).x;
              (pCVar11->box_max).y = (pCVar7->box_max).y;
              (pCVar11->box_max).z = (pCVar7->box_max).z;
            }
            pCVar11->pvs_count = pCVar7->pvs_count;
            pCVar11->pvs_list = pCVar7->pvs_list;
            pCVar11->vdir_zone = pCVar7->vdir_zone;
            pCVar11->enabled = pCVar7->enabled;
            this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
            this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
            pbVar12 = abStack_4be;
            pCVar15 = local_44 + this_ptr->camera_count;
            do {
              pbVar12 = pbVar12 + 2;
              bVar4 = *pbVar12;
              pCVar15->name[0] = bVar4;
              if (bVar4 == 0) break;
              bVar4 = pbVar12[1];
              pCVar15->name[1] = bVar4;
              pCVar15 = (C3DSCamera *)(pCVar15->name + 2);
            } while (bVar4 != 0);
            iVar11 = core_setedit_cpp_CDemonSet_editCameraPosition_FUN_0057d660
                               (this_ptr,this_ptr->camera_count);
            if (iVar11 != 0) {
              this_ptr->camera_count = this_ptr->camera_count + 1;
              core_setedit_cpp_CDemonSet_loadOrBuildThumbnails_FUN_00576da0(this_ptr,1);
            }
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_12b0,0);
      }
      break;
    case 0x37:
      iVar11 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge .LC","models","*.lc",
                          (int)local_9bc,0);
      if (iVar11 != 0) {
        p_Var13 = engine_dosio_c_getFile_FUN_00481a50("models",local_9bc,"rt");
        if (p_Var13 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe68;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        _fgets((char *)(abStack_4be + 2),0xff,p_Var13);
        local_6c = -1;
        _fscanf(p_Var13,"%d\n",&local_6c);
        if (local_6c != 1) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe6c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_6c)
          ;
        }
        _fgets((char *)(abStack_4be + 2),0xff,p_Var13);
        _fscanf(p_Var13,"%d,%d\n",&local_68,&local_64);
        _fgets((char *)(abStack_4be + 2),0xff,p_Var13);
        iVar11 = 0;
        if (0 < local_68) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(&local_2ef0);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(&local_2ef0,p_Var13);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_68);
        }
        _fgets((char *)(abStack_4be + 2),0xff,p_Var13);
        iVar11 = this_ptr->camera_count;
        for (; (iVar11 < 0xfa && (0 < local_64)); local_64 = local_64 + -1) {
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0
                    (local_60 + this_ptr->camera_count,p_Var13);
          pCVar15 = local_60;
          _sprintf
                    (local_60[this_ptr->camera_count].name,"ncam%d",this_ptr->camera_count)
          ;
          core_setedit_cpp_CDemonSet_renderCameraBackdrop_FUN_0057d340
                    (this_ptr,pCVar15 + this_ptr->camera_count);
          iVar11 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                             (g_CEditorToolsPtr,"Import this camera?");
          if (iVar11 != 0) {
            this_ptr->camera_count = this_ptr->camera_count + 1;
          }
          iVar11 = this_ptr->camera_count;
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\core\\setedit.cpp",0xe7f);
        goto LAB_0057eb3b;
      }
      break;
    case 0x38:
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      this_ptr->disable_water_rendering = 1;
      this_ptr_00 = g_CEditorToolsPtr;
      this_ptr->disable_sky_rendering = 1;
      this_ptr->disable_spotlight_shadows = 1;
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (this_ptr_00,"Recomputing all PVS");
      iVar11 = 0;
      if (0 < this_ptr->camera_count) {
        local_2c = local_5c;
        pCVar12 = this_ptr;
        do {
          _sprintf(local_3bc,"backdrop\\%s.pvs",local_2c);
          remove(local_3bc);
          ptr = pCVar12->cameras[0].pvs_list;
          pCVar12->cameras[0].pvs_count = 0;
          if (ptr != (int *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0xe97);
            pCVar12->cameras[0].pvs_list = (int *)0x0;
          }
          core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar11);
          iVar11 = iVar11 + 1;
          local_14 = iVar11;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)iVar11,(float)this_ptr->camera_count);
          pCVar12 = (CDemonSet *)&pCVar12->cameras[0].enabled;
          local_2c = local_2c + 1;
        } while (iVar11 < this_ptr->camera_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      this_ptr->disable_spotlight_shadows = 0;
      this_ptr->disable_water_rendering = 0;
      this_ptr->disable_sky_rendering = 0;
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      break;
    case 0x39:
      iVar11 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge2 .LC","models","*.lc",
                          (int)local_2bc,0);
      if (iVar11 != 0) {
        local_58 = engine_dosio_c_getFile_FUN_00481a50("models",local_2bc,"rt");
        if (local_58 == (_FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeae;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        p_Var13 = local_58;
        _fgets((char *)(abStack_4be + 2),0xff,local_58);
        local_54 = -1;
        _fscanf(p_Var13,"%d\n",&local_54);
        if (local_54 != 1) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeb2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_54)
          ;
        }
        _fgets((char *)(abStack_4be + 2),0xff,local_58);
        _fscanf(local_58,"%d,%d\n",&local_50,&local_4c);
        _fgets((char *)(abStack_4be + 2),0xff,local_58);
        p_Var13 = local_58;
        iVar11 = 0;
        if (0 < local_50) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(&local_4788);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(&local_4788,p_Var13);
            iVar11 = iVar11 + 1;
          } while (iVar11 < local_50);
        }
        _fgets((char *)(abStack_4be + 2),0xff,local_58);
        while (0 < local_4c) {
          core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(&local_b60);
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(&local_b60,local_58);
          iVar11 = 0;
          if (0 < this_ptr->camera_count) {
            pCVar8 = &local_34->position;
LAB_0057f7c1:
            fVar5 = local_b60.position.x - pCVar8->x;
            fVar6 = local_b60.position.y - pCVar8->y;
            fVar7 = local_b60.position.z - pCVar8->z;
            pCVar15 = local_34 + iVar11;
            if (((float)0.10000000000000001 <= SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6)) ||
               (fVar5 = local_b60.orientation.x - (pCVar15->orientation).x,
               fVar6 = local_b60.orientation.y - (pCVar15->orientation).y,
               fVar7 = local_b60.orientation.z - (pCVar15->orientation).z,
               (float)0.10000000000000001 <= SQRT(fVar7 * fVar7 + fVar5 * fVar5 + fVar6 * fVar6)))
            goto LAB_0057fa69;
            _sprintf(local_6bc,"%s.raw",&local_b60);
            local_48 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            _sprintf(local_5bc,"%s.raw",pCVar15);
            iVar10 = 0;
            p_Var13 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_5bc,"wb");
            do {
              p_Var14 = p_Var13;
              character = _fgetc(local_48);
              iVar10 = iVar10 + 1;
              _fputc(character,p_Var14);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\core\\setedit.cpp",0xecd);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\core\\setedit.cpp",0xece);
            _sprintf(local_6bc,"%s.act",&local_b60);
            local_48 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            _sprintf(local_5bc,"%s.act",local_44 + iVar11);
            iVar11 = 0;
            p_Var14 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_5bc,"wb");
            p_Var13 = local_48;
            do {
              p_Var17 = p_Var14;
              iVar10 = _fgetc(p_Var13);
              iVar11 = iVar11 + 1;
              _fputc(iVar10,p_Var17);
            } while (iVar11 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\core\\setedit.cpp",0xed6);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var14,"..\\core\\setedit.cpp",0xed7);
          }
LAB_0057fa1d:
          local_4c = local_4c + -1;
          core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(&local_b60,0);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_58,"..\\core\\setedit.cpp",0xede);
        goto LAB_0057eb3b;
      }
      break;
    case 0x41:
      local_ac[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_ac,5,0,0,"Enter new unique base name : ");
      iVar11 = -1;
      pcVar16 = local_ac;
      do {
        if (iVar11 == 0) break;
        iVar11 = iVar11 + -1;
        cVar2 = *pcVar16;
        pcVar16 = pcVar16 + (uint)bVar19 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar11 != -2) {
        local_18 = 0;
        if (0 < this_ptr->camera_count) {
          local_28 = local_40;
          local_24 = local_3c;
          local_20 = local_38;
          do {
            _sprintf(local_8bc,"%s.raw",local_28);
            _sprintf(local_1bc,"%s%d.raw",local_ac,local_18 + 1);
            p_Var4 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_8bc,"rb");
            iVar11 = 0;
            p_Var5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_1bc,"wb");
            do {
              p_Var20 = p_Var5;
              iVar10 = _fgetc(p_Var4);
              iVar11 = iVar11 + 1;
              _fputc(iVar10,p_Var20);
            } while (iVar11 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var4,"..\\core\\setedit.cpp",0xef5);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\setedit.cpp",0xef6);
            _sprintf(local_8bc,"%s.act",local_24);
            _sprintf(local_1bc,"%s%d.act",local_ac,local_18 + 1);
            p_Var13 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_8bc,"rb");
            iVar11 = 0;
            p_Var14 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_1bc,"wb");
            do {
              p_Var17 = p_Var14;
              iVar10 = _fgetc(p_Var13);
              iVar11 = iVar11 + 1;
              _fputc(iVar10,p_Var17);
            } while (iVar11 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var13,"..\\core\\setedit.cpp",0xefe);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var14,"..\\core\\setedit.cpp",0xeff);
            pCVar15 = local_20;
            iVar11 = local_18 + 1;
            _sprintf(local_20->name,"%s%d",local_ac,iVar11);
            local_20 = pCVar15 + 1;
            local_24 = local_24 + 1;
            local_28 = local_28 + 1;
            local_18 = iVar11;
          } while (iVar11 < this_ptr->camera_count);
        }
        goto LAB_0057eb3b;
      }
    }
    if (local_84 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_setedit_cpp_CDemonSet_clearCameraDepthData_FUN_00580560(this_ptr);
      return;
    }
  } while( true );
LAB_0057fa69:
  iVar11 = iVar11 + 1;
  pCVar8 = pCVar8 + 0x23;
  if (this_ptr->camera_count <= iVar11) goto LAB_0057fa1d;
  goto LAB_0057f7c1;
}
