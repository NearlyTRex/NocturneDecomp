// Name: core_set.cpp_CDemonSet_load_FUN_0052c0e0
// Address: 0052c0e0
// Address Range: [[0052c0e0, 0052d0da]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_load_FUN_0052c0e0(CDemonSet *this_ptr,char *filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_load_FUN_0052c0e0(CDemonSet *this_ptr,char *filename)

{
  uint uVar1;
  char cVar2;
  float fVar3;
  CTerrain *this_ptr_00;
  char *pcVar4;
  _FILE *p_Var5;
  CDemonSet *pCVar6;
  C3DSLight *this_ptr_01;
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
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading set");
  core_level_cpp_FUN_004e1600(0x01D03000,pcVar4,iVar10);
  core_set_cpp_CDemonSet_clear_FUN_0052c090(this_ptr);
  p_Var5 = engine_dosio_cpp_FUN_00460c70("models",filename,&DAT_005e546c);
  if (p_Var5 == (_FILE *)0x0) {
    _DAT_01d046a0 = "..\\core\\set.cpp";
    _DAT_01d046a4 = 0x15c;
    core_main_c_FUN_004e4500("CDemonSet::Unable to open %s",filename);
  }
  _fscanf(p_Var5,&DAT_005e54a3,&this_ptr->field_0x15acc0);
  _fscanf(p_Var5,&DAT_005e54a7,&this_ptr->field_0x15aea8);
  _fscanf(p_Var5,&DAT_005e54ab,local_330);
  _fscanf(p_Var5,&DAT_005e54af,local_130);
  _fscanf(p_Var5,&DAT_005e54b3,&this_ptr->field_0x14d150);
  puVar8 = &this_ptr->field_0x14d154;
  if (*(int *)&this_ptr->field_0x15acc0 < 0x1e) {
    *(uint *)&this_ptr->field_0x14d154 = 0xbf800000;
    *(uint *)&this_ptr->field_0x14d158 = 0xbf800000;
    *(uint *)&this_ptr->field_0x14d15c = 0xbf800000;
    local_48 = SQRT(*(float *)&this_ptr->field_0x14d15c * *(float *)&this_ptr->field_0x14d15c +
                    *(float *)puVar8 * *(float *)puVar8 +
                    *(float *)&this_ptr->field_0x14d158 * *(float *)&this_ptr->field_0x14d158);
    if (local_48 <= 0.0) {
      *(uint *)&this_ptr->field_0x14d15c = 0;
      *(uint *)&this_ptr->field_0x14d158 = *(uint *)&this_ptr->field_0x14d15c;
      *(uint *)puVar8 = *(uint *)&this_ptr->field_0x14d158;
      *(uint *)&this_ptr->field_0x14d160 = 0;
    }
    else {
      fVar3 = 1.0 / local_48;
      *(float *)puVar8 = *(float *)puVar8 * fVar3;
      *(float *)&this_ptr->field_0x14d158 = *(float *)&this_ptr->field_0x14d158 * fVar3;
      *(float *)&this_ptr->field_0x14d15c = *(float *)&this_ptr->field_0x14d15c * fVar3;
      *(uint *)&this_ptr->field_0x14d160 = 0;
    }
  }
  else {
    _fscanf(p_Var5,"%f,%f,%f,%f\n",puVar8,&this_ptr->field_0x14d158,&this_ptr->field_0x14d15c,
               &this_ptr->field_0x14d160);
  }
  if (*(int *)&this_ptr->field_0x15acc0 == 0) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 0x11) {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%d,%d,%d,%d\n",local_4c,&this_ptr->field_0x15ac40,
               &this_ptr->field_0x15ac44,&this_ptr->field_0x15ac48);
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%f,%f\n",&this_ptr->field_0x15ac4c,&this_ptr->field_0x15ac50,
               &this_ptr->field_0x15ac54);
    _fscanf(p_Var5,"%f,%f,%f,%f\n",&this_ptr->field_0x15ac58,&this_ptr->field_0x15ac5c,
               local_4c,local_4c);
    *(uint *)&this_ptr->field_0x15ac60 = 0x42480000;
  }
  else {
    core_dcamera_cpp_loadCameraFog_FUN_00443400
              (&this_ptr->field_0x15ac40,p_Var5,*(int *)&this_ptr->field_0x15acc0);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%f,%f\n",&g_CWaterPtr->field_0x4,&g_CWaterPtr->field_0x8);
  if (*(int *)&this_ptr->field_0x15acc0 < 0x1f) {
    DAT_0061e528 = 0x2000;
    _DAT_026537a0 = 0;
    _DAT_026537a4 = 0;
    _DAT_0061e524 = 0x3e800000;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,"%f,%d,%f,%f\n",&DAT_0061e524,&DAT_0061e528,&DAT_026537a0,&DAT_026537a4);
  }
  _fgets(local_330,0xff,p_Var5);
  _fscanf(p_Var5,"%d,%s\n",&this_ptr->field_0x15aca4,&this_ptr->field_0x15aca8);
  if (*(int *)&this_ptr->field_0x15acc0 < 5) {
    iVar10 = _strnicmp(local_130,&DAT_005e5507,4);
    if (iVar10 == 0) {
      *(uint *)g_CWaterPtr = 1;
    }
    else {
      *(uint *)g_CWaterPtr = 0;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5503,g_CWaterPtr);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 6) {
    *(uint *)&this_ptr->field_0x16163c = 1;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e550c,&this_ptr->field_0x16163c);
  }
  pcVar4 = &this_ptr->field_0x161640;
  if (*(int *)&this_ptr->field_0x15acc0 < 0xc) {
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
    *(uint *)&this_ptr->field_0x161660 = 0x4000;
  }
  else {
    _fscanf(p_Var5,"%d,%s\n",&this_ptr->field_0x161660,pcVar4);
  }
  pcVar4 = &this_ptr->field_0x15ae64;
  if (*(int *)&this_ptr->field_0x15acc0 < 0xd) {
    pcVar9 = &DAT_005e552a;
    *(uint *)&this_ptr->field_0x15ae60 = 0;
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
    _fscanf(p_Var5,"%d,%s\n",&this_ptr->field_0x15ae60,pcVar4);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 0x19) {
    *(uint *)&this_ptr->field_0x16167c = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e552f,&this_ptr->field_0x16167c);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 0x1d) {
    *(uint *)&this_ptr->field_0x15acbc = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5533,&this_ptr->field_0x15acbc);
  }
  engine_dosio_cpp_FUN_00461070(local_130,(char *)0x0,(char *)0x0,local_230,(char *)0x0);
  iVar10 = _stricmp(local_230,"train");
  this_ptr_00 = 0x0265364C;
  if (iVar10 == 0) {
    *(uint *)&this_ptr->field_0x15acb8 = 1;
    core_terrain_cpp_CTerrain_init_FUN_0057b800(this_ptr_00);
  }
  else {
    core_terrain_cpp_CTerrain_free_FUN_0057b840(0x0265364C);
    *(uint *)&this_ptr->field_0x15acb8 = 0;
  }
  if (10 < *(int *)&this_ptr->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005e553d,&this_ptr->field_0x19a2c);
  iVar10 = 0;
  if (0 < *(int *)&this_ptr->field_0x19a2c) {
    this_ptr_01 = (C3DSLight *)&this_ptr->field_0x19a30;
    do {
      core_setutil_cpp_FUN_0053af30(this_ptr_01,p_Var5);
      iVar10 = iVar10 + 1;
      this_ptr_01 = this_ptr_01 + 1;
    } while (iVar10 < *(int *)&this_ptr->field_0x19a2c);
  }
  if (10 < *(int *)&this_ptr->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
  }
  _fscanf(p_Var5,&DAT_005e5541,this_ptr);
  iVar10 = 0;
  if (0 < *(int *)this_ptr) {
    pCVar7 = (C3DSCamera *)&this_ptr->field_0x4;
    do {
      core_setutil_cpp_FUN_0053a8e0(pCVar7,p_Var5);
      iVar10 = iVar10 + 1;
      pCVar7 = pCVar7 + 1;
    } while (iVar10 < *(int *)this_ptr);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 1) {
    *(uint *)&this_ptr->field_0x15aecc = 0;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15aecc = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005e5575,4);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15aecc = 0;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15aecc = 3;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15aecc = 0;
    }
    iVar10 = _strnicmp(local_130,&DAT_005e5587,4);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15aecc = 3;
    }
    *(uint *)&this_ptr->field_0x15aed0 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e5545,&this_ptr->field_0x15aecc);
    _fscanf(p_Var5,&DAT_005e5549,&this_ptr->field_0x15aed0);
    iVar10 = 0;
    if (0 < *(int *)&this_ptr->field_0x15aed0) {
      local_44 = &this_ptr->field_0x15aed4;
      local_14 = &this_ptr->field_0x15af14;
      local_34 = (CMatrix3x3f *)&this_ptr->field_0x15aeec;
      local_18 = &this_ptr->field_0x15aee0;
      local_2c = &this_ptr->field_0x15aee4;
      local_30 = &this_ptr->field_0x15aee8;
      local_24 = &this_ptr->field_0x15aedc;
      puVar8 = &this_ptr->field_0x15aed8;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_44 + iVar10 * 0x44,puVar8,local_24);
        _fscanf(p_Var5,"%f,%f,%f\n",local_18,local_2c,local_30);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_5c,&local_5c.field_0x8,&local_5c.field_0x4);
        core_dirmat_cpp_FUN_00449280(local_34,&local_5c);
        puVar8 = puVar8 + 0x44;
        _fscanf(p_Var5,&DAT_005e556b,local_14);
        iVar10 = iVar10 + 1;
        local_14 = local_14 + 0x44;
        local_34 = local_34 + 0x44;
        local_18 = local_18 + 0x44;
        local_30 = local_30 + 0x44;
        local_2c = local_2c + 0x44;
        local_24 = local_24 + 0x44;
      } while (iVar10 < *(int *)&this_ptr->field_0x15aed0);
    }
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 3) {
    *(uint *)&this_ptr->field_0x15f690 = 2;
    iVar10 = _strnicmp(local_130,"mauso",5);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 8;
    }
    iVar10 = _strnicmp(local_130,&DAT_005e5596,4);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 3;
    }
    iVar10 = _strnicmp(local_130,"smill",5);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 2;
    }
    iVar10 = _strnicmp(local_130,"pier59",6);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 7;
    }
    iVar10 = _strnicmp(local_130,"castle",6);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 2;
    }
    iVar10 = _strnicmp(local_130,&DAT_005e55af,4);
    if (iVar10 == 0) {
      *(uint *)&this_ptr->field_0x15f690 = 8;
    }
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e558c,&this_ptr->field_0x15f690);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 0x18) {
    *(uint *)&this_ptr->field_0x15ac8c = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e55b4,&this_ptr->field_0x15ac8c);
  }
  if ((3 < *(int *)&this_ptr->field_0x15acc0) && (*(int *)&this_ptr->field_0x15acc0 < 10)) {
    core_setdir_cpp_CDemonSet_skipDeprecatedVirtualDirectorData_FUN_00539ff0(this_ptr,p_Var5);
  }
  if (*(int *)&this_ptr->field_0x15acc0 < 5) {
    *(uint *)&this_ptr->field_0x15b424 = 0;
  }
  else {
    _fgets(local_330,0xff,p_Var5);
    _fscanf(p_Var5,&DAT_005e55b8,&this_ptr->field_0x15b424);
    iVar10 = 0;
    if (0 < *(int *)&this_ptr->field_0x15b424) {
      local_40 = &this_ptr->field_0x15b428;
      local_20 = (CMatrix3x3f *)&this_ptr->field_0x15b440;
      local_28 = &this_ptr->field_0x15b438;
      local_1c = &this_ptr->field_0x15b43c;
      local_3c = &this_ptr->field_0x15b42c;
      local_38 = &this_ptr->field_0x15b430;
      puVar8 = &this_ptr->field_0x15b434;
      do {
        _fscanf(p_Var5,"%f,%f,%f\n",local_40 + iVar10 * 0x44,local_3c,local_38);
        _fscanf(p_Var5,"%f,%f,%f\n",puVar8,local_28,local_1c);
        _fscanf(p_Var5,"%f,%f,%f\n",&local_68,&local_68.field_0x8,&local_68.field_0x4);
        iVar10 = iVar10 + 1;
        core_dirmat_cpp_FUN_00449280(local_20,&local_68);
        puVar8 = puVar8 + 0x44;
        local_20 = local_20 + 0x44;
        local_28 = local_28 + 0x44;
        local_1c = local_1c + 0x44;
        local_3c = local_3c + 0x44;
        local_38 = local_38 + 0x44;
      } while (iVar10 < *(int *)&this_ptr->field_0x15b424);
    }
    core_setdir_cpp_FUN_0053a610(this_ptr);
  }
  if (*(int *)&this_ptr->field_0x15acc0 == 0xe) {
    _fgets(local_330,0xff,p_Var5);
    _fgets(local_330,0xff,p_Var5);
  }
  if (0x13 < *(int *)&this_ptr->field_0x15acc0) {
    _fgets(local_330,0xff,p_Var5);
    iVar10 = 0;
    if (0 < *(int *)this_ptr) {
      pCVar7 = (C3DSCamera *)&this_ptr->field_0x4;
      do {
        core_setutil_cpp_FUN_0053ac70(pCVar7,p_Var5);
        iVar10 = iVar10 + 1;
        pCVar7 = pCVar7 + 1;
      } while (iVar10 < *(int *)this_ptr);
    }
  }
  _fclose(p_Var5);
  iVar10 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading set geometry");
  core_level_cpp_FUN_004e1600(0x01D03000,pcVar4,iVar10);
  puVar8 = &this_ptr->field_0x14d0f0;
  iVar10 = _stricmp(puVar8,local_130);
  if (iVar10 == 0) {
    core_setcolid_cpp_CDemonSet_commitVoxelBuffer_FUN_00538160(this_ptr);
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
    p_Var5 = engine_dosio_cpp_FUN_00460c70(&DAT_005e55f2,puVar8,&DAT_005e55ef);
    if (p_Var5 == (_FILE *)0x0) {
      engine_special_cpp_clearScreen_FUN_0055b1f0();
      engine_2d_c_drawText_FUN_00401fe0("Warning!  No .GEO file.  Press any key",0,0);
      wincore_wddvmem_cpp_FUN_00589560();
      engine_2d_c_clearInputAndWait_FUN_004032b0();
      wincore_winrun_cpp_getNextKeypress_FUN_0058ead0();
    }
    else {
      _fclose(p_Var5);
      core_dtrace_cpp_FUN_00472ab0(&g_CDemonRaytraceInstance,puVar8);
    }
    core_path_cpp_resetAllPathMaps_FUN_00513f30();
  }
  iVar10 = 0;
  pcVar4 = support_newmsg_cpp_getLocalizedString_FUN_0050fe80("Loading thumbs");
  core_level_cpp_FUN_004e1600(0x01D03000,pcVar4,iVar10);
  pcVar4 = local_cc;
  pcVar9 = &this_ptr->field_0x14d0f0;
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
    if (*pcVar4 == '.') goto LAB_0052cbde;
    if (*pcVar4 == '\0') break;
    pcVar9 = pcVar4 + 1;
    if (*pcVar9 == '.') goto LAB_0052cbde;
    pcVar4 = pcVar4 + 2;
  } while (*pcVar9 != '\0');
  pcVar9 = (char *)0x0;
