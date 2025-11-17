// Name: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
// Address: 005a8390
// Address Range: [[005a8390, 005a8474]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_startSfx_FUN_005a8e90 (005a8e90) at 005a9042 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650657
//   TerminatedCString s_SfxSlot_seek_no_sample_0065066c
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0
//   sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
//   sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_seek_FUN_005a8390(CSfxSlot *this_ptr)

{
  CSfxSample *pCVar1;
  int iVar2;
  double dVar3;
  uint in_stack_ffffffe8;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbfd;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::seek - no sample?!");
  }
  dVar3 = sound_sndmain_cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
                    (*(CSampleInfo **)&(this_ptr->options).trigger_time,
                     *(double *)((int)&(this_ptr->options).trigger_time + 4),0,in_stack_ffffffe8);
  (this_ptr->options).trigger_id = 0;
  (this_ptr->options).trigger_time = dVar3;
  dVar3 = sound_sndmain_cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
                    (*(CSampleInfo **)&(this_ptr->options).trigger_time,
                     (double)CONCAT44((this_ptr->options).trigger_id,
                                      *(undefined4 *)((int)&(this_ptr->options).trigger_time + 4)),
                     SUB84(dVar3,0),(uint)((ulonglong)dVar3 >> 0x20));
  pCVar1 = this_ptr->sample;
  (this_ptr->options).trigger_time = dVar3;
  iVar2 = pCVar1->streaming_slot_index;
  if (iVar2 < 0) {
    *(undefined4 *)this_ptr->field16_0x11c = *(undefined4 *)&(this_ptr->options).trigger_time;
    *(undefined4 *)(this_ptr->field16_0x11c + 4) =
         *(undefined4 *)((int)&(this_ptr->options).trigger_time + 4);
    return;
  }
  dVar3 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(iVar2,pCVar1));
  sound_sndmain_cpp_CSfxSample_seek_FUN_005a65a0(SUB84(dVar3,0));
  *(double *)this_ptr->field16_0x11c = (double)this_ptr->sample->field14_0x168;
  return;
}


// Assembly code:
// 005a8390: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_seek_FUN_005a8390
// 005a8391: PUSH ESI
// 005a8392: PUSH EDI
// 005a8393: PUSH EBP
// 005a8394: SUB ESP,0xc
// 005a8397: MOV EBX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 005a839b: CMP dword ptr [EBX + 0x78],0x0
// 005a839f: JNZ 0x005a83c4
//   XREF to: 005a83c4 (CONDITIONAL_JUMP)
// 005a83a1: MOV ECX,0x650657
//   XREF to: 00650657 (PARAM)
// 005a83a6: MOV ESI,0xbfd
// 005a83ab: PUSH 0x65066c
//   XREF to: 0065066c (DATA)
// 005a83b0: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a83b6: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a83bc: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a83c1: ADD ESP,0x4
// 005a83c4: PUSH 0x0
//   Label: LAB_005a83c4
// 005a83c6: MOV EDI,dword ptr [EBX + 0x68]
// 005a83c9: PUSH EDI
// 005a83ca: MOV EBP,dword ptr [EBX + 0x64]
// 005a83cd: PUSH EBP
// 005a83ce: MOV EAX,dword ptr [EBX + 0x60]
// 005a83d1: PUSH EAX
// 005a83d2: MOV EDX,dword ptr [EBX + 0x78]
// 005a83d5: PUSH EDX
// 005a83d6: CALL sound_sndmain.cpp_CSampleInfo_cvtPlaybackPos_FUN_005a8580
//   XREF to: 005a8580 (UNCONDITIONAL_CALL)
// 005a83db: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a83df: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005a83e3: MOV dword ptr [EBX + 0x68],0x0
// 005a83ea: FLD double ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005a83ee: ADD ESP,0x14
// 005a83f1: MOV ECX,dword ptr [EBX + 0x68]
// 005a83f4: PUSH ECX
// 005a83f5: FSTP double ptr [EBX + 0x60]
// 005a83f8: MOV ESI,dword ptr [EBX + 0x64]
// 005a83fb: PUSH ESI
// 005a83fc: MOV EDI,dword ptr [EBX + 0x60]
// 005a83ff: PUSH EDI
// 005a8400: MOV EBP,dword ptr [EBX + 0x78]
// 005a8403: PUSH EBP
// 005a8404: CALL sound_sndmain.cpp_CSampleInfo_normalizePlaybackPos_FUN_005a86f0
//   XREF to: 005a86f0 (UNCONDITIONAL_CALL)
// 005a8409: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a840d: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 005a8411: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x1c] (READ)
// 005a8415: MOV EAX,dword ptr [EBX + 0x78]
// 005a8418: FSTP double ptr [EBX + 0x60]
// 005a841b: MOV EDX,dword ptr [EAX + 0x15c]
// 005a8421: ADD ESP,0x10
// 005a8424: TEST EDX,EDX
// 005a8426: JGE 0x005a8442
//   XREF to: 005a8442 (CONDITIONAL_JUMP)
// 005a8428: MOV EAX,dword ptr [EBX + 0x60]
// 005a842b: MOV dword ptr [EBX + 0x11c],EAX
// 005a8431: MOV EAX,dword ptr [EBX + 0x64]
// 005a8434: MOV dword ptr [EBX + 0x120],EAX
// 005a843a: ADD ESP,0xc
// 005a843d: POP EBP
// 005a843e: POP EDI
// 005a843f: POP ESI
// 005a8440: POP EBX
// 005a8441: RET
// 005a8442: FLD double ptr [EBX + 0x60]
//   Label: LAB_005a8442
// 005a8445: PUSH 0x0
// 005a8447: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a844c: FISTP dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 005a8450: MOV ECX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 005a8454: PUSH ECX
// 005a8455: PUSH EAX
// 005a8456: CALL sound_sndmain.cpp_CSfxSample_seek_FUN_005a65a0
//   XREF to: 005a65a0 (UNCONDITIONAL_CALL)
// 005a845b: MOV EAX,dword ptr [EBX + 0x78]
// 005a845e: ADD ESP,0xc
// 005a8461: FILD dword ptr [EAX + 0x168]
// 005a8467: FSTP double ptr [EBX + 0x11c]
// 005a846d: ADD ESP,0xc
// 005a8470: POP EBP
// 005a8471: POP EDI
// 005a8472: POP ESI
// 005a8473: POP EBX
// 005a8474: RET
