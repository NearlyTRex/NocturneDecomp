// Name: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
// Address: 005a8170
// Address Range: [[005a8170, 005a8382]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_mix_FUN_005a75e0 (005a75e0) at 005a7970 [UNCONDITIONAL_CALL]
//   sound_sndmain.cpp_CSfxSlot_pollHwPlaybackPos_FUN_005a80e0 (005a80e0) at 005a8155 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_00650563
//   TerminatedCString s_SfxSlot_updatePlaybackPo_00650578
//   TerminatedCString s_sound_sndmain_cpp_006505a2
//   TerminatedCString s_SfxSlot_updatePlaybackPo_006505b7
//   TerminatedCString s_sound_sndmain_cpp_006505ec
//   TerminatedCString s_SfxSlot_updatePlaybackPo_00650601
//   double DOUBLE_0065064f = 0.00100000000000000
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_floor_FUN_005feb90
//   sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170(CSfxSlot *this_ptr)

{
  CSfxSample *this_ptr_00;
  double dVar1;
  int iVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EDX;
  float10 in_ST0;
  undefined4 in_stack_00000008;
  undefined4 in_stack_0000000c;
  undefined4 uStack_24;
  undefined4 local_20;
  undefined4 uStack_14;
  
  if (this_ptr->sample == (CSfxSample *)0x0) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbbc;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::updatePlaybackPos - no samplePtr");
  }
  if (((double)CONCAT44(in_stack_0000000c,in_stack_00000008) < 0.0) ||
     ((double)this_ptr->sample->streaming_buffer_size <
      (double)CONCAT44(in_stack_0000000c,in_stack_00000008))) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbc2;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::updatePlaybackPos - invalid buffer position");
  }
  dVar1 = (double)CONCAT44(in_stack_0000000c,in_stack_00000008) - *(double *)this_ptr->field16_0x11c
  ;
  if (dVar1 < 0.0) {
    dVar1 = (double)this_ptr->sample->streaming_buffer_size + dVar1;
  }
  local_20 = (undefined4)((ulonglong)dVar1 >> 0x20);
  uStack_24 = SUB84(dVar1,0);
  if ((dVar1 < 0.0) || ((double)this_ptr->sample->streaming_buffer_size + DOUBLE_0065064f < dVar1))
  {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0xbd0;
    core_main_c_displayErrorAndQuit_FUN_00506f10
              ("SfxSlot::updatePlaybackPos - stepped too much: %f-%f=%f, sample=%d (%s)",in_stack_00000008,in_stack_0000000c,
               *(undefined4 *)this_ptr->field16_0x11c,*(undefined4 *)(this_ptr->field16_0x11c + 4),
               uStack_24,local_20,this_ptr->sample->streaming_buffer_size,this_ptr->sample);
  }
  if (((this_ptr->options).trigger_time != *(double *)this_ptr->field16_0x11c) ||
     ((double)CONCAT44(in_stack_0000000c,in_stack_00000008) < (this_ptr->options).trigger_time)) {
    (this_ptr->options).trigger_time = (this_ptr->options).trigger_time + dVar1;
  }
  else {
    *(undefined4 *)&(this_ptr->options).trigger_time = in_stack_00000008;
    *(undefined4 *)((int)&(this_ptr->options).trigger_time + 4) = in_stack_0000000c;
  }
  if ((this_ptr->options).trigger_time < 0.0) {
    *(undefined4 *)&(this_ptr->options).trigger_time = 0;
    *(undefined4 *)((int)&(this_ptr->options).trigger_time + 4) = 0;
  }
  this_ptr_00 = this_ptr->sample;
  if ((-1 < (this_ptr_00->sample_info).sample_count) &&
     ((double)(this_ptr_00->sample_info).sample_count <= (this_ptr->options).trigger_time)) {
    iVar2 = sound_sndmain_cpp_CSfxSample_getLoopMode_FUN_005a87d0(this_ptr_00);
    if (iVar2 == 0) {
      (this_ptr->options).trigger_time = (double)(this_ptr->sample->sample_info).sample_count;
    }
    else {
      iVar2 = (this_ptr->sample->sample_info).sample_count;
      crt_math_c_floor_FUN_005feb90((double)in_ST0);
      (this_ptr->options).trigger_time =
           (this_ptr->options).trigger_time -
           (double)CONCAT44(extraout_EDX,extraout_EAX) *
           (double)CONCAT44(SUB84((double)iVar2,0),uStack_14);
    }
  }
  *(undefined4 *)this_ptr->field16_0x11c = in_stack_00000008;
  *(undefined4 *)(this_ptr->field16_0x11c + 4) = in_stack_0000000c;
  return;
}


