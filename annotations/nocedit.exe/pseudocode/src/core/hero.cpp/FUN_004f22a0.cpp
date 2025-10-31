// Name: core_hero.cpp_FUN_004f22a0
// Address: 004f22a0
// Address Range: [[004f22a0, 004f2339]]
// Convention: unknown
// Signature: undefined core_hero.cpp_FUN_004f22a0()
// Cross-references:
//   core_charactr.cpp_CCharacter_FUN_00429870 (00429870) at 00429a71 [UNCONDITIONAL_CALL]
// Globals:
//   int g_HeroCount
//   CHero*[4] g_HeroActors
//   undefined4 DAT_02db87c4

#include "nocturne.h"

/* Signature: undefined1 actors_hero_hero.cpp_FUN_004f22a0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

undefined4 core_hero_cpp_FUN_004f22a0(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  
  if (0 < g_HeroCount) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)((int)g_HeroActors + iVar4);
      if (iVar1 != 0) {
        fVar2 = *(float *)(iVar1 + 0x20) - *in_stack_00000004;
        fVar3 = *(float *)(iVar1 + 0x28) - in_stack_00000004[2];
        if (ABS(*(float *)(iVar1 + 0x24) - in_stack_00000004[1]) <= in_stack_0000000c) {
          if (fVar2 * fVar2 + fVar3 * fVar3 < in_stack_00000008 * in_stack_00000008) {
            return 1;
          }
        }
      }
      iVar4 = iVar4 + 4;
    } while (iVar4 < g_HeroCount * 4);
  }
  return 0;
}


// Assembly code:
// 004f22a0: PUSH EBX
//   Label: core_hero.cpp_FUN_004f22a0
// 004f22a1: PUSH ESI
// 004f22a2: PUSH EBP
// 004f22a3: MOV EBP,ESP
// 004f22a5: SUB ESP,0x10
// 004f22a8: AND ESP,0xfffffff8
// 004f22ab: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0xc] (READ)
// 004f22ae: MOV ECX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004f22b1: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x20] (DATA)
// 004f22b4: FLD float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f22b7: FMUL ST0
// 004f22b9: MOV EDX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004f22bf: FSTP float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (WRITE)
// 004f22c2: TEST EDX,EDX
// 004f22c4: JLE 0x004f22e2
//   XREF to: 004f22e2 (CONDITIONAL_JUMP)
// 004f22c6: MOV EBX,dword ptr [0x02db87bc]
//   XREF to: 02db87bc (READ)
// 004f22cc: XOR EDX,EDX
// 004f22ce: SHL EBX,0x2
// 004f22d1: MOV ESI,dword ptr [EDX + 0x2db87c0]
//   Label: LAB_004f22d1
//   XREF to: 02db87c0 (READ)
//   XREF to: 02db87c4 (READ)
// 004f22d7: TEST ESI,ESI
// 004f22d9: JNZ 0x004f22ea
//   XREF to: 004f22ea (CONDITIONAL_JUMP)
// 004f22db: ADD EDX,0x4
//   Label: LAB_004f22db
// 004f22de: CMP EDX,EBX
// 004f22e0: JL 0x004f22d1
//   XREF to: 004f22d1 (CONDITIONAL_JUMP)
// 004f22e2: XOR EAX,EAX
//   Label: LAB_004f22e2
// 004f22e4: MOV ESP,EBP
// 004f22e6: POP EBP
// 004f22e7: POP ESI
// 004f22e8: POP EBX
// 004f22e9: RET
// 004f22ea: MOV EAX,ESI
//   Label: LAB_004f22ea
// 004f22ec: FLD float ptr [EAX + 0x20]
// 004f22ef: FSUB float ptr [ECX]
// 004f22f1: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (WRITE)
// 004f22f5: FLD float ptr [EAX + 0x24]
// 004f22f8: FSUB float ptr [ECX + 0x4]
// 004f22fb: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x18] (WRITE)
// 004f22ff: FLD float ptr [EAX + 0x28]
// 004f2302: FXCH
// 004f2304: FABS
// 004f2306: FXCH
// 004f2308: FSUB float ptr [ECX + 0x8]
// 004f230b: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (WRITE)
// 004f230f: FLD float ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 004f2312: FCOMPP
// 004f2314: FNSTSW AX
// 004f2316: SAHF
// 004f2317: JC 0x004f22db
//   XREF to: 004f22db (CONDITIONAL_JUMP)
// 004f2319: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14] (READ)
// 004f231d: FMUL ST0
// 004f231f: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x1c] (READ)
// 004f2323: FMUL ST0
// 004f2325: FADDP
// 004f2327: FCOMP float ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004f232a: FNSTSW AX
// 004f232c: SAHF
// 004f232d: JNC 0x004f22db
//   XREF to: 004f22db (CONDITIONAL_JUMP)
// 004f232f: MOV EAX,0x1
// 004f2334: MOV ESP,EBP
// 004f2336: POP EBP
// 004f2337: POP ESI
// 004f2338: POP EBX
// 004f2339: RET
