// Name: core_gore.cpp_FUN_004ed760
// Address: 004ed760
// Address Range: [[004ed760, 004ed7aa]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ed760()
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1bf6 [UNCONDITIONAL_CALL]
//   core_gore.cpp_FUN_004ed730 (004ed730) at 004ed736 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523399 [UNCONDITIONAL_CALL]
//   core_msnedit.cpp_PrepareMissionAndEditGore_FUN_0053e220 (0053e220) at 0053e8d9 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_02d833d0
//   CBloodParticle[256] DAT_02d833d4
//   undefined4 DAT_02d833ec
//   undefined4 DAT_02d8342c
//   undefined4 DAT_02d873d4
//   undefined4 DAT_02d873d8
//   undefined4 DAT_02da871c
//   undefined4 DAT_02da8720
//   undefined4 DAT_02da8c24
//   undefined4 DAT_02da8c28

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ed760() */

void core_gore_cpp_FUN_004ed760(void)

{
  CBloodParticle *pCVar1;
  CBloodParticle *pCVar2;
  
  DAT_02d833d0 = 0;
  DAT_02d873d4 = 0;
  DAT_02d873d8 = 0;
  DAT_02da871c = 0;
  DAT_02da8720 = 0;
  pCVar1 = DAT_02d833d4;
  do {
    pCVar2 = pCVar1 + 1;
    pCVar1->field0_0x0[0x18] = '\0';
    pCVar1->field0_0x0[0x19] = '\0';
    pCVar1->field0_0x0[0x1a] = '\0';
    pCVar1->field0_0x0[0x1b] = '\0';
    pCVar1 = pCVar2;
  } while (pCVar2 != (CBloodParticle *)&DAT_02d873d4);
  DAT_02da8c28 = 0;
  DAT_02da8c24 = 0;
  return;
}


// Assembly code:
// 004ed760: PUSH EBP
//   Label: core_gore.cpp_FUN_004ed760
// 004ed761: XOR EDX,EDX
// 004ed763: MOV EAX,0x2d833d4
//   XREF to: 02d833d4 (DATA)
// 004ed768: MOV dword ptr [0x02d833d0],EDX
//   XREF to: 02d833d0 (WRITE)
// 004ed76e: MOV dword ptr [0x02d873d4],EDX
//   XREF to: 02d873d4 (WRITE)
// 004ed774: MOV dword ptr [0x02d873d8],EDX
//   XREF to: 02d873d8 (WRITE)
// 004ed77a: MOV dword ptr [0x02da871c],EDX
//   XREF to: 02da871c (WRITE)
// 004ed780: MOV dword ptr [0x02da8720],EDX
//   XREF to: 02da8720 (WRITE)
// 004ed786: LEA EDX,[EAX + 0x4000]
//   XREF to: 02d873d4 (DATA)
// 004ed78c: ADD EAX,0x40
//   Label: LAB_004ed78c
// 004ed78f: MOV dword ptr [EAX + -0x28],0x0
//   XREF to: 02d833ec (WRITE)
//   XREF to: 02d8342c (WRITE)
// 004ed796: CMP EAX,EDX
// 004ed798: JNZ 0x004ed78c
//   XREF to: 004ed78c (CONDITIONAL_JUMP)
// 004ed79a: XOR EAX,EDX
// 004ed79c: XOR EBP,EBP
// 004ed79e: MOV [0x02da8c28],EAX
//   XREF to: 02da8c28 (WRITE)
// 004ed7a3: MOV dword ptr [0x02da8c24],EBP
//   XREF to: 02da8c24 (WRITE)
// 004ed7a9: POP EBP
// 004ed7aa: RET
