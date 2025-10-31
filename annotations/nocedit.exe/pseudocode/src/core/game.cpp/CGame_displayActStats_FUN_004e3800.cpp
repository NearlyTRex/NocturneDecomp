// Name: core_game.cpp_CGame_displayActStats_FUN_004e3800
// Address: 004e3800
// Address Range: [[004e3800, 004e3b8d]]
// Convention: __cdecl
// Signature: void core_game.cpp_CGame_displayActStats_FUN_004e3800(CGame * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_run_FUN_00524420 (00524420) at 005245fd [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_stats_0062d4ed
//   TerminatedCString s_Level_time_0062d4f3
//   undefined1 DAT_0062d4fe
//   undefined1 DAT_0062d4ff
//   undefined1 DAT_0062d500
//   TerminatedCString s_s_2d_2d_2d_2d_0062d501
//   TerminatedCString s_Body_count_0062d513
//   undefined1 DAT_0062d51e
//   undefined1 DAT_0062d51f
//   undefined1 DAT_0062d520
//   TerminatedCString s_d_0062d521
//   undefined4 DAT_0062d52d
//   undefined4 DAT_0062d535
//   undefined4 DAT_0062d53d
//   undefined4 DAT_0062d545
//   undefined4 DAT_0062d54d
//   CBitFont* g_ThemeFont
//   undefined4 DAT_02d7c2f0
//   undefined4 DAT_02d7c3f0
// Function calls:
//   crt_math.c_round_FUN_005fe6b0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_3d.c_setRenderAlpha_FUN_00406d80
//   engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   wincore_windll.cpp_clearScreen_FUN_005b3e70

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_game_cpp_CGame_displayActStats_FUN_004e3800(CGame *this_ptr)

