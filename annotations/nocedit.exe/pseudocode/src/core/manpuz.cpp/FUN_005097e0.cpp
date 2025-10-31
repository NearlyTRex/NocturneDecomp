// Name: core_manpuz.cpp_FUN_005097e0
// Address: 005097e0
// Address Range: [[005097e0, 005098e4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_005097e0()
// Globals:
//   double DOUBLE_006356fd = 0.00392156862745098
//   double DOUBLE_00635705 = 0.25
// Function calls:
//   core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840

#include "nocturne.h"

/* Signature: undefined1 actors_other_manpuz.cpp_FUN_005097e0(undefined4 param_1, undefined4
   param_2) */

void core_manpuz_cpp_FUN_005097e0(void)

{
  float fVar1;
  float fVar2;
  float fVar3;
  char *pcVar4;
  CVector3f *pCVar5;
  float *pfVar6;
  int iVar7;
  CDemonActor *in_stack_00000004;
  SSurfaceInfo *in_stack_00000008;
  
  core_actor_cpp_CDemonActor_getSurfaceProperties_FUN_00409840(in_stack_00000004,in_stack_00000008);
  iVar7 = 0;
  pCVar5 = (CVector3f *)(in_stack_00000004[0xe].create_event + 0x14);
  do {
    fVar1 = pCVar5->x - (in_stack_00000008->hit_position).x;
    fVar3 = pCVar5->y - (in_stack_00000008->hit_position).y;
    fVar2 = pCVar5->z - (in_stack_00000008->hit_position).z;
    if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < 1.0) {
      in_stack_00000008->alpha_or_wetness = 1.0;
      return;
    }
    iVar7 = iVar7 + 1;
    pCVar5 = pCVar5 + 8;
  } while (iVar7 < 2);
  if (in_stack_00000008->field2_0x8 == 2) {
    iVar7 = 0;
    pcVar4 = in_stack_00000004[8].actor_name + 4;
    do {
      fVar1 = *(float *)pcVar4 - (in_stack_00000008->hit_position).x;
      fVar3 = *(float *)(pcVar4 + 4) - (in_stack_00000008->hit_position).y;
      fVar2 = *(float *)(pcVar4 + 8) - (in_stack_00000008->hit_position).z;
      pfVar6 = (float *)((int)&in_stack_00000004[7].metadata + iVar7 * 0xb8 + 0x10);
      if (fVar2 * fVar2 + fVar3 * fVar3 + fVar1 * fVar1 < (float)DOUBLE_00635705) {
        fVar1 = (float)DOUBLE_006356fd;
        pfVar6[6] = (float)(in_stack_00000008->color).r * in_stack_00000008->intensity * *pfVar6 *
                    fVar1 + pfVar6[6];
        pfVar6[7] = (float)(in_stack_00000008->color).g * in_stack_00000008->intensity * pfVar6[1] *
                    fVar1 + pfVar6[7];
        pfVar6[8] = (float)(in_stack_00000008->color).b * in_stack_00000008->intensity * pfVar6[2] *
                    fVar1 + pfVar6[8];
      }
      iVar7 = iVar7 + 1;
      pcVar4 = pcVar4 + 0xb8;
    } while (iVar7 < 0xc);
  }
  return;
}


