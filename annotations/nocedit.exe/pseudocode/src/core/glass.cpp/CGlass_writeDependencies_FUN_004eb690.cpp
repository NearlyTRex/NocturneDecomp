// Name: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
// Address: 004eb690
// Address Range: [[004eb690, 004eb812]]
// Convention: __cdecl
// Signature: void core_glass.cpp_CGlass_writeDependencies_FUN_004eb690(CGlass * this_ptr, FILE * file_handle)
// Globals:
//   undefined4 s_change_the_thickness_(z-size)_0062e22e
//   TerminatedCString s_ART_s_0062e24c
//   TerminatedCString s_core_glass_cpp_0062e254
//   TerminatedCString s_Cannot_find_glass_textur_0062e266
//   TerminatedCString s_ACT_0062e28a
//   undefined4 DAT_0062e28b
//   undefined4 DAT_0062e28c
//   undefined4 DAT_0062e28d
//   TerminatedCString s_ART_s_0062e28f
//   TerminatedCString s_ART_s_0062e297
//   TerminatedCString s_core_glass_cpp_0062e29f
//   TerminatedCString s_Cannot_find_glass_textur_0062e2b1
//   TerminatedCString s_ACT_0062e2d5
//   undefined4 DAT_0062e2d6
//   undefined4 DAT_0062e2d7
//   undefined4 DAT_0062e2d8
//   TerminatedCString s_ART_s_0062e2da
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

void __cdecl
core_glass_cpp_CGlass_writeDependencies_FUN_004eb690(CGlass *this_ptr,FILE *file_handle)

{
  char cVar1;
  BADSPACEBASE *in_ESP;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  undefined4 uStack_100;
  undefined1 auStack_fc [236];
  
  pcVar2 = (this_ptr->glass_texture).texture_name;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n",pcVar2);
  pcVar4 = &stack0xfffffef4;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = &stack0xfffffef4;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = &stack0xfffffef4;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eb6f5;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_004eb6f5;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004eb6f5:
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x3cd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  pcVar4 = ".ACT";
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  if (this_ptr->background_flag == 0) {
    return;
  }
  pcVar2 = (this_ptr->broken_texture).texture_name;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  pcVar4 = (char *)&uStack_100;
  do {
    cVar1 = *pcVar2;
    *pcVar4 = cVar1;
    pcVar3 = (char *)&uStack_100;
    if (cVar1 == '\0') break;
    cVar1 = pcVar2[1];
    pcVar2 = pcVar2 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
    pcVar3 = (char *)&uStack_100;
  } while (cVar1 != '\0');
  do {
    pcVar2 = pcVar3;
    if (*pcVar3 == '.') goto LAB_004eb7b0;
    if (*pcVar3 == '\0') break;
    pcVar2 = pcVar3 + 1;
    if (*pcVar2 == '.') goto LAB_004eb7b0;
    pcVar3 = pcVar3 + 2;
  } while (*pcVar2 != '\0');
  pcVar2 = (char *)0x0;
LAB_004eb7b0:
  if (pcVar2 == (char *)0x0) {
    g_CurrentFilename = "..\\core\\glass.cpp";
    g_CurrentLineNumber = 0x3d4;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Cannot find glass texture extension");
  }
  pcVar4 = ".ACT";
  do {
    cVar1 = *pcVar4;
    *pcVar2 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar2[1] = cVar1;
    pcVar2 = pcVar2 + 2;
  } while (cVar1 != '\0');
  uStack_100 = auStack_fc;
  crt_stdio_c_fprintf_FUN_005fe6d0(file_handle,"ART\\%s\n");
  return;
}


