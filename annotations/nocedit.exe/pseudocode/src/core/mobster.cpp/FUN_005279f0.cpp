// Name: core_mobster.cpp_FUN_005279f0
// Address: 005279f0
// Address Range: [[005279f0, 00527b66]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_005279f0()
// Cross-references:
//   core_mobster.cpp_FUN_00525840 (00525840) at 00525f8a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_mobster_cheese_c_c_d_wav_006399fa
//   float FLOAT_00639a16 = 5
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_02d81ab8
//   undefined4 DAT_02f37eb4
//   undefined4 g_CMobsterClassInfo.name_hash
//   undefined4 g_CDemonSetInstance.field19_0x14f0a0[7996]
//   undefined4 DAT_03265258
//   undefined4 DAT_0326525c
//   CSound g_CSoundInstance
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
//   crt_stdio.c_sprintf_FUN_005fdbd0
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_005279f0(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_005279f0(void)

{
  CGame *pCVar1;
  CDemonActor *pCVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int iVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  char local_80 [100];
  int local_1c;
  int local_18;
  float local_14;
  
  if (*(float *)(in_stack_00000004 + 0xbed4) <= 0.0) {
    iVar6 = 0;
    local_1c = in_stack_00000008 + 0x60;
    iVar5 = in_stack_00000008 * 4;
    do {
      pCVar1 = g_CGamePtr;
      iVar3 = *(int *)(&DAT_02f37eb4 + iVar5);
      *(int *)(&DAT_02f37eb4 + iVar5) = iVar3 + 1;
      if (((pCVar1->foul_language_flag != 0) || (in_stack_00000008 != 1)) || (iVar3 + 1 != 6)) {
        crt_stdio_c_sprintf_FUN_005fdbd0
                  (local_80,"mobster-cheese-%c-%c-%d.wav",
                   (uint)*(byte *)(in_stack_00000004 + 0xbed0),local_1c,
                   *(undefined4 *)(&DAT_02f37eb4 + iVar5));
        local_14 = core_sound_cpp_CSound_getSoundDuration_FUN_005b3ba0(g_CSoundPtr,local_80);
        *(float *)(in_stack_00000004 + 0xbed4) = local_14;
        if (0.0 < *(float *)(in_stack_00000004 + 0xbed4)) break;
        *(undefined4 *)(&DAT_02f37eb4 + iVar5) = 0;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 3);
    if (0.0 < *(float *)(in_stack_00000004 + 0xbed4)) {
      *(float *)(in_stack_00000004 + 0xbed4) =
           *(float *)(in_stack_00000004 + 0xbed4) + FLOAT_00639a16;
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)(in_stack_00000004 + 0xbf5c));
      if (iVar5 == 0) {
        iVar6 = 0;
        iVar5 = 0;
        local_18 = 0;
        while( true ) {
          if (*(int *)(g_CDemonSetPtr->field19_0x14f0a0 + 0x1f3c) <= iVar6) {
            uVar4 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x24))();
            *(undefined4 *)(in_stack_00000004 + 0xbf54) = uVar4;
            return;
          }
          pCVar2 = core_actor_cpp_castToClassHash_FUN_0040c790
                             (*(CDemonActor **)(g_CDemonSetPtr->field19_0x14f0a0 + local_18 + 8000),
                              g_CMobsterClassInfo.name_hash);
          if (((pCVar2 != (CDemonActor *)0x0) &&
              (iVar3 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660
                                 (*(uint *)(pCVar2[0x8e].create_event + 0xc)), iVar3 != 0)) &&
             (iVar5 = iVar5 + 1, 3 < iVar5)) break;
          local_18 = local_18 + 4;
          iVar6 = iVar6 + 1;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 005279f0: PUSH EBX
//   Label: core_mobster.cpp_FUN_005279f0
// 005279f1: PUSH ESI
// 005279f2: PUSH EDI
// 005279f3: PUSH EBP
// 005279f4: MOV EBP,ESP
// 005279f6: SUB ESP,0x70
// 005279f9: AND ESP,0xfffffff8
// 005279fc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005279ff: FLD float ptr [ESI + 0xbed4]
// 00527a05: FLDZ
// 00527a07: FCOMPP
// 00527a09: FNSTSW AX
// 00527a0b: SAHF
// 00527a0c: JC 0x00527a58
//   XREF to: 00527a58 (CONDITIONAL_JUMP)
// 00527a0e: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00527a11: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00527a14: XOR EDI,EDI
// 00527a16: ADD EAX,0x60
// 00527a19: SHL EBX,0x2
// 00527a1c: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 00527a20: MOV EDX,dword ptr [EBX + 0x2f37eb4]
//   Label: LAB_00527a20
//   XREF to: 02f37eb4 (DATA)
// 00527a26: INC EDX
// 00527a27: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 00527a2c: MOV dword ptr [EBX + 0x2f37eb4],EDX
//   XREF to: 02f37eb4 (DATA)
// 00527a32: CMP dword ptr [EAX + 0x1c],0x0
//   XREF to: 02d81ab8 (READ)
// 00527a36: JNZ 0x00527a5f
//   XREF to: 00527a5f (CONDITIONAL_JUMP)
// 00527a38: CMP dword ptr [EBP + 0x18],0x1
//   XREF to: Stack[0x8] (READ)
// 00527a3c: JNZ 0x00527a5f
//   XREF to: 00527a5f (CONDITIONAL_JUMP)
// 00527a3e: CMP EDX,0x6
// 00527a41: JNZ 0x00527a5f
//   XREF to: 00527a5f (CONDITIONAL_JUMP)
// 00527a43: INC EDI
//   Label: LAB_00527a43
// 00527a44: CMP EDI,0x3
// 00527a47: JL 0x00527a20
//   XREF to: 00527a20 (CONDITIONAL_JUMP)
// 00527a49: FLD float ptr [ESI + 0xbed4]
//   Label: LAB_00527a49
// 00527a4f: FLDZ
// 00527a51: FCOMPP
// 00527a53: FNSTSW AX
// 00527a55: SAHF
// 00527a56: JC 0x00527abf
//   XREF to: 00527abf (CONDITIONAL_JUMP)
// 00527a58: MOV ESP,EBP
//   Label: LAB_00527a58
// 00527a5a: POP EBP
// 00527a5b: POP EDI
// 00527a5c: POP ESI
// 00527a5d: POP EBX
// 00527a5e: RET
// 00527a5f: MOV ECX,dword ptr [EBX + 0x2f37eb4]
//   Label: LAB_00527a5f
//   XREF to: 02f37eb4 (DATA)
// 00527a65: PUSH ECX
// 00527a66: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x1c] (READ)
// 00527a6a: PUSH EAX
// 00527a6b: XOR EAX,EAX
// 00527a6d: MOV AL,byte ptr [ESI + 0xbed0]
// 00527a73: PUSH EAX
// 00527a74: PUSH 0x6399fa
//   XREF to: 006399fa (DATA)
// 00527a79: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x80] (DATA)
// 00527a7d: PUSH EAX
// 00527a7e: CALL crt_stdio.c_sprintf_FUN_005fdbd0
//   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)
// 00527a83: ADD ESP,0x14
// 00527a86: MOV EAX,ESP
// 00527a88: PUSH EAX
// 00527a89: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00527a8f: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 00527a90: CALL core_sound.cpp_CSound_getSoundDuration_FUN_005b3ba0
//   XREF to: 005b3ba0 (UNCONDITIONAL_CALL)
// 00527a95: MOV dword ptr [ESP + 0x74],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00527a99: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 00527a9d: MOV dword ptr [ESI + 0xbed4],EAX
// 00527aa3: ADD ESP,0x8
// 00527aa6: FLD float ptr [ESI + 0xbed4]
// 00527aac: FLDZ
// 00527aae: FCOMPP
// 00527ab0: FNSTSW AX
// 00527ab2: SAHF
// 00527ab3: JC 0x00527a49
//   XREF to: 00527a49 (CONDITIONAL_JUMP)
// 00527ab5: XOR ECX,ECX
// 00527ab7: MOV dword ptr [EBX + 0x2f37eb4],ECX
//   XREF to: 02f37eb4 (DATA)
// 00527abd: JMP 0x00527a43
//   XREF to: 00527a43 (UNCONDITIONAL_JUMP)
// 00527abf: FLD float ptr [ESI + 0xbed4]
//   Label: LAB_00527abf
// 00527ac5: MOV EBX,dword ptr [ESI + 0xbf5c]
// 00527acb: FADD float ptr [0x00639a16]
//   XREF to: 00639a16 (READ)
// 00527ad1: PUSH EBX
// 00527ad2: FSTP float ptr [ESI + 0xbed4]
// 00527ad8: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00527add: ADD ESP,0x4
// 00527ae0: TEST EAX,EAX
// 00527ae2: JNZ 0x00527a58
//   XREF to: 00527a58 (CONDITIONAL_JUMP)
// 00527ae8: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00527aec: XOR EDI,EDI
// 00527aee: XOR EBX,EBX
// 00527af0: MOV EAX,[0x006810c8]
//   Label: LAB_00527af0
//   XREF to: 006810c8 (READ)
// 00527af5: CMP EDI,dword ptr [EAX + 0x150fdc]
//   XREF to: 03265254 (READ)
// 00527afb: JGE 0x00527b4a
//   XREF to: 00527b4a (CONDITIONAL_JUMP)
// 00527afd: MOV EDX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x18] (READ)
// 00527b01: MOV ECX,dword ptr [0x02f37f30]
//   XREF to: 02f37f30 (READ)
// 00527b07: ADD EAX,EDX
// 00527b09: PUSH ECX
// 00527b0a: MOV ECX,dword ptr [EAX + 0x150fe0]
//   XREF to: 03265258 (DATA)
//   XREF to: 0326525c (DATA)
// 00527b10: PUSH ECX
// 00527b11: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00527b16: ADD ESP,0x8
// 00527b19: TEST EAX,EAX
// 00527b1b: JNZ 0x00527b2b
//   XREF to: 00527b2b (CONDITIONAL_JUMP)
// 00527b1d: MOV ECX,dword ptr [ESP + 0x68]
//   Label: LAB_00527b1d
//   XREF to: Stack[-0x18] (READ)
// 00527b21: ADD ECX,0x4
// 00527b24: INC EDI
// 00527b25: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00527b29: JMP 0x00527af0
//   XREF to: 00527af0 (UNCONDITIONAL_JUMP)
// 00527b2b: MOV EDX,dword ptr [EAX + 0xbf54]
//   Label: LAB_00527b2b
// 00527b31: PUSH EDX
// 00527b32: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00527b37: ADD ESP,0x4
// 00527b3a: TEST EAX,EAX
// 00527b3c: JZ 0x00527b1d
//   XREF to: 00527b1d (CONDITIONAL_JUMP)
// 00527b3e: INC EBX
// 00527b3f: CMP EBX,0x3
// 00527b42: JG 0x00527a58
//   XREF to: 00527a58 (CONDITIONAL_JUMP)
// 00527b48: JMP 0x00527b1d
//   XREF to: 00527b1d (UNCONDITIONAL_JUMP)
// 00527b4a: MOV EAX,ESP
//   Label: LAB_00527b4a
// 00527b4c: PUSH EAX
// 00527b4d: MOV EBX,dword ptr [ESI + 0x154]
// 00527b53: PUSH ESI
// 00527b54: CALL dword ptr [EBX + 0x24]
// 00527b57: ADD ESP,0x8
// 00527b5a: MOV dword ptr [ESI + 0xbf54],EAX
// 00527b60: MOV ESP,EBP
// 00527b62: POP EBP
// 00527b63: POP EDI
// 00527b64: POP ESI
// 00527b65: POP EBX
// 00527b66: RET
