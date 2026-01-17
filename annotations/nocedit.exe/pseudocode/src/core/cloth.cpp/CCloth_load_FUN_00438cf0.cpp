// Name: core_cloth.cpp_CCloth_load_FUN_00438cf0
// Address: 00438cf0
// Address Range: [[00438cf0, 00439257]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_cloth_cpp_CCloth_load_FUN_00438cf0(CCloth *this_ptr,char *filename)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  uint uVar7;
  FILE *pFVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  char *pcVar12;
  int iVar13;
  char *pcVar14;
  char acStack_238 [256];
  char local_138 [256];
  char *local_38;
  char *local_34;
  FILE *local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  char *local_1c;
  char *local_18;
  char *local_14;
  
  local_30 = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (local_30 == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x9b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::load - Unable to open file %s",filename);
  }
  pFVar8 = local_30;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,local_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%d\n",&this_ptr->version_num);
  if (3 < this_ptr->version_num) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0xa2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s is version %d, this .EXE is old and can only handle up to version %d",filename,this_ptr->version_num,3);
  }
  pFVar8 = local_30;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,local_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%s\n",acStack_238);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0((CKeyFramedModel *)this_ptr,acStack_238);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190((CKeyFramedModel *)this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,pFVar8);
  local_38 = this_ptr->padding_0x0 + 0x3ce6c;
  if (this_ptr->version_num < 3) {
    crt_stdio_c_fscanf_FUN_005fe7c0
              (local_30,"%f,%f,%f,%f,%f,%f\n",this_ptr->padding_0x0 + 0x3ce58,
               this_ptr->padding_0x0 + 0x3ce5c,this_ptr->padding_0x0 + 0x3ce60,
               this_ptr->padding_0x0 + 0x3ce64,this_ptr->padding_0x0 + 0x3ce68,local_38);
    fVar6 = 0.05f;
    fVar5 = 0.5f;
    fVar4 = 0.5f;
    fVar3 = 0.005f;
    fVar2 = 0.9f;
    fVar1 = 32.0f;
    *(float *)(this_ptr->padding_0x0 + 0x3ce58) = 0.125f;
    uVar7 = _DAT_0065bb70;
    *(float *)(this_ptr->padding_0x0 + 0x3ce5c) = fVar1;
    *(float *)(this_ptr->padding_0x0 + 0x3ce60) = fVar2;
    *(float *)(this_ptr->padding_0x0 + 0x3ce64) = fVar3;
    *(float *)(this_ptr->padding_0x0 + 0x3ce68) = fVar4;
    *(float *)(this_ptr->padding_0x0 + 0x3ce6c) = fVar5;
    *(float *)(this_ptr->padding_0x0 + 0x3ce70) = fVar6;
    *(uint *)(this_ptr->padding_0x0 + 0x3ce74) = uVar7;
  }
  else {
    crt_stdio_c_fscanf_FUN_005fe7c0
              (local_30,"%f,%f,%f,%f,%f,%f,%f,%f\n",this_ptr->padding_0x0 + 0x3ce58,
               this_ptr->padding_0x0 + 0x3ce5c,this_ptr->padding_0x0 + 0x3ce60,
               this_ptr->padding_0x0 + 0x3ce64,this_ptr->padding_0x0 + 0x3ce68,local_38,
               this_ptr->padding_0x0 + 0x3ce70,this_ptr->padding_0x0 + 0x3ce74);
  }
  pFVar8 = local_30;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,local_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%f\n",this_ptr->padding_0x0 + 0x3ce88);
  if (this_ptr->version_num < 2) {
    this_ptr->padding_0x0[0x3ce84] = '\0';
    this_ptr->padding_0x0[0x3ce85] = '\0';
    this_ptr->padding_0x0[0x3ce86] = '\0';
    this_ptr->padding_0x0[0x3ce87] = '\0';
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,pFVar8);
    crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%d\n",this_ptr->padding_0x0 + 0x3ce84);
  }
  pFVar8 = local_30;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,local_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%d\n",this_ptr->padding_0x0 + 0x3f028);
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(this_ptr);
  iVar11 = 0;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,pFVar8);
  iVar9 = *(int *)(this_ptr->padding_0x0 + 0x3f028);
  if (0 < iVar9) {
    pcVar12 = this_ptr->padding_0x0 + 0x3f02c;
    do {
      iVar11 = iVar11 + 1;
      iVar9 = crt_stdio_c_fscanf_FUN_005fe7c0(local_30,"%d\n",pcVar12);
      pcVar12 = pcVar12 + 4;
    } while (iVar11 < *(int *)(this_ptr->padding_0x0 + 0x3f028));
  }
  core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0(iVar9);
  pFVar8 = local_30;
  crt_stdio_c_fgets_FUN_005fefd0(local_138,0xff,local_30);
  crt_stdio_c_fscanf_FUN_005fe7c0(pFVar8,"%d\n",this_ptr->padding_0x0 + 0x3ce8c);
  iVar9 = 0;
  if (0 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c)) {
    local_34 = this_ptr->padding_0x0 + 0x3ce90;
    pcVar12 = this_ptr->padding_0x0 + 0x3cea4;
    local_14 = this_ptr->padding_0x0 + 0x3cea8;
    local_18 = this_ptr->padding_0x0 + 0x3ceac;
    local_20 = this_ptr->padding_0x0 + 0x3ceb0;
    local_1c = this_ptr->padding_0x0 + 0x3ceb4;
    local_24 = this_ptr->padding_0x0 + 0x3ceb8;
    local_2c = this_ptr->padding_0x0 + 0x3cec0;
    local_28 = this_ptr->padding_0x0 + 0x3cec4;
    pcVar14 = this_ptr->padding_0x0 + 0x3cebc;
    do {
      iVar11 = iVar9 * 0xac;
      iVar9 = iVar9 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0
                (local_30,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n",local_34 + iVar11,pcVar12,local_14,local_18,
                 local_20,local_1c,local_24,local_2c,pcVar14,local_28);
      pcVar12 = pcVar12 + 0xac;
      local_14 = local_14 + 0xac;
      local_18 = local_18 + 0xac;
      local_20 = local_20 + 0xac;
      local_1c = local_1c + 0xac;
      local_24 = local_24 + 0xac;
      local_2c = local_2c + 0xac;
      local_28 = local_28 + 0xac;
      pcVar14 = pcVar14 + 0xac;
    } while (iVar9 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c));
  }
  iVar11 = 0;
  iVar9 = shape_memdbg_cpp_closeFile_FUN_0050f9b0(local_30,"..\\core\\cloth.cpp",0x112);
  if (0 < *(int *)(this_ptr->padding_0x0 + 0x104)) {
    pcVar12 = this_ptr->padding_0x0 + 0x5798;
    iVar13 = 0;
    do {
      piVar10 = (int *)(*(int *)(this_ptr->padding_0x0 + 0x10c) + iVar13);
      iVar11 = iVar11 + 1;
      *(float *)pcVar12 = (float)*piVar10 * _DAT_0065bb44;
      *(float *)(pcVar12 + 4) = (float)piVar10[1] * _DAT_0065bb44;
      *(float *)(pcVar12 + 8) = (float)piVar10[2] * _DAT_0065bb44;
      pcVar12 = pcVar12 + 0x11c;
      iVar9 = *(int *)(this_ptr->padding_0x0 + 0x104);
      iVar13 = iVar13 + 0xc;
    } while (iVar11 < iVar9);
  }
  return iVar9;
}
