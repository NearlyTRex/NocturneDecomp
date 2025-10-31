// Name: sound_snddx.cpp_FUN_005ae4b0
// Address: 005ae4b0
// Address Range: [[005ae4b0, 005ae659]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005ae4b0()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
//   undefined4 s_Stop_secondary_sound_buffer_00651b24
//   TerminatedCString s_Stop_primary_sound_buffe_00651b40
//   undefined4 DAT_03f6a9b4
//   undefined4 DAT_03f6a9b8
//   undefined4 DAT_03f6aa44
//   undefined4 DAT_03f6aa48
//   undefined4 DAT_03f6aac0
//   undefined4 DAT_03f6aac4
// Function calls:
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0

#include "nocturne.h"

/* Signature: undefined1 sound_snddx.cpp_FUN_005ae4b0() */

undefined4 sound_snddx_cpp_FUN_005ae4b0(void)

{
  int *piVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  char acStack_4c4 [400];
  char acStack_334 [400];
  char acStack_1a4 [400];
  undefined4 local_14;
  
  local_14 = 1;
  if (DAT_03f6a9b8 != (int *)0x0) {
    iVar4 = (**(code **)(*DAT_03f6a9b8 + 0x48))();
    if (iVar4 != 0) {
      uVar3 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1a4,"DirectSux: Unable to %s.  (%s)",
                 "?Stop secondary sound buffer" + 1,uVar3);
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      local_14 = 0;
    }
  }
  if (DAT_03f6a9b4 != (int *)0x0) {
    iVar4 = (**(code **)(*DAT_03f6a9b4 + 0x48))();
    if (iVar4 != 0) {
      uVar3 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_334,"DirectSux: Unable to %s.  (%s)","Stop primary sound buffer",
                 uVar3);
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      local_14 = 0;
    }
  }
  iVar5 = 0;
  iVar4 = 0;
  do {
    if (*(int **)((int)&DAT_03f6aa44 + iVar5) == (int *)0x0) {
LAB_005ae500:
      piVar1 = (int *)(&DAT_03f6aac0)[iVar4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
        (&DAT_03f6aac0)[iVar4] = 0;
      }
      piVar1 = (int *)(&DAT_03f6aa44)[iVar4];
      if (piVar1 != (int *)0x0) {
        (**(code **)(*piVar1 + 8))();
        (&DAT_03f6aa44)[iVar4] = 0;
      }
    }
    else {
      iVar2 = (**(code **)(**(int **)((int)&DAT_03f6aa44 + iVar5) + 0x48))();
      if (iVar2 == 0) goto LAB_005ae500;
      uVar3 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_4c4,"DirectSux: Unable to %s.  (%s)","Stop hardware sfx secondary buffer",
                 uVar3);
      sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
      local_14 = 0;
    }
    iVar4 = iVar4 + 1;
    iVar5 = iVar5 + 4;
    if (0x1e < iVar4) {
      iVar4 = sound_sndmain_cpp_SleepAndKillSoundThreadError_FUN_005abcb0();
      if (iVar4 != 0) {
        return local_14;
      }
      return 0;
    }
  } while( true );
}


