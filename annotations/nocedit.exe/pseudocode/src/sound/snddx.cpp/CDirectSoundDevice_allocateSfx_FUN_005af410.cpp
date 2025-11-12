// Name: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
// Address: 005af410
// Address Range: [[005af410, 005af711]]
// Convention: __cdecl
// Signature: int sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice * this_ptr)
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Stop_hardware_sfx_second_00651ab9
//   TerminatedCString s_sound_snddx_cpp_00651d63
//   TerminatedCString s_DirectSoundDevice_alloca_00651d76
//   TerminatedCString s_sound_snddx_cpp_00651db1
//   TerminatedCString s_DirectSoundDevice_alloca_00651dc4
//   TerminatedCString s_DirectSoundDevice_alloca_00651dfb
//   TerminatedCString s_Duplicate_sound_buffer_00651e2d
//   TerminatedCString s_get_DirectSound3DBuffer__00651e44
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
//   IDirectSound* g_DirectSound
//   IDirectSoundBuffer*[25] g_DirectSoundSampleBuffers
//   undefined4 DAT_03f6aa44
//   int[31] g_DirectSoundBufferInUse
//   undefined4 DAT_03f6aa4c
//   undefined4 DAT_03f6aa50
//   undefined4 DAT_03f6aac0
//   undefined4 DAT_03f6aac8
//   IDirectSoundBufferMetadata[25] g_DirectSoundBufferMetadata
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_snddx.cpp_FUN_005ade70
//   sound_sndmain.cpp_logSoundError_FUN_005adba0

#include "nocturne.h"

int __cdecl
sound_snddx_cpp_CDirectSoundDevice_allocateSfx_FUN_005af410(CDirectSoundDevice *this_ptr)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000008;
  char acStack_4c0 [388];
  char acStack_33c [400];
  char acStack_1ac [412];
  
  if ((((in_stack_00000008 < 1) || (0x18 < in_stack_00000008)) ||
      (g_DirectSoundSampleBuffers[in_stack_00000008] == (IDirectSoundBuffer *)0x0)) ||
     (g_DirectSoundBufferMetadata[in_stack_00000008].field0_0x0 < 1)) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2ed;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::allocateSfx - Invalid sample handle: %d");
  }
  if (g_DirectSound == (IDirectSound *)0x0) {
    g_CurrentFilename = "..\\sound\\snddx.cpp";
    g_CurrentLineNumber = 0x2ee;
    core_main_c_displayErrorAndQuit_FUN_00506f10("DirectSoundDevice::allocateSfx - dSound not allocated?");
  }
  iVar5 = 1;
  iVar2 = 4;
  iVar3 = g_DirectSoundBufferInUse[0];
  while (iVar3 != 0) {
    iVar5 = iVar5 + 1;
    if (0x7b < iVar2 + 4) break;
    iVar3 = *(int *)((int)g_DirectSoundBufferInUse + iVar2);
    iVar2 = iVar2 + 4;
  }
  if (0x1e < iVar5) {
    engine_console_cpp_CConsole_printf_FUN_00441890
              (g_CConsolePtr,"DirectSoundDevice::allocateSfx - no free buffers\n");
    return 0;
  }
  if (((int *)(&DAT_03f6aa44)[iVar5] == (int *)0x0) ||
     (iVar3 = (**(code **)(*(int *)(&DAT_03f6aa44)[iVar5] + 0x48))(), iVar3 == 0)) {
    piVar1 = (int *)g_DirectSoundBufferInUse[iVar5 + 0x1e];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      g_DirectSoundBufferInUse[iVar5 + 0x1e] = 0;
    }
    piVar1 = (int *)(&DAT_03f6aa44)[iVar5];
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 8))();
      (&DAT_03f6aa44)[iVar5] = 0;
    }
  }
  else {
    sound_snddx_cpp_FUN_005ade70();
    crt_stdio_c_sprintf_FUN_005fdbd0(acStack_4c0,"DirectSux: Unable to %s.  (%s)");
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_4c0);
  }
  iVar3 = (*(code *)g_DirectSound->vtable[5])();
  if (iVar3 == 0) {
    if ((undefined4 *)(&DAT_03f6aa44)[iVar5] != (undefined4 *)0x0) {
      iVar3 = (*(code *)**(undefined4 **)(&DAT_03f6aa44)[iVar5])();
      if (iVar3 == 0) {
        if (g_DirectSoundBufferInUse[iVar5 + 0x1e] != 0) {
          return iVar5;
        }
      }
      else {
        pcVar4 = sound_snddx_cpp_FUN_005ade70();
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (acStack_33c,"DirectSux: Unable to %s.  (%s)",
                   "get DirectSound3DBuffer interface from sfx secondary buffer",pcVar4);
        sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_33c);
      }
    }
  }
  else {
    pcVar4 = sound_snddx_cpp_FUN_005ade70();
    crt_stdio_c_sprintf_FUN_005fdbd0
              (acStack_1ac,"DirectSux: Unable to %s.  (%s)","Duplicate sound buffer",
               pcVar4);
    sound_sndmain_cpp_logSoundError_FUN_005adba0(acStack_1ac);
  }
  if ((int *)(&DAT_03f6aa44)[iVar5] != (int *)0x0) {
    iVar3 = (**(code **)(*(int *)(&DAT_03f6aa44)[iVar5] + 0x48))();
    if (iVar3 != 0) {
      pcVar4 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (&stack0xfffff9a4,"DirectSux: Unable to %s.  (%s)",
                 "Stop hardware sfx secondary buffer",pcVar4);
      sound_sndmain_cpp_logSoundError_FUN_005adba0(&stack0xfffff9a4);
      return 0;
    }
  }
  piVar1 = (int *)g_DirectSoundBufferInUse[iVar5 + 0x1e];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    g_DirectSoundBufferInUse[iVar5 + 0x1e] = 0;
  }
  piVar1 = (int *)(&DAT_03f6aa44)[iVar5];
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 8))();
    (&DAT_03f6aa44)[iVar5] = 0;
  }
  return 0;
}


