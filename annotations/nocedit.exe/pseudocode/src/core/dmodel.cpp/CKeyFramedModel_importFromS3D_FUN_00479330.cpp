// Name: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// Address: 00479330
// Address Range: [[00479330, 00479f25]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel * this_ptr, char * filename)

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  SMRGLPrimitiveQuad *pSVar2;
  bool bVar3;
  FILE *file;
  int iVar4;
  int iVar5;
  FILE *pFVar6;
  int extraout_EAX;
  int extraout_EAX_00;
  int extraout_EAX_01;
  uchar *puVar7;
  int extraout_ECX;
  int extraout_ECX_00;
  SMRGLPrimitiveQuad **ppSVar8;
  SMRGLPrimitiveQuad **extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  int extraout_EDX_02;
  int iVar9;
  BADSPACEBASE *in_ESP;
  char *pcVar10;
  char *pcVar11;
  float10 fVar12;
  double dVar13;
  CKeyFramedModel *this_ptr_00;
  int *filename_00;
  int *filename_01;
  char *d3;
  CEditorTools *d5;
  uint uVar14;
  char *in_stack_fffff306;
  uint in_stack_fffff30a;
  uint in_stack_fffff30e;
  uint in_stack_fffff312;
  uint in_stack_fffff316;
  uint in_stack_fffff31a;
  uint in_stack_fffff31e;
  uchar auStack_8dc [300];
  uint local_7b0;
  char local_6ac [260];
  char local_5a8 [260];
  int local_4a4 [65];
  int local_3a0 [64];
  char local_2a0 [256];
  char local_1a0 [256];
  char local_a0 [32];
  uint local_80;
  byte local_7c [4];
  byte local_78 [4];
  float local_74;
  byte local_70 [4];
  byte local_6c [4];
  float local_68;
  byte local_64 [4];
  byte local_60 [4];
  int local_5c;
  int local_58;
  int local_54;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  float local_40;
  float local_3c;
  float local_38;
  int local_34;
  int local_30;
  float local_2c;
  int local_28;
  FILE *local_24;
  FILE *local_20;
  SMRGLPrimitiveQuad *local_1c;
  char local_18 [4];
  byte local_14 [4];
  
  pcVar11 = filename;
  do {
    pcVar10 = pcVar11;
    if (*pcVar11 == ':') goto LAB_0047935f;
    if (*pcVar11 == '\0') break;
    pcVar10 = pcVar11 + 1;
    if (*pcVar10 == ':') goto LAB_0047935f;
    pcVar11 = pcVar11 + 2;
  } while (*pcVar10 != '\0');
  pcVar10 = (char *)0x0;
LAB_0047935f:
  pcVar11 = filename;
  if (pcVar10 == (char *)0x0) {
    do {
      pcVar10 = pcVar11;
      if (*pcVar11 == '\\') goto LAB_00479383;
      if (*pcVar11 == '\0') break;
      pcVar10 = pcVar11 + 1;
      if (*pcVar10 == '\\') goto LAB_00479383;
      pcVar11 = pcVar11 + 2;
    } while (*pcVar10 != '\0');
    pcVar10 = (char *)0x0;
LAB_00479383:
    if (pcVar10 == (char *)0x0) {
      local_20 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
      goto LAB_004793ab;
    }
  }
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename,(char *)0x0,"rt","..\\core\\dmodel.cpp",0x60f);
LAB_004793ab:
  if (local_20 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x613;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s");
  }
  pFVar6 = local_20;
  iVar9 = 1;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
    if (iVar4 < 0) break;
  } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
  iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d\n");
  if (iVar9 == 1) goto LAB_00479441;
