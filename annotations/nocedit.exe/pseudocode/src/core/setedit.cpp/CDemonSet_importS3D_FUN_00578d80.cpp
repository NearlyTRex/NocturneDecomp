// Name: core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80
// Address: 00578d80
// Address Range: [[00578d80, 0057a0b4]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80()

#include "nocturne.h"

/* Signature: void core_setedit.cpp_CDemonSet_importS3D(CDemonSet* param_1, uint param_2, int*
   param_3) */

void core_setedit_cpp_CDemonSet_importS3D_FUN_00578d80
               (uint param_1,uint param_2,int unaff_EBX,uint param_4,int param_5,
               int param_6,int param_7,int param_8,uint param_9,FILE *param_10,FILE *param_11,
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
  uint *puVar14;
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
  uint in_stack_ffffdc18;
  float fStack_22e4;
  float fStack_22e0;
  float fStack_22dc;
  float fStack_22d8;
  float fStack_22d4;
  float fStack_22d0;
  float fStack_22cc;
  char acStack_22c8 [4];
  char acStack_22c4 [4];
  uint auStack_22c0 [63];
  char acStack_21c4 [4];
  uint auStack_21c0 [999];
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
  uint auStack_11f4 [320];
  uint auStack_cf4 [32];
  uint local_c74 [32];
  int iStack_bf4;
  int iStack_bf0;
  int iStack_bec;
  int local_be8;
  CDemonFilter *local_be4;
  CDemonFilter *local_be0;
  CDemonFilter *pCStack_bdc;
  uint auStack_bd8 [23];
  byte auStack_b7c [16];
  byte auStack_b6c [8];
  CPickList CStack_b64;
  byte auStack_65c [4];
  char acStack_658 [16];
  char acStack_648 [240];
  char acStack_558 [16];
  char acStack_548 [260];
  char acStack_444 [4];
  char acStack_440 [236];
  char acStack_354 [4];
  char acStack_350 [4];
  byte auStack_34c [304];
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
  byte local_2c [4];
  byte local_28 [4];
  byte local_24 [4];
  byte local_20 [4];
  byte local_1c [4];
  byte local_18 [4];
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
            *(uint *)((int)&DAT_03364d18 + iVar4) = 0;
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
    pcVar16 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
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
                     *(uint *)(iVar4 + 0x19a30));
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
          *(uint *)pcVar12 = in_stack_ffffdc18;
          puVar14 = (uint *)&stack0xffffdc1c;
          pcVar16 = pcVar12 + 4;
          for (iVar3 = 0x40; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(uint *)pcVar16 = *puVar14;
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
            *(uint *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          *(ushort *)pcVar16 = *(ushort *)puVar14;
          pcVar16 = pcVar12 + (uint)bVar17 * -8 + 0x228;
          *(char (*) [4])(pcVar12 + 0x224) = acStack_21c4;
          *(uint *)pcVar16 = auStack_21c0[(uint)bVar17 * -2];
          *(uint *)(pcVar16 + (uint)bVar17 * -8 + 4) =
               auStack_21c0[(uint)bVar17 * -2 + (uint)bVar17 * -2 + 1];
          *(uint *)(pcVar16 + (uint)bVar17 * -8 + 4 + (uint)bVar17 * -8 + 4) =
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
            *(uint *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          puVar14 = auStack_cf4;
          pcVar16 = pcVar12 + 0x16f4;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(uint *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          puVar14 = local_c74;
          pcVar16 = pcVar12 + 0x1774;
          for (iVar3 = 0x20; iVar3 != 0; iVar3 = iVar3 + -1) {
            *(uint *)pcVar16 = *puVar14;
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
            *(uint *)pcVar16 = *puVar14;
            puVar14 = puVar14 + (uint)bVar17 * -2 + 1;
            pcVar16 = pcVar16 + (uint)bVar17 * -8 + 4;
          }
          *(CStrList_vtable **)(pcVar12 + 0x1890) = CStack_b64.base_strlist.vtable;
          *(uint *)(pcVar12 + 0x1894) = CStack_b64.field1_0x10._0_4_;
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