// Assembly code:
// 005af410: PUSH EBX
//   Label: sound_snddx.cpp_CDirectSoundDevice_allocateSfx_FUN_005af410
// 005af411: PUSH ESI
// 005af412: PUSH EDI
// 005af413: PUSH EBP
// 005af414: SUB ESP,0x640
// 005af41a: MOV EDI,dword ptr [ESP + 0x658]
//   XREF to: Stack[0x8] (READ)
// 005af421: TEST EDI,EDI
// 005af423: JLE 0x005af42e
//   XREF to: 005af42e (CONDITIONAL_JUMP)
// 005af425: CMP EDI,0x19
// 005af428: JL 0x005af5b3
//   XREF to: 005af5b3 (CONDITIONAL_JUMP)
// 005af42e: PUSH EDI
//   Label: LAB_005af42e
// 005af42f: MOV EBX,0x651d63
//   XREF to: 00651d63 (PARAM)
// 005af434: MOV ESI,0x2ed
// 005af439: PUSH 0x651d76
//   XREF to: 00651d76 (DATA)
// 005af43e: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 005af444: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 005af44a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af44f: ADD ESP,0x8
// 005af452: CMP dword ptr [0x03f6a9b0],0x0
//   Label: LAB_005af452
//   XREF to: 03f6a9b0 (READ)
// 005af459: JNZ 0x005af47d
//   XREF to: 005af47d (CONDITIONAL_JUMP)
// 005af45b: MOV EAX,0x651db1
//   XREF to: 00651db1 (PARAM)
// 005af460: MOV EDX,0x2ee
// 005af465: PUSH 0x651dc4
//   XREF to: 00651dc4 (DATA)
// 005af46a: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 005af46f: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 005af475: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 005af47a: ADD ESP,0x4
// 005af47d: MOV EAX,0x4
//   Label: LAB_005af47d
// 005af482: MOV ECX,dword ptr [0x03f6aa48]
//   XREF to: 03f6aa48 (READ)
// 005af488: MOV EBX,0x1
// 005af48d: TEST ECX,ECX
// 005af48f: JZ 0x005af4a3
//   XREF to: 005af4a3 (CONDITIONAL_JUMP)
// 005af491: ADD EAX,0x4
//   Label: LAB_005af491
// 005af494: INC EBX
// 005af495: CMP EAX,0x7c
// 005af498: JGE 0x005af4a3
//   XREF to: 005af4a3 (CONDITIONAL_JUMP)
// 005af49a: CMP dword ptr [EAX + 0x3f6aa44],0x0
//   XREF to: 03f6aa4c (READ)
//   XREF to: 03f6aa50 (READ)
// 005af4a1: JNZ 0x005af491
//   XREF to: 005af491 (CONDITIONAL_JUMP)
// 005af4a3: CMP EBX,0x1f
//   Label: LAB_005af4a3
// 005af4a6: JGE 0x005af5dd
//   XREF to: 005af5dd (CONDITIONAL_JUMP)
// 005af4ac: MOV EBP,EBX
// 005af4ae: LEA EAX,[EBX*0x4 + 0x0]
// 005af4b5: MOV EDX,dword ptr [EAX + 0x3f6aa44]
//   XREF to: 03f6aa48 (READ)
//   XREF to: 03f6aa4c (READ)
//   XREF to: 03f6aa50 (READ)
// 005af4bb: TEST EDX,EDX
// 005af4bd: JZ 0x005af4cd
//   XREF to: 005af4cd (CONDITIONAL_JUMP)
// 005af4bf: PUSH EDX
// 005af4c0: MOV ESI,dword ptr [EDX]
// 005af4c2: CALL dword ptr [ESI + 0x48]
// 005af4c5: TEST EAX,EAX
// 005af4c7: JNZ 0x005af5fe
//   XREF to: 005af5fe (CONDITIONAL_JUMP)
// 005af4cd: LEA ESI,[EBP*0x4 + 0x0]
//   Label: LAB_005af4cd
// 005af4d4: ADD ESI,0x3f6aac0
//   XREF to: 03f6aac0 (DATA)
// 005af4da: MOV ECX,dword ptr [ESI]
//   XREF to: 03f6aac8 (READ)
// 005af4dc: TEST ECX,ECX
// 005af4de: JZ 0x005af4ec
//   XREF to: 005af4ec (CONDITIONAL_JUMP)
// 005af4e0: PUSH ECX
// 005af4e1: MOV EDX,dword ptr [ECX]
// 005af4e3: CALL dword ptr [EDX + 0x8]
// 005af4e6: MOV dword ptr [ESI],0x0
//   XREF to: 03f6aac8 (WRITE)
// 005af4ec: LEA ESI,[EBP*0x4 + 0x0]
//   Label: LAB_005af4ec
// 005af4f3: ADD ESI,0x3f6aa44
//   XREF to: 03f6aa44 (DATA)
// 005af4f9: MOV EBP,dword ptr [ESI]
//   XREF to: 03f6aa4c (READ)
// 005af4fb: TEST EBP,EBP
// 005af4fd: JZ 0x005af50e
//   XREF to: 005af50e (CONDITIONAL_JUMP)
// 005af4ff: MOV EAX,EBP
// 005af501: PUSH EAX
// 005af502: MOV EBP,dword ptr [EBP]
// 005af505: CALL dword ptr [EBP + 0x8]
// 005af508: MOV dword ptr [ESI],0x0
//   XREF to: 03f6aa4c (WRITE)
// 005af50e: MOV EDX,0x3f6aa44
//   Label: LAB_005af50e
//   XREF to: 03f6aa44 (DATA)
// 005af513: LEA ESI,[EBX*0x4 + 0x0]
// 005af51a: ADD EDX,ESI
// 005af51c: PUSH EDX
//   XREF to: 03f6aa4c (DATA)
// 005af51d: MOV EDX,dword ptr [EDI*0x4 + 0x3f6a9e0]
//   XREF to: 03f6a9e0 (DATA)
// 005af524: MOV EAX,[0x03f6a9b0]
//   XREF to: 03f6a9b0 (READ)
// 005af529: PUSH EDX
// 005af52a: MOV EBP,dword ptr [EAX]
// 005af52c: PUSH EAX
// 005af52d: CALL dword ptr [EBP + 0x14]
// 005af530: TEST EAX,EAX
// 005af532: JNZ 0x005af637
//   XREF to: 005af637 (CONDITIONAL_JUMP)
// 005af538: MOV ECX,dword ptr [ESI + 0x3f6aa44]
//   XREF to: 03f6aa4c (READ)
// 005af53e: TEST ECX,ECX
// 005af540: JNZ 0x005af6a9
//   XREF to: 005af6a9 (CONDITIONAL_JUMP)
// 005af546: MOV ESI,EBX
//   Label: LAB_005af546
// 005af548: LEA EAX,[EBX*0x4 + 0x0]
// 005af54f: MOV EBP,dword ptr [EAX + 0x3f6aa44]
//   XREF to: 03f6aa4c (READ)
// 005af555: TEST EBP,EBP
// 005af557: JZ 0x005af568
//   XREF to: 005af568 (CONDITIONAL_JUMP)
// 005af559: PUSH EBP
// 005af55a: MOV EBX,dword ptr [EBP]
// 005af55d: CALL dword ptr [EBX + 0x48]
// 005af560: TEST EAX,EAX
// 005af562: JNZ 0x005af670
//   XREF to: 005af670 (CONDITIONAL_JUMP)
// 005af568: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005af568
// 005af56f: ADD EBX,0x3f6aac0
//   XREF to: 03f6aac0 (DATA)
// 005af575: MOV EAX,dword ptr [EBX]
//   XREF to: 03f6aac8 (READ)
// 005af577: TEST EAX,EAX
// 005af579: JZ 0x005af587
//   XREF to: 005af587 (CONDITIONAL_JUMP)
// 005af57b: PUSH EAX
// 005af57c: MOV EDI,dword ptr [EAX]
// 005af57e: CALL dword ptr [EDI + 0x8]
// 005af581: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aac8 (WRITE)
// 005af587: LEA EBX,[ESI*0x4 + 0x0]
//   Label: LAB_005af587
// 005af58e: ADD EBX,0x3f6aa44
//   XREF to: 03f6aa44 (DATA)
// 005af594: MOV EDX,dword ptr [EBX]
//   XREF to: 03f6aa4c (READ)
// 005af596: TEST EDX,EDX
// 005af598: JZ 0x005af5a6
//   XREF to: 005af5a6 (CONDITIONAL_JUMP)
// 005af59a: PUSH EDX
// 005af59b: MOV ESI,dword ptr [EDX]
// 005af59d: CALL dword ptr [ESI + 0x8]
// 005af5a0: MOV dword ptr [EBX],0x0
//   XREF to: 03f6aa4c (WRITE)
// 005af5a6: XOR EAX,EAX
//   Label: LAB_005af5a6
// 005af5a8: ADD ESP,0x640
// 005af5ae: POP EBP
// 005af5af: POP EDI
// 005af5b0: POP ESI
// 005af5b1: POP EBX
// 005af5b2: RET
// 005af5b3: CMP dword ptr [EDI*0x4 + 0x3f6a9e0],0x0
//   Label: LAB_005af5b3
//   XREF to: 03f6a9e0 (DATA)
// 005af5bb: JZ 0x005af42e
//   XREF to: 005af42e (CONDITIONAL_JUMP)
// 005af5c1: LEA EAX,[EDI*0x4 + 0x0]
// 005af5c8: ADD EAX,EDI
// 005af5ca: CMP dword ptr [EAX*0x4 + 0x3f6ab3c],0x1
//   XREF to: 03f6ab3c (DATA)
// 005af5d2: JL 0x005af42e
//   XREF to: 005af42e (CONDITIONAL_JUMP)
// 005af5d8: JMP 0x005af452
//   XREF to: 005af452 (UNCONDITIONAL_JUMP)
// 005af5dd: PUSH 0x651dfb
//   Label: LAB_005af5dd
//   XREF to: 00651dfb (DATA)
// 005af5e2: MOV ECX,dword ptr [0x0066e8e0]
//   XREF to: 0083b1a4 (PARAM)
//   XREF to: 0066e8e0 (READ)
// 005af5e8: PUSH ECX
//   XREF to: 0083b1a4 (DATA)
// 005af5e9: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 005af5ee: ADD ESP,0x8
// 005af5f1: XOR EAX,EAX
// 005af5f3: ADD ESP,0x640
// 005af5f9: POP EBP
// 005af5fa: POP EDI
// 005af5fb: POP ESI
// 005af5fc: POP EBX
// 005af5fd: RET
// 005af5fe: PUSH EAX
//   Label: LAB_005af5fe
// 005af5ff: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af604: ADD ESP,0x4
// 005af607: PUSH EAX
// 005af608: PUSH 0x651ab9
//   XREF to: 00651ab9 (DATA)
// 005af60d: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af612: LEA EAX,[ESP + 0x19c]
// 005af619: PUSH EAX
// 005af61a: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af61f: ADD ESP,0x10
// 005af622: LEA EAX,[ESP + 0x190]
// 005af629: PUSH EAX
// 005af62a: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af62f: ADD ESP,0x4
// 005af632: JMP 0x005af50e
//   XREF to: 005af50e (UNCONDITIONAL_JUMP)
// 005af637: PUSH EAX
//   Label: LAB_005af637
// 005af638: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af63d: ADD ESP,0x4
// 005af640: PUSH EAX
// 005af641: PUSH 0x651e2d
//   XREF to: 00651e2d (DATA)
// 005af646: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af64b: LEA EAX,[ESP + 0x4bc]
// 005af652: PUSH EAX
// 005af653: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af658: ADD ESP,0x10
// 005af65b: LEA EAX,[ESP + 0x4b0]
// 005af662: PUSH EAX
// 005af663: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af668: ADD ESP,0x4
// 005af66b: JMP 0x005af546
//   XREF to: 005af546 (UNCONDITIONAL_JUMP)
// 005af670: PUSH EAX
//   Label: LAB_005af670
// 005af671: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af676: ADD ESP,0x4
// 005af679: PUSH EAX
// 005af67a: PUSH 0x651ab9
//   XREF to: 00651ab9 (DATA)
// 005af67f: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af684: LEA EAX,[ESP + 0xc]
// 005af688: PUSH EAX
// 005af689: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af68e: ADD ESP,0x10
// 005af691: MOV EAX,ESP
// 005af693: PUSH EAX
// 005af694: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af699: ADD ESP,0x4
// 005af69c: XOR EAX,EAX
// 005af69e: ADD ESP,0x640
// 005af6a4: POP EBP
// 005af6a5: POP EDI
// 005af6a6: POP ESI
// 005af6a7: POP EBX
// 005af6a8: RET
// 005af6a9: MOV EDX,0x3f6aac0
//   Label: LAB_005af6a9
//   XREF to: 03f6aac0 (DATA)
// 005af6ae: ADD EDX,ESI
//   XREF to: 03f6aac8 (PARAM)
// 005af6b0: PUSH EDX
//   XREF to: 03f6aac8 (DATA)
// 005af6b1: PUSH 0x686d68
//   XREF to: 00686d68 (DATA)
// 005af6b6: MOV EDI,dword ptr [ECX]
// 005af6b8: PUSH ECX
// 005af6b9: CALL dword ptr [EDI]
// 005af6bb: TEST EAX,EAX
// 005af6bd: JNZ 0x005af6d9
//   XREF to: 005af6d9 (CONDITIONAL_JUMP)
// 005af6bf: CMP dword ptr [ESI + 0x3f6aac0],0x0
//   XREF to: 03f6aac8 (READ)
// 005af6c6: JZ 0x005af546
//   XREF to: 005af546 (CONDITIONAL_JUMP)
// 005af6cc: MOV EAX,EBX
// 005af6ce: ADD ESP,0x640
// 005af6d4: POP EBP
// 005af6d5: POP EDI
// 005af6d6: POP ESI
// 005af6d7: POP EBX
// 005af6d8: RET
// 005af6d9: PUSH EAX
//   Label: LAB_005af6d9
// 005af6da: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005af6df: ADD ESP,0x4
// 005af6e2: PUSH EAX
// 005af6e3: PUSH 0x651e44
//   XREF to: 00651e44 (DATA)
// 005af6e8: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005af6ed: LEA EAX,[ESP + 0x32c]
// 005af6f4: PUSH EAX
// 005af6f5: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005af6fa: ADD ESP,0x10
// 005af6fd: LEA EAX,[ESP + 0x320]
// 005af704: PUSH EAX
// 005af705: CALL sound_sndmain.cpp_logSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005af70a: ADD ESP,0x4
// 005af70d: JMP 0x005af546
//   XREF to: 005af546 (UNCONDITIONAL_JUMP)
