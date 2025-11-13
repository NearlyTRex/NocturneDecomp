// Name: sound_snddx.cpp_FUN_005adff0
// Address: 005adff0
// Address Range: [[005adff0, 005ae1b6]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_FUN_005adff0(void)
// Cross-references:
//   sound_snddx.cpp_CDirectSoundDevice_poll_FUN_005aed50 (005aed50) at 005aee0f [UNCONDITIONAL_CALL]
//   sound_snddx.cpp_CDirectSoundDevice_start_FUN_005ae340 (005ae340) at 005ae3ac [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Lock_secondary_buffer_00651a8b
//   TerminatedCString s_Unlock_secondary_buffer_00651aa1
//   undefined4 DAT_03f6a9b8
//   undefined4 DAT_03f6a9c4
//   undefined4 DAT_03f6a9c8
//   undefined4 DAT_03f6a9cc
//   undefined4 DAT_03f6a9d0
//   undefined4 DAT_03f6a9d4
//   undefined4 DAT_03f6a9d8
//   undefined4 DAT_03f6a9dc
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_FUN_005aca90
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl sound_snddx_cpp_FUN_005adff0(void)

{
  int iVar1;
  int iVar2;
  char *pcVar3;
  BADSPACEBASE *in_ESP;
  int *piVar4;
  int *piStack_380;
  int iStack_37c;
  int iStack_378;
  undefined1 *puStack_374;
  undefined1 *puStack_370;
  undefined1 *puStack_36c;
  undefined1 *puStack_368;
  undefined4 uStack_364;
  char acStack_204 [420];
  int aiStack_60 [8];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  undefined1 local_20 [4];
  undefined1 local_1c [4];
  undefined1 local_18 [4];
  undefined1 local_14 [4];
  
  if (DAT_03f6a9b8 != (int *)0x0) {
    uStack_364 = 0;
    puStack_368 = local_14;
    puStack_36c = local_20;
    puStack_370 = local_18;
    puStack_374 = local_1c;
    iStack_37c = DAT_03f6a9dc * DAT_03f6a9d4;
    iStack_378 = DAT_03f6a9d4;
    piStack_380 = DAT_03f6a9b8;
    iVar1 = (**(code **)(*DAT_03f6a9b8 + 0x2c))();
    if (iVar1 != 0) {
      pcVar3 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                ((char *)&piStack_380,"DirectSux: Unable to %s.  (%s)",
                 "Lock secondary buffer",pcVar3);
      sound_sndmain_cpp_logSoundError_FUN_005adba0((char *)&piStack_380);
      return 0;
    }
    if ((iStack_40 == 0) && (iStack_38 == DAT_03f6a9d4)) {
      iVar2 = 0;
      iVar1 = iStack_3c;
      if (0 < DAT_03f6a9cc * 4) {
        do {
          *(int *)((int)aiStack_60 + iVar2) = iVar1;
          iVar2 = iVar2 + 4;
          iVar1 = iVar1 + ((int)((DAT_03f6a9c4 + (DAT_03f6a9c4 >> 0x1f) * -8) -
                                (uint)((DAT_03f6a9c4 >> 0x1f) << 2 < 0)) >> 3);
        } while (iVar2 < DAT_03f6a9cc * 4);
      }
      sound_sndmain_cpp_FUN_005aca90();
      DAT_03f6a9dc = DAT_03f6a9dc + 1;
      if (DAT_03f6a9d8 <= DAT_03f6a9dc) {
        DAT_03f6a9dc = 0;
      }
      piVar4 = DAT_03f6a9b8;
      iVar1 = (**(code **)(*DAT_03f6a9b8 + 0x4c))();
      if (iVar1 != 0) {
        pcVar3 = sound_snddx_cpp_FUN_005ade70();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_204,"DirectSux: Unable to %s.  (%s)","Unlock secondary buffer"
                   ,pcVar3,piVar4,iStack_3c,iStack_38,iStack_40,uStack_34);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_204);
        return 0;
      }
      return 1;
    }
  }
  return 0;
}


