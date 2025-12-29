// Name: core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0
// Address: 0057e7c0
// Address Range: [[0057e7c0, 0057fcf2]]
// Convention: __cdecl
// Signature: void core_setedit.cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_DementedCameraEditor_FUN_0057e7c0(CDemonSet *this_ptr)

{
  char cVar1;
  byte bVar2;
  int *ptr;
  CEditorTools *this_ptr_00;
  bool bVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  FILE *pFVar5;
  FILE *pFVar6;
  uint uVar7;
  uint *puVar8;
  float *pfVar9;
  FILE *unaff_EBX;
  int iVar10;
  C3DSCamera *string_data;
  uint *puVar11;
  CDemonSet *pCVar12;
  BADSPACEBASE *in_ESP;
  FILE *unaff_EBP;
  FILE *unaff_ESI;
  int iVar13;
  char *pcVar14;
  uint *puVar15;
  FILE *unaff_EDI;
  int y_pos;
  char *pcVar16;
  char *pcVar17;
  uint *puVar18;
  FILE **ppFVar19;
  byte bVar20;
  int in_stack_00000008;
  int in_stack_0000000c;
  int in_stack_00000014;
  FILE *in_stack_00000018;
  FILE *in_stack_00000020;
  int in_stack_00000024;
  FILE *in_stack_00000028;
  FILE *in_stack_00000030;
  FILE *in_stack_00000038;
  FILE *in_stack_00000040;
  FILE *pFVar21;
  char *in_stack_ffffb8cc;
  char *in_stack_ffffb8d0;
  uint in_stack_ffffb8d4;
  uint in_stack_ffffb8d8;
  uint in_stack_ffffb8dc;
  FILE *in_stack_ffffb8e0;
  FILE *in_stack_ffffb900;
  byte auStack_2ea4 [6292];
  byte auStack_1610 [12];
  byte auStack_1604 [912];
  byte auStack_1274 [24];
  byte auStack_125c [924];
  byte auStack_ec0 [12];
  byte auStack_eb4 [936];
  byte auStack_b0c [260];
  float fStack_a08;
  float fStack_a04;
  float fStack_a00;
  float fStack_9fc;
  float fStack_9f8;
  float fStack_9f4;
  char acStack_990 [36];
  byte auStack_96c [216];
  char acStack_894 [16];
  char acStack_884 [8];
  char acStack_87c [20];
  char acStack_868 [248];
  char acStack_770 [268];
  char acStack_664 [4];
  char acStack_660 [28];
  char acStack_644 [4];
  char acStack_640 [228];
  char acStack_55c [4];
  char acStack_558 [28];
  char acStack_53c [4];
  char acStack_538 [132];
  char acStack_4b4 [4];
  char acStack_4b0 [40];
  char acStack_488 [10];
  byte abStack_47e [10];
  char acStack_474 [4];
  char acStack_470 [9];
  char acStack_467 [243];
  char acStack_374 [16];
  char acStack_364 [212];
  char acStack_290 [36];
  byte auStack_26c [212];
  char acStack_198 [8];
  char acStack_190 [16];
  char acStack_180 [8];
  char acStack_178 [240];
  byte local_88 [8];
  int local_80;
  C3DSCamera *local_7c;
  C3DSCamera *local_78;
  FILE *local_74;
  char *local_70;
  FILE *local_6c;
  char local_68 [12];
  FILE *local_5c;
  FILE *local_58 [5];
  float local_44;
  C3DSCamera *local_40;
  C3DSCamera *local_3c;
  C3DSCamera *local_38;
  FILE *local_34;
  C3DSCamera *local_30;
  FILE *local_28;
  FILE *local_24;
  byte local_20 [4];
  char *local_1c;
  FILE *local_18;
  FILE *local_14;
  
  bVar20 = 0;
  core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
  local_7c = this_ptr->cameras;
  local_70 = this_ptr->geometry_filename;
  local_78 = local_7c;
  local_74 = (FILE *)local_7c;
  local_6c = (FILE *)local_7c;
  local_5c = (FILE *)local_7c;
  local_58[0] = (FILE *)local_7c;
  local_40 = local_7c;
  local_3c = local_7c;
  local_38 = local_7c;
  local_34 = (FILE *)local_7c;
  local_30 = local_7c;
  do {
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Demented Camera Editor",0,0);
    y_pos = 0x16;
    iVar13 = 0;
    iVar10 = 0;
    if (0 < this_ptr->camera_count) {
      local_24 = local_74;
      do {
        crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4b0,"%s",acStack_4b0,"%s",local_24)
        ;
        engine_2d_c_drawText_FUN_00401fd0(acStack_4b4,iVar13,y_pos);
        y_pos = y_pos + 0xb;
        if (g_WindowHeight / 2 + -0xb < y_pos) {
          y_pos = 0x16;
          iVar13 = iVar13 + g_WindowWidth / 7;
        }
        local_24 = local_24 + 0xf;
        iVar10 = iVar10 + 1;
      } while (iVar10 < this_ptr->camera_count);
    }
    iVar13 = g_WindowHeight / 2;
    engine_2d_c_drawText_FUN_00401fd0("1.  Add new camera",0,iVar13);
    iVar10 = iVar13 + 0xb;
    engine_2d_c_drawText_FUN_00401fd0("2.  Delete existing camera",0,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("3.  Edit existing camera",0,iVar13 + 0x16);
    this_ptr = (CDemonSet *)(iVar13 + 0x21);
    engine_2d_c_drawText_FUN_00401fd0("4.  Save set",0,(int)this_ptr);
    engine_2d_c_drawText_FUN_00401fd0("5.  Rename all cameras",g_WindowWidth / 3,iVar13);
    engine_2d_c_drawText_FUN_00401fd0("6.  Clone a camera",g_WindowWidth / 3,iVar10);
    engine_2d_c_drawText_FUN_00401fd0("7.  Merge .LC file",g_WindowWidth / 3,iVar13 + 0x16);
    engine_2d_c_drawText_FUN_00401fd0
              ("8.  Precompute all PVS",g_WindowWidth / 3,in_stack_00000014);
    engine_2d_c_drawText_FUN_00401fd0("9.  Merge2",(g_WindowWidth * 2) / 3,iVar13);
    engine_2d_c_drawText_FUN_00401fd0("A.  Rename2",(g_WindowWidth * 2) / 3,iVar10);
    iVar10 = core_setedit_cpp_CDemonSet_FUN_00577af0(this_ptr);
    if ((iVar10 != -1) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
      core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
    }
    wincore_winrun_cpp_drawCrosshair_FUN_005f2fd0();
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    iVar10 = wincore_winrun_cpp_wasKeyPressed_FUN_005f2f00();
    if (iVar10 == 0) {
      local_38 = (C3DSCamera *)0xffffffff;
    }
    else {
      local_34 = (FILE *)engine_keys_cpp_CKeys_getUppercasedInputKey_FUN_00502470(g_CKeysPtr);
    }
    switch(local_34) {
    case (FILE *)0x31:
      if (this_ptr->camera_count < 0xfa) {
        core_setutil_cpp_C3DSCamera_reset_FUN_005853b0
                  ((C3DSCamera *)(this_ptr->camera_count * 0x1a4 + in_stack_0000000c));
        engine_2d_c_getInputWithPrompt_FUN_004032c0
                  (acStack_470,8,0,0,"Name this new camera : ");
        pcVar14 = acStack_470 + 4;
        pcVar17 = (char *)(this_ptr->camera_count * 0x1a4 + in_stack_0000000c);
        do {
          cVar1 = *pcVar14;
          *pcVar17 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar14[1];
          pcVar14 = pcVar14 + 2;
          pcVar17[1] = cVar1;
          pcVar17 = pcVar17 + 2;
        } while (cVar1 != '\0');
        iVar10 = -1;
        pcVar14 = acStack_470 + 4;
        do {
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar14 + (uint)bVar20 * -2 + 1;
        } while (cVar1 != '\0');
        if ((iVar10 != -2) &&
           (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0)) {
          this_ptr->camera_count = this_ptr->camera_count + 1;
          goto LAB_0057eb3b;
        }
      }
      break;
    case (FILE *)0x32:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_ec0 + 8));
      iVar10 = 0;
      pFVar5 = local_34;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_ec0,(char *)pFVar5);
          iVar10 = iVar10 + 1;
          pFVar5 = pFVar5 + 0xf;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)auStack_ec0,"Delete which camera",-1,0);
      if (-1 < iVar10) {
        core_setedit_cpp_FUN_0057e430();
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_eb4,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                 in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      break;
    case (FILE *)0x33:
      shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1610 + 8));
      iVar10 = 0;
      string_data = local_30;
      if (0 < this_ptr->camera_count) {
        do {
          shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1610,string_data->name);
          iVar10 = iVar10 + 1;
          string_data = string_data + 1;
        } while (iVar10 < this_ptr->camera_count);
      }
      iVar10 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)auStack_1610,"Move which camera",-1,0);
      if ((-1 < iVar10) && (iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660(), iVar10 != 0))
      {
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)auStack_1604,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                 in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      break;
    case (FILE *)0x34:
      if (*(char *)(iVar13 + 0x14d111) == '\0') {
        acStack_470[4] = 0;
      }
      else {
        engine_dosio_c_splitPath_FUN_00481f20
                  ((char *)local_24,(char *)0x0,(char *)0x0,acStack_470 + 4,(char *)0x0);
        pcVar17 = ".set";
        iVar10 = -1;
        pcVar14 = acStack_470;
        do {
          pcVar16 = pcVar14;
          if (iVar10 == 0) break;
          iVar10 = iVar10 + -1;
          pcVar16 = pcVar14 + (uint)bVar20 * -2 + 1;
          cVar1 = *pcVar14;
          pcVar14 = pcVar16;
        } while (cVar1 != '\0');
        pcVar16 = pcVar16 + -1;
        do {
          cVar1 = *pcVar17;
          *pcVar16 = cVar1;
          if (cVar1 == '\0') break;
          cVar1 = pcVar17[1];
          pcVar17 = pcVar17 + 2;
          pcVar16[1] = cVar1;
          pcVar16 = pcVar16 + 2;
        } while (cVar1 != '\0');
        crt_string_c_strupr_FUN_00600770(acStack_470);
      }
      bVar3 = shape_edittool_cpp_CEditorTools_showFilenameInputDialog_FUN_0049fb70
                        (g_CEditorToolsPtr,"Save set","models",0x6481d1,
                         (bool)((char)acStack_470 + '\x04'));
      if (CONCAT31 /* combine 2-byte values */(extraout_var,bVar3) != 0) {
        core_setedit_cpp_CDemonSet_save_FUN_0057a2a0(this_ptr,acStack_470 + 8);
      }
      break;
    case (FILE *)0x35:
      local_6c = (FILE *)((uint)local_6c & 0xffffff00);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)&local_6c,5,0,0,"Enter new base name : ");
      iVar10 = -1;
      pcVar14 = local_68;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *pcVar14;
        pcVar14 = pcVar14 + (uint)bVar20 * -2 + 1;
      } while (cVar1 != '\0');
      if (iVar10 != -2) {
        iVar10 = 0;
        pcVar14 = local_1c;
        if (0 < this_ptr->camera_count) {
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(pcVar14,"%s%d");
            in_stack_ffffb8cc = pcVar14;
            core_setedit_cpp_FUN_0057d340();
            iVar10 = iVar10 + 1;
            pcVar14 = pcVar14 + 0x1a4;
          } while (iVar10 < this_ptr->camera_count);
        }
