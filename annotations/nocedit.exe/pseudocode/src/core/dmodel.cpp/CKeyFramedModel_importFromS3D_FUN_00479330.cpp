// Name: core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330
// Address: 00479330
// Address Range: [[00479330, 00479f25]]
// Convention: __cdecl
// Signature: void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_dmodel_cpp_CKeyFramedModel_importFromS3D_FUN_00479330(CKeyFramedModel *this_ptr,char *filename)

{
  char cVar2;
  UIntegerFloat UVar3;
  bool bVar4;
  _FILE *p_Var5;
  int iVar6;
  int iVar8;
  int iVar9;
  int iVar7;
  char *pcVar10;
  _FILE *p_Var8;
  int iVar11;
  uchar *puVar9;
  int iVar10;
  uint uVar11;
  char *pcVar12;
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
  int local_80;
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
  int local_1c;
  char local_18 [4];
  byte local_14 [4];
  char cVar1;
  float fVar4;
  double dVar5;
  SMRGLPrimitiveQuad *pSVar2;
  bool bVar3;
  _FILE *file;
  
  pcVar13 = filename;
  do {
    pcVar12 = pcVar13;
    if (*pcVar13 == ':') goto LAB_0047935f;
    if (*pcVar13 == '\0') break;
    pcVar12 = pcVar13 + 1;
    if (*pcVar12 == ':') goto LAB_0047935f;
    pcVar13 = pcVar13 + 2;
  } while (*pcVar12 != '\0');
  pcVar12 = (char *)0x0;
LAB_0047935f:
  pcVar10 = filename;
  if (pcVar12 == (char *)0x0) {
    do {
      pcVar14 = pcVar10;
      if (*pcVar10 == '\\') goto LAB_00479383;
      if (*pcVar10 == '\0') break;
      pcVar14 = pcVar10 + 1;
      if (*pcVar14 == '\\') goto LAB_00479383;
      pcVar10 = pcVar10 + 2;
    } while (*pcVar14 != '\0');
    pcVar14 = (char *)0x0;
LAB_00479383:
    if (pcVar14 == (char *)0x0) {
      local_20 = engine_dosio_cpp_getFile_FUN_00481a50("models",filename,"rt");
      goto LAB_004793ab;
    }
  }
  local_20 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (filename,(char *)0x0,"rt","..\\core\\dmodel.cpp",1551);
LAB_004793ab:
  if (local_20 == (_FILE *)0x0) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 1555;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",filename);
  }
  p_Var5 = local_20;
  iVar10 = 1;
  do {
    iVar6 = _fgetc(p_Var5);
    if (iVar6 < 0) break;
  } while ((iVar6 != 10) || (iVar10 = iVar10 + -1, 0 < iVar10));
  iVar8 = _fscanf(local_20,"%d\n",&local_54);
  if (iVar8 == 1) goto LAB_00479441;
