// Name: core_set.cpp_FUN_00532b80
// Address: 00532b80
// Address Range: [[00532b80, 00533b7a]]
// Convention: unknown
// Signature: CDemonSet * core_set_cpp_FUN_00532b80(CDemonSet *param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

CDemonSet * core_set_cpp_FUN_00532b80(CDemonSet *param_1,char *param_2)

{
  char cVar1;
  float fVar2;
  CTerrain *this_ptr;
  char *pcVar3;
  _FILE *p_Var4;
  int iVar5;
  CDemonSet *pCVar6;
  C3DSLight *this_ptr_00;
  C3DSCamera *pCVar7;
  byte *puVar8;
  char *pcVar9;
  uint uVar10;
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
  
  uVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar10);
  core_set_cpp_CDemonSet_clear_FUN_00532b30(param_1);
  p_Var4 = engine_dosio_cpp_FUN_004659c0("models",param_2,&DAT_005d012d);
  if (p_Var4 == (_FILE *)0x0) {
    _DAT_01d71de0 = "..\\core\\set.cpp";
    _DAT_01d71de4 = 0x16a;
    core_main_c_FUN_004e4330("CDemonSet::Unable to open %s",param_2);
  }
  _fscanf(p_Var4,&DAT_005d0164,&param_1->field_0x15acc0);
  _fscanf(p_Var4,&DAT_005d0168,&param_1->field_0x15aea8);
  _fscanf(p_Var4,&DAT_005d016c,local_330);
  _fscanf(p_Var4,&DAT_005d0170,local_130);
  _fscanf(p_Var4,&DAT_005d0174,&param_1->field_0x14d150);
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
      fVar2 = 1.0 / local_48;
      *(float *)puVar8 = *(float *)puVar8 * fVar2;
      *(float *)&param_1->field_0x14d158 = *(float *)&param_1->field_0x14d158 * fVar2;
      *(float *)&param_1->field_0x14d15c = *(float *)&param_1->field_0x14d15c * fVar2;
      *(uint *)&param_1->field_0x14d160 = 0;
    }
  }
  else {
    _fscanf(p_Var4,"%f,%f,%f,%f\n",puVar8,&param_1->field_0x14d158,&param_1->field_0x14d15c,
               &param_1->field_0x14d160);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0) {
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x11) {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%d,%d,%d\n",local_4c,&param_1->field_0x15ac40,&param_1->field_0x15ac44,
               &param_1->field_0x15ac48);
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%f,%f\n",&param_1->field_0x15ac4c,&param_1->field_0x15ac50,
               &param_1->field_0x15ac54);
    _fscanf(p_Var4,"%f,%f,%f,%f\n",&param_1->field_0x15ac58,&param_1->field_0x15ac5c,local_4c,
               local_4c);
    *(uint *)&param_1->field_0x15ac60 = 0x42480000;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00450c00
              (&param_1->field_0x15ac40,p_Var4,*(int *)&param_1->field_0x15acc0);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%f,%f\n",&g_CWaterPtr->field_0x4,&g_CWaterPtr->field_0x8);
  if (*(int *)&param_1->field_0x15acc0 < 0x1f) {
    DAT_00606b28 = 0x2000;
    _DAT_02cfd960 = 0;
    _DAT_02cfd964 = 0;
    _DAT_00606b24 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%f,%d,%f,%f\n",&DAT_00606b24,&DAT_00606b28,&DAT_02cfd960,&DAT_02cfd964);
  }
  _fgets(local_330,0xff,p_Var4);
  _fscanf(p_Var4,"%d,%s\n",&param_1->field_0x15aca4,&param_1->field_0x15aca8);
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    iVar5 = _strnicmp(local_130,&DAT_005d01c8,4);
    if (iVar5 == 0) {
      *(uint *)g_CWaterPtr = 1;
    }
    else {
      *(uint *)g_CWaterPtr = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01c4,g_CWaterPtr);
  }
  if (*(int *)&param_1->field_0x15acc0 < 6) {
    *(uint *)&param_1->field_0x161640 = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01cd,&param_1->field_0x161640);
  }
  pcVar3 = &param_1->field_0x161644;
  if (*(int *)&param_1->field_0x15acc0 < 0xc) {
    pcVar9 = "NITESKY.RAW";
    do {
      cVar1 = *pcVar9;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
    *(uint *)&param_1->field_0x161664 = 0x4000;
  }
  else {
    _fscanf(p_Var4,"%d,%s\n",&param_1->field_0x161664,pcVar3);
  }
  pcVar3 = &param_1->field_0x15ae64;
  if (*(int *)&param_1->field_0x15acc0 < 0xd) {
    pcVar9 = &DAT_005d01eb;
    *(uint *)&param_1->field_0x15ae60 = 0;
    do {
      cVar1 = *pcVar9;
      *pcVar3 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar9[1];
      pcVar9 = pcVar9 + 2;
      pcVar3[1] = cVar1;
      pcVar3 = pcVar3 + 2;
    } while (cVar1 != '\0');
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,"%d,%s\n",&param_1->field_0x15ae60,pcVar3);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x19) {
    *(uint *)&param_1->field_0x161680 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01f0,&param_1->field_0x161680);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x1d) {
    *(uint *)&param_1->field_0x15acbc = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d01f4,&param_1->field_0x15acbc);
  }
  engine_dosio_cpp_FUN_00465e50(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar5 = _stricmp(local_230,"train");
  this_ptr = 0x02CFD8B8;
  if (iVar5 == 0) {
    *(uint *)&param_1->field_0x15acb8 = 1;
    core_terrain_cpp_CTerrain_init_FUN_00572370(this_ptr);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_005723b0(0x02CFD8B8);
    *(uint *)&param_1->field_0x15acb8 = 0;
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005d01fe,&param_1->field_0x19a2c);
  iVar5 = 0;
  if (0 < *(int *)&param_1->field_0x19a2c) {
    this_ptr_00 = (C3DSLight *)&param_1->field_0x19a30;
    do {
      core_setutil_cpp_FUN_005421c0(this_ptr_00,p_Var4);
      iVar5 = iVar5 + 1;
      this_ptr_00 = this_ptr_00 + 1;
    } while (iVar5 < *(int *)&param_1->field_0x19a2c);
  }
  if (10 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
  }
  _fscanf(p_Var4,&DAT_005d0202,param_1);
  iVar5 = 0;
  if (0 < *(int *)param_1) {
    pCVar7 = (C3DSCamera *)&param_1->field_0x4;
    do {
      core_setutil_cpp_FUN_00541b70(pCVar7,p_Var4);
      iVar5 = iVar5 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar5 < *(int *)param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 < 1) {
    *(uint *)&param_1->field_0x15aed0 = 0;
    iVar5 = _strnicmp(local_130,"mauso",5);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 2;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0236,4);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 0;
    }
    iVar5 = _strnicmp(local_130,"smill",5);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 3;
    }
    iVar5 = _strnicmp(local_130,"pier59",6);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 0;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0248,4);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15aed0 = 3;
    }
    *(uint *)&param_1->field_0x15aed4 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0206,&param_1->field_0x15aed0);
    _fscanf(p_Var4,&DAT_005d020a,&param_1->field_0x15aed4);
    iVar5 = 0;
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
        _fscanf(p_Var4,"%f,%f,%f\n",local_44 + iVar5 * 0x44,puVar8,local_24);
        _fscanf(p_Var4,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_5c,&local_5c.field_0x8,&local_5c.field_0x4);
        core_dirmat_cpp_FUN_0045b550(local_34,&local_5c);
        puVar8 = puVar8 + 0x44;
        _fscanf(p_Var4,&DAT_005d022c,local_14);
        iVar5 = iVar5 + 1;
        local_14 = local_14 + 0x44;
        local_34 = local_34 + 0x44;
        local_18 = local_18 + 0x44;
        local_30 = local_30 + 0x44;
        local_2c = local_2c + 0x44;
        local_24 = local_24 + 0x44;
      } while (iVar5 < *(int *)&param_1->field_0x15aed4);
    }
  }
  if (*(int *)&param_1->field_0x15acc0 < 3) {
    *(uint *)&param_1->field_0x15f694 = 2;
    iVar5 = _strnicmp(local_130,"mauso",5);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 8;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0257,4);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 3;
    }
    iVar5 = _strnicmp(local_130,"smill",5);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 2;
    }
    iVar5 = _strnicmp(local_130,"pier59",6);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 7;
    }
    iVar5 = _strnicmp(local_130,"castle",6);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 2;
    }
    iVar5 = _strnicmp(local_130,&DAT_005d0270,4);
    if (iVar5 == 0) {
      *(uint *)&param_1->field_0x15f694 = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d024d,&param_1->field_0x15f694);
  }
  if (*(int *)&param_1->field_0x15acc0 < 0x18) {
    *(uint *)&param_1->field_0x15ac8c = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0275,&param_1->field_0x15ac8c);
  }
  if ((3 < *(int *)&param_1->field_0x15acc0) && (*(int *)&param_1->field_0x15acc0 < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_005412b0(param_1,p_Var4);
  }
  if (*(int *)&param_1->field_0x15acc0 < 5) {
    *(uint *)&param_1->field_0x15b428 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var4);
    _fscanf(p_Var4,&DAT_005d0279,&param_1->field_0x15b428);
    iVar5 = 0;
    if (0 < *(int *)&param_1->field_0x15b428) {
      local_40 = &param_1->field_0x15b42c;
      local_20 = (CMatrix3x3f *)&param_1->field_0x15b444;
      local_28 = &param_1->field_0x15b43c;
      local_1c = &param_1->field_0x15b440;
      local_3c = &param_1->field_0x15b430;
      local_38 = &param_1->field_0x15b434;
      puVar8 = &param_1->field_0x15b438;
      do {
        _fscanf(p_Var4,"%f,%f,%f\n",local_40 + iVar5 * 0x44,local_3c,local_38);
        _fscanf(p_Var4,"%f,%f,%f\n",puVar8,local_28,local_1c);
        _fscanf(p_Var4,"%f,%f,%f\n",&local_68,&local_68.field_0x8,&local_68.field_0x4);
        iVar5 = iVar5 + 1;
        core_dirmat_cpp_FUN_0045b550(local_20,&local_68);
        puVar8 = puVar8 + 0x44;
        local_20 = local_20 + 0x44;
        local_28 = local_28 + 0x44;
        local_1c = local_1c + 0x44;
        local_3c = local_3c + 0x44;
        local_38 = local_38 + 0x44;
      } while (iVar5 < *(int *)&param_1->field_0x15b428);
    }
    core_setdir_cpp_FUN_005418d0(param_1);
  }
  if (*(int *)&param_1->field_0x15acc0 == 0xe) {
    _fgets(local_330,0xff,p_Var4);
    _fgets(local_330,0xff,p_Var4);
  }
  if (0x13 < *(int *)&param_1->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var4);
    iVar5 = 0;
    if (0 < *(int *)param_1) {
      pCVar7 = (C3DSCamera *)&param_1->field_0x4;
      do {
        core_setutil_cpp_FUN_00541f00(pCVar7,p_Var4);
        iVar5 = iVar5 + 1;
        pCVar7 = pCVar7 + 1;
      } while (iVar5 < *(int *)param_1);
    }
  }
  _fclose(p_Var4);
  uVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading set geometry");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar10);
  puVar8 = &param_1->field_0x14d0f0;
  iVar5 = _stricmp(puVar8,local_130);
  if (iVar5 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_0053ef40(param_1);
  }
  else {
    pcVar3 = local_130;
    pcVar9 = puVar8;
    do {
      cVar1 = *pcVar3;
      *pcVar9 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar3[1];
      pcVar3 = pcVar3 + 2;
      pcVar9[1] = cVar1;
      pcVar9 = pcVar9 + 2;
    } while (cVar1 != '\0');
    p_Var4 = engine_dosio_cpp_FUN_004659c0(&DAT_005d02b3,puVar8,&DAT_005d02b0);
    if (p_Var4 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_00560d70();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_FUN_0057a8a0();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_00580790();
    }
    else {
      _fclose(p_Var4);
      core_dtrace_cpp_FUN_00473b20(&g_CDemonRaytraceInstance,puVar8);
    }
    core_path_cpp_resetAllPathMaps_FUN_0050cf60();
  }
  uVar10 = 0;
  pcVar3 = support_newmsg_cpp_getLocalizedString_FUN_00508960("Loading thumbs");
  core_level_cpp_FUN_004e0000(0x01D70AB8,pcVar3,uVar10);
  pcVar3 = local_cc;
  pcVar9 = &param_1->field_0x14d0f0;
  do {
    cVar1 = *pcVar9;
    *pcVar3 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar3[1] = cVar1;
    pcVar3 = pcVar3 + 2;
  } while (cVar1 != '\0');
  pcVar3 = local_cc;
  do {
    pcVar9 = pcVar3;
    if (*pcVar3 == '.') goto LAB_0053367e;
    if (*pcVar3 == '\0') break;
    pcVar9 = pcVar3 + 1;
    if (*pcVar9 == '.') goto LAB_0053367e;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0053367e:
  if (pcVar9 == (char *)0x0) {
    pcVar3 = local_cc;
    do {
      pcVar9 = pcVar3;
      if (*pcVar3 == '\0') goto LAB_005336a7;
      if (*pcVar3 == '\0') break;
      pcVar9 = pcVar3 + 1;
      if (*pcVar9 == '\0') goto LAB_005336a7;
      pcVar3 = pcVar3 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_005336a7:
  pcVar3 = &DAT_005d02ee;
  do {
    cVar1 = *pcVar3;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  core_setdir_cpp_FUN_00540be0(param_1,local_cc);
  if (*(int *)&param_1->field_0x15aca4 != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_00460550
              (&g_CKeyFramedModelInstance,&param_1->field_0x15aca8);
  }
  iVar5 = 0;
  pCVar6 = param_1;
  if (0 < *(int *)param_1) {
    do {
      uVar10 = *(uint *)&param_1->field_0x14d150;
      *(uint *)&pCVar6->field_0x150 = 0;
      *(uint *)&pCVar6->field_0x1a4 = 1;
      iVar5 = iVar5 + 1;
      *(uint *)&pCVar6->field_0x14c = uVar10;
      pCVar6 = (CDemonSet *)&pCVar6->field_0x1a4;
    } while (iVar5 < *(int *)param_1);
  }
  _DAT_0207baa8 = 1;
  return param_1;
}
