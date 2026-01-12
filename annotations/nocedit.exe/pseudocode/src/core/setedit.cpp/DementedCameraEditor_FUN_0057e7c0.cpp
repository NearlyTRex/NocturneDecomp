// Name: core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
// Address: 0057e7c0
// Address Range: [[0057e7c0, 0057fcf2]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)

{
  CVector3f *pCVar1;
  char cVar2;
  byte bVar3;
  int *ptr;
  CEditorTools *this_ptr_00;
  bool bVar4;
  uint d6;
  undefined3 extraout_var;
  FILE *pFVar5;
  FILE *pFVar6;
  uint uVar7;
  C3DSCamera *pCVar8;
  CVector3f *pCVar9;
  int unaff_EBX;
  int iVar10;
  C3DSCamera *pCVar11;
  C3DSCamera *pCVar12;
  CDemonSet *pCVar13;
  BADSPACEBASE *in_ESP;
  int iVar14;
  int iVar15;
  byte *pbVar16;
  byte *pbVar17;
  C3DSCamera *pCVar18;
  byte bVar19;
  FILE *pFVar20;
  uint d3;
  uint d4;
  char *pcVar21;
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
  FILE *local_58;
  int local_54;
  int local_50;
  int local_4c;
  FILE *local_48;
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
  
  bVar19 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  local_80 = this_ptr->cameras;
  local_74 = this_ptr->geometry_filename;
  local_7c = local_80;
  local_78 = local_80;
  local_70 = local_80;
  local_60 = local_80;
  local_5c = local_80;
  local_44 = local_80;
  local_40 = local_80;
  local_3c = local_80;
  local_38 = local_80;
  local_34 = local_80;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented Camera Editor",0,0);
    iVar15 = 0x16;
    iVar14 = 0;
    iVar10 = 0;
    if (0 < this_ptr->camera_count) {
      local_30 = local_80;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)(abStack_4be + 6),"%s");
        engine_2d_c_drawText_FUN_00401fd0((char *)(abStack_4be + 2),iVar14,iVar15);
        iVar15 = iVar15 + 0xb;
        if (g_WindowHeight / 2 + -0xb < iVar15) {
          iVar15 = 0x16;
          iVar14 = iVar14 + g_WindowWidth / 7;
        }
        local_2c = local_2c + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < this_ptr->camera_count);
    }
    iVar14 = g_WindowHeight / 2;
    engine_2d_c_drawText_FUN_00401fd0("1.  Add new camera",0,iVar14);
    iVar10 = iVar14 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("2.  Delete existing camera",0,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("3.  Edit existing camera",0,iVar14 + 0x16);
    local_14 = iVar14 + 0x21;
    engine_2d_c_drawText_FUN_00401fd0("4.  Save set",0,local_14);
    engine_2d_c_drawText_FUN_00401fd0("5.  Rename all cameras",g_WindowWidth / 3,iVar14);
    engine_2d_c_drawText_FUN_00401fd0("6.  Clone a camera",g_WindowWidth / 3,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("7.  Merge .LC file",g_WindowWidth / 3,iVar14 + 0x16);
    pFVar20 = (FILE *)0x57e9d1;
    engine_2d_c_drawText_FUN_00401fd0("8.  Precompute all PVS",g_WindowWidth / 3,unaff_EBX)
    ;
    d3 = 0x57e9f4;
    engine_2d_c_drawText_FUN_00401fd0("9.  Merge2",(g_WindowWidth * 2) / 3,iVar14);
    d6 = (g_WindowWidth * 2) / 3;
    pcVar21 = "A.  Rename2";
    d4 = 0x57ea17;
    engine_2d_c_drawText_FUN_00401fd0("A.  Rename2",d6,iVar10);
    iVar10 = core_setedit_cpp_CDemonSet_FUN_00577af0(this_ptr);
    if ((iVar10 != -1) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
      core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
    }
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar10 == 0) {
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
        pbVar17 = abStack_4be;
        pCVar11 = local_44 + this_ptr->camera_count;
        do {
          pbVar17 = pbVar17 + 2;
          bVar3 = *pbVar17;
          pCVar11->name[0] = bVar3;
          if (bVar3 == 0) break;
          bVar3 = pbVar17[1];
          pCVar11->name[1] = bVar3;
          pCVar11 = (C3DSCamera *)(pCVar11->name + 2);
        } while (bVar3 != 0);
        iVar10 = -1;
        pbVar17 = abStack_4be + 2;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          bVar3 = *pbVar17;
          pbVar17 = pbVar17 + (uint)bVar19 * -2 + 1;
        } while (bVar3 != 0);
        if ((iVar10 != -2) &&
           (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
          this_ptr->camera_count = this_ptr->camera_count + 1;
          goto LAB_0057eb3b;
        }
      }
      break;
    case 0x32:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_f08);
      iVar10 = 0;
      pCVar11 = local_7c;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_f08.base_strlist,pCVar11->name);
          iVar10 = iVar10 + 1;
          pCVar11 = pCVar11 + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_f08,"Delete which camera",-1,0);
      if (-1 < iVar10) {
        core_setedit_cpp_FUN_0057e430();
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_f08,0,(uint)pFVar20,d3,d4,(uint)pcVar21,d6);
      break;
    case 0x33:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_1658);
      iVar10 = 0;
      pCVar11 = local_78;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_1658.base_strlist,pCVar11->name);
          iVar10 = iVar10 + 1;
          pCVar11 = pCVar11 + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_1658,"Move which camera",-1,0);
      if ((-1 < iVar10) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0))
      {
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                (&local_1658,0,(uint)pFVar20,d3,d4,(uint)pcVar21,d6);
      break;
    case 0x34:
      if (this_ptr->geometry_filename[0] == '\0') {
        abStack_4be[2] = 0;
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_74,(char *)0x0,(char *)0x0,(char *)(abStack_4be + 2),(char *)0x0);
        pcVar21 = ".set";
        iVar10 = -1;
        pbVar17 = abStack_4be + 2;
        do {
          pbVar16 = pbVar17;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pbVar16 = pbVar17 + (uint)bVar19 * -2 + 1;
          bVar3 = *pbVar17;
          pbVar17 = pbVar16;
        } while (bVar3 != 0);
        pbVar16 = pbVar16 + -1;
        do {
          bVar3 = *pcVar21;
          *pbVar16 = bVar3;
          if (bVar3 == 0) break;
          bVar3 = ((byte *)pcVar21)[1];
          pcVar21 = (char *)((byte *)pcVar21 + 2);
          pbVar16[1] = bVar3;
          pbVar16 = pbVar16 + 2;
        } while (bVar3 != 0);
        crt_string_c_strupr_FUN_00600770((char *)(abStack_4be + 2));
      }
      bVar4 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x6481d1,
                         (bool)((char)abStack_4be + '\x02'));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar4) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,(char *)(abStack_4be + 2));
      }
      break;
    case 0x35:
      local_bc[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0(local_bc,5,0,0,"Enter new base name : ");
      iVar10 = -1;
      pcVar21 = local_bc;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar19 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar10 != -2) {
        iVar10 = 0;
        pCVar11 = local_70;
        if (0 < this_ptr->camera_count) {
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(pCVar11->name,"%s%d",local_bc,iVar10);
            core_setedit_cpp_FUN_0057d340();
            iVar10 = iVar10 + 1;
            pCVar11 = pCVar11 + 1;
          } while (iVar10 < this_ptr->camera_count);
        }
