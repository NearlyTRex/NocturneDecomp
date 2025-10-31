// Name: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// Address: 00479330
// Address Range: [[00479330, 00479f25]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel * this_ptr, char * filename)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 (0047cbc0) at 0047d91b [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061fc20
//   TerminatedCString s_rb_0061fc33
//   TerminatedCString s_core_dmodel_cpp_0061fc36
//   TerminatedCString s_wb_0061fc49
//   TerminatedCString s_core_dmodel_cpp_0061fc4c
//   TerminatedCString s_core_dmodel_cpp_0061fc5f
//   TerminatedCString s_core_dmodel_cpp_0061fc72
//   TerminatedCString s_core_dmodel_cpp_0061fc85
//   TerminatedCString s_rt_0061fc98
//   TerminatedCString s_rt_0061fc9b
//   TerminatedCString s_models_0061fc9e
//   TerminatedCString s_core_dmodel_cpp_0061fca5
//   TerminatedCString s_Can_t_open_s_0061fcb8
//   TerminatedCString s_d_0061fcc6
//   TerminatedCString s_core_dmodel_cpp_0061fcca
//   TerminatedCString s_s_is_corrupt_0061fcdd
//   TerminatedCString s_core_dmodel_cpp_0061fcec
//   TerminatedCString s_Can_t_import_S3D_file_ve_0061fcff
//   TerminatedCString s_d_d_d_d_d_d_d_0061fd41
//   TerminatedCString s_Skipping_parts_0061fd7c
//   TerminatedCString s_Importing_textures_0061fd8b
//   TerminatedCString s_Don_t_copy_textures_0061fd9e
//   TerminatedCString s_Copy_textures_from_anoth_0061fdb3
//   TerminatedCString s_Copy_textures_from_path__0061fdea
//   TerminatedCString s_What_do_you_want_to_do_a_0061fe2b
//   TerminatedCString s_Enter_directory_to_copy__0061fe56
//   TerminatedCString s_core_dmodel_cpp_0061fe7c
//   TerminatedCString s_Hell_froze_0061fe8f
//   TerminatedCString s_art_0061fe9b
//   TerminatedCString s_Copying_s_s_0061fe9f
//   TerminatedCString s_I_can_t_copy_s_to_s_Cont_0061feb0
//   TerminatedCString s_raw_0061fee0
//   TerminatedCString s_Importing_polygons_0061fee4
//   TerminatedCString s_d_d_f_f_d_f_f_d_f_f_0061fef7
//   TerminatedCString s_Importing_vertices_0061ff19
//   TerminatedCString s_f_f_f_0061ff2c
//   TerminatedCString s_s_d_0061ff36
//   TerminatedCString s_matProp_0061ff3e
//   TerminatedCString s_core_dmodel_cpp_0061ff46
//   TerminatedCString s_Invalid_matProp_format_0061ff59
//   TerminatedCString s_f_f_f_0061ff71
//   TerminatedCString s_core_dmodel_cpp_0061ff7f
//   TerminatedCString s_core_dmodel_cpp_0061ff92
//   TerminatedCString s_Out_of_memory_for_envMap_0061ffa5
//   TerminatedCString s_core_dmodel_cpp_0061ffc6
//   TerminatedCString s_core_dmodel_cpp_0061ffd9
//   double DOUBLE_0061fff3 = -0.25
//   double DOUBLE_0061fffb = 1.33333333333333
//   float FLOAT_00620003 = 255
//   double DOUBLE_0062000b = 256
//   double DOUBLE_00620013 = 65536
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   char* g_CurrentDebugFilename = 0067d200
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_CurrentDebugLine
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_file.c_makepath_FUN_005febfc
//   crt_math.c_round_FUN_005fe6b0
//   crt_memory.c_free_FUN_005fe659
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fputc_FUN_006007a0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   crt_string.c_splitpath_FUN_005ff178
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_2d.c_clearInputAndWait_FUN_00403260
//   engine_2d.c_drawText_FUN_00401fd0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0
//   wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  SMRGLPrimitiveQuad *pSVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  FILE *file;
  int iVar6;
  int iVar7;
  FILE *pFVar8;
  uchar *puVar9;
  int extraout_ECX;
  int extraout_ECX_00;
  SMRGLPrimitiveQuad **ppSVar10;
  undefined4 extraout_EDX;
  undefined4 uVar11;
  int iVar12;
  uint uVar13;
  BADSPACEBASE *in_ESP;
  char *pcVar14;
  char *pcVar15;
  float10 fVar16;
  float10 fVar17;
  double dVar18;
  FILE *in_stack_fffff3d8;
  char *in_stack_fffff3dc;
  float *in_stack_fffff3e0;
  char *in_stack_fffff3e4;
  CPickList *in_stack_fffff3e8;
  uint in_stack_fffff3ec;
  char *in_stack_fffff3f0;
  char *in_stack_fffff3f4;
  uint in_stack_fffff3f8;
  uint in_stack_fffff3fc;
  uint in_stack_fffff400;
  uint in_stack_fffff404;
  uint in_stack_fffff408;
  uint in_stack_fffff40c;
  uchar auStack_8dc [300];
  char local_7b0 [260];
  char local_6ac [260];
  char local_5a8 [260];
  FILE local_4a4 [9];
  char local_3a0 [256];
  char local_2a0 [256];
  char local_1a0 [256];
  char local_a0 [32];
  float local_80 [9];
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
  byte local_14;
  
  pcVar15 = filename;
  do {
    pcVar14 = pcVar15;
    if (*pcVar15 == ':') goto LAB_0047935f;
    if (*pcVar15 == '\0') break;
    pcVar14 = pcVar15 + 1;
    if (*pcVar14 == ':') goto LAB_0047935f;
    pcVar15 = pcVar15 + 2;
  } while (*pcVar14 != '\0');
  pcVar14 = (char *)0x0;
