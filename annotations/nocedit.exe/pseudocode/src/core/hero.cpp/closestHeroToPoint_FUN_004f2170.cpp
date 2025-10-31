// Name: core_hero.cpp_closestHeroToPoint_FUN_004f2170
// Address: 004f2170
// Address Range: [[004f2170, 004f221e]]
// Convention: unknown
// Signature: undefined core_hero.cpp_closestHeroToPoint_FUN_004f2170()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_0042ede0 (0042ede0) at 0042ee67 [UNCONDITIONAL_CALL]
//   core_emitter.cpp_FUN_004a7e80 (004a7e80) at 004a7e91 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_hero_cpp_0062ea7d
//   TerminatedCString s_closestHeroToPoint_no_he_0062ea8e
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_main.c_displayErrorAndQuit_FUN_00506f10

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_closestHeroToPoint(undefined4 param_1) */

int core_hero_cpp_closestHeroToPoint_FUN_004f2170(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  int iVar6;
  float *in_stack_00000004;
  float local_1c;
  
  iVar6 = 0;
  local_1c = 1e+30;
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar5);
      if ((iVar1 != 0) &&
         (fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004,
         fVar4 = *(float *)(iVar1 + 0x24) - in_stack_00000004[1],
         fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2],
         fVar2 = fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2, fVar2 < local_1c)) {
        iVar6 = iVar1;
        local_1c = fVar2;
      }
      iVar5 = iVar5 + 4;
    } while (SBORROW4(iVar5,g_HeroCount * 4) != iVar5 + g_HeroCount * -4 < 0);
  }
  if (iVar6 != 0) {
    return iVar6;
  }
  g_CurrentFilename = "..\\core\\hero.cpp";
  g_CurrentLineNumber = 0x34;
  core_main_c_displayErrorAndQuit_FUN_00506f10("closestHeroToPoint - no heros!");
  return 0;
}


// Assembly code:
// 004f2170: PUSH EBX
//   Label: core_hero.cpp_closestHeroToPoint_FUN_004f2170
// 004f2171: PUSH ESI
// 004f2172: PUSH EDI
// 004f2173: PUSH EBP
// 004f2174: SUB ESP,0x14
// 004f2177: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x4] (READ)
// 004f217b: MOV EDX,0x7149f2ca
// 004f2180: MOV ECX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004f2186: XOR ESI,ESI
// 004f2188: MOV dword ptr [ESP + 0x8],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f218c: TEST ECX,ECX
// 004f218e: JLE 0x004f21aa
//   XREF to: 004f21aa (CONDITIONAL_JUMP)
// 004f2190: LEA EDI,[ECX*0x4 + 0x0]
// 004f2197: XOR EDX,EDX
// 004f2199: MOV EBP,dword ptr [EDX + 0x2db87c0]
//   Label: LAB_004f2199
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 004f219f: TEST EBP,EBP
// 004f21a1: JNZ 0x004f21b8
//   XREF to: 004f21b8 (CONDITIONAL_JUMP)
// 004f21a3: ADD EDX,0x4
//   Label: LAB_004f21a3
// 004f21a6: CMP EDX,EDI
// 004f21a8: JL 0x004f2199
//   XREF to: 004f2199 (CONDITIONAL_JUMP)
// 004f21aa: TEST ESI,ESI
//   Label: LAB_004f21aa
// 004f21ac: JZ 0x004f21f2
//   XREF to: 004f21f2 (CONDITIONAL_JUMP)
// 004f21ae: MOV EAX,ESI
// 004f21b0: ADD ESP,0x14
// 004f21b3: POP EBP
// 004f21b4: POP EDI
// 004f21b5: POP ESI
// 004f21b6: POP EBX
// 004f21b7: RET
// 004f21b8: MOV ECX,EBP
//   Label: LAB_004f21b8
// 004f21ba: LEA EAX,[EBP + 0x20]
// 004f21bd: FLD float ptr [EAX]
// 004f21bf: FSUB float ptr [EBX]
// 004f21c1: FMUL ST0
// 004f21c3: FLD float ptr [EAX + 0x4]
// 004f21c6: FSUB float ptr [EBX + 0x4]
// 004f21c9: FMUL ST0
// 004f21cb: FLD float ptr [EAX + 0x8]
// 004f21ce: FXCH
// 004f21d0: FADDP ST2,ST0
// 004f21d2: FSUB float ptr [EBX + 0x8]
// 004f21d5: FMUL ST0
// 004f21d7: FADDP
// 004f21d9: FST float ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (WRITE)
// 004f21dd: FCOMP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x1c] (READ)
// 004f21e1: FNSTSW AX
// 004f21e3: SAHF
// 004f21e4: JNC 0x004f21a3
//   XREF to: 004f21a3 (CONDITIONAL_JUMP)
// 004f21e6: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x18] (READ)
// 004f21ea: MOV ESI,EBP
// 004f21ec: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 004f21f0: JMP 0x004f21a3
//   XREF to: 004f21a3 (UNCONDITIONAL_JUMP)
// 004f21f2: MOV EBX,0x62ea7d
//   Label: LAB_004f21f2
//   XREF to: 0062ea7d (PARAM)
// 004f21f7: MOV EDI,0x34
// 004f21fc: PUSH 0x62ea8e
//   XREF to: 0062ea8e (DATA)
// 004f2201: MOV dword ptr [0x02f0ca48],EBX
//   XREF to: 02f0ca48 (WRITE)
// 004f2207: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 004f220d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004f2212: ADD ESP,0x4
// 004f2215: MOV EAX,ESI
// 004f2217: ADD ESP,0x14
// 004f221a: POP EBP
// 004f221b: POP EDI
// 004f221c: POP ESI
// 004f221d: POP EBX
// 004f221e: RET
