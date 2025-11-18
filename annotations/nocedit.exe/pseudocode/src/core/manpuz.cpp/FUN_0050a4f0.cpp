// Name: core_manpuz.cpp_FUN_0050a4f0
// Address: 0050a4f0
// Address Range: [[0050a4f0, 0050a60e]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a4f0()
// Cross-references:
//   core_manpuz.cpp_FUN_0050a610 (0050a610) at 0050a6a3 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0063576d = 0.00392156862745098
// Function calls:
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   sound_sndmain.cpp_killSfx_FUN_005a9c40
//   sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   sound_sndmain.cpp_setSfxPosition_FUN_005a9820
//   sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   sound_sndmain.cpp_startSfx_FUN_005a8e90

#include "nocturne.h"

undefined4 core_manpuz_cpp_FUN_0050a4f0(void)

{
  int iVar1;
  uint uVar2;
  float unaff_EBP;
  undefined4 uVar3;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  uint *in_stack_00000010;
  char *in_stack_00000014;
  float *in_stack_00000018;
  
  uVar3 = 0;
  if (in_stack_00000008 - *in_stack_00000004 < -in_stack_0000000c) {
    in_stack_0000000c = *in_stack_00000004 - in_stack_0000000c;
  }
  else {
    if (in_stack_00000008 - *in_stack_00000004 <= in_stack_0000000c) {
      uVar3 = 1;
      *in_stack_00000004 = in_stack_00000008;
      goto LAB_0050a537;
    }
    in_stack_0000000c = *in_stack_00000004 + in_stack_0000000c;
  }
  *in_stack_00000004 = in_stack_0000000c;
LAB_0050a537:
  if (*in_stack_00000004 * (float)DOUBLE_0063576d <= 0.0) {
    sound_sndmain_cpp_killSfx_FUN_005a9c40(*in_stack_00000010);
    return uVar3;
  }
  iVar1 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*in_stack_00000010);
  if (iVar1 != 0) {
    sound_sndmain_cpp_setSfxPosition_FUN_005a9820
              (*in_stack_00000010,(double)*in_stack_00000018,(double)in_stack_00000018[1],
               (double)in_stack_00000018[2]);
    sound_sndmain_cpp_setSfxVolume_FUN_005a9ae0(*in_stack_00000010,unaff_EBP);
    return uVar3;
  }
  sound_sndmain_cpp_pushSfxOptions_FUN_005a8c30();
  sound_sndmain_cpp_setNextSfxVolume_FUN_005a8a60(unaff_EBP);
  sound_sndmain_cpp_setNextSfxStaticPosition_FUN_005a88e0
            ((double)*in_stack_00000018,(double)in_stack_00000018[1],(double)in_stack_00000018[2]);
  uVar2 = sound_sndmain_cpp_startSfx_FUN_005a8e90(in_stack_00000014);
  *in_stack_00000010 = uVar2;
  sound_sndmain_cpp_popSfxOptions_FUN_005a8cb0();
  return uVar3;
}


