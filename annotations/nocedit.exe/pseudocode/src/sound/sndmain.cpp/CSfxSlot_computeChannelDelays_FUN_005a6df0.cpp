// Name: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// Address: 005a6df0
// Address Range: [[005a6df0, 005a6efa]]
// Convention: __cdecl
// Signature: void sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 (005a7100) at 005a7262 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_0065016e
//   TerminatedCString s_SfxSlot_kill_must_be_loc_00650183
//   double DOUBLE_00663140 = 1116.40000000000
//   int g_AudioChannelCount = 0x2
//   int g_AudioSampleRate = 0x5622
//   double DOUBLE_00681b30 = 1
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_math.c_round_FUN_005fe6b0

#include "nocturne.h"

void __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0(CSfxSlot *this_ptr)

{
  double dVar1;
  double dVar2;
  int iVar3;
  int in_EAX;
  int extraout_EAX;
  int extraout_ECX;
  int iVar4;
  CSfxSlot *pCVar5;
  int iVar6;
  float10 fVar7;
  double dVar8;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x8f5;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
    in_EAX = extraout_EAX;
  }
  iVar3 = g_AudioChannelCount;
  if (g_AudioChannelCount < 2) {
    this_ptr->channel_target_buffer_offsets[0] = 0;
  }
  else if (((this_ptr->options).flags & 1) == 0) {
    dVar1 = DOUBLE_00681b30 / DOUBLE_00663140;
    dVar2 = (double)g_AudioSampleRate;
    iVar4 = 99999;
    pCVar5 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        fVar7 = (float10)pCVar5->distance_to_speakers[0] * (float10)(dVar2 * dVar1);
        dVar8 = crt_math_c_round_FUN_005fe6b0((double)CONCAT44(pCVar5,in_EAX));
        iVar6 = (int)((ulonglong)dVar8 >> 0x20);
        in_EAX = (int)ROUND(fVar7);
        *(int *)(iVar6 + 0xc0) = in_EAX;
        if (in_EAX < iVar4) {
          iVar4 = in_EAX;
        }
        pCVar5 = (CSfxSlot *)(iVar6 + 4);
      } while (extraout_ECX + 1 < iVar3);
    }
    iVar6 = 0;
    if (0 < iVar3) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_target_buffer_offsets[0] =
             this_ptr->channel_target_buffer_offsets[0] - iVar4;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < iVar3);
      g_AudioChannelCount = iVar3;
      return;
    }
  }
  else {
    iVar4 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar4 = iVar4 + 1;
        this_ptr->channel_target_buffer_offsets[0] = 0;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar4 < g_AudioChannelCount);
    }
  }
  g_AudioChannelCount = iVar3;
  return;
}


