// Name: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// Address: 004fb250
// Address Range: [[004fb250, 004fb46a]]
// Convention: __cdecl
// Signature: int engine_ini.cpp_CIni_getProfileString_FUN_004fb250(CIni * this_ptr, char * section, char * key, char * default_value, char * output_buffer, int buffer_size, char * filename)
// Cross-references:
//   engine_ini.cpp_getProfileInteger_FUN_004fb9a0 (004fb9a0) at 004fb9f5 [UNCONDITIONAL_CALL]
//   engine_ini.cpp_getProfileString_FUN_004fb960 (004fb960) at 004fb987 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_engine_ini_cpp_0062faa2
//   TerminatedCString s_rt_0062fab4
//   TerminatedCString s_engine_ini_cpp_0062fab7
//   TerminatedCString s_cIni_getProfileString_Un_0062fac9
//   TerminatedCString s_s_0062faf6
//   TerminatedCString s_engine_ini_cpp_0062fafc
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   crt_string.c_strcmp_FUN_005fef20
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
engine_ini_cpp_CIni_getProfileString_FUN_004fb250
          (CIni *this_ptr,char *section,char *key,char *default_value,char *output_buffer,
          int buffer_size,char *filename)

{
  char cVar1;
  byte bVar2;
  bool bVar3;
  FILE *stream;
  char *pcVar4;
  int iVar5;
  uint uVar6;
  BADSPACEBASE *in_ESP;
  char *unaff_EBP;
  char *pcVar7;
  byte bVar8;
  char *in_stack_00000020;
  char *in_stack_00000024;
  int in_stack_00000028;
  char acStack_200 [248];
  char acStack_108 [8];
  char acStack_100 [240];
  
  bVar8 = 0;
  bVar3 = false;
  stream = shape_memdbg_cpp_openFile_FUN_0050f7a0
                     (filename,(char *)0x0,"rt","..\\engine\\ini.cpp",0x56);
  if (stream == (FILE *)0x0) {
    g_CurrentFilename = "..\\engine\\ini.cpp";
    g_CurrentLineNumber = 0x57;
    core_main_c_displayErrorAndQuit_FUN_00506f10("cIni::getProfileString: Unable to open input");
  }
  crt_stdio_c_sprintf_FUN_005fdbd0(acStack_108,"[%s]\n",default_value);
  do {
    if ((stream->_flag & 0x10) != 0) goto LAB_004fb2d7;
    pcVar4 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdfc,0xff,stream);
    if (pcVar4 == (char *)0x0) goto LAB_004fb2d7;
    iVar5 = crt_string_c_strcmp_FUN_005fef20(acStack_200,acStack_100);
  } while (iVar5 != 0);
  bVar3 = false;
  bVar2 = (byte)stream->_flag;
  while ((bVar2 & 0x10) == 0) {
    pcVar4 = crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffdfc,0xff,stream);
    pcVar7 = &stack0xfffffdfc;
    if (pcVar4 == (char *)0x0) break;
    do {
      unaff_EBP = pcVar7;
      if (*pcVar7 == '=') goto LAB_004fb3b0;
      if (*pcVar7 == '\0') break;
      unaff_EBP = pcVar7 + 1;
      if (*unaff_EBP == '=') goto LAB_004fb3b0;
      pcVar7 = pcVar7 + 2;
    } while (*unaff_EBP != '\0');
    unaff_EBP = (char *)0x0;
LAB_004fb3b0:
    if (unaff_EBP != (char *)0x0) {
      *unaff_EBP = '\0';
    }
    iVar5 = crt_string_c_strcmp_FUN_005fef20(&stack0xfffffdfc,output_buffer);
    if (iVar5 == 0) {
      bVar3 = true;
      break;
    }
    bVar2 = (byte)stream->_flag;
  }
