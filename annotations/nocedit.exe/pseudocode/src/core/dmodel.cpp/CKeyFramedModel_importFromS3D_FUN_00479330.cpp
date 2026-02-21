// Name: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// Address: 00479330
// Address Range: [[00479330, 00479f25]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar1;
  SMRGLPrimitiveQuad **ppSVar2;
  SMRGLPrimitiveQuad *pSVar3;
  bool bVar4;
  float fVar5;
  double dVar6;
  _FILE *file;
  int iVar7;
  int iVar8;
  _FILE *p_Var9;
  uchar *puVar10;
  int iVar11;
  uint uVar12;
  char *pcVar13;
  char *pcVar14;
  CPickList local_c84;
  uchar auStack_8dc [300];
  char local_7b0 [260];
  char local_6ac [260];
  char local_5a8 [260];
  char local_4a4 [260];
  char local_3a0 [256];
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
  _FILE *local_24;
  _FILE *local_20;
  SMRGLPrimitiveQuad *local_1c;
  char local_18 [4];
  byte local_14 [4];
  
  pcVar14 = filename;
  do {
    pcVar13 = pcVar14;
    if (*pcVar14 == ':') goto LAB_0047935f;
    if (*pcVar14 == '\0') break;
    pcVar13 = pcVar14 + 1;
    if (*pcVar13 == ':') goto LAB_0047935f;
    pcVar14 = pcVar14 + 2;
  } while (*pcVar13 != '\0');
  pcVar13 = (char *)0x0;