// Assembly code:
// 004eb690: PUSH EBX
//   Label: core_glass.cpp_CGlass_writeDependencies_FUN_004eb690
// 004eb691: PUSH ESI
// 004eb692: PUSH EDI
// 004eb693: PUSH EBP
// 004eb694: SUB ESP,0x100
// 004eb69a: MOV EBP,dword ptr [ESP + 0x114]
//   XREF to: Stack[0x4] (READ)
// 004eb6a1: MOV EBX,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 004eb6a8: LEA ESI,[EBP + 0x16c]
// 004eb6ae: PUSH ESI
// 004eb6af: PUSH 0x62e24c
//   XREF to: 0062e24c (DATA)
// 004eb6b4: PUSH EBX
// 004eb6b5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004eb6ba: ADD ESP,0xc
// 004eb6bd: MOV EDI,ESP
// 004eb6bf: MOV DL,0x2e
// 004eb6c1: PUSH EDI
// 004eb6c2: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb6c2
// 004eb6c4: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 004eb6c6: CMP AL,0x0
// 004eb6c8: JZ 0x004eb6da
//   XREF to: 004eb6da (CONDITIONAL_JUMP)
// 004eb6ca: MOV AL,byte ptr [ESI + 0x1]
// 004eb6cd: ADD ESI,0x2
// 004eb6d0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 004eb6d3: ADD EDI,0x2
// 004eb6d6: CMP AL,0x0
// 004eb6d8: JNZ 0x004eb6c2
//   XREF to: 004eb6c2 (CONDITIONAL_JUMP)
// 004eb6da: POP EDI
//   Label: LAB_004eb6da
// 004eb6db: MOV ESI,ESP
// 004eb6dd: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb6dd
//   XREF to: Stack[-0x110] (DATA)
// 004eb6df: CMP AL,DL
// 004eb6e1: JZ 0x004eb6f5
//   XREF to: 004eb6f5 (CONDITIONAL_JUMP)
// 004eb6e3: CMP AL,0x0
// 004eb6e5: JZ 0x004eb6f3
//   XREF to: 004eb6f3 (CONDITIONAL_JUMP)
// 004eb6e7: INC ESI
// 004eb6e8: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x10f] (DATA)
// 004eb6ea: CMP AL,DL
// 004eb6ec: JZ 0x004eb6f5
//   XREF to: 004eb6f5 (CONDITIONAL_JUMP)
// 004eb6ee: INC ESI
// 004eb6ef: CMP AL,0x0
// 004eb6f1: JNZ 0x004eb6dd
//   XREF to: 004eb6dd (CONDITIONAL_JUMP)
// 004eb6f3: SUB ESI,ESI
//   Label: LAB_004eb6f3
// 004eb6f5: MOV EDI,ESI
//   Label: LAB_004eb6f5
// 004eb6f7: TEST ESI,ESI
// 004eb6f9: JNZ 0x004eb71e
//   XREF to: 004eb71e (CONDITIONAL_JUMP)
// 004eb6fb: MOV EDX,0x62e254
//   XREF to: 0062e254 (PARAM)
// 004eb700: MOV ECX,0x3cd
// 004eb705: PUSH 0x62e266
//   XREF to: 0062e266 (DATA)
// 004eb70a: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 004eb710: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 004eb716: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eb71b: ADD ESP,0x4
// 004eb71e: MOV ESI,0x62e28a
//   Label: LAB_004eb71e
//   XREF to: 0062e28a (DATA)
// 004eb723: PUSH EDI
// 004eb724: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb724
//   XREF to: 0062e28a (READ)
//   XREF to: 0062e28c (READ)
// 004eb726: MOV byte ptr [EDI],AL
// 004eb728: CMP AL,0x0
// 004eb72a: JZ 0x004eb73c
//   XREF to: 004eb73c (CONDITIONAL_JUMP)
// 004eb72c: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062e28b (READ)
//   XREF to: 0062e28d (READ)
// 004eb72f: ADD ESI,0x2
// 004eb732: MOV byte ptr [EDI + 0x1],AL
// 004eb735: ADD EDI,0x2
// 004eb738: CMP AL,0x0
// 004eb73a: JNZ 0x004eb724
//   XREF to: 004eb724 (CONDITIONAL_JUMP)
// 004eb73c: POP EDI
//   Label: LAB_004eb73c
// 004eb73d: MOV ESI,ESP
// 004eb73f: PUSH ESI
// 004eb740: PUSH 0x62e28f
//   XREF to: 0062e28f (DATA)
// 004eb745: PUSH EBX
// 004eb746: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004eb74b: MOV ESI,dword ptr [EBP + 0x370]
// 004eb751: ADD ESP,0xc
// 004eb754: TEST ESI,ESI
// 004eb756: JNZ 0x004eb763
//   XREF to: 004eb763 (CONDITIONAL_JUMP)
// 004eb758: ADD ESP,0x100
// 004eb75e: POP EBP
// 004eb75f: POP EDI
// 004eb760: POP ESI
// 004eb761: POP EBX
// 004eb762: RET
// 004eb763: LEA ESI,[EBP + 0x37c]
//   Label: LAB_004eb763
// 004eb769: PUSH ESI
// 004eb76a: PUSH 0x62e297
//   XREF to: 0062e297 (DATA)
// 004eb76f: PUSH EBX
// 004eb770: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004eb775: ADD ESP,0xc
// 004eb778: MOV EDI,ESP
// 004eb77a: MOV DL,0x2e
//   XREF to: 0062e22e (PARAM)
// 004eb77c: PUSH EDI
// 004eb77d: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb77d
// 004eb77f: MOV byte ptr [EDI],AL
//   XREF to: Stack[-0x110] (DATA)
// 004eb781: CMP AL,0x0
// 004eb783: JZ 0x004eb795
//   XREF to: 004eb795 (CONDITIONAL_JUMP)
// 004eb785: MOV AL,byte ptr [ESI + 0x1]
// 004eb788: ADD ESI,0x2
// 004eb78b: MOV byte ptr [EDI + 0x1],AL
//   XREF to: Stack[-0x10f] (WRITE)
// 004eb78e: ADD EDI,0x2
// 004eb791: CMP AL,0x0
// 004eb793: JNZ 0x004eb77d
//   XREF to: 004eb77d (CONDITIONAL_JUMP)
// 004eb795: POP EDI
//   Label: LAB_004eb795
// 004eb796: MOV ESI,ESP
// 004eb798: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb798
//   XREF to: Stack[-0x110] (DATA)
// 004eb79a: CMP AL,DL
// 004eb79c: JZ 0x004eb7b0
//   XREF to: 004eb7b0 (CONDITIONAL_JUMP)
// 004eb79e: CMP AL,0x0
// 004eb7a0: JZ 0x004eb7ae
//   XREF to: 004eb7ae (CONDITIONAL_JUMP)
// 004eb7a2: INC ESI
// 004eb7a3: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x10f] (DATA)
// 004eb7a5: CMP AL,DL
// 004eb7a7: JZ 0x004eb7b0
//   XREF to: 004eb7b0 (CONDITIONAL_JUMP)
// 004eb7a9: INC ESI
// 004eb7aa: CMP AL,0x0
// 004eb7ac: JNZ 0x004eb798
//   XREF to: 004eb798 (CONDITIONAL_JUMP)
// 004eb7ae: SUB ESI,ESI
//   Label: LAB_004eb7ae
// 004eb7b0: MOV EDI,ESI
//   Label: LAB_004eb7b0
// 004eb7b2: TEST ESI,ESI
// 004eb7b4: JNZ 0x004eb7d8
//   XREF to: 004eb7d8 (CONDITIONAL_JUMP)
// 004eb7b6: MOV EBP,0x62e29f
//   XREF to: 0062e29f (DATA)
// 004eb7bb: MOV EAX,0x3d4
// 004eb7c0: PUSH 0x62e2b1
//   XREF to: 0062e2b1 (DATA)
// 004eb7c5: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 004eb7cb: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 004eb7d0: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004eb7d5: ADD ESP,0x4
// 004eb7d8: MOV ESI,0x62e2d5
//   Label: LAB_004eb7d8
//   XREF to: 0062e2d5 (DATA)
// 004eb7dd: PUSH EDI
// 004eb7de: MOV AL,byte ptr [ESI]
//   Label: LAB_004eb7de
//   XREF to: 0062e2d5 (READ)
//   XREF to: 0062e2d7 (READ)
// 004eb7e0: MOV byte ptr [EDI],AL
// 004eb7e2: CMP AL,0x0
// 004eb7e4: JZ 0x004eb7f6
//   XREF to: 004eb7f6 (CONDITIONAL_JUMP)
// 004eb7e6: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 0062e2d6 (READ)
//   XREF to: 0062e2d8 (READ)
// 004eb7e9: ADD ESI,0x2
// 004eb7ec: MOV byte ptr [EDI + 0x1],AL
// 004eb7ef: ADD EDI,0x2
// 004eb7f2: CMP AL,0x0
// 004eb7f4: JNZ 0x004eb7de
//   XREF to: 004eb7de (CONDITIONAL_JUMP)
// 004eb7f6: POP EDI
//   Label: LAB_004eb7f6
// 004eb7f7: MOV ESI,ESP
// 004eb7f9: PUSH ESI
// 004eb7fa: PUSH 0x62e2da
//   XREF to: 0062e2da (DATA)
// 004eb7ff: PUSH EBX
// 004eb800: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004eb805: ADD ESP,0xc
// 004eb808: ADD ESP,0x100
// 004eb80e: POP EBP
// 004eb80f: POP EDI
// 004eb810: POP ESI
// 004eb811: POP EBX
// 004eb812: RET
