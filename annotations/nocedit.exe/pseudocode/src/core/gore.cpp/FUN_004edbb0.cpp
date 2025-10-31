// Name: core_gore.cpp_FUN_004edbb0
// Address: 004edbb0
// Address Range: [[004edbb0, 004edce4] [004eddc2, 004eddd4]]
// Convention: unknown
// Signature: undefined core_gore.cpp_FUN_004edbb0()
// Cross-references:
//   core_actor.cpp_CDemonActor_processMeleeHit_FUN_0040a210 (0040a210) at 0040a50c [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042b9e0 (0042b9e0) at 0042bc0a [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c180 (0042c180) at 0042c2d5 [UNCONDITIONAL_CALL]
//   core_charactr.cpp_CCharacter_FUN_0042c3c0 (0042c3c0) at 0042c4a5 [UNCONDITIONAL_CALL]
//   core_dracbrid.cpp_FUN_004858f0 (004858f0) at 00485b03 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9880 (004a9880) at 004a9915 [UNCONDITIONAL_CALL]
//   core_enemy.cpp_FUN_004a9930 (004a9930) at 004a99b4 [UNCONDITIONAL_CALL]
//   core_gabriela.cpp_FUN_004d4890 (004d4890) at 004d4bc5 [UNCONDITIONAL_CALL]
//   core_ghoul.cpp_CGhoul_FUN_004e6600 (004e6600) at 004e6d05 [UNCONDITIONAL_CALL]
//   core_imp.cpp_FUN_004f9c30 (004f9c30) at 004f9ed8 [UNCONDITIONAL_CALL]
//   core_larva.cpp_FUN_00503a20 (00503a20) at 00503b1d [UNCONDITIONAL_CALL]
//   core_pendulum.cpp_FUN_005495c0 (005495c0) at 00549a84 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_CTVBat_process_FUN_005e4210 (005e4210) at 005e46d0 [UNCONDITIONAL_CALL]
//   core_tvbat.cpp_FUN_005e5130 (005e5130) at 005e517c [UNCONDITIONAL_CALL]
//   core_zombie.cpp_CZombie_process_FUN_005f9470 (005f9470) at 005f9d3f [UNCONDITIONAL_CALL]
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_gore.cpp_FUN_004edaa0
//   crt_math.c_atan2_FUN_006013b1

#include "nocturne.h"

/* Signature: undefined1 core_gore.cpp_FUN_004edbb0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3, undefined4 param_4, undefined4 param_5) */

