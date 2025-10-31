// Name: core_cloth.cpp_ParseClothFile_FUN_00439260
// Address: 00439260
// Address Range: [[00439260, 004394df]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_ParseClothFile_FUN_00439260()
// Cross-references:
//   core_cloth.cpp_FUN_0043ddf0 (0043ddf0) at 0043df57 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_006182d9
//   TerminatedCString s_models_006182dc
//   TerminatedCString s_core_cloth_cpp_006182e3
//   TerminatedCString s_CCloth_save_Unable_to_op_006182f5
//   TerminatedCString s_version_00618318
//   TerminatedCString s_d_00618321
//   TerminatedCString s_model_00618325
//   TerminatedCString s_s_0061832c
//   TerminatedCString s_weight_gravity_dampen_sp_00618330
//   TerminatedCString s_f_f_f_f_f_f_f_f_0061837b
//   TerminatedCString s_transparency_00618394
//   TerminatedCString s_f_006183a2
//   TerminatedCString s_doubleSided_006183a6
//   TerminatedCString s_d_006183b3
//   TerminatedCString s_lockedVertexCount_006183b7
//   TerminatedCString s_d_006183ca
//   TerminatedCString s_lockedVertexList_006183ce
//   TerminatedCString s_d_006183e0
//   TerminatedCString s_collideBoneCount_006183e4
//   TerminatedCString s_d_006183f6
//   TerminatedCString s_s_g_g_g_g_g_g_g_g_g_006183fa
//   TerminatedCString s_core_cloth_cpp_0061841e
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_ParseClothFile(undefined4 param_1, undefined4 param_2) */

void core_cloth_cpp_ParseClothFile_FUN_00439260(void)

{
  FILE *file;
  int iVar1;
  int iVar2;
  undefined4 unaff_ESI;
  undefined4 unaff_EDI;
  int iStack00000004;
  undefined8 uVar3;
  
  uVar3 = CONCAT44(unaff_ESI,unaff_EDI);
  file = engine_dosio_c_getFile_FUN_00481a50
                   ("models",(char *)((ulonglong)_iStack00000004 >> 0x20),"wt");
  if (file == (FILE *)0x0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x12d;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::save - Unable to open file",uVar3);
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"model\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%s\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"weight,gravity,dampen,spring,bodyFriction,floorFriction,windArea,momInert\n");
  crt_stdio_c_fprintf_FUN_005fe6d0
            (file,"%f,%f,%f,%f,%f,%f,%f,%f\n",(double)*(float *)(iStack00000004 + 0x3ce58),
             (double)*(float *)(iStack00000004 + 0x3ce5c),
             (double)*(float *)(iStack00000004 + 0x3ce60),
             (double)*(float *)(iStack00000004 + 0x3ce64),
             (double)*(float *)(iStack00000004 + 0x3ce68),
             (double)*(float *)(iStack00000004 + 0x3ce6c));
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"transparency\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%f\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"doubleSided\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lockedVertexCount\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"lockedVertexList\n");
  if (0 < *(int *)(iStack00000004 + 0x3f028)) {
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
    } while (iVar1 < *(int *)(iStack00000004 + 0x3f028));
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"collideBoneCount\n");
  iVar1 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  if (0 < *(int *)(iStack00000004 + 0x3ce8c)) {
    iVar2 = iStack00000004 + 0x3ce90;
    do {
      iVar1 = iVar1 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"\"%s\",%g,%g, %g,%g,%g, %g,%g,%g, %g\n","\"%s\",%g,%g, %g,%g,%g, %g,%g,%g, %g\n",iVar2,
                 (double)*(float *)(iVar2 + 0x14),(double)*(float *)(iVar2 + 0x18));
      iVar2 = iVar2 + 0xac;
    } while (iVar1 < *(int *)(iStack00000004 + 0x3ce8c));
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\cloth.cpp",0x17b);
  return;
}


