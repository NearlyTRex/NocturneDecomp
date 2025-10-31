// Name: core_gore.cpp_FUN_004ee1e0
// Address: 004ee1e0
// Address Range: [[004ee1e0, 004ee28a]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004ee1e0()
// Cross-references:
//   core_game.cpp_CGame_loadSaveGame_FUN_004e12b0 (004e12b0) at 004e1a58 [UNCONDITIONAL_CALL]
//   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 (00522eb0) at 00523506 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_d_0062e44a
//   TerminatedCString s_d_0062e44e
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc
//   undefined4 DAT_02d87420
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724
//   undefined4 DAT_02da874c
// Function calls:
//   core_gore.cpp_FUN_004ecb00
//   core_gore.cpp_FUN_004ed160
//   crt_stdio.c_fgets_FUN_005fefd0
//   crt_stdio.c_fscanf_FUN_005fe7c0

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004ee1e0(undefined1 param_1, undefined4 param_2) */

int core_gore_cpp_FUN_004ee1e0(void)

{
  BADSPACEBASE *in_ESP;
  int iVar1;
  int iVar2;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fgets_FUN_005fefd0(&stack0xfffffef0,0xff,in_stack_00000008);
  iVar1 = 0;
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < DAT_02da8720) {
    do {
      iVar1 = iVar1 + 1;
      core_gore_cpp_FUN_004ed160();
    } while (iVar1 < DAT_02da8720);
  }
  iVar2 = 0;
  iVar1 = crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (0 < DAT_02d873d8) {
    do {
      iVar2 = iVar2 + 1;
      iVar1 = core_gore_cpp_FUN_004ecb00();
    } while (iVar2 < DAT_02d873d8);
  }
  return iVar1;
}


// Assembly code:
// 004ee1e0: PUSH EBX
//   Label: core_gore.cpp_FUN_004ee1e0
// 004ee1e1: PUSH ESI
// 004ee1e2: PUSH EDI
// 004ee1e3: PUSH EBP
// 004ee1e4: SUB ESP,0x100
// 004ee1ea: MOV EDI,dword ptr [ESP + 0x118]
//   XREF to: Stack[0x8] (READ)
// 004ee1f1: PUSH EDI
// 004ee1f2: PUSH 0xff
// 004ee1f7: LEA EBX,[ESP + 0x8]
//   XREF to: Stack[-0x110] (DATA)
// 004ee1fb: PUSH EBX
// 004ee1fc: CALL crt_stdio.c_fgets_FUN_005fefd0
//   XREF to: 005fefd0 (UNCONDITIONAL_CALL)
// 004ee201: ADD ESP,0xc
// 004ee204: PUSH 0x2da8720
//   XREF to: 02da8720 (DATA)
// 004ee209: PUSH 0x62e44a
//   XREF to: 0062e44a (DATA)
// 004ee20e: PUSH EDI
// 004ee20f: XOR ESI,ESI
// 004ee211: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ee216: MOV EDX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee21c: ADD ESP,0xc
// 004ee21f: TEST EDX,EDX
// 004ee221: JLE 0x004ee240
//   XREF to: 004ee240 (CONDITIONAL_JUMP)
// 004ee223: MOV EBX,0x2da8724
//   XREF to: 02da8724 (PARAM)
// 004ee228: PUSH EDI
//   Label: LAB_004ee228
// 004ee229: PUSH EBX
//   XREF to: 02da8724 (DATA)
//   XREF to: 02da874c (DATA)
// 004ee22a: INC ESI
// 004ee22b: CALL core_gore.cpp_FUN_004ed160
//   XREF to: 004ed160 (UNCONDITIONAL_CALL)
// 004ee230: MOV ECX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee236: ADD ESP,0x8
// 004ee239: ADD EBX,0x28
//   XREF to: 02da874c (PARAM)
// 004ee23c: CMP ESI,ECX
// 004ee23e: JL 0x004ee228
//   XREF to: 004ee228 (CONDITIONAL_JUMP)
// 004ee240: PUSH 0x2d873d8
//   Label: LAB_004ee240
//   XREF to: 02d873d8 (DATA)
// 004ee245: PUSH 0x62e44e
//   XREF to: 0062e44e (DATA)
// 004ee24a: PUSH EDI
// 004ee24b: XOR ESI,ESI
// 004ee24d: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 004ee252: MOV EBX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ee258: ADD ESP,0xc
// 004ee25b: TEST EBX,EBX
// 004ee25d: JLE 0x004ee280
//   XREF to: 004ee280 (CONDITIONAL_JUMP)
// 004ee25f: MOV EBX,0x2d873dc
//   XREF to: 02d873dc (PARAM)
// 004ee264: PUSH EDI
//   Label: LAB_004ee264
// 004ee265: PUSH EBX
//   XREF to: 02d873dc (DATA)
//   XREF to: 02d87420 (DATA)
// 004ee266: INC ESI
// 004ee267: CALL core_gore.cpp_FUN_004ecb00
//   XREF to: 004ecb00 (UNCONDITIONAL_CALL)
// 004ee26c: MOV EBP,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ee272: ADD ESP,0x8
// 004ee275: ADD EBX,0x44
//   XREF to: 02d87420 (PARAM)
// 004ee278: CMP ESI,EBP
// 004ee27a: JL 0x004ee264
//   XREF to: 004ee264 (CONDITIONAL_JUMP)
// 004ee27c: LEA EAX,[EAX]
// 004ee280: ADD ESP,0x100
//   Label: LAB_004ee280
// 004ee286: POP EBP
// 004ee287: POP EDI
// 004ee288: POP ESI
// 004ee289: POP EBX
// 004ee28a: RET
