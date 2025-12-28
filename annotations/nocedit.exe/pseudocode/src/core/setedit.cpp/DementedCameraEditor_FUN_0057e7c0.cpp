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
  undefined3 extraout_var;
  byte *pbVar5;
  FILE *pFVar6;
  FILE *pFVar7;
  C3DSCamera *pCVar8;
  CVector3f *pCVar9;
  int iVar10;
  C3DSCamera *pCVar11;
  CDemonSet *pCVar12;
  BADSPACEBASE *in_ESP;
  FILE *unaff_ESI;
  int iVar13;
  int y_pos;
  char *pcVar14;
  char *pcVar15;
  C3DSCamera *pCVar16;
  C3DSCamera *pCVar17;
  byte bVar18;
  int unaff_retaddr;
  int in_stack_00000014;
  FILE *pFVar19;
  uint uVar20;
  uint d3;
  uint d4;
  uint d5;
  uint d6;
  uint d5_00;
  char *pcVar21;
  byte auStack_2ef8 [6308];
  byte auStack_1654 [16];
  byte auStack_1644 [924];
  byte auStack_12a8 [932];
  byte auStack_f04 [16];
  byte auStack_ef4 [916];
  byte local_b60 [260];
  float local_a5c;
  float local_a58;
  float local_a54;
  float local_a50;
  float local_a4c;
  float fStack_a48;
  char acStack_9b8 [252];
  char local_8bc [24];
  char acStack_8a4 [236];
  char acStack_7b8 [252];
  char local_6bc [4];
  char acStack_6b8 [16];
  char acStack_6a8 [236];
  char local_5bc [4];
  char acStack_5b8 [244];
  char acStack_4c4 [4];
  char acStack_4c0 [4];
  char local_4bc [10];
  byte abStack_4b2 [242];
  char acStack_3c0 [4];
  char local_3bc [260];
  char acStack_2b8 [252];
  char local_1bc [4];
  char acStack_1b8 [256];
  char acStack_b8 [16];
  char acStack_a8 [4];
  char acStack_a4 [12];
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  int local_80;
  C3DSCamera *local_7c;
  C3DSCamera *local_78;
  C3DSCamera *local_74;
  char *local_70;
  C3DSCamera *local_6c;
  int local_68;
  int local_64;
  FILE *local_60;
  FILE *local_5c;
  FILE *local_58;
  FILE *local_54;
  FILE *local_50;
  FILE *local_4c;
  int local_48;
  FILE *local_44;
  C3DSCamera *local_40;
  FILE *local_3c;
  FILE *local_38;
  C3DSCamera *local_34;
  FILE *local_30;
  int local_28;
  C3DSCamera *local_24;
  FILE *local_20;
  C3DSCamera *local_1c;
  FILE *local_18;
  
  bVar18 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  local_7c = this_ptr->cameras;
  local_70 = this_ptr->geometry_filename;
  local_78 = local_7c;
  local_74 = local_7c;
  local_6c = local_7c;
  local_5c = (FILE *)local_7c;
  local_58 = (FILE *)local_7c;
  local_40 = local_7c;
  local_3c = (FILE *)local_7c;
  local_38 = (FILE *)local_7c;
  local_34 = local_7c;
  local_30 = (FILE *)local_7c;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented Camera Editor",0,0);
    y_pos = 0x16;
    iVar13 = 0;
    iVar10 = 0;
    if (0 < this_ptr->camera_count) {
      local_24 = local_74;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0((char *)(abStack_4b2 + 2),"%s");
        engine_2d_c_drawText_FUN_00401fd0(local_4bc,iVar13,y_pos);
        y_pos = y_pos + 0xb;
        if (g_WindowHeight / 2 + -0xb < y_pos) {
          y_pos = 0x16;
          iVar13 = iVar13 + g_WindowWidth / 7;
        }
        local_24 = local_24 + 1;
        iVar10 = iVar10 + 1;
      } while (iVar10 < this_ptr->camera_count);
    }
    iVar13 = g_WindowHeight / 2;
    engine_2d_c_drawText_FUN_00401fd0("1.  Add new camera",0,iVar13);
    iVar10 = iVar13 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("2.  Delete existing camera",0,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("3.  Edit existing camera",0,iVar13 + 0x16);
    this_ptr = (CDemonSet *)(iVar13 + 0x21);
    pFVar19 = (FILE *)0x57e94a;
    engine_2d_c_drawText_FUN_00401fd0("4.  Save set",0,(int)this_ptr);
    uVar20 = 0x57e96a;
    engine_2d_c_drawText_FUN_00401fd0("5.  Rename all cameras",g_WindowWidth / 3,iVar13);
    d3 = 0x57e98a;
    engine_2d_c_drawText_FUN_00401fd0("6.  Clone a camera",g_WindowWidth / 3,iVar10);
    d4 = 0x57e9aa;
    engine_2d_c_drawText_FUN_00401fd0("7.  Merge .LC file",g_WindowWidth / 3,iVar13 + 0x16);
    d5 = 0x57e9d1;
    engine_2d_c_drawText_FUN_00401fd0
              ("8.  Precompute all PVS",g_WindowWidth / 3,in_stack_00000014);
    d6 = 0x57e9f4;
    engine_2d_c_drawText_FUN_00401fd0("9.  Merge2",(g_WindowWidth * 2) / 3,iVar13);
    pcVar21 = "A.  Rename2";
    d5_00 = 0x57ea17;
    engine_2d_c_drawText_FUN_00401fd0("A.  Rename2",(g_WindowWidth * 2) / 3,iVar10);
    iVar10 = core_setedit_cpp_CDemonSet_FUN_00577af0(this_ptr);
    if ((iVar10 != -1) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
      core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
    }
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar10 == 0) {
      local_38 = (FILE *)0xffffffff;
    }
    else {
      local_34 = (C3DSCamera *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    }
    switch(local_80) {
    case 0x31:
      if (this_ptr->camera_count < 0xfa) {
        core_setutil_cpp_C3DSCamera_reset_FUN_005853b0(local_40 + this_ptr->camera_count);
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_4c0,8,0,0,"Name this new camera : ");
        pcVar21 = local_4bc;
        pFVar19 = local_44 + this_ptr->camera_count * 0xf;
        do {
          cVar2 = *pcVar21;
          *(char *)&pFVar19->_ptr = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar21[1];
          pcVar21 = pcVar21 + 2;
          *(char *)((int)&pFVar19->_ptr + 1) = cVar2;
          pFVar19 = (FILE *)((int)&pFVar19->_ptr + 2);
        } while (cVar2 != '\0');
        iVar10 = -1;
        pcVar21 = local_4bc;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          cVar2 = *pcVar21;
          pcVar21 = pcVar21 + (uint)bVar18 * -2 + 1;
        } while (cVar2 != '\0');
        if ((iVar10 != -2) &&
           (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
          this_ptr->camera_count = this_ptr->camera_count + 1;
          goto LAB_0057eb3b;
        }
      }
      break;
    case 0x32:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_f04);
      iVar10 = 0;
      pCVar17 = local_74;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_f04 + 4),pCVar17->name);
          iVar10 = iVar10 + 1;
          pCVar17 = pCVar17 + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)(auStack_f04 + 4),"Delete which camera",-1,0);
      if (-1 < iVar10) {
        core_setedit_cpp_FUN_0057e430();
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_ef4,0,d4,d5,d6,d5_00,(uint)pcVar21);
      break;
    case 0x33:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)auStack_1654);
      iVar10 = 0;
      pcVar15 = local_70;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)(auStack_1654 + 4),pcVar15);
          iVar10 = iVar10 + 1;
          pcVar15 = pcVar15 + 0x1a4;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)(auStack_1654 + 4),"Move which camera",-1,0);
      if ((-1 < iVar10) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0))
      {
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1644,0,d4,d5,d6,d5_00,(uint)pcVar21);
      break;
    case 0x34:
      if (*(char *)(iVar13 + 0x14d111) == '\0') {
        local_4bc[4] = 0;
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  (local_70,(char *)0x0,(char *)0x0,local_4bc + 4,(char *)0x0);
        pcVar15 = ".set";
        iVar10 = -1;
        pcVar21 = acStack_4c0;
        do {
          pcVar14 = pcVar21;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar14 = pcVar21 + (uint)bVar18 * -2 + 1;
          cVar2 = *pcVar21;
          pcVar21 = pcVar14;
        } while (cVar2 != '\0');
        pcVar14 = pcVar14 + -1;
        do {
          cVar2 = *pcVar15;
          *pcVar14 = cVar2;
          if (cVar2 == '\0') break;
          cVar2 = pcVar15[1];
          pcVar15 = pcVar15 + 2;
          pcVar14[1] = cVar2;
          pcVar14 = pcVar14 + 2;
        } while (cVar2 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_4c0);
      }
      bVar4 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x6481d1,
                         SUB41 /* extract 2-byte value */(local_4bc,0));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar4) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,local_4bc + 4);
      }
      break;
    case 0x35:
      acStack_b8[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0(acStack_b8,5,0,0,"Enter new base name : ");
      iVar10 = -1;
      pcVar21 = acStack_b8;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar18 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar10 != -2) {
        iVar10 = 0;
        pCVar17 = local_6c;
        if (0 < this_ptr->camera_count) {
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(pCVar17->name,"%s%d");
            core_setedit_cpp_FUN_0057d340();
            iVar10 = iVar10 + 1;
            pCVar17 = pCVar17 + 1;
          } while (iVar10 < this_ptr->camera_count);
        }
