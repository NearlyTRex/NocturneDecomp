// Name: core_glass.cpp_FUN_004ea1c0
// Address: 004ea1c0
// Address Range: [[004ea1c0, 004eaee2]]
// Convention: unknown
// Signature: undefined core_glass.cpp_FUN_004ea1c0()
// Cross-references:
//   core_glass.cpp_FUN_004eaef0 (004eaef0) at 004eb192 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_0062e0d9
//   undefined4 DAT_0062e0dd
//   undefined4 DAT_0062e0e1
//   undefined4 DAT_0062e0e5
//   WatcomTypeInfo g_CVectorTypeInfo
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_FUN_0040cd10
//   core_fire.cpp_CFireEffect_FUN_004c7d00
//   crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_glass_cpp_FUN_004ea1c0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  int unaff_EDI;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float *in_stack_00000010;
  int in_stack_00000018;
  int in_stack_0000001c;
  int in_stack_00000020;
  int in_stack_00000024;
  int in_stack_00000028;
  float *local_1e4;
  float *local_1e0;
  float *local_1dc;
  float *local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  float local_1c0;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  int local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_154;
  float local_150;
  float local_14c;
  float local_148;
  float local_144;
  int *local_140;
  float local_13c;
  float local_138;
  float local_12c;
  float local_128;
  float local_124;
  float local_120;
  float local_11c;
  float local_118;
  float local_108;
  float local_104;
  float local_100;
  float local_f8;
  float local_f4;
  float local_f0;
  float local_e8;
  float local_e4;
  float local_e0;
  float local_dc;
  float local_d4;
  float local_d0;
  float local_cc;
  float local_c0;
  float local_bc;
  float local_b8;
  float local_b4;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_78;
  float local_74;
  float local_70;
  float local_64;
  float local_60;
  float local_5c;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_38;
  float local_34;
  float local_30;
  float local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  float local_14;
  
  crt_memory_c_constructObjectArray_DefaultCtor_FUN_005fe667(&local_1e4,4,&g_CVectorTypeInfo);
  if (2 < in_stack_00000018) {
    local_1e4 = (float *)0x3f000000;
    iVar1 = core_actor_cpp_FUN_0040cd10();
    if (iVar1 != 0) goto LAB_004ea239;
  }
  if (unaff_EDI != 0) {
    if (&local_1dc != (float **)in_stack_00000008) {
      local_1dc = (float *)*in_stack_00000008;
      local_1d8 = (float *)in_stack_00000008[1];
      local_1d4 = in_stack_00000008[2];
    }
    local_78 = *in_stack_00000008 + in_stack_00000008[3];
    local_168 = local_78 / _DAT_0062e0d9;
    local_74 = in_stack_00000008[1] + in_stack_00000008[4];
    local_70 = in_stack_00000008[2] + in_stack_00000008[5];
    local_164 = local_74 * _DAT_0062e0dd;
    local_160 = local_70 * _DAT_0062e0dd;
    if (&local_1d0 != &local_168) {
      local_1d0 = local_168;
      local_1cc = local_164;
      local_1c8 = local_160;
    }
    local_120 = *in_stack_00000008 + in_stack_00000008[3];
    local_11c = in_stack_00000008[1] + in_stack_00000008[4];
    local_118 = in_stack_00000008[2] + in_stack_00000008[5];
    local_108 = local_120 + in_stack_00000008[6];
    local_104 = local_11c + in_stack_00000008[7];
    local_100 = local_118 + in_stack_00000008[8];
    local_e4 = local_108 + in_stack_00000008[9];
    local_90 = local_e4 / _DAT_0062e0e1;
    local_e0 = local_104 + in_stack_00000008[10];
    local_dc = local_100 + in_stack_00000008[0xb];
    local_8c = local_e0 * _DAT_0062e0e5;
    local_88 = local_dc * _DAT_0062e0e5;
    if (&local_1c4 != &local_90) {
      local_1c4 = local_90;
      local_1c0 = local_8c;
      local_1bc = local_88;
    }
    local_48 = *in_stack_00000008 + in_stack_00000008[9];
    local_54 = local_48 / _DAT_0062e0d9;
    local_44 = in_stack_00000008[1] + in_stack_00000008[10];
    local_40 = in_stack_00000008[2] + in_stack_00000008[0xb];
    local_50 = local_44 * _DAT_0062e0dd;
    local_4c = local_40 * _DAT_0062e0dd;
    if (&local_1b8 != &local_54) {
      local_1b8 = local_54;
      local_1b4 = local_50;
      local_1b0 = local_4c;
    }
    local_1ac = *in_stack_0000000c;
    local_1a8 = (float)(((int)local_1ac + (int)in_stack_0000000c[1]) / 2);
    iVar1 = (int)in_stack_0000000c[3] +
            (int)*in_stack_0000000c + (int)in_stack_0000000c[1] + (int)in_stack_0000000c[2];
    iVar2 = iVar1 >> 0x1f;
    local_1a4 = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_1a0 = (float)(((int)*in_stack_0000000c + (int)in_stack_0000000c[3]) / 2);
    local_19c = *in_stack_00000010;
    local_198 = (float)(((int)local_19c + (int)in_stack_00000010[1]) / 2);
    iVar1 = (int)in_stack_00000010[3] +
            (int)*in_stack_00000010 + (int)in_stack_00000010[1] + (int)in_stack_00000010[2];
    iVar2 = iVar1 >> 0x1f;
    local_194 = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_190 = (float)(((int)*in_stack_00000010 + (int)in_stack_00000010[3]) / 2);
    local_1e0 = (float *)(in_stack_0000001c + 1);
    local_1e4 = &local_19c;
    core_glass_cpp_FUN_004ea1c0();
    local_38 = *in_stack_00000008 + in_stack_00000008[3];
    local_140 = (int *)(local_38 / _DAT_0062e0d9);
    local_34 = in_stack_00000008[1] + in_stack_00000008[4];
    local_30 = in_stack_00000008[2] + in_stack_00000008[5];
    local_13c = local_34 * _DAT_0062e0dd;
    local_138 = local_30 * _DAT_0062e0dd;
    if (&local_1d8 != (float **)&local_140) {
      local_1d8 = (float *)local_140;
      local_1d4 = local_13c;
      local_1d0 = local_138;
    }
    if (&local_1cc != in_stack_00000008 + 3) {
      local_1cc = in_stack_00000008[3];
      local_1c8 = in_stack_00000008[4];
      local_1c4 = in_stack_00000008[5];
    }
    local_14 = in_stack_00000008[3] + in_stack_00000008[6];
    local_f8 = local_14 / _DAT_0062e0d9;
    local_f4 = (in_stack_00000008[4] + in_stack_00000008[7]) * _DAT_0062e0dd;
    local_f0 = (in_stack_00000008[5] + in_stack_00000008[8]) * _DAT_0062e0dd;
    if (&local_1c0 != &local_f8) {
      local_1c0 = local_f8;
      local_1bc = local_f4;
      local_1b8 = local_f0;
    }
    local_bc = *in_stack_00000008 + in_stack_00000008[3];
    local_b8 = in_stack_00000008[1] + in_stack_00000008[4];
    local_b4 = in_stack_00000008[2] + in_stack_00000008[5];
    local_d4 = local_bc + in_stack_00000008[6];
    local_d0 = local_b8 + in_stack_00000008[7];
    local_cc = local_b4 + in_stack_00000008[8];
    local_20 = local_d4 + in_stack_00000008[9];
    local_170 = local_20 / _DAT_0062e0e1;
    local_1c = local_d0 + in_stack_00000008[10];
    local_18 = local_cc + in_stack_00000008[0xb];
    local_16c = local_1c * _DAT_0062e0e5;
    local_168 = local_18 * _DAT_0062e0e5;
    if (&local_1b4 != &local_170) {
      local_1b4 = local_170;
      local_1b0 = local_16c;
      local_1ac = local_168;
    }
    local_1a8 = (float)(((int)*in_stack_0000000c + (int)in_stack_0000000c[1]) / 2);
    local_1a4 = in_stack_0000000c[1];
    local_1a0 = (float)(((int)local_1a4 + (int)in_stack_0000000c[2]) / 2);
    iVar1 = (int)in_stack_0000000c[2] + (int)*in_stack_0000000c + (int)in_stack_0000000c[1] +
            (int)in_stack_0000000c[3];
    iVar2 = iVar1 >> 0x1f;
    local_19c = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_198 = (float)(((int)*in_stack_00000010 + (int)in_stack_00000010[1]) / 2);
    local_194 = in_stack_00000010[1];
    local_190 = (float)(((int)local_194 + (int)in_stack_00000010[2]) / 2);
    iVar1 = (int)in_stack_00000010[3] +
            (int)*in_stack_00000010 + (int)in_stack_00000010[1] + (int)in_stack_00000010[2];
    iVar2 = iVar1 >> 0x1f;
    local_18c = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_1dc = (float *)(in_stack_00000020 + 1);
    local_1e0 = &local_198;
    local_1e4 = &local_1a8;
    core_glass_cpp_FUN_004ea1c0();
    local_178 = *in_stack_00000008 + in_stack_00000008[3];
    local_174 = in_stack_00000008[1] + in_stack_00000008[4];
    local_170 = in_stack_00000008[2] + in_stack_00000008[5];
    local_94 = local_178 + in_stack_00000008[6];
    local_90 = local_174 + in_stack_00000008[7];
    local_8c = local_170 + in_stack_00000008[8];
    local_28 = local_94 + in_stack_00000008[9];
    local_e8 = local_28 / _DAT_0062e0e1;
    local_24 = local_90 + in_stack_00000008[10];
    local_20 = local_8c + in_stack_00000008[0xb];
    local_e4 = local_24 * _DAT_0062e0e5;
    local_e0 = local_20 * _DAT_0062e0e5;
    if (&local_1d4 != &local_e8) {
      local_1d4 = local_e8;
      local_1d0 = local_e4;
      local_1cc = local_e0;
    }
    local_154 = in_stack_00000008[3] + in_stack_00000008[6];
    local_64 = local_154 / _DAT_0062e0d9;
    local_150 = in_stack_00000008[4] + in_stack_00000008[7];
    local_14c = in_stack_00000008[5] + in_stack_00000008[8];
    local_60 = local_150 * _DAT_0062e0dd;
    local_5c = local_14c * _DAT_0062e0dd;
    if (&local_1c8 != &local_64) {
      local_1c8 = local_64;
      local_1c4 = local_60;
      local_1c0 = local_5c;
    }
    if (&local_1bc != in_stack_00000008 + 6) {
      local_1bc = in_stack_00000008[6];
      local_1b8 = in_stack_00000008[7];
      local_1b4 = in_stack_00000008[8];
    }
    local_148 = in_stack_00000008[6] + in_stack_00000008[9];
    local_184 = local_148 / _DAT_0062e0d9;
    local_144 = in_stack_00000008[7] + in_stack_00000008[10];
    local_140 = (int *)(in_stack_00000008[8] + in_stack_00000008[0xb]);
    local_180 = local_144 * _DAT_0062e0dd;
    local_17c = (float)local_140 * _DAT_0062e0dd;
    if (&local_1b0 != &local_184) {
      local_1b0 = local_184;
      local_1ac = local_180;
      local_1a8 = local_17c;
    }
    iVar1 = (int)in_stack_0000000c[2] + (int)*in_stack_0000000c + (int)in_stack_0000000c[1] +
            (int)in_stack_0000000c[3];
    iVar2 = iVar1 >> 0x1f;
    local_1a4 = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_1a0 = (float)(((int)in_stack_0000000c[1] + (int)in_stack_0000000c[2]) / 2);
    local_19c = in_stack_0000000c[2];
    local_198 = (float)(((int)local_19c + (int)in_stack_0000000c[3]) / 2);
    iVar1 = (int)in_stack_00000010[3] +
            (int)*in_stack_00000010 + (int)in_stack_00000010[1] + (int)in_stack_00000010[2];
    iVar2 = iVar1 >> 0x1f;
    local_194 = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_190 = (float)(((int)in_stack_00000010[1] + (int)in_stack_00000010[2]) / 2);
    local_18c = in_stack_00000010[2];
    local_188 = ((int)local_18c + (int)in_stack_00000010[3]) / 2;
    local_1d8 = (float *)(in_stack_00000024 + 1);
    local_1dc = &local_194;
    local_1e0 = &local_1a4;
    local_1e4 = &local_1d4;
    core_glass_cpp_FUN_004ea1c0();
    local_108 = *in_stack_00000008 + in_stack_00000008[9];
    local_120 = local_108 / _DAT_0062e0d9;
    local_104 = in_stack_00000008[1] + in_stack_00000008[10];
    local_100 = in_stack_00000008[2] + in_stack_00000008[0xb];
    local_11c = local_104 * _DAT_0062e0dd;
    local_118 = local_100 * _DAT_0062e0dd;
    if (&local_1d0 != &local_120) {
      local_1d0 = local_120;
      local_1cc = local_11c;
      local_1c8 = local_118;
    }
    local_54 = *in_stack_00000008 + in_stack_00000008[3];
    local_50 = in_stack_00000008[1] + in_stack_00000008[4];
    local_4c = in_stack_00000008[2] + in_stack_00000008[5];
    local_c0 = local_54 + in_stack_00000008[6];
    local_bc = local_50 + in_stack_00000008[7];
    local_b8 = local_4c + in_stack_00000008[8];
    local_a8 = local_c0 + in_stack_00000008[9];
    local_78 = local_a8 / _DAT_0062e0e1;
    local_a4 = local_bc + in_stack_00000008[10];
    local_a0 = local_b8 + in_stack_00000008[0xb];
    local_74 = local_a4 * _DAT_0062e0e5;
    local_70 = local_a0 * _DAT_0062e0e5;
    if (&local_1c4 != &local_78) {
      local_1c4 = local_78;
      local_1c0 = local_74;
      local_1bc = local_70;
    }
    local_9c = in_stack_00000008[6] + in_stack_00000008[9];
    local_12c = local_9c / _DAT_0062e0d9;
    local_98 = in_stack_00000008[7] + in_stack_00000008[10];
    local_94 = in_stack_00000008[8] + in_stack_00000008[0xb];
    local_128 = local_98 * _DAT_0062e0dd;
    local_124 = local_94 * _DAT_0062e0dd;
    if (&local_1b8 != &local_12c) {
      local_1b8 = local_12c;
      local_1b4 = local_128;
      local_1b0 = local_124;
    }
    if (&local_1ac != in_stack_00000008 + 9) {
      local_1ac = in_stack_00000008[9];
      local_1a8 = in_stack_00000008[10];
      local_1a4 = in_stack_00000008[0xb];
    }
    local_1a0 = (float)(((int)*in_stack_0000000c + (int)in_stack_0000000c[3]) / 2);
    iVar1 = (int)in_stack_0000000c[2] + (int)*in_stack_0000000c + (int)in_stack_0000000c[1] +
            (int)in_stack_0000000c[3];
    iVar2 = iVar1 >> 0x1f;
    local_19c = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_198 = (float)(((int)in_stack_0000000c[2] + (int)in_stack_0000000c[3]) / 2);
    local_194 = in_stack_0000000c[3];
    local_190 = (float)(((int)*in_stack_00000010 + (int)in_stack_00000010[3]) / 2);
    iVar1 = (int)in_stack_00000010[2] + (int)*in_stack_00000010 + (int)in_stack_00000010[1] +
            (int)in_stack_00000010[3];
    iVar2 = iVar1 >> 0x1f;
    local_18c = (float)((int)((iVar1 + iVar2 * -4) - (uint)(iVar2 << 1 < 0)) >> 2);
    local_188 = ((int)in_stack_00000010[2] + (int)in_stack_00000010[3]) / 2;
    local_184 = in_stack_00000010[3];
    local_1d4 = (float)(in_stack_00000028 + 1);
    local_1d8 = &local_190;
    local_1dc = &local_1a0;
    local_1e0 = &local_1d0;
    local_1e4 = in_stack_00000004;
    core_glass_cpp_FUN_004ea1c0();
    return;
  }
