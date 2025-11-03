// Name: core_manpuz.cpp_FUN_0050a610
// Address: 0050a610
// Address Range: [[0050a610, 0050a8c4]]
// Convention: unknown
// Signature: undefined core_manpuz.cpp_FUN_0050a610()
// Cross-references:
//   core_manpuz.cpp_FUN_005091d0 (005091d0) at 00509239 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_manpuz_chargegemloop_red_00635775
//   TerminatedCString s_manpuz_chargegemloop_gre_00635792
//   TerminatedCString s_manpuz_chargegemloop_blu_006357b1
//   float FLOAT_006357d1 = 255
//   undefined4 DAT_00660d94
//   undefined4 DAT_00660d98
// Function calls:
//   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
//   core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
//   core_manpuz.cpp_FUN_0050a420
//   core_manpuz.cpp_FUN_0050a4f0
//   core_manpuz.cpp_FUN_0050aee0
//   core_manpuz.cpp_FUN_0050aef0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_manpuz.cpp_FUN_0050a610(undefined4 param_1, undefined4
   param_2, undefined4 param_3) */

void core_manpuz_cpp_FUN_0050a610(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  char *pcVar11;
  float *pfVar12;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  CDemonActor *in_stack_00000004;
  float in_stack_00000008;
  float in_stack_0000000c;
  CVector3f local_3c;
  CDemonActor *local_30;
  CDemonActor *local_2c;
  CDemonActor *local_28;
  CDemonActor *local_24;
  CDemonActor *local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  local_28 = (CDemonActor *)(in_stack_0000000c * FLOAT_006357d1);
  local_14 = (float)local_28 / _DAT_00660d94;
  pfVar12 = (float *)((int)&in_stack_00000004[7].previous_transform_state +
                     (int)in_stack_00000008 * 0xb8 + 0x10);
  core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
            (in_stack_00000004,&local_3c,(CVector3f *)(pfVar12 + 9));
  local_3c.x = (float)&local_3c.y;
  uVar7 = core_manpuz_cpp_FUN_0050a4f0();
  local_3c.y = (float)&local_3c.z;
  local_3c.x = (float)"manpuz-chargegemloop-green.wav";
  uVar8 = core_manpuz_cpp_FUN_0050a4f0();
  local_3c.z = (float)&local_30;
  local_3c.y = (float)"manpuz-chargegemloop-blue.wav";
  local_3c.x = (float)(pfVar12 + 0x2d);
  uVar9 = core_manpuz_cpp_FUN_0050a4f0();
  local_30 = (CDemonActor *)&local_14;
  local_3c.z = (float)&local_1c;
  pfVar12[8] = 0.0;
  local_3c.y = (float)&local_20;
  pfVar12[7] = pfVar12[8];
  local_3c.x = in_stack_00000008;
  pfVar12[6] = pfVar12[7];
  core_manpuz_cpp_FUN_0050a420();
  fVar3 = local_14 / _DAT_00660d98;
  bVar6 = 1;
  if (local_1c - *pfVar12 < -fVar3) {
    fVar2 = *pfVar12 - fVar3;
LAB_0050a740:
    *pfVar12 = fVar2;
    bVar6 = 0;
  }
  else {
    if (fVar3 < local_1c - *pfVar12) {
      fVar2 = *pfVar12 + fVar3;
      goto LAB_0050a740;
    }
    *pfVar12 = local_1c;
  }
  pfVar1 = pfVar12 + 1;
  if (-fVar3 <= local_18 - *pfVar1) {
    if (fVar3 < local_18 - *pfVar1) {
      fVar2 = *pfVar1 + fVar3;
      goto LAB_0050a76e;
    }
    *pfVar1 = local_18;
    bVar5 = 1;
  }
  else {
    fVar2 = *pfVar1 - fVar3;
LAB_0050a76e:
    *pfVar1 = fVar2;
    bVar5 = 0;
  }
  pfVar1 = pfVar12 + 2;
  if (-fVar3 <= unaff_EBP - *pfVar1) {
    if (unaff_EBP - *pfVar1 <= fVar3) {
      *pfVar1 = unaff_EBP;
      bVar4 = 1;
      goto LAB_0050a7a0;
    }
    fVar3 = *pfVar1 + fVar3;
  }
  else {
    fVar3 = *pfVar1 - fVar3;
  }
  *pfVar1 = fVar3;
  bVar4 = 0;
LAB_0050a7a0:
  if (((bool)(bVar6 & bVar5 & bVar4)) && ((uVar7 & 1 & uVar8 & uVar9) != 0)) {
    pcVar11 = in_stack_00000004[4].create_event + (int)in_stack_00000008 * 100 + 0x18;
    if (((*(int *)pcVar11 != 0) &&
        ((((*(uint *)(pcVar11 + 8) & 0x7fffffff) == 0 &&
          ((*(uint *)(pcVar11 + 4) & 0x7fffffff) == 0)) &&
         ((float)*(int *)(pcVar11 + 0x4c) == pfVar12[3])))) &&
       ((float)*(int *)(pcVar11 + 0x50) == pfVar12[4])) {
      if ((float)*(int *)(pcVar11 + 0x54) == pfVar12[5]) {
        local_2c = (CDemonActor *)in_stack_00000008;
        local_30 = in_stack_00000004;
        local_3c.z = 7.407269e-39;
        local_28 = (CDemonActor *)core_manpuz_cpp_FUN_0050aef0();
        local_2c = in_stack_00000004;
        local_30 = (CDemonActor *)0x50a87e;
        iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar10 == 0) {
          local_24 = (CDemonActor *)in_stack_00000008;
          local_28 = in_stack_00000004;
          local_2c = (CDemonActor *)0x50a8ba;
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0();
          return;
        }
        local_24 = (CDemonActor *)in_stack_00000008;
        local_28 = in_stack_00000004;
        local_2c = (CDemonActor *)0x50a88c;
        local_20 = (CDemonActor *)core_manpuz_cpp_FUN_0050aee0();
        local_24 = in_stack_00000004;
        local_28 = (CDemonActor *)0x50a896;
        iVar10 = core_manpuz_cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040();
        if (iVar10 == 0) {
          local_1c = in_stack_00000008;
          local_20 = in_stack_00000004;
          local_24 = (CDemonActor *)0x50a8a8;
          core_manpuz_cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40();
          return;
        }
      }
    }
  }
  return;
}