LAB_0057eb3b:
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      break;
    case 0x36:
      if (this_ptr->camera_count < 0xfa) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1644 + 0x398));
        iVar10 = 0;
        pFVar19 = local_3c;
        if (0 < this_ptr->camera_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_12a8,(char *)pFVar19);
            iVar10 = iVar10 + 1;
            pFVar19 = pFVar19 + 0xf;
          } while (iVar10 < this_ptr->camera_count);
        }
        iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                           ((CPickList *)auStack_12a8,"Clone which camera",-1,0);
        if (-1 < iVar10) {
          pbVar5 = abStack_4b2;
          pFVar19 = local_38 + iVar10 * 0xf;
          do {
            pbVar5 = pbVar5 + 2;
            bVar3 = *(byte *)&pFVar19->_ptr;
            *pbVar5 = bVar3;
            if (bVar3 == 0) break;
            bVar3 = *(byte *)((int)&pFVar19->_ptr + 1);
            pFVar19 = (FILE *)((int)&pFVar19->_ptr + 2);
            pbVar5[1] = bVar3;
          } while (bVar3 != 0);
          uVar20 = 0xffffffff;
          pbVar5 = abStack_4b2 + 2;
          do {
            if (uVar20 == 0) break;
            uVar20 = uVar20 - 1;
            bVar3 = *pbVar5;
            pbVar5 = pbVar5 + (uint)bVar18 * -2 + 1;
          } while (bVar3 != 0);
          iVar10 = ~uVar20 - 2;
          if (0 < iVar10) {
            pbVar5 = abStack_4b2 + ~uVar20;
            do {
              if ((*pbVar5 < 0x30) || (0x39 < *pbVar5)) break;
              iVar10 = iVar10 + -1;
              pbVar5 = pbVar5 + -1;
            } while (0 < iVar10);
          }
          iVar13 = crt_stdlib_c_atoi_FUN_005ffef0((char *)(abStack_4b2 + iVar10 + 3));
          uVar20 = iVar13 + 1;
          crt_stdio_c_sprintf_FUN_005fdbd0((char *)(abStack_4b2 + iVar10 + 3),"%d");
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            do {
              iVar13 = crt_string_c_strcmp_FUN_005fef20((char *)(local_44 + iVar10 * 0xf),local_4bc)
              ;
              if (iVar13 == 0) {
                pcVar21 = local_4bc + 4;
                pcVar15 = acStack_7b8;
                do {
                  cVar2 = *pcVar21;
                  *pcVar15 = cVar2;
                  if (cVar2 == '\0') break;
                  cVar2 = pcVar21[1];
                  pcVar21 = pcVar21 + 2;
                  pcVar15[1] = cVar2;
                  pcVar15 = pcVar15 + 2;
                } while (cVar2 != '\0');
                iVar10 = -1;
                crt_stdio_c_sprintf_FUN_005fdbd0(local_4bc + 4,"%s1");
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this_ptr->camera_count);
          }
          iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                             (g_CEditorToolsPtr,"Enter name of clone",local_4bc,0x1f,1);
          if (iVar10 != 0) {
            pCVar8 = local_40 + (int)local_18;
            pCVar11 = local_40 + this_ptr->camera_count;
            pCVar17 = pCVar8;
            pCVar16 = pCVar11;
            for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
              *(uint *)pCVar16->name = *(uint *)pCVar17->name;
              pCVar17 = (C3DSCamera *)((int)pCVar17 + (uint)bVar18 * -8 + 4);
              pCVar16 = (C3DSCamera *)((int)pCVar16 + (uint)bVar18 * -8 + 4);
            }
            if (&pCVar11->position != &pCVar8->position) {
              (pCVar11->position).x = (pCVar8->position).x;
              (pCVar11->position).y = (pCVar8->position).y;
              (pCVar11->position).z = (pCVar8->position).z;
            }
            if (&pCVar11->orientation != &pCVar8->orientation) {
              (pCVar11->orientation).x = (pCVar8->orientation).x;
              (pCVar11->orientation).y = (pCVar8->orientation).y;
              (pCVar11->orientation).z = (pCVar8->orientation).z;
            }
            (pCVar11->rotation_matrix).m[0].x = (pCVar8->rotation_matrix).m[0].x;
            (pCVar11->rotation_matrix).m[0].y = (pCVar8->rotation_matrix).m[0].y;
            (pCVar11->rotation_matrix).m[0].z = (pCVar8->rotation_matrix).m[0].z;
            (pCVar11->rotation_matrix).m[1].x = (pCVar8->rotation_matrix).m[1].x;
            (pCVar11->rotation_matrix).m[1].y = (pCVar8->rotation_matrix).m[1].y;
            (pCVar11->rotation_matrix).m[1].z = (pCVar8->rotation_matrix).m[1].z;
            (pCVar11->rotation_matrix).m[2].x = (pCVar8->rotation_matrix).m[2].x;
            (pCVar11->rotation_matrix).m[2].y = (pCVar8->rotation_matrix).m[2].y;
            (pCVar11->rotation_matrix).m[2].z = (pCVar8->rotation_matrix).m[2].z;
            pCVar11->field4_0x13c = pCVar8->field4_0x13c;
            pCVar11->is_panning = pCVar8->is_panning;
            pCVar11->projection_scale = pCVar8->projection_scale;
            pCVar11->ambient_value = pCVar8->ambient_value;
            pCVar11->field8_0x14c = pCVar8->field8_0x14c;
            pCVar11->fog_enabled = pCVar8->fog_enabled;
            (pCVar11->fog).color_index.r = (pCVar8->fog).color_index.r;
            (pCVar11->fog).color_index.g = (pCVar8->fog).color_index.g;
            pCVar9 = &(pCVar11->fog).scroll;
            pCVar1 = &(pCVar8->fog).scroll;
            (pCVar11->fog).color_index.b = (pCVar8->fog).color_index.b;
            if (pCVar9 != pCVar1) {
              pCVar9->x = pCVar1->x;
              (pCVar11->fog).scroll.y = (pCVar8->fog).scroll.y;
              (pCVar11->fog).scroll.z = (pCVar8->fog).scroll.z;
            }
            (pCVar11->fog).height_threshold = (pCVar8->fog).height_threshold;
            (pCVar11->fog).density_multiplier = (pCVar8->fog).density_multiplier;
            (pCVar11->fog).reserved = (pCVar8->fog).reserved;
            pCVar11->reverb_preset = pCVar8->reverb_preset;
            if (&pCVar11->box_min != &pCVar8->box_min) {
              (pCVar11->box_min).x = (pCVar8->box_min).x;
              (pCVar11->box_min).y = (pCVar8->box_min).y;
              (pCVar11->box_min).z = (pCVar8->box_min).z;
            }
            if (&pCVar11->box_max != &pCVar8->box_max) {
              (pCVar11->box_max).x = (pCVar8->box_max).x;
              (pCVar11->box_max).y = (pCVar8->box_max).y;
              (pCVar11->box_max).z = (pCVar8->box_max).z;
            }
            pCVar11->pvs_count = pCVar8->pvs_count;
            pCVar11->pvs_list = pCVar8->pvs_list;
            pCVar11->field16_0x19c = pCVar8->field16_0x19c;
            pCVar11->field17_0x1a0 = pCVar8->field17_0x1a0;
            this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
            this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
            pcVar21 = local_4bc + 4;
            pCVar17 = local_40 + this_ptr->camera_count;
            do {
              cVar2 = *pcVar21;
              pCVar17->name[0] = cVar2;
              if (cVar2 == '\0') break;
              cVar2 = pcVar21[1];
              pcVar21 = pcVar21 + 2;
              pCVar17->name[1] = cVar2;
              pCVar17 = (C3DSCamera *)(pCVar17->name + 2);
            } while (cVar2 != '\0');
            iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660();
            if (iVar10 != 0) {
              this_ptr->camera_count = this_ptr->camera_count + 1;
              core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
            }
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)(auStack_12a8 + 4),0,uVar20,d3,d4,d5,d6);
      }
      break;
    case 0x37:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(acStack_9b8,0));
      if (iVar10 != 0) {
        pFVar19 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_9b8,"rt");
        if (pFVar19 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe68;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc + 8,0xff,pFVar19);
        local_60 = (FILE *)0xffffffff;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar19,"%d\n");
        if (local_6c != (C3DSCamera *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe6c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc,0xff,pFVar19);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar19,"%d,%d\n");
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc,0xff,pFVar19);
        iVar10 = 0;
        if (0 < (int)local_70) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)auStack_2ef8);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                      ((C3DSLight *)(auStack_2ef8 + 4),pFVar19);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_70);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_4c4,0xff,pFVar19);
        iVar10 = this_ptr->camera_count;
        while ((iVar10 < 0xfa && (0 < local_68))) {
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0
                    ((C3DSCamera *)(this_ptr->camera_count * 0x1a4 + local_64),pFVar19);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    ((char *)(local_60 + this_ptr->camera_count * 0xf),"ncam%d");
          core_setedit_cpp_FUN_0057d340();
          iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                             (g_CEditorToolsPtr,"Import this camera?");
          if (iVar10 != 0) {
            this_ptr->camera_count = this_ptr->camera_count + 1;
          }
          local_64 = local_64 + -1;
          iVar10 = this_ptr->camera_count;
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar19,"..\\core\\setedit.cpp",0xe7f);
        goto LAB_0057eb3b;
      }
      break;
    case 0x38:
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      *(uint *)(iVar13 + 0x15acad) = 1;
      this_ptr_00 = g_CEditorToolsPtr;
      *(uint *)(iVar13 + 0x15acb1) = 1;
      *(uint *)(iVar13 + 0x15aca5) = 1;
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (this_ptr_00,"Recomputing all PVS");
      pCVar17 = (C3DSCamera *)0x0;
      if (0 < this_ptr->camera_count) {
        local_30 = local_60;
        pCVar12 = this_ptr;
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_3c0,"backdrop\\%s.pvs");
          crt_io_c_deleteFile_FUN_005ff9d0(local_3bc);
          ptr = pCVar12->cameras[0].pvs_list;
          pCVar12->cameras[0].pvs_count = 0;
          if (ptr != (int *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0xe97);
            pCVar12->cameras[0].pvs_list = (int *)0x0;
          }
          core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,(int)pCVar17);
          pCVar17 = (C3DSCamera *)(pCVar17->name + 1);
          local_1c = pCVar17;
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)pCVar17,(float)this_ptr->camera_count);
          pCVar12 = (CDemonSet *)&pCVar12->cameras[0].field17_0x1a0;
          local_30 = local_30 + 0xf;
        } while ((int)pCVar17 < this_ptr->camera_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      *(uint *)(iVar13 + 0x15aca5) = 0;
      *(uint *)(iVar13 + 0x15acad) = 0;
      *(uint *)(iVar13 + 0x15acb1) = 0;
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      break;
    case 0x39:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge2 .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(acStack_2b8,0));
      if (iVar10 != 0) {
        local_50 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_2b8,"rt");
        if (local_50 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeae;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        pFVar19 = local_50;
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc + 8,0xff,local_50);
        local_48 = -1;
        pcVar21 = "%d\n";
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar19,"%d\n");
        if (local_54 != (FILE *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeb2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc,0xff,local_58);
        crt_stdio_c_fscanf_FUN_005fe7c0(local_54,"%d,%d\n");
        crt_stdio_c_fgets_FUN_005fefd0(local_4bc,0xff,local_58);
        pFVar19 = local_60;
        iVar10 = 0;
        if (0 < (int)local_58) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffb870);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710((C3DSLight *)&stack0xffffb874,pFVar19)
            ;
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_58);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_4c4,0xff,local_60);
        while (0 < (int)local_50) {
          core_setutil_cpp_C3DSCamera_ctor_FUN_00585310((C3DSCamera *)(auStack_ef4 + 0x390));
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0((C3DSCamera *)local_b60,local_58);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            pCVar9 = (CVector3f *)&local_30[9]._cnt;
LAB_0057f7c1:
            local_8c = local_a5c - pCVar9->x;
            local_88 = local_a58 - pCVar9->y;
            local_84 = local_a54 - pCVar9->z;
            if ((float)0.10000000000000001 <=
                SQRT(local_84 * local_84 + local_8c * local_8c + local_88 * local_88))
            goto LAB_0057fa69;
            local_98 = local_a50 - (float)local_30[iVar10 * 0xf + 9]._handle;
            local_94 = local_a4c - (float)local_30[iVar10 * 0xf + 9]._bufsize;
            local_90 = fStack_a48 - *(float *)&local_30[iVar10 * 0xf + 9]._ungotten;
            if ((float)0.10000000000000001 <=
                SQRT(local_90 * local_90 + local_98 * local_98 + local_94 * local_94))
            goto LAB_0057fa69;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_6b8,"%s.raw");
            local_44 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_5b8,"%s.raw");
            iVar10 = 0;
            pFVar19 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_5bc,"wb");
            do {
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(local_44);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,(FILE *)pcVar21);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_3c,"..\\core\\setedit.cpp",0xecd);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar19,"..\\core\\setedit.cpp",0xece);
            pcVar21 = (char *)0x57f975;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_6a8,"%s.act");
            local_44 = engine_dosio_c_getFile_FUN_00481a50
                                 ("backdrop",local_6bc,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_5b8,"%s.act");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_5bc,"wb");
            pFVar19 = local_4c;
            do {
              pFVar7 = pFVar19;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar19);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar7);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar19,"..\\core\\setedit.cpp",0xed6);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xed7);
          }