LAB_0047935f:
  pcVar14 = filename;
  if (pcVar13 == (char *)0x0) {
    do {
      pcVar13 = pcVar14;
      if (*pcVar14 == '\\') goto LAB_00479383;
      if (*pcVar14 == '\0') break;
      pcVar13 = pcVar14 + 1;
      if (*pcVar13 == '\\') goto LAB_00479383;
      pcVar14 = pcVar14 + 2;
    } while (*pcVar13 != '\0');
    pcVar13 = (char *)0x0;
LAB_00479383:
    if (pcVar13 == (char *)0x0) {
      local_20 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
      goto LAB_004793ab;
    }
  }
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename,(char *)0x0,"rt","..\\core\\dmodel.cpp",0x60f);
LAB_004793ab:
  if (local_20 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x613;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  p_Var9 = local_20;
  iVar11 = 1;
  do {
    iVar7 = _fgetc(p_Var9);
    if (iVar7 < 0) break;
  } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
  iVar11 = _fscanf(local_20,"%d\n",&local_54);
  if (iVar11 == 1) goto LAB_00479441;
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
      p_Var9 = local_20;
      iVar11 = 1;
      do {
        iVar7 = _fgetc(p_Var9);
        if (iVar7 < 0) break;
      } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
      iVar11 = _fscanf(local_20,"%d,%d,%d,%d,%d,%d,%d\n",&local_50,&local_48,&local_34,&local_58,
                          &local_4c,&local_5c,&local_30);
    } while (iVar11 != 7);
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
              (this_ptr,local_34,local_48,local_50,1,local_4c);
    iVar11 = 1;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Skipping parts");
    p_Var9 = local_20;
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    for (iVar11 = 0; p_Var9 = local_20, iVar11 < local_58; iVar11 = iVar11 + 1) {
      iVar7 = 1;
      do {
        iVar8 = _fgetc(p_Var9);
        if (iVar8 < 0) break;
      } while ((iVar8 != 10) || (iVar7 = iVar7 + -1, 0 < iVar7));
    }
    this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
    this_ptr->part_list[0].poly_count = this_ptr->poly_count;
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing textures",0,0);
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    shape_edittool_cpp_CPickList_ctor_FUN_004a3b90(&local_c84);
    shape_edittool_cpp_CStrList_add_FUN_004a2b80(&local_c84.base,"Don't copy textures.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_c84.base,"Copy textures from another directory to art directory.");
    shape_edittool_cpp_CStrList_add_FUN_004a2b80
              (&local_c84.base,"Copy textures from path specified in .S3D file to art directory.");
    local_28 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                         (&local_c84,"What do you want to do about the textures?",-1,0);
    if (local_28 < 0) {
LAB_00479719:
      core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
      return;
    }
    if (local_28 == 1) {
      splitpath(filename,local_18,local_1a0,(char *)0x0,(char *)0x0);
      makepath(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
      iVar11 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                         (g_CEditorToolsPtr,"Enter directory to copy textures from",local_5a8,0x104,1);
      if (iVar11 == 0) goto LAB_00479719;
      splitpath(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
    }
    p_Var9 = local_20;
    iVar11 = 1;
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    for (iVar11 = 0; iVar11 < this_ptr->texture_count; iVar11 = iVar11 + 1) {
      pcVar14 = _fgets(local_6ac,0x104,local_20);
      if (pcVar14 == (char *)0x0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
        goto LAB_00479417;
      }
      pcVar14 = local_6ac;
      do {
        pcVar13 = pcVar14;
        if (*pcVar14 == '\n') goto LAB_0047983f;
        if (*pcVar14 == '\0') break;
        pcVar13 = pcVar14 + 1;
        if (*pcVar13 == '\n') goto LAB_0047983f;
        pcVar14 = pcVar14 + 2;
      } while (*pcVar13 != '\0');
      pcVar13 = (char *)0x0;
LAB_0047983f:
      if (pcVar13 != (char *)0x0) {
        *pcVar13 = '\0';
      }
      splitpath(local_6ac,(char *)0x0,(char *)0x0,local_3a0,local_2a0);
      if (local_28 != 0) {
        if (local_28 == 1) {
          makepath(local_7b0,local_18,local_1a0,local_3a0,local_2a0);
        }
        else if (local_28 == 2) {
          pcVar14 = local_6ac;
          pcVar13 = local_7b0;
          do {
            cVar1 = *pcVar14;
            *pcVar13 = cVar1;
            if (cVar1 == '\0') break;
            cVar1 = pcVar14[1];
            pcVar14 = pcVar14 + 2;
            pcVar13[1] = cVar1;
            pcVar13 = pcVar13 + 2;
          } while (cVar1 != '\0');
        }
        else {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 0x6a9;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        makepath(local_4a4,(char *)0x0,"art",local_3a0,local_2a0);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s");
        p_Var9 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_7b0,(char *)0x0,"rb","..\\core\\dmodel.cpp",0x5ef);
        if (p_Var9 != (_FILE *)0x0) {
          local_24 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_4a4,(char *)0x0,"wb","..\\core\\dmodel.cpp",0x5f2
                               );
          if (local_24 == (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\core\\dmodel.cpp",0x5f4);
          }
          else {
            while (iVar7 = _fgetc(p_Var9), -1 < iVar7) {
              _fputc(iVar7,local_24);
            }
            if (((p_Var9->_flag & 0x20) == 0) && ((local_24->_flag & 0x20) == 0)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\core\\dmodel.cpp",0x600);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\core\\dmodel.cpp",0x601);
            if (bVar4) goto LAB_004797c3;
          }
        }
        iVar7 = shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"I can't copy %s to %s.  Continue import anyway?",local_7b0,local_4a4
                          );
        if (iVar7 == 0) goto LAB_00479719;
      }
LAB_004797c3:
      makepath
                (this_ptr->texture_list[iVar11].textures[0].texture_name,(char *)0x0,(char *)0x0,
                 local_3a0,"raw");
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing polygons",0,0);
    p_Var9 = local_20;
    iVar11 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    for (iVar11 = 0; iVar11 < this_ptr->poly_count; iVar11 = iVar11 + 1) {
      iVar7 = _fscanf(local_20,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_44,&local_80,&local_68,
                         &local_74,local_7c,local_64,local_70,local_78,local_60,local_6c);
      if (iVar7 != 10) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
        goto LAB_00479417;
      }
      if (local_44 < 0) {
        local_44 = 0;
      }
      ppSVar2 = this_ptr->poly_vert_list;
      this_ptr->poly_texture_index_list[iVar11] = local_44;
      ppSVar2[iVar11 * 0x12 + 1] = (SMRGLPrimitiveQuad *)0x3;
      ppSVar2[iVar11 * 0x12 + 5] = (SMRGLPrimitiveQuad *)0x0;
      pSVar3 = ppSVar2[iVar11 * 0x12 + 5];
      ppSVar2[iVar11 * 0x12 + 4] = pSVar3;
      ppSVar2[iVar11 * 0x12 + 3] = pSVar3;
      ppSVar2[iVar11 * 0x12 + 2] = pSVar3;
      for (iVar7 = 0; iVar7 < (int)ppSVar2[iVar11 * 0x12 + 1]; iVar7 = iVar7 + 1) {
        ppSVar2[iVar11 * 0x12 + iVar7 * 3 + 6] = *(SMRGLPrimitiveQuad **)(local_7c + iVar7 * 4 + -4)
        ;
        dVar6 = 65536;
        local_1c = (SMRGLPrimitiveQuad *)
                   (int)ROUND(ROUND((double)*(float *)(local_64 + iVar7 * 4 + -4) * 65536)
                             );
        ppSVar2[iVar11 * 0x12 + iVar7 * 3 + 7] =
             (SMRGLPrimitiveQuad *)
             (int)ROUND(ROUND((double)*(float *)(local_64 + iVar7 * 4 + -4) * 65536));
        local_1c = (SMRGLPrimitiveQuad *)
                   (int)ROUND(ROUND(dVar6 * (double)*(float *)(local_70 + iVar7 * 4 + -4)));
        ppSVar2[iVar11 * 0x12 + iVar7 * 3 + 8] =
             (SMRGLPrimitiveQuad *)
             (int)ROUND(ROUND(dVar6 * (double)*(float *)(local_70 + iVar7 * 4 + -4)));
      }
    }
    wincore_windll_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing vertices",0,0);
    p_Var9 = local_20;
    iVar11 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    iVar11 = 0;
    while( true ) {
      p_Var9 = local_20;
      if (this_ptr->vertex_count * this_ptr->frame_count <= iVar11) {
        iVar11 = local_5c + 1;
        goto LAB_00479b74;
      }
      iVar7 = _fscanf(local_20,"%f,%f,%f\n",&local_40,&local_3c,&local_38);
      if (iVar7 != 3) break;
      fVar5 = (float)256;
      this_ptr->vertex_list[iVar11 * 3] = (CVector3i *)(int)ROUND(ROUND(local_40 * fVar5));
      this_ptr->vertex_list[iVar11 * 3 + 1] = (CVector3i *)(int)ROUND(ROUND(local_3c * fVar5));
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(ROUND(local_38 * fVar5));
      this_ptr->vertex_list[iVar11 * 3 + 2] = (CVector3i *)local_1c;
      iVar11 = iVar11 + 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
  } while( true );
LAB_00479b74:
  if (iVar11 < 1) goto LAB_00479c53;
  do {
    iVar7 = _fgetc(p_Var9);
    if (iVar7 < 0) goto LAB_00479c53;
  } while (iVar7 != 10);
  iVar11 = iVar11 + -1;
  goto LAB_00479b74;
LAB_00479c53:
  p_Var9 = local_20;
  for (iVar11 = local_30 + 1; 0 < iVar11; iVar11 = iVar11 + -1) {
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) goto LAB_00479c73;
    } while (iVar7 != 10);
  }
