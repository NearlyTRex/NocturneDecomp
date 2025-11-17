// Name: core_chain.cpp_FUN_004300d0
// Address: 004300d0
// Address Range: [[004300d0, 004308ed]]
// Convention: unknown
// Signature: undefined core_chain.cpp_FUN_004300d0()
// Globals:
//   undefined4 DAT_006177d2
//   undefined4 DAT_006177da
//   undefined4 DAT_006177e2
//   undefined4 DAT_006177ea
//   CSound* g_CSoundPtr = 03f6af64
//   CSound g_CSoundInstance
// Function calls:
//   core_chain.cpp_FUN_0042fcc0
//   core_chain.cpp_FUN_0042fed0
//   core_sound.cpp_CSound_FUN_005b3a70
//   sound_sndmain.cpp_FUN_005a9660
//   sound_sndmain.cpp_FUN_005a9c40

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_other_chain.cpp_FUN_004300d0(undefined4 param_1, undefined4 param_2)
    */

void core_chain_cpp_FUN_004300d0(void)

{
  char *pcVar1;
  char *pcVar2;
  undefined4 extraout_EAX;
  undefined4 extraout_EAX_00;
  float *pfVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  float *pfVar5;
  char *in_stack_00000004;
  float in_stack_00000008;
  float local_f0;
  float local_ec;
  float local_d0;
  float local_cc;
  float local_c8;
  float local_c4;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_b0;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_64;
  float local_60;
  float local_5c;
  char *local_58;
  int local_54;
  int local_50;
  char *local_4c;
  char *local_48;
  float local_44;
  float *local_40;
  int local_3c;
  char *local_38;
  char *local_34;
  int local_30;
  char *local_2c;
  char *local_28;
  char *local_24;
  char *local_20;
  int local_1c;
  undefined4 uStack_18;
  
  if (*(float *)(in_stack_00000004 + 0x56c) < _DAT_006177d2) {
    uStack_18 = (**(code **)(*(int *)(in_stack_00000004 + 0x154) + 0x38))();
    *(undefined4 *)(in_stack_00000004 + 0x56c) = uStack_18;
  }
  if (*(int *)(in_stack_00000004 + 0x574) != 0) {
    pfVar5 = (float *)(in_stack_00000004 + 0x2b0);
    local_ec = 0.0;
    for (iVar4 = 0; iVar4 < *(int *)(in_stack_00000004 + 0x158) + -1; iVar4 = iVar4 + 1) {
      local_7c = pfVar5[-9] - *pfVar5;
      local_78 = pfVar5[-8] - pfVar5[1];
      local_74 = pfVar5[-7] - pfVar5[2];
      pfVar5 = pfVar5 + 9;
      local_ec = SQRT(local_74 * local_74 + local_7c * local_7c + local_78 * local_78) + local_ec;
    }
  }
  pfVar5 = (float *)(in_stack_00000004 + (*(int *)(in_stack_00000004 + 0x158) + -1) * 0x24 + 0x28c);
  *(float *)(in_stack_00000004 + 0x570) = 1.0 / in_stack_00000008;
  local_64 = *pfVar5;
  local_60 = pfVar5[1];
  local_5c = pfVar5[2];
  pcVar1 = (char *)core_chain_cpp_FUN_0042fcc0();
  pcVar2 = in_stack_00000004 + (*(int *)(in_stack_00000004 + 0x158) + -1) * 0x24 + 0x28c;
  if (pcVar2 != pcVar1) {
    *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
    *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar1 + 4);
    *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar1 + 8);
  }
  iVar4 = *(int *)(in_stack_00000004 + 0x158) + -1;
  pcVar1 = in_stack_00000004 + iVar4 * 0x24 + 0x2a0;
  pcVar1[0] = '\0';
  pcVar1[1] = '\0';
  pcVar1[2] = '\0';
  pcVar1[3] = '\0';
  *(undefined4 *)(in_stack_00000004 + iVar4 * 0x24 + 0x29c) =
       *(undefined4 *)(in_stack_00000004 + iVar4 * 0x24 + 0x2a0);
  *(undefined4 *)(in_stack_00000004 + iVar4 * 0x24 + 0x298) =
       *(undefined4 *)(in_stack_00000004 + iVar4 * 0x24 + 0x29c);
  if (in_stack_00000004 + 0x28c != in_stack_00000004 + 0x20) {
    *(undefined4 *)(in_stack_00000004 + 0x28c) = *(undefined4 *)(in_stack_00000004 + 0x20);
    *(undefined4 *)(in_stack_00000004 + 0x290) = *(undefined4 *)(in_stack_00000004 + 0x24);
    *(undefined4 *)(in_stack_00000004 + 0x294) = *(undefined4 *)(in_stack_00000004 + 0x28);
  }
  in_stack_00000004[0x2a0] = '\0';
  in_stack_00000004[0x2a1] = '\0';
  in_stack_00000004[0x2a2] = '\0';
  in_stack_00000004[0x2a3] = '\0';
  *(undefined4 *)(in_stack_00000004 + 0x29c) = *(undefined4 *)(in_stack_00000004 + 0x2a0);
  *(undefined4 *)(in_stack_00000004 + 0x298) = *(undefined4 *)(in_stack_00000004 + 0x29c);
  local_58 = in_stack_00000004 + 0x28c;
  local_40 = (float *)(in_stack_00000004 + 0x568);
  local_34 = in_stack_00000004 + 0x2d4;
  pfVar5 = (float *)(in_stack_00000004 + 700);
  local_38 = local_58;
  for (local_30 = 1; local_30 < *(int *)(in_stack_00000004 + 0x158) + -1; local_30 = local_30 + 1) {
    *pfVar5 = *local_40 * *pfVar5;
    pfVar5[1] = *local_40 * pfVar5[1];
    pfVar5[2] = *local_40 * pfVar5[2];
    local_44 = *(float *)(in_stack_00000004 + 0x55c) * (float)_DAT_006177da;
    local_b8 = (1.0 / local_44) * 0.0;
    local_b4 = (0.0 - *(float *)(in_stack_00000004 + 0x55c)) * (1.0 / local_44);
    pfVar3 = (float *)(local_58 + local_30 * 0x24);
    if (&local_d0 != &local_b8) {
      local_d0 = local_b8;
      local_cc = local_b4;
      local_c8 = local_b8;
    }
    local_88 = local_d0 * in_stack_00000008;
    local_84 = local_cc * in_stack_00000008;
    local_80 = local_c8 * in_stack_00000008;
    local_94 = pfVar3[3] + local_88;
    pfVar3[3] = local_94;
    local_94 = local_94 * in_stack_00000008;
    pfVar3[4] = pfVar3[4] + local_84;
    pfVar3[5] = pfVar3[5] + local_80;
    local_90 = pfVar3[4] * in_stack_00000008;
    local_8c = in_stack_00000008 * pfVar3[5];
    *pfVar3 = *pfVar3 + local_94;
    pfVar3[1] = pfVar3[1] + local_90;
    pfVar3[2] = pfVar3[2] + local_8c;
    local_b0 = local_b8;
    core_chain_cpp_FUN_0042fed0();
    core_chain_cpp_FUN_0042fed0();
    pfVar5 = pfVar5 + 9;
    local_34 = local_34 + 0x24;
    local_38 = local_38 + 0x24;
  }
  local_28 = in_stack_00000004 + 0x298;
  local_24 = in_stack_00000004 + 0x28c;
  local_2c = in_stack_00000004 + 0x20;
  local_4c = in_stack_00000004 + 0x2d4;
  local_48 = in_stack_00000004 + 0x2b0;
  local_3c = 0;
  do {
    pcVar1 = (char *)core_chain_cpp_FUN_0042fcc0();
    pcVar2 = local_24 + (*(int *)(in_stack_00000004 + 0x158) + -1) * 0x24;
    if (pcVar2 != pcVar1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
      *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar1 + 4);
      *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar1 + 8);
    }
    iVar4 = *(int *)(in_stack_00000004 + 0x158) + -1;
    pcVar1 = local_24 + iVar4 * 0x24 + 0x14;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x10) =
         *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x14);
    *(undefined4 *)(local_24 + iVar4 * 0x24 + 0xc) = *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x10)
    ;
    if (local_24 != local_2c) {
      *(undefined4 *)local_24 = *(undefined4 *)local_2c;
      *(undefined4 *)(local_24 + 4) = *(undefined4 *)(local_2c + 4);
      *(undefined4 *)(local_24 + 8) = *(undefined4 *)(local_2c + 8);
    }
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    local_1c = 1;
    *(undefined4 *)(local_28 + 4) = *(undefined4 *)(local_28 + 8);
    *(undefined4 *)local_28 = *(undefined4 *)(local_28 + 4);
    local_20 = local_24;
    for (; local_1c < *(int *)(in_stack_00000004 + 0x158) + -1; local_1c = local_1c + 1) {
      core_chain_cpp_FUN_0042fed0();
      core_chain_cpp_FUN_0042fed0();
      local_20 = local_20 + 0x24;
    }
    pcVar1 = (char *)core_chain_cpp_FUN_0042fcc0();
    pcVar2 = local_24 + (*(int *)(in_stack_00000004 + 0x158) + -1) * 0x24;
    if (pcVar2 != pcVar1) {
      *(undefined4 *)pcVar2 = *(undefined4 *)pcVar1;
      *(undefined4 *)(pcVar2 + 4) = *(undefined4 *)(pcVar1 + 4);
      *(undefined4 *)(pcVar2 + 8) = *(undefined4 *)(pcVar1 + 8);
    }
    iVar4 = *(int *)(in_stack_00000004 + 0x158) + -1;
    pcVar1 = local_24 + iVar4 * 0x24 + 0x14;
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x10) =
         *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x14);
    *(undefined4 *)(local_24 + iVar4 * 0x24 + 0xc) = *(undefined4 *)(local_24 + iVar4 * 0x24 + 0x10)
    ;
    if (local_24 != local_2c) {
      *(undefined4 *)local_24 = *(undefined4 *)local_2c;
      *(undefined4 *)(local_24 + 4) = *(undefined4 *)(local_2c + 4);
      *(undefined4 *)(local_24 + 8) = *(undefined4 *)(local_2c + 8);
    }
    local_28[8] = '\0';
    local_28[9] = '\0';
    local_28[10] = '\0';
    local_28[0xb] = '\0';
    *(undefined4 *)(local_28 + 4) = *(undefined4 *)(local_28 + 8);
    *(undefined4 *)local_28 = *(undefined4 *)(local_28 + 4);
    local_3c = local_3c + 1;
  } while (local_3c < 3);
  iVar4 = 0;
  if (0 < *(int *)(in_stack_00000004 + 0x158)) {
    pcVar1 = in_stack_00000004 + 0x2a4;
    do {
      pcVar2 = in_stack_00000004 + iVar4 * 0x24 + 0x28c;
      if (pcVar1 != pcVar2) {
        *(undefined4 *)pcVar1 = *(undefined4 *)pcVar2;
        *(undefined4 *)(pcVar1 + 4) = *(undefined4 *)(pcVar2 + 4);
        *(undefined4 *)(pcVar1 + 8) = *(undefined4 *)(pcVar2 + 8);
      }
      iVar4 = iVar4 + 1;
      pcVar1 = pcVar1 + 0x24;
    } while (iVar4 < *(int *)(in_stack_00000004 + 0x158));
  }
  local_54 = 0;
  local_50 = 0;
  if (*(int *)(in_stack_00000004 + 0x574) != 0) {
    if (local_ec < *(float *)(in_stack_00000004 + 0x15c) * (float)_DAT_006177e2) {
      pfVar5 = (float *)(in_stack_00000004 + 0x2b0);
      local_f0 = 0.0;
      for (iVar4 = 0; iVar4 < *(int *)(in_stack_00000004 + 0x158) + -1; iVar4 = iVar4 + 1) {
        local_c4 = pfVar5[-9] - *pfVar5;
        local_c0 = pfVar5[-8] - pfVar5[1];
        local_bc = pfVar5[-7] - pfVar5[2];
        pfVar5 = pfVar5 + 9;
        local_f0 = SQRT(local_bc * local_bc + local_c4 * local_c4 + local_c0 * local_c0) + local_f0;
      }
      if (*(float *)(in_stack_00000004 + 0x15c) * (float)_DAT_006177e2 < local_f0) {
        local_50 = 1;
      }
    }
    iVar4 = *(int *)(in_stack_00000004 + 0x158) + -1;
    local_a0 = local_64 - *(float *)(in_stack_00000004 + iVar4 * 0x24 + 0x28c);
    local_9c = local_60 - *(float *)(in_stack_00000004 + iVar4 * 0x24 + 0x290);
    local_98 = local_5c - *(float *)(in_stack_00000004 + iVar4 * 0x24 + 0x294);
    if (in_stack_00000008 * (float)_DAT_006177ea <
        SQRT(local_98 * local_98 + local_a0 * local_a0 + local_9c * local_9c)) {
      local_54 = 1;
    }
  }
  if ((local_50 != 0) && (in_stack_00000004[0x1b4] != '\0')) {
    sound_sndmain_cpp_FUN_005a9c40();
    iVar4 = sound_sndmain_cpp_FUN_005a9660();
    if (iVar4 == 0) {
      core_sound_cpp_CSound_FUN_005b3a70(g_CSoundPtr,in_stack_00000004,in_stack_00000004 + 0x1b4);
      *(undefined4 *)(in_stack_00000004 + 0x280) = extraout_EAX;
    }
  }
  *(float *)(in_stack_00000004 + 0x284) = *(float *)(in_stack_00000004 + 0x284) - in_stack_00000008;
  if (local_54 == 0) {
    if (0.0 <= *(float *)(in_stack_00000004 + 0x284)) {
      return;
    }
    in_stack_00000004[0x284] = '\0';
    in_stack_00000004[0x285] = '\0';
    in_stack_00000004[0x286] = '\0';
    in_stack_00000004[0x287] = '\0';
    sound_sndmain_cpp_FUN_005a9c40();
    return;
  }
  iVar4 = sound_sndmain_cpp_FUN_005a9660();
  if (iVar4 == 0) {
    iVar4 = sound_sndmain_cpp_FUN_005a9660();
    if (iVar4 == 0) {
      core_sound_cpp_CSound_FUN_005b3a70(g_CSoundPtr,in_stack_00000004,in_stack_00000004 + 0x21c);
      *(undefined4 *)(in_stack_00000004 + 0x280) = extraout_EAX_00;
    }
  }
  in_stack_00000004[0x284] = '\0';
  in_stack_00000004[0x285] = '\0';
  in_stack_00000004[0x286] = '\0';
  in_stack_00000004[0x287] = '?';
  return;
}