LAB_0047935f:
  pcVar15 = filename;
  if (pcVar14 == (char *)0x0) {
    do {
      pcVar14 = pcVar15;
      if (*pcVar15 == '\\') goto LAB_00479383;
      if (*pcVar15 == '\0') break;
      pcVar14 = pcVar15 + 1;
      if (*pcVar14 == '\\') goto LAB_00479383;
      pcVar15 = pcVar15 + 2;
    } while (*pcVar14 != '\0');
    pcVar14 = (char *)0x0;
LAB_00479383:
    if (pcVar14 == (char *)0x0) {
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
  pFVar8 = local_20;
  iVar12 = 1;
  do {
    iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar6 < 0) break;
  } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
  iVar12 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d\n");
  if (iVar12 == 1) goto LAB_00479441;
LAB_00479417:
  do {
    do {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x61e;
      core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!");
LAB_00479441:
      if ((local_54 < 0x66) || (0x67 < local_54)) {
        g_CurrentFilename = "..\\core\\dmodel.cpp";
        g_CurrentLineNumber = 0x623;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Can't import S3D file version %d, I can only do up to version %d.");
      }
      pFVar8 = local_20;
      iVar12 = 1;
      do {
        iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar6 < 0) break;
      } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
      iVar12 = crt_stdio_c_fscanf_FUN_005fe7c0
                         (local_20,"%d,%d,%d,%d,%d,%d,%d\n",&local_50,&local_48,&local_34);
    } while (iVar12 != 7);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
              (this_ptr,local_34,local_48,local_50,1,local_4c);
    iVar12 = 1;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Skipping parts");
    pFVar8 = local_20;
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
    for (iVar12 = 0; pFVar8 = local_20, iVar12 < local_58; iVar12 = iVar12 + 1) {
      iVar6 = 1;
      do {
        iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        if (iVar7 < 0) break;
      } while ((iVar7 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
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
    if (local_28 < 0) {
LAB_00479719:
      core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff37c,0,in_stack_fffff3fc,in_stack_fffff400,
                 in_stack_fffff404,in_stack_fffff408,in_stack_fffff40c);
      return;
    }
    if (local_28 == 1) {
      crt_string_c_splitpath_FUN_005ff178(filename,local_18,local_1a0,(char *)0x0,(char *)0x0);
      crt_file_c_makepath_FUN_005febfc(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
      iVar12 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,"Enter directory to copy textures from",local_5a8,0x104,1);
      if (iVar12 == 0) goto LAB_00479719;
      crt_string_c_splitpath_FUN_005ff178(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
    }
    pFVar8 = local_20;
    iVar12 = 1;
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
    for (iVar12 = 0; iVar12 < this_ptr->texture_count; iVar12 = iVar12 + 1) {
      pcVar15 = crt_stdio_c_fgets_FUN_005fefd0(local_6ac,0x104,local_20);
      if (pcVar15 == (char *)0x0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)&stack0xfffff37c,0,(uint)in_stack_fffff3d8,(uint)in_stack_fffff3dc,
                   (uint)in_stack_fffff3e0,(uint)in_stack_fffff3e4,(uint)in_stack_fffff3e8);
        goto LAB_00479417;
      }
      pcVar15 = local_6ac;
      do {
        pcVar14 = pcVar15;
        if (*pcVar15 == '\n') goto LAB_0047983f;
        if (*pcVar15 == '\0') break;
        pcVar14 = pcVar15 + 1;
        if (*pcVar14 == '\n') goto LAB_0047983f;
        pcVar15 = pcVar15 + 2;
      } while (*pcVar14 != '\0');
      pcVar14 = (char *)0x0;
LAB_0047983f:
      if (pcVar14 != (char *)0x0) {
        *pcVar14 = '\0';
      }
      crt_string_c_splitpath_FUN_005ff178(local_6ac,(char *)0x0,(char *)0x0,local_3a0,local_2a0);
      if (local_28 != 0) {
        if (local_28 == 1) {
          crt_file_c_makepath_FUN_005febfc(local_7b0,local_18,local_1a0,local_3a0,local_2a0);
        }
        else if (local_28 == 2) {
          pcVar15 = local_6ac;
          pcVar14 = local_7b0;
          do {
            cVar1 = *pcVar15;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar15[1];
            pcVar15 = pcVar15 + 2;
            pcVar14[1] = cVar1;
            pcVar14 = pcVar14 + 2;
          } while (cVar1 != '\0');
        }
        else {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x6a9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        crt_file_c_makepath_FUN_005febfc
                  ((char *)local_4a4,(char *)0x0,"art",local_3a0,local_2a0);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s");
        in_stack_fffff3dc = "rb";
        in_stack_fffff3d8 = (FILE *)0x0;
        pFVar8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_7b0,(char *)0x0,"rb","..\\core\\dmodel.cpp",0x5ef);
        if (pFVar8 != (FILE *)0x0) {
          in_stack_fffff3dc = (char *)0x0;
          in_stack_fffff3d8 = local_4a4;
          local_24 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               ((char *)in_stack_fffff3d8,(char *)0x0,"wb",
                                "..\\core\\dmodel.cpp",0x5f2);
          if (local_24 == (FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\dmodel.cpp",0x5f4);
          }
          else {
            while (iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8), -1 < iVar6) {
              crt_stdio_c_fputc_FUN_006007a0(iVar6,local_24);
            }
            if (((pFVar8->_flag & 0x20) == 0) && ((local_24->_flag & 0x20) == 0)) {
              bVar3 = true;
            }
            else {
              bVar3 = false;
            }
            in_stack_fffff3dc = (char *)0x479a24;
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\dmodel.cpp",0x600);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\core\\dmodel.cpp",0x601);
            if (bVar3) goto LAB_004797c3;
          }
        }
        iVar6 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"I can't copy %s to %s.  Continue import anyway?");
        if (iVar6 == 0) goto LAB_00479719;
      }
LAB_004797c3:
      in_stack_fffff3f4 = "raw";
      in_stack_fffff3f0 = local_3a0;
      in_stack_fffff3ec = 0;
      in_stack_fffff3e8 = (CPickList *)0x0;
      in_stack_fffff3e4 = this_ptr->texture_list[iVar12].base.texture_name;
      in_stack_fffff3e0 = (float *)0x4797f7;
      crt_file_c_makepath_FUN_005febfc
                (in_stack_fffff3e4,(char *)0x0,(char *)0x0,in_stack_fffff3f0,"raw");
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing polygons",0,0);
    pFVar8 = local_20;
    iVar12 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
    for (iVar12 = 0; iVar12 < this_ptr->poly_count; iVar12 = iVar12 + 1) {
      iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n");
      if (iVar6 != 10) {
        in_stack_fffff3e0 = (float *)0x0;
        in_stack_fffff3dc = &stack0xfffff37c;
        in_stack_fffff3d8 = (FILE *)0x47970a;
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                  ((CPickList *)in_stack_fffff3dc,0,(uint)in_stack_fffff3e4,(uint)in_stack_fffff3e8,
                   in_stack_fffff3ec,(uint)in_stack_fffff3f0,(uint)in_stack_fffff3f4);
        goto LAB_00479417;
      }
      if (local_44 < 0) {
        local_44 = 0;
      }
      ppSVar10 = this_ptr->poly_vert_list + iVar12 * 0x12;
      this_ptr->poly_texture_index_list[iVar12] = local_44;
      ppSVar10[1] = (SMRGLPrimitiveQuad *)0x3;
      ppSVar10[5] = (SMRGLPrimitiveQuad *)0x0;
      pSVar2 = ppSVar10[5];
      ppSVar10[4] = pSVar2;
      ppSVar10[3] = pSVar2;
      ppSVar10[2] = pSVar2;
      iVar6 = 0;
      while (iVar6 < (int)ppSVar10[1]) {
        pSVar2 = (SMRGLPrimitiveQuad *)local_80[iVar6];
        ppSVar10[iVar6 * 3 + 6] = pSVar2;
        fVar16 = (float10)DOUBLE_00620013;
        fVar17 = (float10)local_80[iVar6 + 6] * fVar16;
        dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(ppSVar10,pSVar2));
        local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar17);
        ppSVar10[iVar6 * 3 + 7] = local_1c;
        fVar16 = fVar16 * (float10)local_80[extraout_ECX + 3];
        dVar18 = crt_math_c_round_FUN_005fe6b0
                           ((double)CONCAT44((int)((ulonglong)dVar18 >> 0x20),local_1c));
        local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar16);
        ppSVar10[iVar6 * 3 + 8] = (SMRGLPrimitiveQuad *)(int)ROUND(fVar16);
        ppSVar10 = (SMRGLPrimitiveQuad **)((ulonglong)dVar18 >> 0x20);
        iVar6 = extraout_ECX_00 + 1;
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing vertices",0,0);
    pFVar8 = local_20;
    iVar12 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
    iVar12 = 0;
    while( true ) {
      pFVar8 = local_20;
      if (this_ptr->vertex_count * this_ptr->frame_count <= iVar12) {
        iVar12 = local_5c + 1;
        goto LAB_00479b74;
      }
      in_stack_fffff3e0 = &local_40;
      in_stack_fffff3dc = "%f,%f,%f\n";
      in_stack_fffff3d8 = local_20;
      iVar6 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%f,%f,%f\n");
      if (iVar6 != 3) break;
      fVar16 = (float10)DOUBLE_0062000b;
      fVar17 = (float10)local_40 * fVar16;
      dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar12 * 0xc,this_ptr->vertex_list));
      iVar6 = (int)((ulonglong)dVar18 >> 0x20);
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar17);
      *(SMRGLPrimitiveQuad **)(SUB84(dVar18,0) + iVar6) = local_1c;
      fVar17 = (float10)local_3c * fVar16;
      in_stack_fffff3f0 = (char *)0x479be4;
      dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,this_ptr->vertex_list));
      iVar6 = (int)((ulonglong)dVar18 >> 0x20);
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar17);
      *(SMRGLPrimitiveQuad **)(SUB84(dVar18,0) + iVar6 + 4) = local_1c;
      fVar16 = (float10)local_38 * fVar16;
      in_stack_fffff3f4 = (char *)0x479c06;
      dVar18 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar6,this_ptr->vertex_list));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar16);
      iVar12 = iVar12 + 1;
      *(SMRGLPrimitiveQuad **)((int)((ulonglong)dVar18 >> 0x20) + SUB84(dVar18,0) + 8) = local_1c;
    }
    in_stack_fffff3ec = 0;
    in_stack_fffff3e8 = (CPickList *)&stack0xfffff37c;
    in_stack_fffff3e4 = (char *)0x479c4b;
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
              (in_stack_fffff3e8,0,(uint)in_stack_fffff3f0,(uint)in_stack_fffff3f4,in_stack_fffff3f8
               ,in_stack_fffff3fc,in_stack_fffff400);
  } while( true );
LAB_00479b74:
  if (iVar12 < 1) goto LAB_00479c53;
  do {
    iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
    if (iVar6 < 0) goto LAB_00479c53;
  } while (iVar6 != 10);
  iVar12 = iVar12 + -1;
  goto LAB_00479b74;
LAB_00479c53:
  pFVar8 = local_20;
  for (iVar12 = local_30 + 1; 0 < iVar12; iVar12 = iVar12 + -1) {
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) goto LAB_00479c73;
    } while (iVar6 != 10);
  }