LAB_0057eb3b:
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      break;
    case 0x36:
      if (this_ptr->camera_count < 0xfa) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_12b0);
        iVar10 = 0;
        pCVar11 = local_44;
        if (0 < this_ptr->camera_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_12b0.base_strlist,pCVar11->name);
            iVar10 = iVar10 + 1;
            pCVar11 = pCVar11 + 1;
          } while (iVar10 < this_ptr->camera_count);
        }
        local_1c = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                             (&local_12b0,"Clone which camera",-1,0);
        if (-1 < local_1c) {
          pbVar17 = abStack_4be;
          pCVar11 = local_44 + local_1c;
          do {
            pbVar17 = pbVar17 + 2;
            bVar3 = pCVar11->name[0];
            *pbVar17 = bVar3;
            if (bVar3 == 0) break;
            bVar3 = pCVar11->name[1];
            pCVar11 = (C3DSCamera *)(pCVar11->name + 2);
            pbVar17[1] = bVar3;
          } while (bVar3 != 0);
          uVar7 = 0xffffffff;
          pbVar17 = abStack_4be + 2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar3 = *pbVar17;
            pbVar17 = pbVar17 + (uint)bVar19 * -2 + 1;
          } while (bVar3 != 0);
          iVar10 = ~uVar7 - 2;
          if (0 < iVar10) {
            pbVar17 = abStack_4be + ~uVar7;
            do {
              if ((*pbVar17 < 0x30) || (0x39 < *pbVar17)) break;
              iVar10 = iVar10 + -1;
              pbVar17 = pbVar17 + -1;
            } while (0 < iVar10);
          }
          iVar14 = crt_stdlib_c_atoi_FUN_005ffef0((char *)(abStack_4be + iVar10 + 3));
          crt_stdio_c_sprintf_FUN_005fdbd0
                    ((char *)(abStack_4be + iVar10 + 3),"%d",iVar14 + 1);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            do {
              iVar14 = crt_string_c_strcmp_FUN_005fef20
                                 (local_44[iVar10].name,(char *)(abStack_4be + 2));
              if (iVar14 == 0) {
                pbVar16 = abStack_4be;
                pbVar17 = local_7bc;
                do {
                  pbVar16 = pbVar16 + 2;
                  bVar3 = *pbVar16;
                  *pbVar17 = bVar3;
                  if (bVar3 == 0) break;
                  bVar3 = pbVar16[1];
                  pbVar17[1] = bVar3;
                  pbVar17 = pbVar17 + 2;
                } while (bVar3 != 0);
                iVar10 = -1;
                crt_stdio_c_sprintf_FUN_005fdbd0((char *)(abStack_4be + 2),"%s1",local_7bc);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this_ptr->camera_count);
          }
          iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                             (g_CEditorToolsPtr,"Enter name of clone",
                              (char *)(abStack_4be + 2),0x1f,1);
          if (iVar10 != 0) {
            pCVar8 = local_44 + local_1c;
            pCVar12 = local_44 + this_ptr->camera_count;
            pCVar11 = pCVar8;
            pCVar18 = pCVar12;
            for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(uint *)pCVar18->name = *(uint *)pCVar11->name;
              pCVar11 = (C3DSCamera *)((int)pCVar11 + (uint)bVar19 * -8 + 4);
              pCVar18 = (C3DSCamera *)((int)pCVar18 + (uint)bVar19 * -8 + 4);
            }
            if (&pCVar12->position != &pCVar8->position) {
              (pCVar12->position).x = (pCVar8->position).x;
              (pCVar12->position).y = (pCVar8->position).y;
              (pCVar12->position).z = (pCVar8->position).z;
            }
            if (&pCVar12->orientation != &pCVar8->orientation) {
              (pCVar12->orientation).x = (pCVar8->orientation).x;
              (pCVar12->orientation).y = (pCVar8->orientation).y;
              (pCVar12->orientation).z = (pCVar8->orientation).z;
            }
            (pCVar12->rotation_matrix).m[0].x = (pCVar8->rotation_matrix).m[0].x;
            (pCVar12->rotation_matrix).m[0].y = (pCVar8->rotation_matrix).m[0].y;
            (pCVar12->rotation_matrix).m[0].z = (pCVar8->rotation_matrix).m[0].z;
            (pCVar12->rotation_matrix).m[1].x = (pCVar8->rotation_matrix).m[1].x;
            (pCVar12->rotation_matrix).m[1].y = (pCVar8->rotation_matrix).m[1].y;
            (pCVar12->rotation_matrix).m[1].z = (pCVar8->rotation_matrix).m[1].z;
            (pCVar12->rotation_matrix).m[2].x = (pCVar8->rotation_matrix).m[2].x;
            (pCVar12->rotation_matrix).m[2].y = (pCVar8->rotation_matrix).m[2].y;
            (pCVar12->rotation_matrix).m[2].z = (pCVar8->rotation_matrix).m[2].z;
            pCVar12->field4_0x13c = pCVar8->field4_0x13c;
            pCVar12->is_panning = pCVar8->is_panning;
            pCVar12->projection_scale = pCVar8->projection_scale;
            pCVar12->ambient_value = pCVar8->ambient_value;
            pCVar12->field8_0x14c = pCVar8->field8_0x14c;
            pCVar12->fog_enabled = pCVar8->fog_enabled;
            (pCVar12->fog).color_index.r = (pCVar8->fog).color_index.r;
            (pCVar12->fog).color_index.g = (pCVar8->fog).color_index.g;
            pCVar9 = &(pCVar12->fog).scroll;
            pCVar1 = &(pCVar8->fog).scroll;
            (pCVar12->fog).color_index.b = (pCVar8->fog).color_index.b;
            if (pCVar9 != pCVar1) {
              pCVar9->x = pCVar1->x;
              (pCVar12->fog).scroll.y = (pCVar8->fog).scroll.y;
              (pCVar12->fog).scroll.z = (pCVar8->fog).scroll.z;
            }
            (pCVar12->fog).height_threshold = (pCVar8->fog).height_threshold;
            (pCVar12->fog).density_multiplier = (pCVar8->fog).density_multiplier;
            (pCVar12->fog).reserved = (pCVar8->fog).reserved;
            pCVar12->reverb_preset = pCVar8->reverb_preset;
            if (&pCVar12->box_min != &pCVar8->box_min) {
              (pCVar12->box_min).x = (pCVar8->box_min).x;
              (pCVar12->box_min).y = (pCVar8->box_min).y;
              (pCVar12->box_min).z = (pCVar8->box_min).z;
            }
            if (&pCVar12->box_max != &pCVar8->box_max) {
              (pCVar12->box_max).x = (pCVar8->box_max).x;
              (pCVar12->box_max).y = (pCVar8->box_max).y;
              (pCVar12->box_max).z = (pCVar8->box_max).z;
            }
            pCVar12->pvs_count = pCVar8->pvs_count;
            pCVar12->pvs_list = pCVar8->pvs_list;
            pCVar12->field16_0x19c = pCVar8->field16_0x19c;
            pCVar12->field17_0x1a0 = pCVar8->field17_0x1a0;
            this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
            this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
            pbVar17 = abStack_4be;
            pCVar11 = local_44 + this_ptr->camera_count;
            do {
              pbVar17 = pbVar17 + 2;
              bVar3 = *pbVar17;
              pCVar11->name[0] = bVar3;
              if (bVar3 == 0) break;
              bVar3 = pbVar17[1];
              pCVar11->name[1] = bVar3;
              pCVar11 = (C3DSCamera *)(pCVar11->name + 2);
            } while (bVar3 != 0);
            iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660();
            if (iVar10 != 0) {
              this_ptr->camera_count = this_ptr->camera_count + 1;
              core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
            }
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  (&local_12b0,0,(uint)pFVar20,d3,d4,(uint)pcVar21,d6);
      }
      break;
    case 0x37:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(local_9bc,0));
      if (iVar10 != 0) {
        pFVar20 = engine_dosio_c_getFile_FUN_00481a50("models",local_9bc,"rt");
        if (pFVar20 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe68;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,pFVar20);
        local_6c = -1;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar20,"%d\n",&local_6c);
        if (local_6c != 1) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe6c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_6c)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,pFVar20);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar20,"%d,%d\n",&local_68,&local_64);
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,pFVar20);
        iVar10 = 0;
        if (0 < local_68) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0(&local_2ef0);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710(&local_2ef0,pFVar20);
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_68);
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,pFVar20);
        iVar10 = this_ptr->camera_count;
        for (; (iVar10 < 0xfa && (0 < local_64)); local_64 = local_64 + -1) {
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0
                    (local_60 + this_ptr->camera_count,pFVar20);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_60[this_ptr->camera_count].name,"ncam%d",this_ptr->camera_count)
          ;
          core_setedit_cpp_FUN_0057d340();
          iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                             (g_CEditorToolsPtr,"Import this camera?");
          if (iVar10 != 0) {
            this_ptr->camera_count = this_ptr->camera_count + 1;
          }
          iVar10 = this_ptr->camera_count;
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar20,"..\\core\\setedit.cpp",0xe7f);
        goto LAB_0057eb3b;
      }
      break;
    case 0x38:
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      this_ptr->unk_lighting_param3 = 1;
      this_ptr_00 = g_CEditorToolsPtr;
      this_ptr->unk_lighting_param4 = 1;
      this_ptr->unk_lighting_param1 = 1;
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (this_ptr_00,"Recomputing all PVS");
      iVar10 = 0;
      if (0 < this_ptr->camera_count) {
        local_2c = local_5c;
        pCVar13 = this_ptr;
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(local_3bc,"backdrop\\%s.pvs",local_2c);
          crt_io_c_deleteFile_FUN_005ff9d0(local_3bc);
          ptr = pCVar13->cameras[0].pvs_list;
          pCVar13->cameras[0].pvs_count = 0;
          if (ptr != (int *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0xe97);
            pCVar13->cameras[0].pvs_list = (int *)0x0;
          }
          core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,iVar10);
          iVar10 = iVar10 + 1;
          local_14 = iVar10;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)iVar10,(float)this_ptr->camera_count);
          pCVar13 = (CDemonSet *)&pCVar13->cameras[0].field17_0x1a0;
          local_2c = local_2c + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      this_ptr->unk_lighting_param1 = 0;
      this_ptr->unk_lighting_param3 = 0;
      this_ptr->unk_lighting_param4 = 0;
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      break;
    case 0x39:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge2 .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(local_2bc,0));
      if (iVar10 != 0) {
        local_58 = engine_dosio_c_getFile_FUN_00481a50("models",local_2bc,"rt");
        if (local_58 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeae;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        pFVar5 = local_58;
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,local_58);
        local_54 = -1;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d\n",&local_54);
        if (local_54 != 1) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeb2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_54)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,local_58);
        crt_stdio_c_fscanf_FUN_005fe7c0(local_58,"%d,%d\n",&local_50,&local_4c);
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,local_58);
        pFVar5 = local_58;
        iVar10 = 0;
        if (0 < local_50) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffb878);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710((C3DSLight *)&stack0xffffb878,pFVar5);
            iVar10 = iVar10 + 1;
          } while (iVar10 < local_50);
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_4be + 2),0xff,local_58);
        while (0 < local_4c) {
          core_setutil_cpp_C3DSCamera_ctor_FUN_00585310(&local_b60);
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0(&local_b60,local_58);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            pCVar9 = &local_34->position;
LAB_0057f7c1:
            local_90 = local_b60.position.x - pCVar9->x;
            local_8c = local_b60.position.y - pCVar9->y;
            local_88 = local_b60.position.z - pCVar9->z;
            pCVar11 = local_34 + iVar10;
            if ((float)0.10000000000000001 <=
                SQRT(local_88 * local_88 + local_90 * local_90 + local_8c * local_8c))
            goto LAB_0057fa69;
            local_9c = local_b60.orientation.x - (pCVar11->orientation).x;
            local_98 = local_b60.orientation.y - (pCVar11->orientation).y;
            local_94 = local_b60.orientation.z - (pCVar11->orientation).z;
            if ((float)0.10000000000000001 <=
                SQRT(local_94 * local_94 + local_9c * local_9c + local_98 * local_98))
            goto LAB_0057fa69;
            crt_stdio_c_sprintf_FUN_005fdbd0(local_6bc,"%s.raw",&local_b60);
            local_48 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(local_5bc,"%s.raw",pCVar11);
            iVar14 = 0;
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_5bc,"wb");
            do {
              iVar15 = crt_stdio_c_fgetc_FUN_005fe840(local_48);
              iVar14 = iVar14 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar15,pFVar20);
            } while (iVar14 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_48,"..\\core\\setedit.cpp",0xecd);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xece);
            crt_stdio_c_sprintf_FUN_005fdbd0(local_6bc,"%s.act",&local_b60);
            local_48 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(local_5bc,"%s.act",local_44 + iVar10);
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_5bc,"wb");
            pFVar5 = local_48;
            do {
              iVar14 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar14,pFVar20);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xed6);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xed7);
          }