// Assembly code:
// 004300d0: PUSH EBX
//   Label: core_chain.cpp_FUN_004300d0
// 004300d1: PUSH ESI
// 004300d2: PUSH EDI
// 004300d3: PUSH EBP
// 004300d4: MOV EBP,ESP
// 004300d6: SUB ESP,0xdc
// 004300dc: AND ESP,0xfffffff8
// 004300df: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004300e2: FLD float ptr [ESI + 0x56c]
// 004300e8: FCOMP float ptr [0x006177d2]
//   XREF to: 006177d2 (READ)
// 004300ee: FNSTSW AX
// 004300f0: SAHF
// 004300f1: JC 0x0043015a
//   XREF to: 0043015a (CONDITIONAL_JUMP)
// 004300f3: CMP dword ptr [ESI + 0x574],0x0
//   Label: LAB_004300f3
// 004300fa: JZ 0x00430187
//   XREF to: 00430187 (CONDITIONAL_JUMP)
// 00430100: LEA EBX,[ESI + 0x2b0]
// 00430106: XOR ECX,ECX
// 00430108: XOR EDI,EDI
// 0043010a: MOV dword ptr [ESP + 0x4],ECX
//   XREF to: Stack[-0xec] (WRITE)
// 0043010e: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_0043010e
// 00430114: DEC EAX
// 00430115: CMP EDI,EAX
// 00430117: JGE 0x00430187
//   XREF to: 00430187 (CONDITIONAL_JUMP)
// 00430119: FLD float ptr [EBX + -0x24]
// 0043011c: FSUB float ptr [EBX]
// 0043011e: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x7c] (WRITE)
// 00430122: FLD float ptr [EBX + -0x20]
// 00430125: FSUB float ptr [EBX + 0x4]
// 00430128: FST float ptr [ESP + 0x78]
//   XREF to: Stack[-0x78] (WRITE)
// 0043012c: FMUL float ptr [ESP + 0x78]
//   XREF to: Stack[-0x78] (READ)
// 00430130: FLD float ptr [ESP + 0x74]
//   XREF to: Stack[-0x7c] (READ)
// 00430134: FMUL ST0
// 00430136: FLD float ptr [EBX + -0x1c]
// 00430139: FSUB float ptr [EBX + 0x8]
// 0043013c: FXCH
// 0043013e: FADDP ST2,ST0
// 00430140: FST float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (WRITE)
// 00430144: FMUL float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x74] (READ)
// 00430148: FADDP
// 0043014a: FSQRT
// 0043014c: ADD EBX,0x24
// 0043014f: FADD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xec] (READ)
// 00430153: INC EDI
// 00430154: FSTP float ptr [ESP + 0x4]
//   XREF to: Stack[-0xec] (WRITE)
// 00430158: JMP 0x0043010e
//   XREF to: 0043010e (UNCONDITIONAL_JUMP)
// 0043015a: PUSH 0x0
//   Label: LAB_0043015a
// 0043015c: MOV EAX,dword ptr [ESI + 0x154]
// 00430162: PUSH 0x3dcccccd
// 00430167: PUSH ESI
// 00430168: CALL dword ptr [EAX + 0x38]
// 0043016b: MOV dword ptr [ESP + 0xe4],EAX
// 00430172: MOV EAX,dword ptr [ESP + 0xe4]
// 00430179: MOV dword ptr [ESI + 0x56c],EAX
// 0043017f: ADD ESP,0xc
// 00430182: JMP 0x004300f3
//   XREF to: 004300f3 (UNCONDITIONAL_JUMP)
// 00430187: FLD float ptr [EBP + 0x18]
//   Label: LAB_00430187
//   XREF to: Stack[0x8] (READ)
// 0043018a: FLD1
// 0043018c: FDIVRP
// 0043018e: MOV EDX,dword ptr [ESI + 0x158]
// 00430194: DEC EDX
// 00430195: LEA EAX,[EDX*0x8 + 0x0]
// 0043019c: ADD EAX,EDX
// 0043019e: LEA EDI,[ESI + 0x28c]
// 004301a4: SHL EAX,0x2
// 004301a7: LEA EDX,[EDI + EAX*0x1]
// 004301aa: FSTP float ptr [ESI + 0x570]
// 004301b0: MOV EAX,dword ptr [EDX]
// 004301b2: MOV dword ptr [ESP + 0x8c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004301b9: LEA EAX,[EDX + 0x4]
// 004301bc: MOV EAX,dword ptr [EAX]
// 004301be: MOV dword ptr [ESP + 0x90],EAX
//   XREF to: Stack[-0x60] (WRITE)
// 004301c5: LEA EAX,[EDX + 0x8]
// 004301c8: MOV EAX,dword ptr [EAX]
// 004301ca: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x5c] (WRITE)
// 004301d1: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0xac] (DATA)
// 004301d5: PUSH EAX
// 004301d6: PUSH ESI
// 004301d7: CALL core_chain.cpp_FUN_0042fcc0
//   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)
// 004301dc: MOV EBX,dword ptr [ESI + 0x158]
// 004301e2: DEC EBX
// 004301e3: MOV EDX,EAX
// 004301e5: LEA EAX,[EBX*0x8 + 0x0]
// 004301ec: ADD EAX,EBX
// 004301ee: SHL EAX,0x2
// 004301f1: ADD EAX,EDI
// 004301f3: ADD ESP,0x8
// 004301f6: CMP EAX,EDX
// 004301f8: JZ 0x0043020a
//   XREF to: 0043020a (CONDITIONAL_JUMP)
// 004301fa: MOV ECX,dword ptr [EDX]
// 004301fc: MOV dword ptr [EAX],ECX
// 004301fe: MOV ECX,dword ptr [EDX + 0x4]
// 00430201: MOV dword ptr [EAX + 0x4],ECX
// 00430204: MOV ECX,dword ptr [EDX + 0x8]
// 00430207: MOV dword ptr [EAX + 0x8],ECX
// 0043020a: MOV EDX,dword ptr [ESI + 0x158]
//   Label: LAB_0043020a
// 00430210: DEC EDX
// 00430211: LEA EAX,[EDX*0x8 + 0x0]
// 00430218: ADD EAX,EDX
// 0043021a: LEA EDX,[ESI + 0x28c]
// 00430220: MOV dword ptr [EDX + EAX*0x4 + 0x14],0x0
// 00430228: MOV ECX,dword ptr [EDX + EAX*0x4 + 0x14]
// 0043022c: MOV dword ptr [EDX + EAX*0x4 + 0x10],ECX
// 00430230: MOV ECX,dword ptr [EDX + EAX*0x4 + 0x10]
// 00430234: MOV dword ptr [EDX + EAX*0x4 + 0xc],ECX
// 00430238: LEA EAX,[ESI + 0x20]
// 0043023b: CMP EDX,EAX
// 0043023d: JNZ 0x00430416
//   XREF to: 00430416 (CONDITIONAL_JUMP)
// 00430243: LEA EAX,[ESI + 0x298]
//   Label: LAB_00430243
// 00430249: MOV dword ptr [EAX + 0x8],0x0
// 00430250: MOV EDX,dword ptr [EAX + 0x8]
// 00430253: MOV dword ptr [EAX + 0x4],EDX
// 00430256: MOV EDX,dword ptr [EAX + 0x4]
// 00430259: MOV dword ptr [EAX],EDX
// 0043025b: LEA EAX,[ESI + 0x28c]
// 00430261: MOV dword ptr [ESP + 0x98],EAX
//   XREF to: Stack[-0x58] (WRITE)
// 00430268: LEA EAX,[ESI + 0x568]
// 0043026e: MOV EBX,0x1
// 00430273: MOV dword ptr [ESP + 0xb0],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0043027a: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 00430281: MOV dword ptr [ESP + 0xc0],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 00430288: ADD EAX,0x48
// 0043028b: MOV EDI,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 00430292: MOV dword ptr [ESP + 0xbc],EAX
//   XREF to: Stack[-0x34] (WRITE)
// 00430299: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 004302a0: ADD EDI,0x30
// 004302a3: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x38] (WRITE)
// 004302aa: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_004302aa
// 004302b0: MOV EDX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 004302b7: DEC EAX
// 004302b8: CMP EAX,EDX
// 004302ba: JG 0x0043042b
//   XREF to: 0043042b (CONDITIONAL_JUMP)
// 004302c0: LEA EAX,[ESI + 0x298]
// 004302c6: MOV dword ptr [ESP + 0xc8],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004302cd: LEA EAX,[ESI + 0x28c]
// 004302d3: MOV dword ptr [ESP + 0xcc],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004302da: LEA EAX,[ESI + 0x20]
// 004302dd: MOV dword ptr [ESP + 0xc4],EAX
//   XREF to: Stack[-0x2c] (WRITE)
// 004302e4: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 004302eb: ADD EAX,0x48
// 004302ee: MOV dword ptr [ESP + 0xa4],EAX
//   XREF to: Stack[-0x4c] (WRITE)
// 004302f5: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 004302fc: XOR ECX,ECX
// 004302fe: ADD EAX,0x24
// 00430301: MOV dword ptr [ESP + 0xb4],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00430308: MOV dword ptr [ESP + 0xa8],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0043030f: LEA EAX,[ESP + 0x80]
//   Label: LAB_0043030f
//   XREF to: Stack[-0x70] (DATA)
// 00430316: PUSH EAX
// 00430317: PUSH ESI
// 00430318: CALL core_chain.cpp_FUN_0042fcc0
//   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)
// 0043031d: MOV EBX,dword ptr [ESI + 0x158]
// 00430323: DEC EBX
// 00430324: IMUL EBX,EBX,0x24
// 00430327: ADD ESP,0x8
// 0043032a: ADD EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 00430331: CMP EBX,EAX
// 00430333: JZ 0x00430345
//   XREF to: 00430345 (CONDITIONAL_JUMP)
// 00430335: MOV EDX,dword ptr [EAX]
// 00430337: MOV dword ptr [EBX],EDX
// 00430339: MOV EDX,dword ptr [EAX + 0x4]
// 0043033c: MOV dword ptr [EBX + 0x4],EDX
// 0043033f: MOV EDX,dword ptr [EAX + 0x8]
// 00430342: MOV dword ptr [EBX + 0x8],EDX
// 00430345: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_00430345
// 0043034b: DEC EAX
// 0043034c: IMUL EAX,EAX,0x24
// 0043034f: MOV EDX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 00430356: ADD EAX,EDX
// 00430358: MOV dword ptr [EAX + 0x14],0x0
// 0043035f: MOV ECX,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x2c] (READ)
// 00430366: MOV EBX,dword ptr [EAX + 0x14]
// 00430369: MOV dword ptr [EAX + 0x10],EBX
// 0043036c: MOV EBX,dword ptr [EAX + 0x10]
// 0043036f: MOV dword ptr [EAX + 0xc],EBX
// 00430372: CMP EDX,ECX
// 00430374: JNZ 0x0043059f
//   XREF to: 0043059f (CONDITIONAL_JUMP)
// 0043037a: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0043037a
//   XREF to: Stack[-0x28] (READ)
// 00430381: MOV EBX,0x1
// 00430386: MOV EDI,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x4c] (READ)
// 0043038d: MOV dword ptr [EAX + 0x8],0x0
// 00430394: MOV dword ptr [ESP + 0xd4],EBX
//   XREF to: Stack[-0x1c] (WRITE)
// 0043039b: MOV EDX,dword ptr [EAX + 0x8]
// 0043039e: MOV dword ptr [EAX + 0x4],EDX
// 004303a1: MOV EDX,dword ptr [EAX + 0x4]
// 004303a4: MOV dword ptr [EAX],EDX
// 004303a6: MOV EAX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 004303ad: MOV EBX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x48] (READ)
// 004303b4: MOV dword ptr [ESP + 0xd0],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004303bb: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_004303bb
// 004303c1: MOV EDX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 004303c8: DEC EAX
// 004303c9: CMP EAX,EDX
// 004303cb: JLE 0x004305b6
//   XREF to: 004305b6 (CONDITIONAL_JUMP)
// 004303d1: MOV EAX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x20] (READ)
// 004303d8: PUSH EAX
// 004303d9: PUSH EBX
// 004303da: PUSH ESI
// 004303db: CALL core_chain.cpp_FUN_0042fed0
//   XREF to: 0042fed0 (UNCONDITIONAL_CALL)
// 004303e0: ADD ESP,0xc
// 004303e3: PUSH EDI
// 004303e4: PUSH EBX
// 004303e5: PUSH ESI
// 004303e6: ADD EDI,0x24
// 004303e9: CALL core_chain.cpp_FUN_0042fed0
//   XREF to: 0042fed0 (UNCONDITIONAL_CALL)
// 004303ee: ADD ESP,0xc
// 004303f1: ADD EBX,0x24
// 004303f4: MOV EDX,dword ptr [ESP + 0xd0]
//   XREF to: Stack[-0x20] (READ)
// 004303fb: MOV ECX,dword ptr [ESP + 0xd4]
//   XREF to: Stack[-0x1c] (READ)
// 00430402: ADD EDX,0x24
// 00430405: INC ECX
// 00430406: MOV dword ptr [ESP + 0xd0],EDX
//   XREF to: Stack[-0x20] (WRITE)
// 0043040d: MOV dword ptr [ESP + 0xd4],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 00430414: JMP 0x004303bb
//   XREF to: 004303bb (UNCONDITIONAL_JUMP)
// 00430416: MOV ECX,dword ptr [EAX]
//   Label: LAB_00430416
// 00430418: MOV dword ptr [EDX],ECX
// 0043041a: MOV ECX,dword ptr [EAX + 0x4]
// 0043041d: MOV dword ptr [EDX + 0x4],ECX
// 00430420: MOV ECX,dword ptr [EAX + 0x8]
// 00430423: MOV dword ptr [EDX + 0x8],ECX
// 00430426: JMP 0x00430243
//   XREF to: 00430243 (UNCONDITIONAL_JUMP)
// 0043042b: IMUL EBX,EDX,0x24
//   Label: LAB_0043042b
// 0043042e: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x40] (READ)
// 00430435: FLD float ptr [EAX]
// 00430437: FMUL float ptr [EDI]
// 00430439: FSTP float ptr [EDI]
// 0043043b: FLD float ptr [EAX]
// 0043043d: FMUL float ptr [EDI + 0x4]
// 00430440: FSTP float ptr [EDI + 0x4]
// 00430443: FLD float ptr [EAX]
// 00430445: FMUL float ptr [EDI + 0x8]
// 00430448: XOR ECX,ECX
// 0043044a: FSTP float ptr [EDI + 0x8]
// 0043044d: MOV dword ptr [ESP + 0x1c],ECX
//   XREF to: Stack[-0xd4] (WRITE)
// 00430451: MOV dword ptr [ESP + 0x18],ECX
//   XREF to: Stack[-0xd8] (WRITE)
// 00430455: MOV dword ptr [ESP + 0x14],ECX
//   XREF to: Stack[-0xdc] (WRITE)
// 00430459: FLD float ptr [ESI + 0x55c]
// 0043045f: FMUL double ptr [0x006177da]
//   XREF to: 006177da (READ)
// 00430465: FLD1
// 00430467: FLDZ
// 00430469: FXCH ST2
// 0043046b: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x44] (WRITE)
// 00430472: FDIV float ptr [ESP + 0xac]
//   XREF to: Stack[-0x44] (READ)
// 00430479: FXCH
// 0043047b: FMUL ST1
// 0043047d: FLDZ
// 0043047f: FSUB float ptr [ESI + 0x55c]
// 00430485: MOV EDX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x58] (READ)
// 0043048c: FST float ptr [ESP + 0x18]
//   XREF to: Stack[-0xd8] (WRITE)
// 00430490: FMULP ST2
// 00430492: ADD EBX,EDX
// 00430494: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (WRITE)
// 00430498: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 0043049c: LEA EDX,[ESP + 0x38]
//   XREF to: Stack[-0xb8] (DATA)
// 004304a0: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0xb0] (WRITE)
// 004304a4: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0xd0] (DATA)
// 004304a8: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0xb4] (WRITE)
// 004304ac: CMP EAX,EDX
// 004304ae: JZ 0x004304c8
//   XREF to: 004304c8 (CONDITIONAL_JUMP)
// 004304b0: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 004304b4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0xd0] (WRITE)
// 004304b8: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0xb4] (READ)
// 004304bc: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0xcc] (WRITE)
// 004304c0: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0xb8] (READ)
// 004304c4: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0xc8] (WRITE)
// 004304c8: FLD float ptr [EBP + 0x18]
//   Label: LAB_004304c8
//   XREF to: Stack[0x8] (READ)
// 004304cb: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0xd0] (READ)
// 004304cf: FMUL ST1
// 004304d1: FLD float ptr [ESP + 0x24]
//   XREF to: Stack[-0xcc] (READ)
// 004304d5: FMUL ST2
// 004304d7: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0xc8] (READ)
// 004304db: FMUL ST3
// 004304dd: LEA EAX,[EBX + 0xc]
// 004304e0: FXCH ST2
// 004304e2: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (WRITE)
// 004304e6: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x84] (WRITE)
// 004304ea: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (WRITE)
// 004304ee: FLD float ptr [EAX]
// 004304f0: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x88] (READ)
// 004304f4: FST float ptr [EAX]
// 004304f6: FMUL ST1
// 004304f8: FLD float ptr [EAX + 0x4]
// 004304fb: FADD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x84] (READ)
// 004304ff: FLD float ptr [EAX + 0x8]
// 00430502: FXCH
// 00430504: FSTP float ptr [EAX + 0x4]
// 00430507: FADD float ptr [ESP + 0x70]
//   XREF to: Stack[-0x80] (READ)
// 0043050b: MOV ECX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 00430512: FSTP float ptr [EAX + 0x8]
// 00430515: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x94] (WRITE)
// 00430519: FLD float ptr [EAX + 0x4]
// 0043051c: FMUL ST1
// 0043051e: PUSH ECX
// 0043051f: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x90] (WRITE)
// 00430523: FMUL float ptr [EAX + 0x8]
// 00430526: PUSH EBX
// 00430527: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x8c] (WRITE)
// 0043052b: FLD float ptr [EBX]
// 0043052d: FADD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x94] (READ)
// 00430531: FLD float ptr [EBX + 0x4]
// 00430534: FXCH
// 00430536: FSTP float ptr [EBX]
// 00430538: FADD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x90] (READ)
// 0043053c: FLD float ptr [EBX + 0x8]
// 0043053f: FXCH
// 00430541: FSTP float ptr [EBX + 0x4]
// 00430544: FADD float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x8c] (READ)
// 00430548: PUSH ESI
// 00430549: FSTP float ptr [EBX + 0x8]
// 0043054c: CALL core_chain.cpp_FUN_0042fed0
//   XREF to: 0042fed0 (UNCONDITIONAL_CALL)
// 00430551: ADD ESP,0xc
// 00430554: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x34] (READ)
// 0043055b: PUSH EAX
// 0043055c: PUSH EBX
// 0043055d: PUSH ESI
// 0043055e: CALL core_chain.cpp_FUN_0042fed0
//   XREF to: 0042fed0 (UNCONDITIONAL_CALL)
// 00430563: ADD ESP,0xc
// 00430566: ADD EDI,0x24
// 00430569: MOV EDX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x34] (READ)
// 00430570: MOV ECX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x38] (READ)
// 00430577: MOV EBX,dword ptr [ESP + 0xc0]
//   XREF to: Stack[-0x30] (READ)
// 0043057e: ADD EDX,0x24
// 00430581: ADD ECX,0x24
// 00430584: INC EBX
// 00430585: MOV dword ptr [ESP + 0xbc],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 0043058c: MOV dword ptr [ESP + 0xb8],ECX
//   XREF to: Stack[-0x38] (WRITE)
// 00430593: MOV dword ptr [ESP + 0xc0],EBX
//   XREF to: Stack[-0x30] (WRITE)
// 0043059a: JMP 0x004302aa
//   XREF to: 004302aa (UNCONDITIONAL_JUMP)
// 0043059f: MOV EAX,ECX
//   Label: LAB_0043059f
// 004305a1: MOV ECX,dword ptr [EAX]
// 004305a3: MOV dword ptr [EDX],ECX
// 004305a5: MOV ECX,dword ptr [EAX + 0x4]
// 004305a8: MOV dword ptr [EDX + 0x4],ECX
// 004305ab: MOV ECX,dword ptr [EAX + 0x8]
// 004305ae: MOV dword ptr [EDX + 0x8],ECX
// 004305b1: JMP 0x0043037a
//   XREF to: 0043037a (UNCONDITIONAL_JUMP)
// 004305b6: LEA EAX,[ESP + 0x8]
//   Label: LAB_004305b6
//   XREF to: Stack[-0xe8] (DATA)
// 004305ba: PUSH EAX
// 004305bb: PUSH ESI
// 004305bc: CALL core_chain.cpp_FUN_0042fcc0
//   XREF to: 0042fcc0 (UNCONDITIONAL_CALL)
// 004305c1: MOV EBX,dword ptr [ESI + 0x158]
// 004305c7: DEC EBX
// 004305c8: IMUL EBX,EBX,0x24
// 004305cb: ADD ESP,0x8
// 004305ce: ADD EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 004305d5: CMP EBX,EAX
// 004305d7: JZ 0x004305e9
//   XREF to: 004305e9 (CONDITIONAL_JUMP)
// 004305d9: MOV EDX,dword ptr [EAX]
// 004305db: MOV dword ptr [EBX],EDX
// 004305dd: MOV EDX,dword ptr [EAX + 0x4]
// 004305e0: MOV dword ptr [EBX + 0x4],EDX
// 004305e3: MOV EDX,dword ptr [EAX + 0x8]
// 004305e6: MOV dword ptr [EBX + 0x8],EDX
// 004305e9: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_004305e9
// 004305ef: DEC EAX
// 004305f0: IMUL EAX,EAX,0x24
// 004305f3: MOV EBX,dword ptr [ESP + 0xcc]
//   XREF to: Stack[-0x24] (READ)
// 004305fa: ADD EAX,EBX
// 004305fc: MOV dword ptr [EAX + 0x14],0x0
// 00430603: MOV EDI,dword ptr [ESP + 0xc4]
//   XREF to: Stack[-0x2c] (READ)
// 0043060a: MOV EDX,dword ptr [EAX + 0x14]
// 0043060d: MOV dword ptr [EAX + 0x10],EDX
// 00430610: MOV EDX,dword ptr [EAX + 0x10]
// 00430613: MOV dword ptr [EAX + 0xc],EDX
// 00430616: CMP EBX,EDI
// 00430618: JZ 0x0043062c
//   XREF to: 0043062c (CONDITIONAL_JUMP)
// 0043061a: MOV EAX,EDI
// 0043061c: MOV EDX,dword ptr [EAX]
// 0043061e: MOV dword ptr [EBX],EDX
// 00430620: MOV EDX,dword ptr [EAX + 0x4]
// 00430623: MOV dword ptr [EBX + 0x4],EDX
// 00430626: MOV EDX,dword ptr [EAX + 0x8]
// 00430629: MOV dword ptr [EBX + 0x8],EDX
// 0043062c: MOV EAX,dword ptr [ESP + 0xc8]
//   Label: LAB_0043062c
//   XREF to: Stack[-0x28] (READ)
// 00430633: MOV dword ptr [EAX + 0x8],0x0
// 0043063a: MOV EDX,dword ptr [EAX + 0x8]
// 0043063d: MOV dword ptr [EAX + 0x4],EDX
// 00430640: MOV EDX,dword ptr [EAX + 0x4]
// 00430643: MOV dword ptr [EAX],EDX
// 00430645: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x3c] (READ)
// 0043064c: INC EAX
// 0043064d: MOV dword ptr [ESP + 0xb4],EAX
//   XREF to: Stack[-0x3c] (WRITE)
// 00430654: CMP EAX,0x3
// 00430657: JL 0x0043030f
//   XREF to: 0043030f (CONDITIONAL_JUMP)
// 0043065d: MOV ECX,dword ptr [ESI + 0x158]
// 00430663: XOR EDI,EDI
// 00430665: TEST ECX,ECX
// 00430667: JLE 0x0043069c
//   XREF to: 0043069c (CONDITIONAL_JUMP)
// 00430669: LEA EDX,[ESI + 0x28c]
// 0043066f: LEA EBX,[ESI + 0x2a4]
// 00430675: IMUL EAX,EDI,0x24
//   Label: LAB_00430675
// 00430678: ADD EAX,EDX
// 0043067a: CMP EBX,EAX
// 0043067c: JZ 0x0043068e
//   XREF to: 0043068e (CONDITIONAL_JUMP)
// 0043067e: MOV ECX,dword ptr [EAX]
// 00430680: MOV dword ptr [EBX],ECX
// 00430682: MOV ECX,dword ptr [EAX + 0x4]
// 00430685: MOV dword ptr [EBX + 0x4],ECX
// 00430688: MOV ECX,dword ptr [EAX + 0x8]
// 0043068b: MOV dword ptr [EBX + 0x8],ECX
// 0043068e: INC EDI
//   Label: LAB_0043068e
// 0043068f: MOV EAX,dword ptr [ESI + 0x158]
// 00430695: ADD EBX,0x24
// 00430698: CMP EDI,EAX
// 0043069a: JL 0x00430675
//   XREF to: 00430675 (CONDITIONAL_JUMP)
// 0043069c: XOR EDX,EDX
//   Label: LAB_0043069c
// 0043069e: MOV EBX,dword ptr [ESI + 0x574]
// 004306a4: MOV dword ptr [ESP + 0x9c],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 004306ab: MOV dword ptr [ESP + 0xa0],EDX
//   XREF to: Stack[-0x50] (WRITE)
// 004306b2: TEST EBX,EBX
// 004306b4: JZ 0x004307c0
//   XREF to: 004307c0 (CONDITIONAL_JUMP)
// 004306ba: FLD float ptr [ESI + 0x15c]
// 004306c0: FMUL double ptr [0x006177e2]
//   XREF to: 006177e2 (READ)
// 004306c6: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0xec] (READ)
// 004306ca: FCOMPP
// 004306cc: FNSTSW AX
// 004306ce: SAHF
// 004306cf: JNC 0x0043074b
//   XREF to: 0043074b (CONDITIONAL_JUMP)
// 004306d5: LEA EBX,[ESI + 0x2b0]
// 004306db: MOV dword ptr [ESP],EDX
//   XREF to: Stack[-0xf0] (DATA)
// 004306de: XOR EDI,EDI
// 004306e0: MOV EAX,dword ptr [ESI + 0x158]
//   Label: LAB_004306e0
// 004306e6: DEC EAX
// 004306e7: CMP EDI,EAX
// 004306e9: JGE 0x0043072a
//   XREF to: 0043072a (CONDITIONAL_JUMP)
// 004306eb: FLD float ptr [EBX + -0x24]
// 004306ee: FSUB float ptr [EBX]
// 004306f0: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc4] (WRITE)
// 004306f4: FLD float ptr [EBX + -0x20]
// 004306f7: FSUB float ptr [EBX + 0x4]
// 004306fa: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (WRITE)
// 004306fe: FMUL float ptr [ESP + 0x30]
//   XREF to: Stack[-0xc0] (READ)
// 00430702: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0xc4] (READ)
// 00430706: FMUL ST0
// 00430708: FLD float ptr [EBX + -0x1c]
// 0043070b: FSUB float ptr [EBX + 0x8]
// 0043070e: FXCH
// 00430710: FADDP ST2,ST0
// 00430712: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0xbc] (WRITE)
// 00430716: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0xbc] (READ)
// 0043071a: FADDP
// 0043071c: FSQRT
// 0043071e: ADD EBX,0x24
// 00430721: FADD float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 00430724: INC EDI
// 00430725: FSTP float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 00430728: JMP 0x004306e0
//   XREF to: 004306e0 (UNCONDITIONAL_JUMP)
// 0043072a: FLD float ptr [ESI + 0x15c]
//   Label: LAB_0043072a
// 00430730: FMUL double ptr [0x006177e2]
//   XREF to: 006177e2 (READ)
// 00430736: FLD float ptr [ESP]
//   XREF to: Stack[-0xf0] (DATA)
// 00430739: FCOMPP
// 0043073b: FNSTSW AX
// 0043073d: SAHF
// 0043073e: JBE 0x0043074b
//   XREF to: 0043074b (CONDITIONAL_JUMP)
// 00430740: MOV dword ptr [ESP + 0xa0],0x1
//   XREF to: Stack[-0x50] (WRITE)
// 0043074b: MOV EDX,dword ptr [ESI + 0x158]
//   Label: LAB_0043074b
// 00430751: DEC EDX
// 00430752: LEA EAX,[EDX*0x8 + 0x0]
// 00430759: ADD EAX,EDX
// 0043075b: LEA EDX,[ESI + 0x28c]
// 00430761: FLD float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x64] (READ)
// 00430768: FSUB float ptr [EDX + EAX*0x4]
// 0043076b: FLD float ptr [ESP + 0x90]
//   XREF to: Stack[-0x60] (READ)
// 00430772: FXCH
// 00430774: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (WRITE)
// 00430778: FSUB float ptr [EDX + EAX*0x4 + 0x4]
// 0043077c: FST float ptr [ESP + 0x54]
//   XREF to: Stack[-0x9c] (WRITE)
// 00430780: FMUL float ptr [ESP + 0x54]
//   XREF to: Stack[-0x9c] (READ)
// 00430784: FLD float ptr [ESP + 0x50]
//   XREF to: Stack[-0xa0] (READ)
// 00430788: FMUL ST0
// 0043078a: FLD float ptr [ESP + 0x94]
//   XREF to: Stack[-0x5c] (READ)
// 00430791: FSUB float ptr [EDX + EAX*0x4 + 0x8]
// 00430795: FXCH
// 00430797: FADDP ST2,ST0
// 00430799: FST float ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (WRITE)
// 0043079d: FMUL float ptr [ESP + 0x58]
//   XREF to: Stack[-0x98] (READ)
// 004307a1: FADDP
// 004307a3: FSQRT
// 004307a5: FLD float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004307a8: FMUL double ptr [0x006177ea]
//   XREF to: 006177ea (READ)
// 004307ae: FCOMPP
// 004307b0: FNSTSW AX
// 004307b2: SAHF
// 004307b3: JNC 0x004307c0
//   XREF to: 004307c0 (CONDITIONAL_JUMP)
// 004307b5: MOV dword ptr [ESP + 0x9c],0x1
//   XREF to: Stack[-0x54] (WRITE)
// 004307c0: CMP dword ptr [ESP + 0xa0],0x0
//   Label: LAB_004307c0
//   XREF to: Stack[-0x50] (READ)
// 004307c8: JZ 0x004307f5
//   XREF to: 004307f5 (CONDITIONAL_JUMP)
// 004307ca: CMP byte ptr [ESI + 0x1b4],0x0
// 004307d1: JZ 0x004307f5
//   XREF to: 004307f5 (CONDITIONAL_JUMP)
// 004307d3: MOV EBX,dword ptr [ESI + 0x280]
// 004307d9: PUSH EBX
// 004307da: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004307df: ADD ESP,0x4
// 004307e2: MOV EDI,dword ptr [ESI + 0x218]
// 004307e8: PUSH EDI
// 004307e9: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 004307ee: ADD ESP,0x4
// 004307f1: TEST EAX,EAX
// 004307f3: JZ 0x00430829
//   XREF to: 00430829 (CONDITIONAL_JUMP)
// 004307f5: FLD float ptr [ESI + 0x284]
//   Label: LAB_004307f5
// 004307fb: FSUB float ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004307fe: MOV EDX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x54] (READ)
// 00430805: FSTP float ptr [ESI + 0x284]
// 0043080b: TEST EDX,EDX
// 0043080d: JNZ 0x00430863
//   XREF to: 00430863 (CONDITIONAL_JUMP)
// 0043080f: FLD float ptr [ESI + 0x284]
// 00430815: FLDZ
// 00430817: FCOMPP
// 00430819: FNSTSW AX
// 0043081b: SAHF
// 0043081c: JA 0x004308d2
//   XREF to: 004308d2 (CONDITIONAL_JUMP)
// 00430822: MOV ESP,EBP
// 00430824: POP EBP
// 00430825: POP EDI
// 00430826: POP ESI
// 00430827: POP EBX
// 00430828: RET
// 00430829: MOV EDX,dword ptr [ESI + 0x158]
//   Label: LAB_00430829
// 0043082f: DEC EDX
// 00430830: LEA EAX,[EDX*0x8 + 0x0]
// 00430837: ADD EAX,EDX
// 00430839: SHL EAX,0x2
// 0043083c: LEA EDX,[ESI + 0x28c]
// 00430842: ADD EAX,EDX
// 00430844: PUSH EAX
// 00430845: LEA EAX,[ESI + 0x1b4]
// 0043084b: PUSH EAX
// 0043084c: PUSH ESI
// 0043084d: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 00430852: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 00430853: CALL core_sound.cpp_CSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 00430858: ADD ESP,0x10
// 0043085b: MOV dword ptr [ESI + 0x280],EAX
// 00430861: JMP 0x004307f5
//   XREF to: 004307f5 (UNCONDITIONAL_JUMP)
// 00430863: MOV EBX,dword ptr [ESI + 0x218]
//   Label: LAB_00430863
// 00430869: PUSH EBX
// 0043086a: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 0043086f: ADD ESP,0x4
// 00430872: TEST EAX,EAX
// 00430874: JNZ 0x004308c1
//   XREF to: 004308c1 (CONDITIONAL_JUMP)
// 00430876: MOV EDI,dword ptr [ESI + 0x280]
// 0043087c: PUSH EDI
// 0043087d: CALL sound_sndmain.cpp_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00430882: ADD ESP,0x4
// 00430885: TEST EAX,EAX
// 00430887: JNZ 0x004308c1
//   XREF to: 004308c1 (CONDITIONAL_JUMP)
// 00430889: MOV EDX,dword ptr [ESI + 0x158]
// 0043088f: DEC EDX
// 00430890: LEA EAX,[EDX*0x8 + 0x0]
// 00430897: ADD EAX,EDX
// 00430899: SHL EAX,0x2
// 0043089c: LEA EDX,[ESI + 0x28c]
// 004308a2: ADD EAX,EDX
// 004308a4: PUSH EAX
// 004308a5: LEA EAX,[ESI + 0x21c]
// 004308ab: PUSH EAX
// 004308ac: PUSH ESI
// 004308ad: MOV EAX,[0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004308b2: PUSH EAX
//   XREF to: 03f6af64 (DATA)
// 004308b3: CALL core_sound.cpp_CSound_FUN_005b3a70
//   XREF to: 005b3a70 (UNCONDITIONAL_CALL)
// 004308b8: ADD ESP,0x10
// 004308bb: MOV dword ptr [ESI + 0x280],EAX
// 004308c1: MOV dword ptr [ESI + 0x284],0x3f000000
//   Label: LAB_004308c1
// 004308cb: MOV ESP,EBP
// 004308cd: POP EBP
// 004308ce: POP EDI
// 004308cf: POP ESI
// 004308d0: POP EBX
// 004308d1: RET
// 004308d2: MOV ECX,dword ptr [ESI + 0x280]
//   Label: LAB_004308d2
// 004308d8: PUSH ECX
// 004308d9: MOV dword ptr [ESI + 0x284],EDX
// 004308df: CALL sound_sndmain.cpp_FUN_005a9c40
//   XREF to: 005a9c40 (UNCONDITIONAL_CALL)
// 004308e4: ADD ESP,0x4
// 004308e7: MOV ESP,EBP
// 004308e9: POP EBP
// 004308ea: POP EDI
// 004308eb: POP ESI
// 004308ec: POP EBX
// 004308ed: RET
