// Name: core_flies.cpp_FUN_004cbf00
// Address: 004cbf00
// Address Range: [[004cbf00, 004cc221]]
// Convention: unknown
// Signature: undefined core_flies.cpp_FUN_004cbf00()
// Globals:
//   float FLOAT_0062a422 = 0.5
//   double DOUBLE_0062a426 = 2
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408ea0
//   core_flies.cpp_FUN_004cc760
//   core_flies.cpp_FUN_004cc820
//   crt_math.c_floor_FUN_005feb90

#include "nocturne.h"

/* WARNING: Type propagation algorithm not settling */
/* Signature: undefined1 actors_other_flies.cpp_FUN_004cbf00(undefined4 param_1, undefined4 param_2)
    */

void core_flies_cpp_FUN_004cbf00(void)

{
  float fVar1;
  int iVar2;
  float fVar3;
  CVector3f *pCVar4;
  int *piVar5;
  undefined4 extraout_EAX;
  float *pfVar6;
  undefined4 extraout_EDX;
  float *pfVar7;
  int iVar8;
  BADSPACEBASE *in_ESP;
  float10 in_ST0;
  float10 extraout_ST0;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  int iStack_14;
  
  if (in_stack_00000004[0x1f].create_prob != 0.0) {
    iVar8 = in_stack_00000004[0x1f].runtime_state;
    if (iVar8 != 0) {
      local_38 = *(float *)(iVar8 + 0x20) - (in_stack_00000004->location).position.x;
      local_34 = *(float *)(iVar8 + 0x24) - (in_stack_00000004->location).position.y;
      local_30 = *(float *)(iVar8 + 0x28) - (in_stack_00000004->location).position.z;
      if (0.0 < SQRT(local_30 * local_30 + local_38 * local_38 + local_34 * local_34)) {
        pCVar4 = core_actor_cpp_CDemonActor_FUN_00408ea0(in_stack_00000004);
        local_40 = pCVar4->x * FLOAT_0062a422;
        local_3c = pCVar4->y * FLOAT_0062a422;
        local_38 = FLOAT_0062a422 * pCVar4->z;
        if (&local_34 != &local_40) {
          local_34 = local_40;
          local_30 = local_3c;
          local_2c = local_38;
        }
        iVar8 = 0;
        if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
          pCVar4 = (CVector3f *)(in_stack_00000004[1].actor_name + 0x14);
          piVar5 = &in_stack_00000004[1].location.area_id;
          do {
            pCVar4->x = pCVar4->x - local_34;
            pCVar4->y = pCVar4->y - local_30;
            fVar1 = pCVar4[1].x;
            pCVar4->z = pCVar4->z - local_2c;
            pCVar4[1].x = fVar1 - local_34;
            *(float *)((int)(pCVar4 + 1) + 4) = *(float *)((int)(pCVar4 + 1) + 4) - local_30;
            *(float *)((int)(pCVar4 + 1) + 8) = *(float *)((int)(pCVar4 + 1) + 8) - local_2c;
            *piVar5 = (int)((float)*piVar5 - local_34);
            piVar5[1] = (int)((float)piVar5[1] - local_30);
            piVar5[2] = (int)((float)piVar5[2] - local_2c);
            piVar5[3] = (int)((float)piVar5[3] - local_34);
            piVar5[4] = (int)((float)piVar5[4] - local_30);
            iVar8 = iVar8 + 1;
            piVar5[5] = (int)((float)piVar5[5] - local_2c);
            pCVar4 = (CVector3f *)((int)(pCVar4 + 4) + 4);
            piVar5 = piVar5 + 0xd;
          } while (iVar8 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
        }
      }
      iVar8 = in_stack_00000004[0x1f].runtime_state;
      (in_stack_00000004->location).position.x = *(float *)(iVar8 + 0x20);
      (in_stack_00000004->location).position.y = *(float *)(iVar8 + 0x24);
      (in_stack_00000004->location).position.z = *(float *)(iVar8 + 0x28);
      (in_stack_00000004->location).area_id = *(int *)(iVar8 + 0x2c);
    }
    if ((0 < in_stack_00000004[0x1f].health) &&
       (fVar1 = (float)in_stack_00000004[0x1f].field6_0x68 - in_stack_00000008,
       in_stack_00000004[0x1f].field6_0x68 = (int)fVar1, fVar1 <= 0.0)) {
      if (*(int *)(in_stack_00000004[1].actor_name + 0xc) < 200) {
        in_ST0 = (float10)core_flies_cpp_FUN_004cc760();
        iVar8 = in_stack_00000004[0x1f].field7_0x6c;
        iVar2 = in_stack_00000004[0x1f].health;
        *(int *)(in_stack_00000004[1].actor_name + 0xc) =
             *(int *)(in_stack_00000004[1].actor_name + 0xc) + 1;
        in_stack_00000004[0x1f].field6_0x68 = iVar8;
        in_stack_00000004[0x1f].health = iVar2 + -1;
      }
      else {
        in_stack_00000004[0x1f].health = 0;
      }
    }
    fVar1 = (float)DOUBLE_0062a426;
    iStack_14 = 0;
    if (0 < *(int *)(in_stack_00000004[1].actor_name + 0xc)) {
      pfVar7 = (float *)(in_stack_00000004[1].actor_name + 0x10);
      do {
        fVar3 = *pfVar7 + in_stack_00000008 * fVar1;
        *pfVar7 = fVar3;
        if (1.0 <= fVar3) {
          crt_math_c_floor_FUN_005feb90((double)in_ST0);
          *pfVar7 = *pfVar7 - (float)(double)CONCAT44(extraout_EDX,extraout_EAX);
          if (pfVar7 + 1 != pfVar7 + 4) {
            pfVar7[1] = pfVar7[4];
            pfVar7[2] = pfVar7[5];
            pfVar7[3] = pfVar7[6];
          }
          if (pfVar7 + 4 != pfVar7 + 7) {
            pfVar7[4] = pfVar7[7];
            pfVar7[5] = pfVar7[8];
            pfVar7[6] = pfVar7[9];
          }
          if (pfVar7 + 7 != pfVar7 + 10) {
            pfVar7[7] = pfVar7[10];
            pfVar7[8] = pfVar7[0xb];
            pfVar7[9] = pfVar7[0xc];
          }
          pfVar6 = (float *)core_flies_cpp_FUN_004cc820();
          in_ST0 = extraout_ST0;
          if (pfVar7 + 10 != pfVar6) {
            pfVar7[10] = *pfVar6;
            pfVar7[0xb] = pfVar6[1];
            pfVar7[0xc] = pfVar6[2];
          }
        }
        pfVar7 = pfVar7 + 0xd;
        iStack_14 = iStack_14 + 1;
      } while (iStack_14 < *(int *)(in_stack_00000004[1].actor_name + 0xc));
    }
  }
  return;
}


