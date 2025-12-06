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
  int iVar8;
  int *piVar9;
  char *pcVar10;
  FILE *unaff_EBX;
  int iVar11;
  BADSPACEBASE *in_ESP;
  int iVar12;
  FILE *unaff_ESI;
  FILE *in_stack_0000000c;
  FILE *in_stack_0000001c;
  FILE *in_stack_00000020;
  FILE *in_stack_00000028;
  char acStack_130 [12];
  char acStack_124 [16];
  char acStack_114 [8];
  char acStack_10c [8];
  char acStack_104 [8];
  char acStack_fc [12];
  char acStack_f0 [8];
  char acStack_e8 [188];
  FILE *local_2c;
  FILE *local_28;
  FILE *local_1c;
  
  local_2c = engine_dosio_c_getFile_FUN_00481a50("models",filename,"rt");
  if (local_2c == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x9b;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::load - Unable to open file %s",filename);
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_130,0xff,local_28);
  crt_stdio_c_fscanf_FUN_005fe7c0(local_28,"%d\n",&this_ptr->version_num);
  if (3 < this_ptr->version_num) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0xa2;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("%s is version %d, this .EXE is old and can only handle up to version %d",filename,this_ptr->version_num,3);
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_124,0xff,local_1c);
  crt_stdio_c_fscanf_FUN_005fe7c0(local_1c,"%s\n",&stack0xfffffde0);
  core_dmodel_cpp_CKeyFramedModel_load_FUN_00476db0((CKeyFramedModel *)this_ptr,&stack0xfffffde4);
  core_dmodel_cpp_CKeyFramedModel_captureTextures_FUN_00478190((CKeyFramedModel *)this_ptr);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_114,0xff,local_1c);
  if (this_ptr->version_num < 3) {
    crt_stdio_c_fscanf_FUN_005fe7c0
              (unaff_ESI,"%f,%f,%f,%f,%f,%f\n",this_ptr->padding_0x0 + 0x3ce58,
               this_ptr->padding_0x0 + 0x3ce5c);
    fVar6 = 0.05f;
    fVar5 = 0.5f;
    fVar4 = 0.5f;
    fVar3 = 0.005f;
    fVar2 = 0.9f;
    fVar1 = 32f;
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
              (unaff_ESI,"%f,%f,%f,%f,%f,%f,%f,%f\n",this_ptr->padding_0x0 + 0x3ce58,
               this_ptr->padding_0x0 + 0x3ce5c,this_ptr->padding_0x0 + 0x3ce60,
               this_ptr->padding_0x0 + 0x3ce64);
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_10c,0xff,unaff_EBX);
  crt_stdio_c_fscanf_FUN_005fe7c0(unaff_EBX,"%f\n");
  if (this_ptr->version_num < 2) {
    this_ptr->padding_0x0[0x3ce84] = '\0';
    this_ptr->padding_0x0[0x3ce85] = '\0';
    this_ptr->padding_0x0[0x3ce86] = '\0';
    this_ptr->padding_0x0[0x3ce87] = '\0';
  }
  else {
    crt_stdio_c_fgets_FUN_005fefd0(acStack_104,0xff,unaff_EBX);
    crt_stdio_c_fscanf_FUN_005fe7c0(unaff_EBX,"%d\n");
  }
  crt_stdio_c_fgets_FUN_005fefd0(acStack_fc,0xff,in_stack_0000000c);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000000c,"%d\n");
  core_cloth_cpp_CCloth_allocMemory_FUN_00438c50(this_ptr);
  iVar11 = 0;
  crt_stdio_c_fgets_FUN_005fefd0(acStack_f0,0xff,in_stack_0000000c);
  iVar8 = *(int *)(this_ptr->padding_0x0 + 0x3f028);
  if (0 < iVar8) {
    do {
      iVar11 = iVar11 + 1;
      iVar8 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_0000001c,"%d\n");
    } while (iVar11 < *(int *)(this_ptr->padding_0x0 + 0x3f028));
  }
  core_cloth_cpp_ConnectingVerticesCheck_FUN_004394e0(iVar8);
  crt_stdio_c_fgets_FUN_005fefd0(acStack_e8,0xff,in_stack_00000020);
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000020,"%d\n");
  iVar8 = 0;
  if (0 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c)) {
    do {
      iVar8 = iVar8 + 1;
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000028,"\"%[^\"]\",%f,%f, %f,%f,%f, %f,%f,%f, %f\n");
    } while (iVar8 < *(int *)(this_ptr->padding_0x0 + 0x3ce8c));
  }
  iVar11 = 0;
  iVar8 = shape_memdbg_cpp_closeFile_FUN_0050f9b0(in_stack_00000028,"..\\core\\cloth.cpp",0x112)
  ;
  if (0 < *(int *)(this_ptr->padding_0x0 + 0x104)) {
    pcVar10 = this_ptr->padding_0x0 + 0x5798;
    iVar12 = 0;
    do {
      piVar9 = (int *)(*(int *)(this_ptr->padding_0x0 + 0x10c) + iVar12);
      iVar11 = iVar11 + 1;
      *(float *)pcVar10 = (float)*piVar9 * _DAT_0065bb44;
      *(float *)(pcVar10 + 4) = (float)piVar9[1] * _DAT_0065bb44;
      *(float *)(pcVar10 + 8) = (float)piVar9[2] * _DAT_0065bb44;
      pcVar10 = pcVar10 + 0x11c;
      iVar8 = *(int *)(this_ptr->padding_0x0 + 0x104);
      iVar12 = iVar12 + 0xc;
    } while (iVar11 < iVar8);
  }
  return iVar8;
}
