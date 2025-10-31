// Name: core_chain.cpp_CChain_ctor_FUN_0042fb80
// Address: 0042fb80
// Address Range: [[0042fb80, 0042fcb3]]
// Convention: __cdecl
// Signature: CChain * core_chain.cpp_CChain_ctor_FUN_0042fb80(CChain * this_ptr)
// Cross-references:
//   core_chain.cpp_FUN_0042fb40 (0042fb40) at 0042fb5a [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_CHAINLINK_RAW_006177a3
//   undefined4 s_HAINLINK.RAW_006177a4
//   undefined4 s_AINLINK.RAW_006177a5
//   undefined4 s_INLINK.RAW_006177a6
//   TerminatedCString s_chain_pull_wav_006177b1
//   undefined4 s_hain-pull.wav_006177b2
//   undefined4 s_ain-pull.wav_006177b3
//   undefined4 s_in-pull.wav_006177b4
//   TerminatedCString s_chain_move_wav_006177c0
//   undefined4 s_hain-move.wav_006177c1
//   undefined4 s_ain-move.wav_006177c2
//   undefined4 s_in-move.wav_006177c3
//   CDemonActor_vtable PTR_core_chain.cpp_FUN_0042fd20_0065ba04
//   WatcomTypeInfo g_SChainVertexTypeInfo
// Function calls:
//   core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

CChain * __cdecl core_chain_cpp_CChain_ctor_FUN_0042fb80(CChain *this_ptr)

{
  char cVar1;
  CDemonActor *pCVar2;
  void *pvVar3;
  char *pcVar4;
  char *pcVar5;
  
  pCVar2 = core_actor_cpp_CDemonActor_ctor_FUN_004088b0(&this_ptr->base_actor);
  pvVar3 = crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667
                     (&pCVar2[1].metadata.runtime_vector2,0x14,&g_SChainVertexTypeInfo);
  *(CDemonActor_vtable **)((int)pvVar3 + -0x138) = &PTR_core_chain_cpp_FUN_0042fd20_0065ba04;
  *(undefined4 *)((int)pvVar3 + -0x134) = 10;
  *(undefined4 *)((int)pvVar3 + -0x130) = 0x40a00000;
  *(undefined4 *)((int)pvVar3 + 0x2d0) = 0x3f800000;
  *(undefined4 *)((int)pvVar3 + 0x2d4) = 0x3f000000;
  *(undefined4 *)((int)pvVar3 + 0x2d8) = 0x42000000;
  pcVar4 = "CHAINLINK.RAW";
  *(undefined4 *)((int)pvVar3 + 0x2dc) = 0x3f666666;
  *(undefined4 *)((int)pvVar3 + -0x128) = 0;
  pcVar5 = (char *)((int)pvVar3 + -0x118);
  *(undefined4 *)((int)pvVar3 + -0x124) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar3 + -0x120) = 0xd;
  *(undefined4 *)((int)pvVar3 + -0x11c) = 0;
  pcVar4 = "chain-pull.wav";
  *(undefined4 *)((int)pvVar3 + -400) = 1;
  pcVar5 = (char *)((int)pvVar3 + -0xd8);
  *(undefined4 *)((int)pvVar3 + -0x194) = 0;
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  pcVar4 = "chain-move.wav";
  pcVar5 = (char *)((int)pvVar3 + -0x70);
  do {
    cVar1 = *pcVar4;
    *pcVar5 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar4[1];
    pcVar4 = pcVar4 + 2;
    pcVar5[1] = cVar1;
    pcVar5 = pcVar5 + 2;
  } while (cVar1 != '\0');
  *(undefined4 *)((int)pvVar3 + 0x2e8) = 0;
  *(undefined4 *)((int)pvVar3 + -4) = 1;
  return (CChain *)((int)pvVar3 + -0x28c);
}