LAB_004fb2d7:
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(stream,"..\\engine\\ini.cpp",0x99);
  if (bVar3) {
    pcVar7 = unaff_EBP + 1;
    uVar6 = 0xffffffff;
    pcVar4 = pcVar7;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    pcVar7[~uVar6 - 2] = '\0';
    if ((int)(~uVar6 - 2) < in_stack_00000028) {
      do {
        cVar1 = *pcVar7;
        *in_stack_00000024 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        in_stack_00000024[1] = cVar1;
        in_stack_00000024 = in_stack_00000024 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  else {
    uVar6 = 0xffffffff;
    pcVar4 = in_stack_00000020;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + (uint)bVar8 * -2 + 1;
    } while (cVar1 != '\0');
    if ((int)(~uVar6 - 1) < in_stack_00000028) {
      do {
        cVar1 = *in_stack_00000020;
        *in_stack_00000024 = cVar1;
        if (cVar1 == '\0') {
          return 1;
        }
        cVar1 = in_stack_00000020[1];
        in_stack_00000020 = in_stack_00000020 + 2;
        in_stack_00000024[1] = cVar1;
        in_stack_00000024 = in_stack_00000024 + 2;
      } while (cVar1 != '\0');
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 004fb250: PUSH EBX
//   Label: engine_ini.cpp_CIni_getProfileString_FUN_004fb250
// 004fb251: PUSH ESI
// 004fb252: PUSH EDI
// 004fb253: PUSH EBP
// 004fb254: SUB ESP,0x200
// 004fb25a: PUSH 0x56
// 004fb25c: PUSH 0x62faa2
//   XREF to: 0062faa2 (DATA)
// 004fb261: PUSH 0x62fab4
//   XREF to: 0062fab4 (DATA)
// 004fb266: XOR EDI,EDI
// 004fb268: PUSH EDI
// 004fb269: MOV EDX,dword ptr [ESP + 0x23c]
//   XREF to: Stack[0x1c] (READ)
// 004fb270: PUSH EDX
// 004fb271: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004fb276: ADD ESP,0x14
// 004fb279: MOV EBX,EAX
// 004fb27b: TEST EAX,EAX
// 004fb27d: JZ 0x004fb326
//   XREF to: 004fb326 (CONDITIONAL_JUMP)
// 004fb283: MOV EAX,dword ptr [ESP + 0x218]
//   Label: LAB_004fb283
//   XREF to: Stack[0x8] (READ)
// 004fb28a: PUSH EAX
// 004fb28b: PUSH 0x62faf6
//   XREF to: 0062faf6 (DATA)
// 004fb290: LEA EAX,[ESP + 0x108]
//   XREF to: Stack[-0x110] (DATA)
// 004fb297: PUSH EAX
// 004fb298: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 004fb29d: ADD ESP,0xc
// 004fb2a0: TEST EDI,EDI
//   Label: LAB_004fb2a0
// 004fb2a2: JNZ 0x004fb2ae
//   XREF to: 004fb2ae (CONDITIONAL_JUMP)
// 004fb2a4: TEST byte ptr [EBX + 0xc],0x10
// 004fb2a8: JZ 0x004fb34e
//   XREF to: 004fb34e (CONDITIONAL_JUMP)
// 004fb2ae: TEST EDI,EDI
//   Label: LAB_004fb2ae
// 004fb2b0: JZ 0x004fb2d7
//   XREF to: 004fb2d7 (CONDITIONAL_JUMP)
// 004fb2b2: MOV DL,byte ptr [EBX + 0xc]
//   Label: LAB_004fb2b2
// 004fb2b5: XOR EDI,EDI
// 004fb2b7: TEST DL,0x10
// 004fb2ba: JNZ 0x004fb2d7
//   Label: LAB_004fb2ba
//   XREF to: 004fb2d7 (CONDITIONAL_JUMP)
// 004fb2bc: PUSH EBX
// 004fb2bd: PUSH 0xff
// 004fb2c2: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fb2c6: PUSH EAX
// 004fb2c7: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb2cc: ADD ESP,0xc
// 004fb2cf: TEST EAX,EAX
// 004fb2d1: JNZ 0x004fb394
//   XREF to: 004fb394 (CONDITIONAL_JUMP)
// 004fb2d7: PUSH 0x99
//   Label: LAB_004fb2d7
// 004fb2dc: PUSH 0x62fafc
//   XREF to: 0062fafc (DATA)
// 004fb2e1: PUSH EBX
// 004fb2e2: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004fb2e7: ADD ESP,0xc
// 004fb2ea: TEST EDI,EDI
// 004fb2ec: JZ 0x004fb3dc
//   XREF to: 004fb3dc (CONDITIONAL_JUMP)
// 004fb2f2: INC EBP
// 004fb2f3: MOV EDI,EBP
// 004fb2f5: SUB ECX,ECX
// 004fb2f7: DEC ECX
// 004fb2f8: XOR EAX,EAX
// 004fb2fa: SCASB.REPNE ES:EDI
// 004fb2fc: NOT ECX
// 004fb2fe: DEC ECX
// 004fb2ff: LEA EAX,[ECX + -0x1]
// 004fb302: LEA ECX,[EAX + EBP*0x1]
// 004fb305: MOV ESI,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x18] (READ)
// 004fb30c: MOV byte ptr [ECX],0x0
// 004fb30f: CMP EAX,ESI
// 004fb311: JL 0x004fb436
//   XREF to: 004fb436 (CONDITIONAL_JUMP)
// 004fb317: XOR EDI,EDI
//   Label: LAB_004fb317
// 004fb319: MOV EAX,EDI
// 004fb31b: ADD ESP,0x200
// 004fb321: POP EBP
// 004fb322: POP EDI
// 004fb323: POP ESI
// 004fb324: POP EBX
// 004fb325: RET
// 004fb326: MOV ECX,0x62fab7
//   Label: LAB_004fb326
//   XREF to: 0062fab7 (PARAM)
// 004fb32b: MOV ESI,0x57
// 004fb330: PUSH 0x62fac9
//   XREF to: 0062fac9 (DATA)
// 004fb335: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 004fb33b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 004fb341: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004fb346: ADD ESP,0x4
// 004fb349: JMP 0x004fb283
//   XREF to: 004fb283 (UNCONDITIONAL_JUMP)
// 004fb34e: PUSH EBX
//   Label: LAB_004fb34e
// 004fb34f: PUSH 0xff
// 004fb354: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x210] (DATA)
// 004fb358: PUSH EAX
// 004fb359: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004fb35e: ADD ESP,0xc
// 004fb361: TEST EAX,EAX
// 004fb363: JZ 0x004fb2ae
//   XREF to: 004fb2ae (CONDITIONAL_JUMP)
// 004fb369: LEA EAX,[ESP + 0x100]
//   XREF to: Stack[-0x110] (DATA)
// 004fb370: PUSH EAX
// 004fb371: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fb375: PUSH EAX
// 004fb376: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb37b: ADD ESP,0x8
// 004fb37e: TEST EAX,EAX
// 004fb380: JZ 0x004fb2b2
//   XREF to: 004fb2b2 (CONDITIONAL_JUMP)
// 004fb386: JMP 0x004fb2a0
//   XREF to: 004fb2a0 (UNCONDITIONAL_JUMP)
// 004fb38b: TEST byte ptr [EBX + 0xc],0x10
//   Label: LAB_004fb38b
// 004fb38f: JMP 0x004fb2ba
//   XREF to: 004fb2ba (UNCONDITIONAL_JUMP)
// 004fb394: MOV DL,0x3d
//   Label: LAB_004fb394
// 004fb396: MOV ESI,ESP
// 004fb398: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb398
//   XREF to: Stack[-0x210] (DATA)
// 004fb39a: CMP AL,DL
// 004fb39c: JZ 0x004fb3b0
//   XREF to: 004fb3b0 (CONDITIONAL_JUMP)
// 004fb39e: CMP AL,0x0
// 004fb3a0: JZ 0x004fb3ae
//   XREF to: 004fb3ae (CONDITIONAL_JUMP)
// 004fb3a2: INC ESI
// 004fb3a3: MOV AL,byte ptr [ESI]
//   XREF to: Stack[-0x20f] (DATA)
// 004fb3a5: CMP AL,DL
// 004fb3a7: JZ 0x004fb3b0
//   XREF to: 004fb3b0 (CONDITIONAL_JUMP)
// 004fb3a9: INC ESI
// 004fb3aa: CMP AL,0x0
// 004fb3ac: JNZ 0x004fb398
//   XREF to: 004fb398 (CONDITIONAL_JUMP)
// 004fb3ae: SUB ESI,ESI
//   Label: LAB_004fb3ae
// 004fb3b0: MOV EBP,ESI
//   Label: LAB_004fb3b0
// 004fb3b2: TEST ESI,ESI
// 004fb3b4: JZ 0x004fb3b9
//   XREF to: 004fb3b9 (CONDITIONAL_JUMP)
// 004fb3b6: MOV byte ptr [ESI],0x0
//   XREF to: Stack[-0x20d] (DATA)
// 004fb3b9: MOV EDX,dword ptr [ESP + 0x21c]
//   Label: LAB_004fb3b9
//   XREF to: Stack[0xc] (READ)
// 004fb3c0: PUSH EDX
// 004fb3c1: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x210] (DATA)
// 004fb3c5: PUSH EAX
// 004fb3c6: CALL crt_string.c_strcmp_FUN_005fef20
//   XREF to: 005fef20 (UNCONDITIONAL_CALL)
// 004fb3cb: ADD ESP,0x8
// 004fb3ce: TEST EAX,EAX
// 004fb3d0: JNZ 0x004fb38b
//   XREF to: 004fb38b (CONDITIONAL_JUMP)
// 004fb3d2: MOV EDI,0x1
// 004fb3d7: JMP 0x004fb2d7
//   XREF to: 004fb2d7 (UNCONDITIONAL_JUMP)
// 004fb3dc: MOV EDI,dword ptr [ESP + 0x220]
//   Label: LAB_004fb3dc
//   XREF to: Stack[0x10] (READ)
// 004fb3e3: MOV EBX,dword ptr [ESP + 0x228]
//   XREF to: Stack[0x18] (READ)
// 004fb3ea: SUB ECX,ECX
// 004fb3ec: DEC ECX
// 004fb3ed: XOR EAX,EAX
// 004fb3ef: SCASB.REPNE ES:EDI
// 004fb3f1: NOT ECX
// 004fb3f3: DEC ECX
// 004fb3f4: CMP ECX,EBX
// 004fb3f6: JGE 0x004fb317
//   XREF to: 004fb317 (CONDITIONAL_JUMP)
// 004fb3fc: MOV ESI,dword ptr [ESP + 0x220]
//   XREF to: Stack[0x10] (READ)
// 004fb403: MOV EDI,dword ptr [ESP + 0x224]
//   XREF to: Stack[0x14] (READ)
// 004fb40a: PUSH EDI
// 004fb40b: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb40b
// 004fb40d: MOV byte ptr [EDI],AL
// 004fb40f: CMP AL,0x0
// 004fb411: JZ 0x004fb423
//   XREF to: 004fb423 (CONDITIONAL_JUMP)
// 004fb413: MOV AL,byte ptr [ESI + 0x1]
// 004fb416: ADD ESI,0x2
// 004fb419: MOV byte ptr [EDI + 0x1],AL
// 004fb41c: ADD EDI,0x2
// 004fb41f: CMP AL,0x0
// 004fb421: JNZ 0x004fb40b
//   XREF to: 004fb40b (CONDITIONAL_JUMP)
// 004fb423: POP EDI
//   Label: LAB_004fb423
// 004fb424: MOV EDI,0x1
// 004fb429: MOV EAX,EDI
// 004fb42b: ADD ESP,0x200
// 004fb431: POP EBP
// 004fb432: POP EDI
// 004fb433: POP ESI
// 004fb434: POP EBX
// 004fb435: RET
// 004fb436: MOV EDI,dword ptr [ESP + 0x224]
//   Label: LAB_004fb436
//   XREF to: Stack[0x14] (READ)
// 004fb43d: MOV ESI,EBP
// 004fb43f: PUSH EDI
// 004fb440: MOV AL,byte ptr [ESI]
//   Label: LAB_004fb440
// 004fb442: MOV byte ptr [EDI],AL
// 004fb444: CMP AL,0x0
// 004fb446: JZ 0x004fb458
//   XREF to: 004fb458 (CONDITIONAL_JUMP)
// 004fb448: MOV AL,byte ptr [ESI + 0x1]
// 004fb44b: ADD ESI,0x2
// 004fb44e: MOV byte ptr [EDI + 0x1],AL
// 004fb451: ADD EDI,0x2
// 004fb454: CMP AL,0x0
// 004fb456: JNZ 0x004fb440
//   XREF to: 004fb440 (CONDITIONAL_JUMP)
// 004fb458: POP EDI
//   Label: LAB_004fb458
// 004fb459: MOV EDI,0x1
// 004fb45e: MOV EAX,EDI
// 004fb460: ADD ESP,0x200
// 004fb466: POP EBP
// 004fb467: POP EDI
// 004fb468: POP ESI
// 004fb469: POP EBX
// 004fb46a: RET