LAB_004ea239:
  if (&local_1dc != (float **)in_stack_00000008) {
    local_1dc = (float *)*in_stack_00000008;
    local_1d8 = (float *)in_stack_00000008[1];
    local_1d4 = in_stack_00000008[2];
  }
  if (&local_1d0 != in_stack_00000008 + 3) {
    local_1d0 = in_stack_00000008[3];
    local_1cc = in_stack_00000008[4];
    local_1c8 = in_stack_00000008[5];
  }
  if (&local_1c4 != in_stack_00000008 + 6) {
    local_1c4 = in_stack_00000008[6];
    local_1c0 = in_stack_00000008[7];
    local_1bc = in_stack_00000008[8];
  }
  local_1ac = *in_stack_0000000c;
  local_1a8 = in_stack_0000000c[1];
  local_1a4 = in_stack_0000000c[2];
  local_19c = *in_stack_00000010;
  local_198 = in_stack_00000010[1];
  local_194 = in_stack_00000010[2];
  local_1e0 = (float *)in_stack_00000004[0x5f];
  local_1e4 = in_stack_00000004 + 0x59;
  core_fire_cpp_CFireEffect_FUN_004c7d00(g_CFireEffectPtr);
  if (&local_1cc != in_stack_00000008 + 6) {
    local_1cc = in_stack_00000008[6];
    local_1c8 = in_stack_00000008[7];
    local_1c4 = in_stack_00000008[8];
  }
  if (&local_1c0 != in_stack_00000008 + 9) {
    local_1c0 = in_stack_00000008[9];
    local_1bc = in_stack_00000008[10];
    local_1b8 = in_stack_00000008[0xb];
  }
  local_1a4 = in_stack_0000000c[2];
  local_1a0 = in_stack_0000000c[3];
  local_194 = in_stack_00000010[2];
  local_190 = in_stack_00000010[3];
  local_1dc = (float *)in_stack_00000004[0x5f];
  local_1e0 = in_stack_00000004 + 0x59;
  local_1e4 = &local_198;
  core_fire_cpp_CFireEffect_FUN_004c7d00(g_CFireEffectPtr);
  return;
}


