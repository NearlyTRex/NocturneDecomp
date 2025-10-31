// Name: core_fire.cpp_CGunFlame_process_FUN_004c4f60
// Address: 004c4f60
// Address Range: [[004c4f60, 004c50a9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CGunFlame_process_FUN_004c4f60(CGunFlame * this_ptr)
// Cross-references:
//   core_fire.cpp_CFireEffect_process_FUN_004c6ec0 (004c6ec0) at 004c70b8 [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_00629f43 = 0.9700000
//   double DOUBLE_00629f4b = 0.200000000000000
//   double DOUBLE_00629f53 = 0.5
//   float FLOAT_00629f5b = -20
//   undefined4 DAT_0065dcc8
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CGame* g_CGamePtr = 02d81a9c
//   CFireEffect g_CFireEffectInstance
//   undefined4 g_CGameInstance.delta_time_float
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_fire.cpp_CFireEffect_FUN_004c7b20
//   core_fire.cpp_CGunFlame_FUN_004c4c00

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_fire_cpp_CGunFlame_process_FUN_004c4f60(CGunFlame *this_ptr)

{
  char *pcVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  float unaff_ESI;
  
  fVar2 = g_CGamePtr->delta_time_float;
  fVar3 = *(float *)this_ptr->field0_0x0 - fVar2;
  *(float *)this_ptr->field0_0x0 = fVar3;
  if (0.0 < fVar3) {
    pcVar1 = this_ptr->field0_0x0 + 0x10;
    *(float *)(this_ptr->field0_0x0 + 4) =
         *(float *)(this_ptr->field0_0x0 + 4) + *(float *)pcVar1 * fVar2;
    *(float *)(this_ptr->field0_0x0 + 8) =
         *(float *)(this_ptr->field0_0x0 + 8) + *(float *)(this_ptr->field0_0x0 + 0x14) * fVar2;
    fVar3 = (float)DOUBLE_00629f4b;
    *(float *)(this_ptr->field0_0x0 + 0xc) =
         *(float *)(this_ptr->field0_0x0 + 0xc) + *(float *)(this_ptr->field0_0x0 + 0x18) * fVar2;
    fVar4 = *(float *)(this_ptr->field0_0x0 + 0x14) * FLOAT_00629f43;
    fVar5 = *(float *)(this_ptr->field0_0x0 + 0x18) * FLOAT_00629f43;
    *(float *)pcVar1 = *(float *)pcVar1 * FLOAT_00629f43;
    *(float *)(this_ptr->field0_0x0 + 0x14) = fVar4;
    *(float *)(this_ptr->field0_0x0 + 0x18) = fVar5;
    *(float *)(this_ptr->field0_0x0 + 0x14) =
         fVar2 * fVar3 + *(float *)(this_ptr->field0_0x0 + 0x14);
    iVar6 = core_actor_cpp_FUN_0040cd10();
    if (iVar6 != 0) {
      core_fire_cpp_CFireEffect_FUN_004c7b20(g_CFireEffectPtr);
    }
    if ((*(int *)(this_ptr->field0_0x0 + 0x20) != 0) &&
       (iVar6 = core_actor_cpp_FUN_0040cd10(), iVar6 != 0)) {
      core_fire_cpp_CGunFlame_FUN_004c4c00(this_ptr);
    }
    *(float *)(this_ptr->field0_0x0 + 0x1c) =
         unaff_ESI * _DAT_0065dcc8 + *(float *)(this_ptr->field0_0x0 + 0x1c);
    fVar2 = FLOAT_00629f5b;
    if (0x419fffff < *(int *)(this_ptr->field0_0x0 + 0x1c)) {
      do {
        *(float *)(this_ptr->field0_0x0 + 0x1c) = *(float *)(this_ptr->field0_0x0 + 0x1c) + fVar2;
      } while (0x419fffff < *(int *)(this_ptr->field0_0x0 + 0x1c));
      return;
    }
  }
  else {
    this_ptr->field0_0x0[0] = '\0';
    this_ptr->field0_0x0[1] = '\0';
    this_ptr->field0_0x0[2] = '\0';
    this_ptr->field0_0x0[3] = '\0';
  }
  return;
}


