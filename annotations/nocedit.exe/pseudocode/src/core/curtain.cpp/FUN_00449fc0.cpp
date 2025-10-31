// Name: core_curtain.cpp_FUN_00449fc0
// Address: 00449fc0
// Address Range: [[00449fc0, 0044a912]]
// Convention: unknown
// Signature: undefined core_curtain.cpp_FUN_00449fc0()
// Cross-references:
//   core_curtain.cpp_FUN_0044a920 (0044a920) at 0044b043 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_00619c0a
//   undefined4 DAT_00619c12
//   undefined4 DAT_008879bc
//   CVector3f[100] DAT_008879c0
//   undefined4 DAT_008879c4
//   undefined4 DAT_008879c8
//   SCollisionInfo[100] DAT_00887e70
//   undefined4 DAT_00887e88
//   undefined4 DAT_00887e8c
//   undefined4 DAT_00887eb4

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_curtain.cpp_FUN_00449fc0(undefined4 param_1, undefined4
   param_2) */

void core_curtain_cpp_FUN_00449fc0(void)

{
  float *pfVar1;
  float *pfVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  int iVar10;
  BADSPACEBASE *in_ESP;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  int in_stack_00000004;
  int in_stack_00000008;
  float local_14c [3];
  float local_140 [15];
  float local_104 [2];
  float local_fc;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4 [40];
  int local_34;
  float *local_1c;
  int local_18;
  
  if ((*(int *)(in_stack_00000004 + 0x65b2c) != 0) &&
     (*(float *)(in_stack_00000008 + 0x24) < *(float *)(in_stack_00000004 + 0x65b28))) {
    *(undefined4 *)(in_stack_00000008 + 0x34) = 0;
    *(undefined4 *)(in_stack_00000008 + 0x30) = *(undefined4 *)(in_stack_00000008 + 0x34);
    *(undefined4 *)(in_stack_00000008 + 0x2c) = *(undefined4 *)(in_stack_00000008 + 0x30);
    *(undefined4 *)(in_stack_00000008 + 0x24) = *(undefined4 *)(in_stack_00000004 + 0x65b28);
    *(undefined4 *)(in_stack_00000008 + 0x6c) = 1;
  }
  local_18 = 0;
  if (0 < DAT_008879bc) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar11 = 0;
    pfVar13 = (float *)(in_stack_00000004 + 0x1c728);
    local_1c = &DAT_00887e70[0].cylinder_top_y;
    do {
      if (((((float)_DAT_00619c0a <= *(float *)(in_stack_00000008 + 0x30)) ||
           (fVar6 = *(float *)((int)&DAT_008879c0[0].y + iVar11) +
                    DAT_00887e70[local_18].cylinder_bottom_y,
           fVar6 <= *(float *)(in_stack_00000008 + 0x24))) ||
          (*(float *)(in_stack_00000008 + 0x24) <= *(float *)((int)&DAT_008879c0[0].y + iVar11))) ||
         (fVar5 = *(float *)(in_stack_00000008 + 0x20) -
                  *(float *)((int)&DAT_008879c0[0].x + iVar11),
         fVar3 = *(float *)(in_stack_00000008 + 0x28) - *(float *)((int)&DAT_008879c0[0].z + iVar11)
         , DAT_00887e70[local_18].cylinder_top_y <= SQRT(fVar3 * fVar3 + fVar5 * fVar5))) {
        if ((*(float *)((int)&DAT_008879c0[0].y + iVar11) <= *(float *)(in_stack_00000008 + 0x24))
           && (fVar6 = *(float *)((int)&DAT_008879c0[0].y + iVar11) +
                       DAT_00887e70[local_18].cylinder_bottom_y,
              *(float *)(in_stack_00000008 + 0x24) <= fVar6)) {
          local_104[0] = *(float *)(in_stack_00000008 + 0x20) -
                         *(float *)((int)&DAT_008879c0[0].x + iVar11);
          local_fc = *(float *)(in_stack_00000008 + 0x28) -
                     *(float *)((int)&DAT_008879c0[0].z + iVar11);
          fVar5 = SQRT(local_104[0] * local_104[0] + local_fc * local_fc);
          if (fVar5 <= DAT_00887e70[local_18].cylinder_top_y) {
            if (*(float *)(in_stack_00000008 + 0x3c) < fVar6) {
              if (*(float *)((int)&DAT_008879c0[0].y + iVar11) <
                  *(float *)(in_stack_00000008 + 0x3c)) {
                if (fVar5 <= 0.0) {
                  local_104[0] = 0.0;
                  local_fc = 0.0;
                }
                else {
                  local_104[0] = local_104[0] * (1.0 / fVar5);
                  local_fc = local_fc * (1.0 / fVar5);
                }
                fVar3 = local_104[0] * *local_1c + *(float *)((int)&DAT_008879c0[0].x + iVar11);
                fVar4 = local_fc * *local_1c + *(float *)((int)&DAT_008879c0[0].z + iVar11);
                fVar6 = *pfVar13;
                fVar5 = *pfVar13;
                *pfVar2 = *pfVar2 + (fVar3 - *pfVar1) * *pfVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (*(float *)(in_stack_00000008 + 0x24) - *(float *)(in_stack_00000008 + 0x24)) *
                     fVar6;
                *(float *)(in_stack_00000008 + 0x34) =
                     *(float *)(in_stack_00000008 + 0x34) +
                     (fVar4 - *(float *)(in_stack_00000008 + 0x28)) * fVar5;
                if (pfVar1 != local_104) {
                  *pfVar1 = fVar3;
                  *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24);
                  *(float *)(in_stack_00000008 + 0x28) = fVar4;
                }
                *(undefined4 *)(in_stack_00000008 + 0x6c) = 1;
              }
              else {
                fVar3 = *(float *)(in_stack_00000008 + 0x28);
                fVar4 = *(float *)((int)&DAT_008879c0[0].y + iVar11);
                fVar6 = *pfVar13;
                fVar5 = *pfVar13;
                *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *pfVar13;
                *(float *)(in_stack_00000008 + 0x30) =
                     *(float *)(in_stack_00000008 + 0x30) +
                     (fVar4 - *(float *)(in_stack_00000008 + 0x24)) * fVar6;
                *(float *)(in_stack_00000008 + 0x34) =
                     *(float *)(in_stack_00000008 + 0x34) +
                     (fVar3 - *(float *)(in_stack_00000008 + 0x28)) * fVar5;
                if (pfVar1 != local_140) {
                  *pfVar1 = *pfVar1;
                  *(float *)(in_stack_00000008 + 0x24) = fVar4;
                  *(float *)(in_stack_00000008 + 0x28) = fVar3;
                }
              }
            }
            else {
              fVar4 = *(float *)(in_stack_00000008 + 0x28);
              fVar5 = *pfVar13;
              fVar3 = *pfVar13;
              *pfVar2 = *pfVar2 + (*pfVar1 - *pfVar1) * *pfVar13;
              *(float *)(in_stack_00000008 + 0x30) =
                   *(float *)(in_stack_00000008 + 0x30) +
                   (fVar6 - *(float *)(in_stack_00000008 + 0x24)) * fVar5;
              *(float *)(in_stack_00000008 + 0x34) =
                   *(float *)(in_stack_00000008 + 0x34) +
                   (fVar4 - *(float *)(in_stack_00000008 + 0x28)) * fVar3;
              if (pfVar1 != local_d4) {
                *pfVar1 = *pfVar1;
                *(float *)(in_stack_00000008 + 0x24) = fVar6;
                *(float *)(in_stack_00000008 + 0x28) = fVar4;
              }
            }
          }
        }
      }
      else {
        *(undefined4 *)(in_stack_00000008 + 0x30) = 0;
        *(undefined4 *)(in_stack_00000008 + 0x6c) = 1;
        *(float *)(in_stack_00000008 + 0x24) = fVar6;
      }
      local_1c = local_1c + 10;
      local_18 = local_18 + 1;
      iVar11 = iVar11 + 0xc;
    } while (local_18 < DAT_008879bc);
  }
  local_34 = 0;
  if (0 < *(int *)(in_stack_00000008 + 0x44)) {
    pfVar1 = (float *)(in_stack_00000008 + 0x20);
    pfVar13 = (float *)(in_stack_00000004 + 0x65b1c);
    pfVar12 = (float *)(in_stack_00000004 + 0x1c728);
    pfVar2 = (float *)(in_stack_00000008 + 0x2c);
    iVar11 = in_stack_00000008;
    do {
      iVar10 = in_stack_00000004 + 0x208 + *(int *)(iVar11 + 0x48) * 0x74;
      if (&local_e0 != local_14c) {
        local_e0 = *pfVar1 - *(float *)(iVar10 + 0x20);
        local_dc = *(float *)(in_stack_00000008 + 0x24) - *(float *)(iVar10 + 0x24);
        local_d8 = *(float *)(in_stack_00000008 + 0x28) - *(float *)(iVar10 + 0x28);
      }
      fVar5 = SQRT(local_d8 * local_d8 + local_e0 * local_e0 + local_dc * local_dc);
      fVar6 = *(float *)(iVar11 + 0x58);
      if (fVar6 < fVar5) {
        fVar3 = fVar5 - fVar6;
        fVar7 = 1.0 / fVar5;
        fVar8 = local_e0 * fVar3 * fVar7;
        fVar9 = local_dc * fVar3 * fVar7;
        fVar7 = local_d8 * fVar3 * fVar7;
        *pfVar1 = *pfVar1 - fVar8;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) - fVar9;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) - fVar7;
        fVar3 = *pfVar12;
        fVar4 = *pfVar12;
        *pfVar2 = *pfVar2 - fVar8 * *pfVar12;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) - fVar9 * fVar3;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) - fVar7 * fVar4;
      }
      if ((fVar5 < fVar6) && ((float)_DAT_00619c12 < fVar5)) {
        fVar6 = fVar6 - fVar5;
        fVar5 = 1.0 / fVar5;
        fVar3 = local_e0 * fVar6 * fVar5 * *pfVar13;
        fVar4 = local_dc * fVar6 * fVar5 * *pfVar13;
        fVar7 = local_d8 * fVar6 * fVar5 * *pfVar13;
        *pfVar1 = *pfVar1 + fVar3;
        *(float *)(in_stack_00000008 + 0x24) = *(float *)(in_stack_00000008 + 0x24) + fVar4;
        *(float *)(in_stack_00000008 + 0x28) = *(float *)(in_stack_00000008 + 0x28) + fVar7;
        fVar6 = *pfVar12;
        fVar5 = *pfVar12;
        *pfVar2 = *pfVar2 + fVar3 * *pfVar12;
        *(float *)(in_stack_00000008 + 0x30) = *(float *)(in_stack_00000008 + 0x30) + fVar4 * fVar6;
        *(float *)(in_stack_00000008 + 0x34) = *(float *)(in_stack_00000008 + 0x34) + fVar7 * fVar5;
      }
      local_34 = local_34 + 1;
      iVar11 = iVar11 + 4;
    } while (local_34 < *(int *)(in_stack_00000008 + 0x44));
  }
  return;
}


