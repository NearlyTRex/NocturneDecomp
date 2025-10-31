// Name: core_hero.cpp_FUN_004f2220
// Address: 004f2220
// Address Range: [[004f2220, 004f2293]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f2220()
// Cross-references:
//   core_fire.cpp_CGunFlame_initProcess_FUN_004c4b00 (004c4b00) at 004c4b62 [UNCONDITIONAL_CALL]
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 005091de [UNCONDITIONAL_CALL]
//   core_trash.cpp_CTrash_process_FUN_005decf0 (005decf0) at 005ded0b [UNCONDITIONAL_CALL]
//   core_trigger.cpp_CTrigger_process_FUN_005dfac0 (005dfac0) at 005dff26 [UNCONDITIONAL_CALL]
//   core_vampboss.cpp_CVampireBoss_process_FUN_005e5970 (005e5970) at 005e6902 [UNCONDITIONAL_CALL]
// Globals:
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f2220(undefined4 param_1, undefined4 param_2)
    */

undefined4 core_hero_cpp_FUN_004f2220(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  float *in_stack_00000004;
  float in_stack_00000008;
  
  if (0 < g_HeroCount) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar5);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004;
        fVar4 = *(float *)(iVar1 + 0x24) - in_stack_00000004[1];
        fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2];
        if (fVar3 * fVar3 + fVar4 * fVar4 + fVar2 * fVar2 < in_stack_00000008 * in_stack_00000008) {
          return 1;
        }
      }
      iVar5 = iVar5 + 4;
    } while (iVar5 < g_HeroCount * 4);
  }
  return 0;
}


// Assembly code:
// 004f2220: PUSH EBX
//   Label: core_hero.cpp_FUN_004f2220
// 004f2221: PUSH ESI
// 004f2222: SUB ESP,0xc
// 004f2225: MOV ECX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x4] (READ)
// 004f2229: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004f222d: FMUL ST0
// 004f222f: MOV EDX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004f2235: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (WRITE)
// 004f2239: TEST EDX,EDX
// 004f223b: JLE 0x004f2259
//   XREF to: 004f2259 (CONDITIONAL_JUMP)
// 004f223d: MOV EBX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004f2243: XOR EDX,EDX
// 004f2245: SHL EBX,0x2
// 004f2248: MOV ESI,dword ptr [EDX + 0x2db87c0]
//   Label: LAB_004f2248
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 004f224e: TEST ESI,ESI
// 004f2250: JNZ 0x004f2261
//   XREF to: 004f2261 (CONDITIONAL_JUMP)
// 004f2252: ADD EDX,0x4
//   Label: LAB_004f2252
// 004f2255: CMP EDX,EBX
// 004f2257: JL 0x004f2248
//   XREF to: 004f2248 (CONDITIONAL_JUMP)
// 004f2259: XOR EAX,EAX
//   Label: LAB_004f2259
// 004f225b: ADD ESP,0xc
// 004f225e: POP ESI
// 004f225f: POP EBX
// 004f2260: RET
// 004f2261: MOV EAX,ESI
//   Label: LAB_004f2261
// 004f2263: FLD float ptr [EAX + 0x20]
// 004f2266: FSUB float ptr [ECX]
// 004f2268: FMUL ST0
// 004f226a: FLD float ptr [EAX + 0x24]
// 004f226d: FSUB float ptr [ECX + 0x4]
// 004f2270: FMUL ST0
// 004f2272: FLD float ptr [EAX + 0x28]
// 004f2275: FXCH
// 004f2277: FADDP ST2,ST0
// 004f2279: FSUB float ptr [ECX + 0x8]
// 004f227c: FMUL ST0
// 004f227e: FADDP
// 004f2280: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[0x8] (READ)
// 004f2284: FNSTSW AX
// 004f2286: SAHF
// 004f2287: JNC 0x004f2252
//   XREF to: 004f2252 (CONDITIONAL_JUMP)
// 004f2289: MOV EAX,0x1
// 004f228e: ADD ESP,0xc
// 004f2291: POP ESI
// 004f2292: POP EBX
// 004f2293: RET
