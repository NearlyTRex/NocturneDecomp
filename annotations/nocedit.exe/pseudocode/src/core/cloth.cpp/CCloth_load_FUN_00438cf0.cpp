// Name: core_cloth.cpp_CCloth_load_FUN_00438cf0
// Address: 00438cf0
// Address Range: [[00438cf0, 00439257]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_CCloth_load_FUN_00438cf0(CCloth * this_ptr, char * filename)
// Cross-references:
//   core_cloth.cpp_CClothList_load_FUN_0043bfa0 (0043bfa0) at 0043c03b [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df01 [UNCONDITIONAL_CALL]
//   core_fileman.cpp_CDemonFileManager_addClothFileToExtractList_FUN_004be150 (004be150) at 004be1b8 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d2c40 (004d2c40) at 004d2c79 [UNCONDITIONAL_CALL]
//   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 (0051f3e0) at 0051f5b9 [UNCONDITIONAL_CALL]
//   core_svetlana.cpp_CSvetlana_FUN_005d88e0 (005d88e0) at 005d8b01 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_FUN_005e56c0 (005e56c0) at 005e5760 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_rt_006181bc
//   TerminatedCString s_models_006181bf
//   TerminatedCString s_core_cloth_cpp_006181c6
//   TerminatedCString s_CCloth_load_Unable_to_op_006181d8
//   TerminatedCString s_d_006181fe
//   TerminatedCString s_core_cloth_cpp_00618202
//   TerminatedCString s_s_is_version_d_this_EXE__00618214
//   TerminatedCString s_s_0061825c
//   TerminatedCString s_f_f_f_f_f_f_00618260
//   TerminatedCString s_f_f_f_f_f_f_f_f_00618273
//   TerminatedCString s_f_0061828c
//   TerminatedCString s_d_00618290
//   TerminatedCString s_d_00618294
//   TerminatedCString s_d_00618298
//   TerminatedCString s_d_0061829c
//   TerminatedCString s_f_f_f_f_f_f_f_f_f_006182a0
//   TerminatedCString s_core_cloth_cpp_006182c7
//   undefined4 DAT_0065bb44
//   float FLOAT_0065bb54 = 0.125
//   float FLOAT_0065bb58 = 32
//   float FLOAT_0065bb5c = 0.9000000
//   float FLOAT_0065bb60 = 0.005000000
//   float FLOAT_0065bb64 = 0.5
//   float FLOAT_0065bb68 = 0.5
//   float FLOAT_0065bb6c = 0.05000000
//   undefined4 DAT_0065bb70
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
//   core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
//   core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

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
  undefined4 uVar7;
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
    fVar6 = FLOAT_0065bb6c;
    fVar5 = FLOAT_0065bb68;
    fVar4 = FLOAT_0065bb64;
    fVar3 = FLOAT_0065bb60;
    fVar2 = FLOAT_0065bb5c;
    fVar1 = FLOAT_0065bb58;
    *(float *)(this_ptr->padding_0x0 + 0x3ce58) = FLOAT_0065bb54;
    uVar7 = _DAT_0065bb70;
    *(float *)(this_ptr->padding_0x0 + 0x3ce5c) = fVar1;
    *(float *)(this_ptr->padding_0x0 + 0x3ce60) = fVar2;
    *(float *)(this_ptr->padding_0x0 + 0x3ce64) = fVar3;
    *(float *)(this_ptr->padding_0x0 + 0x3ce68) = fVar4;
    *(float *)(this_ptr->padding_0x0 + 0x3ce6c) = fVar5;
    *(float *)(this_ptr->padding_0x0 + 0x3ce70) = fVar6;
    *(undefined4 *)(this_ptr->padding_0x0 + 0x3ce74) = uVar7;
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