// Assembly code:
// 005a6df0: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_computeChannelDelays_FUN_005a6df0
// 005a6df1: PUSH ESI
// 005a6df2: PUSH EDI
// 005a6df3: PUSH EBP
// 005a6df4: MOV EBP,ESP
// 005a6df6: SUB ESP,0xc
// 005a6df9: AND ESP,0xfffffff8
// 005a6dfc: MOV ESI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a6e02: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a6e05: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a6e0c: JLE 0x005a6e4d
//   XREF to: 005a6e4d (CONDITIONAL_JUMP)
// 005a6e0e: MOV ESI,dword ptr [0x00681b18]
//   Label: LAB_005a6e0e
//   XREF to: 00681b18 (READ)
// 005a6e14: CMP ESI,0x2
// 005a6e17: JL 0x005a6e72
//   XREF to: 005a6e72 (CONDITIONAL_JUMP)
// 005a6e19: TEST byte ptr [EDI + 0x5c],0x1
// 005a6e1d: JZ 0x005a6e7e
//   XREF to: 005a6e7e (CONDITIONAL_JUMP)
// 005a6e1f: XOR EDX,EDX
// 005a6e21: TEST ESI,ESI
// 005a6e23: JLE 0x005a6e40
//   XREF to: 005a6e40 (CONDITIONAL_JUMP)
// 005a6e25: MOV EAX,EDI
// 005a6e27: ADD EAX,0x4
//   Label: LAB_005a6e27
// 005a6e2a: INC EDX
// 005a6e2b: MOV dword ptr [EAX + 0xbc],0x0
// 005a6e35: CMP EDX,ESI
// 005a6e37: JL 0x005a6e27
//   XREF to: 005a6e27 (CONDITIONAL_JUMP)
// 005a6e39: LEA EAX,[EAX]
// 005a6e3f: NOP
// 005a6e40: MOV dword ptr [0x00681b18],ESI
//   Label: LAB_005a6e40
//   XREF to: 00681b18 (WRITE)
// 005a6e46: MOV ESP,EBP
// 005a6e48: POP EBP
// 005a6e49: POP EDI
// 005a6e4a: POP ESI
// 005a6e4b: POP EBX
// 005a6e4c: RET
// 005a6e4d: MOV ECX,0x65016e
//   Label: LAB_005a6e4d
//   XREF to: 0065016e (PARAM)
// 005a6e52: MOV EBX,0x8f5
// 005a6e57: PUSH 0x650183
//   XREF to: 00650183 (DATA)
// 005a6e5c: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6e62: MOV dword ptr [0x02f0ca4c],EBX
//   XREF to: 02f0ca4c (WRITE)
// 005a6e68: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6e6d: ADD ESP,0x4
// 005a6e70: JMP 0x005a6e0e
//   XREF to: 005a6e0e (UNCONDITIONAL_JUMP)
// 005a6e72: MOV dword ptr [EDI + 0xc0],0x0
//   Label: LAB_005a6e72
// 005a6e7c: JMP 0x005a6e40
//   XREF to: 005a6e40 (UNCONDITIONAL_JUMP)
// 005a6e7e: FLD double ptr [0x00681b30]
//   Label: LAB_005a6e7e
//   XREF to: 00681b30 (READ)
// 005a6e84: FDIV double ptr [0x00663140]
//   XREF to: 00663140 (READ)
// 005a6e8a: FILD dword ptr [0x00681b1c]
//   XREF to: 00681b1c (READ)
// 005a6e90: FMULP
// 005a6e92: MOV EBX,0x1869f
// 005a6e97: XOR ECX,ECX
// 005a6e99: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005a6e9c: TEST ESI,ESI
// 005a6e9e: JLE 0x005a6ecc
//   XREF to: 005a6ecc (CONDITIONAL_JUMP)
// 005a6ea0: MOV EDX,EDI
// 005a6ea2: FLD float ptr [EDX + 0x80]
//   Label: LAB_005a6ea2
// 005a6ea8: FMUL double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 005a6eab: CALL crt_math.c_round_FUN_005fe6b0
//   XREF to: 005fe6b0 (UNCONDITIONAL_CALL)
// 005a6eb0: FISTP dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 005a6eb4: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (READ)
// 005a6eb8: MOV dword ptr [EDX + 0xc0],EAX
// 005a6ebe: CMP EBX,EAX
// 005a6ec0: JLE 0x005a6ec4
//   XREF to: 005a6ec4 (CONDITIONAL_JUMP)
// 005a6ec2: MOV EBX,EAX
// 005a6ec4: INC ECX
//   Label: LAB_005a6ec4
// 005a6ec5: ADD EDX,0x4
// 005a6ec8: CMP ECX,ESI
// 005a6eca: JL 0x005a6ea2
//   XREF to: 005a6ea2 (CONDITIONAL_JUMP)
// 005a6ecc: XOR EDX,EDX
//   Label: LAB_005a6ecc
// 005a6ece: TEST ESI,ESI
// 005a6ed0: JLE 0x005a6e40
//   XREF to: 005a6e40 (CONDITIONAL_JUMP)
// 005a6ed6: MOV EAX,EDI
// 005a6ed8: MOV ECX,dword ptr [EAX + 0xc0]
//   Label: LAB_005a6ed8
// 005a6ede: ADD EAX,0x4
// 005a6ee1: SUB ECX,EBX
// 005a6ee3: INC EDX
// 005a6ee4: MOV dword ptr [EAX + 0xbc],ECX
// 005a6eea: CMP EDX,ESI
// 005a6eec: JL 0x005a6ed8
//   XREF to: 005a6ed8 (CONDITIONAL_JUMP)
// 005a6eee: MOV dword ptr [0x00681b18],ESI
//   XREF to: 00681b18 (WRITE)
// 005a6ef4: MOV ESP,EBP
// 005a6ef6: POP EBP
// 005a6ef7: POP EDI
// 005a6ef8: POP ESI
// 005a6ef9: POP EBX
// 005a6efa: RET