LAB_00479417:
  do {
    do {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 1566;
      core_main_c_displayErrorAndQuit_FUN_00506f10("%s is corrupt!",filename);
LAB_00479441:
      if ((local_54 < 0x66) || (0x67 < local_54)) {
        g_CurrentFilename = "..\\core\\dmodel.cpp";
        g_CurrentLineNumber = 1571;
        core_main_c_displayErrorAndQuit_FUN_00506f10
                  ("Can't import S3D file version %d, I can only do up to version %d.",local_54,0x67);
      }
      p_Var5 = local_20;
      iVar8 = 1;
      do {
        iVar9 = _fgetc(p_Var5);
        if (iVar9 < 0) break;
      } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
      iVar8 = _fscanf(local_20,"%d,%d,%d,%d,%d,%d,%d\n",&local_50,&local_48,&local_34,&local_58,
                         &local_4c,&local_5c,&local_30);
    } while (iVar8 != 7);
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    engine_2d_c_clearInputAndWait_FUN_00403260();
    core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
              (this_ptr,local_34,local_48,local_50,1,local_4c);
    iVar8 = 1;
    shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
              (g_CEditorToolsPtr,"Skipping parts");
    p_Var5 = local_20;
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
    for (iVar8 = 0; p_Var5 = local_20, iVar8 < local_58; iVar8 = iVar8 + 1) {
      iVar9 = 1;
      do {
        iVar7 = _fgetc(p_Var5);
        if (iVar7 < 0) break;
      } while ((iVar7 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
    }
    this_ptr->part_list[0].vertex_count = this_ptr->vertex_count;
    this_ptr->part_list[0].poly_count = this_ptr->poly_count;
    engine_special_cpp_clearScreen_FUN_005b3e70();
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
      iVar8 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter directory to copy textures from",local_5a8,0x104,1);
      if (iVar8 == 0) goto LAB_00479719;
      splitpath(local_5a8,local_18,local_1a0,(char *)0x0,(char *)0x0);
    }
    p_Var5 = local_20;
    iVar8 = 1;
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
    for (iVar8 = 0; iVar8 < this_ptr->texture_count; iVar8 = iVar8 + 1) {
      pcVar10 = _fgets(local_6ac,0x104,local_20);
      if (pcVar10 == (char *)0x0) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
        goto LAB_00479417;
      }
      pcVar10 = local_6ac;
      do {
        pcVar14 = pcVar10;
        if (*pcVar10 == '\n') goto LAB_0047983f;
        if (*pcVar10 == '\0') break;
        pcVar14 = pcVar10 + 1;
        if (*pcVar14 == '\n') goto LAB_0047983f;
        pcVar10 = pcVar10 + 2;
      } while (*pcVar14 != '\0');
      pcVar14 = (char *)0x0;
LAB_0047983f:
      if (pcVar14 != (char *)0x0) {
        *pcVar14 = '\0';
      }
      splitpath(local_6ac,(char *)0x0,(char *)0x0,local_3a0,local_2a0);
      if (local_28 != 0) {
        if (local_28 == 1) {
          makepath(local_7b0,local_18,local_1a0,local_3a0,local_2a0);
        }
        else if (local_28 == 2) {
          pcVar10 = local_6ac;
          pcVar14 = local_7b0;
          do {
            cVar1 = *pcVar10;
            *pcVar14 = cVar1;
            if (cVar1 == '\0') break;
            cVar2 = pcVar10[1];
            pcVar10 = pcVar10 + 2;
            pcVar14[1] = cVar2;
            pcVar14 = pcVar14 + 2;
          } while (cVar2 != '\0');
        }
        else {
          g_CurrentFilename = "..\\core\\dmodel.cpp";
          g_CurrentLineNumber = 1705;
          core_main_c_displayErrorAndQuit_FUN_00506f10("Hell froze.");
        }
        makepath(local_4a4,(char *)0x0,"art",local_3a0,local_2a0);
        shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
                  (g_CEditorToolsPtr,"Copying %s -> %s",local_7b0,local_4a4);
        p_Var8 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                           (local_7b0,(char *)0x0,"rb","..\\core\\dmodel.cpp",1519);
        if (p_Var8 != (_FILE *)0x0) {
          local_24 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                               (local_4a4,(char *)0x0,"wb","..\\core\\dmodel.cpp",1522
                               );
          if (local_24 == (_FILE *)0x0) {
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var8,"..\\core\\dmodel.cpp",1524);
          }
          else {
            while (iVar9 = _fgetc(p_Var8), -1 < iVar9) {
              _fputc(iVar9,local_24);
            }
            if (((p_Var8->_flag & 0x20) == 0) && ((local_24->_flag & 0x20) == 0)) {
              bVar4 = true;
            }
            else {
              bVar4 = false;
            }
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var8,"..\\core\\dmodel.cpp",1536);
            shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_24,"..\\core\\dmodel.cpp",1537);
            if (bVar4) goto LAB_004797c3;
          }
        }
        iVar9 = shape_edittool_cpp_CEditorTools_showDestructiveActionConfirmDialog_FUN_0049f060
                          (g_CEditorToolsPtr,"I can't copy %s to %s.  Continue import anyway?",local_7b0,local_4a4
                          );
        if (iVar9 == 0) goto LAB_00479719;
      }