{
  char cVar1;
  CBitFont *this_ptr_00;
  char *pcVar2;
  int extraout_ECX;
  int extraout_ECX_00;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  BADSPACEBASE *in_ESP;
  undefined4 unaff_ESI;
  uint uVar8;
  char *pcVar9;
  char *pcVar10;
  byte bVar11;
  float10 fVar12;
  float10 fVar13;
  double dVar14;
  int iStack00000008;
  int in_stack_00000014;
  int iStack00000020;
  int in_stack_00000024;
  int in_stack_00000040;
  char *in_stack_fffffad4;
  char acStack_124 [4];
  char acStack_120 [8];
  char acStack_118 [208];
  undefined1 local_48 [12];
  CAlphaBitmap aCStack_3c [2];
  int local_14;
  
  bVar11 = 0;
  engine_alphabit_cpp_CAlphaBitmap_ctor_FUN_00410520((CAlphaBitmap *)local_48);
  engine_alphabit_cpp_CAlphaBitmap_load_FUN_004105d0
            ((CAlphaBitmap *)(local_48 + 4),"stats",0x280,0x1e0);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950(aCStack_3c,0,0,0xffff);
  *(float *)(in_stack_00000014 + 0x248) =
       *(float *)(in_stack_00000014 + 0x250) + *(float *)(in_stack_00000014 + 0x248);
  fVar12 = (float10)*(float *)(in_stack_00000014 + 0x250);
  fVar13 = fVar12 * (float10)_DAT_0062d52d;
  dVar14 = crt_math_c_round_FUN_005fe6b0
                     ((double)CONCAT44(*(int *)(in_stack_00000014 + 0x254) +
                                       *(int *)(in_stack_00000014 + 0x24c),
                                       *(int *)(in_stack_00000014 + 0x24c)));
  iVar5 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)iVar5 * (float10)_DAT_0062d535;
  fVar13 = fVar12 * (float10)_DAT_0062d53d;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar5));
  iVar7 = (int)ROUND(fVar13);
  fVar12 = fVar12 - (float10)iVar7 * (float10)_DAT_0062d545;
  *(float *)(extraout_ECX + 0x250) = (float)fVar12;
  local_14 = iVar7;
  dVar14 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44((int)((ulonglong)dVar14 >> 0x20),iVar7));
  uVar6 = (undefined4)((ulonglong)dVar14 >> 0x20);
  iStack00000008 = (int)ROUND(fVar12);
  fVar13 = (float10)*(float *)(extraout_ECX_00 + 0x250) - (float10)iStack00000008;
  *(float *)(extraout_ECX_00 + 0x250) = (float)fVar13;
  fVar13 = fVar13 * (float10)_DAT_0062d54d;
  *(undefined4 *)(extraout_ECX_00 + 0x254) = uVar6;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(uVar6,iStack00000008));
  pcVar2 = support_newmsg_cpp_getLocalizedString_FUN_005441f0(in_stack_fffffad4);
  pcVar9 = &stack0xfffffadc;
  do {
    cVar1 = *pcVar2;
    *pcVar9 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar9[1] = cVar1;
    pcVar9 = pcVar9 + 2;
  } while (cVar1 != '\0');
  pcVar9 = &DAT_0062d4fe;
  iVar3 = -1;
  pcVar2 = &stack0xfffffadc;
  do {
    pcVar10 = pcVar2;
    if (iVar3 == 0) break;
    iVar3 = iVar3 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  uVar8 = 0;
  crt_stdio_c_sprintf_FUN_005fdbd0
            (acStack_124,"%2d:%2d:%2d.%2d\n\n",iVar7,unaff_ESI,(int)ROUND(fVar13),iVar5);
  do {
    uVar4 = 0xffffffff;
    pcVar2 = acStack_120;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + (uint)bVar11 * -2 + 1;
    } while (cVar1 != '\0');
    if (~uVar4 - 1 <= uVar8) break;
    if (acStack_120[uVar8] == ' ') {
      acStack_120[uVar8] = '0';
    }
    uVar8 = uVar8 + 1;
  } while( true );
  pcVar2 = acStack_120;
  iVar5 = -1;
  pcVar9 = &stack0xfffffae0;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = support_newmsg_cpp_getLocalizedString_FUN_005441f0("Body count");
  iVar5 = -1;
  pcVar2 = &stack0xfffffae4;
  do {
    pcVar10 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  pcVar9 = &DAT_0062d51e;
  iVar5 = -1;
  pcVar2 = &stack0xfffffae4;
  do {
    pcVar10 = pcVar2;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar2 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar9;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar9[1];
    pcVar9 = pcVar9 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_120 + 4,"%d\n\n");
  this_ptr_00 = g_ThemeFont;
  pcVar2 = acStack_118;
  iVar5 = -1;
  pcVar9 = &stack0xfffffae8;
  do {
    pcVar10 = pcVar9;
    if (iVar5 == 0) break;
    iVar5 = iVar5 + -1;
    pcVar10 = pcVar9 + (uint)bVar11 * -2 + 1;
    cVar1 = *pcVar9;
    pcVar9 = pcVar10;
  } while (cVar1 != '\0');
  pcVar10 = pcVar10 + -1;
  do {
    cVar1 = *pcVar2;
    *pcVar10 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar10[1] = cVar1;
    pcVar10 = pcVar10 + 2;
  } while (cVar1 != '\0');
  engine_3d_c_setRenderAlpha_FUN_00406d80(0xffff);
  iVar5 = engine_font_cpp_CBitFont_wrapText_FUN_004d0010
                    (this_ptr_00,&stack0xfffffaec,&DAT_02d7c2f0,0x14,0x100,0xc0);
  iVar7 = 0;
  iStack00000020 = iVar5;
  iStack00000020 = engine_font_cpp_CBitFont_getCharWidth_FUN_004d01d0(this_ptr_00,0x58);
  iVar3 = 0xf0;
  if (0 < iVar5) {
    pcVar2 = &DAT_02d7c2f0;
    do {
      iVar7 = iVar7 + 1;
      engine_font_cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
                (this_ptr_00,0x1c0,0x27f,iVar3,0xf8,0,pcVar2);
      pcVar2 = pcVar2 + 0x100;
      iVar3 = iVar3 + iStack00000020;
    } while (iVar7 < in_stack_00000024);
  }
  *(undefined4 *)(in_stack_00000040 + 0x250) = 0;
  engine_alphabit_cpp_CAlphaBitmap_dtor_FUN_00410540((CAlphaBitmap *)&stack0xfffffff4);
  return;
}