// Assembly code:
// 00438cf0: PUSH EBX
//   Label: core_cloth.cpp_CCloth_load_FUN_00438cf0
// 00438cf1: PUSH ESI
// 00438cf2: PUSH EDI
// 00438cf3: PUSH EBP
// 00438cf4: SUB ESP,0x228
// 00438cfa: MOV ESI,dword ptr [ESP + 0x23c]
//   XREF to: Stack[0x4] (READ)
// 00438d01: MOV EBX,dword ptr [ESP + 0x240]
//   XREF to: Stack[0x8] (READ)
// 00438d08: PUSH 0x6181bc
//   XREF to: 006181bc (DATA)
// 00438d0d: PUSH EBX
// 00438d0e: PUSH 0x6181bf
//   XREF to: 006181bf (DATA)
// 00438d13: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00438d18: ADD ESP,0xc
// 00438d1b: MOV dword ptr [ESP + 0x208],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 00438d22: TEST EAX,EAX
// 00438d24: JZ 0x004391eb
//   XREF to: 004391eb (CONDITIONAL_JUMP)
// 00438d2a: MOV EDI,dword ptr [ESP + 0x208]
//   Label: LAB_00438d2a
//   XREF to: Stack[-0x30] (READ)
// 00438d31: PUSH EDI
// 00438d32: PUSH 0xff
// 00438d37: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438d3e: PUSH EAX
// 00438d3f: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438d44: ADD ESP,0xc
// 00438d47: LEA EAX,[ESI + 0x3fe60]
// 00438d4d: PUSH EAX
// 00438d4e: PUSH 0x6181fe
//   XREF to: 006181fe (DATA)
// 00438d53: PUSH EDI
// 00438d54: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438d59: MOV EAX,dword ptr [ESI + 0x3fe60]
// 00438d5f: ADD ESP,0xc
// 00438d62: CMP EAX,0x3
// 00438d65: JLE 0x00438d8e
//   XREF to: 00438d8e (CONDITIONAL_JUMP)
// 00438d67: PUSH 0x3
// 00438d69: PUSH EAX
// 00438d6a: PUSH EBX
// 00438d6b: MOV EDX,0x618202
//   XREF to: 00618202 (PARAM)
// 00438d70: MOV ECX,0xa2
// 00438d75: PUSH 0x618214
//   XREF to: 00618214 (DATA)
// 00438d7a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00438d80: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00438d86: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00438d8b: ADD ESP,0x10
// 00438d8e: MOV EBP,dword ptr [ESP + 0x208]
//   Label: LAB_00438d8e
//   XREF to: Stack[-0x30] (READ)
// 00438d95: PUSH EBP
// 00438d96: PUSH 0xff
// 00438d9b: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438da2: PUSH EAX
// 00438da3: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438da8: ADD ESP,0xc
// 00438dab: MOV EAX,ESP
// 00438dad: PUSH EAX
// 00438dae: PUSH 0x61825c
//   XREF to: 0061825c (DATA)
// 00438db3: PUSH EBP
// 00438db4: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438db9: ADD ESP,0xc
// 00438dbc: MOV EAX,ESP
// 00438dbe: PUSH EAX
// 00438dbf: PUSH ESI
// 00438dc0: CALL core_dmodel.cpp_CKeyFramedModel_load_FUN_00476db0
//   XREF to: 00476db0 (UNCONDITIONAL_CALL)
// 00438dc5: ADD ESP,0x8
// 00438dc8: PUSH ESI
// 00438dc9: CALL core_dmodel.cpp_CKeyFramedModel_captureTextures_FUN_00478190
//   XREF to: 00478190 (UNCONDITIONAL_CALL)
// 00438dce: ADD ESP,0x4
// 00438dd1: PUSH EBP
// 00438dd2: PUSH 0xff
// 00438dd7: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438dde: PUSH EAX
// 00438ddf: LEA EBP,[ESI + 0x3ce58]
// 00438de5: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438dea: LEA EAX,[ESI + 0x3ce5c]
// 00438df0: LEA EBX,[ESI + 0x3ce60]
// 00438df6: LEA EDX,[ESI + 0x3ce64]
// 00438dfc: LEA EDI,[ESI + 0x3ce68]
// 00438e02: ADD ESP,0xc
// 00438e05: LEA ECX,[ESI + 0x3ce6c]
// 00438e0b: MOV dword ptr [ESP + 0x200],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00438e12: CMP dword ptr [ESI + 0x3fe60],0x3
// 00438e19: JGE 0x00439214
//   XREF to: 00439214 (CONDITIONAL_JUMP)
// 00438e1f: MOV ECX,dword ptr [ESP + 0x200]
//   XREF to: Stack[-0x38] (READ)
// 00438e26: PUSH ECX
// 00438e27: PUSH EDI
// 00438e28: PUSH EDX
// 00438e29: PUSH EBX
// 00438e2a: PUSH EAX
// 00438e2b: PUSH EBP
// 00438e2c: PUSH 0x618260
//   XREF to: 00618260 (DATA)
// 00438e31: MOV EBX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x30] (READ)
// 00438e38: PUSH EBX
// 00438e39: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438e3e: FLD float ptr [0x0065bb54]
//   XREF to: 0065bb54 (READ)
// 00438e44: FLD float ptr [0x0065bb58]
//   XREF to: 0065bb58 (READ)
// 00438e4a: FLD float ptr [0x0065bb5c]
//   XREF to: 0065bb5c (READ)
// 00438e50: FLD float ptr [0x0065bb60]
//   XREF to: 0065bb60 (READ)
// 00438e56: FLD float ptr [0x0065bb64]
//   XREF to: 0065bb64 (READ)
// 00438e5c: FLD float ptr [0x0065bb68]
//   XREF to: 0065bb68 (READ)
// 00438e62: FLD float ptr [0x0065bb6c]
//   XREF to: 0065bb6c (READ)
// 00438e68: ADD ESP,0x20
// 00438e6b: FXCH ST6
// 00438e6d: FSTP float ptr [ESI + 0x3ce58]
// 00438e73: FLD float ptr [0x0065bb70]
//   XREF to: 0065bb70 (READ)
// 00438e79: FXCH ST5
// 00438e7b: FSTP float ptr [ESI + 0x3ce5c]
// 00438e81: FXCH ST3
// 00438e83: FSTP float ptr [ESI + 0x3ce60]
// 00438e89: FXCH
// 00438e8b: FSTP float ptr [ESI + 0x3ce64]
// 00438e91: FSTP float ptr [ESI + 0x3ce68]
// 00438e97: FSTP float ptr [ESI + 0x3ce6c]
// 00438e9d: FXCH
// 00438e9f: FSTP float ptr [ESI + 0x3ce70]
// 00438ea5: FSTP float ptr [ESI + 0x3ce74]
// 00438eab: MOV EDI,dword ptr [ESP + 0x208]
//   Label: LAB_00438eab
//   XREF to: Stack[-0x30] (READ)
// 00438eb2: PUSH EDI
// 00438eb3: PUSH 0xff
// 00438eb8: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438ebf: PUSH EAX
// 00438ec0: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438ec5: ADD ESP,0xc
// 00438ec8: LEA EAX,[ESI + 0x3ce88]
// 00438ece: PUSH EAX
// 00438ecf: PUSH 0x61828c
//   XREF to: 0061828c (DATA)
// 00438ed4: PUSH EDI
// 00438ed5: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438eda: MOV EAX,dword ptr [ESI + 0x3fe60]
// 00438ee0: ADD ESP,0xc
// 00438ee3: CMP EAX,0x2
// 00438ee6: JL 0x00439249
//   XREF to: 00439249 (CONDITIONAL_JUMP)
// 00438eec: PUSH EDI
// 00438eed: PUSH 0xff
// 00438ef2: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438ef9: PUSH EAX
// 00438efa: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438eff: ADD ESP,0xc
// 00438f02: LEA EAX,[ESI + 0x3ce84]
// 00438f08: PUSH EAX
// 00438f09: PUSH 0x618290
//   XREF to: 00618290 (DATA)
// 00438f0e: PUSH EDI
// 00438f0f: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438f14: ADD ESP,0xc
// 00438f17: MOV EBX,dword ptr [ESP + 0x208]
//   Label: LAB_00438f17
//   XREF to: Stack[-0x30] (READ)
// 00438f1e: PUSH EBX
// 00438f1f: PUSH 0xff
// 00438f24: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438f2b: PUSH EAX
// 00438f2c: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438f31: ADD ESP,0xc
// 00438f34: LEA EAX,[ESI + 0x3f028]
// 00438f3a: PUSH EAX
// 00438f3b: PUSH 0x618294
//   XREF to: 00618294 (DATA)
// 00438f40: PUSH EBX
// 00438f41: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438f46: ADD ESP,0xc
// 00438f49: PUSH ESI
// 00438f4a: CALL core_cloth.cpp_CCloth_allocMemory_FUN_00438c50
//   XREF to: 00438c50 (UNCONDITIONAL_CALL)
// 00438f4f: ADD ESP,0x4
// 00438f52: PUSH EBX
// 00438f53: PUSH 0xff
// 00438f58: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438f5f: PUSH EAX
// 00438f60: XOR EBX,EBX
// 00438f62: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438f67: MOV EAX,dword ptr [ESI + 0x3f028]
// 00438f6d: ADD ESP,0xc
// 00438f70: TEST EAX,EAX
// 00438f72: JLE 0x00438fa0
//   XREF to: 00438fa0 (CONDITIONAL_JUMP)
// 00438f74: LEA EDI,[ESI + 0x3f02c]
// 00438f7a: PUSH EDI
//   Label: LAB_00438f7a
// 00438f7b: PUSH 0x618298
//   XREF to: 00618298 (DATA)
// 00438f80: MOV EDX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x30] (READ)
// 00438f87: PUSH EDX
// 00438f88: INC EBX
// 00438f89: ADD EDI,0x4
// 00438f8c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438f91: MOV ECX,dword ptr [ESI + 0x3f028]
// 00438f97: ADD ESP,0xc
// 00438f9a: CMP EBX,ECX
// 00438f9c: JL 0x00438f7a
//   XREF to: 00438f7a (CONDITIONAL_JUMP)
// 00438f9e: MOV EAX,EAX
// 00438fa0: PUSH ESI
//   Label: LAB_00438fa0
// 00438fa1: CALL core_cloth.cpp_ConnectingVerticesCheck_FUN_004394e0
//   XREF to: 004394e0 (UNCONDITIONAL_CALL)
// 00438fa6: ADD ESP,0x4
// 00438fa9: MOV EBX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x30] (READ)
// 00438fb0: PUSH EBX
// 00438fb1: PUSH 0xff
// 00438fb6: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x138] (DATA)
// 00438fbd: PUSH EAX
// 00438fbe: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 00438fc3: ADD ESP,0xc
// 00438fc6: LEA EAX,[ESI + 0x3ce8c]
// 00438fcc: PUSH EAX
// 00438fcd: PUSH 0x61829c
//   XREF to: 0061829c (DATA)
// 00438fd2: PUSH EBX
// 00438fd3: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00438fd8: ADD ESP,0xc
// 00438fdb: MOV EBP,dword ptr [ESI + 0x3ce8c]
// 00438fe1: XOR EBX,EBX
// 00438fe3: TEST EBP,EBP
// 00438fe5: JLE 0x00439170
//   XREF to: 00439170 (CONDITIONAL_JUMP)
// 00438feb: LEA EAX,[ESI + 0x3ce90]
// 00438ff1: LEA EBP,[ESI + 0x3cea4]
// 00438ff7: MOV dword ptr [ESP + 0x204],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00438ffe: LEA EAX,[ESI + 0x3cea8]
// 00439004: MOV dword ptr [ESP + 0x224],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043900b: LEA EAX,[ESI + 0x3ceac]
// 00439011: MOV dword ptr [ESP + 0x220],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00439018: LEA EAX,[ESI + 0x3ceb0]
// 0043901e: MOV dword ptr [ESP + 0x218],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00439025: LEA EAX,[ESI + 0x3ceb4]
// 0043902b: MOV dword ptr [ESP + 0x21c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00439032: LEA EAX,[ESI + 0x3ceb8]
// 00439038: MOV dword ptr [ESP + 0x214],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043903f: LEA EAX,[ESI + 0x3cec0]
// 00439045: LEA EDI,[ESI + 0x3cebc]
// 0043904b: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00439052: LEA EAX,[ESI + 0x3cec4]
// 00439058: MOV dword ptr [ESP + 0x210],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 0043905f: IMUL EAX,EBX,0xac
//   Label: LAB_0043905f
// 00439065: MOV ECX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x28] (READ)
// 0043906c: PUSH ECX
// 0043906d: MOV EDX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x34] (READ)
// 00439074: PUSH EDI
// 00439075: ADD EAX,EDX
// 00439077: MOV EDX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x2c] (READ)
// 0043907e: PUSH EDX
// 0043907f: MOV ECX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x24] (READ)
// 00439086: PUSH ECX
// 00439087: MOV EDX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x1c] (READ)
// 0043908e: PUSH EDX
// 0043908f: MOV ECX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x20] (READ)
// 00439096: PUSH ECX
// 00439097: MOV EDX,dword ptr [ESP + 0x238]
//   XREF to: Stack[-0x18] (READ)
// 0043909e: PUSH EDX
// 0043909f: MOV ECX,dword ptr [ESP + 0x240]
//   XREF to: Stack[-0x14] (READ)
// 004390a6: PUSH ECX
// 004390a7: PUSH EBP
// 004390a8: PUSH EAX
// 004390a9: PUSH 0x6182a0
//   XREF to: 006182a0 (DATA)
// 004390ae: MOV EAX,dword ptr [ESP + 0x234]
//   XREF to: Stack[-0x30] (READ)
// 004390b5: PUSH EAX
// 004390b6: ADD EDI,0xac
// 004390bc: INC EBX
// 004390bd: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004390c2: ADD ESP,0x30
// 004390c5: ADD EBP,0xac
// 004390cb: MOV EDX,dword ptr [ESP + 0x224]
//   XREF to: Stack[-0x14] (READ)
// 004390d2: MOV ECX,dword ptr [ESP + 0x220]
//   XREF to: Stack[-0x18] (READ)
// 004390d9: MOV EAX,dword ptr [ESP + 0x218]
//   XREF to: Stack[-0x20] (READ)
// 004390e0: ADD EDX,0xac
// 004390e6: ADD ECX,0xac
// 004390ec: ADD EAX,0xac
// 004390f1: MOV dword ptr [ESP + 0x224],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004390f8: MOV dword ptr [ESP + 0x220],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004390ff: MOV dword ptr [ESP + 0x218],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00439106: MOV EDX,dword ptr [ESP + 0x21c]
//   XREF to: Stack[-0x1c] (READ)
// 0043910d: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[-0x24] (READ)
// 00439114: MOV EAX,dword ptr [ESP + 0x20c]
//   XREF to: Stack[-0x2c] (READ)
// 0043911b: ADD EDX,0xac
// 00439121: ADD ECX,0xac
// 00439127: ADD EAX,0xac
// 0043912c: MOV dword ptr [ESP + 0x21c],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 00439133: MOV dword ptr [ESP + 0x214],ECX
//   XREF to: Stack[-0x24] (WRITE)
// 0043913a: MOV EDX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x28] (READ)
// 00439141: MOV dword ptr [ESP + 0x20c],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 00439148: ADD EDX,0xac
// 0043914e: MOV ECX,dword ptr [ESI + 0x3ce8c]
// 00439154: MOV dword ptr [ESP + 0x210],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0043915b: CMP EBX,ECX
// 0043915d: JL 0x0043905f
//   XREF to: 0043905f (CONDITIONAL_JUMP)
// 00439163: LEA EAX,[EAX]
// 00439169: LEA EDX,[EDX]
// 0043916f: NOP
// 00439170: PUSH 0x112
//   Label: LAB_00439170
// 00439175: PUSH 0x6182c7
//   XREF to: 006182c7 (DATA)
// 0043917a: MOV EBX,dword ptr [ESP + 0x210]
//   XREF to: Stack[-0x30] (READ)
// 00439181: PUSH EBX
// 00439182: XOR EDI,EDI
// 00439184: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00439189: MOV EBP,dword ptr [ESI + 0x104]
// 0043918f: ADD ESP,0xc
// 00439192: TEST EBP,EBP
// 00439194: JLE 0x004391e0
//   XREF to: 004391e0 (CONDITIONAL_JUMP)
// 00439196: LEA EDX,[ESI + 0x5798]
// 0043919c: XOR EBP,EBP
// 0043919e: MOV EAX,dword ptr [ESI + 0x10c]
//   Label: LAB_0043919e
// 004391a4: MOV EBX,EDX
// 004391a6: ADD EAX,EBP
// 004391a8: INC EDI
// 004391a9: FILD dword ptr [EAX]
// 004391ab: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 004391b1: FSTP float ptr [EBX]
// 004391b3: FILD dword ptr [EAX + 0x4]
// 004391b6: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 004391bc: FSTP float ptr [EBX + 0x4]
// 004391bf: FILD dword ptr [EAX + 0x8]
// 004391c2: FMUL float ptr [0x0065bb44]
//   XREF to: 0065bb44 (READ)
// 004391c8: FSTP float ptr [EBX + 0x8]
// 004391cb: ADD EDX,0x11c
// 004391d1: MOV EAX,dword ptr [ESI + 0x104]
// 004391d7: ADD EBP,0xc
// 004391da: CMP EDI,EAX
// 004391dc: JL 0x0043919e
//   XREF to: 0043919e (CONDITIONAL_JUMP)
// 004391de: MOV EAX,EAX
// 004391e0: ADD ESP,0x228
//   Label: LAB_004391e0
// 004391e6: POP EBP
// 004391e7: POP EDI
// 004391e8: POP ESI
// 004391e9: POP EBX
// 004391ea: RET
// 004391eb: PUSH EBX
//   Label: LAB_004391eb
// 004391ec: MOV EDX,0x6181c6
//   XREF to: 006181c6 (PARAM)
// 004391f1: MOV ECX,0x9b
// 004391f6: PUSH 0x6181d8
//   XREF to: 006181d8 (DATA)
// 004391fb: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 00439201: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 00439207: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0043920c: ADD ESP,0x8
// 0043920f: JMP 0x00438d2a
//   XREF to: 00438d2a (UNCONDITIONAL_JUMP)
// 00439214: LEA ECX,[ESI + 0x3ce74]
//   Label: LAB_00439214
// 0043921a: PUSH ECX
// 0043921b: LEA ECX,[ESI + 0x3ce70]
// 00439221: PUSH ECX
// 00439222: MOV ECX,dword ptr [ESP + 0x208]
//   XREF to: Stack[-0x38] (READ)
// 00439229: PUSH ECX
// 0043922a: PUSH EDI
// 0043922b: PUSH EDX
// 0043922c: PUSH EBX
// 0043922d: PUSH EAX
// 0043922e: PUSH EBP
// 0043922f: PUSH 0x618273
//   XREF to: 00618273 (DATA)
// 00439234: MOV EBX,dword ptr [ESP + 0x22c]
//   XREF to: Stack[-0x30] (READ)
// 0043923b: PUSH EBX
// 0043923c: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00439241: ADD ESP,0x28
// 00439244: JMP 0x00438eab
//   XREF to: 00438eab (UNCONDITIONAL_JUMP)
// 00439249: MOV dword ptr [ESI + 0x3ce84],0x0
//   Label: LAB_00439249
// 00439253: JMP 0x00438f17
//   XREF to: 00438f17 (UNCONDITIONAL_JUMP)