LAB_004797c3:
      makepath
                (this_ptr->texture_list[iVar8].textures[0].texture_name,(char *)0x0,(char *)0x0,
                 local_3a0,"raw");
    }
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing polygons",0,0);
    p_Var5 = local_20;
    iVar8 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
    for (iVar8 = 0; iVar8 < this_ptr->poly_count; iVar8 = iVar8 + 1) {
      iVar9 = _fscanf(local_20,"%d, %d,%f,%f, %d,%f,%f, %d,%f,%f\n",&local_44,&local_80,&local_68,
                         &local_74,local_7c,local_64,local_70,local_78,local_60,local_6c);
      if (iVar9 != 10) {
        shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
        goto LAB_00479417;
      }
      if (local_44 < 0) {
        local_44 = 0;
      }
      pSVar2 = this_ptr->poly_vert_list;
      this_ptr->poly_texture_index_list[iVar8] = local_44;
      pSVar2[iVar8].base.base.count = 3;
      pSVar2[iVar8].base.surface_normal.D.i = 0;
      UVar3 = pSVar2[iVar8].base.surface_normal.D;
      pSVar2[iVar8].base.surface_normal.C = UVar3;
      pSVar2[iVar8].base.surface_normal.B = UVar3;
      pSVar2[iVar8].base.surface_normal.A = UVar3;
      for (iVar9 = 0; iVar9 < pSVar2[iVar8].base.base.count; iVar9 = iVar9 + 1) {
        pSVar2[iVar8].vertices[iVar9].vertex_index = *(int *)(local_7c + iVar9 * 4 + -4);
        dVar5 = 65536;
        local_1c = (int)ROUND(ROUND((double)*(float *)(local_64 + iVar9 * 4 + -4) * 65536)
                             );
        pSVar2[iVar8].vertices[iVar9].texture_u =
             (int)ROUND(ROUND((double)*(float *)(local_64 + iVar9 * 4 + -4) * 65536));
        local_1c = (int)ROUND(ROUND(dVar5 * (double)*(float *)(local_70 + iVar9 * 4 + -4)));
        pSVar2[iVar8].vertices[iVar9].texture_v =
             (int)ROUND(ROUND(dVar5 * (double)*(float *)(local_70 + iVar9 * 4 + -4)));
      }
    }
    engine_special_cpp_clearScreen_FUN_005b3e70();
    engine_2d_c_drawText_FUN_00401fd0("Importing vertices",0,0);
    p_Var5 = local_20;
    iVar8 = 1;
    wincore_wddvmem_cpp_swapBuffers_FUN_005eda20();
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
    iVar8 = 0;
    while( true ) {
      p_Var5 = local_20;
      if (this_ptr->vertex_count * this_ptr->frame_count <= iVar8) {
        iVar8 = local_5c + 1;
        goto LAB_00479b74;
      }
      iVar9 = _fscanf(local_20,"%f,%f,%f\n",&local_40,&local_3c,&local_38);
      if (iVar9 != 3) break;
      fVar4 = (float)256;
      this_ptr->vertex_list[iVar8].x = (int)ROUND(ROUND(local_40 * fVar4));
      this_ptr->vertex_list[iVar8].y = (int)ROUND(ROUND(local_3c * fVar4));
      local_1c = (int)ROUND(ROUND(local_38 * fVar4));
      this_ptr->vertex_list[iVar8].z = local_1c;
      iVar8 = iVar8 + 1;
    }
    shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
  } while( true );
LAB_00479b74:
  if (iVar8 < 1) goto LAB_00479c53;
  do {
    iVar9 = _fgetc(p_Var5);
    if (iVar9 < 0) goto LAB_00479c53;
  } while (iVar9 != 10);
  iVar8 = iVar8 + -1;
  goto LAB_00479b74;