LAB_0057eb3b:
        core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
      }
      break;
    case (FILE *)0x36:
      if (this_ptr->camera_count < 0xfa) {
        shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)(auStack_1274 + 0x14));
        iVar10 = 0;
        pFVar5 = unaff_ESI;
        if (0 < this_ptr->camera_count) {
          do {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80((CStrList *)auStack_1274,(char *)pFVar5);
            iVar10 = iVar10 + 1;
            pFVar5 = pFVar5 + 0xf;
          } while (iVar10 < this_ptr->camera_count);
        }
        in_stack_00000024 =
             shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                       ((CPickList *)auStack_1274,"Clone which camera",-1,0);
        if (-1 < in_stack_00000024) {
          pbVar4 = abStack_47e;
          pFVar5 = unaff_EBX + in_stack_00000024 * 0xf;
          do {
            pbVar4 = pbVar4 + 2;
            bVar2 = *(byte *)&pFVar5->_ptr;
            *pbVar4 = bVar2;
            if (bVar2 == 0) break;
            bVar2 = *(byte *)((int)&pFVar5->_ptr + 1);
            pFVar5 = (FILE *)((int)&pFVar5->_ptr + 2);
            pbVar4[1] = bVar2;
          } while (bVar2 != 0);
          uVar7 = 0xffffffff;
          pbVar4 = abStack_47e + 2;
          do {
            if (uVar7 == 0) break;
            uVar7 = uVar7 - 1;
            bVar2 = *pbVar4;
            pbVar4 = pbVar4 + (uint)bVar20 * -2 + 1;
          } while (bVar2 != 0);
          iVar10 = ~uVar7 - 2;
          if (0 < iVar10) {
            pbVar4 = abStack_47e + ~uVar7;
            do {
              if ((*pbVar4 < 0x30) || (0x39 < *pbVar4)) break;
              iVar10 = iVar10 + -1;
              pbVar4 = pbVar4 + -1;
            } while (0 < iVar10);
          }
          iVar13 = crt_stdlib_c_atoi_FUN_005ffef0(acStack_467 + iVar10);
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_467 + iVar10,"%d",iVar13 + 1);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            do {
              iVar13 = crt_string_c_strcmp_FUN_005fef20
                                 ((char *)&this_ptr->cameras[iVar10 + -1].field17_0x1a0,acStack_474)
              ;
              if (iVar13 == 0) {
                pcVar14 = acStack_470;
                pcVar17 = acStack_770;
                do {
                  cVar1 = *pcVar14;
                  *pcVar17 = cVar1;
                  if (cVar1 == '\0') break;
                  cVar1 = pcVar14[1];
                  pcVar14 = pcVar14 + 2;
                  pcVar17[1] = cVar1;
                  pcVar17 = pcVar17 + 2;
                } while (cVar1 != '\0');
                iVar10 = -1;
                crt_stdio_c_sprintf_FUN_005fdbd0(acStack_470,"%s1",acStack_770);
              }
              iVar10 = iVar10 + 1;
            } while (iVar10 < this_ptr->camera_count);
          }
          iVar10 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                             (g_CEditorToolsPtr,"Enter name of clone",acStack_474,0x1f,1);
          if (iVar10 != 0) {
            puVar8 = (uint *)(in_stack_00000008 + (int)in_stack_00000030 * 0x1a4);
            puVar11 = (uint *)(this_ptr->camera_count * 0x1a4 + in_stack_00000008);
            puVar15 = puVar8;
            puVar18 = puVar11;
            for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
              *puVar18 = *puVar15;
              puVar15 = puVar15 + (uint)bVar20 * -2 + 1;
              puVar18 = puVar18 + (uint)bVar20 * -2 + 1;
            }
            if (puVar11 + 0x40 != puVar8 + 0x40) {
              puVar11[0x40] = puVar8[0x40];
              puVar11[0x41] = puVar8[0x41];
              puVar11[0x42] = puVar8[0x42];
            }
            if (puVar11 + 0x43 != puVar8 + 0x43) {
              puVar11[0x43] = puVar8[0x43];
              puVar11[0x44] = puVar8[0x44];
              puVar11[0x45] = puVar8[0x45];
            }
            puVar11[0x46] = puVar8[0x46];
            puVar11[0x47] = puVar8[0x47];
            puVar11[0x48] = puVar8[0x48];
            puVar11[0x49] = puVar8[0x49];
            puVar11[0x4a] = puVar8[0x4a];
            puVar11[0x4b] = puVar8[0x4b];
            puVar11[0x4c] = puVar8[0x4c];
            puVar11[0x4d] = puVar8[0x4d];
            puVar11[0x4e] = puVar8[0x4e];
            puVar11[0x4f] = puVar8[0x4f];
            puVar11[0x50] = puVar8[0x50];
            puVar11[0x51] = puVar8[0x51];
            puVar11[0x52] = puVar8[0x52];
            puVar11[0x53] = puVar8[0x53];
            puVar11[0x54] = puVar8[0x54];
            puVar11[0x55] = puVar8[0x55];
            puVar11[0x56] = puVar8[0x56];
            puVar11[0x57] = puVar8[0x57];
            if (puVar11 + 0x58 != puVar8 + 0x58) {
              puVar11[0x58] = puVar8[0x58];
              puVar11[0x59] = puVar8[0x59];
              puVar11[0x5a] = puVar8[0x5a];
            }
            puVar11[0x5b] = puVar8[0x5b];
            puVar11[0x5c] = puVar8[0x5c];
            puVar11[0x5d] = puVar8[0x5d];
            puVar11[0x5e] = puVar8[0x5e];
            if (puVar11 + 0x5f != puVar8 + 0x5f) {
              puVar11[0x5f] = puVar8[0x5f];
              puVar11[0x60] = puVar8[0x60];
              puVar11[0x61] = puVar8[0x61];
            }
            if (puVar11 + 0x62 != puVar8 + 0x62) {
              puVar11[0x62] = puVar8[0x62];
              puVar11[99] = puVar8[99];
              puVar11[100] = puVar8[100];
            }
            puVar11[0x65] = puVar8[0x65];
            puVar11[0x66] = puVar8[0x66];
            puVar11[0x67] = puVar8[0x67];
            puVar11[0x68] = puVar8[0x68];
            this_ptr->cameras[this_ptr->camera_count].pvs_count = 0;
            this_ptr->cameras[this_ptr->camera_count].pvs_list = (int *)0x0;
            pcVar14 = acStack_470;
            pcVar17 = (char *)(this_ptr->camera_count * 0x1a4 + in_stack_00000008);
            do {
              cVar1 = *pcVar14;
              *pcVar17 = cVar1;
              if (cVar1 == '\0') break;
              cVar1 = pcVar14[1];
              pcVar14 = pcVar14 + 2;
              pcVar17[1] = cVar1;
              pcVar17 = pcVar17 + 2;
            } while (cVar1 != '\0');
            iVar10 = core_setedit_cpp_UserInputCreate_FUN_0057d660();
            if (iVar10 != 0) {
              this_ptr->camera_count = this_ptr->camera_count + 1;
              core_setedit_cpp_CDemonSet_BuildingThumbnailImages_FUN_00576da0(this_ptr);
            }
          }
        }
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)auStack_125c,0,(uint)in_stack_ffffb8cc,(uint)in_stack_ffffb8d0,
                   in_stack_ffffb8d4,in_stack_ffffb8d8,in_stack_ffffb8dc);
      }
      break;
    case (FILE *)0x37:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(auStack_96c,0));
      if (iVar10 != 0) {
        pFVar5 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_990,"rt");
        if (pFVar5 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe68;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_488,0xff,pFVar5);
        local_34 = (FILE *)0xffffffff;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d\n",&local_34);
        if (local_30 != (C3DSCamera *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xe6c;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_30)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_47e + 2),0xff,pFVar5);
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d,%d\n",&local_24,local_20);
        crt_stdio_c_fgets_FUN_005fefd0(acStack_474,0xff,pFVar5);
        iVar10 = 0;
        if (0 < (int)local_1c) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)auStack_2ea4);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                      ((C3DSLight *)(auStack_2ea4 + 4),pFVar5);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)local_1c);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_470,0xff,pFVar5);
        iVar10 = this_ptr->camera_count;
        for (; (iVar10 < 0xfa && (0 < (int)local_14)); local_14 = (FILE *)((int)local_14 + -1)) {
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0
                    ((C3DSCamera *)(unaff_EBP + this_ptr->camera_count * 0xf),pFVar5);
          crt_stdio_c_sprintf_FUN_005fdbd0
                    (local_1c + this_ptr->camera_count * 0x1a4,"ncam%d",
                     this_ptr->camera_count);
          core_setedit_cpp_FUN_0057d340();
          iVar10 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                             (g_CEditorToolsPtr,"Import this camera?");
          if (iVar10 != 0) {
            this_ptr->camera_count = this_ptr->camera_count + 1;
          }
          iVar10 = this_ptr->camera_count;
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xe7f);
        goto LAB_0057eb3b;
      }
      break;
    case (FILE *)0x38:
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      *(uint *)(iVar13 + 0x15acad) = 1;
      this_ptr_00 = g_CEditorToolsPtr;
      *(uint *)(iVar13 + 0x15acb1) = 1;
      *(uint *)(iVar13 + 0x15aca5) = 1;
      shape_edittool_cpp_CEditorTools_showCenteredProgressDialog_FUN_004a0430
                (this_ptr_00,"Recomputing all PVS");
      pFVar5 = (FILE *)0x0;
      pCVar12 = this_ptr;
      if (0 < this_ptr->camera_count) {
        do {
          crt_stdio_c_sprintf_FUN_005fdbd0(acStack_364,"backdrop\\%s.pvs");
          crt_io_c_deleteFile_FUN_005ff9d0(acStack_374);
          ptr = pCVar12->cameras[0].pvs_list;
          pCVar12->cameras[0].pvs_count = 0;
          if (ptr != (int *)0x0) {
            shape_memdbg_cpp_debugFree_FUN_0050f460(ptr,"..\\core\\setedit.cpp",0xe97);
            pCVar12->cameras[0].pvs_list = (int *)0x0;
          }
          core_set_cpp_CDemonSet_setCameraView_FUN_0056ae50(this_ptr,(int)pFVar5);
          pFVar5 = (FILE *)((int)&pFVar5->_ptr + 1);
          shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
                    (g_CEditorToolsPtr,(float)(int)pFVar5,(float)this_ptr->camera_count);
          pCVar12 = (CDemonSet *)&pCVar12->cameras[0].field17_0x1a0;
          in_stack_00000040 = pFVar5;
        } while ((int)pFVar5 < this_ptr->camera_count);
      }
      shape_edittool_cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(g_CEditorToolsPtr);
      *(uint *)(iVar13 + 0x15aca5) = 0;
      *(uint *)(iVar13 + 0x15acad) = 0;
      *(uint *)(iVar13 + 0x15acb1) = 0;
      in_stack_ffffb8cc = (char *)0x57f5c6;
      in_stack_ffffb8d0 = (char *)this_ptr;
      core_set_cpp_CDemonSet_FUN_0056d2d0(this_ptr);
      break;
    case (FILE *)0x39:
      iVar10 = shape_edittool_cpp_CEditorTools_showFileSelectionDialog_FUN_0049f270
                         (g_CEditorToolsPtr,"Merge2 .LC","models","*.lc",
                          SUB41 /* extract 2-byte value */(auStack_26c,0));
      if (iVar10 != 0) {
        local_28 = engine_dosio_c_getFile_FUN_00481a50("models",acStack_290,"rt");
        if (local_28 == (FILE *)0x0) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeae;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open LC file");
        }
        pFVar5 = local_24;
        crt_stdio_c_fgets_FUN_005fefd0(acStack_488,0xff,local_24);
        local_1c = (char *)0xffffffff;
        crt_stdio_c_fscanf_FUN_005fe7c0(pFVar5,"%d\n",&local_1c);
        if (local_18 != (FILE *)&DAT_00000001) {
          g_CurrentFilename = "..\\core\\setedit.cpp";
          g_CurrentLineNumber = 0xeb2;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Can't merge version %d LC file",local_18)
          ;
        }
        crt_stdio_c_fgets_FUN_005fefd0((char *)(abStack_47e + 2),0xff,local_18);
        crt_stdio_c_fscanf_FUN_005fe7c0(local_14,"%d,%d\n",&stack0xfffffff4,&stack0xfffffff8);
        crt_stdio_c_fgets_FUN_005fefd0(acStack_474,0xff,unaff_EBP);
        iVar10 = 0;
        if (0 < (int)unaff_EBX) {
          do {
            core_setutil_cpp_C3DSLight_ctor_FUN_005862f0((C3DSLight *)&stack0xffffb8c4);
            core_setutil_cpp_C3DSLight_importS3D_FUN_00587710
                      ((C3DSLight *)&stack0xffffb8c8,unaff_EDI);
            iVar10 = iVar10 + 1;
          } while (iVar10 < (int)unaff_EBX);
        }
        crt_stdio_c_fgets_FUN_005fefd0(acStack_470,0xff,unaff_EDI);
        while (0 < (int)this_ptr) {
          core_setutil_cpp_C3DSCamera_ctor_FUN_00585310((C3DSCamera *)(auStack_eb4 + 0x3a4));
          core_setutil_cpp_C3DSCamera_importS3D_FUN_00585ff0((C3DSCamera *)auStack_b0c,unaff_EBX);
          iVar10 = 0;
          if (0 < this_ptr->camera_count) {
            pfVar9 = (float *)(in_stack_00000024 + 0x100);
LAB_0057f7c1:
            local_38 = (C3DSCamera *)(fStack_a08 - *pfVar9);
            local_34 = (FILE *)(fStack_a04 - pfVar9[1]);
            local_30 = (C3DSCamera *)(fStack_a00 - pfVar9[2]);
            iVar13 = iVar10 * 0x1a4 + in_stack_00000024;
            if ((float)0.10000000000000001 <=
                SQRT((float)local_30 * (float)local_30 +
                     (float)local_38 * (float)local_38 + (float)local_34 * (float)local_34))
            goto LAB_0057fa69;
            local_44 = fStack_9fc - *(float *)(iVar13 + 0x10c);
            local_40 = (C3DSCamera *)(fStack_9f8 - *(float *)(iVar13 + 0x110));
            local_3c = (C3DSCamera *)(fStack_9f4 - *(float *)(iVar13 + 0x114));
            if ((float)0.10000000000000001 <=
                SQRT((float)local_3c * (float)local_3c +
                     local_44 * local_44 + (float)local_40 * (float)local_40)) goto LAB_0057fa69;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_664,"%s.raw");
            in_stack_00000018 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_660,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_55c,"%s.raw");
            in_stack_ffffb8d0 = "backdrop";
            iVar10 = 0;
            in_stack_ffffb8cc = (char *)0x57f900;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_558,"wb");
            pFVar5 = in_stack_ffffb900;
            do {
              in_stack_ffffb8d4 = 0x57f913;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000020);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,in_stack_ffffb8e0);
            } while (iVar10 < 0x4b000);
            in_stack_ffffb8d8 = 0x57f945;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_00000028,"..\\core\\setedit.cpp",0xecd);
            in_stack_ffffb8dc = 0x57f958;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xece);
            in_stack_ffffb8e0 = (FILE *)0x57f975;
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_644,"%s.act");
            in_stack_00000038 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_640,"rb");
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_53c,"%s.act");
            iVar10 = 0;
            in_stack_ffffb900 =
                 engine_dosio_c_getFile_FUN_00481a50("backdrop",acStack_538,"wb");
            do {
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(in_stack_00000040);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar5);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_00000040,"..\\core\\setedit.cpp",0xed6);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0
                      (in_stack_ffffb900,"..\\core\\setedit.cpp",0xed7);
          }
