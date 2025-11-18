// Name: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// Address: 005a6f00
// Address Range: [[005a6f00, 005a7067]]
// Convention: __cdecl
// Signature: float sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot * this_ptr)
// Cross-references:
//   sound_sndmain.cpp_CSfxSlot_compute_FUN_005a7100 (005a7100) at 005a7293 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_sound_sndmain_cpp_006501a3
//   TerminatedCString s_SfxSlot_kill_must_be_loc_006501b8
//   double DOUBLE_006501df = 0.0500000000000000
//   int g_AudioChannelCount = 0x2
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   int g_SoundLockCount
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90

#include "nocturne.h"

float __cdecl sound_sndmain_cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00(CSfxSlot *this_ptr)

{
  byte bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  CSfxSlot *pCVar7;
  float local_28;
  float local_20;
  float local_18;
  
  if (g_SoundLockCount < 1) {
    g_CurrentFilename = "..\\sound\\sndmain.cpp";
    g_CurrentLineNumber = 0x924;
    core_main_c_displayErrorAndQuit_FUN_00506f10("SfxSlot::kill - must be locked!");
  }
  fVar4 = sound_sndmain_cpp_getSfxChannelVol_FUN_005a9d90((this_ptr->options).channel_index);
  fVar3 = (fVar4 * (this_ptr->options).current_volume) / local_20;
  bVar1 = (byte)(this_ptr->options).flags;
  fVar4 = (float)CONCAT22((short)((uint)fVar4 >> 0x10),CONCAT11(bVar1,SUB41(fVar4,0)));
  if ((bVar1 & 1) == 0) {
    iVar6 = 0;
    pCVar7 = this_ptr;
    if (0 < g_AudioChannelCount) {
      do {
        local_28 = pCVar7->distance_to_speakers[0];
        fVar4 = this_ptr->min_distance;
        fVar2 = this_ptr->max_distance;
        fVar5 = (float)((uint)CONCAT21((short)((uint)fVar2 >> 0x10),local_28 < fVar4) << 8);
        if (local_28 < fVar4) {
          fVar5 = fVar4;
          local_28 = fVar4;
        }
        fVar4 = (float)((uint)fVar5 & 0xffff0000);
        if (fVar2 < local_28) {
          fVar4 = fVar2;
          local_28 = fVar2;
        }
        fVar2 = this_ptr->reference_distance * (float)DOUBLE_006501df;
        if (local_28 < fVar2 || (local_28 == fVar2) != 0) {
          local_18 = 20.0;
        }
        else {
          local_18 = this_ptr->reference_distance / local_28;
        }
        iVar6 = iVar6 + 1;
        pCVar7->channel_volumes[0] = fVar3 * local_18;
        fVar4 = (float)CONCAT22((short)((uint)fVar4 >> 0x10),
                                (ushort)(local_28 < fVar2) << 8 |
                                (ushort)(NAN(local_28) || NAN(fVar2)) << 10 |
                                (ushort)(local_28 == fVar2) << 0xe);
        pCVar7 = (CSfxSlot *)&(pCVar7->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  else {
    iVar6 = 0;
    if (0 < g_AudioChannelCount) {
      do {
        iVar6 = iVar6 + 1;
        this_ptr->channel_volumes[0] = fVar3;
        fVar4 = fVar3;
        this_ptr = (CSfxSlot *)&(this_ptr->options).position;
      } while (iVar6 < g_AudioChannelCount);
    }
  }
  return fVar4;
}


// Assembly code:
// 005a6f00: PUSH EBX
//   Label: sound_sndmain.cpp_CSfxSlot_computeChannelVolumes_FUN_005a6f00
// 005a6f01: PUSH ESI
// 005a6f02: PUSH EDI
// 005a6f03: PUSH EBP
// 005a6f04: MOV EBP,ESP
// 005a6f06: SUB ESP,0x20
// 005a6f09: AND ESP,0xfffffff8
// 005a6f0c: MOV ESI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a6f12: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a6f15: CMP dword ptr [0x03f6940c],0x0
//   XREF to: 03f6940c (READ)
// 005a6f1c: JLE 0x005a6f9d
//   XREF to: 005a6f9d (CONDITIONAL_JUMP)
// 005a6f22: MOV ECX,dword ptr [EBX + 0x78]
//   Label: LAB_005a6f22
// 005a6f25: MOV ECX,dword ptr [ECX + 0x104]
// 005a6f2b: MOV EDX,0x1
// 005a6f30: DEC ECX
// 005a6f31: SHL EDX,CL
// 005a6f33: MOV EAX,dword ptr [EBX]
// 005a6f35: MOV dword ptr [ESP + 0x1c],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005a6f39: PUSH EAX
// 005a6f3a: FILD dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005a6f3e: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x28] (WRITE)
// 005a6f42: CALL sound_sndmain.cpp_getSfxChannelVol_FUN_005a9d90
//   XREF to: 005a9d90 (UNCONDITIONAL_CALL)
// 005a6f47: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a6f4b: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x14] (READ)
// 005a6f4f: FMUL float ptr [EBX + 0x44]
// 005a6f52: ADD ESP,0x4
// 005a6f55: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 005a6f59: MOV AH,byte ptr [EBX + 0x5c]
// 005a6f5c: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 005a6f60: TEST AH,0x1
// 005a6f63: JZ 0x005a6fc5
//   XREF to: 005a6fc5 (CONDITIONAL_JUMP)
// 005a6f65: MOV ESI,dword ptr [0x00681b18]
//   XREF to: 00681b18 (READ)
// 005a6f6b: XOR EDX,EDX
// 005a6f6d: TEST ESI,ESI
// 005a6f6f: JLE 0x005a6f90
//   XREF to: 005a6f90 (CONDITIONAL_JUMP)
// 005a6f71: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 005a6f75: ADD EBX,0x4
//   Label: LAB_005a6f75
// 005a6f78: INC EDX
// 005a6f79: MOV dword ptr [EBX + 0x9c],EAX
// 005a6f7f: CMP EDX,ESI
// 005a6f81: JL 0x005a6f75
//   XREF to: 005a6f75 (CONDITIONAL_JUMP)
// 005a6f83: LEA EAX,[EAX]
// 005a6f89: LEA EDX,[EDX]
// 005a6f8f: NOP
// 005a6f90: MOV dword ptr [0x00681b18],ESI
//   Label: LAB_005a6f90
//   XREF to: 00681b18 (WRITE)
// 005a6f96: MOV ESP,EBP
// 005a6f98: POP EBP
// 005a6f99: POP EDI
// 005a6f9a: POP ESI
// 005a6f9b: POP EBX
// 005a6f9c: RET
// 005a6f9d: MOV ECX,0x6501a3
//   Label: LAB_005a6f9d
//   XREF to: 006501a3 (PARAM)
// 005a6fa2: MOV EDI,0x924
// 005a6fa7: PUSH 0x6501b8
//   XREF to: 006501b8 (DATA)
// 005a6fac: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 005a6fb2: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 005a6fb8: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005a6fbd: ADD ESP,0x4
// 005a6fc0: JMP 0x005a6f22
//   XREF to: 005a6f22 (UNCONDITIONAL_JUMP)
// 005a6fc5: MOV ESI,dword ptr [0x00681b18]
//   Label: LAB_005a6fc5
//   XREF to: 00681b18 (READ)
// 005a6fcb: XOR ECX,ECX
// 005a6fcd: TEST ESI,ESI
// 005a6fcf: JLE 0x005a6f90
//   XREF to: 005a6f90 (CONDITIONAL_JUMP)
// 005a6fd1: MOV EDI,0x41a00000
// 005a6fd6: MOV EDX,EBX
// 005a6fd8: MOV EAX,dword ptr [EDX + 0x80]
//   Label: LAB_005a6fd8
// 005a6fde: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005a6fe1: MOV EAX,dword ptr [EBX + 0x100]
// 005a6fe7: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 005a6feb: MOV EAX,dword ptr [EBX + 0x104]
// 005a6ff1: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a6ff5: MOV EAX,dword ptr [EBX + 0x108]
// 005a6ffb: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005a6ffe: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a7002: FCOMP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x18] (READ)
// 005a7006: FNSTSW AX
// 005a7008: SAHF
// 005a7009: JC 0x005a7052
//   XREF to: 005a7052 (CONDITIONAL_JUMP)
// 005a700b: FLD float ptr [ESP]
//   Label: LAB_005a700b
//   XREF to: Stack[-0x30] (DATA)
// 005a700e: FCOMP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005a7012: FNSTSW AX
// 005a7014: SAHF
// 005a7015: JBE 0x005a701e
//   XREF to: 005a701e (CONDITIONAL_JUMP)
// 005a7017: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x1c] (READ)
// 005a701b: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005a701e: FLD float ptr [ESP + 0x4]
//   Label: LAB_005a701e
//   XREF to: Stack[-0x2c] (READ)
// 005a7022: FMUL double ptr [0x006501df]
//   XREF to: 006501df (READ)
// 005a7028: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005a702b: FCOMPP
// 005a702d: FNSTSW AX
// 005a702f: SAHF
// 005a7030: JA 0x005a705b
//   XREF to: 005a705b (CONDITIONAL_JUMP)
// 005a7032: MOV dword ptr [ESP + 0x10],EDI
//   XREF to: Stack[-0x20] (WRITE)
// 005a7036: FLD float ptr [ESP + 0xc]
//   Label: LAB_005a7036
//   XREF to: Stack[-0x24] (READ)
// 005a703a: FMUL float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (READ)
// 005a703e: ADD EDX,0x4
// 005a7041: INC ECX
// 005a7042: FSTP float ptr [EDX + 0x9c]
// 005a7048: CMP ECX,ESI
// 005a704a: JGE 0x005a6f90
//   XREF to: 005a6f90 (CONDITIONAL_JUMP)
// 005a7050: JMP 0x005a6fd8
//   XREF to: 005a6fd8 (UNCONDITIONAL_JUMP)
// 005a7052: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_005a7052
//   XREF to: Stack[-0x18] (READ)
// 005a7056: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 005a7059: JMP 0x005a700b
//   XREF to: 005a700b (UNCONDITIONAL_JUMP)
// 005a705b: FLD float ptr [ESP + 0x4]
//   Label: LAB_005a705b
//   XREF to: Stack[-0x2c] (READ)
// 005a705f: FDIV float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 005a7062: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x20] (WRITE)
// 005a7066: JMP 0x005a7036
//   XREF to: 005a7036 (UNCONDITIONAL_JUMP)