LAB_00479417:
  do {
    do {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x61e;
      core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!",filename);
LAB_00479441:
      if ((local_54 < 0x66) || (0x67 < local_54)) {
        g_CurrentFilename = "..\\core\\dmodel.cpp";
        g_CurrentLineNumber = 0x623;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't import S3D file version %d, I can only do up to version %d.",local_54,0x67);
      }
      pFVar6 = local_20;
      iVar9 = 1;
      do {
        iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
        if (iVar4 < 0) break;
      } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
      pcVar11 = (char *)&local_30;
      d5 = (CEditorTools *)&local_4c;
      pcVar10 = (char *)&local_58;
      d3 = (char *)&local_34;
      filename_01 = &local_48;
      filename_00 = &local_50;
      iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d,%d,%d,%d,%d,%d,%d\n");
    } while (iVar9 != 7);
    uVar14 = 0x4794d0;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
              (this_ptr,local_34,local_48,local_50,1,local_4c);
    iVar9 = 1;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Skipping parts");
    pFVar6 = local_20;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    for (iVar9 = 0; pFVar6 = local_20, iVar9 < local_58; iVar9 = iVar9 + 1) {
      iVar4 = 1;
      do {
        iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
        if (iVar5 < 0) break;
      } while ((iVar5 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
    }
    this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
    this_ptr->part_list[0].poly_count = this_ptr->poly_count;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing textures",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffff37c);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffff37c,"Don't copy textures.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffff37c,"Copy textures from another directory to art directory.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              ((CStrList *)&stack0xfffff37c,"Copy textures from path specified in .S3D file to art directory.");
    local_28 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         ((CPickList *)&stack0xfffff37c,"What do you want to do about the textures?",-1,0);
    this_ptr_00 = this_ptr;
    if (local_28 < 0) {
LAB_00479719:
      core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr_00);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff37c,0,(uint)filename_00,(uint)filename_01,(uint)d3,
                 (uint)pcVar10,(uint)d5);
      return;
    }
    if (local_28 == 1) {
      crt_string_c_splitpath_FUN_005ff178(filename,local_18,local_1a0,(char *)0x0,(char *)0x0);
      crt_file_c_makepath_FUN_005febfc(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
      iVar9 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter directory to copy textures from",local_5a8,0x104,1);
      if (iVar9 == 0) goto LAB_00479719;
      crt_string_c_splitpath_FUN_005ff178(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
    }
    pFVar6 = local_20;
    iVar9 = 1;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    for (iVar9 = 0; iVar9 < this_ptr->texture_count; iVar9 = iVar9 + 1) {
      pcVar11 = crt_stdio_c_fgets_FUN_005fefd0(local_6ac,0x104,local_20);
      if (pcVar11 == (char *)0x0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff37c,0,(uint)filename_01,(uint)d3,(uint)pcVar10,(uint)d5
                   ,uVar14);
        goto LAB_00479417;
      }
      pcVar11 = local_6ac;
      do {
        pcVar10 = pcVar11;
        if (*pcVar11 == '\n') goto LAB_0047983f;
        if (*pcVar11 == '\0') break;
        pcVar10 = pcVar11 + 1;
        if (*pcVar10 == '\n') goto LAB_0047983f;
        pcVar11 = pcVar11 + 2;
      } while (*pcVar10 != '\0');
      pcVar10 = (char *)0x0;
LAB_0047983f:
      if (pcVar10 != (char *)0x0) {
        *pcVar10 = '\0';
      }
      crt_string_c_splitpath_FUN_005ff178
                (local_6ac,(char *)0x0,(char *)0x0,(char *)local_3a0,local_2a0);
      if (local_28 != 0) {
        if (local_28 == 1) {
          crt_file_c_makepath_FUN_005febfc
                    ((char *)&local_7b0,local_18,local_1a0,(char *)local_3a0,local_2a0);
        }
        else if (local_28 == 2) {
          pcVar11 = local_6ac;
          pcVar10 = (char *)&local_7b0;
          do {
            cVar1 = *pcVar11;
            *pcVar10 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar11[1];
            pcVar11 = pcVar11 + 2;
            pcVar10[1] = cVar1;
            pcVar10 = pcVar10 + 2;
          } while (cVar1 != '\0');
        }
        else {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x6a9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        this_ptr_00 = (CKeyFramedModel *)local_4a4;
        crt_file_c_makepath_FUN_005febfc
                  ((char *)this_ptr_00,(char *)0x0,"art",(char *)local_3a0,local_2a0);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s");
        d3 = "rb";
        filename_01 = (int *)0x0;
        filename_00 = &local_7b0;
        pFVar6 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           ((char *)filename_00,(char *)0x0,"rb","..\\core\\dmodel.cpp"
                            ,0x5ef);
        if (pFVar6 != (FILE *)0x0) {
          d3 = (char *)0x0;
          filename_01 = local_4a4;
          filename_00 = (int *)0x47992e;
          local_24 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               ((char *)filename_01,(char *)0x0,"wb",
                                "..\\core\\dmodel.cpp",0x5f2);
          if (local_24 == (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\dmodel.cpp",0x5f4);
          }
          else {
            while (iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6), -1 < iVar4) {
              crt_stdio_c_fputc_FUN_006007a0(iVar4,local_24);
            }
            if (((pFVar6->_flag & 0x20) == 0) && ((local_24->_flag & 0x20) == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            d3 = (char *)0x479a24;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\dmodel.cpp",0x600);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\core\\dmodel.cpp",0x601);
            if (bVar3) goto LAB_004797c3;
          }
        }
        pcVar10 = (char *)0x47996d;
        d5 = g_CEditorToolsPtr;
        iVar4 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"I can't copy %s to %s.  Continue import anyway?",&local_7b0,
                           local_4a4);
        if (iVar4 == 0) goto LAB_00479719;
      }
LAB_004797c3:
      in_stack_fffff306 = "raw";
      pcVar11 = (char *)local_3a0;
      uVar14 = 0;
      d5 = (CEditorTools *)0x0;
      pcVar10 = this_ptr->texture_list[iVar9].base.texture_name;
      d3 = (char *)0x4797f7;
      crt_file_c_makepath_FUN_005febfc(pcVar10,(char *)0x0,(char *)0x0,pcVar11,"raw");
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing polygons",0,0);
    pFVar6 = local_20;
    iVar9 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    for (iVar9 = 0; iVar9 < this_ptr->poly_count; iVar9 = iVar9 + 1) {
      iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (local_20,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_44,&local_80,&local_68,
                         &local_74,local_7c,local_64,local_70,local_78,local_60,local_6c);
      if (iVar4 != 10) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff37c,0,(uint)pcVar11,(uint)in_stack_fffff306,
                   in_stack_fffff30a,in_stack_fffff30e,in_stack_fffff312);
        goto LAB_00479417;
      }
      if (local_44 < 0) {
        local_44 = 0;
      }
      ppSVar8 = this_ptr->poly_vert_list + iVar9 * 0x12;
      this_ptr->poly_texture_index_list[iVar9] = local_44;
      ppSVar8[1] = (SMRGLPrimitiveQuad *)0x3;
      ppSVar8[5] = (SMRGLPrimitiveQuad *)0x0;
      pSVar2 = ppSVar8[5];
      ppSVar8[4] = pSVar2;
      ppSVar8[3] = pSVar2;
      ppSVar8[2] = pSVar2;
      iVar4 = 0;
      while (iVar4 < (int)ppSVar8[1]) {
        ppSVar8[iVar4 * 3 + 6] = (SMRGLPrimitiveQuad *)(&local_80)[iVar4];
        fVar12 = (float10)65536;
        dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float10)(&local_68)[iVar4] * fVar12));
        local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
        ppSVar8[iVar4 * 3 + 7] = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
        dVar13 = crt_math_c_round_FUN_005fe6b0
                           ((double)(fVar12 * (float10)(&local_74)[extraout_ECX]));
        local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
        ppSVar8[iVar4 * 3 + 8] = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
        ppSVar8 = extraout_EDX;
        iVar4 = extraout_ECX_00 + 1;
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing vertices",0,0);
    pFVar6 = local_20;
    iVar9 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    iVar9 = 0;
    while( true ) {
      pFVar6 = local_20;
      if (this_ptr->vertex_count * this_ptr->frame_count <= iVar9) {
        iVar9 = local_5c + 1;
        goto LAB_00479b74;
      }
      iVar4 = crt_stdio_c_fscanf_FUN_005fe7c0
                        (local_20,"%f,%f,%f\n",&local_40,&local_3c,&local_38);
      if (iVar4 != 3) break;
      fVar12 = (float10)256;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float10)local_40 * fVar12));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
      *(SMRGLPrimitiveQuad **)(extraout_EAX + extraout_EDX_00) = local_1c;
      in_stack_fffff306 = (char *)0x479be4;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float10)local_3c * fVar12));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
      *(SMRGLPrimitiveQuad **)(extraout_EAX_00 + extraout_EDX_01 + 4) = local_1c;
      pcVar11 = (char *)0x479c06;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)((float10)local_38 * fVar12));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
      iVar9 = iVar9 + 1;
      *(SMRGLPrimitiveQuad **)(extraout_EDX_02 + extraout_EAX_01 + 8) = local_1c;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              ((CPickList *)&stack0xfffff37c,0,(uint)pcVar11,(uint)in_stack_fffff306,
               in_stack_fffff30a,in_stack_fffff30e,in_stack_fffff312);
  } while( true );
