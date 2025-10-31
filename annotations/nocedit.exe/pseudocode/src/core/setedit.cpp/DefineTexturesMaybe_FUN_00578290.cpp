// Name: core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
// Address: 00578290
// Address Range: [[00578290, 0057841d]]
// Convention: unknown
// Signature: undefined core_setedit.cpp_DefineTexturesMaybe_FUN_00578290()
// Cross-references:
//   core_setedit.cpp_CDemonSet_importS3D_FUN_00578d80 (00578d80) at 00579987 [UNCONDITIONAL_CALL]
//   core_setedit.cpp_ImportingGroundTextures_FUN_00578420 (00578420) at 00578583 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_setedit_cpp_0064679f
//   TerminatedCString s_Tried_to_define_texture__006467b3
//   TerminatedCString s_core_setedit_cpp_00646802
//   TerminatedCString s_Ground_type_list_is_full_00646816
//   TerminatedCString s_core_setedit_cpp_0064683d
//   TerminatedCString s_Texture_filename_s_is_to_00646851
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   undefined4 DAT_03654368
//   undefined4 DAT_03654370
//   undefined4 DAT_03654371
//   undefined4 DAT_03654372
//   undefined4 DAT_03654373
//   undefined4 DAT_03654398
//   undefined1 DAT_0365918f
//   undefined1 DAT_03659190
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_string.c_stricmp_FUN_005fe7f0
//   engine_dosio.c_splitPath_FUN_00481f20

#include "nocturne.h"

void core_setedit_cpp_DefineTexturesMaybe_FUN_00578290(void)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  char *in_stack_00000004;
  uint in_stack_0000000c;
  undefined1 in_stack_00000014;
  char *apcStack_208 [64];
  char acStack_108 [8];
  char acStack_100 [244];
  
  bVar7 = 0;
  iVar4 = 0;
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,&stack0xfffffdf4,(char *)0x0);
  if (0 < DAT_03654368) {
    pcVar5 = &DAT_03654370;
    do {
      iVar2 = crt_string_c_stricmp_FUN_005fe7f0(pcVar5,(char *)apcStack_208);
      if (iVar2 == 0) {
        if (-1 < iVar4) {
          if ((byte)(&DAT_03659190)[iVar4] != in_stack_0000000c) {
            g_CurrentFilename = "..\\core\\setedit.cpp";
            g_CurrentLineNumber = 0x29e;
            core_main_c_displayErrorAndQuit_FUN_00506f10
                      ("Tried to define texture %s as ground type %d, but it was already defined as %d",in_stack_00000004,in_stack_0000000c);
            return;
          }
          return;
        }
        break;
      }
      iVar4 = iVar4 + 1;
      pcVar5 = pcVar5 + 0x28;
    } while (iVar4 < DAT_03654368);
  }
  engine_dosio_c_splitPath_FUN_00481f20
            (in_stack_00000004,(char *)0x0,(char *)0x0,acStack_108,(char *)0x0);
  if (499 < DAT_03654368) {
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x2ab;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Ground type list is full!  (Max is %d)");
  }
  uVar3 = 0xffffffff;
  pcVar5 = acStack_100;
  do {
    if (uVar3 == 0) break;
    uVar3 = uVar3 - 1;
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + (uint)bVar7 * -2 + 1;
  } while (cVar1 != '\0');
  if (0x27 < ~uVar3 - 1) {
    apcStack_208[0] = in_stack_00000004;
    g_CurrentFilename = "..\\core\\setedit.cpp";
    g_CurrentLineNumber = 0x2b1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Texture filename %s is too long to add to CGroundTypeList!");
  }
  pcVar5 = acStack_100;
  pcVar6 = &DAT_03654370 + DAT_03654368 * 0x28;
  do {
    cVar1 = *pcVar5;
    *pcVar6 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar5[1];
    pcVar5 = pcVar5 + 2;
    pcVar6[1] = cVar1;
    pcVar6 = pcVar6 + 2;
  } while (cVar1 != '\0');
  (&DAT_03659190)[DAT_03654368] = in_stack_00000014;
  DAT_03654368 = DAT_03654368 + 1;
  return;
}