// Assembly code:
// 005adff0: PUSH EBX
//   Label: sound_snddx.cpp_FUN_005adff0
// 005adff1: PUSH ESI
// 005adff2: PUSH EDI
// 005adff3: PUSH EBP
// 005adff4: SUB ESP,0x350
// 005adffa: MOV EDX,dword ptr [0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005ae000: TEST EDX,EDX
// 005ae002: JNZ 0x005ae011
//   XREF to: 005ae011 (CONDITIONAL_JUMP)
// 005ae004: XOR EAX,EAX
//   Label: LAB_005ae004
// 005ae006: ADD ESP,0x350
//   Label: LAB_005ae006
// 005ae00c: POP EBP
// 005ae00d: POP EDI
// 005ae00e: POP ESI
// 005ae00f: POP EBX
// 005ae010: RET
// 005ae011: PUSH 0x0
//   Label: LAB_005ae011
// 005ae013: LEA EAX,[ESP + 0x350]
//   XREF to: Stack[-0x14] (DATA)
// 005ae01a: PUSH EAX
// 005ae01b: LEA EAX,[ESP + 0x348]
//   XREF to: Stack[-0x20] (DATA)
// 005ae022: PUSH EAX
// 005ae023: LEA EAX,[ESP + 0x354]
//   XREF to: Stack[-0x18] (DATA)
// 005ae02a: PUSH EAX
// 005ae02b: LEA EAX,[ESP + 0x354]
//   XREF to: Stack[-0x1c] (DATA)
// 005ae032: MOV EBX,dword ptr [0x03f6a9d4]
//   XREF to: 03f6a9d4 (READ)
// 005ae038: PUSH EAX
// 005ae039: MOV EAX,[0x03f6a9dc]
//   XREF to: 03f6a9dc (READ)
// 005ae03e: IMUL EAX,EBX
// 005ae041: PUSH EBX
// 005ae042: PUSH EAX
// 005ae043: MOV ECX,dword ptr [EDX]
// 005ae045: PUSH EDX
// 005ae046: CALL dword ptr [ECX + 0x2c]
// 005ae049: TEST EAX,EAX
// 005ae04b: JNZ 0x005ae13d
//   XREF to: 005ae13d (CONDITIONAL_JUMP)
// 005ae051: CMP dword ptr [ESP + 0x340],0x0
// 005ae059: JNZ 0x005ae006
//   XREF to: 005ae006 (CONDITIONAL_JUMP)
// 005ae05b: MOV EAX,dword ptr [ESP + 0x348]
// 005ae062: CMP EAX,dword ptr [0x03f6a9d4]
//   XREF to: 03f6a9d4 (READ)
// 005ae068: JNZ 0x005ae004
//   XREF to: 005ae004 (CONDITIONAL_JUMP)
// 005ae06a: MOV EAX,[0x03f6a9c4]
//   XREF to: 03f6a9c4 (READ)
// 005ae06f: MOV EDX,EAX
// 005ae071: SAR EDX,0x1f
// 005ae074: SHL EDX,0x3
// 005ae077: SBB EAX,EDX
// 005ae079: SAR EAX,0x3
// 005ae07c: MOV ESI,EAX
// 005ae07e: MOV EBX,ESI
// 005ae080: IMUL EDX,ESI,0x0
// 005ae083: ADD EDX,dword ptr [ESP + 0x344]
// 005ae08a: MOV ECX,dword ptr [0x03f6a9cc]
//   XREF to: 03f6a9cc (READ)
// 005ae090: SHL ECX,0x2
// 005ae093: XOR EAX,EAX
// 005ae095: TEST ECX,ECX
// 005ae097: JLE 0x005ae0b0
//   XREF to: 005ae0b0 (CONDITIONAL_JUMP)
// 005ae099: MOV dword ptr [ESP + EAX*0x1 + 0x320],EDX
//   Label: LAB_005ae099
// 005ae0a0: ADD EAX,0x4
// 005ae0a3: ADD EDX,EBX
// 005ae0a5: CMP EAX,ECX
// 005ae0a7: JL 0x005ae099
//   XREF to: 005ae099 (CONDITIONAL_JUMP)
// 005ae0a9: LEA EAX,[EAX]
// 005ae0af: NOP
// 005ae0b0: MOV EBX,dword ptr [0x03f6a9cc]
//   Label: LAB_005ae0b0
//   XREF to: 03f6a9cc (READ)
// 005ae0b6: IMUL ESI,EBX
// 005ae0b9: PUSH ESI
// 005ae0ba: MOV ESI,dword ptr [0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005ae0c0: PUSH ESI
// 005ae0c1: MOV EDI,dword ptr [0x03f6a9c8]
//   XREF to: 03f6a9c8 (READ)
// 005ae0c7: PUSH EDI
// 005ae0c8: PUSH EBX
// 005ae0c9: MOV EAX,[0x03f6a9c4]
//   XREF to: 03f6a9c4 (READ)
// 005ae0ce: PUSH EAX
// 005ae0cf: LEA EAX,[ESP + 0x334]
// 005ae0d6: PUSH EAX
// 005ae0d7: CALL sound_sndmain.cpp_FUN_005aca90
//   XREF to: 005aca90 (UNCONDITIONAL_CALL)
// 005ae0dc: MOV EDX,dword ptr [0x03f6a9dc]
//   XREF to: 03f6a9dc (READ)
// 005ae0e2: MOV ECX,dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005ae0e8: INC EDX
// 005ae0e9: ADD ESP,0x18
// 005ae0ec: MOV dword ptr [0x03f6a9dc],EDX
//   XREF to: 03f6a9dc (WRITE)
// 005ae0f2: CMP EDX,ECX
// 005ae0f4: JL 0x005ae0fe
//   XREF to: 005ae0fe (CONDITIONAL_JUMP)
// 005ae0f6: XOR EBX,EBX
// 005ae0f8: MOV dword ptr [0x03f6a9dc],EBX
//   XREF to: 03f6a9dc (WRITE)
// 005ae0fe: MOV ESI,dword ptr [ESP + 0x34c]
//   Label: LAB_005ae0fe
// 005ae105: PUSH ESI
// 005ae106: MOV EDI,dword ptr [ESP + 0x344]
// 005ae10d: PUSH EDI
// 005ae10e: MOV EBP,dword ptr [ESP + 0x350]
// 005ae115: PUSH EBP
// 005ae116: MOV ECX,dword ptr [ESP + 0x350]
// 005ae11d: MOV EAX,[0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005ae122: PUSH ECX
// 005ae123: MOV EDX,dword ptr [EAX]
// 005ae125: PUSH EAX
// 005ae126: CALL dword ptr [EDX + 0x4c]
// 005ae129: TEST EAX,EAX
// 005ae12b: JNZ 0x005ae176
//   XREF to: 005ae176 (CONDITIONAL_JUMP)
// 005ae12d: MOV EAX,0x1
// 005ae132: ADD ESP,0x350
// 005ae138: POP EBP
// 005ae139: POP EDI
// 005ae13a: POP ESI
// 005ae13b: POP EBX
// 005ae13c: RET
// 005ae13d: PUSH EAX
//   Label: LAB_005ae13d
// 005ae13e: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae143: ADD ESP,0x4
// 005ae146: PUSH EAX
// 005ae147: PUSH 0x651a8b
//   XREF to: 00651a8b (DATA)
// 005ae14c: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae151: LEA EAX,[ESP + 0xc]
// 005ae155: PUSH EAX
// 005ae156: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae15b: ADD ESP,0x10
// 005ae15e: MOV EAX,ESP
// 005ae160: PUSH EAX
// 005ae161: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae166: ADD ESP,0x4
// 005ae169: XOR EAX,EAX
// 005ae16b: ADD ESP,0x350
// 005ae171: POP EBP
// 005ae172: POP EDI
// 005ae173: POP ESI
// 005ae174: POP EBX
// 005ae175: RET
// 005ae176: PUSH EAX
//   Label: LAB_005ae176
// 005ae177: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae17c: ADD ESP,0x4
// 005ae17f: PUSH EAX
// 005ae180: PUSH 0x651aa1
//   XREF to: 00651aa1 (DATA)
// 005ae185: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae18a: LEA EAX,[ESP + 0x19c]
// 005ae191: PUSH EAX
// 005ae192: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae197: ADD ESP,0x10
// 005ae19a: LEA EAX,[ESP + 0x190]
// 005ae1a1: PUSH EAX
// 005ae1a2: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae1a7: ADD ESP,0x4
// 005ae1aa: XOR EAX,EAX
// 005ae1ac: ADD ESP,0x350
// 005ae1b2: POP EBP
// 005ae1b3: POP EDI
// 005ae1b4: POP ESI
// 005ae1b5: POP EBX
// 005ae1b6: RET