// Assembly code:
// 005a8170: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_updatePlaybackPos_FUN_005a8170
// 005a8171: PUSH ESI
// 005a8172: PUSH EDI
// 005a8173: PUSH EBP
// 005a8174: MOV EBP,ESP
// 005a8176: SUB ESP,0x18
// 005a8179: AND ESP,0xfffffff8
// 005a817c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a817f: CMP dword ptr [EBX + 0x78],0x0
// 005a8183: JZ 0x005a82a6
//   XREF to: 005a82a6 (CONDITIONAL_JUMP)
// 005a8189: FLDZ
//   Label: LAB_005a8189
// 005a818b: FCOMP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a818e: FNSTSW AX
// 005a8190: SAHF
// 005a8191: JBE 0x005a82ce
//   XREF to: 005a82ce (CONDITIONAL_JUMP)
// 005a8197: MOV EDI,0x6505a2
//   Label: LAB_005a8197
//   XREF to: 006505a2 (DATA)
// 005a819c: MOV EAX,0xbc2
// 005a81a1: PUSH 0x6505b7
//   XREF to: 006505b7 (DATA)
// 005a81a6: MOV dword ptr [0x02f0ca48],EDI
//   XREF to: 02f0ca48 (WRITE)
// 005a81ac: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 005a81b1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a81b6: ADD ESP,0x4
// 005a81b9: FLD double ptr [EBP + 0x18]
//   Label: LAB_005a81b9
//   XREF to: Stack[0x8] (READ)
// 005a81bc: FSUB double ptr [EBX + 0x11c]
// 005a81c2: FLDZ
// 005a81c4: FXCH
// 005a81c6: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a81c9: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a81cc: FNSTSW AX
// 005a81ce: SAHF
// 005a81cf: JBE 0x005a81e0
//   XREF to: 005a81e0 (CONDITIONAL_JUMP)
// 005a81d1: MOV EAX,dword ptr [EBX + 0x78]
// 005a81d4: FILD dword ptr [EAX + 0x160]
// 005a81da: FADD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a81dd: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a81e0: FLDZ
//   Label: LAB_005a81e0
// 005a81e2: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a81e5: FNSTSW AX
// 005a81e7: SAHF
// 005a81e8: JBE 0x005a82e8
//   XREF to: 005a82e8 (CONDITIONAL_JUMP)
// 005a81ee: MOV ESI,dword ptr [EBX + 0x78]
//   Label: LAB_005a81ee
// 005a81f1: PUSH ESI
// 005a81f2: MOV EDI,dword ptr [ESI + 0x160]
// 005a81f8: MOV EDX,0x6505ec
//   XREF to: 006505ec (DATA)
// 005a81fd: PUSH EDI
// 005a81fe: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005a8202: MOV dword ptr [0x02f0ca48],EDX
//   XREF to: 02f0ca48 (WRITE)
// 005a8208: PUSH EAX
// 005a8209: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (READ)
// 005a820d: MOV ECX,0xbd0
// 005a8212: PUSH EDX
// 005a8213: MOV dword ptr [0x02f0ca4c],ECX
//   XREF to: 02f0ca4c (WRITE)
// 005a8219: MOV ECX,dword ptr [EBX + 0x120]
// 005a821f: PUSH ECX
// 005a8220: MOV ESI,dword ptr [EBX + 0x11c]
// 005a8226: PUSH ESI
// 005a8227: MOV EDI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a822a: PUSH EDI
// 005a822b: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a822e: PUSH EAX
// 005a822f: PUSH 0x650601
//   XREF to: 00650601 (DATA)
// 005a8234: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a8239: ADD ESP,0x24
// 005a823c: FLD double ptr [EBX + 0x60]
//   Label: LAB_005a823c
// 005a823f: FCOMP double ptr [EBX + 0x11c]
// 005a8245: FNSTSW AX
// 005a8247: SAHF
// 005a8248: JZ 0x005a8308
//   XREF to: 005a8308 (CONDITIONAL_JUMP)
// 005a824e: FLD double ptr [EBX + 0x60]
//   Label: LAB_005a824e
// 005a8251: FADD double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a8254: FSTP double ptr [EBX + 0x60]
// 005a8257: FLDZ
//   Label: LAB_005a8257
// 005a8259: FCOMP double ptr [EBX + 0x60]
// 005a825c: FNSTSW AX
// 005a825e: SAHF
// 005a825f: JBE 0x005a826f
//   XREF to: 005a826f (CONDITIONAL_JUMP)
// 005a8261: MOV dword ptr [EBX + 0x60],0x0
// 005a8268: MOV dword ptr [EBX + 0x64],0x0
// 005a826f: MOV EDX,dword ptr [EBX + 0x78]
//   Label: LAB_005a826f
// 005a8272: CMP dword ptr [EDX + 0x110],0x0
// 005a8279: JL 0x005a828d
//   XREF to: 005a828d (CONDITIONAL_JUMP)
// 005a827b: FILD dword ptr [EDX + 0x110]
// 005a8281: FCOMP double ptr [EBX + 0x60]
// 005a8284: FNSTSW AX
// 005a8286: SAHF
// 005a8287: JBE 0x005a8328
//   XREF to: 005a8328 (CONDITIONAL_JUMP)
// 005a828d: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_005a828d
//   XREF to: Stack[0x8] (READ)
// 005a8290: MOV dword ptr [EBX + 0x11c],EAX
// 005a8296: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a8299: MOV dword ptr [EBX + 0x120],EAX
// 005a829f: MOV ESP,EBP
// 005a82a1: POP EBP
// 005a82a2: POP EDI
// 005a82a3: POP ESI
// 005a82a4: POP EBX
// 005a82a5: RET
// 005a82a6: MOV ECX,0x650563
//   Label: LAB_005a82a6
//   XREF to: 00650563 (PARAM)
// 005a82ab: MOV ESI,0xbbc
// 005a82b0: PUSH 0x650578
//   XREF to: 00650578 (DATA)
// 005a82b5: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a82bb: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005a82c1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a82c6: ADD ESP,0x4
// 005a82c9: JMP 0x005a8189
//   XREF to: 005a8189 (UNCONDITIONAL_JUMP)
// 005a82ce: MOV EAX,dword ptr [EBX + 0x78]
//   Label: LAB_005a82ce
// 005a82d1: FILD dword ptr [EAX + 0x160]
// 005a82d7: FCOMP double ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a82da: FNSTSW AX
// 005a82dc: SAHF
// 005a82dd: JC 0x005a8197
//   XREF to: 005a8197 (CONDITIONAL_JUMP)
// 005a82e3: JMP 0x005a81b9
//   XREF to: 005a81b9 (UNCONDITIONAL_JUMP)
// 005a82e8: MOV EAX,dword ptr [EBX + 0x78]
//   Label: LAB_005a82e8
// 005a82eb: FILD dword ptr [EAX + 0x160]
// 005a82f1: FADD double ptr [0x0065064f]
//   XREF to: 0065064f (READ)
// 005a82f7: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 005a82fa: FNSTSW AX
// 005a82fc: SAHF
// 005a82fd: JC 0x005a81ee
//   XREF to: 005a81ee (CONDITIONAL_JUMP)
// 005a8303: JMP 0x005a823c
//   XREF to: 005a823c (UNCONDITIONAL_JUMP)
// 005a8308: FLD double ptr [EBP + 0x18]
//   Label: LAB_005a8308
//   XREF to: Stack[0x8] (READ)
// 005a830b: FCOMP double ptr [EBX + 0x60]
// 005a830e: FNSTSW AX
// 005a8310: SAHF
// 005a8311: JC 0x005a824e
//   XREF to: 005a824e (CONDITIONAL_JUMP)
// 005a8317: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a831a: MOV dword ptr [EBX + 0x60],EAX
// 005a831d: MOV EAX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a8320: MOV dword ptr [EBX + 0x64],EAX
// 005a8323: JMP 0x005a8257
//   XREF to: 005a8257 (UNCONDITIONAL_JUMP)
// 005a8328: PUSH EDX
//   Label: LAB_005a8328
// 005a8329: CALL sound_sndmain.cpp_CSfxSample_getLoopMode_FUN_005a87d0
//   XREF to: 005a87d0 (UNCONDITIONAL_CALL)
// 005a832e: ADD ESP,0x4
// 005a8331: TEST EAX,EAX
// 005a8333: JNZ 0x005a8346
//   XREF to: 005a8346 (CONDITIONAL_JUMP)
// 005a8335: MOV EAX,dword ptr [EBX + 0x78]
// 005a8338: FILD dword ptr [EAX + 0x110]
// 005a833e: FSTP double ptr [EBX + 0x60]
// 005a8341: JMP 0x005a828d
//   XREF to: 005a828d (UNCONDITIONAL_JUMP)
// 005a8346: MOV EAX,dword ptr [EBX + 0x78]
//   Label: LAB_005a8346
// 005a8349: FLD double ptr [EBX + 0x60]
// 005a834c: FILD dword ptr [EAX + 0x110]
// 005a8352: FSTP double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 005a8356: FDIV double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005a835a: SUB ESP,0x8
// 005a835d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005a8360: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 005a8365: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 005a8369: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a836d: FLD double ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005a8371: ADD ESP,0x8
// 005a8374: FMUL double ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 005a8378: FSUBR double ptr [EBX + 0x60]
// 005a837b: FSTP double ptr [EBX + 0x60]
// 005a837e: JMP 0x005a828d
//   XREF to: 005a828d (UNCONDITIONAL_JUMP)