LAB_00479b74:
  if (iVar9 < 1) goto LAB_00479c53;
  do {
    iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
    if (iVar4 < 0) goto LAB_00479c53;
  } while (iVar4 != 10);
  iVar9 = iVar9 + -1;
  goto LAB_00479b74;
LAB_00479c53:
  pFVar6 = local_20;
  for (iVar9 = local_30 + 1; 0 < iVar9; iVar9 = iVar9 + -1) {
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) goto LAB_00479c73;
    } while (iVar4 != 10);
  }
LAB_00479c73:
  do {
    pFVar6 = local_20;
    iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20," %s %d\n",local_a0,local_14);
    if (iVar9 != 2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar6,"..\\core\\dmodel.cpp",0x741);
      core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
      this_ptr->transparent_pixel_flag = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff37c,0,in_stack_fffff30e,in_stack_fffff312,
                 in_stack_fffff316,in_stack_fffff31a,in_stack_fffff31e);
      return;
    }
    iVar9 = crt_string_c_stricmp_FUN_005fe7f0(local_a0,"matProp");
    pFVar6 = local_20;
    if (iVar9 != 0) {
      for (uVar14 = (uint)local_14[0]; 0 < (int)uVar14; uVar14 = uVar14 - 1) {
        do {
          iVar9 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
          if (iVar9 < 0) goto LAB_00479c73;
        } while (iVar9 != 10);
      }
      goto LAB_00479c73;
    }
    if ((uint)local_14[0] + (this_ptr->texture_count + 1) * -3 != 0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x70e;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid matProp format!");
    }
    pFVar6 = local_20;
    iVar9 = 3;
    do {
      iVar4 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
      if (iVar4 < 0) break;
    } while ((iVar4 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    for (iVar9 = 0; pFVar6 = local_20, iVar9 < this_ptr->texture_count; iVar9 = iVar9 + 1) {
      local_2c = 0.0;
      crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%f, %*f, %*f\n",&local_2c,pcVar11);
      iVar4 = 1;
      do {
        iVar5 = crt_stdio_c_fgetc_FUN_005fe840(pFVar6);
        file = local_20;
        if (iVar5 < 0) break;
      } while ((iVar5 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      iVar4 = 1;
      do {
        iVar5 = crt_stdio_c_fgetc_FUN_005fe840(file);
        if (iVar5 < 0) break;
      } while ((iVar5 != 10) || (iVar4 = iVar4 + -1, 0 < iVar4));
      local_2c = (local_2c + (float)-0.25) * (float)1.3333333333333299;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if (1.0 < local_2c) {
        local_2c = 1.0;
      }
      pcVar11 = (char *)0x479dbb;
      dVar13 = crt_math_c_round_FUN_005fe6b0((double)(local_2c * 255f));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(dVar13);
      auStack_8dc[iVar9] = (uchar)local_1c;
    }
    puVar7 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                       (this_ptr->poly_count,"..\\core\\dmodel.cpp",0x725);
    this_ptr->env_map_opac_list = puVar7;
    if (puVar7 == (uchar *)0x0) {
      pcVar11 = "Out of memory for envMapOpacList";
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x726;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    bVar3 = true;
    for (iVar9 = 0; iVar9 < this_ptr->poly_count; iVar9 = iVar9 + 1) {
      this_ptr->env_map_opac_list[iVar9] = auStack_8dc[this_ptr->poly_texture_index_list[iVar9]];
      if (5 < this_ptr->env_map_opac_list[iVar9]) {
        bVar3 = false;
      }
    }
    if (bVar3) {
      g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
      g_CurrentDebugLine = 0x731;
      crt_memory_c_free_FUN_005fe659(this_ptr->env_map_opac_list);
      this_ptr->env_map_opac_list = (uchar *)0x0;
    }
  } while( true );
}
