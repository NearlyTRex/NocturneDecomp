// Name: sound_snddx.cpp_FUN_005ae340
// Address: 005ae340
// Address Range: [[005ae340, 005ae4a1]]
// Convention: unknown
// Signature: undefined sound_snddx.cpp_FUN_005ae340()
// Globals:
//   TerminatedCString s_DirectSux_Unable_to_s_s_00651a6c
//   TerminatedCString s_Position_secondary_buffe_00651adc
//   TerminatedCString s_Play_the_secondary_buffe_00651afb
//   undefined4 DAT_00651b1c
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
//   sound_snddx.cpp_FUN_005adff0
//   sound_sndmain.cpp_FUN_005abc00
//   sound_sndmain.cpp_HandleSoundError_FUN_005adba0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 sound_snddx.cpp_FUN_005ae340(undefined4 param_1) */

undefined4 sound_snddx_cpp_FUN_005ae340(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  int *in_stack_00000004;
  double dVar4;
  char acStack_330 [400];
  char acStack_1a0 [400];
  
  if (DAT_03f6a9b8 == (int *)0x0) {
    dVar4 = 0.05;
  }
  else {
    DAT_03f6a9d4 = ((int)((DAT_03f6a9c4 + (DAT_03f6a9c4 >> 0x1f) * -8) -
                         (uint)((DAT_03f6a9c4 >> 0x1f) << 2 < 0)) >> 3) * DAT_03f6a9d0 *
                   DAT_03f6a9cc;
    dVar4 = ((double)DAT_03f6a9d0 / (double)DAT_03f6a9c8) * _DAT_00651b1c;
    iVar3 = 0;
    DAT_03f6a9dc = 0;
    if (0 < DAT_03f6a9d8) {
      do {
        iVar1 = sound_snddx_cpp_FUN_005adff0();
        if (iVar1 == 0) goto LAB_005ae43b;
        iVar3 = iVar3 + 1;
      } while (iVar3 < DAT_03f6a9d8);
    }
  }
  iVar3 = sound_sndmain_cpp_FUN_005abc00();
  if (iVar3 != 0) {
    if (DAT_03f6a9b8 == (int *)0x0) {
      return 1;
    }
    iVar3 = (**(code **)(*DAT_03f6a9b8 + 0x34))();
    if (iVar3 == 0) {
      iVar3 = (**(code **)(*DAT_03f6a9b8 + 0x30))();
      if (iVar3 == 0) {
        return 1;
      }
      uVar2 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_330,"DirectSux: Unable to %s.  (%s)","Play the secondary buffer",
                 uVar2);
    }
    else {
      uVar2 = sound_snddx_cpp_FUN_005ade70();
      crt_stdio_c_sprintf_FUN_005fdbd0
                (acStack_1a0,"DirectSux: Unable to %s.  (%s)","Position secondary buffer to 0",
                 uVar2,dVar4);
    }
    sound_sndmain_cpp_HandleSoundError_FUN_005adba0();
  }
LAB_005ae43b:
  (**(code **)(*in_stack_00000004 + 8))();
  return 0;
}