LAB_0057fa1d:
          core_setutil_cpp_C3DSCamera_dtor_FUN_00585340((C3DSCamera *)(auStack_b0c + 0x44));
        }
        shape_memdbg_cpp_closeFile_FUN_0050f9b0(unaff_ESI,"..\\core\\setedit.cpp",0xede);
        goto LAB_0057eb3b;
      }
      break;
    case (FILE *)0x41:
      local_5c = (FILE *)((uint)local_5c & 0xffffff00);
      engine_2d_c_getInputWithPrompt_FUN_004032c0
                ((char *)&local_5c,5,0,0,"Enter new unique base name : ");
      iVar10 = -1;
      ppFVar19 = local_58;
      do {
        if (iVar10 == 0) break;
        iVar10 = iVar10 + -1;
        cVar1 = *(char *)ppFVar19;
        ppFVar19 = (FILE **)((int)ppFVar19 + (uint)bVar20 * -2 + 1);
      } while (cVar1 != '\0');
      if (iVar10 != -2) {
        if (0 < this_ptr->camera_count) {
          in_stack_00000030 = in_stack_00000018;
          do {
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_868,"%s.raw");
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_198,"%s%d.raw",local_88,in_stack_0000000c + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_894,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_190,"wb");
            do {
              pFVar21 = pFVar5;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar21);
            } while (iVar10 < 0x4b000);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xef5);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xef6);
            crt_stdio_c_sprintf_FUN_005fdbd0(acStack_884,"%s.act",in_stack_00000014);
            crt_stdio_c_sprintf_FUN_005fdbd0
                      (acStack_180,"%s%d.act",&local_70,in_stack_00000024 + 1);
            pFVar5 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_87c,"rb");
            iVar10 = 0;
            pFVar6 = engine_dosio_c_getFile_FUN_00481a50
                               ("backdrop",acStack_178,"wb");
            do {
              pFVar21 = pFVar5;
              iVar13 = crt_stdio_c_fgetc_FUN_005fe840(pFVar5);
              iVar10 = iVar10 + 1;
              crt_stdio_c_fputc_FUN_006007a0(iVar13,pFVar21);
            } while (iVar10 < 0x300);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar5,"..\\core\\setedit.cpp",0xefe);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\setedit.cpp",0xeff);
            crt_stdio_c_sprintf_FUN_005fdbd0((char *)in_stack_00000030,"%s%d",&local_5c);
            in_stack_00000030 = in_stack_00000030 + 0xf;
          } while ((int)((int)&in_stack_00000038->_ptr + 1) < this_ptr->camera_count);
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
  pfVar9 = pfVar9 + 0x69;
  if (this_ptr->camera_count <= iVar10) goto LAB_0057fa1d;
  goto LAB_0057f7c1;
}
