// Name: core_cloth.cpp_FUN_0043a420
// Address: 0043a420
// Address Range: [[0043a420, 0043ab73]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043a420()
// Cross-references:
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043b76e [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0061849a
//   undefined4 DAT_02d7a7b8
//   int g_LightAttenuationMax
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_cloth.cpp_FUN_0043a420(undefined4 param_1, undefined4 param_2) */

void core_cloth_cpp_FUN_0043a420(void)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float *pfVar4;
  CVector3f *pCVar5;
  int iVar6;
  float *pfVar7;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  int in_stack_00000004;
  float *in_stack_00000008;
  float local_130;
  float local_12c;
  float local_128;
  float local_120;
  float local_11c;
  float local_118;
  float local_114;
  float local_110;
  CVector3f local_10c;
  float local_100;
  float local_fc;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_ec;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d8;
  float local_d4;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  CVector3f local_88;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_5c;
  float local_58;
  float local_54;
  float local_48;
  float local_44;
  undefined1 *local_40;
  int local_3c;
  int local_38;
  float *local_34;
  int local_30;
  float *local_2c;
  float local_28;
  float local_24;
  int local_20;
  float local_1c;
  float local_18;
  float *local_14;
  
  if (in_stack_00000008[1] < *(float *)(in_stack_00000004 + 0x3fe44)) {
    in_stack_00000008[10] = 0.0;
    in_stack_00000008[1] = *(float *)(in_stack_00000004 + 0x3fe44);
    in_stack_00000008[0x2f] = 1.4013e-45;
  }
  iVar6 = 0;
  if (0 < (int)in_stack_00000008[0xc]) {
    local_34 = (float *)(in_stack_00000004 + 0x3ce64);
    pfVar1 = in_stack_00000008 + 9;
    pfVar7 = (float *)(in_stack_00000004 + 0x3fe40);
    local_3c = in_stack_00000004 + 0x56d8;
    pfVar8 = in_stack_00000008;
    do {
      pfVar4 = (float *)(local_3c + (int)pfVar8[0xd] * 0x11c);
      local_130 = *in_stack_00000008 - *pfVar4;
      local_12c = in_stack_00000008[1] - pfVar4[1];
      local_128 = in_stack_00000008[2] - pfVar4[2];
      if (&local_7c != &local_130) {
        local_7c = local_130;
        local_78 = local_12c;
        local_74 = local_128;
      }
      local_5c = local_74 * local_74 + local_7c * local_7c + local_78 * local_78;
      local_24 = (float)(((int)local_5c >> 1) + DAT_02d7a7b8);
      local_1c = pfVar8[0x1e];
      if (local_1c < local_24) {
        local_2c = (float *)(local_24 - local_1c);
        local_e8 = local_7c * (float)local_2c;
        local_e4 = local_78 * (float)local_2c;
        local_e0 = local_74 * (float)local_2c;
        local_d4 = 1.0 / local_24;
        local_dc = local_e8 * local_d4;
        local_d8 = local_e4 * local_d4;
        local_d4 = local_e0 * local_d4;
        *in_stack_00000008 = *in_stack_00000008 - local_dc;
        in_stack_00000008[1] = in_stack_00000008[1] - local_d8;
        in_stack_00000008[2] = in_stack_00000008[2] - local_d4;
        local_100 = local_dc * *pfVar7;
        local_fc = local_d8 * *pfVar7;
        local_f8 = local_d4 * *pfVar7;
        *pfVar1 = *pfVar1 - local_100;
        in_stack_00000008[10] = in_stack_00000008[10] - local_fc;
        in_stack_00000008[0xb] = in_stack_00000008[0xb] - local_f8;
      }
      if (local_24 < local_1c) {
        local_28 = local_1c - local_24;
        local_118 = local_7c * local_28;
        local_114 = local_78 * local_28;
        local_110 = local_74 * local_28;
        local_8c = 1.0 / local_24;
        local_94 = local_118 * local_8c;
        local_90 = local_114 * local_8c;
        local_8c = local_110 * local_8c;
        local_f4 = local_94 * *local_34;
        local_f0 = local_90 * *local_34;
        local_ec = local_8c * *local_34;
        *in_stack_00000008 = *in_stack_00000008 + local_f4;
        in_stack_00000008[1] = in_stack_00000008[1] + local_f0;
        in_stack_00000008[2] = in_stack_00000008[2] + local_ec;
        local_c4 = local_f4 * *pfVar7;
        local_c0 = local_f0 * *pfVar7;
        local_bc = local_ec * *pfVar7;
        *pfVar1 = *pfVar1 + local_c4;
        in_stack_00000008[10] = in_stack_00000008[10] + local_c0;
        in_stack_00000008[0xb] = in_stack_00000008[0xb] + local_bc;
      }
      iVar6 = iVar6 + 1;
      pfVar8 = pfVar8 + 1;
      local_40 = (undefined1 *)&local_130;
      local_18 = local_24;
    } while (iVar6 < (int)in_stack_00000008[0xc]);
  }
  local_20 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x3ce8c)) {
    local_30 = in_stack_00000004 + 0x3fe40;
    local_38 = in_stack_00000004 + 0x3ce90;
    local_14 = (float *)(in_stack_00000004 + 0x3cf30);
    do {
      local_70 = *in_stack_00000008 - *local_14;
      iVar6 = local_20 * 0xac + local_38;
      local_6c = in_stack_00000008[1] - local_14[1];
      local_68 = in_stack_00000008[2] - local_14[2];
      if (&local_b8 != &local_70) {
        local_b8 = local_70;
        local_b4 = local_6c;
        local_b0 = local_68;
      }
      local_a4 = local_b0 * *(float *)(iVar6 + 0x98) +
                 local_b8 * *(float *)(iVar6 + 0x80) + local_b4 * *(float *)(iVar6 + 0x8c);
      if ((0.0 <= local_a4) && (local_a4 <= *(float *)(iVar6 + 0x44))) {
        local_ac = local_b0 * *(float *)(iVar6 + 0x90) +
                   local_b8 * *(float *)(iVar6 + 0x78) + local_b4 * *(float *)(iVar6 + 0x84);
        local_a8 = local_b0 * *(float *)(iVar6 + 0x94) +
                   local_b8 * *(float *)(iVar6 + 0x7c) + local_b4 * *(float *)(iVar6 + 0x88);
        fVar2 = local_ac * *(float *)(iVar6 + 0x38);
        fVar3 = local_a8 * *(float *)(iVar6 + 0x3c);
        local_58 = fVar3 * fVar3 + fVar2 * fVar2;
        local_54 = (float)(((int)local_58 >> 1) + DAT_02d7a7b8);
        if (local_54 < 1.0) {
          local_48 = local_ac * local_ac + local_a8 * local_a8;
          local_44 = (float)(g_LightAttenuationMax - ((int)local_48 >> 1));
          local_88.x = *(float *)(iVar6 + 0x14) * (float)_DAT_0061849a * local_ac * local_44;
          local_88.y = (float)_DAT_0061849a * *(float *)(iVar6 + 0x18) * local_a8 * local_44;
          local_88.z = local_a4;
          pCVar5 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
                             ((CMatrix3x3f *)(iVar6 + 0x78),&local_10c,&local_88);
          local_9c = *(float *)(iVar6 + 0xa0) + pCVar5->x;
          local_98 = *(float *)(iVar6 + 0xa4) + pCVar5->y;
          local_94 = *(float *)(iVar6 + 0xa8) + pCVar5->z;
          if (&local_88.y != &local_9c) {
            local_88.y = local_9c;
            local_88.z = local_98;
            local_7c = local_94;
          }
          local_cc = local_88.y - *in_stack_00000008;
          local_c8 = local_88.z - in_stack_00000008[1];
          local_c4 = local_7c - in_stack_00000008[2];
          if (in_stack_00000008 != &local_88.y) {
            *in_stack_00000008 = local_88.y;
            in_stack_00000008[1] = local_88.z;
            in_stack_00000008[2] = local_7c;
          }
          local_120 = local_cc * *local_2c;
          local_11c = local_c8 * *local_2c;
          local_118 = local_c4 * *local_2c;
          in_stack_00000008[9] = in_stack_00000008[9] + local_120;
          in_stack_00000008[10] = in_stack_00000008[10] + local_11c;
          in_stack_00000008[0xb] = in_stack_00000008[0xb] + local_118;
          in_stack_00000008[0x2e] = 1.4013e-45;
        }
      }
      local_14 = local_14 + 0x2b;
      local_20 = local_20 + 1;
    } while (local_20 < *(int *)(in_stack_00000004 + 0x3ce8c));
  }
  return;
}