LAB_0057fa1d:
          local_48 = local_48 + -1;
          core_setutil_cpp_C3DSCamera_dtor_FUN_00585340((C3DSCamera *)(local_b60 + 4));
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_5c,"..\\core\\setedit.cpp",0xede);
        goto LAB_0057eb3b;
      }
      break;
    case 0x41:
      acStack_a8[0] = '\0';
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                (acStack_a8,5,0,0,"Enter new unique base name : ");
      iVar10 = -1;
      pcVar21 = acStack_a4;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar2 = *pcVar21;
        pcVar21 = pcVar21 + (uint)bVar18 * -2 + 1;
      } while (cVar2 != '\0');
      if (iVar10 != -2) {
        if (0 < this_ptr->camera_count) {
          local_20 = local_38;
          local_1c = local_34;
          local_18 = local_30;
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(local_8bc,"%s.raw");
            crt_stdio_c_sprintf_FUN_005fdbd0(local_1bc,"%s%d.raw");
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",local_8bc,"rb");
            iVar10 = 0;
            pFVar7 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_1b8,"wb");
            do {
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar19);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xef5);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar7,"..\\core\\setedit.cpp",0xef6);
            pFVar7 = (FILE *)0x57fbd5;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_8a4,"%s.act");
            crt_stdio_c_sprintf_FUN_005fdbd0(local_1bc,"%s%d.act");
            pFVar19 = engine_dosio_c_getFile_FUN_00481a50
                                ("backdrop",local_8bc,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_1b8,"wb");
            do {
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar19);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar7);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar19,"..\\core\\setedit.cpp",0xefe);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xeff);
            pFVar6 = (FILE *)(unaff_retaddr + 1);
            pFVar19 = unaff_ESI;
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)unaff_ESI,"%s%d");
            local_20 = unaff_ESI + 0xf;
            local_24 = local_24 + 1;
            local_28 = local_28 + 0x1a4;
            local_18 = pFVar6;
          } while ((int)pFVar6 < this_ptr->camera_count);
        }
        goto LAB_0057eb3b;
      }
    }
    if (local_80 == 0x1b) {
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