void core_gore_cpp_FUN_004edbb0(void)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  float10 fVar3;
  float10 extraout_ST1;
  float *in_stack_0000000c;
  int in_stack_00000010;
  float in_stack_00000014;
  CMatrix3x3f local_74;
  float local_50;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  CVector3f local_34;
  float local_28;
  float local_24;
  float local_1c;
  float local_18;
  float fStack_14;
  
  if (in_stack_00000014 != 2.8026e-45) {
    if (in_stack_0000000c == (float *)0x0) {
      iVar2 = 0;
      if (0 < in_stack_00000010) {
        do {
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
    else {
      local_1c = SQRT(in_stack_0000000c[2] * in_stack_0000000c[2] +
                      *in_stack_0000000c * *in_stack_0000000c +
                      in_stack_0000000c[1] * in_stack_0000000c[1]);
      if (&local_40 != in_stack_0000000c) {
        local_40 = *in_stack_0000000c;
        local_3c = in_stack_0000000c[1];
        local_38 = in_stack_0000000c[2];
      }
      fVar1 = SQRT(local_38 * local_38 + local_40 * local_40 + local_3c * local_3c);
      if (fVar1 <= 0.0) {
        local_3c = 0.0;
        local_40 = 0.0;
        local_38 = 0.0;
      }
      else {
        fVar1 = 1.0 / fVar1;
        local_40 = local_40 * fVar1;
        local_3c = local_3c * fVar1;
        local_38 = local_38 * fVar1;
      }
      crt_math_c_atan2_FUN_006013b1
                ((float10)local_3c,
                 SQRT((float10)local_40 * (float10)local_40 + (float10)local_38 * (float10)local_38)
                );
      local_24 = 0.0;
      fVar3 = crt_math_c_atan2_FUN_006013b1((float10)local_44,(float10)local_3c);
      iVar2 = 0;
      local_34.y = (float)-extraout_ST1;
      local_34.z = (float)fVar3;
      if (0 < in_stack_00000010) {
        do {
          local_3c = local_34.y;
          local_38 = local_34.z;
          local_34.x = local_28;
          local_1c = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_38 = local_1c + local_38;
          local_18 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.7853982,0.7853982);
          local_34.y = local_18 + local_34.y;
          core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30(&local_74,&local_34);
          local_34.y = local_74.m[1].x;
          local_34.z = local_74.m[2].x;
          local_28 = local_50;
          core_actor_cpp_getRandomFloat_FUN_0040cc10(-0.5,0.5);
          local_44 = local_34.z * fStack_14;
          local_40 = local_28 * fStack_14;
          local_3c = local_24 * fStack_14;
          if (&local_34.z != &local_44) {
            local_34.z = local_44;
            local_28 = local_40;
            local_24 = local_3c;
          }
          local_74.m[0].x = in_stack_00000014;
          iVar2 = iVar2 + 1;
          core_gore_cpp_FUN_004edaa0();
        } while (iVar2 < in_stack_00000010);
      }
    }
  }
  return;
}


// Assembly code:
// 004edbb0: PUSH EBX
//   Label: core_gore.cpp_FUN_004edbb0
// 004edbb1: PUSH ESI
// 004edbb2: PUSH EDI
// 004edbb3: PUSH EBP
// 004edbb4: MOV EBP,ESP
// 004edbb6: SUB ESP,0x64
// 004edbb9: AND ESP,0xfffffff8
// 004edbbc: MOV EDX,dword ptr [EBP + 0x1c]
// 004edbbf: MOV ESI,dword ptr [EBP + 0x20]
// 004edbc2: MOV EDI,dword ptr [EBP + 0x24]
// 004edbc5: CMP EDI,0x2
// 004edbc8: JZ 0x004edbf0
//   XREF to: 004edbf0 (CONDITIONAL_JUMP)
// 004edbca: TEST EDX,EDX
// 004edbcc: JNZ 0x004edbf7
//   XREF to: 004edbf7 (CONDITIONAL_JUMP)
// 004edbce: XOR EBX,EBX
// 004edbd0: TEST ESI,ESI
// 004edbd2: JLE 0x004edbf0
//   XREF to: 004edbf0 (CONDITIONAL_JUMP)
// 004edbd4: PUSH EDI
//   Label: LAB_004edbd4
// 004edbd5: PUSH 0x0
// 004edbd7: MOV EAX,dword ptr [EBP + 0x18]
// 004edbda: PUSH EAX
// 004edbdb: MOV EDX,dword ptr [EBP + 0x14]
// 004edbde: PUSH EDX
// 004edbdf: INC EBX
// 004edbe0: CALL core_gore.cpp_FUN_004edaa0
//   XREF to: 004edaa0 (UNCONDITIONAL_CALL)
// 004edbe5: ADD ESP,0x10
// 004edbe8: CMP EBX,ESI
// 004edbea: JL 0x004edbd4
//   XREF to: 004edbd4 (CONDITIONAL_JUMP)
// 004edbec: LEA EAX,[EAX]
// 004edbf0: MOV ESP,EBP
//   Label: LAB_004edbf0
// 004edbf2: POP EBP
// 004edbf3: POP EDI
// 004edbf4: POP ESI
// 004edbf5: POP EBX
// 004edbf6: RET
// 004edbf7: FLD float ptr [EDX + 0x4]
//   Label: LAB_004edbf7
// 004edbfa: FMUL ST0
// 004edbfc: FLD float ptr [EDX]
// 004edbfe: FMUL ST0
// 004edc00: FADDP
// 004edc02: FLD float ptr [EDX + 0x8]
// 004edc05: FMUL ST0
// 004edc07: FADDP
// 004edc09: FSQRT
// 004edc0b: LEA EAX,[ESP + 0x38]
// 004edc0f: FSTP float ptr [ESP + 0x5c]
// 004edc13: CMP EAX,EDX
// 004edc15: JZ 0x004edc2b
//   XREF to: 004edc2b (CONDITIONAL_JUMP)
// 004edc17: MOV EAX,dword ptr [EDX]
// 004edc19: MOV dword ptr [ESP + 0x38],EAX
// 004edc1d: MOV EAX,dword ptr [EDX + 0x4]
// 004edc20: MOV dword ptr [ESP + 0x3c],EAX
// 004edc24: MOV EAX,dword ptr [EDX + 0x8]
// 004edc27: MOV dword ptr [ESP + 0x40],EAX
// 004edc2b: FLD float ptr [ESP + 0x3c]
//   Label: LAB_004edc2b
// 004edc2f: FMUL ST0
// 004edc31: FLD float ptr [ESP + 0x38]
// 004edc35: FMUL ST0
// 004edc37: FADDP
// 004edc39: FLD float ptr [ESP + 0x40]
// 004edc3d: FMUL ST0
// 004edc3f: FADDP
// 004edc41: FSQRT
// 004edc43: FST float ptr [ESP]
// 004edc46: FLDZ
// 004edc48: FCOMPP
// 004edc4a: FNSTSW AX
// 004edc4c: SAHF
// 004edc4d: JNC 0x004eddc2
//   XREF to: 004eddc2 (CONDITIONAL_JUMP)
// 004edc53: FLD1
// 004edc55: FLD float ptr [ESP + 0x38]
// 004edc59: FXCH
// 004edc5b: FDIV float ptr [ESP]
// 004edc5e: FXCH
// 004edc60: FMUL ST1
// 004edc62: FLD float ptr [ESP + 0x3c]
// 004edc66: FMUL ST2
// 004edc68: FLD float ptr [ESP + 0x40]
// 004edc6c: FMULP ST3
// 004edc6e: FXCH
// 004edc70: FSTP float ptr [ESP + 0x38]
// 004edc74: FSTP float ptr [ESP + 0x3c]
// 004edc78: FSTP float ptr [ESP + 0x40]
// 004edc7c: FLD float ptr [ESP + 0x40]
//   Label: LAB_004edc7c
// 004edc80: FMUL ST0
// 004edc82: FLD float ptr [ESP + 0x38]
// 004edc86: FMUL ST0
// 004edc88: FADDP
// 004edc8a: FSQRT
// 004edc8c: FLD float ptr [ESP + 0x3c]
// 004edc90: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004edc95: FLD float ptr [ESP + 0x40]
// 004edc99: XOR EAX,EAX
// 004edc9b: FLD float ptr [ESP + 0x38]
// 004edc9f: MOV dword ptr [ESP + 0x58],EAX
// 004edca3: CALL crt_math.c_atan2_FUN_006013b1
//   XREF to: 006013b1 (UNCONDITIONAL_CALL)
// 004edca8: XOR EBX,EBX
// 004edcaa: FXCH
// 004edcac: FCHS
// 004edcae: FSTP float ptr [ESP + 0x50]
// 004edcb2: FSTP float ptr [ESP + 0x54]
// 004edcb6: TEST ESI,ESI
// 004edcb8: JLE 0x004edbf0
//   XREF to: 004edbf0 (CONDITIONAL_JUMP)
// 004edcbe: MOV EAX,dword ptr [ESP + 0x50]
//   Label: LAB_004edcbe
// 004edcc2: MOV dword ptr [ESP + 0x44],EAX
// 004edcc6: MOV EAX,dword ptr [ESP + 0x54]
// 004edcca: PUSH 0x3f490fdb
// 004edccf: MOV dword ptr [ESP + 0x4c],EAX
// 004edcd3: MOV EAX,dword ptr [ESP + 0x5c]
// 004edcd7: PUSH 0xbf490fdb
// 004edcdc: MOV dword ptr [ESP + 0x54],EAX
// 004edce0: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 004eddc2: XOR EDX,EDX
//   Label: LAB_004eddc2
// 004eddc4: MOV dword ptr [ESP + 0x3c],EDX
// 004eddc8: MOV dword ptr [ESP + 0x38],EDX
// 004eddcc: MOV dword ptr [ESP + 0x40],EDX
// 004eddd0: JMP 0x004edc7c
//   XREF to: 004edc7c (UNCONDITIONAL_JUMP)