// Assembly code:
// 0050a610: PUSH EBX
//   Label: core_manpuz.cpp_FUN_0050a610
// 0050a611: PUSH ESI
// 0050a612: PUSH EDI
// 0050a613: PUSH EBP
// 0050a614: SUB ESP,0x2c
// 0050a617: MOV ESI,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x4] (READ)
// 0050a61b: MOV EDI,dword ptr [ESP + 0x44]
//   XREF to: Stack[0x8] (READ)
// 0050a61f: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[0xc] (READ)
// 0050a623: FMUL float ptr [0x006357d1]
//   XREF to: 006357d1 (READ)
// 0050a629: FST float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (WRITE)
// 0050a62d: FDIV float ptr [0x00660d94]
//   XREF to: 00660d94 (READ)
// 0050a633: LEA EAX,[EDI*0x4 + 0x0]
// 0050a63a: SUB EAX,EDI
// 0050a63c: SHL EAX,0x3
// 0050a63f: SUB EAX,EDI
// 0050a641: LEA EBX,[ESI + 0xaa0]
// 0050a647: SHL EAX,0x3
// 0050a64a: ADD EBX,EAX
// 0050a64c: LEA EAX,[EBX + 0x24]
// 0050a64f: PUSH EAX
// 0050a650: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x3c] (DATA)
// 0050a654: PUSH EAX
// 0050a655: PUSH ESI
// 0050a656: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (WRITE)
// 0050a65a: CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 0050a65f: ADD ESP,0xc
// 0050a662: MOV EAX,ESP
// 0050a664: PUSH EAX
// 0050a665: PUSH 0x635775
//   XREF to: 00635775 (DATA)
// 0050a66a: LEA EAX,[EBX + 0xac]
// 0050a670: PUSH EAX
// 0050a671: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0050a675: LEA EAX,[EBX + 0xc]
// 0050a678: PUSH dword ptr [EBX + 0x18]
// 0050a67b: PUSH EAX
// 0050a67c: CALL core_manpuz.cpp_FUN_0050a4f0
//   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)
// 0050a681: ADD ESP,0x18
// 0050a684: MOV EBP,EAX
// 0050a686: MOV EAX,ESP
// 0050a688: PUSH EAX
// 0050a689: PUSH 0x635792
//   XREF to: 00635792 (DATA)
// 0050a68e: LEA EAX,[EBX + 0xb0]
// 0050a694: PUSH EAX
// 0050a695: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0050a699: LEA EAX,[EBX + 0x10]
// 0050a69c: PUSH dword ptr [EBX + 0x1c]
// 0050a69f: PUSH EAX
// 0050a6a0: AND EBP,0x1
// 0050a6a3: CALL core_manpuz.cpp_FUN_0050a4f0
//   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)
// 0050a6a8: ADD ESP,0x18
// 0050a6ab: AND EBP,EAX
// 0050a6ad: MOV EAX,ESP
// 0050a6af: PUSH EAX
// 0050a6b0: PUSH 0x6357b1
//   XREF to: 006357b1 (DATA)
// 0050a6b5: LEA EAX,[EBX + 0xb4]
// 0050a6bb: PUSH EAX
// 0050a6bc: PUSH dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x14] (READ)
// 0050a6c0: LEA EAX,[EBX + 0x14]
// 0050a6c3: PUSH dword ptr [EBX + 0x20]
// 0050a6c6: PUSH EAX
// 0050a6c7: CALL core_manpuz.cpp_FUN_0050a4f0
//   XREF to: 0050a4f0 (UNCONDITIONAL_CALL)
// 0050a6cc: ADD ESP,0x18
// 0050a6cf: AND EBP,EAX
// 0050a6d1: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x24] (DATA)
// 0050a6d5: PUSH EAX
// 0050a6d6: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x2c] (DATA)
// 0050a6da: MOV dword ptr [EBX + 0x20],0x0
// 0050a6e1: PUSH EAX
// 0050a6e2: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x30] (DATA)
// 0050a6e6: FLD float ptr [EBX + 0x20]
// 0050a6e9: PUSH EAX
// 0050a6ea: FSTP float ptr [EBX + 0x1c]
// 0050a6ed: PUSH EDI
// 0050a6ee: FLD float ptr [EBX + 0x1c]
// 0050a6f1: PUSH ESI
// 0050a6f2: FSTP float ptr [EBX + 0x18]
// 0050a6f5: CALL core_manpuz.cpp_FUN_0050a420
//   XREF to: 0050a420 (UNCONDITIONAL_CALL)
// 0050a6fa: ADD ESP,0x14
// 0050a6fd: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x28] (READ)
// 0050a701: FDIV float ptr [0x00660d98]
//   XREF to: 00660d98 (READ)
// 0050a707: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x30] (READ)
// 0050a70b: FSUB float ptr [EBX]
// 0050a70d: MOV EDX,0x1
// 0050a712: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (WRITE)
// 0050a716: FST float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (WRITE)
// 0050a71a: FCHS
// 0050a71c: FCOMP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0050a720: FNSTSW AX
// 0050a722: SAHF
// 0050a723: JA 0x0050a7eb
//   XREF to: 0050a7eb (CONDITIONAL_JUMP)
// 0050a729: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x20] (READ)
// 0050a72d: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a731: FNSTSW AX
// 0050a733: SAHF
// 0050a734: JBE 0x0050a7f6
//   XREF to: 0050a7f6 (CONDITIONAL_JUMP)
// 0050a73a: FLD float ptr [EBX]
// 0050a73c: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a740: FSTP float ptr [EBX]
//   Label: LAB_0050a740
// 0050a742: XOR EAX,EAX
// 0050a744: FLD float ptr [ESP + 0x10]
//   Label: LAB_0050a744
//   XREF to: Stack[-0x2c] (READ)
// 0050a748: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a74c: LEA ECX,[EBX + 0x4]
// 0050a74f: FCHS
// 0050a751: FXCH
// 0050a753: FSUB float ptr [ECX]
// 0050a755: AND EDX,EAX
// 0050a757: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (WRITE)
// 0050a75b: FCOMP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x18] (READ)
// 0050a75f: FNSTSW AX
// 0050a761: SAHF
// 0050a762: JBE 0x0050a803
//   XREF to: 0050a803 (CONDITIONAL_JUMP)
// 0050a768: FLD float ptr [ECX]
// 0050a76a: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a76e: FSTP float ptr [ECX]
//   Label: LAB_0050a76e
// 0050a770: XOR EAX,EAX
// 0050a772: FLD float ptr [ESP + 0x18]
//   Label: LAB_0050a772
//   XREF to: Stack[-0x24] (READ)
// 0050a776: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a77a: LEA ECX,[EBX + 0x8]
// 0050a77d: FCHS
// 0050a77f: FXCH
// 0050a781: FSUB float ptr [ECX]
// 0050a783: AND EDX,EAX
// 0050a785: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (WRITE)
// 0050a789: FCOMP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x1c] (READ)
// 0050a78d: FNSTSW AX
// 0050a78f: SAHF
// 0050a790: JBE 0x0050a82b
//   XREF to: 0050a82b (CONDITIONAL_JUMP)
// 0050a796: FLD float ptr [ECX]
// 0050a798: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a79c: FSTP float ptr [ECX]
//   Label: LAB_0050a79c
// 0050a79e: XOR EAX,EAX
// 0050a7a0: AND EDX,EAX
//   Label: LAB_0050a7a0
// 0050a7a2: JZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a7a4: TEST EBP,EBP
// 0050a7a6: JZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a7a8: LEA EAX,[EDI*0x4 + 0x0]
// 0050a7af: SUB EAX,EDI
// 0050a7b1: SHL EAX,0x3
// 0050a7b4: ADD EAX,EDI
// 0050a7b6: LEA EDX,[ESI + 0x5f0]
// 0050a7bc: SHL EAX,0x2
// 0050a7bf: ADD EDX,EAX
// 0050a7c1: CMP dword ptr [EDX],0x0
// 0050a7c4: JZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a7c6: TEST dword ptr [EDX + 0x8],0x7fffffff
// 0050a7cd: JNZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a7cf: TEST dword ptr [EDX + 0x4],0x7fffffff
// 0050a7d6: JNZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a7d8: FILD dword ptr [EDX + 0x4c]
// 0050a7db: FCOMP float ptr [EBX + 0xc]
// 0050a7de: FNSTSW AX
// 0050a7e0: SAHF
// 0050a7e1: JZ 0x0050a853
//   XREF to: 0050a853 (CONDITIONAL_JUMP)
// 0050a7e3: ADD ESP,0x2c
//   Label: LAB_0050a7e3
// 0050a7e6: POP EBP
// 0050a7e7: POP EDI
// 0050a7e8: POP ESI
// 0050a7e9: POP EBX
// 0050a7ea: RET
// 0050a7eb: FLD float ptr [EBX]
//   Label: LAB_0050a7eb
// 0050a7ed: FSUB float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a7f1: JMP 0x0050a740
//   XREF to: 0050a740 (UNCONDITIONAL_JUMP)
// 0050a7f6: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0050a7f6
//   XREF to: Stack[-0x30] (READ)
// 0050a7fa: MOV dword ptr [EBX],EAX
// 0050a7fc: MOV EAX,EDX
// 0050a7fe: JMP 0x0050a744
//   XREF to: 0050a744 (UNCONDITIONAL_JUMP)
// 0050a803: FLD float ptr [ESP + 0x24]
//   Label: LAB_0050a803
//   XREF to: Stack[-0x18] (READ)
// 0050a807: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a80b: FNSTSW AX
// 0050a80d: SAHF
// 0050a80e: JBE 0x0050a81b
//   XREF to: 0050a81b (CONDITIONAL_JUMP)
// 0050a810: FLD float ptr [ECX]
// 0050a812: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a816: JMP 0x0050a76e
//   XREF to: 0050a76e (UNCONDITIONAL_JUMP)
// 0050a81b: MOV EAX,dword ptr [ESP + 0x10]
//   Label: LAB_0050a81b
//   XREF to: Stack[-0x2c] (READ)
// 0050a81f: MOV dword ptr [ECX],EAX
// 0050a821: MOV EAX,0x1
// 0050a826: JMP 0x0050a772
//   XREF to: 0050a772 (UNCONDITIONAL_JUMP)
// 0050a82b: FLD float ptr [ESP + 0x20]
//   Label: LAB_0050a82b
//   XREF to: Stack[-0x1c] (READ)
// 0050a82f: FCOMP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a833: FNSTSW AX
// 0050a835: SAHF
// 0050a836: JBE 0x0050a843
//   XREF to: 0050a843 (CONDITIONAL_JUMP)
// 0050a838: FLD float ptr [ECX]
// 0050a83a: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x14] (READ)
// 0050a83e: JMP 0x0050a79c
//   XREF to: 0050a79c (UNCONDITIONAL_JUMP)
// 0050a843: MOV EAX,dword ptr [ESP + 0x18]
//   Label: LAB_0050a843
//   XREF to: Stack[-0x24] (READ)
// 0050a847: MOV dword ptr [ECX],EAX
// 0050a849: MOV EAX,0x1
// 0050a84e: JMP 0x0050a7a0
//   XREF to: 0050a7a0 (UNCONDITIONAL_JUMP)
// 0050a853: FILD dword ptr [EDX + 0x50]
//   Label: LAB_0050a853
// 0050a856: FCOMP float ptr [EBX + 0x10]
// 0050a859: FNSTSW AX
// 0050a85b: SAHF
// 0050a85c: JNZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a85e: FILD dword ptr [EDX + 0x54]
// 0050a861: FCOMP float ptr [EBX + 0x14]
// 0050a864: FNSTSW AX
// 0050a866: SAHF
// 0050a867: JNZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a86d: PUSH EDI
// 0050a86e: PUSH ESI
// 0050a86f: CALL core_manpuz.cpp_FUN_0050aef0
//   XREF to: 0050aef0 (UNCONDITIONAL_CALL)
// 0050a874: ADD ESP,0x8
// 0050a877: PUSH EAX
// 0050a878: PUSH ESI
// 0050a879: CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
//   XREF to: 0050b040 (UNCONDITIONAL_CALL)
// 0050a87e: ADD ESP,0x8
// 0050a881: TEST EAX,EAX
// 0050a883: JZ 0x0050a8b3
//   XREF to: 0050a8b3 (CONDITIONAL_JUMP)
// 0050a885: PUSH EDI
// 0050a886: PUSH ESI
// 0050a887: CALL core_manpuz.cpp_FUN_0050aee0
//   XREF to: 0050aee0 (UNCONDITIONAL_CALL)
// 0050a88c: ADD ESP,0x8
// 0050a88f: PUSH EAX
// 0050a890: PUSH ESI
// 0050a891: CALL core_manpuz.cpp_CMansionPuzzleCircle_panelOccupied_FUN_0050b040
//   XREF to: 0050b040 (UNCONDITIONAL_CALL)
// 0050a896: ADD ESP,0x8
// 0050a899: TEST EAX,EAX
// 0050a89b: JNZ 0x0050a7e3
//   XREF to: 0050a7e3 (CONDITIONAL_JUMP)
// 0050a8a1: PUSH EDI
// 0050a8a2: PUSH ESI
// 0050a8a3: CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelRight_FUN_0050ad40
//   XREF to: 0050ad40 (UNCONDITIONAL_CALL)
// 0050a8a8: ADD ESP,0x8
// 0050a8ab: ADD ESP,0x2c
// 0050a8ae: POP EBP
// 0050a8af: POP EDI
// 0050a8b0: POP ESI
// 0050a8b1: POP EBX
// 0050a8b2: RET
// 0050a8b3: PUSH EDI
//   Label: LAB_0050a8b3
// 0050a8b4: PUSH ESI
// 0050a8b5: CALL core_manpuz.cpp_CMansionPuzzleCircle_shiftPanelLeft_FUN_0050aba0
//   XREF to: 0050aba0 (UNCONDITIONAL_CALL)
// 0050a8ba: ADD ESP,0x8
// 0050a8bd: ADD ESP,0x2c
// 0050a8c0: POP EBP
// 0050a8c1: POP EDI
// 0050a8c2: POP ESI
// 0050a8c3: POP EBX
// 0050a8c4: RET