LAB_0052cbde:
  if (pcVar9 == (char *)0x0) {
    pcVar4 = local_cc;
    do {
      pcVar9 = pcVar4;
      if (*pcVar4 == '\0') goto LAB_0052cc07;
      if (*pcVar4 == '\0') break;
      pcVar9 = pcVar4 + 1;
      if (*pcVar9 == '\0') goto LAB_0052cc07;
      pcVar4 = pcVar4 + 2;
    } while (*pcVar9 != '\0');
    pcVar9 = (char *)0x0;
  }
LAB_0052cc07:
  pcVar4 = &DAT_005e562d;
  do {
    cVar2 = *pcVar4;
    *pcVar9 = cVar2;
    if (cVar2 == '\0') break;
    cVar2 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar9[1] = cVar2;
    pcVar9 = pcVar9 + 2;
  } while (cVar2 != '\0');
  core_setdir_cpp_FUN_00539860(this_ptr,local_cc);
  if (*(int *)&this_ptr->field_0x15aca4 != 0) {
    core_dmodel_cpp_CKeyFramedModel_load_FUN_0044dcd0
              (&g_CKeyFramedModelInstance,&this_ptr->field_0x15aca8);
  }
  iVar10 = 0;
  pCVar6 = this_ptr;
  if (0 < *(int *)this_ptr) {
    do {
      uVar1 = *(uint *)&this_ptr->field_0x14d150;
      *(uint *)&pCVar6->field_0x150 = 0;
      *(uint *)&pCVar6->field_0x1a4 = 1;
      iVar10 = iVar10 + 1;
      *(uint *)&pCVar6->field_0x14c = uVar1;
      pCVar6 = (CDemonSet *)&pCVar6->field_0x1a4;
    } while (iVar10 < *(int *)this_ptr);
  }
  _DAT_0200a394 = 1;
  return;
}
