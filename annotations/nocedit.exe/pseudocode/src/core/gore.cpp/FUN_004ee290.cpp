// Name: core_gore.cpp_FUN_004ee290
// Address: 004ee290
// Address Range: [[004ee290, 004ee334]]
// Convention: __cdecl
// Signature: int core_gore.cpp_FUN_004ee290(CGore * this_ptr)
// Cross-references:
//   core_mission.cpp_CDemonMission_writeFile_FUN_00523600 (00523600) at 0052393c [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_Gore_0062e452
//   TerminatedCString s_d_0062e460
//   TerminatedCString s_d_0062e464
//   undefined4 DAT_02d873d8
//   CBloodSplat[2000] DAT_02d873dc
//   undefined4 DAT_02d87420
//   undefined4 DAT_02da8720
//   CBloodPool[32] DAT_02da8724
//   undefined4 DAT_02da874c
// Function calls:
//   core_gore.cpp_FUN_004ecb90
//   core_gore.cpp_FUN_004ed1c0
//   crt_stdio.c_fprintf_FUN_005fe6d0

#include "nocturne.h"

int __cdecl core_gore_cpp_FUN_004ee290(CGore *this_ptr)

{
  int iVar1;
  int iVar2;
  FILE *in_stack_00000008;
  
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"--- Gore ---\n");
  iVar2 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",DAT_02da8720);
  if (0 < DAT_02da8720) {
    do {
      iVar2 = iVar2 + 1;
      core_gore_cpp_FUN_004ed1c0();
    } while (iVar2 < DAT_02da8720);
  }
  iVar1 = 0;
  iVar2 = crt_stdio_c_fprintf_FUN_005fe6d0(in_stack_00000008,"%d\n",DAT_02d873d8);
  if (0 < DAT_02d873d8) {
    do {
      iVar1 = iVar1 + 1;
      iVar2 = core_gore_cpp_FUN_004ecb90();
    } while (iVar1 < DAT_02d873d8);
  }
  return iVar2;
}


// Assembly code:
// 004ee290: PUSH EBX
//   Label: core_gore.cpp_FUN_004ee290
// 004ee291: PUSH ESI
// 004ee292: PUSH EDI
// 004ee293: PUSH EBP
// 004ee294: MOV EDI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004ee298: PUSH 0x62e452
//   XREF to: 0062e452 (DATA)
// 004ee29d: PUSH EDI
// 004ee29e: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ee2a3: ADD ESP,0x8
// 004ee2a6: MOV EDX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee2ac: PUSH EDX
// 004ee2ad: PUSH 0x62e460
//   XREF to: 0062e460 (DATA)
// 004ee2b2: PUSH EDI
// 004ee2b3: XOR ESI,ESI
// 004ee2b5: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ee2ba: MOV ECX,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee2c0: ADD ESP,0xc
// 004ee2c3: TEST ECX,ECX
// 004ee2c5: JLE 0x004ee2f0
//   XREF to: 004ee2f0 (CONDITIONAL_JUMP)
// 004ee2c7: MOV EBX,0x2da8724
//   XREF to: 02da8724 (PARAM)
// 004ee2cc: PUSH EDI
//   Label: LAB_004ee2cc
// 004ee2cd: PUSH EBX
//   XREF to: 02da8724 (DATA)
//   XREF to: 02da874c (DATA)
// 004ee2ce: INC ESI
// 004ee2cf: CALL core_gore.cpp_FUN_004ed1c0
//   XREF to: 004ed1c0 (UNCONDITIONAL_CALL)
// 004ee2d4: MOV EBP,dword ptr [0x02da8720]
//   XREF to: 02da8720 (READ)
// 004ee2da: ADD ESP,0x8
// 004ee2dd: ADD EBX,0x28
//   XREF to: 02da874c (PARAM)
// 004ee2e0: CMP ESI,EBP
// 004ee2e2: JL 0x004ee2cc
//   XREF to: 004ee2cc (CONDITIONAL_JUMP)
// 004ee2e4: LEA EAX,[EAX]
// 004ee2ea: LEA EDX,[EDX]
// 004ee2f0: MOV EAX,[0x02d873d8]
//   Label: LAB_004ee2f0
//   XREF to: 02d873d8 (READ)
// 004ee2f5: PUSH EAX
// 004ee2f6: PUSH 0x62e464
//   XREF to: 0062e464 (DATA)
// 004ee2fb: PUSH EDI
// 004ee2fc: XOR EBX,EBX
// 004ee2fe: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 004ee303: MOV EDX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ee309: ADD ESP,0xc
// 004ee30c: TEST EDX,EDX
// 004ee30e: JLE 0x004ee330
//   XREF to: 004ee330 (CONDITIONAL_JUMP)
// 004ee310: MOV ESI,0x2d873dc
//   XREF to: 02d873dc (DATA)
// 004ee315: PUSH EDI
//   Label: LAB_004ee315
// 004ee316: PUSH ESI
//   XREF to: 02d873dc (DATA)
//   XREF to: 02d87420 (DATA)
// 004ee317: INC EBX
// 004ee318: CALL core_gore.cpp_FUN_004ecb90
//   XREF to: 004ecb90 (UNCONDITIONAL_CALL)
// 004ee31d: MOV ECX,dword ptr [0x02d873d8]
//   XREF to: 02d873d8 (READ)
// 004ee323: ADD ESP,0x8
// 004ee326: ADD ESI,0x44
// 004ee329: CMP EBX,ECX
// 004ee32b: JL 0x004ee315
//   XREF to: 004ee315 (CONDITIONAL_JUMP)
// 004ee32d: LEA EAX,[EAX]
// 004ee330: POP EBP
//   Label: LAB_004ee330
// 004ee331: POP EDI
// 004ee332: POP ESI
// 004ee333: POP EBX
// 004ee334: RET