// Assembly code:
// 005ae4b0: PUSH EBX
//   Label: sound_snddx.cpp_FUN_005ae4b0
// 005ae4b1: PUSH ESI
// 005ae4b2: PUSH EDI
// 005ae4b3: PUSH EBP
// 005ae4b4: SUB ESP,0x4b4
// 005ae4ba: MOV EDX,0x1
// 005ae4bf: MOV ECX,dword ptr [0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005ae4c5: MOV dword ptr [ESP + 0x4b0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 005ae4cc: TEST ECX,ECX
// 005ae4ce: JNZ 0x005ae567
//   XREF to: 005ae567 (CONDITIONAL_JUMP)
// 005ae4d4: MOV ESI,dword ptr [0x03f6a9b4]
//   Label: LAB_005ae4d4
//   XREF to: 03f6a9b4 (READ)
// 005ae4da: TEST ESI,ESI
// 005ae4dc: JNZ 0x005ae5b7
//   XREF to: 005ae5b7 (CONDITIONAL_JUMP)
// 005ae4e2: XOR ESI,ESI
//   Label: LAB_005ae4e2
// 005ae4e4: XOR EBX,EBX
// 005ae4e6: MOV EAX,dword ptr [ESI + 0x3f6aa44]
//   Label: LAB_005ae4e6
//   XREF to: 03f6aa44 (READ)
//   XREF to: 03f6aa48 (READ)
// 005ae4ec: MOV EBP,EBX
// 005ae4ee: TEST EAX,EAX
// 005ae4f0: JZ 0x005ae500
//   XREF to: 005ae500 (CONDITIONAL_JUMP)
// 005ae4f2: PUSH EAX
// 005ae4f3: MOV EDX,dword ptr [EAX]
// 005ae4f5: CALL dword ptr [EDX + 0x48]
// 005ae4f8: TEST EAX,EAX
// 005ae4fa: JNZ 0x005ae607
//   XREF to: 005ae607 (CONDITIONAL_JUMP)
// 005ae500: LEA EDI,[EBP*0x4 + 0x0]
//   Label: LAB_005ae500
// 005ae507: ADD EDI,0x3f6aac0
//   XREF to: 03f6aac0 (DATA)
// 005ae50d: MOV ECX,dword ptr [EDI]
//   XREF to: 03f6aac0 (READ)
//   XREF to: 03f6aac4 (READ)
// 005ae50f: TEST ECX,ECX
// 005ae511: JZ 0x005ae51f
//   XREF to: 005ae51f (CONDITIONAL_JUMP)
// 005ae513: PUSH ECX
// 005ae514: MOV EDX,dword ptr [ECX]
// 005ae516: CALL dword ptr [EDX + 0x8]
// 005ae519: MOV dword ptr [EDI],0x0
//   XREF to: 03f6aac0 (WRITE)
// 005ae51f: LEA EDI,[EBP*0x4 + 0x0]
//   Label: LAB_005ae51f
// 005ae526: ADD EDI,0x3f6aa44
//   XREF to: 03f6aa44 (DATA)
// 005ae52c: MOV EBP,dword ptr [EDI]
//   XREF to: 03f6aa44 (READ)
//   XREF to: 03f6aa48 (READ)
// 005ae52e: TEST EBP,EBP
// 005ae530: JZ 0x005ae53f
//   XREF to: 005ae53f (CONDITIONAL_JUMP)
// 005ae532: PUSH EBP
// 005ae533: MOV EDX,dword ptr [EBP]
// 005ae536: CALL dword ptr [EDX + 0x8]
// 005ae539: MOV dword ptr [EDI],0x0
//   XREF to: 03f6aa44 (WRITE)
// 005ae53f: INC EBX
//   Label: LAB_005ae53f
// 005ae540: ADD ESI,0x4
// 005ae543: CMP EBX,0x1f
// 005ae546: JL 0x005ae4e6
//   XREF to: 005ae4e6 (CONDITIONAL_JUMP)
// 005ae548: CALL sound_sndmain.cpp_SleepAndKillSoundThreadError_FUN_005abcb0
//   XREF to: 005abcb0 (UNCONDITIONAL_CALL)
// 005ae54d: TEST EAX,EAX
// 005ae54f: JZ 0x005ae641
//   XREF to: 005ae641 (CONDITIONAL_JUMP)
// 005ae555: MOV EAX,dword ptr [ESP + 0x4b0]
// 005ae55c: ADD ESP,0x4b4
// 005ae562: POP EBP
// 005ae563: POP EDI
// 005ae564: POP ESI
// 005ae565: POP EBX
// 005ae566: RET
// 005ae567: PUSH ECX
//   Label: LAB_005ae567
// 005ae568: MOV EDX,dword ptr [ECX]
// 005ae56a: CALL dword ptr [EDX + 0x48]
// 005ae56d: TEST EAX,EAX
// 005ae56f: JZ 0x005ae4d4
//   XREF to: 005ae4d4 (CONDITIONAL_JUMP)
// 005ae575: PUSH EAX
// 005ae576: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae57b: ADD ESP,0x4
// 005ae57e: PUSH EAX
// 005ae57f: PUSH 0x651b24
//   XREF to: 00651b24 (DATA)
// 005ae584: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae589: LEA EAX,[ESP + 0x32c]
// 005ae590: PUSH EAX
// 005ae591: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae596: ADD ESP,0x10
// 005ae599: LEA EAX,[ESP + 0x320]
// 005ae5a0: PUSH EAX
// 005ae5a1: XOR EBX,EBX
// 005ae5a3: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae5a8: ADD ESP,0x4
// 005ae5ab: MOV dword ptr [ESP + 0x4b0],EBX
// 005ae5b2: JMP 0x005ae4d4
//   XREF to: 005ae4d4 (UNCONDITIONAL_JUMP)
// 005ae5b7: PUSH ESI
//   Label: LAB_005ae5b7
// 005ae5b8: MOV EDX,dword ptr [ESI]
// 005ae5ba: CALL dword ptr [EDX + 0x48]
// 005ae5bd: TEST EAX,EAX
// 005ae5bf: JZ 0x005ae4e2
//   XREF to: 005ae4e2 (CONDITIONAL_JUMP)
// 005ae5c5: PUSH EAX
// 005ae5c6: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae5cb: ADD ESP,0x4
// 005ae5ce: PUSH EAX
// 005ae5cf: PUSH 0x651b40
//   XREF to: 00651b40 (DATA)
// 005ae5d4: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae5d9: LEA EAX,[ESP + 0x19c]
// 005ae5e0: PUSH EAX
// 005ae5e1: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae5e6: ADD ESP,0x10
// 005ae5e9: LEA EAX,[ESP + 0x190]
// 005ae5f0: PUSH EAX
// 005ae5f1: XOR EDI,EDI
// 005ae5f3: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae5f8: ADD ESP,0x4
// 005ae5fb: MOV dword ptr [ESP + 0x4b0],EDI
// 005ae602: JMP 0x005ae4e2
//   XREF to: 005ae4e2 (UNCONDITIONAL_JUMP)
// 005ae607: PUSH EAX
//   Label: LAB_005ae607
// 005ae608: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae60d: ADD ESP,0x4
// 005ae610: PUSH EAX
// 005ae611: PUSH 0x651ab9
//   XREF to: 00651ab9 (DATA)
// 005ae616: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae61b: LEA EAX,[ESP + 0xc]
// 005ae61f: PUSH EAX
// 005ae620: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae625: ADD ESP,0x10
// 005ae628: MOV EAX,ESP
// 005ae62a: PUSH EAX
// 005ae62b: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae630: ADD ESP,0x4
// 005ae633: XOR EDX,EDX
// 005ae635: MOV dword ptr [ESP + 0x4b0],EDX
// 005ae63c: JMP 0x005ae53f
//   XREF to: 005ae53f (UNCONDITIONAL_JUMP)
// 005ae641: MOV dword ptr [ESP + 0x4b0],EAX
//   Label: LAB_005ae641
// 005ae648: MOV EAX,dword ptr [ESP + 0x4b0]
// 005ae64f: ADD ESP,0x4b4
// 005ae655: POP EBP
// 005ae656: POP EDI
// 005ae657: POP ESI
// 005ae658: POP EBX
// 005ae659: RET