// Assembly code:
// 0050a4f0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050a4f0
// 0050a4f1: PUSH ESI
// 0050a4f2: PUSH EDI
// 0050a4f3: PUSH EBP
// 0050a4f4: MOV EBP,ESP
// 0050a4f6: SUB ESP,0x8
// 0050a4f9: AND ESP,0xfffffff8
// 0050a4fc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0050a4ff: MOV ESI,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 0050a502: MOV EBX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0050a505: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0050a508: FLD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050a50b: FCHS
// 0050a50d: FXCH
// 0050a50f: FSUB float ptr [EDX]
// 0050a511: XOR EDI,EDI
// 0050a513: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (WRITE)
// 0050a517: FCOMP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050a51b: FNSTSW AX
// 0050a51d: SAHF
// 0050a51e: JA 0x0050a59a
//   XREF to: 0050a59a (CONDITIONAL_JUMP)
// 0050a524: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x14] (READ)
// 0050a528: FCOMP float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050a52b: FNSTSW AX
// 0050a52d: SAHF
// 0050a52e: JBE 0x0050a5a1
//   XREF to: 0050a5a1 (CONDITIONAL_JUMP)
// 0050a530: FLD float ptr [EDX]
// 0050a532: FADD float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050a535: FSTP float ptr [EDX]
//   Label: LAB_0050a535
// 0050a537: FLD float ptr [EDX]
//   Label: LAB_0050a537
// 0050a539: FMUL double ptr [0x0063576d]
//   XREF to: 0063576d (READ)
// 0050a53f: FST float ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0050a542: FLDZ
// 0050a544: FCOMPP
// 0050a546: FNSTSW AX
// 0050a548: SAHF
// 0050a549: JNC 0x0050a5fb
//   XREF to: 0050a5fb (CONDITIONAL_JUMP)
// 0050a54f: MOV ECX,dword ptr [ESI]
// 0050a551: PUSH ECX
// 0050a552: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0050a557: ADD ESP,0x4
// 0050a55a: TEST EAX,EAX
// 0050a55c: JZ 0x0050a5ad
//   XREF to: 0050a5ad (CONDITIONAL_JUMP)
// 0050a55e: SUB ESP,0x8
// 0050a561: FLD float ptr [EBX + 0x8]
// 0050a564: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0050a567: SUB ESP,0x8
// 0050a56a: FLD float ptr [EBX + 0x4]
// 0050a56d: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0050a570: SUB ESP,0x8
// 0050a573: FLD float ptr [EBX]
// 0050a575: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0050a578: MOV EAX,dword ptr [ESI]
// 0050a57a: PUSH EAX
// 0050a57b: CALL sound_sndmain.cpp_setSfxPosition_FUN_005a9820
//   XREF to: 005a9820 (UNCONDITIONAL_CALL)
// 0050a580: ADD ESP,0x1c
// 0050a583: MOV EDX,dword ptr [ESI]
// 0050a585: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0050a588: PUSH EDX
// 0050a589: CALL sound_sndmain.cpp_setSfxVolume_FUN_005a9ae0
//   XREF to: 005a9ae0 (UNCONDITIONAL_CALL)
// 0050a58e: ADD ESP,0x8
// 0050a591: MOV EAX,EDI
// 0050a593: MOV ESP,EBP
// 0050a595: POP EBP
// 0050a596: POP EDI
// 0050a597: POP ESI
// 0050a598: POP EBX
// 0050a599: RET
// 0050a59a: FLD float ptr [EDX]
//   Label: LAB_0050a59a
// 0050a59c: FSUB float ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 0050a59f: JMP 0x0050a535
//   XREF to: 0050a535 (UNCONDITIONAL_JUMP)
// 0050a5a1: MOV EAX,dword ptr [EBP + 0x18]
//   Label: LAB_0050a5a1
//   XREF to: Stack[0x8] (READ)
// 0050a5a4: MOV EDI,0x1
// 0050a5a9: MOV dword ptr [EDX],EAX
// 0050a5ab: JMP 0x0050a537
//   XREF to: 0050a537 (UNCONDITIONAL_JUMP)
// 0050a5ad: CALL sound_sndmain.cpp_pushSfxOptions_FUN_005a8c30
//   Label: LAB_0050a5ad
//   XREF to: 005a8c30 (UNCONDITIONAL_CALL)
// 0050a5b2: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 0050a5b5: CALL sound_sndmain.cpp_setNextSfxVolume_FUN_005a8a60
//   XREF to: 005a8a60 (UNCONDITIONAL_CALL)
// 0050a5ba: ADD ESP,0x4
// 0050a5bd: SUB ESP,0x8
// 0050a5c0: FLD float ptr [EBX + 0x8]
// 0050a5c3: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 0050a5c6: SUB ESP,0x8
// 0050a5c9: FLD float ptr [EBX + 0x4]
// 0050a5cc: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 0050a5cf: SUB ESP,0x8
// 0050a5d2: FLD float ptr [EBX]
// 0050a5d4: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 0050a5d7: CALL sound_sndmain.cpp_setNextSfxStaticPosition_FUN_005a88e0
//   XREF to: 005a88e0 (UNCONDITIONAL_CALL)
// 0050a5dc: ADD ESP,0x18
// 0050a5df: MOV EBX,dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 0050a5e2: PUSH EBX
// 0050a5e3: CALL sound_sndmain.cpp_startSfx_FUN_005a8e90
//   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
// 0050a5e8: ADD ESP,0x4
// 0050a5eb: MOV dword ptr [ESI],EAX
// 0050a5ed: CALL sound_sndmain.cpp_popSfxOptions_FUN_005a8cb0
//   XREF to: 005a8cb0 (UNCONDITIONAL_CALL)
// 0050a5f2: MOV EAX,EDI
// 0050a5f4: MOV ESP,EBP
// 0050a5f6: POP EBP
// 0050a5f7: POP EDI
// 0050a5f8: POP ESI
// 0050a5f9: POP EBX
// 0050a5fa: RET
// 0050a5fb: MOV EDX,dword ptr [ESI]
//   Label: LAB_0050a5fb
// 0050a5fd: PUSH EDX
// 0050a5fe: CALL sound_sndmain.cpp_killSfx_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 0050a603: ADD ESP,0x4
// 0050a606: MOV EAX,EDI
// 0050a608: MOV ESP,EBP
// 0050a60a: POP EBP
// 0050a60b: POP EDI
// 0050a60c: POP ESI
// 0050a60d: POP EBX
// 0050a60e: RET