// Assembly code:
// 0042fb80: PUSH ESI
//   Label: core_chain.cpp_CChain_ctor_FUN_0042fb80
// 0042fb81: PUSH EDI
// 0042fb82: MOV EDX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0x4] (READ)
// 0042fb86: PUSH EDX
// 0042fb87: CALL core_actor.cpp_CDemonActor_ctor_FUN_004088b0
//   XREF to: 004088b0 (UNCONDITIONAL_CALL)
// 0042fb8c: ADD ESP,0x4
// 0042fb8f: PUSH 0x65baf0
//   XREF to: 0065baf0 (DATA)
// 0042fb94: PUSH 0x14
// 0042fb96: ADD EAX,0x28c
// 0042fb9b: PUSH EAX
// 0042fb9c: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 0042fba1: LEA EDX,[EAX + 0xfffffd74]
// 0042fba7: MOV dword ptr [EDX + 0x154],0x65ba04
//   XREF to: 0065ba04 (DATA)
// 0042fbb1: MOV dword ptr [EDX + 0x158],0xa
// 0042fbbb: MOV dword ptr [EDX + 0x15c],0x40a00000
// 0042fbc5: MOV dword ptr [EDX + 0x55c],0x3f800000
// 0042fbcf: MOV dword ptr [EDX + 0x560],0x3f000000
// 0042fbd9: MOV dword ptr [EDX + 0x564],0x42000000
// 0042fbe3: MOV ESI,0x6177a3
//   XREF to: 006177a3 (DATA)
// 0042fbe8: MOV dword ptr [EDX + 0x568],0x3f666666
// 0042fbf2: ADD ESP,0xc
// 0042fbf5: MOV dword ptr [EDX + 0x164],0x0
// 0042fbff: LEA EDI,[EDX + 0x174]
// 0042fc05: MOV dword ptr [EDX + 0x168],0x0
// 0042fc0f: PUSH EDI
// 0042fc10: MOV AL,byte ptr [ESI]
//   Label: LAB_0042fc10
//   XREF to: 006177a3 (READ)
//   XREF to: 006177a5 (READ)
// 0042fc12: MOV byte ptr [EDI],AL
// 0042fc14: CMP AL,0x0
// 0042fc16: JZ 0x0042fc28
//   XREF to: 0042fc28 (CONDITIONAL_JUMP)
// 0042fc18: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006177a4 (READ)
//   XREF to: 006177a6 (READ)
// 0042fc1b: ADD ESI,0x2
// 0042fc1e: MOV byte ptr [EDI + 0x1],AL
// 0042fc21: ADD EDI,0x2
// 0042fc24: CMP AL,0x0
// 0042fc26: JNZ 0x0042fc10
//   XREF to: 0042fc10 (CONDITIONAL_JUMP)
// 0042fc28: POP EDI
//   Label: LAB_0042fc28
// 0042fc29: MOV dword ptr [EDX + 0x16c],0xd
// 0042fc33: MOV dword ptr [EDX + 0x170],0x0
// 0042fc3d: MOV ESI,0x6177b1
//   XREF to: 006177b1 (DATA)
// 0042fc42: MOV dword ptr [EDX + 0xfc],0x1
// 0042fc4c: LEA EDI,[EDX + 0x1b4]
// 0042fc52: MOV dword ptr [EDX + 0xf8],0x0
// 0042fc5c: PUSH EDI
// 0042fc5d: MOV AL,byte ptr [ESI]
//   Label: LAB_0042fc5d
//   XREF to: 006177b1 (READ)
//   XREF to: 006177b3 (READ)
// 0042fc5f: MOV byte ptr [EDI],AL
// 0042fc61: CMP AL,0x0
// 0042fc63: JZ 0x0042fc75
//   XREF to: 0042fc75 (CONDITIONAL_JUMP)
// 0042fc65: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006177b2 (READ)
//   XREF to: 006177b4 (READ)
// 0042fc68: ADD ESI,0x2
// 0042fc6b: MOV byte ptr [EDI + 0x1],AL
// 0042fc6e: ADD EDI,0x2
// 0042fc71: CMP AL,0x0
// 0042fc73: JNZ 0x0042fc5d
//   XREF to: 0042fc5d (CONDITIONAL_JUMP)
// 0042fc75: POP EDI
//   Label: LAB_0042fc75
// 0042fc76: MOV ESI,0x6177c0
//   XREF to: 006177c0 (DATA)
// 0042fc7b: LEA EDI,[EDX + 0x21c]
// 0042fc81: PUSH EDI
// 0042fc82: MOV AL,byte ptr [ESI]
//   Label: LAB_0042fc82
//   XREF to: 006177c0 (READ)
//   XREF to: 006177c2 (READ)
// 0042fc84: MOV byte ptr [EDI],AL
// 0042fc86: CMP AL,0x0
// 0042fc88: JZ 0x0042fc9a
//   XREF to: 0042fc9a (CONDITIONAL_JUMP)
// 0042fc8a: MOV AL,byte ptr [ESI + 0x1]
//   XREF to: 006177c1 (READ)
//   XREF to: 006177c3 (READ)
// 0042fc8d: ADD ESI,0x2
// 0042fc90: MOV byte ptr [EDI + 0x1],AL
// 0042fc93: ADD EDI,0x2
// 0042fc96: CMP AL,0x0
// 0042fc98: JNZ 0x0042fc82
//   XREF to: 0042fc82 (CONDITIONAL_JUMP)
// 0042fc9a: POP EDI
//   Label: LAB_0042fc9a
// 0042fc9b: MOV dword ptr [EDX + 0x574],0x0
// 0042fca5: MOV EAX,EDX
// 0042fca7: MOV dword ptr [EDX + 0x288],0x1
// 0042fcb1: POP EDI
// 0042fcb2: POP ESI
// 0042fcb3: RET