// Assembly code:
// 005ae340: PUSH EBX
//   Label: sound_snddx.cpp_FUN_005ae340
// 005ae341: PUSH ESI
// 005ae342: PUSH EDI
// 005ae343: PUSH EBP
// 005ae344: MOV EBP,ESP
// 005ae346: SUB ESP,0x328
// 005ae34c: AND ESP,0xfffffff8
// 005ae34f: CMP dword ptr [0x03f6a9b8],0x0
//   XREF to: 03f6a9b8 (READ)
// 005ae356: JZ 0x005ae453
//   XREF to: 005ae453 (CONDITIONAL_JUMP)
// 005ae35c: FILD dword ptr [0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005ae362: FILD dword ptr [0x03f6a9c8]
//   XREF to: 03f6a9c8 (READ)
// 005ae368: FDIVP
// 005ae36a: MOV EAX,[0x03f6a9c4]
//   XREF to: 03f6a9c4 (READ)
// 005ae36f: MOV EDX,EAX
// 005ae371: SAR EDX,0x1f
// 005ae374: SHL EDX,0x3
// 005ae377: SBB EAX,EDX
// 005ae379: SAR EAX,0x3
// 005ae37c: IMUL EAX,dword ptr [0x03f6a9d0]
//   XREF to: 03f6a9d0 (READ)
// 005ae383: MOV EBX,dword ptr [0x03f6a9cc]
//   XREF to: 03f6a9cc (READ)
// 005ae389: IMUL EAX,EBX
// 005ae38c: FMUL double ptr [0x00651b1c]
//   XREF to: 00651b1c (READ)
// 005ae392: MOV ESI,dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005ae398: FSTP double ptr [ESP]
//   XREF to: Stack[-0x338] (DATA)
// 005ae39b: XOR EBX,EBX
// 005ae39d: MOV [0x03f6a9d4],EAX
//   XREF to: 03f6a9d4 (WRITE)
// 005ae3a2: MOV dword ptr [0x03f6a9dc],EBX
//   XREF to: 03f6a9dc (WRITE)
// 005ae3a8: TEST ESI,ESI
// 005ae3aa: JLE 0x005ae3c4
//   XREF to: 005ae3c4 (CONDITIONAL_JUMP)
// 005ae3ac: CALL sound_snddx.cpp_FUN_005adff0
//   Label: LAB_005ae3ac
//   XREF to: 005adff0 (UNCONDITIONAL_CALL)
// 005ae3b1: TEST EAX,EAX
// 005ae3b3: JZ 0x005ae43b
//   XREF to: 005ae43b (CONDITIONAL_JUMP)
// 005ae3b9: MOV EDX,dword ptr [0x03f6a9d8]
//   XREF to: 03f6a9d8 (READ)
// 005ae3bf: INC EBX
// 005ae3c0: CMP EBX,EDX
// 005ae3c2: JL 0x005ae3ac
//   XREF to: 005ae3ac (CONDITIONAL_JUMP)
// 005ae3c4: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_005ae3c4
//   XREF to: Stack[-0x334] (READ)
// 005ae3c8: PUSH ECX
// 005ae3c9: MOV EBX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x338] (READ)
// 005ae3cd: PUSH EBX
// 005ae3ce: CALL sound_sndmain.cpp_FUN_005abc00
//   XREF to: 005abc00 (UNCONDITIONAL_CALL)
// 005ae3d3: ADD ESP,0x8
// 005ae3d6: TEST EAX,EAX
// 005ae3d8: JZ 0x005ae43b
//   XREF to: 005ae43b (CONDITIONAL_JUMP)
// 005ae3da: MOV ESI,dword ptr [0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005ae3e0: TEST ESI,ESI
// 005ae3e2: JZ 0x005ae496
//   XREF to: 005ae496 (CONDITIONAL_JUMP)
// 005ae3e8: PUSH 0x0
// 005ae3ea: MOV EBX,dword ptr [ESI]
// 005ae3ec: PUSH ESI
// 005ae3ed: CALL dword ptr [EBX + 0x34]
// 005ae3f0: TEST EAX,EAX
// 005ae3f2: JNZ 0x005ae469
//   XREF to: 005ae469 (CONDITIONAL_JUMP)
// 005ae3f4: PUSH 0x1
// 005ae3f6: PUSH 0x0
// 005ae3f8: MOV EAX,[0x03f6a9b8]
//   XREF to: 03f6a9b8 (READ)
// 005ae3fd: PUSH 0x0
// 005ae3ff: MOV EBX,dword ptr [EAX]
// 005ae401: PUSH EAX
// 005ae402: CALL dword ptr [EBX + 0x30]
// 005ae405: TEST EAX,EAX
// 005ae407: JZ 0x005ae496
//   XREF to: 005ae496 (CONDITIONAL_JUMP)
// 005ae40d: PUSH EAX
// 005ae40e: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae413: ADD ESP,0x4
// 005ae416: PUSH EAX
// 005ae417: PUSH 0x651afb
//   XREF to: 00651afb (DATA)
// 005ae41c: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae421: LEA EAX,[ESP + 0x14]
// 005ae425: PUSH EAX
// 005ae426: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae42b: ADD ESP,0x10
// 005ae42e: LEA EAX,[ESP + 0x8]
// 005ae432: PUSH EAX
//   Label: LAB_005ae432
// 005ae433: CALL sound_sndmain.cpp_HandleSoundError_FUN_005adba0
//   XREF to: 005adba0 (UNCONDITIONAL_CALL)
// 005ae438: ADD ESP,0x4
// 005ae43b: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_005ae43b
//   XREF to: Stack[0x4] (READ)
// 005ae43e: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005ae441: PUSH EDI
// 005ae442: MOV EAX,dword ptr [EAX]
// 005ae444: CALL dword ptr [EAX + 0x8]
// 005ae447: ADD ESP,0x4
// 005ae44a: XOR EAX,EAX
// 005ae44c: MOV ESP,EBP
// 005ae44e: POP EBP
// 005ae44f: POP EDI
// 005ae450: POP ESI
// 005ae451: POP EBX
// 005ae452: RET
// 005ae453: MOV EDI,0x9999999a
//   Label: LAB_005ae453
// 005ae458: MOV EAX,0x3fa99999
// 005ae45d: MOV dword ptr [ESP],EDI
//   XREF to: Stack[-0x338] (DATA)
// 005ae460: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x334] (WRITE)
// 005ae464: JMP 0x005ae3c4
//   XREF to: 005ae3c4 (UNCONDITIONAL_JUMP)
// 005ae469: PUSH EAX
//   Label: LAB_005ae469
// 005ae46a: CALL sound_snddx.cpp_FUN_005ade70
//   XREF to: 005ade70 (UNCONDITIONAL_CALL)
// 005ae46f: ADD ESP,0x4
// 005ae472: PUSH EAX
// 005ae473: PUSH 0x651adc
//   XREF to: 00651adc (DATA)
// 005ae478: PUSH 0x651a6c
//   XREF to: 00651a6c (DATA)
// 005ae47d: LEA EAX,[ESP + 0x1a4]
// 005ae484: PUSH EAX
// 005ae485: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 005ae48a: ADD ESP,0x10
// 005ae48d: LEA EAX,[ESP + 0x198]
// 005ae494: JMP 0x005ae432
//   XREF to: 005ae432 (UNCONDITIONAL_JUMP)
// 005ae496: MOV EAX,0x1
//   Label: LAB_005ae496
// 005ae49b: MOV ESP,EBP
// 005ae49d: POP EBP
// 005ae49e: POP EDI
// 005ae49f: POP ESI
// 005ae4a0: POP EBX
// 005ae4a1: RET