LAB_00479c53:
  p_Var5 = local_20;
  for (iVar8 = local_30 + 1; 0 < iVar8; iVar8 = iVar8 + -1) {
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) goto LAB_00479c73;
    } while (iVar9 != 10);
  }
LAB_00479c73:
  do {
    p_Var5 = local_20;
    iVar8 = _fscanf(local_20," %s %d\n",local_a0,local_14);
    if (iVar8 != 2) {
      shape_memdbg_cpp_closeFile_FUN_0050f9b0(p_Var5,"..\\core\\dmodel.cpp",1857);
      core_dmodel_cpp_CKeyFramedModel_calculateFrameBounds_FUN_00478010(this_ptr);
      core_dmodel_cpp_CKeyFramedModel_validatePartList_FUN_0047bf40(this_ptr);
      this_ptr->transparent_pixel_flag = 0;
      shape_edittool_cpp_CPickList_dtor_FUN_004a3c80(&local_c84,0);
      return;
    }
    iVar8 = _stricmp(local_a0,"matProp");
    p_Var5 = local_20;
    if (iVar8 != 0) {
      for (uVar11 = (uint)local_14[0]; 0 < (int)uVar11; uVar11 = uVar11 - 1) {
        do {
          iVar8 = _fgetc(p_Var5);
          if (iVar8 < 0) goto LAB_00479c73;
        } while (iVar8 != 10);
      }
      goto LAB_00479c73;
    }
    if ((uint)local_14[0] + (this_ptr->texture_count + 1) * -3 != 0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 1806;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Invalid matProp format!");
    }
    p_Var5 = local_20;
    iVar8 = 3;
    do {
      iVar9 = _fgetc(p_Var5);
      if (iVar9 < 0) break;
    } while ((iVar9 != 10) || (iVar8 = iVar8 + -1, 0 < iVar8));
    for (iVar8 = 0; p_Var5 = local_20, iVar8 < this_ptr->texture_count; iVar8 = iVar8 + 1) {
      local_2c = 0.0;
      _fscanf(local_20,"%f, %*f, %*f\n",&local_2c);
      iVar9 = 1;
      do {
        iVar11 = _fgetc(p_Var5);
        file = local_20;
        if (iVar11 < 0) break;
      } while ((iVar11 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
      iVar9 = 1;
      do {
        iVar11 = _fgetc(file);
        if (iVar11 < 0) break;
      } while ((iVar11 != 10) || (iVar9 = iVar9 + -1, 0 < iVar9));
      local_2c = (local_2c + (float)-0.25) * (float)1.3333333333333299;
      if (local_2c < 0.0) {
        local_2c = 0.0;
      }
      if (1.0 < local_2c) {
        local_2c = 1.0;
      }
      local_1c = (int)ROUND(ROUND(local_2c * 255.0f));
      auStack_8dc[iVar8] = (uchar)local_1c;
    }
    puVar9 = (uchar *)shape_memdbg_cpp_debugAllocTracked2_FUN_0050f1f0
                       (this_ptr->poly_count,"..\\core\\dmodel.cpp",1829);
    this_ptr->env_map_opac_list = puVar9;
    if (puVar9 == (uchar *)0x0) {
      g_CurrentFilename = "..\\core\\dmodel.cpp";
      g_CurrentLineNumber = 1830;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for envMapOpacList");
    }
    bVar3 = true;
    for (iVar8 = 0; iVar8 < this_ptr->poly_count; iVar8 = iVar8 + 1) {
      this_ptr->env_map_opac_list[iVar8] = auStack_8dc[this_ptr->poly_texture_index_list[iVar8]];
      if (5 < this_ptr->env_map_opac_list[iVar8]) {
        bVar3 = false;
      }
    }
    if (bVar3) {
      g_CurrentDebugFilename = "..\\core\\dmodel.cpp";
      g_CurrentDebugLine = 0x731;
      shape_memdbg_cpp_free_FUN_005fe659(this_ptr->env_map_opac_list);
      this_ptr->env_map_opac_list = (uchar *)0x0;
    }
  } while( true );
}
