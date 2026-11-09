// Name: core_set.cpp_FUN_0054d3c0
// Address: 0054d3c0
// Address Range: [[0054d3c0, 0054e3ba]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_FUN_0054d3c0(CDemonSet *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonSet * core_set_cpp_FUN_0054d3c0(CDemonSet *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  CTerrain *this_ptr;
  char *pcVar4;
  _FILE *p_Var5;
  CDemonSet *pCVar6;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar7;
  byte *puVar8;
  char *pcVar9;
  int iVar10;
  byte local_330 [256];
  char local_230 [256];
  char local_130 [100];
  char local_cc [100];
  CVector3f local_68;
  CVector3f local_5c;
  byte local_4c [4];
  float local_48;
  byte *local_44;
  byte *local_40;
  byte *local_3c;
  byte *local_38;
  CMatrix3x3f *local_34;
  byte *local_30;
  byte *local_2c;
  byte *local_28;
  byte *local_24;
  CMatrix3x3f *local_20;
  byte *local_1c;
  byte *local_18;
  byte *local_14;
  
  iVar10 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set");
  core_level_cpp_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_0054d370(param_1);
  p_Var5 = engine_dosio_cpp_FUN_00479180("models",param_2,&DAT_005f0490);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d1d400 = "..\\core\\set.cpp";
    _DAT_01d1d404 = 0x15c;
    core_main_c_FUN_005030e0("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var5,&DAT_005f04c7,&param_1->field_0x15acc0);
  _fscanf(p_Var5,&DAT_005f04cb,&param_1->field_0x15aea8);
  _fscanf(p_Var5,&DAT_005f04cf,local_330);
  _fscanf(p_Var5,&DAT_005f04d3,local_130);
  _fscanf(p_Var5,&DAT_005f04d7,&param_1->field_0x14d150);
  puVar8 = &param_1->field_0x14d154;
  if (*(int *)&param_1->field_0x15acc0 < 0x1e) {
    *(uint *)&param_1->field_0x14d154 = 0xbf800000;
    *(uint *)&param_1->field_0x14d158 = 0xbf800000;
    *(uint *)&param_1->field_0x14d15c = 0xbf800000;
    local_48 = SQRT(*(float *)&param_1->field_0x14d15c * *(float *)&param_1->field_0x14d15c +
                    *(float *)puVar8 * *(float *)puVar8 +
                    *(float *)&param_1->field_0x14d158 * *(float *)&param_1->field_0x14d158);
    if (local_48 <= 0.0) {
      *(uint *)&param_1->field_0x14d15c = 0;
      *(uint *)&param_1->field_0x14d158 = *(uint *)&param_1->field_0x14d15c;
      *(uint *)puVar8 = *(uint *)&param_1->field_0x14d158;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
    else {
      fVar3 = 1.0 / local_48;
      *(float *)puVar8 = *(float *)puVar8 * fVar3;
      *(float *)&param_1->field_0x14d158 = *(float *)&param_1->field_0x14d158 * fVar3;
      *(float *)&param_1->field_0x14d15c = *(float *)&param_1->field_0x14d15c * fVar3;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
  }
  else {
    _fscanf(p_Var5,"%f,%f,%f,%f\n",puVar8,&param_1->field_0x14d158,&param_1->field_0x14d15c,
               &param_1->field_0x14d160);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x11) {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%d,%d,%d\n",local_4c,&param_1->field_0x15ac40,&param_1->field_0x15ac44,
               &param_1->field_0x15ac48);
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%f,%f\n",&param_1->field_0x15ac4c,&param_1->field_0x15ac50,
               &param_1->field_0x15ac54);
    _fscanf(p_Var5,"%f,%f,%f,%f\n",&param_1->field_0x15ac58,&param_1->field_0x15ac5c,local_4c,
               local_4c);
    *(uint *)&param_1->field_0x15ac60 = 0x42480000;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00454ab0
              (&param_1->field_0x15ac40,p_Var5,*(int *)&param_1->field_0x15acc0);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%f,%f\n",&g_CWaterPtr->field_0x4,&g_CWaterPtr->field_0x8);
  if (*(int *)&param_1->field_0x15acc0 < 0x1f) {
    DAT_00625c98 = 0x2000;
    _DAT_02c8afc0 = 0;
    _DAT_02c8afc4 = 0;
    _DAT_00625c94 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%d,%f,%f\n",&DAT_00625c94,&DAT_00625c98,&DAT_02c8afc0,&DAT_02c8afc4);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%d,%s\n",&param_1->field_0x15aca4,&param_1->field_0x15aca8);
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    iVar10 = _strnicmp(local_130,&DAT_005f052b,4);
    if (iVar10 == 0) {
      *(uint *)g_CWaterPtr = 1;
    }
    else {
      *(uint *)g_CWaterPtr = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0527,g_CWaterPtr);
  }
  if (*(int *)&param_1->field_0x15acc0 < 6) {
    *(uint *)&param_1->field_0x161640 = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0530,&param_1->field_0x161640);
  }
  pcVar4 = &param_1->field_0x161644;
  if (*(int *)&param_1->field_0x15acc0 < 0xc) {
    pcVar9 = "NITESKY.RAW";
    do {
      cVar2 = *pcVar9;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
    *(uint *)&param_1->field_0x161664 = 0x4000;
  }
  else {
    _fscanf(p_Var5,"%d,%s\n",&param_1->field_0x161664,pcVar4);
  }
  pcVar4 = &param_1->field_0x15ae64;
  if (*(int *)&param_1->field_0x15acc0 < 0xd) {
    pcVar9 = &DAT_005f054e;
    *(uint *)&param_1->field_0x15ae60 = 0;
    do {
      cVar2 = *pcVar9;
      *pcVar4 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar4[1] = cVar2;
      pcVar4 = pcVar4 + 2;
    } while (cVar2 != '\0');
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%s\n",&param_1->field_0x15ae60,pcVar4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x19) {
    *(uint *)&param_1->field_0x161680 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0553,&param_1->field_0x161680);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x1d) {
    *(uint *)&param_1->field_0x15acbc = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0557,&param_1->field_0x15acbc);
  }
  engine_dosio_cpp_FUN_00479580(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar10 = _stricmp(local_230,"train");
  this_ptr = 0x02C8AE68;
  if (iVar10 == 0) {
    *(uint *)&param_1->field_0x15acb8 = 1;
    core_terrain_cpp_CTerrain_init_FUN_0059f380(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_0059f3c0(0x02C8AE68);
    *(uint *)&param_1->field_0x15acb8 = 0;
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005f0561,&param_1->field_0x19a2c);
  iVar10 = 0;
  if (0 < *(int *)&param_1->field_0x19a2c) {
    this_ptr_00 = (C3DSLight *)&param_1->field_0x19a30;
    do {
      core_setutil_cpp_FUN_0055c800(this_ptr_00,p_Var5);
      iVar10 = iVar10 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar10 < *(int *)&param_1->field_0x19a2c);
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005f0565,param_1);
  iVar10 = 0;
  if (0 < *(int *)param_1) {
    pCVar7 = (C3DSCamera *)&param_1->field_0x4;
    do {
      core_setutil_cpp_FUN_0055c1b0(pCVar7,p_Var5);
      iVar10 = iVar10 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar10 < *(int *)param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 < 1) {
    *(uint *)&param_1->field_0x15aed0 = 0;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f0599,4);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 0;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 3;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 0;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05ab,4);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 3;
    }
    *(uint *)&param_1->field_0x15aed4 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f0569,&param_1->field_0x15aed0);
    _fscanf(p_Var5,&DAT_005f056d,&param_1->field_0x15aed4);
    iVar10 = 0;
    if (0 < *(int *)&param_1->field_0x15aed4) {
      local_44 = &param_1->field_0x15aed8;
      local_14 = &param_1->field_0x15af18;
      local_34 = (CMatrix3x3f *)&param_1->field_0x15aef0;
      local_18 = &param_1->field_0x15aee4;
      local_2c = &param_1->field_0x15aee8;
      local_30 = &param_1->field_0x15aeec;
      local_24 = &param_1->field_0x15aee0;
      puVar8 = &param_1->field_0x15aedc;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_44 + iVar10 * 0x44,puVar8,local_24);
        _fscanf(p_Var5,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_5c,&local_5c.field_0x8,&local_5c.field_0x4);
        core_dirmat_cpp_FUN_0045f3e0(local_34,&local_5c);
        puVar8 = puVar8 + 0x44;
        _fscanf(p_Var5,&DAT_005f058f,local_14);
        iVar10 = iVar10 + 1;
        local_14 = local_14 + 0x44;
        local_34 = local_34 + 0x44;
        local_18 = local_18 + 0x44;
        local_30 = local_30 + 0x44;
        local_2c = local_2c + 0x44;
        local_24 = local_24 + 0x44;
      } while (iVar10 < *(int *)&param_1->field_0x15aed4);
    }
  }
  if (*(int *)&param_1->field_0x15acc0 < 3) {
    *(uint *)&param_1->field_0x15f694 = 2;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 8;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05ba,4);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 3;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 2;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 7;
    }
    iVar10 = _strnicmp(local_130,"castle",6);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005f05d3,4);
    if (iVar10 == 0) {
      *(uint *)&param_1->field_0x15f694 = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05b0,&param_1->field_0x15f694);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x18) {
    *(uint *)&param_1->field_0x15ac8c = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05d8,&param_1->field_0x15ac8c);
  }
  if ((3 < *(int *)&param_1->field_0x15acc0) && (*(int *)&param_1->field_0x15acc0 < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_0055b8f0(param_1,p_Var5);
  }
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    *(uint *)&param_1->field_0x15b428 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005f05dc,&param_1->field_0x15b428);
    iVar10 = 0;
    if (0 < *(int *)&param_1->field_0x15b428) {
      local_40 = &param_1->field_0x15b42c;
      local_20 = (CMatrix3x3f *)&param_1->field_0x15b444;
      local_28 = &param_1->field_0x15b43c;
      local_1c = &param_1->field_0x15b440;
      local_3c = &param_1->field_0x15b430;
      local_38 = &param_1->field_0x15b434;
      puVar8 = &param_1->field_0x15b438;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_40 + iVar10 * 0x44,local_3c,local_38);
        _fscanf(p_Var5,"%f,%f,%f\n",puVar8,local_28,local_1c);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_68,&local_68.field_0x8,&local_68.field_0x4);
        iVar10 = iVar10 + 1;
        core_dirmat_cpp_FUN_0045f3e0(local_20,&local_68);
        puVar8 = puVar8 + 0x44;
        local_20 = local_20 + 0x44;
        local_28 = local_28 + 0x44;
        local_1c = local_1c + 0x44;
        local_3c = local_3c + 0x44;
        local_38 = local_38 + 0x44;
      } while (iVar10 < *(int *)&param_1->field_0x15b428);
    }
    core_setdir_cpp_FUN_0055bf10(param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0xe) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (0x13 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
    iVar10 = 0;
    if (0 < *(int *)param_1) {
      pCVar7 = (C3DSCamera *)&param_1->field_0x4;
      do {
        core_setutil_cpp_FUN_0055c540(pCVar7,p_Var5);
        iVar10 = iVar10 + 1;
        pCVar7 = pCVar7 + 1;
      } while (iVar10 < *(int *)param_1);
    }
  }
  _fclose(p_Var5);
  iVar10 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading set geometry");
  core_level_cpp_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar10);
  puVar8 = &param_1->field_0x14d0f0;
  iVar10 = _stricmp(puVar8,local_130);
  if (iVar10 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00559580(param_1);
  }
  else {
    pcVar4 = local_130;
    pcVar9 = puVar8;
    do {
      cVar2 = *pcVar4;
      *pcVar9 = cVar2;
      if (cVar2 == '\0') break;
      cVar2 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar9[1] = cVar2;
      pcVar9 = pcVar9 + 2;
    } while (cVar2 != '\0');
    p_Var5 = engine_dosio_cpp_FUN_00479180(&DAT_005f0616,puVar8,&DAT_005f0613);
    if (p_Var5 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0057dc40();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_FUN_005acff0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_005b2510();
    }
    else {
      _fclose(p_Var5);
      core_dtrace_cpp_FUN_0048afa0(&g_CDemonRaytraceInstance,puVar8);
    }
    core_path_cpp_resetAllPathMaps_FUN_00535280();
  }
  iVar10 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_00531090("Loading thumbs");
  core_level_cpp_FUN_004fe9c0(0x01D1BD1C,pcVar4,iVar10);
  pcVar4 = local_cc;
  pcVar9 = &param_1->field_0x14d0f0;
  do {
    cVar2 = *pcVar9;
    *pcVar4 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar4[1] = cVar2;
    pcVar4 = pcVar4 + 2;
  } while (cVar2 != '\0');
  pcVar4 = local_cc;
  do {
    pcVar9 = pcVar4;
    if (*pcVar4 == '.') goto LAB_0054debe;
    if (*pcVar4 == '\0') break;
    pcVar9 = pcVar4 + 1;
    if (*pcVar9 == '.') goto LAB_0054debe;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0054debe:
  if (pcVar9 == (char *)0x0) {
    pcVar4 = local_cc;
    do {
      pcVar9 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0054dee7;
      if (*pcVar4 == '\0') break;
      pcVar9 = pcVar4 + 1;
      if (*pcVar9 == '\0') goto LAB_0054dee7;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_0054dee7:
  pcVar4 = &DAT_005f0651;
  do {
    cVar2 = *pcVar4;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_FUN_0055b220(param_1,local_cc);
  if (*(int *)&param_1->field_0x15aca4 != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_004668a0
              (&g_CKeyFramedModelInstance,&param_1->field_0x15aca8);
  }
  iVar10 = 0;
  pCVar6 = param_1;
  if (0 < *(int *)param_1) {
    do {
      uVar1 = *(uint *)&param_1->field_0x14d150;
      *(uint *)&pCVar6->field_0x150 = 0;
      *(uint *)&pCVar6->field_0x1a4 = 1;
      iVar10 = iVar10 + 1;
      *(uint *)&pCVar6->field_0x14c = uVar1;
      pCVar6 = (CDemonSet *)&pCVar6->field_0x1a4;
    } while (iVar10 < *(int *)param_1);
  }
  _DAT_02026348 = 1;
  return param_1;
}