// Assembly code:
// 004cbf00: PUSH EBX
//   Label: core_flies.cpp_FUN_004cbf00
// 004cbf01: PUSH ESI
// 004cbf02: PUSH EDI
// 004cbf03: PUSH EBP
// 004cbf04: MOV EBP,ESP
// 004cbf06: SUB ESP,0x44
// 004cbf09: AND ESP,0xfffffff8
// 004cbf0c: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004cbf0f: CMP dword ptr [EDI + 0x2a1c],0x0
// 004cbf16: JZ 0x004cbfbd
//   XREF to: 004cbfbd (CONDITIONAL_JUMP)
// 004cbf1c: MOV ECX,dword ptr [EDI + 0x2a08]
// 004cbf22: TEST ECX,ECX
// 004cbf24: JNZ 0x004cbfc4
//   XREF to: 004cbfc4 (CONDITIONAL_JUMP)
// 004cbf2a: CMP dword ptr [EDI + 0x2a0c],0x0
//   Label: LAB_004cbf2a
// 004cbf31: JLE 0x004cbf67
//   XREF to: 004cbf67 (CONDITIONAL_JUMP)
// 004cbf33: FLD float ptr [EDI + 0x2a10]
// 004cbf39: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004cbf3c: FST float ptr [EDI + 0x2a10]
// 004cbf42: FLDZ
// 004cbf44: FCOMPP
// 004cbf46: FNSTSW AX
// 004cbf48: SAHF
// 004cbf49: JC 0x004cbf67
//   XREF to: 004cbf67 (CONDITIONAL_JUMP)
// 004cbf4b: MOV ESI,dword ptr [EDI + 0x164]
// 004cbf51: CMP ESI,0xc8
// 004cbf57: JL 0x004cc145
//   XREF to: 004cc145 (CONDITIONAL_JUMP)
// 004cbf5d: MOV dword ptr [EDI + 0x2a0c],0x0
// 004cbf67: FLD float ptr [EBP + 0x18]
//   Label: LAB_004cbf67
//   XREF to: Stack[0x8] (READ)
// 004cbf6a: FLD ST0
// 004cbf6c: FMUL double ptr [0x0062a426]
//   XREF to: 0062a426 (READ)
// 004cbf72: XOR EBX,EBX
// 004cbf74: MOV ESI,dword ptr [EDI + 0x164]
// 004cbf7a: MOV dword ptr [ESP + 0x40],EBX
//   XREF to: Stack[-0x18] (WRITE)
// 004cbf7e: FSTP ST1
// 004cbf80: FSTP float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (WRITE)
// 004cbf83: TEST ESI,ESI
// 004cbf85: JLE 0x004cbfbd
//   XREF to: 004cbfbd (CONDITIONAL_JUMP)
// 004cbf87: LEA EBX,[EDI + 0x168]
// 004cbf8d: FLD1
//   Label: LAB_004cbf8d
// 004cbf8f: FLD float ptr [EBX]
// 004cbf91: FADD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004cbf94: MOV ESI,EBX
// 004cbf96: FST float ptr [EBX]
// 004cbf98: FSTP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 004cbf9b: FCOMP double ptr [ESP]
//   XREF to: Stack[-0x58] (DATA)
// 004cbf9e: FNSTSW AX
// 004cbfa0: SAHF
// 004cbfa1: JBE 0x004cc17a
//   XREF to: 004cc17a (CONDITIONAL_JUMP)
// 004cbfa7: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_004cbfa7
//   XREF to: Stack[-0x18] (READ)
// 004cbfab: ADD EBX,0x34
// 004cbfae: INC EAX
// 004cbfaf: MOV EDX,dword ptr [EDI + 0x164]
// 004cbfb5: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 004cbfb9: CMP EAX,EDX
// 004cbfbb: JL 0x004cbf8d
//   XREF to: 004cbf8d (CONDITIONAL_JUMP)
// 004cbfbd: MOV ESP,EBP
//   Label: LAB_004cbfbd
// 004cbfbf: POP EBP
// 004cbfc0: POP EDI
// 004cbfc1: POP ESI
// 004cbfc2: POP EBX
// 004cbfc3: RET
// 004cbfc4: MOV EDX,ECX
//   Label: LAB_004cbfc4
// 004cbfc6: LEA EAX,[EDI + 0x20]
// 004cbfc9: FLD float ptr [EDX + 0x20]
// 004cbfcc: FSUB float ptr [EAX]
// 004cbfce: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (WRITE)
// 004cbfd2: FLD float ptr [EDX + 0x24]
// 004cbfd5: FSUB float ptr [EAX + 0x4]
// 004cbfd8: FST float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (WRITE)
// 004cbfdc: FMUL float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 004cbfe0: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 004cbfe4: FMUL ST0
// 004cbfe6: FLD float ptr [EDX + 0x28]
// 004cbfe9: FSUB float ptr [EAX + 0x8]
// 004cbfec: FXCH
// 004cbfee: FADDP ST2,ST0
// 004cbff0: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (WRITE)
// 004cbff4: FMUL float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004cbff8: FADDP
// 004cbffa: FSQRT
// 004cbffc: FLDZ
// 004cbffe: FCOMPP
// 004cc000: FNSTSW AX
// 004cc002: SAHF
// 004cc003: JNC 0x004cc120
//   XREF to: 004cc120 (CONDITIONAL_JUMP)
// 004cc009: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x38] (DATA)
// 004cc00d: PUSH EAX
// 004cc00e: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x2c] (DATA)
// 004cc012: PUSH EAX
// 004cc013: PUSH EDI
// 004cc014: CALL core_actor.cpp_CDemonActor_FUN_00408ea0
//   XREF to: 00408ea0 (UNCONDITIONAL_CALL)
// 004cc019: FLD float ptr [0x0062a422]
//   XREF to: 0062a422 (READ)
// 004cc01f: FLD float ptr [EAX]
// 004cc021: FMUL ST1
// 004cc023: ADD ESP,0xc
// 004cc026: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (WRITE)
// 004cc02a: FLD float ptr [EAX + 0x4]
// 004cc02d: FMUL ST1
// 004cc02f: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (WRITE)
// 004cc033: FMUL float ptr [EAX + 0x8]
// 004cc036: LEA EDX,[ESP + 0x14]
//   XREF to: Stack[-0x44] (DATA)
// 004cc03a: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x38] (DATA)
// 004cc03e: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (WRITE)
// 004cc042: CMP EAX,EDX
// 004cc044: JZ 0x004cc05e
//   XREF to: 004cc05e (CONDITIONAL_JUMP)
// 004cc046: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x44] (READ)
// 004cc04a: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004cc04e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x40] (READ)
// 004cc052: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 004cc056: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x3c] (READ)
// 004cc05a: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 004cc05e: MOV ESI,dword ptr [EDI + 0x164]
//   Label: LAB_004cc05e
// 004cc064: XOR EBX,EBX
// 004cc066: TEST ESI,ESI
// 004cc068: JLE 0x004cc120
//   XREF to: 004cc120 (CONDITIONAL_JUMP)
// 004cc06e: LEA EAX,[EDI + 0x184]
// 004cc074: LEA EDX,[EDI + 0x16c]
// 004cc07a: FLD float ptr [EDX]
//   Label: LAB_004cc07a
// 004cc07c: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 004cc080: FLD float ptr [EDX + 0x4]
// 004cc083: FXCH
// 004cc085: FSTP float ptr [EDX]
// 004cc087: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 004cc08b: FLD float ptr [EDX + 0x8]
// 004cc08e: FXCH
// 004cc090: FSTP float ptr [EDX + 0x4]
// 004cc093: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004cc097: FLD float ptr [EDX + 0xc]
// 004cc09a: FXCH
// 004cc09c: FSTP float ptr [EDX + 0x8]
// 004cc09f: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 004cc0a3: FLD float ptr [EDX + 0x10]
// 004cc0a6: FXCH
// 004cc0a8: FSTP float ptr [EDX + 0xc]
// 004cc0ab: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 004cc0af: FLD float ptr [EDX + 0x14]
// 004cc0b2: FXCH
// 004cc0b4: FSTP float ptr [EDX + 0x10]
// 004cc0b7: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004cc0bb: ADD EAX,0x34
// 004cc0be: FSTP float ptr [EDX + 0x14]
// 004cc0c1: FLD float ptr [EAX + -0x34]
// 004cc0c4: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 004cc0c8: FLD float ptr [EAX + -0x30]
// 004cc0cb: FXCH
// 004cc0cd: FSTP float ptr [EAX + -0x34]
// 004cc0d0: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 004cc0d4: FLD float ptr [EAX + -0x2c]
// 004cc0d7: FXCH
// 004cc0d9: FSTP float ptr [EAX + -0x30]
// 004cc0dc: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004cc0e0: FLD float ptr [EAX + -0x28]
// 004cc0e3: FXCH
// 004cc0e5: FSTP float ptr [EAX + -0x2c]
// 004cc0e8: FSUB float ptr [ESP + 0x20]
//   XREF to: Stack[-0x38] (READ)
// 004cc0ec: FLD float ptr [EAX + -0x24]
// 004cc0ef: FXCH
// 004cc0f1: FSTP float ptr [EAX + -0x28]
// 004cc0f4: FSUB float ptr [ESP + 0x24]
//   XREF to: Stack[-0x34] (READ)
// 004cc0f8: FLD float ptr [EAX + -0x20]
// 004cc0fb: FXCH
// 004cc0fd: FSTP float ptr [EAX + -0x24]
// 004cc100: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x30] (READ)
// 004cc104: INC EBX
// 004cc105: FSTP float ptr [EAX + -0x20]
// 004cc108: MOV ECX,dword ptr [EDI + 0x164]
// 004cc10e: ADD EDX,0x34
// 004cc111: CMP EBX,ECX
// 004cc113: JL 0x004cc07a
//   XREF to: 004cc07a (CONDITIONAL_JUMP)
// 004cc119: LEA EAX,[EAX]
// 004cc11f: NOP
// 004cc120: MOV EAX,dword ptr [EDI + 0x2a08]
//   Label: LAB_004cc120
// 004cc126: LEA EDX,[EDI + 0x20]
// 004cc129: MOV ECX,dword ptr [EAX + 0x20]
// 004cc12c: MOV dword ptr [EDX],ECX
// 004cc12e: MOV ECX,dword ptr [EAX + 0x24]
// 004cc131: MOV dword ptr [EDX + 0x4],ECX
// 004cc134: MOV ECX,dword ptr [EAX + 0x28]
// 004cc137: MOV dword ptr [EDX + 0x8],ECX
// 004cc13a: MOV EAX,dword ptr [EAX + 0x2c]
// 004cc13d: MOV dword ptr [EDX + 0xc],EAX
// 004cc140: JMP 0x004cbf2a
//   XREF to: 004cbf2a (UNCONDITIONAL_JUMP)
// 004cc145: PUSH ESI
//   Label: LAB_004cc145
// 004cc146: PUSH EDI
// 004cc147: CALL core_flies.cpp_FUN_004cc760
//   XREF to: 004cc760 (UNCONDITIONAL_CALL)
// 004cc14c: FLD float ptr [EDI + 0x2a14]
// 004cc152: MOV EDX,dword ptr [EDI + 0x164]
// 004cc158: ADD ESP,0x8
// 004cc15b: INC EDX
// 004cc15c: MOV ECX,dword ptr [EDI + 0x2a0c]
// 004cc162: MOV dword ptr [EDI + 0x164],EDX
// 004cc168: DEC ECX
// 004cc169: FSTP float ptr [EDI + 0x2a10]
// 004cc16f: MOV dword ptr [EDI + 0x2a0c],ECX
// 004cc175: JMP 0x004cbf67
//   XREF to: 004cbf67 (UNCONDITIONAL_JUMP)
// 004cc17a: MOV ECX,dword ptr [ESP + 0x4]
//   Label: LAB_004cc17a
//   XREF to: Stack[-0x54] (READ)
// 004cc17e: PUSH ECX
// 004cc17f: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x58] (READ)
// 004cc183: PUSH EAX
// 004cc184: CALL crt_math.c_floor_FUN_005feb90
//   XREF to: 005feb90 (UNCONDITIONAL_CALL)
// 004cc189: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004cc18d: MOV dword ptr [ESP + 0x44],EDX
//   XREF to: Stack[-0x1c] (WRITE)
// 004cc191: FLD double ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 004cc195: LEA EAX,[EBX + 0x4]
// 004cc198: ADD ESP,0x8
// 004cc19b: FLD float ptr [EBX]
// 004cc19d: FXCH
// 004cc19f: FSUBR ST0,ST1
// 004cc1a1: LEA EDX,[EBX + 0x10]
// 004cc1a4: FSTP ST1
// 004cc1a6: FSTP float ptr [EBX]
// 004cc1a8: CMP EAX,EDX
// 004cc1aa: JZ 0x004cc1bc
//   XREF to: 004cc1bc (CONDITIONAL_JUMP)
// 004cc1ac: MOV ECX,dword ptr [EDX]
// 004cc1ae: MOV dword ptr [EAX],ECX
// 004cc1b0: MOV ECX,dword ptr [EDX + 0x4]
// 004cc1b3: MOV dword ptr [EAX + 0x4],ECX
// 004cc1b6: MOV ECX,dword ptr [EDX + 0x8]
// 004cc1b9: MOV dword ptr [EAX + 0x8],ECX
// 004cc1bc: LEA EAX,[ESI + 0x10]
//   Label: LAB_004cc1bc
// 004cc1bf: LEA EDX,[ESI + 0x1c]
// 004cc1c2: CMP EAX,EDX
// 004cc1c4: JZ 0x004cc1d6
//   XREF to: 004cc1d6 (CONDITIONAL_JUMP)
// 004cc1c6: MOV ECX,dword ptr [EDX]
// 004cc1c8: MOV dword ptr [EAX],ECX
// 004cc1ca: MOV ECX,dword ptr [EDX + 0x4]
// 004cc1cd: MOV dword ptr [EAX + 0x4],ECX
// 004cc1d0: MOV ECX,dword ptr [EDX + 0x8]
// 004cc1d3: MOV dword ptr [EAX + 0x8],ECX
// 004cc1d6: LEA EDX,[ESI + 0x1c]
//   Label: LAB_004cc1d6
// 004cc1d9: LEA EAX,[ESI + 0x28]
// 004cc1dc: CMP EDX,EAX
// 004cc1de: JZ 0x004cc1f0
//   XREF to: 004cc1f0 (CONDITIONAL_JUMP)
// 004cc1e0: MOV ECX,dword ptr [EAX]
// 004cc1e2: MOV dword ptr [EDX],ECX
// 004cc1e4: MOV ECX,dword ptr [EAX + 0x4]
// 004cc1e7: MOV dword ptr [EDX + 0x4],ECX
// 004cc1ea: MOV ECX,dword ptr [EAX + 0x8]
// 004cc1ed: MOV dword ptr [EDX + 0x8],ECX
// 004cc1f0: LEA EAX,[ESI + 0x1c]
//   Label: LAB_004cc1f0
// 004cc1f3: PUSH EAX
// 004cc1f4: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x50] (DATA)
// 004cc1f8: PUSH EAX
// 004cc1f9: PUSH EDI
// 004cc1fa: ADD ESI,0x28
// 004cc1fd: CALL core_flies.cpp_FUN_004cc820
//   XREF to: 004cc820 (UNCONDITIONAL_CALL)
// 004cc202: ADD ESP,0xc
// 004cc205: CMP ESI,EAX
// 004cc207: JZ 0x004cbfa7
//   XREF to: 004cbfa7 (CONDITIONAL_JUMP)
// 004cc20d: MOV EDX,dword ptr [EAX]
// 004cc20f: MOV dword ptr [ESI],EDX
// 004cc211: MOV EDX,dword ptr [EAX + 0x4]
// 004cc214: MOV dword ptr [ESI + 0x4],EDX
// 004cc217: MOV EDX,dword ptr [EAX + 0x8]
// 004cc21a: MOV dword ptr [ESI + 0x8],EDX
// 004cc21d: JMP 0x004cbfa7
//   XREF to: 004cbfa7 (UNCONDITIONAL_JUMP)
