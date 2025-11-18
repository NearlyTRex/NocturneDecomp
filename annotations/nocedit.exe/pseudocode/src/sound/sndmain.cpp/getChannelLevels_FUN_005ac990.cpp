// Name: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
// Address: 005ac990
// Address Range: [[005ac990, 005aca8f]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_getChannelLevels_FUN_005ac990(int channel, float * out_peak, float * out_average)
// Globals:
//   int g_MixBufferSize
//   void*[8] g_ChannelPrimaryBuffers
// Function calls:
//   sound_sndmain.cpp_lockSound_FUN_005abd30
//   sound_sndmain.cpp_unlockSound_FUN_005abdc0

#include "nocturne.h"

void __cdecl
sound_sndmain_cpp_getChannelLevels_FUN_005ac990(int channel,float *out_peak,float *out_average)

{
  int iVar1;
  float *pfVar2;
  float local_18;
  float fStack_14;
  
  if ((g_ChannelPrimaryBuffers[channel] == (void *)0x0) || (g_MixBufferSize < 1)) {
    if (out_peak != (float *)0x0) {
      *out_peak = 0.0;
    }
    if (out_average != (float *)0x0) {
      *out_average = 0.0;
    }
  }
  pfVar2 = (float *)g_ChannelPrimaryBuffers[channel];
  sound_sndmain_cpp_lockSound_FUN_005abd30();
  iVar1 = 0;
  if (0 < g_MixBufferSize) {
    do {
      fStack_14 = ABS(*pfVar2);
      pfVar2 = pfVar2 + 1;
      if (local_18 < fStack_14) {
        local_18 = fStack_14;
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < g_MixBufferSize);
  }
  sound_sndmain_cpp_unlockSound_FUN_005abdc0();
  local_18 = local_18 / (float)g_MixBufferSize;
  if (1.0 < fStack_14) {
    fStack_14 = 1.0;
  }
  if (1.0 < local_18) {
    local_18 = 1.0;
  }
  if (out_peak != (float *)0x0) {
    *out_peak = fStack_14;
  }
  if (out_average != (float *)0x0) {
    *out_average = local_18;
    return;
  }
  return;
}


// Assembly code:
// 005ac990: PUSH EBX
//   Label: sound_sndmain.cpp_getChannelLevels_FUN_005ac990
// 005ac991: PUSH ESI
// 005ac992: PUSH EDI
// 005ac993: PUSH EBP
// 005ac994: MOV EBP,ESP
// 005ac996: SUB ESP,0xc
// 005ac999: AND ESP,0xfffffff8
// 005ac99c: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ac99f: MOV EDI,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005ac9a2: MOV ESI,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005ac9a5: CMP dword ptr [EBX*0x4 + 0x3f692b0],0x0
//   XREF to: 03f692b0 (DATA)
// 005ac9ad: JNZ 0x005aca72
//   XREF to: 005aca72 (CONDITIONAL_JUMP)
// 005ac9b3: TEST EDI,EDI
//   Label: LAB_005ac9b3
// 005ac9b5: JZ 0x005ac9bd
//   XREF to: 005ac9bd (CONDITIONAL_JUMP)
// 005ac9b7: MOV dword ptr [EDI],0x0
// 005ac9bd: TEST ESI,ESI
//   Label: LAB_005ac9bd
// 005ac9bf: JZ 0x005ac9c7
//   XREF to: 005ac9c7 (CONDITIONAL_JUMP)
// 005ac9c1: MOV dword ptr [ESI],0x0
// 005ac9c7: XOR EAX,EAX
//   Label: LAB_005ac9c7
// 005ac9c9: MOV EBX,dword ptr [EBX*0x4 + 0x3f692b0]
//   XREF to: 03f692b0 (DATA)
// 005ac9d0: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 005ac9d3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005ac9d7: CALL sound_sndmain.cpp_lockSound_FUN_005abd30
//   XREF to: 005abd30 (UNCONDITIONAL_CALL)
// 005ac9dc: MOV ECX,dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005ac9e2: XOR EDX,EDX
// 005ac9e4: TEST ECX,ECX
// 005ac9e6: JLE 0x005aca20
//   XREF to: 005aca20 (CONDITIONAL_JUMP)
// 005ac9e8: FLD float ptr [EBX]
//   Label: LAB_005ac9e8
// 005ac9ea: FABS
// 005ac9ec: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005ac9ef: ADD EBX,0x4
// 005ac9f2: FXCH
// 005ac9f4: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005ac9f8: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005ac9fc: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005aca00: FXCH
// 005aca02: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005aca05: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005aca09: FNSTSW AX
// 005aca0b: SAHF
// 005aca0c: JBE 0x005aca16
//   XREF to: 005aca16 (CONDITIONAL_JUMP)
// 005aca0e: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005aca12: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005aca16: MOV EAX,[0x03f69280]
//   Label: LAB_005aca16
//   XREF to: 03f69280 (READ)
// 005aca1b: INC EDX
// 005aca1c: CMP EDX,EAX
// 005aca1e: JL 0x005ac9e8
//   XREF to: 005ac9e8 (CONDITIONAL_JUMP)
// 005aca20: CALL sound_sndmain.cpp_unlockSound_FUN_005abdc0
//   Label: LAB_005aca20
//   XREF to: 005abdc0 (UNCONDITIONAL_CALL)
// 005aca25: FILD dword ptr [0x03f69280]
//   XREF to: 03f69280 (READ)
// 005aca2b: FDIVR float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005aca2e: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005aca32: FLD1
// 005aca34: FXCH ST2
// 005aca36: FSTP float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005aca39: FXCH
// 005aca3b: FCOMPP
// 005aca3d: FNSTSW AX
// 005aca3f: SAHF
// 005aca40: JNC 0x005aca4a
//   XREF to: 005aca4a (CONDITIONAL_JUMP)
// 005aca42: MOV dword ptr [ESP + 0x4],0x3f800000
//   XREF to: Stack[-0x1c] (WRITE)
// 005aca4a: FLD float ptr [ESP]
//   Label: LAB_005aca4a
//   XREF to: Stack[-0x20] (DATA)
// 005aca4d: FLD1
// 005aca4f: FCOMPP
// 005aca51: FNSTSW AX
// 005aca53: SAHF
// 005aca54: JNC 0x005aca5d
//   XREF to: 005aca5d (CONDITIONAL_JUMP)
// 005aca56: MOV dword ptr [ESP],0x3f800000
//   XREF to: Stack[-0x20] (DATA)
// 005aca5d: TEST EDI,EDI
//   Label: LAB_005aca5d
// 005aca5f: JZ 0x005aca67
//   XREF to: 005aca67 (CONDITIONAL_JUMP)
// 005aca61: MOV EDX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 005aca65: MOV dword ptr [EDI],EDX
// 005aca67: TEST ESI,ESI
//   Label: LAB_005aca67
// 005aca69: JNZ 0x005aca84
//   XREF to: 005aca84 (CONDITIONAL_JUMP)
// 005aca6b: MOV ESP,EBP
// 005aca6d: POP EBP
// 005aca6e: POP EDI
// 005aca6f: POP ESI
// 005aca70: POP EBX
// 005aca71: RET
// 005aca72: CMP dword ptr [0x03f69280],0x1
//   Label: LAB_005aca72
//   XREF to: 03f69280 (READ)
// 005aca79: JL 0x005ac9b3
//   XREF to: 005ac9b3 (CONDITIONAL_JUMP)
// 005aca7f: JMP 0x005ac9c7
//   XREF to: 005ac9c7 (UNCONDITIONAL_JUMP)
// 005aca84: MOV EDX,dword ptr [ESP]
//   Label: LAB_005aca84
//   XREF to: Stack[-0x20] (DATA)
// 005aca87: MOV dword ptr [ESI],EDX
// 005aca89: MOV ESP,EBP
// 005aca8b: POP EBP
// 005aca8c: POP EDI
// 005aca8d: POP ESI
// 005aca8e: POP EBX
// 005aca8f: RET