LAB_00479c73:
  do {
    p_Var9 = local_20;
    iVar11 = _fscanf(local_20," %s %d\n",local_a0,local_14);
    if (iVar11 != 2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var9,"..\\core\\dmodel.cpp",0x741);
      core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
      this_ptr->transparent_pixel_flag = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
      return;
    }
    iVar11 = stricmp(local_a0,"matProp");
    p_Var9 = local_20;
    if (iVar11 != 0) {
      for (uVar12 = (uint)local_14[0]; 0 < (int)uVar12; uVar12 = uVar12 - 1) {
        do {
          iVar11 = _fgetc(p_Var9);
          if (iVar11 < 0) goto LAB_00479c73;
        } while (iVar11 != 10);
      }
      goto LAB_00479c73;
    }
    if ((uint)local_14[0] + (this_ptr->texture_count + 1) * -3 != 0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x70e;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid matProp format!");
    }
    p_Var9 = local_20;
    iVar11 = 3;
    do {
      iVar7 = _fgetc(p_Var9);
      if (iVar7 < 0) break;
    } while ((iVar7 != 10) || (iVar11 = iVar11 + -1, 0 < iVar11));
    for (iVar11 = 0; p_Var9 = local_20, iVar11 < this_ptr->texture_count; iVar11 = iVar11 + 1) {
      local_2c = 0.0;
      _fscanf(local_20,"%f, %*f, %*f\n",&local_2c);
      iVar7 = 1;
      do {
        iVar8 = _fgetc(p_Var9);
        file = local_20;
        if (iVar8 < 0) break;
      } while ((iVar8 != 10) || (iVar7 = iVar7 + -1, 0 < iVar7));
      iVar7 = 1;
      do {
        iVar8 = _fgetc(file);
        if (iVar8 < 0) break;
      } while ((iVar8 != 10) || (iVar7 = iVar7 + -1, 0 < iVar7));
      local_2c = (local_2c + (float)-0.25) * (float)1.3333333333333299;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if (1.0 < local_2c) {
        local_2c = 1.0;
      }
      local_1c = (SMRGLPrimitiveQuad *)(int)ROUND(ROUND(local_2c * 255.0f));
      auStack_8dc[iVar11] = (uchar)local_1c;
    }
    puVar10 = shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                        (this_ptr->poly_count,"..\\core\\dmodel.cpp",0x725);
    this_ptr->env_map_opac_list = puVar10;
    if (puVar10 == (uchar *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 0x726;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    bVar4 = true;
    for (iVar11 = 0; iVar11 < this_ptr->poly_count; iVar11 = iVar11 + 1) {
      this_ptr->env_map_opac_list[iVar11] = auStack_8dc[this_ptr->poly_texture_index_list[iVar11]];
      if (5 < this_ptr->env_map_opac_list[iVar11]) {
        bVar4 = false;
      }
    }
    if (bVar4) {
      g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
      g_CurrentDebugLine = 0x731;
      shape_memdbg_cpp_free_FUN_005fe659(this_ptr->env_map_opac_list);
      this_ptr->env_map_opac_list = (uchar *)0x0;
    }
  } while( true );
}