// Assembly code:
// 00449fc0: PUSH EBX
//   Label: core_curtain.cpp_FUN_00449fc0
// 00449fc1: PUSH ESI
// 00449fc2: PUSH EDI
// 00449fc3: PUSH EBP
// 00449fc4: MOV EBP,ESP
// 00449fc6: SUB ESP,0x148
// 00449fcc: AND ESP,0xfffffff8
// 00449fcf: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00449fd2: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00449fd5: CMP dword ptr [EAX + 0x65b2c],0x0
// 00449fdc: JZ 0x0044a014
//   XREF to: 0044a014 (CONDITIONAL_JUMP)
// 00449fde: FLD float ptr [EBX + 0x24]
// 00449fe1: FCOMP float ptr [EAX + 0x65b28]
// 00449fe7: FNSTSW AX
// 00449fe9: SAHF
// 00449fea: JNC 0x0044a014
//   XREF to: 0044a014 (CONDITIONAL_JUMP)
// 00449fec: LEA EAX,[EBX + 0x2c]
// 00449fef: MOV dword ptr [EAX + 0x8],0x0
// 00449ff6: MOV EDX,dword ptr [EAX + 0x8]
// 00449ff9: MOV dword ptr [EAX + 0x4],EDX
// 00449ffc: MOV EDX,dword ptr [EAX + 0x4]
// 00449fff: MOV dword ptr [EAX],EDX
// 0044a001: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a004: MOV EDX,dword ptr [EAX + 0x65b28]
// 0044a00a: MOV dword ptr [EBX + 0x24],EDX
// 0044a00d: MOV dword ptr [EBX + 0x6c],0x1
// 0044a014: XOR ECX,ECX
//   Label: LAB_0044a014
// 0044a016: MOV ESI,dword ptr [0x008879bc]
//   XREF to: 008879bc (READ)
// 0044a01c: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 0044a023: TEST ESI,ESI
// 0044a025: JLE 0x0044a1e7
//   XREF to: 0044a1e7 (CONDITIONAL_JUMP)
// 0044a02b: LEA EDX,[EBX + 0x20]
// 0044a02e: LEA ECX,[EBX + 0x2c]
// 0044a031: LEA EAX,[EBX + 0x28]
// 0044a034: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0044a03b: LEA EAX,[EBX + 0x24]
// 0044a03e: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0044a045: LEA EAX,[EBX + 0x30]
// 0044a048: MOV dword ptr [ESP + 0x144],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0044a04f: LEA EAX,[EBX + 0x34]
// 0044a052: MOV EDI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a055: MOV dword ptr [ESP + 0x108],EAX
//   XREF to: Stack[-0x50] (WRITE)
// 0044a05c: MOV EAX,0x887e70
//   XREF to: 00887e70 (DATA)
// 0044a061: XOR ESI,ESI
// 0044a063: ADD EAX,0x1c
// 0044a066: ADD EDI,0x1c728
// 0044a06c: MOV dword ptr [ESP + 0x13c],EAX
//   XREF to: Stack[-0x1c] (WRITE)
//   XREF to: 00887e8c (DATA)
// 0044a073: MOV EAX,dword ptr [ECX]
//   Label: LAB_0044a073
// 0044a075: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0044a07c: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[-0x14] (READ)
// 0044a083: MOV EAX,dword ptr [EAX]
// 0044a085: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0044a08c: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0xac] (READ)
// 0044a093: FMUL ST0
// 0044a095: MOV EAX,dword ptr [ESP + 0x108]
//   XREF to: Stack[-0x50] (READ)
// 0044a09c: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0xb0] (READ)
// 0044a0a3: FMUL ST0
// 0044a0a5: MOV EAX,dword ptr [EAX]
// 0044a0a7: FADDP
// 0044a0a9: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 0044a0b0: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (READ)
// 0044a0b7: FMUL ST0
// 0044a0b9: FADDP
// 0044a0bb: FSQRT
// 0044a0bd: FST float ptr [ESP + 0x4]
//   XREF to: Stack[-0x154] (WRITE)
// 0044a0c1: FLDZ
// 0044a0c3: FCOMPP
// 0044a0c5: FNSTSW AX
// 0044a0c7: SAHF
// 0044a0c8: JNC 0x0044a4fb
//   XREF to: 0044a4fb (CONDITIONAL_JUMP)
// 0044a0ce: FLD1
// 0044a0d0: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0xb0] (READ)
// 0044a0d7: FXCH
// 0044a0d9: FDIV float ptr [ESP + 0x4]
//   XREF to: Stack[-0x154] (READ)
// 0044a0dd: FXCH
// 0044a0df: FMUL ST1
// 0044a0e1: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0xac] (READ)
// 0044a0e8: FMUL ST2
// 0044a0ea: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (READ)
// 0044a0f1: FMULP ST3
// 0044a0f3: FXCH
// 0044a0f5: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0xb0] (WRITE)
// 0044a0fc: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0xac] (WRITE)
// 0044a103: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0xa8] (WRITE)
// 0044a10a: FLD float ptr [EBX + 0x30]
//   Label: LAB_0044a10a
// 0044a10d: FCOMP double ptr [0x00619c0a]
//   XREF to: 00619c0a (READ)
// 0044a113: FNSTSW AX
// 0044a115: SAHF
// 0044a116: JNC 0x0044a517
//   XREF to: 0044a517 (CONDITIONAL_JUMP)
// 0044a11c: IMUL EAX,dword ptr [ESP + 0x140],0x28
//   XREF to: Stack[-0x18] (READ)
// 0044a124: FLD float ptr [EBX + 0x24]
// 0044a127: FLD float ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a12d: FADD float ptr [EAX + 0x887e88]
//   XREF to: 00887e88 (DATA)
// 0044a133: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0044a13a: FSTP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x5c] (WRITE)
// 0044a141: FCOMP float ptr [ESP + 0xfc]
//   XREF to: Stack[-0x5c] (READ)
// 0044a148: FNSTSW AX
// 0044a14a: SAHF
// 0044a14b: JNC 0x0044a517
//   XREF to: 0044a517 (CONDITIONAL_JUMP)
// 0044a151: FLD float ptr [EBX + 0x24]
// 0044a154: FCOMP float ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a15a: FNSTSW AX
// 0044a15c: SAHF
// 0044a15d: JBE 0x0044a517
//   XREF to: 0044a517 (CONDITIONAL_JUMP)
// 0044a163: FLD float ptr [EBX + 0x20]
// 0044a166: FSUB float ptr [ESI + 0x8879c0]
//   XREF to: 008879c0 (READ)
// 0044a16c: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x128] (WRITE)
// 0044a170: FLD float ptr [EBX + 0x28]
// 0044a173: FSUB float ptr [ESI + 0x8879c8]
//   XREF to: 008879c8 (READ)
// 0044a179: FXCH
// 0044a17b: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0x128] (READ)
// 0044a17f: FXCH
// 0044a181: FST float ptr [ESP + 0x38]
//   XREF to: Stack[-0x120] (WRITE)
// 0044a185: FMUL float ptr [ESP + 0x38]
//   XREF to: Stack[-0x120] (READ)
// 0044a189: XOR EAX,EAX
// 0044a18b: FADDP
// 0044a18d: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x124] (WRITE)
// 0044a191: FSQRT
// 0044a193: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x3c] (READ)
// 0044a19a: FCOMP float ptr [EAX + 0x887e8c]
//   XREF to: 00887e8c (DATA)
// 0044a1a0: FNSTSW AX
// 0044a1a2: SAHF
// 0044a1a3: JNC 0x0044a517
//   XREF to: 0044a517 (CONDITIONAL_JUMP)
// 0044a1a9: MOV dword ptr [EBX + 0x30],0x0
// 0044a1b0: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x5c] (READ)
// 0044a1b7: MOV dword ptr [EBX + 0x6c],0x1
// 0044a1be: MOV dword ptr [EBX + 0x24],EAX
// 0044a1c1: ADD dword ptr [ESP + 0x13c],0x28
//   Label: LAB_0044a1c1
//   XREF to: Stack[-0x1c] (READ_WRITE)
//   XREF to: 00887eb4 (DATA)
// 0044a1c9: MOV EAX,dword ptr [ESP + 0x140]
//   XREF to: Stack[-0x18] (READ)
// 0044a1d0: INC EAX
// 0044a1d1: ADD ESI,0xc
// 0044a1d4: MOV dword ptr [ESP + 0x140],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0044a1db: CMP EAX,dword ptr [0x008879bc]
//   XREF to: 008879bc (READ)
// 0044a1e1: JL 0x0044a073
//   XREF to: 0044a073 (CONDITIONAL_JUMP)
// 0044a1e7: XOR EDX,EDX
//   Label: LAB_0044a1e7
// 0044a1e9: MOV ECX,dword ptr [EBX + 0x44]
// 0044a1ec: MOV dword ptr [ESP + 0x124],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0044a1f3: TEST ECX,ECX
// 0044a1f5: JLE 0x0044a4f4
//   XREF to: 0044a4f4 (CONDITIONAL_JUMP)
// 0044a1fb: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a1fe: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a201: LEA EDX,[EBX + 0x20]
// 0044a204: ADD EAX,0x65b1c
// 0044a209: ADD ESI,0x1c728
// 0044a20f: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0044a216: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0044a219: LEA ECX,[EBX + 0x2c]
// 0044a21c: ADD EAX,0x208
// 0044a221: MOV EDI,EBX
// 0044a223: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 0044a22a: IMUL EAX,dword ptr [EDI + 0x48],0x74
//   Label: LAB_0044a22a
// 0044a22e: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0044a235: MOV EAX,dword ptr [ESP + 0x10c]
//   XREF to: Stack[-0x4c] (READ)
// 0044a23c: ADD EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x54] (READ)
// 0044a243: FLD float ptr [EDX]
// 0044a245: FSUB float ptr [EAX + 0x20]
// 0044a248: ADD EAX,0x20
// 0044a24b: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x14c] (WRITE)
// 0044a24f: FLD float ptr [EDX + 0x4]
// 0044a252: FSUB float ptr [EAX + 0x4]
// 0044a255: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x148] (WRITE)
// 0044a259: FLD float ptr [EDX + 0x8]
// 0044a25c: FSUB float ptr [EAX + 0x8]
// 0044a25f: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x14c] (DATA)
// 0044a263: MOV dword ptr [ESP + 0x104],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0044a26a: LEA EAX,[ESP + 0x78]
//   XREF to: Stack[-0xe0] (DATA)
// 0044a26e: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x144] (WRITE)
// 0044a272: CMP EAX,dword ptr [ESP + 0x104]
//   XREF to: Stack[-0x54] (READ)
// 0044a279: JNZ 0x0044a8f3
//   XREF to: 0044a8f3 (CONDITIONAL_JUMP)
// 0044a27f: FLD float ptr [ESP + 0x7c]
//   Label: LAB_0044a27f
//   XREF to: Stack[-0xdc] (READ)
// 0044a283: FMUL ST0
// 0044a285: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xe0] (READ)
// 0044a289: FMUL ST0
// 0044a28b: FADDP
// 0044a28d: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xd8] (READ)
// 0044a294: FMUL ST0
// 0044a296: FADDP
// 0044a298: FSQRT
// 0044a29a: FSTP float ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (WRITE)
// 0044a2a1: MOV EAX,dword ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 0044a2a8: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x158] (DATA)
// 0044a2ab: MOV EAX,dword ptr [EDI + 0x58]
// 0044a2ae: MOV dword ptr [ESP + 0x138],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0044a2b5: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 0044a2bc: FCOMP float ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0044a2c3: FNSTSW AX
// 0044a2c5: SAHF
// 0044a2c6: JBE 0x0044a3a9
//   XREF to: 0044a3a9 (CONDITIONAL_JUMP)
// 0044a2cc: FLD float ptr [ESP + 0x134]
//   XREF to: Stack[-0x24] (READ)
// 0044a2d3: FLD ST0
// 0044a2d5: FSUB float ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0044a2dc: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xe0] (READ)
// 0044a2e0: FXCH
// 0044a2e2: FSTP float ptr [ESP + 0x128]
//   XREF to: Stack[-0x30] (WRITE)
// 0044a2e9: FMUL float ptr [ESP + 0x128]
//   XREF to: Stack[-0x30] (READ)
// 0044a2f0: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xdc] (READ)
// 0044a2f4: FMUL float ptr [ESP + 0x128]
//   XREF to: Stack[-0x30] (READ)
// 0044a2fb: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xd8] (READ)
// 0044a302: FMUL float ptr [ESP + 0x128]
//   XREF to: Stack[-0x30] (READ)
// 0044a309: FLD1
// 0044a30b: FXCH ST3
// 0044a30d: FST float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xec] (WRITE)
// 0044a311: FXCH ST3
// 0044a313: FDIVRP ST4,ST0
// 0044a315: FXCH ST2
// 0044a317: FMUL ST3
// 0044a319: FXCH
// 0044a31b: FST float ptr [ESP + 0x70]
//   XREF to: Stack[-0xe8] (WRITE)
// 0044a31f: FMUL ST3
// 0044a321: FXCH ST2
// 0044a323: FST float ptr [ESP + 0x74]
//   XREF to: Stack[-0xe4] (WRITE)
// 0044a327: FMULP ST3
// 0044a329: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x11c] (WRITE)
// 0044a32d: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x118] (WRITE)
// 0044a331: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x114] (WRITE)
// 0044a335: FLD float ptr [EDX]
// 0044a337: FSUB float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x11c] (READ)
// 0044a33b: FLD float ptr [EDX + 0x4]
// 0044a33e: FXCH
// 0044a340: FSTP float ptr [EDX]
// 0044a342: FSUB float ptr [ESP + 0x40]
//   XREF to: Stack[-0x118] (READ)
// 0044a346: FLD float ptr [EDX + 0x8]
// 0044a349: FXCH
// 0044a34b: FSTP float ptr [EDX + 0x4]
// 0044a34e: FSUB float ptr [ESP + 0x44]
//   XREF to: Stack[-0x114] (READ)
// 0044a352: FSTP float ptr [EDX + 0x8]
// 0044a355: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x11c] (READ)
// 0044a359: FMUL float ptr [ESI]
// 0044a35b: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x118] (READ)
// 0044a35f: FXCH
// 0044a361: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0xc8] (WRITE)
// 0044a368: FMUL float ptr [ESI]
// 0044a36a: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x114] (READ)
// 0044a36e: FXCH
// 0044a370: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0xc4] (WRITE)
// 0044a377: FMUL float ptr [ESI]
// 0044a379: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0xc0] (WRITE)
// 0044a380: FLD float ptr [ECX]
// 0044a382: FSUB float ptr [ESP + 0x90]
//   XREF to: Stack[-0xc8] (READ)
// 0044a389: FLD float ptr [ECX + 0x4]
// 0044a38c: FXCH
// 0044a38e: FSTP float ptr [ECX]
// 0044a390: FSUB float ptr [ESP + 0x94]
//   XREF to: Stack[-0xc4] (READ)
// 0044a397: FLD float ptr [ECX + 0x8]
// 0044a39a: FXCH
// 0044a39c: FSTP float ptr [ECX + 0x4]
// 0044a39f: FSUB float ptr [ESP + 0x98]
//   XREF to: Stack[-0xc0] (READ)
// 0044a3a6: FSTP float ptr [ECX + 0x8]
// 0044a3a9: FLD float ptr [ESP]
//   Label: LAB_0044a3a9
//   XREF to: Stack[-0x158] (DATA)
// 0044a3ac: FCOMP float ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0044a3b3: FNSTSW AX
// 0044a3b5: SAHF
// 0044a3b6: JNC 0x0044a4d9
//   XREF to: 0044a4d9 (CONDITIONAL_JUMP)
// 0044a3bc: FLD float ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 0044a3bf: FCOMP double ptr [0x00619c12]
//   XREF to: 00619c12 (READ)
// 0044a3c5: FNSTSW AX
// 0044a3c7: SAHF
// 0044a3c8: JBE 0x0044a4d9
//   XREF to: 0044a4d9 (CONDITIONAL_JUMP)
// 0044a3ce: FLD float ptr [ESP]
//   XREF to: Stack[-0x158] (DATA)
// 0044a3d1: FLD float ptr [ESP + 0x138]
//   XREF to: Stack[-0x20] (READ)
// 0044a3d8: FSUB ST0,ST1
// 0044a3da: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xe0] (READ)
// 0044a3de: FXCH
// 0044a3e0: FSTP float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (WRITE)
// 0044a3e7: FMUL float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 0044a3ee: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xdc] (READ)
// 0044a3f2: FMUL float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 0044a3f9: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xd8] (READ)
// 0044a400: FMUL float ptr [ESP + 0x12c]
//   XREF to: Stack[-0x2c] (READ)
// 0044a407: FLD1
// 0044a409: FXCH ST3
// 0044a40b: FST float ptr [ESP + 0xf0]
//   XREF to: Stack[-0x68] (WRITE)
// 0044a412: FXCH ST3
// 0044a414: FDIVRP ST4,ST0
// 0044a416: FXCH ST2
// 0044a418: FMUL ST3
// 0044a41a: FXCH
// 0044a41c: FST float ptr [ESP + 0xf4]
//   XREF to: Stack[-0x64] (WRITE)
// 0044a423: FMUL ST3
// 0044a425: FXCH ST2
// 0044a427: FST float ptr [ESP + 0xf8]
//   XREF to: Stack[-0x60] (WRITE)
// 0044a42e: FMULP ST3
// 0044a430: MOV EAX,dword ptr [ESP + 0x120]
//   XREF to: Stack[-0x38] (READ)
// 0044a437: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x110] (WRITE)
// 0044a43b: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x10c] (WRITE)
// 0044a43f: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x108] (WRITE)
// 0044a443: FLD float ptr [ESP + 0x48]
//   XREF to: Stack[-0x110] (READ)
// 0044a447: FMUL float ptr [EAX]
// 0044a449: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x10c] (READ)
// 0044a44d: FXCH
// 0044a44f: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xf8] (WRITE)
// 0044a453: FMUL float ptr [EAX]
// 0044a455: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0x108] (READ)
// 0044a459: FXCH
// 0044a45b: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0xf4] (WRITE)
// 0044a45f: FMUL float ptr [EAX]
// 0044a461: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0xf0] (WRITE)
// 0044a465: FLD float ptr [EDX]
// 0044a467: FADD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xf8] (READ)
// 0044a46b: FLD float ptr [EDX + 0x4]
// 0044a46e: FXCH
// 0044a470: FSTP float ptr [EDX]
// 0044a472: FADD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xf4] (READ)
// 0044a476: FLD float ptr [EDX + 0x8]
// 0044a479: FXCH
// 0044a47b: FSTP float ptr [EDX + 0x4]
// 0044a47e: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xf0] (READ)
// 0044a482: FSTP float ptr [EDX + 0x8]
// 0044a485: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xf8] (READ)
// 0044a489: FMUL float ptr [ESI]
// 0044a48b: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xf4] (READ)
// 0044a48f: FXCH
// 0044a491: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x80] (WRITE)
// 0044a498: FMUL float ptr [ESI]
// 0044a49a: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xf0] (READ)
// 0044a49e: FXCH
// 0044a4a0: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x7c] (WRITE)
// 0044a4a7: FMUL float ptr [ESI]
// 0044a4a9: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x78] (WRITE)
// 0044a4b0: FLD float ptr [ECX]
// 0044a4b2: FADD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x80] (READ)
// 0044a4b9: FLD float ptr [ECX + 0x4]
// 0044a4bc: FXCH
// 0044a4be: FSTP float ptr [ECX]
// 0044a4c0: FADD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x7c] (READ)
// 0044a4c7: FLD float ptr [ECX + 0x8]
// 0044a4ca: FXCH
// 0044a4cc: FSTP float ptr [ECX + 0x4]
// 0044a4cf: FADD float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x78] (READ)
// 0044a4d6: FSTP float ptr [ECX + 0x8]
// 0044a4d9: MOV EAX,dword ptr [ESP + 0x124]
//   Label: LAB_0044a4d9
//   XREF to: Stack[-0x34] (READ)
// 0044a4e0: INC EAX
// 0044a4e1: ADD EDI,0x4
// 0044a4e4: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0044a4eb: CMP EAX,dword ptr [EBX + 0x44]
// 0044a4ee: JL 0x0044a22a
//   XREF to: 0044a22a (CONDITIONAL_JUMP)
// 0044a4f4: MOV ESP,EBP
//   Label: LAB_0044a4f4
// 0044a4f6: POP EBP
// 0044a4f7: POP EDI
// 0044a4f8: POP ESI
// 0044a4f9: POP EBX
// 0044a4fa: RET
// 0044a4fb: XOR EAX,EAX
//   Label: LAB_0044a4fb
// 0044a4fd: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0xac] (WRITE)
// 0044a504: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0044a50b: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0xa8] (WRITE)
// 0044a512: JMP 0x0044a10a
//   XREF to: 0044a10a (UNCONDITIONAL_JUMP)
// 0044a517: FLD float ptr [EBX + 0x24]
//   Label: LAB_0044a517
// 0044a51a: FCOMP float ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a520: FNSTSW AX
// 0044a522: SAHF
// 0044a523: JC 0x0044a1c1
//   XREF to: 0044a1c1 (CONDITIONAL_JUMP)
// 0044a529: IMUL EAX,dword ptr [ESP + 0x140],0x28
//   XREF to: Stack[-0x18] (READ)
// 0044a531: FLD float ptr [EBX + 0x24]
// 0044a534: FLD float ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a53a: FADD float ptr [EAX + 0x887e88]
//   XREF to: 00887e88 (DATA)
// 0044a540: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 0044a547: FSTP float ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (WRITE)
// 0044a54e: FCOMP float ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 0044a555: FNSTSW AX
// 0044a557: SAHF
// 0044a558: JA 0x0044a1c1
//   XREF to: 0044a1c1 (CONDITIONAL_JUMP)
// 0044a55e: FLD float ptr [EBX + 0x20]
// 0044a561: FSUB float ptr [ESI + 0x8879c0]
//   XREF to: 008879c0 (READ)
// 0044a567: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (WRITE)
// 0044a56b: FLD float ptr [EBX + 0x28]
// 0044a56e: FSUB float ptr [ESI + 0x8879c8]
//   XREF to: 008879c8 (READ)
// 0044a574: FXCH
// 0044a576: FMUL float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (READ)
// 0044a57a: FXCH
// 0044a57c: FST float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (WRITE)
// 0044a580: FMUL float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a584: XOR EAX,EAX
// 0044a586: FXCH
// 0044a588: FXCH
// 0044a58a: FSTP float ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (WRITE)
// 0044a591: FADD float ptr [ESP + 0x110]
//   XREF to: Stack[-0x48] (READ)
// 0044a598: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0044a59c: FSQRT
// 0044a59e: MOV EAX,dword ptr [ESP + 0x100]
//   XREF to: Stack[-0x58] (READ)
// 0044a5a5: FST float ptr [ESP + 0x8]
//   XREF to: Stack[-0x150] (WRITE)
// 0044a5a9: FCOMP float ptr [EAX + 0x887e8c]
//   XREF to: 00887e8c (DATA)
// 0044a5af: FNSTSW AX
// 0044a5b1: SAHF
// 0044a5b2: JA 0x0044a1c1
//   XREF to: 0044a1c1 (CONDITIONAL_JUMP)
// 0044a5b8: FLD float ptr [EBX + 0x3c]
// 0044a5bb: FCOMP float ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 0044a5c2: FNSTSW AX
// 0044a5c4: SAHF
// 0044a5c5: JC 0x0044a6c8
//   XREF to: 0044a6c8 (CONDITIONAL_JUMP)
// 0044a5cb: MOV EAX,dword ptr [EDX]
// 0044a5cd: MOV dword ptr [ESP + 0x84],EAX
//   XREF to: Stack[-0xd4] (WRITE)
// 0044a5d4: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 0044a5db: MOV EAX,dword ptr [EAX]
// 0044a5dd: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 0044a5e4: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x44] (READ)
// 0044a5eb: MOV EAX,dword ptr [EAX]
// 0044a5ed: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 0044a5f4: MOV EAX,dword ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 0044a5fb: MOV dword ptr [ESP + 0x88],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 0044a602: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xd4] (READ)
// 0044a609: FSUB float ptr [EDX]
// 0044a60b: FLD float ptr [ESP + 0x130]
//   XREF to: Stack[-0x28] (READ)
// 0044a612: FXCH
// 0044a614: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x98] (WRITE)
// 0044a61b: FSUB float ptr [EDX + 0x4]
// 0044a61e: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0xcc] (READ)
// 0044a625: FXCH
// 0044a627: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x94] (WRITE)
// 0044a62e: FSUB float ptr [EDX + 0x8]
// 0044a631: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x98] (READ)
// 0044a638: FXCH
// 0044a63a: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (WRITE)
// 0044a641: FMUL float ptr [EDI]
// 0044a643: FLD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x94] (READ)
// 0044a64a: FXCH
// 0044a64c: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x74] (WRITE)
// 0044a653: FMUL float ptr [EDI]
// 0044a655: FLD float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x90] (READ)
// 0044a65c: FXCH
// 0044a65e: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x70] (WRITE)
// 0044a665: FMUL float ptr [EDI]
// 0044a667: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0x6c] (WRITE)
// 0044a66e: FLD float ptr [ECX]
// 0044a670: FADD float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x74] (READ)
// 0044a677: FLD float ptr [ECX + 0x4]
// 0044a67a: FXCH
// 0044a67c: FSTP float ptr [ECX]
// 0044a67e: FADD float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x70] (READ)
// 0044a685: FLD float ptr [ECX + 0x8]
// 0044a688: FXCH
// 0044a68a: FSTP float ptr [ECX + 0x4]
// 0044a68d: FADD float ptr [ESP + 0xec]
//   XREF to: Stack[-0x6c] (READ)
// 0044a694: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0xd4] (DATA)
// 0044a69b: FSTP float ptr [ECX + 0x8]
// 0044a69e: CMP EDX,EAX
// 0044a6a0: JZ 0x0044a1c1
//   XREF to: 0044a1c1 (CONDITIONAL_JUMP)
// 0044a6a6: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0xd4] (DATA)
// 0044a6ad: MOV dword ptr [EDX],EAX
// 0044a6af: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0xd0] (READ)
// 0044a6b6: MOV dword ptr [EDX + 0x4],EAX
// 0044a6b9: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0xcc] (READ)
// 0044a6c0: MOV dword ptr [EDX + 0x8],EAX
// 0044a6c3: JMP 0x0044a1c1
//   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)
// 0044a6c8: FLD float ptr [EBX + 0x3c]
//   Label: LAB_0044a6c8
// 0044a6cb: FCOMP float ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a6d1: FNSTSW AX
// 0044a6d3: SAHF
// 0044a6d4: JA 0x0044a7b5
//   XREF to: 0044a7b5 (CONDITIONAL_JUMP)
// 0044a6da: MOV EAX,dword ptr [EDX]
// 0044a6dc: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x140] (WRITE)
// 0044a6e0: MOV EAX,dword ptr [ESP + 0x118]
//   XREF to: Stack[-0x40] (READ)
// 0044a6e7: MOV EAX,dword ptr [EAX]
// 0044a6e9: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 0044a6ed: MOV EAX,dword ptr [ESP + 0x114]
//   XREF to: Stack[-0x44] (READ)
// 0044a6f4: MOV EAX,dword ptr [EAX]
// 0044a6f6: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x138] (WRITE)
// 0044a6fa: MOV EAX,dword ptr [ESI + 0x8879c4]
//   XREF to: 008879c4 (READ)
// 0044a700: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x13c] (WRITE)
// 0044a704: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (READ)
// 0044a708: FSUB float ptr [EDX]
// 0044a70a: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x13c] (READ)
// 0044a70e: FXCH
// 0044a710: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xa4] (WRITE)
// 0044a717: FSUB float ptr [EDX + 0x4]
// 0044a71a: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x138] (READ)
// 0044a71e: FXCH
// 0044a720: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0xa0] (WRITE)
// 0044a727: FSUB float ptr [EDX + 0x8]
// 0044a72a: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0xa4] (READ)
// 0044a731: FXCH
// 0044a733: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x9c] (WRITE)
// 0044a73a: FMUL float ptr [EDI]
// 0044a73c: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0xa0] (READ)
// 0044a743: FXCH
// 0044a745: FSTP float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x8c] (WRITE)
// 0044a74c: FMUL float ptr [EDI]
// 0044a74e: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x9c] (READ)
// 0044a755: FXCH
// 0044a757: FSTP float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x88] (WRITE)
// 0044a75e: FMUL float ptr [EDI]
// 0044a760: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x84] (WRITE)
// 0044a767: FLD float ptr [ECX]
// 0044a769: FADD float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x8c] (READ)
// 0044a770: FLD float ptr [ECX + 0x4]
// 0044a773: FXCH
// 0044a775: FSTP float ptr [ECX]
// 0044a777: FADD float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x88] (READ)
// 0044a77e: FLD float ptr [ECX + 0x8]
// 0044a781: FXCH
// 0044a783: FSTP float ptr [ECX + 0x4]
// 0044a786: FADD float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x84] (READ)
// 0044a78d: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x140] (DATA)
// 0044a791: FSTP float ptr [ECX + 0x8]
// 0044a794: CMP EDX,EAX
// 0044a796: JZ 0x0044a1c1
//   XREF to: 0044a1c1 (CONDITIONAL_JUMP)
// 0044a79c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x140] (DATA)
// 0044a7a0: MOV dword ptr [EDX],EAX
// 0044a7a2: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x13c] (READ)
// 0044a7a6: MOV dword ptr [EDX + 0x4],EAX
// 0044a7a9: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x138] (READ)
// 0044a7ad: MOV dword ptr [EDX + 0x8],EAX
// 0044a7b0: JMP 0x0044a1c1
//   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)
// 0044a7b5: FLD float ptr [ESP + 0x8]
//   Label: LAB_0044a7b5
//   XREF to: Stack[-0x150] (READ)
// 0044a7b9: FLDZ
// 0044a7bb: FCOMPP
// 0044a7bd: FNSTSW AX
// 0044a7bf: SAHF
// 0044a7c0: JNC 0x0044a8e0
//   XREF to: 0044a8e0 (CONDITIONAL_JUMP)
// 0044a7c6: FLD1
// 0044a7c8: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (READ)
// 0044a7cc: FXCH
// 0044a7ce: FDIV float ptr [ESP + 0x8]
//   XREF to: Stack[-0x150] (READ)
// 0044a7d2: FXCH
// 0044a7d4: FMUL ST1
// 0044a7d6: FLDZ
// 0044a7d8: FMUL ST2
// 0044a7da: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a7de: FMULP ST3
// 0044a7e0: FXCH
// 0044a7e2: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (WRITE)
// 0044a7e6: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (WRITE)
// 0044a7ea: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (WRITE)
// 0044a7ee: MOV EAX,dword ptr [ESP + 0x13c]
//   Label: LAB_0044a7ee
//   XREF to: Stack[-0x1c] (READ)
// 0044a7f5: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (READ)
// 0044a7f9: FMUL float ptr [EAX]
//   XREF to: 00887e8c (READ)
// 0044a7fb: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (READ)
// 0044a7ff: FXCH
// 0044a801: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (WRITE)
// 0044a805: FMUL float ptr [EAX]
//   XREF to: 00887e8c (READ)
// 0044a807: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a80b: FXCH
// 0044a80d: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (WRITE)
// 0044a811: FMUL float ptr [EAX]
//   XREF to: 00887e8c (READ)
// 0044a813: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (READ)
// 0044a817: FADD float ptr [ESI + 0x8879c0]
//   XREF to: 008879c0 (READ)
// 0044a81d: FXCH
// 0044a81f: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (WRITE)
// 0044a823: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (WRITE)
// 0044a827: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a82b: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (READ)
// 0044a82f: MOV EAX,dword ptr [EBX + 0x24]
// 0044a832: FXCH
// 0044a834: FADD float ptr [ESI + 0x8879c8]
//   XREF to: 008879c8 (READ)
// 0044a83a: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0044a83e: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (WRITE)
// 0044a842: FSUB float ptr [EDX]
// 0044a844: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (READ)
// 0044a848: FXCH
// 0044a84a: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x134] (WRITE)
// 0044a84e: FSUB float ptr [EDX + 0x4]
// 0044a851: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a855: FXCH
// 0044a857: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x130] (WRITE)
// 0044a85b: FSUB float ptr [EDX + 0x8]
// 0044a85e: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x134] (READ)
// 0044a862: FXCH
// 0044a864: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x12c] (WRITE)
// 0044a868: FMUL float ptr [EDI]
// 0044a86a: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x130] (READ)
// 0044a86e: FXCH
// 0044a870: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0xbc] (WRITE)
// 0044a877: FMUL float ptr [EDI]
// 0044a879: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x12c] (READ)
// 0044a87d: FXCH
// 0044a87f: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0xb8] (WRITE)
// 0044a886: FMUL float ptr [EDI]
// 0044a888: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0xb4] (WRITE)
// 0044a88f: FLD float ptr [ECX]
// 0044a891: FADD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0xbc] (READ)
// 0044a898: FLD float ptr [ECX + 0x4]
// 0044a89b: FXCH
// 0044a89d: FSTP float ptr [ECX]
// 0044a89f: FADD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0xb8] (READ)
// 0044a8a6: FLD float ptr [ECX + 0x8]
// 0044a8a9: FXCH
// 0044a8ab: FSTP float ptr [ECX + 0x4]
// 0044a8ae: FADD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0xb4] (READ)
// 0044a8b5: LEA EAX,[ESP + 0x54]
//   XREF to: Stack[-0x104] (DATA)
// 0044a8b9: FSTP float ptr [ECX + 0x8]
// 0044a8bc: CMP EDX,EAX
// 0044a8be: JZ 0x0044a8d4
//   XREF to: 0044a8d4 (CONDITIONAL_JUMP)
// 0044a8c0: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x104] (DATA)
// 0044a8c4: MOV dword ptr [EDX],EAX
// 0044a8c6: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x100] (READ)
// 0044a8ca: MOV dword ptr [EDX + 0x4],EAX
// 0044a8cd: MOV EAX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[-0xfc] (READ)
// 0044a8d1: MOV dword ptr [EDX + 0x8],EAX
// 0044a8d4: MOV dword ptr [EBX + 0x6c],0x1
//   Label: LAB_0044a8d4
// 0044a8db: JMP 0x0044a1c1
//   XREF to: 0044a1c1 (UNCONDITIONAL_JUMP)
// 0044a8e0: XOR EAX,EAX
//   Label: LAB_0044a8e0
// 0044a8e2: MOV dword ptr [ESP + 0x58],EAX
//   XREF to: Stack[-0x100] (WRITE)
// 0044a8e6: MOV dword ptr [ESP + 0x54],EAX
//   XREF to: Stack[-0x104] (WRITE)
// 0044a8ea: MOV dword ptr [ESP + 0x5c],EAX
//   XREF to: Stack[-0xfc] (WRITE)
// 0044a8ee: JMP 0x0044a7ee
//   XREF to: 0044a7ee (UNCONDITIONAL_JUMP)
// 0044a8f3: MOV EAX,dword ptr [ESP + 0xc]
//   Label: LAB_0044a8f3
//   XREF to: Stack[-0x14c] (READ)
// 0044a8f7: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xe0] (WRITE)
// 0044a8fb: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x148] (READ)
// 0044a8ff: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xdc] (WRITE)
// 0044a903: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x144] (READ)
// 0044a907: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xd8] (WRITE)
// 0044a90e: JMP 0x0044a27f
//   XREF to: 0044a27f (UNCONDITIONAL_JUMP)
