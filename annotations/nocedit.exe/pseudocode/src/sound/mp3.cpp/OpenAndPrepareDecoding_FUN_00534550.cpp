// Name: sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550
// Address: 00534550
// Address Range: [[00534550, 00534628]]
// Convention: unknown
// Signature: undefined sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550()
// Cross-references:
//   sound_mp3.cpp_FUN_00534210 (00534210) at 00534298 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_FUN_005a5200 (005a5200) at 005a5318 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_ReadingOrDecodingSoundFile_FUN_005a4c80 (005a4c80) at 005a5022 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_getSampleInfo_FUN_005aa3f0 (005aa3f0) at 005aa5b3 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a92ea [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_0063b22a
//   TerminatedCString s_sound_mp3_cpp_0063b230
//   TerminatedCString s_Can_t_open_s_0063b241
//   TerminatedCString s_rb_0063b24f
//   TerminatedCString s_sound_0063b252
//   TerminatedCString s_sound_mp3_cpp_0063b258
//   TerminatedCString s_Can_t_open_s_0063b269
//   TerminatedCString s_sound_mp3_cpp_0063b277
//   TerminatedCString s_Error_preparing_to_decod_0063b288
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   engine_dosio.c_getFile_FUN_00481a50
//   engine_dosio.c_getFileSize_FUN_00481880
//   sound_mp3.cpp_MPEGPickTable_LayerCheck_FUN_00534630

#include "nocturne.h"

/* Signature: undefined1 sound_mp3.cpp_OpenAndPrepareDecoding(undefined4 param_1, undefined4
   param_2) */

void sound_mp3_cpp_OpenAndPrepareDecoding_FUN_00534550
               (undefined4 param_1,undefined4 param_2,undefined4 unaff_EBX,undefined4 param_4,
               char *param_5,char *param_6)

{
  char cVar1;
  int iVar2;
  FILE *pFVar3;
  
  iVar2 = engine_dosio_c_getFileSize_FUN_00481880("sound",param_6);
  if (iVar2 < 1) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe14;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",param_6);
  }
  pFVar3 = engine_dosio_c_getFile_FUN_00481a50("sound",param_6,"rb");
  if (pFVar3 == (FILE *)0x0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe19;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Can't open %s",param_6,unaff_EBX);
  }
  iVar2 = sound_mp3_cpp_MPEGPickTable_LayerCheck_FUN_00534630();
  if (iVar2 == 0) {
    g_CurrentFilename = "..\\sound\\mp3.cpp";
    g_CurrentLineNumber = 0xe1e;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Error preparing to decode %s");
  }
  do {
    cVar1 = *param_6;
    *param_5 = cVar1;
    if (cVar1 == '\0') {
      return;
    }
    cVar1 = param_6[1];
    param_6 = param_6 + 2;
    param_5[1] = cVar1;
    param_5 = param_5 + 2;
  } while (cVar1 != '\0');
  return;
}


// Assembly code:
// 00534550: PUSH EBX
//   Label: sound_mp3.cpp_OpenAndPrepareDecoding_FUN_00534550
// 00534551: PUSH ESI
// 00534552: PUSH EDI
// 00534553: PUSH EBP
// 00534554: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00534558: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0053455c: PUSH ESI
// 0053455d: PUSH 0x63b22a
//   XREF to: 0063b22a (DATA)
// 00534562: CALL engine_dosio.c_getFileSize_FUN_00481880
//   XREF to: 00481880 (UNCONDITIONAL_CALL)
// 00534567: ADD ESP,0x8
// 0053456a: MOV EBP,EAX
// 0053456c: TEST EAX,EAX
// 0053456e: JLE 0x005345da
//   XREF to: 005345da (CONDITIONAL_JUMP)
// 00534570: PUSH 0x63b24f
//   Label: LAB_00534570
//   XREF to: 0063b24f (DATA)
// 00534575: PUSH ESI
// 00534576: PUSH 0x63b252
//   XREF to: 0063b252 (DATA)
// 0053457b: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00534580: ADD ESP,0xc
// 00534583: MOV EBX,EAX
// 00534585: TEST EAX,EAX
// 00534587: JNZ 0x005345ac
//   XREF to: 005345ac (CONDITIONAL_JUMP)
// 00534589: PUSH ESI
// 0053458a: MOV EAX,0x63b258
//   XREF to: 0063b258 (PARAM)
// 0053458f: MOV EDX,0xe19
// 00534594: PUSH 0x63b269
//   XREF to: 0063b269 (DATA)
// 00534599: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 0053459e: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005345a4: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005345a9: ADD ESP,0x8
// 005345ac: PUSH EBP
//   Label: LAB_005345ac
// 005345ad: PUSH EBX
// 005345ae: PUSH EDI
// 005345af: CALL sound_mp3.cpp_MPEGPickTable_LayerCheck_FUN_00534630
//   XREF to: 00534630 (UNCONDITIONAL_CALL)
// 005345b4: ADD ESP,0xc
// 005345b7: TEST EAX,EAX
// 005345b9: JZ 0x00534603
//   XREF to: 00534603 (CONDITIONAL_JUMP)
// 005345bb: PUSH EDI
//   Label: LAB_005345bb
// 005345bc: MOV AL,byte ptr [ESI]
//   Label: LAB_005345bc
// 005345be: MOV byte ptr [EDI],AL
// 005345c0: CMP AL,0x0
// 005345c2: JZ 0x005345d4
//   XREF to: 005345d4 (CONDITIONAL_JUMP)
// 005345c4: MOV AL,byte ptr [ESI + 0x1]
// 005345c7: ADD ESI,0x2
// 005345ca: MOV byte ptr [EDI + 0x1],AL
// 005345cd: ADD EDI,0x2
// 005345d0: CMP AL,0x0
// 005345d2: JNZ 0x005345bc
//   XREF to: 005345bc (CONDITIONAL_JUMP)
// 005345d4: POP EDI
//   Label: LAB_005345d4
// 005345d5: POP EBP
// 005345d6: POP EDI
// 005345d7: POP ESI
// 005345d8: POP EBX
// 005345d9: RET
// 005345da: PUSH ESI
//   Label: LAB_005345da
// 005345db: MOV EDX,0x63b230
//   XREF to: 0063b230 (PARAM)
// 005345e0: MOV ECX,0xe14
// 005345e5: PUSH 0x63b241
//   XREF to: 0063b241 (DATA)
// 005345ea: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005345f0: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005345f6: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005345fb: ADD ESP,0x8
// 005345fe: JMP 0x00534570
//   XREF to: 00534570 (UNCONDITIONAL_JUMP)
// 00534603: PUSH ESI
//   Label: LAB_00534603
// 00534604: MOV ECX,0x63b277
//   XREF to: 0063b277 (PARAM)
// 00534609: MOV EBX,0xe1e
// 0053460e: PUSH 0x63b288
//   XREF to: 0063b288 (DATA)
// 00534613: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00534619: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 0053461f: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00534624: ADD ESP,0x8
// 00534627: JMP 0x005345bb
//   XREF to: 005345bb (UNCONDITIONAL_JUMP)