// Assembly code:
// 004c4f60: PUSH EBX
//   Label: core_fire.cpp_CGunFlame_process_FUN_004c4f60
// 004c4f61: PUSH ESI
// 004c4f62: PUSH EBP
// 004c4f63: MOV EBP,ESP
// 004c4f65: SUB ESP,0x24
// 004c4f68: AND ESP,0xfffffff8
// 004c4f6b: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004c4f6e: MOV EAX,[0x0067b654]
//   XREF to: 0067b654 (READ)
// 004c4f73: MOV EAX,dword ptr [EAX + 0x264]
//   XREF to: 02d81d00 (READ)
// 004c4f79: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x30] (DATA)
// 004c4f7c: FLD float ptr [EBX]
// 004c4f7e: FSUB float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004c4f81: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004c4f85: FST float ptr [EBX]
// 004c4f87: FLDZ
// 004c4f89: FCOMPP
// 004c4f8b: FNSTSW AX
// 004c4f8d: SAHF
// 004c4f8e: JC 0x004c4f9c
//   XREF to: 004c4f9c (CONDITIONAL_JUMP)
// 004c4f90: MOV dword ptr [EBX],0x0
// 004c4f96: MOV ESP,EBP
//   Label: LAB_004c4f96
// 004c4f98: POP EBP
// 004c4f99: POP ESI
// 004c4f9a: POP EBX
// 004c4f9b: RET
// 004c4f9c: LEA EAX,[EBX + 0x10]
//   Label: LAB_004c4f9c
// 004c4f9f: FLD float ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 004c4fa2: FLD float ptr [EAX]
// 004c4fa4: FMUL ST1
// 004c4fa6: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c4faa: FLD float ptr [EAX + 0x4]
// 004c4fad: FMUL ST1
// 004c4faf: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (WRITE)
// 004c4fb3: FLD float ptr [EAX + 0x8]
// 004c4fb6: FMUL ST1
// 004c4fb8: FLD ST1
// 004c4fba: LEA ESI,[EBX + 0x4]
// 004c4fbd: FXCH
// 004c4fbf: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (WRITE)
// 004c4fc3: FLD float ptr [ESI]
// 004c4fc5: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x2c] (READ)
// 004c4fc9: FLD float ptr [ESI + 0x4]
// 004c4fcc: FXCH
// 004c4fce: FSTP float ptr [ESI]
// 004c4fd0: FADD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x28] (READ)
// 004c4fd4: FLD float ptr [ESI + 0x8]
// 004c4fd7: FXCH
// 004c4fd9: FSTP float ptr [ESI + 0x4]
// 004c4fdc: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x24] (READ)
// 004c4fe0: FXCH
// 004c4fe2: FMUL double ptr [0x00629f4b]
//   XREF to: 00629f4b (READ)
// 004c4fe8: FXCH
// 004c4fea: FSTP float ptr [ESI + 0x8]
// 004c4fed: FLD float ptr [0x00629f43]
//   XREF to: 00629f43 (READ)
// 004c4ff3: FLD float ptr [EAX]
// 004c4ff5: FMUL ST1
// 004c4ff7: FLD float ptr [EAX + 0x4]
// 004c4ffa: FMUL ST2
// 004c4ffc: FLD float ptr [EAX + 0x8]
// 004c4fff: FMULP ST3
// 004c5001: FXCH
// 004c5003: FSTP float ptr [EAX]
// 004c5005: FSTP float ptr [EAX + 0x4]
// 004c5008: FSTP float ptr [EAX + 0x8]
// 004c500b: FLD float ptr [EBX + 0x14]
// 004c500e: FXCH
// 004c5010: FADD ST0,ST1
// 004c5012: FXCH ST2
// 004c5014: FMUL double ptr [0x00629f53]
//   XREF to: 00629f53 (READ)
// 004c501a: FXCH ST2
// 004c501c: FSTP ST1
// 004c501e: SUB ESP,0x4
// 004c5021: FSTP float ptr [EBX + 0x14]
// 004c5024: FSTP float ptr [ESP]
//   XREF to: Stack[-0x34] (DATA)
// 004c5027: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c502c: ADD ESP,0x4
// 004c502f: TEST EAX,EAX
// 004c5031: JZ 0x004c504f
//   XREF to: 004c504f (CONDITIONAL_JUMP)
// 004c5033: PUSH 0xffff
// 004c5038: PUSH 0x0
// 004c503a: PUSH 0x3f000000
// 004c503f: PUSH ESI
// 004c5040: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004c5046: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004c5047: CALL core_fire.cpp_CFireEffect_FUN_004c7b20
//   XREF to: 004c7b20 (UNCONDITIONAL_CALL)
// 004c504c: ADD ESP,0x14
// 004c504f: CMP dword ptr [EBX + 0x20],0x0
//   Label: LAB_004c504f
// 004c5053: JZ 0x004c506e
//   XREF to: 004c506e (CONDITIONAL_JUMP)
// 004c5055: PUSH dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x10] (READ)
// 004c5059: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004c505e: ADD ESP,0x4
// 004c5061: TEST EAX,EAX
// 004c5063: JZ 0x004c506e
//   XREF to: 004c506e (CONDITIONAL_JUMP)
// 004c5065: PUSH EBX
// 004c5066: CALL core_fire.cpp_CGunFlame_FUN_004c4c00
//   XREF to: 004c4c00 (UNCONDITIONAL_CALL)
// 004c506b: ADD ESP,0x4
// 004c506e: FLD float ptr [ESP + 0x20]
//   Label: LAB_004c506e
//   XREF to: Stack[-0x10] (READ)
// 004c5072: FMUL float ptr [0x0065dcc8]
//   XREF to: 0065dcc8 (READ)
// 004c5078: FADD float ptr [EBX + 0x1c]
// 004c507b: FSTP float ptr [EBX + 0x1c]
// 004c507e: CMP dword ptr [EBX + 0x1c],0x41a00000
// 004c5085: JL 0x004c4f96
//   XREF to: 004c4f96 (CONDITIONAL_JUMP)
// 004c508b: FLD float ptr [0x00629f5b]
//   XREF to: 00629f5b (READ)
// 004c5091: FLD float ptr [EBX + 0x1c]
//   Label: LAB_004c5091
// 004c5094: FADD ST0,ST1
// 004c5096: FSTP float ptr [EBX + 0x1c]
// 004c5099: CMP dword ptr [EBX + 0x1c],0x41a00000
// 004c50a0: JGE 0x004c5091
//   XREF to: 004c5091 (CONDITIONAL_JUMP)
// 004c50a2: FSTP ST0
// 004c50a4: MOV ESP,EBP
// 004c50a6: POP EBP
// 004c50a7: POP ESI
// 004c50a8: POP EBX
// 004c50a9: RET