LAB_0057fa1d:
          local_4c = local_4c + -1;
          core_setutil_cpp_C3DSCamera_dtor_FUN_00585340(&local_b60);
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_58,"..\\core\\setedit.cpp",0xede);
        goto LAB_0057eb3b;
      }
      break;
    case 0x41:
      local_ac[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (local_ac,5,0,0,"Enter new unique base name : ");
      iVar10 = -1;
      pcVar21 = local_ac;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar19 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar10 != -2) {
        local_18 = 0;
        if (0 < this_ptr->camera_count) {
          local_28 = local_40;
          local_24 = local_3c;
          local_20 = local_38;
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(local_8bc,"%s.raw",local_28);
            crt_stdio_c_sprintf_FUN_005fdbd0(local_1bc,"%s%d.raw",local_ac,local_18 + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_8bc,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_1bc,"wb");
            do {
              iVar14 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar14,pFVar20);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xef5);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xef6);
            crt_stdio_c_sprintf_FUN_005fdbd0(local_8bc,"%s.act",local_24);
            crt_stdio_c_sprintf_FUN_005fdbd0(local_1bc,"%s%d.act",local_ac,local_18 + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_8bc,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_1bc,"wb");
            do {
              iVar14 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar14,pFVar20);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xefe);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xeff);
            pCVar11 = local_20;
            iVar10 = local_18 + 1;
            crt_stdio_c_sprintf_FUN_005fdbd0(local_20->name,"%s%d",local_ac,iVar10);
            local_20 = pCVar11 + 1;
            local_24 = local_24 + 1;
            local_28 = local_28 + 1;
            local_18 = iVar10;
          } while (iVar10 < this_ptr->camera_count);
        }
        goto LAB_0057eb3b;
      }
    }
    if (local_84 == 0x1b) {
      engine_2d_c_clearInputAndWait_FUN_00403260();
      core_setedit_cpp_CallToFreeSomeMemory_FUN_00580560(this_ptr);
      return;
    }
  } while( true );
LAB_0057fa69:
  iVar10 = iVar10 + 1;
  pCVar9 = pCVar9 + 0x23;
  if (this_ptr->camera_count <= iVar10) goto LAB_0057fa1d;
  goto LAB_0057f7c1;
}