// Assembly code:
// 005097e0: PUSH EBX
//   Label: core_manpuz.cpp_FUN_005097e0
// 005097e1: PUSH ESI
// 005097e2: PUSH EDI
// 005097e3: PUSH EBP
// 005097e4: MOV EBP,ESP
// 005097e6: SUB ESP,0x24
// 005097e9: AND ESP,0xfffffff8
// 005097ec: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005097ef: PUSH EBX
// 005097f0: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005097f3: PUSH EDX
// 005097f4: CALL core_actor.cpp_CDemonActor_getSurfaceProperties_FUN_00409840
//   XREF to: 00409840 (UNCONDITIONAL_CALL)
// 005097f9: ADD ESP,0x8
// 005097fc: XOR ESI,ESI
// 005097fe: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00509801: LEA ECX,[EBX + 0x2c]
// 00509804: ADD EDX,0x135c
// 0050980a: FLD float ptr [EDX]
//   Label: LAB_0050980a
// 0050980c: FSUB float ptr [ECX]
// 0050980e: FMUL ST0
// 00509810: FLD float ptr [EDX + 0x4]
// 00509813: FSUB float ptr [ECX + 0x4]
// 00509816: FMUL ST0
// 00509818: FLD float ptr [EDX + 0x8]
// 0050981b: FXCH
// 0050981d: FADDP ST2,ST0
// 0050981f: FSUB float ptr [ECX + 0x8]
// 00509822: FMUL ST0
// 00509824: FADDP
// 00509826: FLD1
// 00509828: FCOMPP
// 0050982a: FNSTSW AX
// 0050982c: SAHF
// 0050982d: JA 0x005098a3
//   XREF to: 005098a3 (CONDITIONAL_JUMP)
// 00509833: INC ESI
// 00509834: ADD EDX,0x60
// 00509837: CMP ESI,0x2
// 0050983a: JL 0x0050980a
//   XREF to: 0050980a (CONDITIONAL_JUMP)
// 0050983c: CMP dword ptr [EBX + 0x8],0x2
// 00509840: JNZ 0x0050989c
//   XREF to: 0050989c (CONDITIONAL_JUMP)
// 00509842: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00509845: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00509848: LEA EDI,[EBX + 0x2c]
// 0050984b: XOR ESI,ESI
// 0050984d: ADD EDX,0xaa0
// 00509853: ADD ECX,0xac4
// 00509859: MOV dword ptr [ESP + 0x18],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0050985d: IMUL EDX,ESI,0xb8
//   Label: LAB_0050985d
// 00509863: FLD float ptr [ECX]
// 00509865: FSUB float ptr [EDI]
// 00509867: FMUL ST0
// 00509869: FLD float ptr [ECX + 0x4]
// 0050986c: FSUB float ptr [EDI + 0x4]
// 0050986f: FMUL ST0
// 00509871: FLD float ptr [ECX + 0x8]
// 00509874: FXCH
// 00509876: FADDP ST2,ST0
// 00509878: FSUB float ptr [EDI + 0x8]
// 0050987b: FMUL ST0
// 0050987d: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 00509881: FADDP
// 00509883: ADD EDX,EAX
// 00509885: FCOMP double ptr [0x00635705]
//   XREF to: 00635705 (READ)
// 0050988b: FNSTSW AX
// 0050988d: SAHF
// 0050988e: JC 0x005098ac
//   XREF to: 005098ac (CONDITIONAL_JUMP)
// 00509890: INC ESI
//   Label: LAB_00509890
// 00509891: ADD ECX,0xb8
// 00509897: CMP ESI,0xc
// 0050989a: JL 0x0050985d
//   XREF to: 0050985d (CONDITIONAL_JUMP)
// 0050989c: MOV ESP,EBP
//   Label: LAB_0050989c
// 0050989e: POP EBP
// 0050989f: POP EDI
// 005098a0: POP ESI
// 005098a1: POP EBX
// 005098a2: RET
// 005098a3: MOV dword ptr [EBX + 0x50],0x3f800000
//   Label: LAB_005098a3
// 005098aa: JMP 0x0050989c
//   XREF to: 0050989c (UNCONDITIONAL_JUMP)
// 005098ac: FILD dword ptr [EBX + 0xc]
//   Label: LAB_005098ac
// 005098af: FMUL float ptr [EBX]
// 005098b1: FMUL float ptr [EDX]
// 005098b3: FLD double ptr [0x006356fd]
//   XREF to: 006356fd (READ)
// 005098b9: FXCH
// 005098bb: FMUL ST1
// 005098bd: FADD float ptr [EDX + 0x18]
// 005098c0: FSTP float ptr [EDX + 0x18]
// 005098c3: FILD dword ptr [EBX + 0x10]
// 005098c6: FMUL float ptr [EBX]
// 005098c8: FMUL float ptr [EDX + 0x4]
// 005098cb: FMUL ST1
// 005098cd: FADD float ptr [EDX + 0x1c]
// 005098d0: FSTP float ptr [EDX + 0x1c]
// 005098d3: FILD dword ptr [EBX + 0x14]
// 005098d6: FMUL float ptr [EBX]
// 005098d8: FMUL float ptr [EDX + 0x8]
// 005098db: FMULP
// 005098dd: FADD float ptr [EDX + 0x20]
// 005098e0: FSTP float ptr [EDX + 0x20]
// 005098e3: JMP 0x00509890
//   XREF to: 00509890 (UNCONDITIONAL_JUMP)
