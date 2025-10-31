// Name: core_flamecan.cpp_FUN_004cad90
// Address: 004cad90
// Address Range: [[004cad90, 004cadfc]]
// Convention: unknown
// Signature: undefined core_flamecan.cpp_FUN_004cad90()
// Cross-references:
//   core_flame.cpp_FUN_004c9c00 (004c9c00) at 004c9d67 [UNCONDITIONAL_CALL]
//   core_flame.cpp_FUN_004caf60 (004caf60) at 004cb08a [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_0062a1be = 0.5
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310

#include "nocturne.h"

void core_flamecan_cpp_FUN_004cad90(void)

{
  float fVar1;
  int iVar2;
  undefined4 extraout_EDX;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float10 fVar4;
  int in_stack_00000004;
  
  core_dglobe_cpp_CDemonGlobe_setColor_FUN_00471310
            ((CDemonGlobe *)(in_stack_00000004 + 0x168),(CColor3f *)&stack0xffffffd8);
  fVar1 = core_actor_cpp_getRandomFloat_FUN_0040cc10
                    (-*(float *)(in_stack_00000004 + 0x284),*(float *)(in_stack_00000004 + 0x284));
  fVar4 = ((float10)fVar1 + (float10)*(float *)(in_stack_00000004 + 0x280)) *
          (float10)DOUBLE_0062a1c6;
  crt_math_c_round_FUN_005fe6b0((double)CONCAT44(extraout_EDX,fVar1));
  iVar2 = (int)ROUND(fVar4);
  *(int *)(in_stack_00000004 + 0x1a4) = iVar2;
  iVar2 = (iVar2 + (iVar2 >> 0x1f) * -0x100) - (uint)((iVar2 >> 0x1f) << 7 < 0);
  iVar3 = iVar2 >> 0x1f;
  *(char *)(in_stack_00000004 + 0x184) =
       (char)((int)(((iVar2 >> 8) + iVar3 * -4) - (uint)(iVar3 << 1 < 0)) >> 2);
  core_dglobe_cpp_CDemonGlobe_precomputeAttenuation_FUN_00471360
            ((CDemonGlobe *)(in_stack_00000004 + 0x168),
             *(float *)(in_stack_00000004 + 0x15c) * *(float *)(in_stack_00000004 + 0x1ac) *
             (float)DOUBLE_0062a1ce);
  *(undefined4 *)(in_stack_00000004 + 0x188) = 2;
  return;
}


// Assembly code:
// 004cad90: PUSH EBX
//   Label: core_flamecan.cpp_FUN_004cad90
// 004cad91: PUSH ESI
// 004cad92: PUSH EBP
// 004cad93: MOV EBP,ESP
// 004cad95: SUB ESP,0x18
// 004cad98: AND ESP,0xfffffff8
// 004cad9b: MOV EBX,dword ptr [EBP + 0x10]
// 004cad9e: LEA EDX,[EBX + 0x20]
// 004cada1: MOV EAX,dword ptr [EDX]
// 004cada3: MOV dword ptr [ESP],EAX
// 004cada6: LEA EAX,[EDX + 0x4]
// 004cada9: MOV EAX,dword ptr [EAX]
// 004cadab: MOV dword ptr [ESP + 0x4],EAX
// 004cadaf: LEA EAX,[EDX + 0x8]
// 004cadb2: MOV EAX,dword ptr [EAX]
// 004cadb4: MOV dword ptr [ESP + 0x8],EAX
// 004cadb8: FLD float ptr [EBX + 0x15c]
// 004cadbe: FMUL double ptr [0x0062a1be]
//   XREF to: 0062a1be (READ)
// 004cadc4: MOV EAX,ESP
// 004cadc6: LEA ESI,[EBX + 0x168]
// 004cadcc: PUSH EAX
// 004cadcd: FLD float ptr [ESP + 0x8]
// 004cadd1: FXCH
// 004cadd3: FADD ST0,ST1
// 004cadd5: PUSH ESI
// 004cadd6: FSTP ST1
// 004cadd8: FSTP float ptr [ESP + 0xc]
// 004caddc: CALL core_dglobe.cpp_CDemonGlobe_setColor_FUN_00471310
//   XREF to: 00471310 (UNCONDITIONAL_CALL)
// 004cade1: ADD ESP,0x8
// 004cade4: PUSH dword ptr [EBX + 0x284]
// 004cadea: FLD float ptr [EBX + 0x284]
// 004cadf0: SUB ESP,0x4
// 004cadf3: FCHS
// 004cadf5: FSTP float ptr [ESP]
// 004cadf8: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