// Assembly code:
// 0043a420: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043a420
// 0043a421: PUSH ESI
// 0043a422: PUSH EDI
// 0043a423: PUSH EBP
// 0043a424: MOV EBP,ESP
// 0043a426: SUB ESP,0x120
// 0043a42c: AND ESP,0xfffffff8
// 0043a42f: MOV EBX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 0043a432: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a435: FLD float ptr [EBX + 0x4]
// 0043a438: FCOMP float ptr [EAX + 0x3fe44]
// 0043a43e: FNSTSW AX
// 0043a440: SAHF
// 0043a441: JC 0x0043ab29
//   XREF to: 0043ab29 (CONDITIONAL_JUMP)
// 0043a447: MOV EDX,dword ptr [EBX + 0x30]
//   Label: LAB_0043a447
// 0043a44a: XOR ECX,ECX
// 0043a44c: TEST EDX,EDX
// 0043a44e: JLE 0x0043a757
//   XREF to: 0043a757 (CONDITIONAL_JUMP)
// 0043a454: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a457: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a45a: ADD EAX,0x3ce64
// 0043a45f: LEA ESI,[EBX + 0x24]
// 0043a462: MOV dword ptr [ESP + 0xfc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 0043a469: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a46c: ADD EDX,0x3fe40
// 0043a472: ADD EAX,0x56d8
// 0043a477: MOV EDI,EBX
// 0043a479: MOV dword ptr [ESP + 0xf4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 0043a480: IMUL EAX,dword ptr [EDI + 0x34],0x11c
//   Label: LAB_0043a480
// 0043a487: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0043a48e: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0x3c] (READ)
// 0043a495: ADD EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (READ)
// 0043a49c: FLD float ptr [EBX]
// 0043a49e: FSUB float ptr [EAX]
// 0043a4a0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0043a4a3: FLD float ptr [EBX + 0x4]
// 0043a4a6: FSUB float ptr [EAX + 0x4]
// 0043a4a9: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0x12c] (WRITE)
// 0043a4ad: FLD float ptr [EBX + 0x8]
// 0043a4b0: FSUB float ptr [EAX + 0x8]
// 0043a4b3: MOV EAX,ESP
// 0043a4b5: MOV dword ptr [ESP + 0xf0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0043a4bc: LEA EAX,[ESP + 0xb4]
//   XREF to: Stack[-0x7c] (DATA)
// 0043a4c3: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x128] (WRITE)
// 0043a4c7: CMP EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0x40] (READ)
// 0043a4ce: JZ 0x0043a4f0
//   XREF to: 0043a4f0 (CONDITIONAL_JUMP)
// 0043a4d0: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x130] (DATA)
// 0043a4d3: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x7c] (WRITE)
// 0043a4da: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x12c] (READ)
// 0043a4de: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 0043a4e5: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x128] (READ)
// 0043a4e9: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 0043a4f0: FLD float ptr [ESP + 0xb8]
//   Label: LAB_0043a4f0
//   XREF to: Stack[-0x78] (READ)
// 0043a4f7: FMUL ST0
// 0043a4f9: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x7c] (READ)
// 0043a500: FMUL ST0
// 0043a502: FADDP
// 0043a504: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x74] (READ)
// 0043a50b: FMUL ST0
// 0043a50d: FADDP
// 0043a50f: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x5c] (WRITE)
// 0043a516: MOV EAX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x5c] (READ)
// 0043a51d: SAR EAX,0x1
// 0043a51f: ADD EAX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0043a525: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043a52c: MOV dword ptr [ESP + 0x10c],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 0043a533: MOV EAX,dword ptr [EDI + 0x78]
// 0043a536: MOV dword ptr [ESP + 0x114],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043a53d: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 0043a544: FCOMP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0043a54b: FNSTSW AX
// 0043a54d: SAHF
// 0043a54e: JBE 0x0043a625
//   XREF to: 0043a625 (CONDITIONAL_JUMP)
// 0043a554: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0x18] (READ)
// 0043a55b: FLD ST0
// 0043a55d: FSUB float ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0043a564: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x7c] (READ)
// 0043a56b: FXCH
// 0043a56d: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (WRITE)
// 0043a574: FMUL float ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0043a57b: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x78] (READ)
// 0043a582: FMUL float ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0043a589: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x74] (READ)
// 0043a590: FMUL float ptr [ESP + 0x104]
//   XREF to: Stack[-0x2c] (READ)
// 0043a597: FLD1
// 0043a599: FXCH ST3
// 0043a59b: FST float ptr [ESP + 0x48]
//   XREF to: Stack[-0xe8] (WRITE)
// 0043a59f: FXCH ST3
// 0043a5a1: FDIVRP ST4,ST0
// 0043a5a3: FXCH ST2
// 0043a5a5: FMUL ST3
// 0043a5a7: FXCH
// 0043a5a9: FST float ptr [ESP + 0x4c]
//   XREF to: Stack[-0xe4] (WRITE)
// 0043a5ad: FMUL ST3
// 0043a5af: FXCH ST2
// 0043a5b1: FST float ptr [ESP + 0x50]
//   XREF to: Stack[-0xe0] (WRITE)
// 0043a5b5: FMULP ST3
// 0043a5b7: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0xdc] (WRITE)
// 0043a5bb: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0xd8] (WRITE)
// 0043a5bf: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xd4] (WRITE)
// 0043a5c3: FLD float ptr [EBX]
// 0043a5c5: FSUB float ptr [ESP + 0x54]
//   XREF to: Stack[-0xdc] (READ)
// 0043a5c9: FLD float ptr [EBX + 0x4]
// 0043a5cc: FXCH
// 0043a5ce: FSTP float ptr [EBX]
// 0043a5d0: FSUB float ptr [ESP + 0x58]
//   XREF to: Stack[-0xd8] (READ)
// 0043a5d4: FLD float ptr [EBX + 0x8]
// 0043a5d7: FXCH
// 0043a5d9: FSTP float ptr [EBX + 0x4]
// 0043a5dc: FSUB float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xd4] (READ)
// 0043a5e0: FSTP float ptr [EBX + 0x8]
// 0043a5e3: FLD float ptr [ESP + 0x54]
//   XREF to: Stack[-0xdc] (READ)
// 0043a5e7: FMUL float ptr [EDX]
// 0043a5e9: FLD float ptr [ESP + 0x58]
//   XREF to: Stack[-0xd8] (READ)
// 0043a5ed: FXCH
// 0043a5ef: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x100] (WRITE)
// 0043a5f3: FMUL float ptr [EDX]
// 0043a5f5: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0xd4] (READ)
// 0043a5f9: FXCH
// 0043a5fb: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0xfc] (WRITE)
// 0043a5ff: FMUL float ptr [EDX]
// 0043a601: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xf8] (WRITE)
// 0043a605: FLD float ptr [ESI]
// 0043a607: FSUB float ptr [ESP + 0x30]
//   XREF to: Stack[-0x100] (READ)
// 0043a60b: FLD float ptr [ESI + 0x4]
// 0043a60e: FXCH
// 0043a610: FSTP float ptr [ESI]
// 0043a612: FSUB float ptr [ESP + 0x34]
//   XREF to: Stack[-0xfc] (READ)
// 0043a616: FLD float ptr [ESI + 0x8]
// 0043a619: FXCH
// 0043a61b: FSTP float ptr [ESI + 0x4]
// 0043a61e: FSUB float ptr [ESP + 0x38]
//   XREF to: Stack[-0xf8] (READ)
// 0043a622: FSTP float ptr [ESI + 0x8]
// 0043a625: FLD float ptr [ESP + 0x10c]
//   Label: LAB_0043a625
//   XREF to: Stack[-0x24] (READ)
// 0043a62c: FCOMP float ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0043a633: FNSTSW AX
// 0043a635: SAHF
// 0043a636: JNC 0x0043a748
//   XREF to: 0043a748 (CONDITIONAL_JUMP)
// 0043a63c: FLD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0x24] (READ)
// 0043a643: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0x1c] (READ)
// 0043a64a: FSUB ST0,ST1
// 0043a64c: FLD float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x7c] (READ)
// 0043a653: FXCH
// 0043a655: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (WRITE)
// 0043a65c: FMUL float ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0043a663: FLD float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x78] (READ)
// 0043a66a: FMUL float ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0043a671: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x74] (READ)
// 0043a678: FMUL float ptr [ESP + 0x108]
//   XREF to: Stack[-0x28] (READ)
// 0043a67f: FLD1
// 0043a681: FXCH ST3
// 0043a683: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0x118] (WRITE)
// 0043a687: FXCH ST3
// 0043a689: FDIVRP ST4,ST0
// 0043a68b: FXCH ST2
// 0043a68d: FMUL ST3
// 0043a68f: FXCH
// 0043a691: FST float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x114] (WRITE)
// 0043a695: FMUL ST3
// 0043a697: FXCH ST2
// 0043a699: FST float ptr [ESP + 0x20]
//   XREF to: Stack[-0x110] (WRITE)
// 0043a69d: FMULP ST3
// 0043a69f: MOV EAX,dword ptr [ESP + 0xfc]
//   XREF to: Stack[-0x34] (READ)
// 0043a6a6: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x94] (WRITE)
// 0043a6ad: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x90] (WRITE)
// 0043a6b4: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x8c] (WRITE)
// 0043a6bb: FLD float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x94] (READ)
// 0043a6c2: FMUL float ptr [EAX]
// 0043a6c4: FLD float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x90] (READ)
// 0043a6cb: FXCH
// 0043a6cd: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xf4] (WRITE)
// 0043a6d1: FMUL float ptr [EAX]
// 0043a6d3: FLD float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x8c] (READ)
// 0043a6da: FXCH
// 0043a6dc: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0xf0] (WRITE)
// 0043a6e0: FMUL float ptr [EAX]
// 0043a6e2: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0xec] (WRITE)
// 0043a6e6: FLD float ptr [EBX]
// 0043a6e8: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xf4] (READ)
// 0043a6ec: FLD float ptr [EBX + 0x4]
// 0043a6ef: FXCH
// 0043a6f1: FSTP float ptr [EBX]
// 0043a6f3: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xf0] (READ)
// 0043a6f7: FLD float ptr [EBX + 0x8]
// 0043a6fa: FXCH
// 0043a6fc: FSTP float ptr [EBX + 0x4]
// 0043a6ff: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xec] (READ)
// 0043a703: FSTP float ptr [EBX + 0x8]
// 0043a706: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xf4] (READ)
// 0043a70a: FMUL float ptr [EDX]
// 0043a70c: FLD float ptr [ESP + 0x40]
//   XREF to: Stack[-0xf0] (READ)
// 0043a710: FXCH
// 0043a712: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xc4] (WRITE)
// 0043a716: FMUL float ptr [EDX]
// 0043a718: FLD float ptr [ESP + 0x44]
//   XREF to: Stack[-0xec] (READ)
// 0043a71c: FXCH
// 0043a71e: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0xc0] (WRITE)
// 0043a722: FMUL float ptr [EDX]
// 0043a724: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0xbc] (WRITE)
// 0043a728: FLD float ptr [ESI]
// 0043a72a: FADD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0xc4] (READ)
// 0043a72e: FLD float ptr [ESI + 0x4]
// 0043a731: FXCH
// 0043a733: FSTP float ptr [ESI]
// 0043a735: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0xc0] (READ)
// 0043a739: FLD float ptr [ESI + 0x8]
// 0043a73c: FXCH
// 0043a73e: FSTP float ptr [ESI + 0x4]
// 0043a741: FADD float ptr [ESP + 0x74]
//   XREF to: Stack[-0xbc] (READ)
// 0043a745: FSTP float ptr [ESI + 0x8]
// 0043a748: INC ECX
//   Label: LAB_0043a748
// 0043a749: MOV EAX,dword ptr [EBX + 0x30]
// 0043a74c: ADD EDI,0x4
// 0043a74f: CMP ECX,EAX
// 0043a751: JL 0x0043a480
//   XREF to: 0043a480 (CONDITIONAL_JUMP)
// 0043a757: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0043a757
//   XREF to: Stack[0x4] (READ)
// 0043a75a: XOR EDX,EDX
// 0043a75c: MOV ECX,dword ptr [EAX + 0x3ce8c]
// 0043a762: MOV dword ptr [ESP + 0x110],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0043a769: TEST ECX,ECX
// 0043a76b: JLE 0x0043ab22
//   XREF to: 0043ab22 (CONDITIONAL_JUMP)
// 0043a771: ADD EAX,0x3fe40
// 0043a776: MOV dword ptr [ESP + 0x100],EAX
//   XREF to: Stack[-0x30] (WRITE)
// 0043a77d: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a780: ADD EAX,0x3ce90
// 0043a785: MOV dword ptr [ESP + 0xf8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 0043a78c: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043a78f: ADD EAX,0x3cf30
// 0043a794: LEA EDI,[EBX + 0x24]
// 0043a797: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043a79e: IMUL ESI,dword ptr [ESP + 0x110],0xac
//   Label: LAB_0043a79e
//   XREF to: Stack[-0x20] (READ)
// 0043a7a9: MOV EAX,dword ptr [ESP + 0x11c]
//   XREF to: Stack[-0x14] (READ)
// 0043a7b0: FLD float ptr [EBX]
// 0043a7b2: MOV EDX,dword ptr [ESP + 0xf8]
//   XREF to: Stack[-0x38] (READ)
// 0043a7b9: FSUB float ptr [EAX]
// 0043a7bb: ADD ESI,EDX
// 0043a7bd: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x70] (WRITE)
// 0043a7c4: FLD float ptr [EBX + 0x4]
// 0043a7c7: FSUB float ptr [EAX + 0x4]
// 0043a7ca: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0xb8] (DATA)
// 0043a7ce: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x6c] (WRITE)
// 0043a7d5: FLD float ptr [EBX + 0x8]
// 0043a7d8: FSUB float ptr [EAX + 0x8]
// 0043a7db: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x70] (DATA)
// 0043a7e2: FSTP float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x68] (WRITE)
// 0043a7e9: CMP EDX,EAX
// 0043a7eb: JNZ 0x0043ab4b
//   XREF to: 0043ab4b (CONDITIONAL_JUMP)
// 0043a7f1: FLD float ptr [ESP + 0x7c]
//   Label: LAB_0043a7f1
//   XREF to: Stack[-0xb4] (READ)
// 0043a7f5: FMUL float ptr [ESI + 0x8c]
// 0043a7fb: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0043a7ff: FMUL float ptr [ESI + 0x80]
// 0043a805: FADDP
// 0043a807: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0043a80e: FMUL float ptr [ESI + 0x98]
// 0043a814: FADDP
// 0043a816: FST float ptr [ESP + 0x8c]
//   XREF to: Stack[-0xa4] (WRITE)
// 0043a81d: FLDZ
// 0043a81f: FCOMPP
// 0043a821: FNSTSW AX
// 0043a823: SAHF
// 0043a824: JA 0x0043aaee
//   XREF to: 0043aaee (CONDITIONAL_JUMP)
// 0043a82a: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0xa4] (READ)
// 0043a831: FCOMP float ptr [ESI + 0x44]
// 0043a834: FNSTSW AX
// 0043a836: SAHF
// 0043a837: JA 0x0043aaee
//   XREF to: 0043aaee (CONDITIONAL_JUMP)
// 0043a83d: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xb4] (READ)
// 0043a841: FMUL float ptr [ESI + 0x84]
// 0043a847: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0043a84b: FMUL float ptr [ESI + 0x78]
// 0043a84e: FADDP
// 0043a850: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0043a857: FMUL float ptr [ESI + 0x90]
// 0043a85d: FADDP
// 0043a85f: FLD float ptr [ESP + 0x7c]
//   XREF to: Stack[-0xb4] (READ)
// 0043a863: FXCH
// 0043a865: FSTP float ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (WRITE)
// 0043a86c: FMUL float ptr [ESI + 0x88]
// 0043a872: FLD float ptr [ESP + 0x78]
//   XREF to: Stack[-0xb8] (READ)
// 0043a876: FMUL float ptr [ESI + 0x7c]
// 0043a879: FADDP
// 0043a87b: FLD float ptr [ESP + 0x80]
//   XREF to: Stack[-0xb0] (READ)
// 0043a882: FMUL float ptr [ESI + 0x94]
// 0043a888: FADDP
// 0043a88a: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (READ)
// 0043a891: FXCH
// 0043a893: FSTP float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (WRITE)
// 0043a89a: FMUL float ptr [ESI + 0x38]
// 0043a89d: FMUL ST0
// 0043a89f: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (READ)
// 0043a8a6: FMUL float ptr [ESI + 0x3c]
// 0043a8a9: FMUL ST0
// 0043a8ab: FADDP
// 0043a8ad: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x58] (WRITE)
// 0043a8b4: MOV EAX,dword ptr [ESP + 0xd8]
//   XREF to: Stack[-0x58] (READ)
// 0043a8bb: MOV ECX,dword ptr [0x02d7a7b8]
//   XREF to: 02d7a7b8 (READ)
// 0043a8c1: SAR EAX,0x1
// 0043a8c3: ADD EAX,ECX
// 0043a8c5: MOV dword ptr [ESP + 0xdc],EAX
//   XREF to: Stack[-0x54] (WRITE)
// 0043a8cc: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x54] (READ)
// 0043a8d3: FLD1
// 0043a8d5: FCOMPP
// 0043a8d7: FNSTSW AX
// 0043a8d9: SAHF
// 0043a8da: JBE 0x0043aaee
//   XREF to: 0043aaee (CONDITIONAL_JUMP)
// 0043a8e0: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (READ)
// 0043a8e7: MOV EAX,dword ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (READ)
// 0043a8ee: FMUL float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (READ)
// 0043a8f5: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0043a8fc: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (READ)
// 0043a903: MOV EAX,dword ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (READ)
// 0043a90a: FMUL float ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (READ)
// 0043a911: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0043a918: XOR EAX,EAX
// 0043a91a: FADDP
// 0043a91c: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0043a923: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0x48] (WRITE)
// 0043a92a: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0x48] (READ)
// 0043a931: MOV EDX,dword ptr [0x02d7a7bc]
//   XREF to: 02d7a7bc (READ)
// 0043a937: SAR EAX,0x1
// 0043a939: SUB EDX,EAX
// 0043a93b: MOV dword ptr [ESP + 0xec],EDX
//   XREF to: Stack[-0x44] (WRITE)
// 0043a942: FLD float ptr [ESP + 0x84]
//   XREF to: Stack[-0xac] (READ)
// 0043a949: FMUL float ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (READ)
// 0043a950: FLD float ptr [ESP + 0x88]
//   XREF to: Stack[-0xa8] (READ)
// 0043a957: FMUL float ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (READ)
// 0043a95e: FLDZ
// 0043a960: FMUL float ptr [ESP + 0xec]
//   XREF to: Stack[-0x44] (READ)
// 0043a967: FXCH ST2
// 0043a969: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (WRITE)
// 0043a970: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (WRITE)
// 0043a977: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x80] (WRITE)
// 0043a97e: FLD double ptr [0x0061849a]
//   XREF to: 0061849a (READ)
// 0043a984: FLD float ptr [ESI + 0x14]
// 0043a987: FMUL ST1
// 0043a989: FLD float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (READ)
// 0043a990: FXCH
// 0043a992: FMUL ST1
// 0043a994: MOV EAX,dword ptr [ESP + 0x8c]
//   XREF to: Stack[-0xa4] (READ)
// 0043a99b: FSTP ST1
// 0043a99d: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (WRITE)
// 0043a9a4: FMUL float ptr [ESI + 0x18]
// 0043a9a7: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0043a9ae: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x88] (DATA)
// 0043a9b5: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (READ)
// 0043a9bc: PUSH EAX
// 0043a9bd: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x10c] (DATA)
// 0043a9c1: FXCH
// 0043a9c3: FMUL ST1
// 0043a9c5: PUSH EAX
// 0043a9c6: LEA EAX,[ESI + 0x78]
// 0043a9c9: FSTP ST1
// 0043a9cb: PUSH EAX
// 0043a9cc: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x84] (WRITE)
// 0043a9d3: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 0043a9d8: FLD float ptr [ESI + 0xa0]
// 0043a9de: FADD float ptr [EAX]
// 0043a9e0: ADD ESP,0xc
// 0043a9e3: FSTP float ptr [ESP + 0x90]
//   XREF to: Stack[-0xa0] (WRITE)
// 0043a9ea: FLD float ptr [ESI + 0xa4]
// 0043a9f0: FADD float ptr [EAX + 0x4]
// 0043a9f3: LEA EDX,[ESP + 0xa8]
//   XREF to: Stack[-0x88] (DATA)
// 0043a9fa: FSTP float ptr [ESP + 0x94]
//   XREF to: Stack[-0x9c] (WRITE)
// 0043aa01: FLD float ptr [ESI + 0xa8]
// 0043aa07: FADD float ptr [EAX + 0x8]
// 0043aa0a: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0xa0] (DATA)
// 0043aa11: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x98] (WRITE)
// 0043aa18: CMP EDX,EAX
// 0043aa1a: JZ 0x0043aa46
//   XREF to: 0043aa46 (CONDITIONAL_JUMP)
// 0043aa1c: MOV EAX,dword ptr [ESP + 0x90]
//   XREF to: Stack[-0xa0] (DATA)
// 0043aa23: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x88] (WRITE)
// 0043aa2a: MOV EAX,dword ptr [ESP + 0x94]
//   XREF to: Stack[-0x9c] (READ)
// 0043aa31: MOV dword ptr [ESP + 0xac],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 0043aa38: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x98] (READ)
// 0043aa3f: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 0043aa46: FLD float ptr [ESP + 0xa8]
//   Label: LAB_0043aa46
//   XREF to: Stack[-0x88] (READ)
// 0043aa4d: FSUB float ptr [EBX]
// 0043aa4f: FLD float ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (READ)
// 0043aa56: FXCH
// 0043aa58: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0xd0] (WRITE)
// 0043aa5c: FSUB float ptr [EBX + 0x4]
// 0043aa5f: FLD float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x80] (READ)
// 0043aa66: FXCH
// 0043aa68: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0xcc] (WRITE)
// 0043aa6c: FSUB float ptr [EBX + 0x8]
// 0043aa6f: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x88] (DATA)
// 0043aa76: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0xc8] (WRITE)
// 0043aa7a: CMP EBX,EAX
// 0043aa7c: JZ 0x0043aa9b
//   XREF to: 0043aa9b (CONDITIONAL_JUMP)
// 0043aa7e: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x88] (DATA)
// 0043aa85: MOV dword ptr [EBX],EAX
// 0043aa87: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x84] (READ)
// 0043aa8e: MOV dword ptr [EBX + 0x4],EAX
// 0043aa91: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x80] (READ)
// 0043aa98: MOV dword ptr [EBX + 0x8],EAX
// 0043aa9b: MOV EAX,dword ptr [ESP + 0x100]
//   Label: LAB_0043aa9b
//   XREF to: Stack[-0x30] (READ)
// 0043aaa2: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0xd0] (READ)
// 0043aaa6: FMUL float ptr [EAX]
// 0043aaa8: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0xcc] (READ)
// 0043aaac: FXCH
// 0043aaae: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x124] (WRITE)
// 0043aab2: FMUL float ptr [EAX]
// 0043aab4: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0xc8] (READ)
// 0043aab8: FXCH
// 0043aaba: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x120] (WRITE)
// 0043aabe: FMUL float ptr [EAX]
// 0043aac0: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x11c] (WRITE)
// 0043aac4: FLD float ptr [EDI]
// 0043aac6: FADD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x124] (READ)
// 0043aaca: FLD float ptr [EDI + 0x4]
// 0043aacd: FXCH
// 0043aacf: FSTP float ptr [EDI]
// 0043aad1: FADD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x120] (READ)
// 0043aad5: FLD float ptr [EDI + 0x8]
// 0043aad8: FXCH
// 0043aada: FSTP float ptr [EDI + 0x4]
// 0043aadd: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x11c] (READ)
// 0043aae1: FSTP float ptr [EDI + 0x8]
// 0043aae4: MOV dword ptr [EBX + 0xb8],0x1
// 0043aaee: MOV ESI,dword ptr [ESP + 0x11c]
//   Label: LAB_0043aaee
//   XREF to: Stack[-0x14] (READ)
// 0043aaf5: MOV EAX,dword ptr [ESP + 0x110]
//   XREF to: Stack[-0x20] (READ)
// 0043aafc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 0043aaff: ADD ESI,0xac
// 0043ab05: INC EAX
// 0043ab06: MOV ECX,dword ptr [EDX + 0x3ce8c]
// 0043ab0c: MOV dword ptr [ESP + 0x11c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 0043ab13: MOV dword ptr [ESP + 0x110],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 0043ab1a: CMP EAX,ECX
// 0043ab1c: JL 0x0043a79e
//   XREF to: 0043a79e (CONDITIONAL_JUMP)
// 0043ab22: MOV ESP,EBP
//   Label: LAB_0043ab22
// 0043ab24: POP EBP
// 0043ab25: POP EDI
// 0043ab26: POP ESI
// 0043ab27: POP EBX
// 0043ab28: RET
// 0043ab29: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_0043ab29
//   XREF to: Stack[0x4] (READ)
// 0043ab2c: MOV dword ptr [EBX + 0x28],0x0
// 0043ab33: MOV EDX,dword ptr [EAX + 0x3fe44]
// 0043ab39: MOV dword ptr [EBX + 0x4],EDX
// 0043ab3c: MOV dword ptr [EBX + 0xbc],0x1
// 0043ab46: JMP 0x0043a447
//   XREF to: 0043a447 (UNCONDITIONAL_JUMP)
// 0043ab4b: MOV EAX,dword ptr [ESP + 0xc0]
//   Label: LAB_0043ab4b
//   XREF to: Stack[-0x70] (DATA)
// 0043ab52: MOV dword ptr [ESP + 0x78],EAX
//   XREF to: Stack[-0xb8] (WRITE)
// 0043ab56: MOV EAX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x6c] (READ)
// 0043ab5d: MOV dword ptr [ESP + 0x7c],EAX
//   XREF to: Stack[-0xb4] (WRITE)
// 0043ab61: MOV EAX,dword ptr [ESP + 0xc8]
//   XREF to: Stack[-0x68] (READ)
// 0043ab68: MOV dword ptr [ESP + 0x80],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 0043ab6f: JMP 0x0043a7f1
//   XREF to: 0043a7f1 (UNCONDITIONAL_JUMP)