// Assembly code:
// 004e3800: PUSH EBX
//   Label: core_game.cpp_CGame_displayActStats_FUN_004e3800
// 004e3801: PUSH ESI
// 004e3802: PUSH EDI
// 004e3803: PUSH EBP
// 004e3804: SUB ESP,0x538
// 004e380a: LEA EAX,[ESP + 0x500]
//   XREF to: Stack[-0x48] (DATA)
// 004e3811: PUSH EAX
// 004e3812: CALL engine_alphabit.cpp_CAlphaBitmap_ctor_FUN_00410520
//   XREF to: 00410520 (UNCONDITIONAL_CALL)
// 004e3817: ADD ESP,0x4
// 004e381a: PUSH 0x1e0
// 004e381f: PUSH 0x280
// 004e3824: PUSH 0x62d4ed
//   XREF to: 0062d4ed (DATA)
// 004e3829: LEA EAX,[ESP + 0x50c]
//   XREF to: Stack[-0x48] (DATA)
// 004e3830: PUSH EAX
// 004e3831: CALL engine_alphabit.cpp_CAlphaBitmap_load_FUN_004105d0
//   XREF to: 004105d0 (UNCONDITIONAL_CALL)
// 004e3836: ADD ESP,0x10
// 004e3839: CALL wincore_windll.cpp_clearScreen_FUN_005b3e70
//   XREF to: 005b3e70 (UNCONDITIONAL_CALL)
// 004e383e: PUSH 0xffff
// 004e3843: PUSH 0x0
// 004e3845: PUSH 0x0
// 004e3847: LEA EAX,[ESP + 0x50c]
//   XREF to: Stack[-0x48] (DATA)
// 004e384e: PUSH EAX
// 004e384f: CALL engine_alphabit.cpp_CAlphaBitmap_display_FUN_00410950
//   XREF to: 00410950 (UNCONDITIONAL_CALL)
// 004e3854: ADD ESP,0x10
// 004e3857: MOV EAX,dword ptr [ESP + 0x54c]
//   XREF to: Stack[0x4] (READ)
// 004e385e: FLD float ptr [EAX + 0x250]
// 004e3864: FADD float ptr [EAX + 0x248]
// 004e386a: MOV ECX,dword ptr [ESP + 0x54c]
//   XREF to: Stack[0x4] (READ)
// 004e3871: FSTP float ptr [EAX + 0x248]
// 004e3877: FLD float ptr [ECX + 0x250]
// 004e387d: MOV EAX,dword ptr [EAX + 0x24c]
// 004e3883: MOV EDX,dword ptr [ECX + 0x254]
// 004e3889: FLD ST0
// 004e388b: FMUL double ptr [0x0062d52d]
//   XREF to: 0062d52d (READ)
// 004e3891: ADD EDX,EAX
// 004e3893: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3898: FISTP dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x20] (WRITE)
// 004e389f: MOV EAX,dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x20] (READ)
// 004e38a6: MOV dword ptr [ESP + 0x534],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e38ad: FILD dword ptr [ESP + 0x534]
//   XREF to: Stack[-0x14] (READ)
// 004e38b4: FMUL double ptr [0x0062d535]
//   XREF to: 0062d535 (READ)
// 004e38ba: FSUBP
// 004e38bc: FLD ST0
// 004e38be: FMUL double ptr [0x0062d53d]
//   XREF to: 0062d53d (READ)
// 004e38c4: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e38c9: FISTP dword ptr [ESP + 0x51c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004e38d0: MOV EAX,dword ptr [ESP + 0x51c]
//   XREF to: Stack[-0x2c] (READ)
// 004e38d7: MOV dword ptr [ESP + 0x534],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e38de: FILD dword ptr [ESP + 0x534]
//   XREF to: Stack[-0x14] (READ)
// 004e38e5: FMUL double ptr [0x0062d545]
//   XREF to: 0062d545 (READ)
// 004e38eb: FSUBP
// 004e38ed: FST float ptr [ECX + 0x250]
// 004e38f3: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e38f8: FISTP dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x28] (WRITE)
// 004e38ff: MOV EAX,dword ptr [ESP + 0x520]
//   XREF to: Stack[-0x28] (READ)
// 004e3906: MOV dword ptr [ESP + 0x534],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004e390d: FILD dword ptr [ESP + 0x534]
//   XREF to: Stack[-0x14] (READ)
// 004e3914: FSUBR float ptr [ECX + 0x250]
// 004e391a: FST float ptr [ECX + 0x250]
// 004e3920: FMUL double ptr [0x0062d54d]
//   XREF to: 0062d54d (READ)
// 004e3926: PUSH 0x62d4f3
//   XREF to: 0062d4f3 (DATA)
// 004e392b: MOV dword ptr [ECX + 0x254],EDX
// 004e3931: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 004e3936: FISTP dword ptr [ESP + 0x528]
//   XREF to: Stack[-0x24] (WRITE)
// 004e393d: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e3942: ADD ESP,0x4
// 004e3945: MOV EDI,ESP
// 004e3947: MOV ESI,EAX
// 004e3949: PUSH EDI
// 004e394a: MOV AL,byte ptr [ESI]
//   Label: LAB_004e394a
// 004e394c: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e394e: CMP AL,0x0
// 004e3950: JZ 0x004e3962
//   XREF to: 004e3962 (CONDITIONAL_JUMP)
// 004e3952: MOV AL,byte ptr [ESI + 0x1]
// 004e3955: ADD ESI,0x2
// 004e3958: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e395b: ADD EDI,0x2
// 004e395e: CMP AL,0x0
// 004e3960: JNZ 0x004e394a
//   XREF to: 004e394a (CONDITIONAL_JUMP)
// 004e3962: POP EDI
//   Label: LAB_004e3962
// 004e3963: MOV ESI,0x62d4fe
//   XREF to: 0062d4fe (DATA)
// 004e3968: MOV EDI,ESP
// 004e396a: PUSH EDI
// 004e396b: SUB ECX,ECX
// 004e396d: DEC ECX
// 004e396e: MOV AL,0x0
// 004e3970: SCASB.REPNE ES:EDI
// 004e3972: DEC EDI
// 004e3973: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3973
//   XREF to: 0062d4fe (READ)
//   XREF to: 0062d500 (READ)
// 004e3975: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e3977: CMP AL,0x0
// 004e3979: JZ 0x004e398b
//   XREF to: 004e398b (CONDITIONAL_JUMP)
// 004e397b: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062d4ff (READ)
//   XREF to: 0062d501 (READ)
// 004e397e: ADD ESI,0x2
// 004e3981: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e3984: ADD EDI,0x2
// 004e3987: CMP AL,0x0
// 004e3989: JNZ 0x004e3973
//   XREF to: 004e3973 (CONDITIONAL_JUMP)
// 004e398b: POP EDI
//   Label: LAB_004e398b
// 004e398c: MOV ECX,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x24] (READ)
// 004e3993: PUSH ECX
// 004e3994: MOV EBX,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x28] (READ)
// 004e399b: PUSH EBX
// 004e399c: MOV ESI,dword ptr [ESP + 0x524]
//   XREF to: Stack[-0x2c] (READ)
// 004e39a3: PUSH ESI
// 004e39a4: MOV EDI,dword ptr [ESP + 0x534]
//   XREF to: Stack[-0x20] (READ)
// 004e39ab: PUSH EDI
// 004e39ac: PUSH 0x62d501
//   XREF to: 0062d501 (DATA)
// 004e39b1: LEA EAX,[ESP + 0x414]
//   XREF to: Stack[-0x148] (DATA)
// 004e39b8: PUSH EAX
// 004e39b9: XOR ESI,ESI
// 004e39bb: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e39c0: MOV DL,0x30
// 004e39c2: ADD ESP,0x18
// 004e39c5: LEA EDI,[ESP + 0x400]
//   Label: LAB_004e39c5
//   XREF to: Stack[-0x148] (DATA)
// 004e39cc: SUB ECX,ECX
// 004e39ce: DEC ECX
// 004e39cf: XOR EAX,EAX
// 004e39d1: SCASB.REPNE ES:EDI
// 004e39d3: NOT ECX
// 004e39d5: DEC ECX
// 004e39d6: CMP ESI,ECX
// 004e39d8: JNC 0x004e39f0
//   XREF to: 004e39f0 (CONDITIONAL_JUMP)
// 004e39da: CMP byte ptr [ESP + ESI*0x1 + 0x400],0x20
// 004e39e2: JZ 0x004e39e7
//   XREF to: 004e39e7 (CONDITIONAL_JUMP)
// 004e39e4: INC ESI
//   Label: LAB_004e39e4
// 004e39e5: JMP 0x004e39c5
//   XREF to: 004e39c5 (UNCONDITIONAL_JUMP)
// 004e39e7: MOV byte ptr [ESP + ESI*0x1 + 0x400],DL
//   Label: LAB_004e39e7
// 004e39ee: JMP 0x004e39e4
//   XREF to: 004e39e4 (UNCONDITIONAL_JUMP)
// 004e39f0: LEA ESI,[ESP + 0x400]
//   Label: LAB_004e39f0
//   XREF to: Stack[-0x148] (DATA)
// 004e39f7: MOV EDI,ESP
// 004e39f9: PUSH EDI
// 004e39fa: SUB ECX,ECX
// 004e39fc: DEC ECX
// 004e39fd: MOV AL,0x0
// 004e39ff: SCASB.REPNE ES:EDI
// 004e3a01: DEC EDI
// 004e3a02: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3a02
//   XREF to: Stack[-0x148] (DATA)
// 004e3a04: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e3a06: CMP AL,0x0
// 004e3a08: JZ 0x004e3a1a
//   XREF to: 004e3a1a (CONDITIONAL_JUMP)
// 004e3a0a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x147] (READ)
// 004e3a0d: ADD ESI,0x2
// 004e3a10: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e3a13: ADD EDI,0x2
// 004e3a16: CMP AL,0x0
// 004e3a18: JNZ 0x004e3a02
//   XREF to: 004e3a02 (CONDITIONAL_JUMP)
// 004e3a1a: POP EDI
//   Label: LAB_004e3a1a
// 004e3a1b: PUSH 0x62d513
//   XREF to: 0062d513 (DATA)
// 004e3a20: CALL support_newmsg.cpp_getLocalizedString_FUN_005441f0
//   XREF to: 005441f0 (UNCONDITIONAL_CALL)
// 004e3a25: ADD ESP,0x4
// 004e3a28: MOV EDI,ESP
// 004e3a2a: MOV ESI,EAX
// 004e3a2c: PUSH EDI
// 004e3a2d: SUB ECX,ECX
// 004e3a2f: DEC ECX
// 004e3a30: MOV AL,0x0
// 004e3a32: SCASB.REPNE ES:EDI
// 004e3a34: DEC EDI
// 004e3a35: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3a35
// 004e3a37: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e3a39: CMP AL,0x0
// 004e3a3b: JZ 0x004e3a4d
//   XREF to: 004e3a4d (CONDITIONAL_JUMP)
// 004e3a3d: MOV AL,byte ptr [ESI + 0x1]
// 004e3a40: ADD ESI,0x2
// 004e3a43: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e3a46: ADD EDI,0x2
// 004e3a49: CMP AL,0x0
// 004e3a4b: JNZ 0x004e3a35
//   XREF to: 004e3a35 (CONDITIONAL_JUMP)
// 004e3a4d: POP EDI
//   Label: LAB_004e3a4d
// 004e3a4e: MOV ESI,0x62d51e
//   XREF to: 0062d51e (DATA)
// 004e3a53: MOV EDI,ESP
// 004e3a55: PUSH EDI
// 004e3a56: SUB ECX,ECX
// 004e3a58: DEC ECX
// 004e3a59: MOV AL,0x0
// 004e3a5b: SCASB.REPNE ES:EDI
// 004e3a5d: DEC EDI
// 004e3a5e: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3a5e
//   XREF to: 0062d51e (READ)
//   XREF to: 0062d520 (READ)
// 004e3a60: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e3a62: CMP AL,0x0
// 004e3a64: JZ 0x004e3a76
//   XREF to: 004e3a76 (CONDITIONAL_JUMP)
// 004e3a66: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062d51f (READ)
//   XREF to: 0062d521 (READ)
// 004e3a69: ADD ESI,0x2
// 004e3a6c: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e3a6f: ADD EDI,0x2
// 004e3a72: CMP AL,0x0
// 004e3a74: JNZ 0x004e3a5e
//   XREF to: 004e3a5e (CONDITIONAL_JUMP)
// 004e3a76: POP EDI
//   Label: LAB_004e3a76
// 004e3a77: MOV EAX,dword ptr [ESP + 0x54c]
//   XREF to: Stack[0x4] (READ)
// 004e3a7e: MOV EBP,dword ptr [EAX + 0x24c]
// 004e3a84: PUSH EBP
// 004e3a85: PUSH 0x62d521
//   XREF to: 0062d521 (DATA)
// 004e3a8a: LEA EAX,[ESP + 0x408]
//   XREF to: Stack[-0x148] (DATA)
// 004e3a91: PUSH EAX
// 004e3a92: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004e3a97: ADD ESP,0xc
// 004e3a9a: LEA ESI,[ESP + 0x400]
//   XREF to: Stack[-0x148] (DATA)
// 004e3aa1: MOV EDI,ESP
// 004e3aa3: PUSH EDI
// 004e3aa4: SUB ECX,ECX
// 004e3aa6: DEC ECX
// 004e3aa7: MOV AL,0x0
// 004e3aa9: SCASB.REPNE ES:EDI
// 004e3aab: DEC EDI
// 004e3aac: MOV AL,byte ptr [ESI]
//   Label: LAB_004e3aac
//   XREF to: Stack[-0x148] (DATA)
// 004e3aae: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x548] (DATA)
// 004e3ab0: CMP AL,0x0
// 004e3ab2: JZ 0x004e3ac4
//   XREF to: 004e3ac4 (CONDITIONAL_JUMP)
// 004e3ab4: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x147] (READ)
// 004e3ab7: ADD ESI,0x2
// 004e3aba: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x547] (WRITE)
// 004e3abd: ADD EDI,0x2
// 004e3ac0: CMP AL,0x0
// 004e3ac2: JNZ 0x004e3aac
//   XREF to: 004e3aac (CONDITIONAL_JUMP)
// 004e3ac4: POP EDI
//   Label: LAB_004e3ac4
// 004e3ac5: PUSH 0xffff
// 004e3aca: MOV EBP,dword ptr [0x020a5720]
//   XREF to: 020a5720 (READ)
// 004e3ad0: CALL engine_3d.c_setRenderAlpha_FUN_00406d80
//   XREF to: 00406d80 (UNCONDITIONAL_CALL)
// 004e3ad5: ADD ESP,0x4
// 004e3ad8: PUSH 0xc0
// 004e3add: PUSH 0x100
// 004e3ae2: PUSH 0x14
// 004e3ae4: PUSH 0x2d7c2f0
//   XREF to: 02d7c2f0 (DATA)
// 004e3ae9: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x548] (DATA)
// 004e3aed: PUSH EAX
// 004e3aee: PUSH EBP
// 004e3aef: CALL engine_font.cpp_CBitFont_wrapText_FUN_004d0010
//   XREF to: 004d0010 (UNCONDITIONAL_CALL)
// 004e3af4: ADD ESP,0x18
// 004e3af7: PUSH 0x58
// 004e3af9: XOR EBX,EBX
// 004e3afb: PUSH EBP
// 004e3afc: MOV EDI,EAX
// 004e3afe: MOV dword ptr [ESP + 0x538],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004e3b05: CALL engine_font.cpp_CBitFont_getCharWidth_FUN_004d01d0
//   XREF to: 004d01d0 (UNCONDITIONAL_CALL)
// 004e3b0a: ADD ESP,0x8
// 004e3b0d: MOV ESI,0xf0
// 004e3b12: MOV dword ptr [ESP + 0x52c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004e3b19: TEST EDI,EDI
// 004e3b1b: JLE 0x004e3b60
//   XREF to: 004e3b60 (CONDITIONAL_JUMP)
// 004e3b1d: MOV EDI,0x2d7c2f0
//   XREF to: 02d7c2f0 (DATA)
// 004e3b22: PUSH EDI
//   Label: LAB_004e3b22
//   XREF to: 02d7c2f0 (DATA)
//   XREF to: 02d7c3f0 (DATA)
// 004e3b23: PUSH 0x0
// 004e3b25: PUSH 0xf8
// 004e3b2a: PUSH ESI
// 004e3b2b: PUSH 0x27f
// 004e3b30: PUSH 0x1c0
// 004e3b35: PUSH EBP
// 004e3b36: INC EBX
// 004e3b37: CALL engine_font.cpp_CBitFont_drawTextCenterInBounds_FUN_004cdee0
//   XREF to: 004cdee0 (UNCONDITIONAL_CALL)
// 004e3b3c: ADD ESP,0x1c
// 004e3b3f: ADD EDI,0x100
// 004e3b45: MOV EAX,dword ptr [ESP + 0x52c]
//   XREF to: Stack[-0x1c] (READ)
// 004e3b4c: MOV EDX,dword ptr [ESP + 0x530]
//   XREF to: Stack[-0x18] (READ)
// 004e3b53: ADD ESI,EAX
// 004e3b55: CMP EBX,EDX
// 004e3b57: JL 0x004e3b22
//   XREF to: 004e3b22 (CONDITIONAL_JUMP)
// 004e3b59: LEA EAX,[EAX]
// 004e3b5f: NOP
// 004e3b60: MOV EAX,dword ptr [ESP + 0x54c]
//   Label: LAB_004e3b60
//   XREF to: Stack[0x4] (READ)
// 004e3b67: PUSH 0x0
// 004e3b69: MOV dword ptr [EAX + 0x250],0x0
// 004e3b73: LEA EAX,[ESP + 0x504]
//   XREF to: Stack[-0x48] (DATA)
// 004e3b7a: PUSH EAX
// 004e3b7b: CALL engine_alphabit.cpp_CAlphaBitmap_dtor_FUN_00410540
//   XREF to: 00410540 (UNCONDITIONAL_CALL)
// 004e3b80: ADD ESP,0x8
// 004e3b83: ADD ESP,0x538
// 004e3b89: POP EBP
// 004e3b8a: POP EDI
// 004e3b8b: POP ESI
// 004e3b8c: POP EBX
// 004e3b8d: RET
