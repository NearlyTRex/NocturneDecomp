// Name: core_gore.cpp_CGore_FUN_004ed7b0
// Address: 004ed7b0
// Address Range: [[004ed7b0, 004ed826]]
// Convention: __cdecl
// Signature: void core_gore.cpp_CGore_FUN_004ed7b0(CGore * this_ptr)
// Cross-references:
//   core_msnedit.cpp_PrepareMissionMaybe_FUN_005390f0 (005390f0) at 0053a384 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056be80 (0056be80) at 0056c063 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c1a0 (0056c1a0) at 0056c484 [UNCONDITIONAL_CALL]
//   core_set.cpp_CDemonSet_FUN_0056c990 (0056c990) at 0056cb77 [UNCONDITIONAL_CALL]
// Globals:
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CGame* g_CGamePtr = 02d81a9c
//   CDemonSet* g_CDemonSetPtr = 03114278
//   CDemonRenderer g_CDemonRendererInstance
//   CGame g_CGameInstance
//   undefined4 g_CGameInstance.blood_flag
//   CBloodParticle[256] DAT_02d833d4
//   undefined4 DAT_02d833ec
//   undefined4 DAT_02d83414
//   undefined4 DAT_02d8342c
//   undefined4 DAT_02d873d4
//   CDemonSet g_CDemonSetInstance
// Function calls:
//   core_gore.cpp_FUN_004eb9d0
//   core_set.cpp_CDemonSet_FUN_0056d380
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

void __cdecl core_gore_cpp_CGore_FUN_004ed7b0(CGore *this_ptr)

{
  int iVar1;
  CBloodParticle *pCVar2;
  
  if ((g_CGamePtr->blood_flag != 0) &&
     (iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr),
     iVar1 == 0)) {
    core_set_cpp_CDemonSet_FUN_0056d380(g_CDemonSetPtr);
    pCVar2 = DAT_02d833d4;
    core_gore_cpp_FUN_004eb9d0();
    do {
      if (0.0 < *(float *)(pCVar2->field0_0x0 + 0x18)) {
        (**(code **)(*(int *)(pCVar2->field0_0x0 + 0x34) + 8))();
      }
      pCVar2 = pCVar2 + 1;
    } while (pCVar2 != (CBloodParticle *)&DAT_02d873d4);
  }
  return;
}


// Assembly code:
// 004ed7b0: PUSH EBX
//   Label: core_gore.cpp_CGore_FUN_004ed7b0
// 004ed7b1: PUSH ESI
// 004ed7b2: PUSH EBP
// 004ed7b3: MOV EBP,ESP
// 004ed7b5: AND ESP,0xfffffff8
// 004ed7b8: MOV EAX,[0x0067b654]
//   XREF to: 02d81a9c (DATA)
//   XREF to: 0067b654 (READ)
// 004ed7bd: CMP dword ptr [EAX + 0x14],0x0
//   XREF to: 02d81ab0 (READ)
// 004ed7c1: JNZ 0x004ed7c9
//   XREF to: 004ed7c9 (CONDITIONAL_JUMP)
// 004ed7c3: MOV ESP,EBP
//   Label: LAB_004ed7c3
// 004ed7c5: POP EBP
// 004ed7c6: POP ESI
// 004ed7c7: POP EBX
// 004ed7c8: RET
// 004ed7c9: MOV ECX,dword ptr [0x006703ec]
//   Label: LAB_004ed7c9
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004ed7cf: PUSH ECX
//   XREF to: 02c6d578 (DATA)
// 004ed7d0: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004ed7d5: ADD ESP,0x4
// 004ed7d8: TEST EAX,EAX
// 004ed7da: JNZ 0x004ed7c3
//   XREF to: 004ed7c3 (CONDITIONAL_JUMP)
// 004ed7dc: PUSH EAX
// 004ed7dd: PUSH EAX
// 004ed7de: PUSH EAX
// 004ed7df: PUSH EAX
// 004ed7e0: PUSH EAX
// 004ed7e1: MOV EBX,dword ptr [0x006810c8]
//   XREF to: 03114278 (PARAM)
//   XREF to: 006810c8 (READ)
// 004ed7e7: PUSH EBX
//   XREF to: 03114278 (DATA)
// 004ed7e8: CALL core_set.cpp_CDemonSet_FUN_0056d380
//   XREF to: 0056d380 (UNCONDITIONAL_CALL)
// 004ed7ed: ADD ESP,0x18
// 004ed7f0: PUSH 0x2d833d4
//   XREF to: 02d833d4 (DATA)
// 004ed7f5: MOV EBX,0x2d833d4
//   XREF to: 02d833d4 (PARAM)
// 004ed7fa: CALL core_gore.cpp_FUN_004eb9d0
//   XREF to: 004eb9d0 (UNCONDITIONAL_CALL)
// 004ed7ff: LEA ESI,[EBX + 0x4000]
//   XREF to: 02d873d4 (DATA)
// 004ed805: ADD ESP,0x4
// 004ed808: FLD float ptr [EBX + 0x18]
//   Label: LAB_004ed808
//   XREF to: 02d833ec (READ)
//   XREF to: 02d8342c (READ)
// 004ed80b: FLDZ
// 004ed80d: FCOMPP
// 004ed80f: FNSTSW AX
// 004ed811: SAHF
// 004ed812: JNC 0x004ed81e
//   XREF to: 004ed81e (CONDITIONAL_JUMP)
// 004ed814: PUSH EBX
//   XREF to: 02d833d4 (DATA)
//   XREF to: 02d83414 (DATA)
// 004ed815: MOV EAX,dword ptr [EBX + 0x34]
//   XREF to: 02d83408 (READ)
//   XREF to: 02d83448 (READ)
// 004ed818: CALL dword ptr [EAX + 0x8]
// 004ed81b: ADD ESP,0x4
// 004ed81e: ADD EBX,0x40
//   Label: LAB_004ed81e
// 004ed821: CMP EBX,ESI
// 004ed823: JZ 0x004ed7c3
//   XREF to: 004ed7c3 (CONDITIONAL_JUMP)
// 004ed825: JMP 0x004ed808
//   XREF to: 004ed808 (UNCONDITIONAL_JUMP)