// Assembly code:
// 00439260: PUSH EBX
//   Label: core_cloth.cpp_ParseClothFile_FUN_00439260
// 00439261: PUSH ESI
// 00439262: PUSH EDI
// 00439263: PUSH EBP
// 00439264: MOV EBP,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00439268: PUSH 0x6182d9
//   XREF to: 006182d9 (DATA)
// 0043926d: MOV EDX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 00439271: PUSH EDX
// 00439272: PUSH 0x6182dc
//   XREF to: 006182dc (DATA)
// 00439277: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 0043927c: ADD ESP,0xc
// 0043927f: MOV EDI,EAX
// 00439281: TEST EAX,EAX
// 00439283: JZ 0x004394b8
//   XREF to: 004394b8 (CONDITIONAL_JUMP)
// 00439289: PUSH 0x618318
//   Label: LAB_00439289
//   XREF to: 00618318 (DATA)
// 0043928e: PUSH EDI
// 0043928f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439294: ADD ESP,0x8
// 00439297: PUSH 0x3
// 00439299: PUSH 0x618321
//   XREF to: 00618321 (DATA)
// 0043929e: PUSH EDI
// 0043929f: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004392a4: ADD ESP,0xc
// 004392a7: PUSH 0x618325
//   XREF to: 00618325 (DATA)
// 004392ac: PUSH EDI
// 004392ad: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004392b2: ADD ESP,0x8
// 004392b5: PUSH EBP
// 004392b6: PUSH 0x61832c
//   XREF to: 0061832c (DATA)
// 004392bb: PUSH EDI
// 004392bc: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004392c1: ADD ESP,0xc
// 004392c4: PUSH 0x618330
//   XREF to: 00618330 (DATA)
// 004392c9: PUSH EDI
// 004392ca: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004392cf: ADD ESP,0x8
// 004392d2: SUB ESP,0x8
// 004392d5: FLD float ptr [EBP + 0x3ce74]
// 004392db: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 004392de: SUB ESP,0x8
// 004392e1: FLD float ptr [EBP + 0x3ce70]
// 004392e7: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004392ea: SUB ESP,0x8
// 004392ed: FLD float ptr [EBP + 0x3ce6c]
// 004392f3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 004392f6: SUB ESP,0x8
// 004392f9: FLD float ptr [EBP + 0x3ce68]
// 004392ff: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00439302: SUB ESP,0x8
// 00439305: FLD float ptr [EBP + 0x3ce64]
// 0043930b: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 0043930e: SUB ESP,0x8
// 00439311: FLD float ptr [EBP + 0x3ce60]
// 00439317: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0043931a: SUB ESP,0x8
// 0043931d: FLD float ptr [EBP + 0x3ce5c]
// 00439323: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 00439326: SUB ESP,0x8
// 00439329: FLD float ptr [EBP + 0x3ce58]
// 0043932f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00439332: PUSH 0x61837b
//   XREF to: 0061837b (DATA)
// 00439337: PUSH EDI
// 00439338: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0043933d: ADD ESP,0x48
// 00439340: PUSH 0x618394
//   XREF to: 00618394 (DATA)
// 00439345: PUSH EDI
// 00439346: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0043934b: ADD ESP,0x8
// 0043934e: SUB ESP,0x8
// 00439351: FLD float ptr [EBP + 0x3ce88]
// 00439357: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0043935a: PUSH 0x6183a2
//   XREF to: 006183a2 (DATA)
// 0043935f: PUSH EDI
// 00439360: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439365: ADD ESP,0x10
// 00439368: PUSH 0x6183a6
//   XREF to: 006183a6 (DATA)
// 0043936d: PUSH EDI
// 0043936e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439373: ADD ESP,0x8
// 00439376: MOV ESI,dword ptr [EBP + 0x3ce84]
// 0043937c: PUSH ESI
// 0043937d: PUSH 0x6183b3
//   XREF to: 006183b3 (DATA)
// 00439382: PUSH EDI
// 00439383: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439388: ADD ESP,0xc
// 0043938b: PUSH 0x6183b7
//   XREF to: 006183b7 (DATA)
// 00439390: PUSH EDI
// 00439391: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439396: ADD ESP,0x8
// 00439399: MOV EAX,dword ptr [EBP + 0x3f028]
// 0043939f: PUSH EAX
// 004393a0: PUSH 0x6183ca
//   XREF to: 006183ca (DATA)
// 004393a5: PUSH EDI
// 004393a6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004393ab: ADD ESP,0xc
// 004393ae: PUSH 0x6183ce
//   XREF to: 006183ce (DATA)
// 004393b3: PUSH EDI
// 004393b4: XOR EBX,EBX
// 004393b6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004393bb: MOV EDX,dword ptr [EBP + 0x3f028]
// 004393c1: ADD ESP,0x8
// 004393c4: TEST EDX,EDX
// 004393c6: JLE 0x004393f0
//   XREF to: 004393f0 (CONDITIONAL_JUMP)
// 004393c8: MOV ESI,EBP
// 004393ca: MOV ECX,dword ptr [ESI + 0x3f02c]
//   Label: LAB_004393ca
// 004393d0: PUSH ECX
// 004393d1: PUSH 0x6183e0
//   XREF to: 006183e0 (DATA)
// 004393d6: PUSH EDI
// 004393d7: ADD ESI,0x4
// 004393da: INC EBX
// 004393db: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004393e0: MOV EAX,dword ptr [EBP + 0x3f028]
// 004393e6: ADD ESP,0xc
// 004393e9: CMP EBX,EAX
// 004393eb: JL 0x004393ca
//   XREF to: 004393ca (CONDITIONAL_JUMP)
// 004393ed: LEA EAX,[EAX]
// 004393f0: PUSH 0x6183e4
//   Label: LAB_004393f0
//   XREF to: 006183e4 (DATA)
// 004393f5: PUSH EDI
// 004393f6: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004393fb: ADD ESP,0x8
// 004393fe: MOV EDX,dword ptr [EBP + 0x3ce8c]
// 00439404: PUSH EDX
// 00439405: PUSH 0x6183f6
//   XREF to: 006183f6 (DATA)
// 0043940a: PUSH EDI
// 0043940b: XOR ESI,ESI
// 0043940d: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00439412: MOV ECX,dword ptr [EBP + 0x3ce8c]
// 00439418: ADD ESP,0xc
// 0043941b: TEST ECX,ECX
// 0043941d: JLE 0x004394a0
//   XREF to: 004394a0 (CONDITIONAL_JUMP)
// 00439423: LEA EBX,[EBP + 0x3ce90]
// 00439429: SUB ESP,0x8
//   Label: LAB_00439429
// 0043942c: FLD float ptr [EBX + 0x34]
// 0043942f: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00439432: SUB ESP,0x8
// 00439435: FLD float ptr [EBX + 0x2c]
// 00439438: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0043943b: SUB ESP,0x8
// 0043943e: FLD float ptr [EBX + 0x30]
// 00439441: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00439444: SUB ESP,0x8
// 00439447: FLD float ptr [EBX + 0x28]
// 0043944a: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0043944d: SUB ESP,0x8
// 00439450: FLD float ptr [EBX + 0x24]
// 00439453: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00439456: SUB ESP,0x8
// 00439459: FLD float ptr [EBX + 0x20]
// 0043945c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 0043945f: SUB ESP,0x8
// 00439462: FLD float ptr [EBX + 0x1c]
// 00439465: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 00439468: SUB ESP,0x8
// 0043946b: FLD float ptr [EBX + 0x18]
// 0043946e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x50] (DATA)
// 00439471: SUB ESP,0x8
// 00439474: FLD float ptr [EBX + 0x14]
// 00439477: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 0043947a: PUSH EBX
// 0043947b: PUSH 0x6183fa
//   XREF to: 006183fa (DATA)
// 00439480: PUSH EDI
// 00439481: INC ESI
// 00439482: ADD EBX,0xac
// 00439488: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 0043948d: MOV EAX,dword ptr [EBP + 0x3ce8c]
// 00439493: ADD ESP,0x54
// 00439496: CMP ESI,EAX
// 00439498: JL 0x00439429
//   XREF to: 00439429 (CONDITIONAL_JUMP)
// 0043949a: LEA EAX,[EAX]
// 004394a0: PUSH 0x17b
//   Label: LAB_004394a0
// 004394a5: PUSH 0x61841e
//   XREF to: 0061841e (DATA)
// 004394aa: PUSH EDI
// 004394ab: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004394b0: ADD ESP,0xc
// 004394b3: POP EBP
// 004394b4: POP EDI
// 004394b5: POP ESI
// 004394b6: POP EBX
// 004394b7: RET
// 004394b8: MOV ECX,0x6182e3
//   Label: LAB_004394b8
//   XREF to: 006182e3 (PARAM)
// 004394bd: MOV EBX,0x12d
// 004394c2: PUSH 0x6182f5
//   XREF to: 006182f5 (DATA)
// 004394c7: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004394cd: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 004394d3: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004394d8: ADD ESP,0x4
// 004394db: JMP 0x00439289
//   XREF to: 00439289 (UNCONDITIONAL_JUMP)