LAB_00479c73:
  do {
    pFVar8 = local_20;
    iVar12 = crt_stdio_c_fscanf_FUN_005fe7c0(local_20," %s %d\n");
    if (iVar12 != 2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(pFVar8,"..\\core\\dmodel.cpp",0x741);
      core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
      this_ptr->transparent_pixel_flag = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
                ((CPickList *)&stack0xfffff37c,0,in_stack_fffff3fc,in_stack_fffff400,
                 in_stack_fffff404,in_stack_fffff408,in_stack_fffff40c);
      return;
    }
    iVar12 = crt_string_c_stricmp_FUN_005fe7f0(local_a0,"matProp");
    pFVar8 = local_20;
    if (iVar12 != 0) {
      for (uVar13 = (uint)local_14; 0 < (int)uVar13; uVar13 = uVar13 - 1) {
        do {
          iVar12 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
          if (iVar12 < 0) goto LAB_00479c73;
        } while (iVar12 != 10);
      }
      goto LAB_00479c73;
    }
    if ((uint)local_14 + (this_ptr->texture_count + 1) * -3 != 0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x70e;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid matProp format!");
    }
    pFVar8 = local_20;
    iVar12 = 3;
    do {
      iVar6 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
      if (iVar6 < 0) break;
    } while ((iVar6 != 10) || (iVar12 = iVar12 + -1, 0 < iVar12));
    for (iVar12 = 0; pFVar8 = local_20, iVar12 < this_ptr->texture_count; iVar12 = iVar12 + 1) {
      local_2c = 0.0;
      crt_stdio_c_fscanf_FUN_005fe7c0(local_20,"%f, %*f, %*f\n");
      iVar6 = 1;
      uVar11 = extraout_EDX;
      do {
        iVar7 = crt_stdio_c_fgetc_FUN_005fe840(pFVar8);
        file = local_20;
        if (iVar7 < 0) break;
      } while ((iVar7 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
      iVar6 = 1;
      do {
        iVar7 = crt_stdio_c_fgetc_FUN_005fe840(file);
        if (iVar7 < 0) break;
      } while ((iVar7 != 10) || (iVar6 = iVar6 + -1, 0 < iVar6));
      local_2c = (local_2c + (float)DOUBLE_0061fff3) * (float)DOUBLE_0061fffb;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      bVar3 = NAN(local_2c);
      bVar4 = 1.0 < local_2c;
      bVar5 = local_2c == 1.0;
      if (bVar4) {
        local_2c = 1.0;
      }
      fVar17 = (float10)local_2c * (float10)FLOAT_00620003;
      in_stack_fffff3fc = 0x479dbb;
      crt_math_c_round_FUN_005fe6b0
                ((double)CONCAT44(uVar11,CONCAT22((short)((uint)iVar7 >> 0x10),
                                                  (ushort)bVar4 << 8 | (ushort)bVar3 << 10 |
                                                  (ushort)bVar5 << 0xe)));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(fVar17);
      auStack_8dc[iVar12] = (uchar)local_1c;
    }
    puVar9 = (uchar *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                                (this_ptr->poly_count,"..\\core\\dmodel.cpp",0x725);
    this_ptr->env_map_opac_list = puVar9;
    if (puVar9 == (uchar *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x726;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    bVar3 = true;
    for (iVar12 = 0; iVar12 < this_ptr->poly_count; iVar12 = iVar12 + 1) {
      this_ptr->env_map_opac_list[iVar12] = auStack_8dc[this_ptr->poly_texture_index_list[iVar12]];
      if (5 < this_ptr->env_map_opac_list[iVar12]) {
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


// Assembly code:
// 00479330: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// 00479331: PUSH ESI
// 00479332: PUSH EDI
// 00479333: PUSH EBP
// 00479334: MOV EBP,ESP
// 00479336: SUB ESP,0xc74
// 0047933c: SUB EBP,0x7a
// 0047933f: MOV DL,0x3a
// 00479341: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00479347: MOV AL,byte ptr [ESI]
//   Label: LAB_00479347
// 00479349: CMP AL,DL
// 0047934b: JZ 0x0047935f
//   XREF to: 0047935f (CONDITIONAL_JUMP)
// 0047934d: CMP AL,0x0
// 0047934f: JZ 0x0047935d
//   XREF to: 0047935d (CONDITIONAL_JUMP)
// 00479351: INC ESI
// 00479352: MOV AL,byte ptr [ESI]
// 00479354: CMP AL,DL
// 00479356: JZ 0x0047935f
//   XREF to: 0047935f (CONDITIONAL_JUMP)
// 00479358: INC ESI
// 00479359: CMP AL,0x0
// 0047935b: JNZ 0x00479347
//   XREF to: 00479347 (CONDITIONAL_JUMP)
// 0047935d: SUB ESI,ESI
//   Label: LAB_0047935d
// 0047935f: TEST ESI,ESI
//   Label: LAB_0047935f
// 00479361: JNZ 0x0047938b
//   XREF to: 0047938b (CONDITIONAL_JUMP)
// 00479363: MOV DL,0x5c
// 00479365: MOV ESI,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047936b: MOV AL,byte ptr [ESI]
//   Label: LAB_0047936b
// 0047936d: CMP AL,DL
// 0047936f: JZ 0x00479383
//   XREF to: 00479383 (CONDITIONAL_JUMP)
// 00479371: CMP AL,0x0
// 00479373: JZ 0x00479381
//   XREF to: 00479381 (CONDITIONAL_JUMP)
// 00479375: INC ESI
// 00479376: MOV AL,byte ptr [ESI]
// 00479378: CMP AL,DL
// 0047937a: JZ 0x00479383
//   XREF to: 00479383 (CONDITIONAL_JUMP)
// 0047937c: INC ESI
// 0047937d: CMP AL,0x0
// 0047937f: JNZ 0x0047936b
//   XREF to: 0047936b (CONDITIONAL_JUMP)
// 00479381: SUB ESI,ESI
//   Label: LAB_00479381
// 00479383: TEST ESI,ESI
//   Label: LAB_00479383
// 00479385: JZ 0x00479557
//   XREF to: 00479557 (CONDITIONAL_JUMP)
// 0047938b: PUSH 0x60f
//   Label: LAB_0047938b
// 00479390: PUSH 0x61fc85
//   XREF to: 0061fc85 (DATA)
// 00479395: PUSH 0x61fc98
//   XREF to: 0061fc98 (DATA)
// 0047939a: PUSH 0x0
// 0047939c: MOV ECX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004793a2: PUSH ECX
// 004793a3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004793a8: ADD ESP,0x14
// 004793ab: MOV dword ptr [EBP + 0x6a],EAX
//   Label: LAB_004793ab
//   XREF to: Stack[-0x20] (WRITE)
// 004793ae: CMP dword ptr [EBP + 0x6a],0x0
//   XREF to: Stack[-0x20] (READ)
// 004793b2: JNZ 0x004793de
//   XREF to: 004793de (CONDITIONAL_JUMP)
// 004793b4: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 004793ba: PUSH EAX
// 004793bb: MOV ESI,0x61fca5
//   XREF to: 0061fca5 (DATA)
// 004793c0: MOV EDI,0x613
// 004793c5: PUSH 0x61fcb8
//   XREF to: 0061fcb8 (DATA)
// 004793ca: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 004793d0: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004793d6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004793db: ADD ESP,0x8
// 004793de: MOV EBX,0x1
//   Label: LAB_004793de
// 004793e3: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004793e6: PUSH ESI
//   Label: LAB_004793e6
// 004793e7: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004793ec: ADD ESP,0x4
// 004793ef: TEST EAX,EAX
// 004793f1: JL 0x004793fd
//   XREF to: 004793fd (CONDITIONAL_JUMP)
// 004793f3: CMP EAX,0xa
// 004793f6: JNZ 0x004793e6
//   XREF to: 004793e6 (CONDITIONAL_JUMP)
// 004793f8: DEC EBX
// 004793f9: TEST EBX,EBX
// 004793fb: JG 0x004793e6
//   XREF to: 004793e6 (CONDITIONAL_JUMP)
// 004793fd: LEA EAX,[EBP + 0x36]
//   Label: LAB_004793fd
//   XREF to: Stack[-0x54] (DATA)
// 00479400: PUSH EAX
// 00479401: PUSH 0x61fcc6
//   XREF to: 0061fcc6 (DATA)
// 00479406: MOV EDX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479409: PUSH EDX
// 0047940a: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 0047940f: ADD ESP,0xc
// 00479412: CMP EAX,0x1
// 00479415: JZ 0x00479441
//   XREF to: 00479441 (CONDITIONAL_JUMP)
// 00479417: MOV ESI,dword ptr [EBP + 0x92]
//   Label: LAB_00479417
//   XREF to: Stack[0x8] (READ)
// 0047941d: PUSH ESI
// 0047941e: MOV ECX,0x61fcca
//   XREF to: 0061fcca (PARAM)
// 00479423: MOV EBX,0x61e
// 00479428: PUSH 0x61fcdd
//   XREF to: 0061fcdd (DATA)
// 0047942d: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00479433: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 00479439: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0047943e: ADD ESP,0x8
// 00479441: MOV EDI,dword ptr [EBP + 0x36]
//   Label: LAB_00479441
//   XREF to: Stack[-0x54] (READ)
// 00479444: CMP EDI,0x66
// 00479447: JGE 0x00479575
//   XREF to: 00479575 (CONDITIONAL_JUMP)
// 0047944d: PUSH 0x67
//   Label: LAB_0047944d
// 0047944f: MOV EBX,dword ptr [EBP + 0x36]
//   XREF to: Stack[-0x54] (READ)
// 00479452: PUSH EBX
// 00479453: MOV EDX,0x61fcec
//   XREF to: 0061fcec (PARAM)
// 00479458: MOV ECX,0x623
// 0047945d: PUSH 0x61fcff
//   XREF to: 0061fcff (DATA)
// 00479462: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00479468: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 0047946e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00479473: ADD ESP,0xc
// 00479476: MOV EBX,0x1
//   Label: LAB_00479476
// 0047947b: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 0047947e: PUSH ESI
//   Label: LAB_0047947e
// 0047947f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479484: ADD ESP,0x4
// 00479487: TEST EAX,EAX
// 00479489: JL 0x00479495
//   XREF to: 00479495 (CONDITIONAL_JUMP)
// 0047948b: CMP EAX,0xa
// 0047948e: JNZ 0x0047947e
//   XREF to: 0047947e (CONDITIONAL_JUMP)
// 00479490: DEC EBX
// 00479491: TEST EBX,EBX
// 00479493: JG 0x0047947e
//   XREF to: 0047947e (CONDITIONAL_JUMP)
// 00479495: LEA EAX,[EBP + 0x5a]
//   Label: LAB_00479495
//   XREF to: Stack[-0x30] (DATA)
// 00479498: PUSH EAX
// 00479499: LEA EAX,[EBP + 0x2e]
//   XREF to: Stack[-0x5c] (DATA)
// 0047949c: PUSH EAX
// 0047949d: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x4c] (DATA)
// 004794a0: PUSH EAX
// 004794a1: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x58] (DATA)
// 004794a4: PUSH EAX
// 004794a5: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x34] (DATA)
// 004794a8: PUSH EAX
// 004794a9: LEA EAX,[EBP + 0x42]
//   XREF to: Stack[-0x48] (DATA)
// 004794ac: PUSH EAX
// 004794ad: LEA EAX,[EBP + 0x3a]
//   XREF to: Stack[-0x50] (DATA)
// 004794b0: PUSH EAX
// 004794b1: PUSH 0x61fd41
//   XREF to: 0061fd41 (DATA)
// 004794b6: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004794b9: PUSH ESI
// 004794ba: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004794bf: ADD ESP,0x24
// 004794c2: CMP EAX,0x7
// 004794c5: JNZ 0x00479417
//   XREF to: 00479417 (CONDITIONAL_JUMP)
// 004794cb: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004794d0: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004794d5: CALL engine_2d.c_clearInputAndWait_FUN_00403260
//   XREF to: 00403260 (UNCONDITIONAL_CALL)
// 004794da: MOV EDI,dword ptr [EBP + 0x3e]
//   XREF to: Stack[-0x4c] (READ)
// 004794dd: PUSH EDI
// 004794de: PUSH 0x1
// 004794e0: MOV EAX,dword ptr [EBP + 0x3a]
//   XREF to: Stack[-0x50] (READ)
// 004794e3: PUSH EAX
// 004794e4: MOV EDX,dword ptr [EBP + 0x42]
//   XREF to: Stack[-0x48] (READ)
// 004794e7: PUSH EDX
// 004794e8: MOV ECX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x34] (READ)
// 004794eb: PUSH ECX
// 004794ec: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004794f2: PUSH EBX
// 004794f3: CALL core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
//   XREF to: 00477bf0 (UNCONDITIONAL_CALL)
// 004794f8: ADD ESP,0x18
// 004794fb: PUSH 0x61fd7c
//   XREF to: 0061fd7c (DATA)
// 00479500: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00479506: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00479507: MOV EBX,0x1
// 0047950c: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 00479511: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479514: ADD ESP,0x8
// 00479517: PUSH ESI
//   Label: LAB_00479517
// 00479518: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 0047951d: ADD ESP,0x4
// 00479520: TEST EAX,EAX
// 00479522: JL 0x0047952e
//   XREF to: 0047952e (CONDITIONAL_JUMP)
// 00479524: CMP EAX,0xa
// 00479527: JNZ 0x00479517
//   XREF to: 00479517 (CONDITIONAL_JUMP)
// 00479529: DEC EBX
// 0047952a: TEST EBX,EBX
// 0047952c: JG 0x00479517
//   XREF to: 00479517 (CONDITIONAL_JUMP)
// 0047952e: XOR ESI,ESI
//   Label: LAB_0047952e
// 00479530: CMP ESI,dword ptr [EBP + 0x32]
//   Label: LAB_00479530
//   XREF to: Stack[-0x58] (READ)
// 00479533: JGE 0x00479583
//   XREF to: 00479583 (CONDITIONAL_JUMP)
// 00479535: MOV EBX,0x1
// 0047953a: MOV EDI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 0047953d: PUSH EDI
//   Label: LAB_0047953d
// 0047953e: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479543: ADD ESP,0x4
// 00479546: TEST EAX,EAX
// 00479548: JL 0x00479554
//   XREF to: 00479554 (CONDITIONAL_JUMP)
// 0047954a: CMP EAX,0xa
// 0047954d: JNZ 0x0047953d
//   XREF to: 0047953d (CONDITIONAL_JUMP)
// 0047954f: DEC EBX
// 00479550: TEST EBX,EBX
// 00479552: JG 0x0047953d
//   XREF to: 0047953d (CONDITIONAL_JUMP)
// 00479554: INC ESI
//   Label: LAB_00479554
// 00479555: JMP 0x00479530
//   XREF to: 00479530 (UNCONDITIONAL_JUMP)
// 00479557: PUSH 0x61fc9b
//   Label: LAB_00479557
//   XREF to: 0061fc9b (DATA)
// 0047955c: MOV EDX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 00479562: PUSH EDX
// 00479563: PUSH 0x61fc9e
//   XREF to: 0061fc9e (DATA)
// 00479568: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0047956d: ADD ESP,0xc
// 00479570: JMP 0x004793ab
//   XREF to: 004793ab (UNCONDITIONAL_JUMP)
// 00479575: CMP EDI,0x67
//   Label: LAB_00479575
// 00479578: JG 0x0047944d
//   XREF to: 0047944d (CONDITIONAL_JUMP)
// 0047957e: JMP 0x00479476
//   XREF to: 00479476 (UNCONDITIONAL_JUMP)
// 00479583: MOV EAX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479583
//   XREF to: Stack[0x4] (READ)
// 00479589: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0047958f: MOV EAX,dword ptr [EAX + 0x104]
// 00479595: MOV dword ptr [EDX + 0x5588],EAX
// 0047959b: MOV EAX,dword ptr [EDX + 0x110]
// 004795a1: MOV dword ptr [EDX + 0x558c],EAX
// 004795a7: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004795ac: PUSH 0x0
// 004795ae: PUSH 0x0
// 004795b0: PUSH 0x61fd8b
//   XREF to: 0061fd8b (DATA)
// 004795b5: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 004795ba: ADD ESP,0xc
// 004795bd: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 004795c2: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 004795c8: PUSH EAX
// 004795c9: CALL shape_edittool.cpp_CPickList_ctor_FUN_004a3b90
//   XREF to: 004a3b90 (UNCONDITIONAL_CALL)
// 004795ce: ADD ESP,0x4
// 004795d1: PUSH 0x61fd9e
//   XREF to: 0061fd9e (DATA)
// 004795d6: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 004795dc: PUSH EAX
// 004795dd: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004795e2: ADD ESP,0x8
// 004795e5: PUSH 0x61fdb3
//   XREF to: 0061fdb3 (DATA)
// 004795ea: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 004795f0: PUSH EAX
// 004795f1: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 004795f6: ADD ESP,0x8
// 004795f9: PUSH 0x61fdea
//   XREF to: 0061fdea (DATA)
// 004795fe: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 00479604: PUSH EAX
// 00479605: CALL shape_edittool.cpp_CStrList_add_FUN_004a2b80
//   XREF to: 004a2b80 (UNCONDITIONAL_CALL)
// 0047960a: ADD ESP,0x8
// 0047960d: PUSH 0x0
// 0047960f: PUSH -0x1
// 00479611: PUSH 0x61fe2b
//   XREF to: 0061fe2b (DATA)
// 00479616: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 0047961c: PUSH EAX
// 0047961d: CALL shape_edittool.cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
//   XREF to: 004a3e20 (UNCONDITIONAL_CALL)
// 00479622: ADD ESP,0x10
// 00479625: MOV dword ptr [EBP + 0x62],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 00479628: TEST EAX,EAX
// 0047962a: JL 0x00479712
//   XREF to: 00479712 (CONDITIONAL_JUMP)
// 00479630: CMP EAX,0x1
// 00479633: JZ 0x0047973a
//   XREF to: 0047973a (CONDITIONAL_JUMP)
// 00479639: MOV EBX,0x1
//   Label: LAB_00479639
// 0047963e: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479641: PUSH ESI
//   Label: LAB_00479641
// 00479642: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479647: ADD ESP,0x4
// 0047964a: TEST EAX,EAX
// 0047964c: JL 0x00479658
//   XREF to: 00479658 (CONDITIONAL_JUMP)
// 0047964e: CMP EAX,0xa
// 00479651: JNZ 0x00479641
//   XREF to: 00479641 (CONDITIONAL_JUMP)
// 00479653: DEC EBX
// 00479654: TEST EBX,EBX
// 00479656: JG 0x00479641
//   XREF to: 00479641 (CONDITIONAL_JUMP)
// 00479658: XOR EBX,EBX
//   Label: LAB_00479658
// 0047965a: MOV EAX,dword ptr [EBP + 0x8e]
//   Label: LAB_0047965a
//   XREF to: Stack[0x4] (READ)
// 00479660: CMP EBX,dword ptr [EAX + 0x120]
// 00479666: JL 0x004797ff
//   XREF to: 004797ff (CONDITIONAL_JUMP)
// 0047966c: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00479671: PUSH 0x0
// 00479673: PUSH 0x0
// 00479675: PUSH 0x61fee4
//   XREF to: 0061fee4 (DATA)
// 0047967a: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 0047967f: ADD ESP,0xc
// 00479682: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479685: MOV EBX,0x1
// 0047968a: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 0047968f: PUSH ESI
//   Label: LAB_0047968f
// 00479690: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479695: ADD ESP,0x4
// 00479698: TEST EAX,EAX
// 0047969a: JL 0x004796a6
//   XREF to: 004796a6 (CONDITIONAL_JUMP)
// 0047969c: CMP EAX,0xa
// 0047969f: JNZ 0x0047968f
//   XREF to: 0047968f (CONDITIONAL_JUMP)
// 004796a1: DEC EBX
// 004796a2: TEST EBX,EBX
// 004796a4: JG 0x0047968f
//   XREF to: 0047968f (CONDITIONAL_JUMP)
// 004796a6: XOR EBX,EBX
//   Label: LAB_004796a6
// 004796a8: MOV EAX,dword ptr [EBP + 0x8e]
//   Label: LAB_004796a8
//   XREF to: Stack[0x4] (READ)
// 004796ae: CMP EBX,dword ptr [EAX + 0x110]
// 004796b4: JGE 0x00479b0e
//   XREF to: 00479b0e (CONDITIONAL_JUMP)
// 004796ba: LEA EAX,[EBP + 0x1e]
//   XREF to: Stack[-0x6c] (DATA)
// 004796bd: PUSH EAX
// 004796be: LEA EAX,[EBP + 0x2a]
//   XREF to: Stack[-0x60] (DATA)
// 004796c1: PUSH EAX
// 004796c2: LEA EAX,[EBP + 0x12]
//   XREF to: Stack[-0x78] (DATA)
// 004796c5: PUSH EAX
// 004796c6: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x70] (DATA)
// 004796c9: PUSH EAX
// 004796ca: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x64] (DATA)
// 004796cd: PUSH EAX
// 004796ce: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x7c] (DATA)
// 004796d1: PUSH EAX
// 004796d2: LEA EAX,[EBP + 0x16]
//   XREF to: Stack[-0x74] (DATA)
// 004796d5: PUSH EAX
// 004796d6: LEA EAX,[EBP + 0x22]
//   XREF to: Stack[-0x68] (DATA)
// 004796d9: PUSH EAX
// 004796da: LEA EAX,[EBP + 0xa]
//   XREF to: Stack[-0x80] (DATA)
// 004796dd: PUSH EAX
// 004796de: LEA EAX,[EBP + 0x46]
//   XREF to: Stack[-0x44] (DATA)
// 004796e1: PUSH EAX
// 004796e2: PUSH 0x61fef7
//   XREF to: 0061fef7 (DATA)
// 004796e7: MOV EDI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 004796ea: PUSH EDI
// 004796eb: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004796f0: ADD ESP,0x30
// 004796f3: CMP EAX,0xa
// 004796f6: JZ 0x00479a60
//   XREF to: 00479a60 (CONDITIONAL_JUMP)
// 004796fc: PUSH 0x0
// 004796fe: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 00479704: PUSH EAX
// 00479705: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0047970a: ADD ESP,0x8
// 0047970d: JMP 0x00479417
//   XREF to: 00479417 (UNCONDITIONAL_JUMP)
// 00479712: MOV ECX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479712
//   XREF to: Stack[0x4] (READ)
// 00479718: PUSH ECX
// 00479719: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   Label: LAB_00479719
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 0047971e: ADD ESP,0x4
// 00479721: PUSH 0x0
// 00479723: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 00479729: PUSH EAX
// 0047972a: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 0047972f: ADD ESP,0x8
// 00479732: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 00479735: POP EBP
// 00479736: POP EDI
// 00479737: POP ESI
// 00479738: POP EBX
// 00479739: RET
// 0047973a: PUSH 0x0
//   Label: LAB_0047973a
// 0047973c: PUSH 0x0
// 0047973e: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 00479744: PUSH EAX
// 00479745: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x18] (DATA)
// 00479748: PUSH EAX
// 00479749: MOV EAX,dword ptr [EBP + 0x92]
//   XREF to: Stack[0x8] (READ)
// 0047974f: PUSH EAX
// 00479750: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00479755: ADD ESP,0x14
// 00479758: PUSH 0x0
// 0047975a: PUSH 0x0
// 0047975c: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 00479762: PUSH EAX
// 00479763: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x18] (DATA)
// 00479766: PUSH EAX
// 00479767: LEA EAX,[EBP + 0xfffffae2]
//   XREF to: Stack[-0x5a8] (DATA)
// 0047976d: PUSH EAX
// 0047976e: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 00479773: ADD ESP,0x14
// 00479776: PUSH 0x1
// 00479778: PUSH 0x104
// 0047977d: LEA EAX,[EBP + 0xfffffae2]
//   XREF to: Stack[-0x5a8] (DATA)
// 00479783: PUSH EAX
// 00479784: PUSH 0x61fe56
//   XREF to: 0061fe56 (DATA)
// 00479789: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 0047978f: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 00479790: CALL shape_edittool.cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
//   XREF to: 004a03d0 (UNCONDITIONAL_CALL)
// 00479795: ADD ESP,0x14
// 00479798: TEST EAX,EAX
// 0047979a: JZ 0x00479712
//   XREF to: 00479712 (CONDITIONAL_JUMP)
// 004797a0: PUSH 0x0
// 004797a2: PUSH 0x0
// 004797a4: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 004797aa: PUSH EAX
// 004797ab: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x18] (DATA)
// 004797ae: PUSH EAX
// 004797af: LEA EAX,[EBP + 0xfffffae2]
//   XREF to: Stack[-0x5a8] (DATA)
// 004797b5: PUSH EAX
// 004797b6: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 004797bb: ADD ESP,0x14
// 004797be: JMP 0x00479639
//   XREF to: 00479639 (UNCONDITIONAL_JUMP)
// 004797c3: PUSH 0x61fee0
//   Label: LAB_004797c3
//   XREF to: 0061fee0 (DATA)
// 004797c8: LEA EAX,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x3a0] (DATA)
// 004797ce: PUSH EAX
// 004797cf: LEA EAX,[EBX*0x8 + 0x0]
// 004797d6: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 004797dc: ADD EAX,EBX
// 004797de: ADD EDX,0x124
// 004797e4: SHL EAX,0x3
// 004797e7: PUSH 0x0
// 004797e9: ADD EAX,EDX
// 004797eb: PUSH 0x0
// 004797ed: ADD EAX,0x8
// 004797f0: PUSH EAX
// 004797f1: INC EBX
// 004797f2: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 004797f7: ADD ESP,0x14
// 004797fa: JMP 0x0047965a
//   XREF to: 0047965a (UNCONDITIONAL_JUMP)
// 004797ff: MOV EAX,dword ptr [EBP + 0x6a]
//   Label: LAB_004797ff
//   XREF to: Stack[-0x20] (READ)
// 00479802: PUSH EAX
// 00479803: PUSH 0x104
// 00479808: LEA EAX,[EBP + 0xfffff9de]
//   XREF to: Stack[-0x6ac] (DATA)
// 0047980e: PUSH EAX
// 0047980f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00479814: ADD ESP,0xc
// 00479817: TEST EAX,EAX
// 00479819: JZ 0x00479984
//   XREF to: 00479984 (CONDITIONAL_JUMP)
// 0047981f: MOV DL,0xa
// 00479821: LEA ESI,[EBP + 0xfffff9de]
//   XREF to: Stack[-0x6ac] (DATA)
// 00479827: MOV AL,byte ptr [ESI]
//   Label: LAB_00479827
//   XREF to: Stack[-0x6ac] (DATA)
// 00479829: CMP AL,DL
// 0047982b: JZ 0x0047983f
//   XREF to: 0047983f (CONDITIONAL_JUMP)
// 0047982d: CMP AL,0x0
// 0047982f: JZ 0x0047983d
//   XREF to: 0047983d (CONDITIONAL_JUMP)
// 00479831: INC ESI
// 00479832: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x6ab] (DATA)
// 00479834: CMP AL,DL
// 00479836: JZ 0x0047983f
//   XREF to: 0047983f (CONDITIONAL_JUMP)
// 00479838: INC ESI
// 00479839: CMP AL,0x0
// 0047983b: JNZ 0x00479827
//   XREF to: 00479827 (CONDITIONAL_JUMP)
// 0047983d: SUB ESI,ESI
//   Label: LAB_0047983d
// 0047983f: TEST ESI,ESI
//   Label: LAB_0047983f
// 00479841: JZ 0x00479846
//   XREF to: 00479846 (CONDITIONAL_JUMP)
// 00479843: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x6a9] (DATA)
// 00479846: LEA EAX,[EBP + 0xfffffdea]
//   Label: LAB_00479846
//   XREF to: Stack[-0x2a0] (DATA)
// 0047984c: PUSH EAX
// 0047984d: LEA EAX,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x3a0] (DATA)
// 00479853: PUSH EAX
// 00479854: PUSH 0x0
// 00479856: PUSH 0x0
// 00479858: LEA EAX,[EBP + 0xfffff9de]
//   XREF to: Stack[-0x6ac] (DATA)
// 0047985e: PUSH EAX
// 0047985f: CALL crt_string.c_splitpath_FUN_005ff178
//   XREF to: 005ff178 (UNCONDITIONAL_CALL)
// 00479864: MOV EDX,dword ptr [EBP + 0x62]
//   XREF to: Stack[-0x28] (READ)
// 00479867: ADD ESP,0x14
// 0047986a: TEST EDX,EDX
// 0047986c: JZ 0x004797c3
//   XREF to: 004797c3 (CONDITIONAL_JUMP)
// 00479872: CMP EDX,0x1
// 00479875: JNZ 0x00479999
//   XREF to: 00479999 (CONDITIONAL_JUMP)
// 0047987b: LEA EAX,[EBP + 0xfffffdea]
//   XREF to: Stack[-0x2a0] (DATA)
// 00479881: PUSH EAX
// 00479882: LEA EAX,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x3a0] (DATA)
// 00479888: PUSH EAX
// 00479889: LEA EAX,[EBP + 0xfffffeea]
//   XREF to: Stack[-0x1a0] (DATA)
// 0047988f: PUSH EAX
// 00479890: LEA EAX,[EBP + 0x72]
//   XREF to: Stack[-0x18] (DATA)
// 00479893: PUSH EAX
// 00479894: LEA EAX,[EBP + 0xfffff8da]
//   XREF to: Stack[-0x7b0] (DATA)
// 0047989a: PUSH EAX
// 0047989b: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 004798a0: ADD ESP,0x14
// 004798a3: LEA EAX,[EBP + 0xfffffdea]
//   Label: LAB_004798a3
//   XREF to: Stack[-0x2a0] (DATA)
// 004798a9: PUSH EAX
// 004798aa: LEA EAX,[EBP + 0xfffffcea]
//   XREF to: Stack[-0x3a0] (DATA)
// 004798b0: PUSH EAX
// 004798b1: PUSH 0x61fe9b
//   XREF to: 0061fe9b (DATA)
// 004798b6: PUSH 0x0
// 004798b8: LEA EAX,[EBP + 0xfffffbe6]
//   XREF to: Stack[-0x4a4] (DATA)
// 004798be: PUSH EAX
// 004798bf: CALL crt_file.c_makepath_FUN_005febfc
//   XREF to: 005febfc (UNCONDITIONAL_CALL)
// 004798c4: ADD ESP,0x14
// 004798c7: LEA EAX,[EBP + 0xfffffbe6]
//   XREF to: Stack[-0x4a4] (DATA)
// 004798cd: PUSH EAX
// 004798ce: LEA EAX,[EBP + 0xfffff8da]
//   XREF to: Stack[-0x7b0] (DATA)
// 004798d4: PUSH EAX
// 004798d5: PUSH 0x61fe9f
//   XREF to: 0061fe9f (DATA)
// 004798da: MOV EDX,dword ptr [0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 004798e0: PUSH EDX
//   XREF to: 02cf1cd4 (DATA)
// 004798e1: CALL shape_edittool.cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
//   XREF to: 0049e790 (UNCONDITIONAL_CALL)
// 004798e6: ADD ESP,0x10
// 004798e9: PUSH 0x5ef
// 004798ee: PUSH 0x61fc20
//   XREF to: 0061fc20 (DATA)
// 004798f3: PUSH 0x61fc33
//   XREF to: 0061fc33 (DATA)
// 004798f8: PUSH 0x0
// 004798fa: LEA EAX,[EBP + 0xfffff8da]
//   XREF to: Stack[-0x7b0] (DATA)
// 00479900: PUSH EAX
// 00479901: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 00479906: MOV ESI,EAX
// 00479908: ADD ESP,0x14
// 0047990b: MOV EDI,EAX
// 0047990d: TEST EAX,EAX
// 0047990f: JZ 0x0047994f
//   XREF to: 0047994f (CONDITIONAL_JUMP)
// 00479911: PUSH 0x5f2
// 00479916: PUSH 0x61fc36
//   XREF to: 0061fc36 (DATA)
// 0047991b: PUSH 0x61fc49
//   XREF to: 0061fc49 (DATA)
// 00479920: PUSH 0x0
// 00479922: LEA EAX,[EBP + 0xfffffbe6]
//   XREF to: Stack[-0x4a4] (DATA)
// 00479928: PUSH EAX
// 00479929: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0047992e: ADD ESP,0x14
// 00479931: MOV dword ptr [EBP + 0x66],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 00479934: TEST EAX,EAX
// 00479936: JNZ 0x004799f0
//   XREF to: 004799f0 (CONDITIONAL_JUMP)
// 0047993c: PUSH 0x5f4
// 00479941: PUSH 0x61fc4c
//   XREF to: 0061fc4c (DATA)
// 00479946: PUSH ESI
// 00479947: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047994c: ADD ESP,0xc
// 0047994f: LEA EAX,[EBP + 0xfffffbe6]
//   Label: LAB_0047994f
//   XREF to: Stack[-0x4a4] (DATA)
// 00479955: PUSH EAX
// 00479956: LEA EAX,[EBP + 0xfffff8da]
//   XREF to: Stack[-0x7b0] (DATA)
// 0047995c: PUSH EAX
// 0047995d: PUSH 0x61feb0
//   XREF to: 0061feb0 (DATA)
// 00479962: MOV EAX,[0x00678a60]
//   XREF to: 02cf1cd4 (PARAM)
//   XREF to: 00678a60 (READ)
// 00479967: PUSH EAX
//   XREF to: 02cf1cd4 (DATA)
// 00479968: CALL shape_edittool.cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
//   XREF to: 0049f060 (UNCONDITIONAL_CALL)
// 0047996d: ADD ESP,0x10
// 00479970: TEST EAX,EAX
// 00479972: JNZ 0x004797c3
//   XREF to: 004797c3 (CONDITIONAL_JUMP)
// 00479978: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 0047997e: PUSH EDX
// 0047997f: JMP 0x00479719
//   XREF to: 00479719 (UNCONDITIONAL_JUMP)
// 00479984: PUSH EAX
//   Label: LAB_00479984
// 00479985: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 0047998b: PUSH EAX
// 0047998c: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00479991: ADD ESP,0x8
// 00479994: JMP 0x00479417
//   XREF to: 00479417 (UNCONDITIONAL_JUMP)
// 00479999: CMP EDX,0x2
//   Label: LAB_00479999
// 0047999c: JNZ 0x004799c9
//   XREF to: 004799c9 (CONDITIONAL_JUMP)
// 0047999e: LEA ESI,[EBP + 0xfffff9de]
//   XREF to: Stack[-0x6ac] (DATA)
// 004799a4: LEA EDI,[EBP + 0xfffff8da]
//   XREF to: Stack[-0x7b0] (DATA)
// 004799aa: PUSH EDI
// 004799ab: MOV AL,byte ptr [ESI]
//   Label: LAB_004799ab
//   XREF to: Stack[-0x6ac] (DATA)
// 004799ad: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x7b0] (DATA)
// 004799af: CMP AL,0x0
// 004799b1: JZ 0x004799c3
//   XREF to: 004799c3 (CONDITIONAL_JUMP)
// 004799b3: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x6ab] (READ)
// 004799b6: ADD ESI,0x2
// 004799b9: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x7af] (WRITE)
// 004799bc: ADD EDI,0x2
// 004799bf: CMP AL,0x0
// 004799c1: JNZ 0x004799ab
//   XREF to: 004799ab (CONDITIONAL_JUMP)
// 004799c3: POP EDI
//   Label: LAB_004799c3
// 004799c4: JMP 0x004798a3
//   XREF to: 004798a3 (UNCONDITIONAL_JUMP)
// 004799c9: MOV EDI,0x61fe7c
//   Label: LAB_004799c9
//   XREF to: 0061fe7c (DATA)
// 004799ce: MOV EAX,0x6a9
// 004799d3: PUSH 0x61fe8f
//   XREF to: 0061fe8f (DATA)
// 004799d8: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 004799de: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004799e3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004799e8: ADD ESP,0x4
// 004799eb: JMP 0x004798a3
//   XREF to: 004798a3 (UNCONDITIONAL_JUMP)
// 004799f0: PUSH EDI
//   Label: LAB_004799f0
// 004799f1: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004799f6: ADD ESP,0x4
// 004799f9: TEST EAX,EAX
// 004799fb: JL 0x00479a0c
//   XREF to: 00479a0c (CONDITIONAL_JUMP)
// 004799fd: MOV ECX,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00479a00: PUSH ECX
// 00479a01: PUSH EAX
// 00479a02: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 00479a07: ADD ESP,0x8
// 00479a0a: JMP 0x004799f0
//   XREF to: 004799f0 (UNCONDITIONAL_JUMP)
// 00479a0c: TEST byte ptr [EDI + 0xc],0x20
//   Label: LAB_00479a0c
// 00479a10: JZ 0x00479a4a
//   XREF to: 00479a4a (CONDITIONAL_JUMP)
// 00479a12: XOR ESI,ESI
//   Label: LAB_00479a12
// 00479a14: PUSH 0x600
//   Label: LAB_00479a14
// 00479a19: PUSH 0x61fc5f
//   XREF to: 0061fc5f (DATA)
// 00479a1e: PUSH EDI
// 00479a1f: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00479a24: ADD ESP,0xc
// 00479a27: PUSH 0x601
// 00479a2c: PUSH 0x61fc72
//   XREF to: 0061fc72 (DATA)
// 00479a31: MOV EDI,dword ptr [EBP + 0x66]
//   XREF to: Stack[-0x24] (READ)
// 00479a34: PUSH EDI
// 00479a35: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00479a3a: ADD ESP,0xc
// 00479a3d: TEST ESI,ESI
// 00479a3f: JNZ 0x004797c3
//   XREF to: 004797c3 (CONDITIONAL_JUMP)
// 00479a45: JMP 0x0047994f
//   XREF to: 0047994f (UNCONDITIONAL_JUMP)
// 00479a4a: MOV EAX,dword ptr [EBP + 0x66]
//   Label: LAB_00479a4a
//   XREF to: Stack[-0x24] (READ)
// 00479a4d: TEST byte ptr [EAX + 0xc],0x20
// 00479a51: JNZ 0x00479a12
//   XREF to: 00479a12 (CONDITIONAL_JUMP)
// 00479a53: MOV ESI,0x1
// 00479a58: JMP 0x00479a14
//   XREF to: 00479a14 (UNCONDITIONAL_JUMP)
// 00479a5a: INC EBX
//   Label: LAB_00479a5a
// 00479a5b: JMP 0x004796a8
//   XREF to: 004796a8 (UNCONDITIONAL_JUMP)
// 00479a60: CMP dword ptr [EBP + 0x46],0x0
//   Label: LAB_00479a60
//   XREF to: Stack[-0x44] (READ)
// 00479a64: JL 0x00479b04
//   XREF to: 00479b04 (CONDITIONAL_JUMP)
// 00479a6a: MOV EDX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479a6a
//   XREF to: Stack[0x4] (READ)
// 00479a70: LEA EAX,[EBX*0x8 + 0x0]
// 00479a77: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479a7d: ADD EAX,EBX
// 00479a7f: MOV EDX,dword ptr [EDX + 0x114]
// 00479a85: SHL EAX,0x3
// 00479a88: MOV ECX,dword ptr [ECX + 0x118]
// 00479a8e: ADD EDX,EAX
// 00479a90: LEA EAX,[EBX*0x4 + 0x0]
// 00479a97: ADD ECX,EAX
// 00479a99: MOV EAX,dword ptr [EBP + 0x46]
//   XREF to: Stack[-0x44] (READ)
// 00479a9c: MOV dword ptr [ECX],EAX
// 00479a9e: MOV dword ptr [EDX + 0x4],0x3
// 00479aa5: MOV dword ptr [EDX + 0x14],0x0
// 00479aac: MOV EAX,dword ptr [EDX + 0x14]
// 00479aaf: MOV dword ptr [EDX + 0x10],EAX
// 00479ab2: MOV dword ptr [EDX + 0xc],EAX
// 00479ab5: XOR ECX,ECX
// 00479ab7: MOV dword ptr [EDX + 0x8],EAX
// 00479aba: CMP ECX,dword ptr [EDX + 0x4]
//   Label: LAB_00479aba
// 00479abd: JGE 0x00479a5a
//   XREF to: 00479a5a (CONDITIONAL_JUMP)
// 00479abf: LEA EAX,[ECX*0x4 + 0x0]
// 00479ac6: SUB EAX,ECX
// 00479ac8: SHL EAX,0x2
// 00479acb: LEA EDI,[EDX + EAX*0x1]
// 00479ace: MOV EAX,dword ptr [EBP + ECX*0x4 + 0xa]
//   XREF to: Stack[-0x7c] (DATA)
// 00479ad2: MOV dword ptr [EDI + 0x18],EAX
// 00479ad5: FLD double ptr [0x00620013]
//   XREF to: 00620013 (READ)
// 00479adb: FLD float ptr [EBP + ECX*0x4 + 0x22]
//   XREF to: Stack[-0x64] (DATA)
// 00479adf: FMUL ST1
// 00479ae1: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479ae6: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479ae9: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479aec: MOV dword ptr [EDI + 0x1c],EAX
// 00479aef: FMUL float ptr [EBP + ECX*0x4 + 0x16]
// 00479af3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479af8: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479afb: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479afe: INC ECX
// 00479aff: MOV dword ptr [EDI + 0x20],EAX
// 00479b02: JMP 0x00479aba
//   XREF to: 00479aba (UNCONDITIONAL_JUMP)
// 00479b04: XOR EDX,EDX
//   Label: LAB_00479b04
// 00479b06: MOV dword ptr [EBP + 0x46],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 00479b09: JMP 0x00479a6a
//   XREF to: 00479a6a (UNCONDITIONAL_JUMP)
// 00479b0e: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   Label: LAB_00479b0e
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 00479b13: PUSH 0x0
// 00479b15: PUSH 0x0
// 00479b17: PUSH 0x61ff19
//   XREF to: 0061ff19 (DATA)
// 00479b1c: CALL engine_2d.c_drawText_FUN_00401fd0
//   XREF to: 00401fd0 (UNCONDITIONAL_CALL)
// 00479b21: ADD ESP,0xc
// 00479b24: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479b27: MOV EBX,0x1
// 00479b2c: CALL wincore_wddvmem.cpp_swapBuffers_FUN_005eda20
//   XREF to: 005eda20 (UNCONDITIONAL_CALL)
// 00479b31: PUSH ESI
//   Label: LAB_00479b31
// 00479b32: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479b37: ADD ESP,0x4
// 00479b3a: TEST EAX,EAX
// 00479b3c: JL 0x00479b48
//   XREF to: 00479b48 (CONDITIONAL_JUMP)
// 00479b3e: CMP EAX,0xa
// 00479b41: JNZ 0x00479b31
//   XREF to: 00479b31 (CONDITIONAL_JUMP)
// 00479b43: DEC EBX
// 00479b44: TEST EBX,EBX
// 00479b46: JG 0x00479b31
//   XREF to: 00479b31 (CONDITIONAL_JUMP)
// 00479b48: XOR EBX,EBX
//   Label: LAB_00479b48
// 00479b4a: MOV EDX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479b4a
//   XREF to: Stack[0x4] (READ)
// 00479b50: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479b56: MOV ECX,dword ptr [EDX + 0x100]
// 00479b5c: MOV EAX,dword ptr [EAX + 0x104]
// 00479b62: IMUL EAX,ECX
// 00479b65: CMP EBX,EAX
// 00479b67: JL 0x00479c17
//   XREF to: 00479c17 (CONDITIONAL_JUMP)
// 00479b6d: MOV EBX,dword ptr [EBP + 0x2e]
//   XREF to: Stack[-0x5c] (READ)
// 00479b70: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479b73: INC EBX
// 00479b74: TEST EBX,EBX
//   Label: LAB_00479b74
// 00479b76: JLE 0x00479c53
//   XREF to: 00479c53 (CONDITIONAL_JUMP)
// 00479b7c: PUSH ESI
//   Label: LAB_00479b7c
// 00479b7d: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479b82: ADD ESP,0x4
// 00479b85: TEST EAX,EAX
// 00479b87: JL 0x00479c53
//   XREF to: 00479c53 (CONDITIONAL_JUMP)
// 00479b8d: CMP EAX,0xa
// 00479b90: JNZ 0x00479b7c
//   XREF to: 00479b7c (CONDITIONAL_JUMP)
// 00479b92: DEC EBX
// 00479b93: JMP 0x00479b74
//   XREF to: 00479b74 (UNCONDITIONAL_JUMP)
// 00479b95: LEA EAX,[EBX*0x4 + 0x0]
//   Label: LAB_00479b95
// 00479b9c: SUB EAX,EBX
// 00479b9e: LEA EDX,[EAX*0x4 + 0x0]
// 00479ba5: FLD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x40] (READ)
// 00479ba8: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479bae: FLD double ptr [0x0062000b]
//   XREF to: 0062000b (READ)
// 00479bb4: FXCH
// 00479bb6: FMUL ST1
// 00479bb8: MOV EAX,dword ptr [EAX + 0x10c]
// 00479bbe: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479bc3: LEA ECX,[EAX + EDX*0x1]
// 00479bc6: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479bc9: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479bcc: MOV dword ptr [ECX],EAX
// 00479bce: FLD float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x3c] (READ)
// 00479bd1: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479bd7: FMUL ST1
// 00479bd9: MOV EAX,dword ptr [EAX + 0x10c]
// 00479bdf: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479be4: LEA ECX,[EAX + EDX*0x1]
// 00479be7: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479bea: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479bed: MOV dword ptr [ECX + 0x4],EAX
// 00479bf0: FLD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x38] (READ)
// 00479bf3: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479bf9: FMULP
// 00479bfb: MOV EAX,dword ptr [EAX + 0x10c]
// 00479c01: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479c06: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479c09: ADD EDX,EAX
// 00479c0b: MOV EAX,dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479c0e: INC EBX
// 00479c0f: MOV dword ptr [EDX + 0x8],EAX
// 00479c12: JMP 0x00479b4a
//   XREF to: 00479b4a (UNCONDITIONAL_JUMP)
// 00479c17: LEA EAX,[EBP + 0x52]
//   Label: LAB_00479c17
//   XREF to: Stack[-0x38] (DATA)
// 00479c1a: PUSH EAX
// 00479c1b: LEA EAX,[EBP + 0x4e]
//   XREF to: Stack[-0x3c] (DATA)
// 00479c1e: PUSH EAX
// 00479c1f: LEA EAX,[EBP + 0x4a]
//   XREF to: Stack[-0x40] (DATA)
// 00479c22: PUSH EAX
// 00479c23: PUSH 0x61ff2c
//   XREF to: 0061ff2c (DATA)
// 00479c28: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479c2b: PUSH ESI
// 00479c2c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00479c31: ADD ESP,0x14
// 00479c34: CMP EAX,0x3
// 00479c37: JZ 0x00479b95
//   XREF to: 00479b95 (CONDITIONAL_JUMP)
// 00479c3d: PUSH 0x0
// 00479c3f: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 00479c45: PUSH EAX
// 00479c46: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00479c4b: ADD ESP,0x8
// 00479c4e: JMP 0x00479417
//   XREF to: 00479417 (UNCONDITIONAL_JUMP)
// 00479c53: MOV EBX,dword ptr [EBP + 0x5a]
//   Label: LAB_00479c53
//   XREF to: Stack[-0x30] (READ)
// 00479c56: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479c59: INC EBX
// 00479c5a: TEST EBX,EBX
//   Label: LAB_00479c5a
// 00479c5c: JLE 0x00479c73
//   XREF to: 00479c73 (CONDITIONAL_JUMP)
// 00479c5e: PUSH ESI
//   Label: LAB_00479c5e
// 00479c5f: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479c64: ADD ESP,0x4
// 00479c67: TEST EAX,EAX
// 00479c69: JL 0x00479c73
//   XREF to: 00479c73 (CONDITIONAL_JUMP)
// 00479c6b: CMP EAX,0xa
// 00479c6e: JNZ 0x00479c5e
//   XREF to: 00479c5e (CONDITIONAL_JUMP)
// 00479c70: DEC EBX
// 00479c71: JMP 0x00479c5a
//   XREF to: 00479c5a (UNCONDITIONAL_JUMP)
// 00479c73: LEA EAX,[EBP + 0x76]
//   Label: LAB_00479c73
//   XREF to: Stack[-0x14] (DATA)
// 00479c76: PUSH EAX
// 00479c77: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 00479c7a: PUSH EAX
// 00479c7b: PUSH 0x61ff36
//   XREF to: 0061ff36 (DATA)
// 00479c80: MOV EBX,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479c83: PUSH EBX
// 00479c84: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00479c89: ADD ESP,0x10
// 00479c8c: CMP EAX,0x2
// 00479c8f: JNZ 0x00479ed2
//   XREF to: 00479ed2 (CONDITIONAL_JUMP)
// 00479c95: PUSH 0x61ff3e
//   XREF to: 0061ff3e (DATA)
// 00479c9a: LEA EAX,[EBP + -0x16]
//   XREF to: Stack[-0xa0] (DATA)
// 00479c9d: PUSH EAX
// 00479c9e: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 00479ca3: ADD ESP,0x8
// 00479ca6: TEST EAX,EAX
// 00479ca8: JNZ 0x00479ea9
//   XREF to: 00479ea9 (CONDITIONAL_JUMP)
// 00479cae: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479cb4: MOV EDX,dword ptr [EDX + 0x120]
// 00479cba: INC EDX
// 00479cbb: LEA EAX,[EDX*0x4 + 0x0]
// 00479cc2: SUB EAX,EDX
// 00479cc4: XOR EDX,EDX
// 00479cc6: MOV DL,byte ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00479cc9: CMP EDX,EAX
// 00479ccb: JZ 0x00479cf0
//   XREF to: 00479cf0 (CONDITIONAL_JUMP)
// 00479ccd: MOV ESI,0x61ff46
//   XREF to: 0061ff46 (DATA)
// 00479cd2: MOV EDI,0x70e
// 00479cd7: PUSH 0x61ff59
//   XREF to: 0061ff59 (DATA)
// 00479cdc: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00479ce2: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00479ce8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00479ced: ADD ESP,0x4
// 00479cf0: MOV EBX,0x3
//   Label: LAB_00479cf0
// 00479cf5: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479cf8: PUSH ESI
//   Label: LAB_00479cf8
// 00479cf9: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479cfe: ADD ESP,0x4
// 00479d01: TEST EAX,EAX
// 00479d03: JL 0x00479d0f
//   XREF to: 00479d0f (CONDITIONAL_JUMP)
// 00479d05: CMP EAX,0xa
// 00479d08: JNZ 0x00479cf8
//   XREF to: 00479cf8 (CONDITIONAL_JUMP)
// 00479d0a: DEC EBX
// 00479d0b: TEST EBX,EBX
// 00479d0d: JG 0x00479cf8
//   XREF to: 00479cf8 (CONDITIONAL_JUMP)
// 00479d0f: XOR EBX,EBX
//   Label: LAB_00479d0f
// 00479d11: MOV EAX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479d11
//   XREF to: Stack[0x4] (READ)
// 00479d17: CMP EBX,dword ptr [EAX + 0x120]
// 00479d1d: JGE 0x00479dce
//   XREF to: 00479dce (CONDITIONAL_JUMP)
// 00479d23: LEA EAX,[EBP + 0x5e]
//   XREF to: Stack[-0x2c] (DATA)
// 00479d26: PUSH EAX
// 00479d27: PUSH 0x61ff71
//   XREF to: 0061ff71 (DATA)
// 00479d2c: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479d2f: XOR ECX,ECX
// 00479d31: PUSH ESI
// 00479d32: MOV dword ptr [EBP + 0x5e],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00479d35: MOV EDI,ESI
// 00479d37: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00479d3c: MOV ESI,0x1
// 00479d41: ADD ESP,0xc
// 00479d44: PUSH EDI
//   Label: LAB_00479d44
// 00479d45: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479d4a: ADD ESP,0x4
// 00479d4d: TEST EAX,EAX
// 00479d4f: JL 0x00479d5b
//   XREF to: 00479d5b (CONDITIONAL_JUMP)
// 00479d51: CMP EAX,0xa
// 00479d54: JNZ 0x00479d44
//   XREF to: 00479d44 (CONDITIONAL_JUMP)
// 00479d56: DEC ESI
// 00479d57: TEST ESI,ESI
// 00479d59: JG 0x00479d44
//   XREF to: 00479d44 (CONDITIONAL_JUMP)
// 00479d5b: MOV ESI,0x1
//   Label: LAB_00479d5b
// 00479d60: MOV EDI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479d63: PUSH EDI
//   Label: LAB_00479d63
// 00479d64: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479d69: ADD ESP,0x4
// 00479d6c: TEST EAX,EAX
// 00479d6e: JL 0x00479d7a
//   XREF to: 00479d7a (CONDITIONAL_JUMP)
// 00479d70: CMP EAX,0xa
// 00479d73: JNZ 0x00479d63
//   XREF to: 00479d63 (CONDITIONAL_JUMP)
// 00479d75: DEC ESI
// 00479d76: TEST ESI,ESI
// 00479d78: JG 0x00479d63
//   XREF to: 00479d63 (CONDITIONAL_JUMP)
// 00479d7a: FLD float ptr [EBP + 0x5e]
//   Label: LAB_00479d7a
//   XREF to: Stack[-0x2c] (READ)
// 00479d7d: FADD double ptr [0x0061fff3]
//   XREF to: 0061fff3 (READ)
// 00479d83: FMUL double ptr [0x0061fffb]
//   XREF to: 0061fffb (READ)
// 00479d89: FST float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x2c] (WRITE)
// 00479d8c: FLDZ
// 00479d8e: FCOMPP
// 00479d90: FNSTSW AX
// 00479d92: SAHF
// 00479d93: JBE 0x00479d9a
//   XREF to: 00479d9a (CONDITIONAL_JUMP)
// 00479d95: XOR EDI,EDI
// 00479d97: MOV dword ptr [EBP + 0x5e],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00479d9a: FLD float ptr [EBP + 0x5e]
//   Label: LAB_00479d9a
//   XREF to: Stack[-0x2c] (READ)
// 00479d9d: FLD1
// 00479d9f: FCOMPP
// 00479da1: FNSTSW AX
// 00479da3: SAHF
// 00479da4: JNC 0x00479dad
//   XREF to: 00479dad (CONDITIONAL_JUMP)
// 00479da6: MOV dword ptr [EBP + 0x5e],0x3f800000
//   XREF to: Stack[-0x2c] (WRITE)
// 00479dad: FLD float ptr [EBP + 0x5e]
//   Label: LAB_00479dad
//   XREF to: Stack[-0x2c] (READ)
// 00479db0: FMUL float ptr [0x00620003]
//   XREF to: 00620003 (READ)
// 00479db6: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 00479dbb: FISTP dword ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (WRITE)
// 00479dbe: MOV AL,byte ptr [EBP + 0x6e]
//   XREF to: Stack[-0x1c] (READ)
// 00479dc1: INC EBX
// 00479dc2: MOV byte ptr [EBX + EBP*0x1 + 0xfffff7ad],AL
// 00479dc9: JMP 0x00479d11
//   XREF to: 00479d11 (UNCONDITIONAL_JUMP)
// 00479dce: PUSH 0x725
//   Label: LAB_00479dce
// 00479dd3: PUSH 0x61ff7f
//   XREF to: 0061ff7f (DATA)
// 00479dd8: MOV ECX,dword ptr [EAX + 0x110]
// 00479dde: PUSH ECX
// 00479ddf: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00479de4: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479dea: ADD ESP,0xc
// 00479ded: MOV dword ptr [EDX + 0x11c],EAX
// 00479df3: TEST EAX,EAX
// 00479df5: JNZ 0x00479e1a
//   XREF to: 00479e1a (CONDITIONAL_JUMP)
// 00479df7: MOV ESI,0x61ff92
//   XREF to: 0061ff92 (DATA)
// 00479dfc: MOV EDI,0x726
// 00479e01: PUSH 0x61ffa5
//   XREF to: 0061ffa5 (DATA)
// 00479e06: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00479e0c: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00479e12: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00479e17: ADD ESP,0x4
// 00479e1a: MOV EDX,0x1
//   Label: LAB_00479e1a
// 00479e1f: XOR EAX,EAX
// 00479e21: MOV ECX,dword ptr [EBP + 0x8e]
//   Label: LAB_00479e21
//   XREF to: Stack[0x4] (READ)
// 00479e27: CMP EAX,dword ptr [ECX + 0x110]
// 00479e2d: JGE 0x00479e67
//   XREF to: 00479e67 (CONDITIONAL_JUMP)
// 00479e2f: MOV EBX,dword ptr [ECX + 0x118]
// 00479e35: MOV EBX,dword ptr [EBX + EAX*0x4]
// 00479e38: MOV ECX,dword ptr [ECX + 0x11c]
// 00479e3e: MOV BL,byte ptr [EBX + EBP*0x1 + 0xfffff7ae]
// 00479e45: MOV byte ptr [ECX + EAX*0x1],BL
// 00479e48: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479e4e: MOV ECX,dword ptr [ECX + 0x11c]
// 00479e54: MOV CL,byte ptr [ECX + EAX*0x1]
// 00479e57: AND ECX,0xff
// 00479e5d: CMP ECX,0x5
// 00479e60: JLE 0x00479e64
//   XREF to: 00479e64 (CONDITIONAL_JUMP)
// 00479e62: XOR EDX,EDX
// 00479e64: INC EAX
//   Label: LAB_00479e64
// 00479e65: JMP 0x00479e21
//   XREF to: 00479e21 (UNCONDITIONAL_JUMP)
// 00479e67: TEST EDX,EDX
//   Label: LAB_00479e67
// 00479e69: JZ 0x00479c73
//   XREF to: 00479c73 (CONDITIONAL_JUMP)
// 00479e6f: MOV ESI,0x61ffc6
//   XREF to: 0061ffc6 (DATA)
// 00479e74: MOV EDX,dword ptr [ECX + 0x11c]
// 00479e7a: MOV EDI,0x731
// 00479e7f: PUSH EDX
// 00479e80: MOV dword ptr [0x0067d20c],ESI
//   XREF to: 0067d20c (WRITE)
// 00479e86: MOV dword ptr [0x02f0d944],EDI
//   XREF to: 02f0d944 (WRITE)
// 00479e8c: CALL crt_memory.c_free_FUN_005fe659
//   XREF to: 005fe659 (UNCONDITIONAL_CALL)
// 00479e91: MOV EAX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479e97: ADD ESP,0x4
// 00479e9a: MOV dword ptr [EAX + 0x11c],0x0
// 00479ea4: JMP 0x00479c73
//   XREF to: 00479c73 (UNCONDITIONAL_JUMP)
// 00479ea9: XOR EBX,EBX
//   Label: LAB_00479ea9
// 00479eab: MOV ESI,dword ptr [EBP + 0x6a]
//   XREF to: Stack[-0x20] (READ)
// 00479eae: MOV BL,byte ptr [EBP + 0x76]
//   XREF to: Stack[-0x14] (READ)
// 00479eb1: TEST EBX,EBX
//   Label: LAB_00479eb1
// 00479eb3: JLE 0x00479c73
//   XREF to: 00479c73 (CONDITIONAL_JUMP)
// 00479eb9: PUSH ESI
//   Label: LAB_00479eb9
// 00479eba: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 00479ebf: ADD ESP,0x4
// 00479ec2: TEST EAX,EAX
// 00479ec4: JL 0x00479c73
//   XREF to: 00479c73 (CONDITIONAL_JUMP)
// 00479eca: CMP EAX,0xa
// 00479ecd: JNZ 0x00479eb9
//   XREF to: 00479eb9 (CONDITIONAL_JUMP)
// 00479ecf: DEC EBX
// 00479ed0: JMP 0x00479eb1
//   XREF to: 00479eb1 (UNCONDITIONAL_JUMP)
// 00479ed2: PUSH 0x741
//   Label: LAB_00479ed2
// 00479ed7: PUSH 0x61ffd9
//   XREF to: 0061ffd9 (DATA)
// 00479edc: PUSH EBX
// 00479edd: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00479ee2: ADD ESP,0xc
// 00479ee5: MOV ECX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479eeb: PUSH ECX
// 00479eec: CALL core_dmodel.cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010
//   XREF to: 00478010 (UNCONDITIONAL_CALL)
// 00479ef1: ADD ESP,0x4
// 00479ef4: MOV EBX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x4] (READ)
// 00479efa: PUSH EBX
// 00479efb: CALL core_dmodel.cpp_CKeyFramedModel_validatePartList_FUN_0047bf40
//   XREF to: 0047bf40 (UNCONDITIONAL_CALL)
// 00479f00: ADD ESP,0x4
// 00479f03: PUSH 0x0
// 00479f05: LEA EAX,[EBP + 0xfffff406]
//   XREF to: Stack[-0xc84] (DATA)
// 00479f0b: PUSH EAX
// 00479f0c: MOV dword ptr [EBX + 0x569c],0x0
// 00479f16: CALL shape_edittool.cpp_CPickList_dtor_FUN_004a3c80
//   XREF to: 004a3c80 (UNCONDITIONAL_CALL)
// 00479f1b: ADD ESP,0x8
// 00479f1e: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0x10] (DATA)
// 00479f21: POP EBP
// 00479f22: POP EDI
// 00479f23: POP ESI
// 00479f24: POP EBX
// 00479f25: RET