// Assembly code:
// 00578290: PUSH EBX
//   Label: core_setedit.cpp_DefineTexturesMaybe_FUN_00578290
// 00578291: PUSH ESI
// 00578292: PUSH EBP
// 00578293: SUB ESP,0x200
// 00578299: MOV EBP,dword ptr [ESP + 0x210]
//   XREF to: Stack[0x4] (READ)
// 005782a0: PUSH 0x0
// 005782a2: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x20c] (DATA)
// 005782a6: PUSH EAX
// 005782a7: PUSH 0x0
// 005782a9: PUSH 0x0
// 005782ab: PUSH EBP
// 005782ac: XOR EBX,EBX
// 005782ae: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 005782b3: MOV EDX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 005782b9: ADD ESP,0x14
// 005782bc: TEST EDX,EDX
// 005782be: JLE 0x0057830a
//   XREF to: 0057830a (CONDITIONAL_JUMP)
// 005782c0: MOV ESI,0x3654370
//   XREF to: 03654370 (DATA)
// 005782c5: MOV EAX,ESP
//   Label: LAB_005782c5
// 005782c7: PUSH EAX
// 005782c8: PUSH ESI
//   XREF to: 03654370 (DATA)
//   XREF to: 03654398 (DATA)
// 005782c9: CALL crt_string.c_stricmp_FUN_005fe7f0
//   XREF to: 005fe7f0 (UNCONDITIONAL_CALL)
// 005782ce: ADD ESP,0x8
// 005782d1: TEST EAX,EAX
// 005782d3: JNZ 0x005782fc
//   XREF to: 005782fc (CONDITIONAL_JUMP)
// 005782d5: TEST EBX,EBX
// 005782d7: JL 0x0057830a
//   XREF to: 0057830a (CONDITIONAL_JUMP)
// 005782d9: MOV AL,byte ptr [EBX + 0x3659190]
//   XREF to: 03659190 (READ)
// 005782df: TEST EAX,EAX
// 005782e1: JL 0x0057830a
//   XREF to: 0057830a (CONDITIONAL_JUMP)
// 005782e3: MOV ECX,dword ptr [ESP + 0x214]
//   XREF to: Stack[0x8] (READ)
// 005782ea: CMP EAX,ECX
// 005782ec: JNZ 0x005783ee
//   XREF to: 005783ee (CONDITIONAL_JUMP)
// 005782f2: ADD ESP,0x200
// 005782f8: POP EBP
// 005782f9: POP ESI
// 005782fa: POP EBX
// 005782fb: RET
// 005782fc: MOV ECX,dword ptr [0x03654368]
//   Label: LAB_005782fc
//   XREF to: 03654368 (READ)
// 00578302: INC EBX
// 00578303: ADD ESI,0x28
// 00578306: CMP EBX,ECX
// 00578308: JL 0x005782c5
//   XREF to: 005782c5 (CONDITIONAL_JUMP)
// 0057830a: PUSH EDI
//   Label: LAB_0057830a
// 0057830b: PUSH 0x0
// 0057830d: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x10c] (DATA)
// 00578314: PUSH EAX
// 00578315: PUSH 0x0
// 00578317: PUSH 0x0
// 00578319: PUSH EBP
// 0057831a: CALL engine_dosio.c_splitPath_FUN_00481f20
//   XREF to: 00481f20 (UNCONDITIONAL_CALL)
// 0057831f: MOV EBX,dword ptr [0x03654368]
//   XREF to: 03654368 (READ)
// 00578325: ADD ESP,0x14
// 00578328: CMP EBX,0x1f4
// 0057832e: JL 0x00578358
//   XREF to: 00578358 (CONDITIONAL_JUMP)
// 00578330: PUSH 0x1f4
// 00578335: MOV ESI,0x646802
//   XREF to: 00646802 (DATA)
// 0057833a: MOV EDI,0x2ab
// 0057833f: PUSH 0x646816
//   XREF to: 00646816 (DATA)
// 00578344: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 0057834a: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00578350: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00578355: ADD ESP,0x8
// 00578358: LEA EDI,[ESP + 0x104]
//   Label: LAB_00578358
//   XREF to: Stack[-0x10c] (DATA)
// 0057835f: SUB ECX,ECX
// 00578361: DEC ECX
// 00578362: XOR EAX,EAX
// 00578364: SCASB.REPNE ES:EDI
// 00578366: NOT ECX
// 00578368: DEC ECX
// 00578369: CMP ECX,0x28
// 0057836c: JC 0x00578391
//   XREF to: 00578391 (CONDITIONAL_JUMP)
// 0057836e: PUSH EBP
// 0057836f: MOV EAX,0x64683d
//   XREF to: 0064683d (PARAM)
// 00578374: MOV EDX,0x2b1
// 00578379: PUSH 0x646851
//   XREF to: 00646851 (DATA)
// 0057837e: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00578383: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00578389: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 0057838e: ADD ESP,0x8
// 00578391: MOV EBX,dword ptr [0x03654368]
//   Label: LAB_00578391
//   XREF to: 03654368 (READ)
// 00578397: LEA EAX,[EBX*0x4 + 0x0]
// 0057839e: ADD EAX,EBX
// 005783a0: MOV EDI,0x3654370
//   XREF to: 03654370 (DATA)
// 005783a5: SHL EAX,0x3
// 005783a8: LEA ESI,[ESP + 0x104]
//   XREF to: Stack[-0x10c] (DATA)
// 005783af: ADD EDI,EAX
// 005783b1: PUSH EDI
// 005783b2: MOV AL,byte ptr [ESI]
//   Label: LAB_005783b2
//   XREF to: Stack[-0x10c] (DATA)
// 005783b4: MOV byte ptr [EDI],AL
//   XREF to: 03654370 (DATA)
//   XREF to: 03654372 (DATA)
// 005783b6: CMP AL,0x0
// 005783b8: JZ 0x005783ca
//   XREF to: 005783ca (CONDITIONAL_JUMP)
// 005783ba: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: Stack[-0x10b] (READ)
// 005783bd: ADD ESI,0x2
// 005783c0: MOV byte ptr [EDI + 0x1],AL
//   XREF to: 03654371 (DATA)
//   XREF to: 03654373 (DATA)
// 005783c3: ADD EDI,0x2
// 005783c6: CMP AL,0x0
// 005783c8: JNZ 0x005783b2
//   XREF to: 005783b2 (CONDITIONAL_JUMP)
// 005783ca: POP EDI
//   Label: LAB_005783ca
// 005783cb: MOV EAX,[0x03654368]
//   XREF to: 03654368 (READ)
// 005783d0: INC EAX
// 005783d1: MOV BL,byte ptr [ESP + 0x218]
//   XREF to: Stack[0x8] (READ)
// 005783d8: MOV byte ptr [EAX + 0x365918f],BL
//   XREF to: 0365918f (DATA)
//   XREF to: 03659190 (DATA)
// 005783de: MOV [0x03654368],EAX
//   XREF to: 03654368 (WRITE)
// 005783e3: POP EDI
// 005783e4: ADD ESP,0x200
// 005783ea: POP EBP
// 005783eb: POP ESI
// 005783ec: POP EBX
// 005783ed: RET
// 005783ee: PUSH EAX
//   Label: LAB_005783ee
// 005783ef: PUSH ECX
// 005783f0: PUSH EBP
// 005783f1: MOV EBX,0x64679f
//   XREF to: 0064679f (PARAM)
// 005783f6: MOV ESI,0x29e
// 005783fb: PUSH 0x6467b3
//   XREF to: 006467b3 (DATA)
// 00578400: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 00578406: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 0057840c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00578411: ADD ESP,0x10
// 00578414: ADD ESP,0x200
// 0057841a: POP EBP
// 0057841b: POP ESI
// 0057841c: POP EBX
// 0057841d: RET