// Assembly code:
// 004ea1c0: PUSH EBX
//   Label: core_glass.cpp_FUN_004ea1c0
// 004ea1c1: PUSH ESI
// 004ea1c2: PUSH EDI
// 004ea1c3: PUSH EBP
// 004ea1c4: SUB ESP,0x1d4
// 004ea1ca: MOV EBP,dword ptr [ESP + 0x1e8]
//   XREF to: Stack[0x4] (READ)
// 004ea1d1: MOV EBX,dword ptr [ESP + 0x1ec]
//   XREF to: Stack[0x8] (READ)
// 004ea1d8: MOV ESI,dword ptr [ESP + 0x1f0]
//   XREF to: Stack[0xc] (READ)
// 004ea1df: MOV EDI,dword ptr [ESP + 0x1f4]
//   XREF to: Stack[0x10] (READ)
// 004ea1e6: PUSH 0x6598c0
//   XREF to: 006598c0 (DATA)
// 004ea1eb: PUSH 0x4
// 004ea1ed: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea1f1: PUSH EAX
// 004ea1f2: CALL crt_memory.c_constructObjectArray_DefaultCtor_FUN_005fe667
//   XREF to: 005fe667 (UNCONDITIONAL_CALL)
// 004ea1f7: ADD ESP,0xc
// 004ea1fa: MOV EDX,0x1
// 004ea1ff: MOV ECX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x14] (READ)
// 004ea206: MOV dword ptr [ESP + 0x1d0],EDX
//   XREF to: Stack[-0x14] (WRITE)
// 004ea20d: CMP ECX,0x3
// 004ea210: JG 0x004ea375
//   XREF to: 004ea375 (CONDITIONAL_JUMP)
// 004ea216: CMP dword ptr [ESP + 0x1f8],0x2
//   Label: LAB_004ea216
//   XREF to: Stack[0x14] (READ)
// 004ea21e: JLE 0x004ea383
//   XREF to: 004ea383 (CONDITIONAL_JUMP)
// 004ea224: PUSH 0x3f000000
// 004ea229: CALL core_actor.cpp_FUN_0040cd10
//   XREF to: 0040cd10 (UNCONDITIONAL_CALL)
// 004ea22e: ADD ESP,0x4
// 004ea231: TEST EAX,EAX
// 004ea233: JZ 0x004ea383
//   XREF to: 004ea383 (CONDITIONAL_JUMP)
// 004ea239: MOV EAX,ESP
//   Label: LAB_004ea239
// 004ea23b: CMP EAX,EBX
// 004ea23d: JZ 0x004ea252
//   XREF to: 004ea252 (CONDITIONAL_JUMP)
// 004ea23f: MOV EAX,dword ptr [EBX]
// 004ea241: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea244: MOV EAX,dword ptr [EBX + 0x4]
// 004ea247: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004ea24b: MOV EAX,dword ptr [EBX + 0x8]
// 004ea24e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004ea252: LEA EAX,[ESP + 0xc]
//   Label: LAB_004ea252
//   XREF to: Stack[-0x1d8] (DATA)
// 004ea256: LEA EDX,[EBX + 0xc]
// 004ea259: CMP EAX,EDX
// 004ea25b: JZ 0x004ea271
//   XREF to: 004ea271 (CONDITIONAL_JUMP)
// 004ea25d: MOV EAX,dword ptr [EDX]
// 004ea25f: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004ea263: MOV EAX,dword ptr [EDX + 0x4]
// 004ea266: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004ea26a: MOV EAX,dword ptr [EDX + 0x8]
// 004ea26d: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004ea271: LEA EAX,[ESP + 0x18]
//   Label: LAB_004ea271
//   XREF to: Stack[-0x1cc] (DATA)
// 004ea275: LEA EDX,[EBX + 0x18]
// 004ea278: CMP EAX,EDX
// 004ea27a: JZ 0x004ea290
//   XREF to: 004ea290 (CONDITIONAL_JUMP)
// 004ea27c: MOV EAX,dword ptr [EDX]
// 004ea27e: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004ea282: MOV EAX,dword ptr [EDX + 0x4]
// 004ea285: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004ea289: MOV EAX,dword ptr [EDX + 0x8]
// 004ea28c: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004ea290: MOV EAX,dword ptr [ESI]
//   Label: LAB_004ea290
// 004ea292: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004ea296: MOV EAX,dword ptr [ESI + 0x4]
// 004ea299: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004ea29d: MOV EAX,dword ptr [ESI + 0x8]
// 004ea2a0: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004ea2a4: MOV EAX,dword ptr [EDI]
// 004ea2a6: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004ea2aa: MOV EAX,dword ptr [EDI + 0x4]
// 004ea2ad: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004ea2b1: MOV EAX,dword ptr [EDI + 0x8]
// 004ea2b4: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004ea2b8: MOV EAX,dword ptr [EBP + 0x17c]
// 004ea2be: PUSH EAX
// 004ea2bf: LEA EAX,[EBP + 0x164]
// 004ea2c5: PUSH EAX
// 004ea2c6: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x1a4] (DATA)
// 004ea2ca: PUSH EAX
// 004ea2cb: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1b4] (DATA)
// 004ea2cf: PUSH EAX
// 004ea2d0: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea2d4: PUSH EAX
// 004ea2d5: MOV EDX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004ea2db: PUSH EDX
//   XREF to: 02d12db0 (DATA)
// 004ea2dc: CALL core_fire.cpp_CFireEffect_FUN_004c7d00
//   XREF to: 004c7d00 (UNCONDITIONAL_CALL)
// 004ea2e1: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1d8] (DATA)
// 004ea2e5: LEA EDX,[EBX + 0x18]
// 004ea2e8: ADD ESP,0x18
// 004ea2eb: CMP EAX,EDX
// 004ea2ed: JZ 0x004ea303
//   XREF to: 004ea303 (CONDITIONAL_JUMP)
// 004ea2ef: MOV EAX,dword ptr [EDX]
// 004ea2f1: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004ea2f5: MOV EAX,dword ptr [EDX + 0x4]
// 004ea2f8: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004ea2fc: MOV EAX,dword ptr [EDX + 0x8]
// 004ea2ff: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004ea303: LEA EAX,[ESP + 0x18]
//   Label: LAB_004ea303
//   XREF to: Stack[-0x1cc] (DATA)
// 004ea307: ADD EBX,0x24
// 004ea30a: CMP EAX,EBX
// 004ea30c: JZ 0x004ea322
//   XREF to: 004ea322 (CONDITIONAL_JUMP)
// 004ea30e: MOV EAX,dword ptr [EBX]
// 004ea310: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004ea314: MOV EAX,dword ptr [EBX + 0x4]
// 004ea317: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004ea31b: MOV EAX,dword ptr [EBX + 0x8]
// 004ea31e: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004ea322: MOV EAX,dword ptr [ESI + 0x8]
//   Label: LAB_004ea322
// 004ea325: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004ea329: MOV EAX,dword ptr [ESI + 0xc]
// 004ea32c: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004ea330: MOV EAX,dword ptr [EDI + 0x8]
// 004ea333: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004ea337: MOV EAX,dword ptr [EDI + 0xc]
// 004ea33a: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004ea33e: MOV ECX,dword ptr [EBP + 0x17c]
// 004ea344: PUSH ECX
// 004ea345: ADD EBP,0x164
// 004ea34b: PUSH EBP
// 004ea34c: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x1a4] (DATA)
// 004ea350: PUSH EAX
// 004ea351: LEA EAX,[ESP + 0x3c]
//   XREF to: Stack[-0x1b4] (DATA)
// 004ea355: PUSH EAX
// 004ea356: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea35a: PUSH EAX
// 004ea35b: MOV EBX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004ea361: PUSH EBX
//   XREF to: 02d12db0 (DATA)
// 004ea362: CALL core_fire.cpp_CFireEffect_FUN_004c7d00
//   XREF to: 004c7d00 (UNCONDITIONAL_CALL)
// 004ea367: ADD ESP,0x18
// 004ea36a: ADD ESP,0x1d4
// 004ea370: POP EBP
// 004ea371: POP EDI
// 004ea372: POP ESI
// 004ea373: POP EBX
// 004ea374: RET
// 004ea375: XOR EAX,EAX
//   Label: LAB_004ea375
// 004ea377: MOV dword ptr [ESP + 0x1d0],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 004ea37e: JMP 0x004ea216
//   XREF to: 004ea216 (UNCONDITIONAL_JUMP)
// 004ea383: CMP dword ptr [ESP + 0x1d0],0x0
//   Label: LAB_004ea383
//   XREF to: Stack[-0x14] (READ)
// 004ea38b: JZ 0x004ea239
//   XREF to: 004ea239 (CONDITIONAL_JUMP)
// 004ea391: MOV EAX,ESP
// 004ea393: CMP EAX,EBX
// 004ea395: JNZ 0x004eaecb
//   XREF to: 004eaecb (CONDITIONAL_JUMP)
// 004ea39b: LEA EAX,[EBX + 0xc]
//   Label: LAB_004ea39b
// 004ea39e: FLD float ptr [EBX]
// 004ea3a0: FADD float ptr [EAX]
// 004ea3a2: FST float ptr [ESP + 0x164]
//   XREF to: Stack[-0x80] (WRITE)
// 004ea3a9: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004ea3af: FLD float ptr [EBX + 0x4]
// 004ea3b2: FADD float ptr [EAX + 0x4]
// 004ea3b5: FST float ptr [ESP + 0x168]
//   XREF to: Stack[-0x7c] (WRITE)
// 004ea3bc: FLD float ptr [EBX + 0x8]
// 004ea3bf: FADD float ptr [EAX + 0x8]
// 004ea3c2: FXCH
// 004ea3c4: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004ea3ca: FXCH
// 004ea3cc: FMUL ST1
// 004ea3ce: FXCH ST2
// 004ea3d0: FST float ptr [ESP + 0x16c]
//   XREF to: Stack[-0x78] (WRITE)
// 004ea3d7: FMULP
// 004ea3d9: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x1d8] (DATA)
// 004ea3dd: FXCH
// 004ea3df: FSTP float ptr [ESP + 0x78]
//   XREF to: Stack[-0x16c] (WRITE)
// 004ea3e3: LEA EAX,[ESP + 0x74]
//   XREF to: Stack[-0x170] (DATA)
// 004ea3e7: FSTP float ptr [ESP + 0x7c]
//   XREF to: Stack[-0x168] (WRITE)
// 004ea3eb: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x170] (WRITE)
// 004ea3ef: CMP EDX,EAX
// 004ea3f1: JZ 0x004ea40b
//   XREF to: 004ea40b (CONDITIONAL_JUMP)
// 004ea3f3: MOV EAX,dword ptr [ESP + 0x74]
//   XREF to: Stack[-0x170] (DATA)
// 004ea3f7: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004ea3fb: MOV EAX,dword ptr [ESP + 0x78]
//   XREF to: Stack[-0x16c] (READ)
// 004ea3ff: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004ea403: MOV EAX,dword ptr [ESP + 0x7c]
//   XREF to: Stack[-0x168] (READ)
// 004ea407: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004ea40b: LEA EAX,[EBX + 0xc]
//   Label: LAB_004ea40b
// 004ea40e: FLD float ptr [EBX]
// 004ea410: FADD float ptr [EAX]
// 004ea412: LEA ECX,[EBX + 0x18]
// 004ea415: FSTP float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x128] (WRITE)
// 004ea41c: FLD float ptr [EBX + 0x4]
// 004ea41f: FADD float ptr [EAX + 0x4]
// 004ea422: LEA EDX,[EBX + 0x24]
// 004ea425: FSTP float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x124] (WRITE)
// 004ea42c: FLD float ptr [EBX + 0x8]
// 004ea42f: FADD float ptr [EAX + 0x8]
// 004ea432: FLD float ptr [ESP + 0xbc]
//   XREF to: Stack[-0x128] (READ)
// 004ea439: FXCH
// 004ea43b: FSTP float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x120] (WRITE)
// 004ea442: FADD float ptr [ECX]
// 004ea444: FLD float ptr [ESP + 0xc0]
//   XREF to: Stack[-0x124] (READ)
// 004ea44b: FXCH
// 004ea44d: FSTP float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x110] (WRITE)
// 004ea454: FADD float ptr [ECX + 0x4]
// 004ea457: FLD float ptr [ESP + 0xc4]
//   XREF to: Stack[-0x120] (READ)
// 004ea45e: FXCH
// 004ea460: FSTP float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x10c] (WRITE)
// 004ea467: FADD float ptr [ECX + 0x8]
// 004ea46a: FLD float ptr [ESP + 0xd4]
//   XREF to: Stack[-0x110] (READ)
// 004ea471: FXCH
// 004ea473: FSTP float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x108] (WRITE)
// 004ea47a: FADD float ptr [EDX]
// 004ea47c: FST float ptr [ESP + 0xf8]
//   XREF to: Stack[-0xec] (WRITE)
// 004ea483: FDIV float ptr [0x0062e0e1]
//   XREF to: 0062e0e1 (READ)
// 004ea489: FLD float ptr [ESP + 0xd8]
//   XREF to: Stack[-0x10c] (READ)
// 004ea490: FADD float ptr [EDX + 0x4]
// 004ea493: FLD float ptr [ESP + 0xdc]
//   XREF to: Stack[-0x108] (READ)
// 004ea49a: FXCH
// 004ea49c: FST float ptr [ESP + 0xfc]
//   XREF to: Stack[-0xe8] (WRITE)
// 004ea4a3: FXCH
// 004ea4a5: FADD float ptr [EDX + 0x8]
// 004ea4a8: FXCH
// 004ea4aa: FLD float ptr [0x0062e0e5]
//   XREF to: 0062e0e5 (READ)
// 004ea4b0: FXCH
// 004ea4b2: FMUL ST1
// 004ea4b4: FXCH ST2
// 004ea4b6: FST float ptr [ESP + 0x100]
//   XREF to: Stack[-0xe4] (WRITE)
// 004ea4bd: FMULP
// 004ea4bf: LEA EAX,[ESP + 0x14c]
//   XREF to: Stack[-0x98] (DATA)
// 004ea4c6: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x1cc] (DATA)
// 004ea4ca: FXCH
// 004ea4cc: FSTP float ptr [ESP + 0x150]
//   XREF to: Stack[-0x94] (WRITE)
// 004ea4d3: FSTP float ptr [ESP + 0x154]
//   XREF to: Stack[-0x90] (WRITE)
// 004ea4da: FSTP float ptr [ESP + 0x14c]
//   XREF to: Stack[-0x98] (WRITE)
// 004ea4e1: CMP EDX,EAX
// 004ea4e3: JZ 0x004ea506
//   XREF to: 004ea506 (CONDITIONAL_JUMP)
// 004ea4e5: MOV EAX,dword ptr [ESP + 0x14c]
//   XREF to: Stack[-0x98] (DATA)
// 004ea4ec: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004ea4f0: MOV EAX,dword ptr [ESP + 0x150]
//   XREF to: Stack[-0x94] (READ)
// 004ea4f7: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004ea4fb: MOV EAX,dword ptr [ESP + 0x154]
//   XREF to: Stack[-0x90] (READ)
// 004ea502: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004ea506: LEA EAX,[EBX + 0x24]
//   Label: LAB_004ea506
// 004ea509: FLD float ptr [EBX]
// 004ea50b: FADD float ptr [EAX]
// 004ea50d: FST float ptr [ESP + 0x194]
//   XREF to: Stack[-0x50] (WRITE)
// 004ea514: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004ea51a: FLD float ptr [EBX + 0x4]
// 004ea51d: FADD float ptr [EAX + 0x4]
// 004ea520: FST float ptr [ESP + 0x198]
//   XREF to: Stack[-0x4c] (WRITE)
// 004ea527: FLD float ptr [EBX + 0x8]
// 004ea52a: FADD float ptr [EAX + 0x8]
// 004ea52d: FXCH
// 004ea52f: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004ea535: FXCH
// 004ea537: FMUL ST1
// 004ea539: FXCH ST2
// 004ea53b: FST float ptr [ESP + 0x19c]
//   XREF to: Stack[-0x48] (WRITE)
// 004ea542: FMULP
// 004ea544: LEA EDX,[ESP + 0x24]
//   XREF to: Stack[-0x1c0] (DATA)
// 004ea548: FXCH
// 004ea54a: FSTP float ptr [ESP + 0x18c]
//   XREF to: Stack[-0x58] (WRITE)
// 004ea551: LEA EAX,[ESP + 0x188]
//   XREF to: Stack[-0x5c] (DATA)
// 004ea558: FSTP float ptr [ESP + 0x190]
//   XREF to: Stack[-0x54] (WRITE)
// 004ea55f: FSTP float ptr [ESP + 0x188]
//   XREF to: Stack[-0x5c] (WRITE)
// 004ea566: CMP EDX,EAX
// 004ea568: JZ 0x004ea58b
//   XREF to: 004ea58b (CONDITIONAL_JUMP)
// 004ea56a: MOV EAX,dword ptr [ESP + 0x188]
//   XREF to: Stack[-0x5c] (DATA)
// 004ea571: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 004ea575: MOV EAX,dword ptr [ESP + 0x18c]
//   XREF to: Stack[-0x58] (READ)
// 004ea57c: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 004ea580: MOV EAX,dword ptr [ESP + 0x190]
//   XREF to: Stack[-0x54] (READ)
// 004ea587: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 004ea58b: MOV EAX,dword ptr [ESI]
//   Label: LAB_004ea58b
// 004ea58d: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004ea591: MOV EDX,EAX
// 004ea593: MOV EAX,dword ptr [ESI + 0x4]
// 004ea596: ADD EDX,EAX
// 004ea598: MOV EAX,EDX
// 004ea59a: SAR EDX,0x1f
// 004ea59d: SUB EAX,EDX
// 004ea59f: SAR EAX,0x1
// 004ea5a1: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004ea5a5: MOV EAX,dword ptr [ESI]
// 004ea5a7: MOV EDX,dword ptr [ESI + 0x4]
// 004ea5aa: MOV ECX,dword ptr [ESI + 0x8]
// 004ea5ad: ADD EAX,EDX
// 004ea5af: MOV EDX,dword ptr [ESI + 0xc]
// 004ea5b2: ADD EAX,ECX
// 004ea5b4: ADD EDX,EAX
// 004ea5b6: MOV EAX,EDX
// 004ea5b8: SAR EDX,0x1f
// 004ea5bb: SHL EDX,0x2
// 004ea5be: SBB EAX,EDX
// 004ea5c0: SAR EAX,0x2
// 004ea5c3: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004ea5c7: MOV EDX,dword ptr [ESI]
// 004ea5c9: MOV EAX,dword ptr [ESI + 0xc]
// 004ea5cc: ADD EDX,EAX
// 004ea5ce: MOV EAX,EDX
// 004ea5d0: SAR EDX,0x1f
// 004ea5d3: SUB EAX,EDX
// 004ea5d5: SAR EAX,0x1
// 004ea5d7: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004ea5db: MOV EAX,dword ptr [EDI]
// 004ea5dd: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004ea5e1: MOV ECX,dword ptr [EDI + 0x4]
// 004ea5e4: LEA EDX,[EAX + ECX*0x1]
// 004ea5e7: MOV EAX,EDX
// 004ea5e9: SAR EDX,0x1f
// 004ea5ec: SUB EAX,EDX
// 004ea5ee: SAR EAX,0x1
// 004ea5f0: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004ea5f4: MOV EAX,dword ptr [EDI]
// 004ea5f6: MOV EDX,dword ptr [EDI + 0x4]
// 004ea5f9: MOV ECX,dword ptr [EDI + 0x8]
// 004ea5fc: ADD EAX,EDX
// 004ea5fe: MOV EDX,dword ptr [EDI + 0xc]
// 004ea601: ADD EAX,ECX
// 004ea603: ADD EDX,EAX
// 004ea605: MOV EAX,EDX
// 004ea607: SAR EDX,0x1f
// 004ea60a: SHL EDX,0x2
// 004ea60d: SBB EAX,EDX
// 004ea60f: SAR EAX,0x2
// 004ea612: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004ea616: MOV EDX,dword ptr [EDI]
// 004ea618: MOV EAX,dword ptr [EDI + 0xc]
// 004ea61b: ADD EDX,EAX
// 004ea61d: MOV EAX,EDX
// 004ea61f: SAR EDX,0x1f
// 004ea622: SUB EAX,EDX
// 004ea624: SAR EAX,0x1
// 004ea626: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004ea62a: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x14] (READ)
// 004ea631: INC EAX
// 004ea632: PUSH EAX
// 004ea633: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1a4] (DATA)
// 004ea637: PUSH EAX
// 004ea638: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b4] (DATA)
// 004ea63c: PUSH EAX
// 004ea63d: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea641: PUSH EAX
// 004ea642: PUSH EBP
// 004ea643: CALL core_glass.cpp_FUN_004ea1c0
//   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)
// 004ea648: LEA EAX,[EBX + 0xc]
// 004ea64b: FLD float ptr [EBX]
// 004ea64d: FADD float ptr [EAX]
// 004ea64f: ADD ESP,0x14
// 004ea652: FST float ptr [ESP + 0x1a0]
//   XREF to: Stack[-0x44] (WRITE)
// 004ea659: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004ea65f: FLD float ptr [EBX + 0x4]
// 004ea662: FADD float ptr [EAX + 0x4]
// 004ea665: FST float ptr [ESP + 0x1a4]
//   XREF to: Stack[-0x40] (WRITE)
// 004ea66c: FLD float ptr [EBX + 0x8]
// 004ea66f: FADD float ptr [EAX + 0x8]
// 004ea672: FXCH
// 004ea674: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004ea67a: FXCH
// 004ea67c: FMUL ST1
// 004ea67e: FXCH ST2
// 004ea680: FST float ptr [ESP + 0x1a8]
//   XREF to: Stack[-0x3c] (WRITE)
// 004ea687: FMULP
// 004ea689: MOV EDX,ESP
// 004ea68b: FXCH
// 004ea68d: FSTP float ptr [ESP + 0x9c]
//   XREF to: Stack[-0x148] (WRITE)
// 004ea694: LEA EAX,[ESP + 0x98]
//   XREF to: Stack[-0x14c] (DATA)
// 004ea69b: FSTP float ptr [ESP + 0xa0]
//   XREF to: Stack[-0x144] (WRITE)
// 004ea6a2: FSTP float ptr [ESP + 0x98]
//   XREF to: Stack[-0x14c] (WRITE)
// 004ea6a9: CMP EDX,EAX
// 004ea6ab: JZ 0x004ea6cd
//   XREF to: 004ea6cd (CONDITIONAL_JUMP)
// 004ea6ad: MOV EAX,dword ptr [ESP + 0x98]
//   XREF to: Stack[-0x14c] (DATA)
// 004ea6b4: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea6b7: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x148] (READ)
// 004ea6be: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004ea6c2: MOV EAX,dword ptr [ESP + 0xa0]
//   XREF to: Stack[-0x144] (READ)
// 004ea6c9: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004ea6cd: LEA EAX,[ESP + 0xc]
//   Label: LAB_004ea6cd
//   XREF to: Stack[-0x1d8] (DATA)
// 004ea6d1: LEA EDX,[EBX + 0xc]
// 004ea6d4: CMP EAX,EDX
// 004ea6d6: JZ 0x004ea6ec
//   XREF to: 004ea6ec (CONDITIONAL_JUMP)
// 004ea6d8: MOV EAX,dword ptr [EDX]
// 004ea6da: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004ea6de: MOV EAX,dword ptr [EDX + 0x4]
// 004ea6e1: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004ea6e5: MOV EAX,dword ptr [EDX + 0x8]
// 004ea6e8: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004ea6ec: LEA EAX,[EBX + 0xc]
//   Label: LAB_004ea6ec
// 004ea6ef: LEA EDX,[EBX + 0x18]
// 004ea6f2: FLD float ptr [EAX]
// 004ea6f4: FADD float ptr [EDX]
// 004ea6f6: FST float ptr [ESP + 0x1c4]
//   XREF to: Stack[-0x20] (WRITE)
// 004ea6fd: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004ea703: FLD float ptr [EAX + 0x4]
// 004ea706: FADD float ptr [EDX + 0x4]
// 004ea709: FST float ptr [ESP + 0x1c8]
//   XREF to: Stack[-0x1c] (WRITE)
// 004ea710: FLD float ptr [EAX + 0x8]
// 004ea713: FADD float ptr [EDX + 0x8]
// 004ea716: FXCH
// 004ea718: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004ea71e: FXCH
// 004ea720: FMUL ST1
// 004ea722: FXCH ST2
// 004ea724: FST float ptr [ESP + 0x1cc]
//   XREF to: Stack[-0x18] (WRITE)
// 004ea72b: FMULP
// 004ea72d: LEA EAX,[ESP + 0xe0]
//   XREF to: Stack[-0x104] (DATA)
// 004ea734: FXCH
// 004ea736: FSTP float ptr [ESP + 0xe4]
//   XREF to: Stack[-0x100] (WRITE)
// 004ea73d: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x1cc] (DATA)
// 004ea741: FSTP float ptr [ESP + 0xe8]
//   XREF to: Stack[-0xfc] (WRITE)
// 004ea748: FSTP float ptr [ESP + 0xe0]
//   XREF to: Stack[-0x104] (WRITE)
// 004ea74f: CMP EDX,EAX
// 004ea751: JZ 0x004ea774
//   XREF to: 004ea774 (CONDITIONAL_JUMP)
// 004ea753: MOV EAX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[-0x104] (DATA)
// 004ea75a: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004ea75e: MOV EAX,dword ptr [ESP + 0xe4]
//   XREF to: Stack[-0x100] (READ)
// 004ea765: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004ea769: MOV EAX,dword ptr [ESP + 0xe8]
//   XREF to: Stack[-0xfc] (READ)
// 004ea770: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004ea774: LEA EDX,[EBX + 0xc]
//   Label: LAB_004ea774
// 004ea777: FLD float ptr [EBX]
// 004ea779: FADD float ptr [EDX]
// 004ea77b: LEA ECX,[EBX + 0x18]
// 004ea77e: FSTP float ptr [ESP + 0x11c]
//   XREF to: Stack[-0xc8] (WRITE)
// 004ea785: FLD float ptr [EBX + 0x4]
// 004ea788: FADD float ptr [EDX + 0x4]
// 004ea78b: LEA EAX,[EBX + 0x24]
// 004ea78e: FSTP float ptr [ESP + 0x120]
//   XREF to: Stack[-0xc4] (WRITE)
// 004ea795: FLD float ptr [EBX + 0x8]
// 004ea798: FADD float ptr [EDX + 0x8]
// 004ea79b: FLD float ptr [ESP + 0x11c]
//   XREF to: Stack[-0xc8] (READ)
// 004ea7a2: FXCH
// 004ea7a4: FSTP float ptr [ESP + 0x124]
//   XREF to: Stack[-0xc0] (WRITE)
// 004ea7ab: FADD float ptr [ECX]
// 004ea7ad: FLD float ptr [ESP + 0x120]
//   XREF to: Stack[-0xc4] (READ)
// 004ea7b4: FXCH
// 004ea7b6: FSTP float ptr [ESP + 0x104]
//   XREF to: Stack[-0xe0] (WRITE)
// 004ea7bd: FADD float ptr [ECX + 0x4]
// 004ea7c0: FLD float ptr [ESP + 0x124]
//   XREF to: Stack[-0xc0] (READ)
// 004ea7c7: FXCH
// 004ea7c9: FSTP float ptr [ESP + 0x108]
//   XREF to: Stack[-0xdc] (WRITE)
// 004ea7d0: FADD float ptr [ECX + 0x8]
// 004ea7d3: FLD float ptr [ESP + 0x104]
//   XREF to: Stack[-0xe0] (READ)
// 004ea7da: FXCH
// 004ea7dc: FSTP float ptr [ESP + 0x10c]
//   XREF to: Stack[-0xd8] (WRITE)
// 004ea7e3: FADD float ptr [EAX]
// 004ea7e5: FST float ptr [ESP + 0x1b8]
//   XREF to: Stack[-0x2c] (WRITE)
// 004ea7ec: FDIV float ptr [0x0062e0e1]
//   XREF to: 0062e0e1 (READ)
// 004ea7f2: FLD float ptr [ESP + 0x108]
//   XREF to: Stack[-0xdc] (READ)
// 004ea7f9: FADD float ptr [EAX + 0x4]
// 004ea7fc: FLD float ptr [ESP + 0x10c]
//   XREF to: Stack[-0xd8] (READ)
// 004ea803: FXCH
// 004ea805: FST float ptr [ESP + 0x1bc]
//   XREF to: Stack[-0x28] (WRITE)
// 004ea80c: FXCH
// 004ea80e: FADD float ptr [EAX + 0x8]
// 004ea811: FXCH
// 004ea813: FLD float ptr [0x0062e0e5]
//   XREF to: 0062e0e5 (READ)
// 004ea819: FXCH
// 004ea81b: FMUL ST1
// 004ea81d: FXCH ST2
// 004ea81f: FST float ptr [ESP + 0x1c0]
//   XREF to: Stack[-0x24] (WRITE)
// 004ea826: FMULP
// 004ea828: LEA EDX,[ESP + 0x68]
//   XREF to: Stack[-0x17c] (DATA)
// 004ea82c: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c0] (DATA)
// 004ea830: FXCH
// 004ea832: FSTP float ptr [ESP + 0x6c]
//   XREF to: Stack[-0x178] (WRITE)
// 004ea836: FSTP float ptr [ESP + 0x70]
//   XREF to: Stack[-0x174] (WRITE)
// 004ea83a: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x17c] (WRITE)
// 004ea83e: CMP EAX,EDX
// 004ea840: JZ 0x004ea85a
//   XREF to: 004ea85a (CONDITIONAL_JUMP)
// 004ea842: MOV EAX,dword ptr [ESP + 0x68]
//   XREF to: Stack[-0x17c] (READ)
// 004ea846: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 004ea84a: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[-0x178] (READ)
// 004ea84e: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 004ea852: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[-0x174] (READ)
// 004ea856: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 004ea85a: MOV EDX,dword ptr [ESI]
//   Label: LAB_004ea85a
// 004ea85c: MOV ECX,dword ptr [ESI + 0x4]
// 004ea85f: ADD EDX,ECX
// 004ea861: MOV EAX,EDX
// 004ea863: SAR EDX,0x1f
// 004ea866: SUB EAX,EDX
// 004ea868: SAR EAX,0x1
// 004ea86a: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004ea86e: MOV EAX,dword ptr [ESI + 0x4]
// 004ea871: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004ea875: MOV EDX,EAX
// 004ea877: MOV EAX,dword ptr [ESI + 0x8]
// 004ea87a: ADD EDX,EAX
// 004ea87c: MOV EAX,EDX
// 004ea87e: SAR EDX,0x1f
// 004ea881: SUB EAX,EDX
// 004ea883: SAR EAX,0x1
// 004ea885: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004ea889: MOV EAX,dword ptr [ESI]
// 004ea88b: ADD EAX,dword ptr [ESI + 0x4]
// 004ea88e: MOV EDX,dword ptr [ESI + 0x8]
// 004ea891: MOV ECX,dword ptr [ESI + 0xc]
// 004ea894: ADD EDX,EAX
// 004ea896: ADD EDX,ECX
// 004ea898: MOV EAX,EDX
// 004ea89a: SAR EDX,0x1f
// 004ea89d: SHL EDX,0x2
// 004ea8a0: SBB EAX,EDX
// 004ea8a2: SAR EAX,0x2
// 004ea8a5: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004ea8a9: MOV EDX,dword ptr [EDI]
// 004ea8ab: MOV EAX,dword ptr [EDI + 0x4]
// 004ea8ae: ADD EDX,EAX
// 004ea8b0: MOV EAX,EDX
// 004ea8b2: SAR EDX,0x1f
// 004ea8b5: SUB EAX,EDX
// 004ea8b7: SAR EAX,0x1
// 004ea8b9: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004ea8bd: MOV EAX,dword ptr [EDI + 0x4]
// 004ea8c0: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004ea8c4: MOV ECX,dword ptr [EDI + 0x8]
// 004ea8c7: LEA EDX,[EAX + ECX*0x1]
// 004ea8ca: MOV EAX,EDX
// 004ea8cc: SAR EDX,0x1f
// 004ea8cf: SUB EAX,EDX
// 004ea8d1: SAR EAX,0x1
// 004ea8d3: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004ea8d7: MOV EAX,dword ptr [EDI]
// 004ea8d9: MOV EDX,dword ptr [EDI + 0x4]
// 004ea8dc: MOV ECX,dword ptr [EDI + 0x8]
// 004ea8df: ADD EAX,EDX
// 004ea8e1: MOV EDX,dword ptr [EDI + 0xc]
// 004ea8e4: ADD EAX,ECX
// 004ea8e6: ADD EDX,EAX
// 004ea8e8: MOV EAX,EDX
// 004ea8ea: SAR EDX,0x1f
// 004ea8ed: SHL EDX,0x2
// 004ea8f0: SBB EAX,EDX
// 004ea8f2: SAR EAX,0x2
// 004ea8f5: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004ea8f9: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x14] (READ)
// 004ea900: INC EAX
// 004ea901: PUSH EAX
// 004ea902: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1a4] (DATA)
// 004ea906: PUSH EAX
// 004ea907: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b4] (DATA)
// 004ea90b: PUSH EAX
// 004ea90c: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea910: PUSH EAX
// 004ea911: PUSH EBP
// 004ea912: CALL core_glass.cpp_FUN_004ea1c0
//   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)
// 004ea917: LEA ECX,[EBX + 0xc]
// 004ea91a: FLD float ptr [EBX]
// 004ea91c: ADD ESP,0x14
// 004ea91f: FADD float ptr [ECX]
// 004ea921: LEA EDX,[EBX + 0x18]
// 004ea924: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x188] (WRITE)
// 004ea928: FLD float ptr [EBX + 0x4]
// 004ea92b: FADD float ptr [ECX + 0x4]
// 004ea92e: LEA EAX,[EBX + 0x24]
// 004ea931: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x184] (WRITE)
// 004ea935: FLD float ptr [EBX + 0x8]
// 004ea938: FADD float ptr [ECX + 0x8]
// 004ea93b: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x188] (READ)
// 004ea93f: FXCH
// 004ea941: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x180] (WRITE)
// 004ea945: FADD float ptr [EDX]
// 004ea947: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x184] (READ)
// 004ea94b: FXCH
// 004ea94d: FSTP float ptr [ESP + 0x140]
//   XREF to: Stack[-0xa4] (WRITE)
// 004ea954: FADD float ptr [EDX + 0x4]
// 004ea957: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x180] (READ)
// 004ea95b: FXCH
// 004ea95d: FSTP float ptr [ESP + 0x144]
//   XREF to: Stack[-0xa0] (WRITE)
// 004ea964: FADD float ptr [EDX + 0x8]
// 004ea967: FLD float ptr [ESP + 0x140]
//   XREF to: Stack[-0xa4] (READ)
// 004ea96e: FXCH
// 004ea970: FSTP float ptr [ESP + 0x148]
//   XREF to: Stack[-0x9c] (WRITE)
// 004ea977: FADD float ptr [EAX]
// 004ea979: FST float ptr [ESP + 0x1ac]
//   XREF to: Stack[-0x38] (WRITE)
// 004ea980: FDIV float ptr [0x0062e0e1]
//   XREF to: 0062e0e1 (READ)
// 004ea986: FLD float ptr [ESP + 0x144]
//   XREF to: Stack[-0xa0] (READ)
// 004ea98d: FADD float ptr [EAX + 0x4]
// 004ea990: FLD float ptr [ESP + 0x148]
//   XREF to: Stack[-0x9c] (READ)
// 004ea997: FXCH
// 004ea999: FST float ptr [ESP + 0x1b0]
//   XREF to: Stack[-0x34] (WRITE)
// 004ea9a0: FXCH
// 004ea9a2: FADD float ptr [EAX + 0x8]
// 004ea9a5: FXCH
// 004ea9a7: FLD float ptr [0x0062e0e5]
//   XREF to: 0062e0e5 (READ)
// 004ea9ad: FXCH
// 004ea9af: FMUL ST1
// 004ea9b1: FXCH ST2
// 004ea9b3: FST float ptr [ESP + 0x1b4]
//   XREF to: Stack[-0x30] (WRITE)
// 004ea9ba: FMULP
// 004ea9bc: LEA EDX,[ESP + 0xec]
//   XREF to: Stack[-0xf8] (DATA)
// 004ea9c3: MOV EAX,ESP
// 004ea9c5: FXCH
// 004ea9c7: FSTP float ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf4] (WRITE)
// 004ea9ce: FSTP float ptr [ESP + 0xf4]
//   XREF to: Stack[-0xf0] (WRITE)
// 004ea9d5: FSTP float ptr [ESP + 0xec]
//   XREF to: Stack[-0xf8] (WRITE)
// 004ea9dc: CMP EAX,EDX
// 004ea9de: JZ 0x004eaa00
//   XREF to: 004eaa00 (CONDITIONAL_JUMP)
// 004ea9e0: MOV EAX,dword ptr [ESP + 0xec]
//   XREF to: Stack[-0xf8] (READ)
// 004ea9e7: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e4] (DATA)
// 004ea9ea: MOV EAX,dword ptr [ESP + 0xf0]
//   XREF to: Stack[-0xf4] (READ)
// 004ea9f1: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004ea9f5: MOV EAX,dword ptr [ESP + 0xf4]
//   XREF to: Stack[-0xf0] (READ)
// 004ea9fc: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004eaa00: LEA EDX,[EBX + 0xc]
//   Label: LAB_004eaa00
// 004eaa03: LEA EAX,[EBX + 0x18]
// 004eaa06: FLD float ptr [EDX]
// 004eaa08: FADD float ptr [EAX]
// 004eaa0a: FST float ptr [ESP + 0x80]
//   XREF to: Stack[-0x164] (WRITE)
// 004eaa11: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004eaa17: FLD float ptr [EDX + 0x4]
// 004eaa1a: FADD float ptr [EAX + 0x4]
// 004eaa1d: FST float ptr [ESP + 0x84]
//   XREF to: Stack[-0x160] (WRITE)
// 004eaa24: FLD float ptr [EDX + 0x8]
// 004eaa27: FADD float ptr [EAX + 0x8]
// 004eaa2a: FXCH
// 004eaa2c: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004eaa32: FXCH
// 004eaa34: FMUL ST1
// 004eaa36: FXCH ST2
// 004eaa38: FST float ptr [ESP + 0x88]
//   XREF to: Stack[-0x15c] (WRITE)
// 004eaa3f: FMULP
// 004eaa41: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x1d8] (DATA)
// 004eaa45: FXCH
// 004eaa47: FSTP float ptr [ESP + 0x174]
//   XREF to: Stack[-0x70] (WRITE)
// 004eaa4e: LEA EAX,[ESP + 0x170]
//   XREF to: Stack[-0x74] (DATA)
// 004eaa55: FSTP float ptr [ESP + 0x178]
//   XREF to: Stack[-0x6c] (WRITE)
// 004eaa5c: FSTP float ptr [ESP + 0x170]
//   XREF to: Stack[-0x74] (WRITE)
// 004eaa63: CMP EDX,EAX
// 004eaa65: JZ 0x004eaa88
//   XREF to: 004eaa88 (CONDITIONAL_JUMP)
// 004eaa67: MOV EAX,dword ptr [ESP + 0x170]
//   XREF to: Stack[-0x74] (DATA)
// 004eaa6e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004eaa72: MOV EAX,dword ptr [ESP + 0x174]
//   XREF to: Stack[-0x70] (READ)
// 004eaa79: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004eaa7d: MOV EAX,dword ptr [ESP + 0x178]
//   XREF to: Stack[-0x6c] (READ)
// 004eaa84: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004eaa88: LEA EAX,[ESP + 0x18]
//   Label: LAB_004eaa88
//   XREF to: Stack[-0x1cc] (DATA)
// 004eaa8c: LEA EDX,[EBX + 0x18]
// 004eaa8f: CMP EAX,EDX
// 004eaa91: JZ 0x004eaaa7
//   XREF to: 004eaaa7 (CONDITIONAL_JUMP)
// 004eaa93: MOV EAX,dword ptr [EDX]
// 004eaa95: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004eaa99: MOV EAX,dword ptr [EDX + 0x4]
// 004eaa9c: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004eaaa0: MOV EAX,dword ptr [EDX + 0x8]
// 004eaaa3: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004eaaa7: LEA EDX,[EBX + 0x18]
//   Label: LAB_004eaaa7
// 004eaaaa: LEA EAX,[EBX + 0x24]
// 004eaaad: FLD float ptr [EDX]
// 004eaaaf: FADD float ptr [EAX]
// 004eaab1: FST float ptr [ESP + 0x8c]
//   XREF to: Stack[-0x158] (WRITE)
// 004eaab8: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004eaabe: FLD float ptr [EDX + 0x4]
// 004eaac1: FADD float ptr [EAX + 0x4]
// 004eaac4: FST float ptr [ESP + 0x90]
//   XREF to: Stack[-0x154] (WRITE)
// 004eaacb: FLD float ptr [EDX + 0x8]
// 004eaace: FADD float ptr [EAX + 0x8]
// 004eaad1: FXCH
// 004eaad3: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004eaad9: FXCH
// 004eaadb: FMUL ST1
// 004eaadd: FXCH ST2
// 004eaadf: FST float ptr [ESP + 0x94]
//   XREF to: Stack[-0x150] (WRITE)
// 004eaae6: FMULP
// 004eaae8: LEA EDX,[ESP + 0x50]
//   XREF to: Stack[-0x194] (DATA)
// 004eaaec: FXCH
// 004eaaee: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x190] (WRITE)
// 004eaaf2: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x1c0] (DATA)
// 004eaaf6: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x18c] (WRITE)
// 004eaafa: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x194] (WRITE)
// 004eaafe: CMP EAX,EDX
// 004eab00: JZ 0x004eab1a
//   XREF to: 004eab1a (CONDITIONAL_JUMP)
// 004eab02: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x194] (READ)
// 004eab06: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 004eab0a: MOV EAX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x190] (READ)
// 004eab0e: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 004eab12: MOV EAX,dword ptr [ESP + 0x58]
//   XREF to: Stack[-0x18c] (READ)
// 004eab16: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 004eab1a: MOV EAX,dword ptr [ESI]
//   Label: LAB_004eab1a
// 004eab1c: ADD EAX,dword ptr [ESI + 0x4]
// 004eab1f: MOV EDX,dword ptr [ESI + 0x8]
// 004eab22: MOV ECX,dword ptr [ESI + 0xc]
// 004eab25: ADD EDX,EAX
// 004eab27: ADD EDX,ECX
// 004eab29: MOV EAX,EDX
// 004eab2b: SAR EDX,0x1f
// 004eab2e: SHL EDX,0x2
// 004eab31: SBB EAX,EDX
// 004eab33: SAR EAX,0x2
// 004eab36: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004eab3a: MOV EDX,dword ptr [ESI + 0x4]
// 004eab3d: MOV EAX,dword ptr [ESI + 0x8]
// 004eab40: ADD EDX,EAX
// 004eab42: MOV EAX,EDX
// 004eab44: SAR EDX,0x1f
// 004eab47: SUB EAX,EDX
// 004eab49: SAR EAX,0x1
// 004eab4b: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004eab4f: MOV EAX,dword ptr [ESI + 0x8]
// 004eab52: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004eab56: MOV ECX,dword ptr [ESI + 0xc]
// 004eab59: LEA EDX,[EAX + ECX*0x1]
// 004eab5c: MOV EAX,EDX
// 004eab5e: SAR EDX,0x1f
// 004eab61: SUB EAX,EDX
// 004eab63: SAR EAX,0x1
// 004eab65: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004eab69: MOV EAX,dword ptr [EDI]
// 004eab6b: MOV EDX,dword ptr [EDI + 0x4]
// 004eab6e: MOV ECX,dword ptr [EDI + 0x8]
// 004eab71: ADD EAX,EDX
// 004eab73: MOV EDX,dword ptr [EDI + 0xc]
// 004eab76: ADD EAX,ECX
// 004eab78: ADD EDX,EAX
// 004eab7a: MOV EAX,EDX
// 004eab7c: SAR EDX,0x1f
// 004eab7f: SHL EDX,0x2
// 004eab82: SBB EAX,EDX
// 004eab84: SAR EAX,0x2
// 004eab87: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004eab8b: MOV EDX,dword ptr [EDI + 0x4]
// 004eab8e: MOV EAX,dword ptr [EDI + 0x8]
// 004eab91: ADD EDX,EAX
// 004eab93: MOV EAX,EDX
// 004eab95: SAR EDX,0x1f
// 004eab98: SUB EAX,EDX
// 004eab9a: SAR EAX,0x1
// 004eab9c: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004eaba0: MOV EAX,dword ptr [EDI + 0x8]
// 004eaba3: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004eaba7: MOV ECX,dword ptr [EDI + 0xc]
// 004eabaa: LEA EDX,[EAX + ECX*0x1]
// 004eabad: MOV EAX,EDX
// 004eabaf: SAR EDX,0x1f
// 004eabb2: SUB EAX,EDX
// 004eabb4: SAR EAX,0x1
// 004eabb6: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004eabba: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x14] (READ)
// 004eabc1: INC EAX
// 004eabc2: PUSH EAX
// 004eabc3: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1a4] (DATA)
// 004eabc7: PUSH EAX
// 004eabc8: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b4] (DATA)
// 004eabcc: PUSH EAX
// 004eabcd: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1e4] (DATA)
// 004eabd1: PUSH EAX
// 004eabd2: PUSH EBP
// 004eabd3: CALL core_glass.cpp_FUN_004ea1c0
//   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)
// 004eabd8: LEA EAX,[EBX + 0x24]
// 004eabdb: FLD float ptr [EBX]
// 004eabdd: FADD float ptr [EAX]
// 004eabdf: ADD ESP,0x14
// 004eabe2: FST float ptr [ESP + 0xc8]
//   XREF to: Stack[-0x11c] (WRITE)
// 004eabe9: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004eabef: FLD float ptr [EBX + 0x4]
// 004eabf2: FADD float ptr [EAX + 0x4]
// 004eabf5: FST float ptr [ESP + 0xcc]
//   XREF to: Stack[-0x118] (WRITE)
// 004eabfc: FLD float ptr [EBX + 0x8]
// 004eabff: FADD float ptr [EAX + 0x8]
// 004eac02: FXCH
// 004eac04: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004eac0a: FXCH
// 004eac0c: FMUL ST1
// 004eac0e: FXCH ST2
// 004eac10: FST float ptr [ESP + 0xd0]
//   XREF to: Stack[-0x114] (WRITE)
// 004eac17: FMULP
// 004eac19: MOV EDX,ESP
// 004eac1b: FXCH
// 004eac1d: FSTP float ptr [ESP + 0xb4]
//   XREF to: Stack[-0x130] (WRITE)
// 004eac24: LEA EAX,[ESP + 0xb0]
//   XREF to: Stack[-0x134] (DATA)
// 004eac2b: FSTP float ptr [ESP + 0xb8]
//   XREF to: Stack[-0x12c] (WRITE)
// 004eac32: FSTP float ptr [ESP + 0xb0]
//   XREF to: Stack[-0x134] (WRITE)
// 004eac39: CMP EDX,EAX
// 004eac3b: JZ 0x004eac5d
//   XREF to: 004eac5d (CONDITIONAL_JUMP)
// 004eac3d: MOV EAX,dword ptr [ESP + 0xb0]
//   XREF to: Stack[-0x134] (DATA)
// 004eac44: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e4] (DATA)
// 004eac47: MOV EAX,dword ptr [ESP + 0xb4]
//   XREF to: Stack[-0x130] (READ)
// 004eac4e: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004eac52: MOV EAX,dword ptr [ESP + 0xb8]
//   XREF to: Stack[-0x12c] (READ)
// 004eac59: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004eac5d: LEA EAX,[EBX + 0xc]
//   Label: LAB_004eac5d
// 004eac60: FLD float ptr [EBX]
// 004eac62: FADD float ptr [EAX]
// 004eac64: LEA EDX,[EBX + 0x18]
// 004eac67: FSTP float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x68] (WRITE)
// 004eac6e: FLD float ptr [EBX + 0x4]
// 004eac71: FADD float ptr [EAX + 0x4]
// 004eac74: LEA ECX,[EBX + 0x24]
// 004eac77: FSTP float ptr [ESP + 0x180]
//   XREF to: Stack[-0x64] (WRITE)
// 004eac7e: FLD float ptr [EBX + 0x8]
// 004eac81: FADD float ptr [EAX + 0x8]
// 004eac84: FLD float ptr [ESP + 0x17c]
//   XREF to: Stack[-0x68] (READ)
// 004eac8b: FXCH
// 004eac8d: FSTP float ptr [ESP + 0x184]
//   XREF to: Stack[-0x60] (WRITE)
// 004eac94: FADD float ptr [EDX]
// 004eac96: FLD float ptr [ESP + 0x180]
//   XREF to: Stack[-0x64] (READ)
// 004eac9d: FXCH
// 004eac9f: FSTP float ptr [ESP + 0x110]
//   XREF to: Stack[-0xd4] (WRITE)
// 004eaca6: FADD float ptr [EDX + 0x4]
// 004eaca9: FLD float ptr [ESP + 0x184]
//   XREF to: Stack[-0x60] (READ)
// 004eacb0: FXCH
// 004eacb2: FSTP float ptr [ESP + 0x114]
//   XREF to: Stack[-0xd0] (WRITE)
// 004eacb9: FADD float ptr [EDX + 0x8]
// 004eacbc: FLD float ptr [ESP + 0x110]
//   XREF to: Stack[-0xd4] (READ)
// 004eacc3: FXCH
// 004eacc5: FSTP float ptr [ESP + 0x118]
//   XREF to: Stack[-0xcc] (WRITE)
// 004eaccc: FADD float ptr [ECX]
// 004eacce: FST float ptr [ESP + 0x128]
//   XREF to: Stack[-0xbc] (WRITE)
// 004eacd5: FDIV float ptr [0x0062e0e1]
//   XREF to: 0062e0e1 (READ)
// 004eacdb: FLD float ptr [ESP + 0x114]
//   XREF to: Stack[-0xd0] (READ)
// 004eace2: FADD float ptr [ECX + 0x4]
// 004eace5: FLD float ptr [ESP + 0x118]
//   XREF to: Stack[-0xcc] (READ)
// 004eacec: FXCH
// 004eacee: FST float ptr [ESP + 0x12c]
//   XREF to: Stack[-0xb8] (WRITE)
// 004eacf5: FXCH
// 004eacf7: FADD float ptr [ECX + 0x8]
// 004eacfa: FXCH
// 004eacfc: FLD float ptr [0x0062e0e5]
//   XREF to: 0062e0e5 (READ)
// 004ead02: FXCH
// 004ead04: FMUL ST1
// 004ead06: FXCH ST2
// 004ead08: FST float ptr [ESP + 0x130]
//   XREF to: Stack[-0xb4] (WRITE)
// 004ead0f: FMULP
// 004ead11: LEA EAX,[ESP + 0x158]
//   XREF to: Stack[-0x8c] (DATA)
// 004ead18: LEA EDX,[ESP + 0xc]
//   XREF to: Stack[-0x1d8] (DATA)
// 004ead1c: FXCH
// 004ead1e: FSTP float ptr [ESP + 0x15c]
//   XREF to: Stack[-0x88] (WRITE)
// 004ead25: FSTP float ptr [ESP + 0x160]
//   XREF to: Stack[-0x84] (WRITE)
// 004ead2c: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x8c] (WRITE)
// 004ead33: CMP EDX,EAX
// 004ead35: JZ 0x004ead58
//   XREF to: 004ead58 (CONDITIONAL_JUMP)
// 004ead37: MOV EAX,dword ptr [ESP + 0x158]
//   XREF to: Stack[-0x8c] (DATA)
// 004ead3e: MOV dword ptr [ESP + 0xc],EAX
//   XREF to: Stack[-0x1d8] (WRITE)
// 004ead42: MOV EAX,dword ptr [ESP + 0x15c]
//   XREF to: Stack[-0x88] (READ)
// 004ead49: MOV dword ptr [ESP + 0x10],EAX
//   XREF to: Stack[-0x1d4] (WRITE)
// 004ead4d: MOV EAX,dword ptr [ESP + 0x160]
//   XREF to: Stack[-0x84] (READ)
// 004ead54: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x1d0] (WRITE)
// 004ead58: LEA EDX,[EBX + 0x18]
//   Label: LAB_004ead58
// 004ead5b: LEA EAX,[EBX + 0x24]
// 004ead5e: FLD float ptr [EDX]
// 004ead60: FADD float ptr [EAX]
// 004ead62: FST float ptr [ESP + 0x134]
//   XREF to: Stack[-0xb0] (WRITE)
// 004ead69: FDIV float ptr [0x0062e0d9]
//   XREF to: 0062e0d9 (READ)
// 004ead6f: FLD float ptr [EDX + 0x4]
// 004ead72: FADD float ptr [EAX + 0x4]
// 004ead75: FST float ptr [ESP + 0x138]
//   XREF to: Stack[-0xac] (WRITE)
// 004ead7c: FLD float ptr [EDX + 0x8]
// 004ead7f: FADD float ptr [EAX + 0x8]
// 004ead82: FXCH
// 004ead84: FLD float ptr [0x0062e0dd]
//   XREF to: 0062e0dd (READ)
// 004ead8a: FXCH
// 004ead8c: FMUL ST1
// 004ead8e: FXCH ST2
// 004ead90: FST float ptr [ESP + 0x13c]
//   XREF to: Stack[-0xa8] (WRITE)
// 004ead97: FMULP
// 004ead99: LEA EDX,[ESP + 0x18]
//   XREF to: Stack[-0x1cc] (DATA)
// 004ead9d: FXCH
// 004ead9f: FSTP float ptr [ESP + 0xa8]
//   XREF to: Stack[-0x13c] (WRITE)
// 004eada6: LEA EAX,[ESP + 0xa4]
//   XREF to: Stack[-0x140] (DATA)
// 004eadad: FSTP float ptr [ESP + 0xac]
//   XREF to: Stack[-0x138] (WRITE)
// 004eadb4: FSTP float ptr [ESP + 0xa4]
//   XREF to: Stack[-0x140] (WRITE)
// 004eadbb: CMP EDX,EAX
// 004eadbd: JZ 0x004eade0
//   XREF to: 004eade0 (CONDITIONAL_JUMP)
// 004eadbf: MOV EAX,dword ptr [ESP + 0xa4]
//   XREF to: Stack[-0x140] (DATA)
// 004eadc6: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x1cc] (WRITE)
// 004eadca: MOV EAX,dword ptr [ESP + 0xa8]
//   XREF to: Stack[-0x13c] (READ)
// 004eadd1: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x1c8] (WRITE)
// 004eadd5: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x138] (READ)
// 004eaddc: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x1c4] (WRITE)
// 004eade0: LEA EAX,[ESP + 0x24]
//   Label: LAB_004eade0
//   XREF to: Stack[-0x1c0] (DATA)
// 004eade4: ADD EBX,0x24
// 004eade7: CMP EAX,EBX
// 004eade9: JZ 0x004eadff
//   XREF to: 004eadff (CONDITIONAL_JUMP)
// 004eadeb: MOV EAX,dword ptr [EBX]
// 004eaded: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x1c0] (WRITE)
// 004eadf1: MOV EAX,dword ptr [EBX + 0x4]
// 004eadf4: MOV dword ptr [ESP + 0x28],EAX
//   XREF to: Stack[-0x1bc] (WRITE)
// 004eadf8: MOV EAX,dword ptr [EBX + 0x8]
// 004eadfb: MOV dword ptr [ESP + 0x2c],EAX
//   XREF to: Stack[-0x1b8] (WRITE)
// 004eadff: MOV EDX,dword ptr [ESI]
//   Label: LAB_004eadff
// 004eae01: MOV EBX,dword ptr [ESI + 0xc]
// 004eae04: ADD EDX,EBX
// 004eae06: MOV EAX,EDX
// 004eae08: SAR EDX,0x1f
// 004eae0b: SUB EAX,EDX
// 004eae0d: SAR EAX,0x1
// 004eae0f: MOV dword ptr [ESP + 0x30],EAX
//   XREF to: Stack[-0x1b4] (WRITE)
// 004eae13: MOV EAX,dword ptr [ESI]
// 004eae15: ADD EAX,dword ptr [ESI + 0x4]
// 004eae18: MOV EDX,dword ptr [ESI + 0x8]
// 004eae1b: MOV ECX,dword ptr [ESI + 0xc]
// 004eae1e: ADD EDX,EAX
// 004eae20: ADD EDX,ECX
// 004eae22: MOV EAX,EDX
// 004eae24: SAR EDX,0x1f
// 004eae27: SHL EDX,0x2
// 004eae2a: SBB EAX,EDX
// 004eae2c: SAR EAX,0x2
// 004eae2f: MOV dword ptr [ESP + 0x34],EAX
//   XREF to: Stack[-0x1b0] (WRITE)
// 004eae33: MOV EDX,dword ptr [ESI + 0x8]
// 004eae36: MOV EBX,dword ptr [ESI + 0xc]
// 004eae39: ADD EDX,EBX
// 004eae3b: MOV EAX,EDX
// 004eae3d: SAR EDX,0x1f
// 004eae40: SUB EAX,EDX
// 004eae42: SAR EAX,0x1
// 004eae44: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1ac] (WRITE)
// 004eae48: MOV EAX,dword ptr [ESI + 0xc]
// 004eae4b: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x1a8] (WRITE)
// 004eae4f: MOV EDX,dword ptr [EDI]
// 004eae51: MOV ESI,dword ptr [EDI + 0xc]
// 004eae54: ADD EDX,ESI
// 004eae56: MOV EAX,EDX
// 004eae58: SAR EDX,0x1f
// 004eae5b: SUB EAX,EDX
// 004eae5d: SAR EAX,0x1
// 004eae5f: MOV dword ptr [ESP + 0x40],EAX
//   XREF to: Stack[-0x1a4] (WRITE)
// 004eae63: MOV EAX,dword ptr [EDI]
// 004eae65: ADD EAX,dword ptr [EDI + 0x4]
// 004eae68: MOV EDX,dword ptr [EDI + 0x8]
// 004eae6b: MOV ECX,dword ptr [EDI + 0xc]
// 004eae6e: ADD EDX,EAX
// 004eae70: ADD EDX,ECX
// 004eae72: MOV EAX,EDX
// 004eae74: SAR EDX,0x1f
// 004eae77: SHL EDX,0x2
// 004eae7a: SBB EAX,EDX
// 004eae7c: SAR EAX,0x2
// 004eae7f: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1a0] (WRITE)
// 004eae83: MOV EDX,dword ptr [EDI + 0x8]
// 004eae86: MOV EBX,dword ptr [EDI + 0xc]
// 004eae89: ADD EDX,EBX
// 004eae8b: MOV EAX,EDX
// 004eae8d: SAR EDX,0x1f
// 004eae90: SUB EAX,EDX
// 004eae92: SAR EAX,0x1
// 004eae94: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x19c] (WRITE)
// 004eae98: MOV EAX,dword ptr [EDI + 0xc]
// 004eae9b: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x198] (WRITE)
// 004eae9f: MOV EAX,dword ptr [ESP + 0x1f8]
//   XREF to: Stack[0x14] (READ)
// 004eaea6: INC EAX
// 004eaea7: PUSH EAX
// 004eaea8: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1a4] (DATA)
// 004eaeac: PUSH EAX
// 004eaead: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x1b4] (DATA)
// 004eaeb1: PUSH EAX
// 004eaeb2: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x1e4] (DATA)
// 004eaeb6: PUSH EAX
// 004eaeb7: PUSH EBP
// 004eaeb8: CALL core_glass.cpp_FUN_004ea1c0
//   XREF to: 004ea1c0 (UNCONDITIONAL_CALL)
// 004eaebd: ADD ESP,0x14
// 004eaec0: ADD ESP,0x1d4
// 004eaec6: POP EBP
// 004eaec7: POP EDI
// 004eaec8: POP ESI
// 004eaec9: POP EBX
// 004eaeca: RET
// 004eaecb: MOV EAX,dword ptr [EBX]
//   Label: LAB_004eaecb
// 004eaecd: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x1e4] (DATA)
// 004eaed0: MOV EAX,dword ptr [EBX + 0x4]
// 004eaed3: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x1e0] (WRITE)
// 004eaed7: MOV EAX,dword ptr [EBX + 0x8]
// 004eaeda: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x1dc] (WRITE)
// 004eaede: JMP 0x004ea39b
//   XREF to: 004ea39b (UNCONDITIONAL_JUMP)
