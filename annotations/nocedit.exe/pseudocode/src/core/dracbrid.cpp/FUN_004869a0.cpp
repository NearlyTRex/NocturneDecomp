// Name: core_dracbrid.cpp_FUN_004869a0
// Address: 004869a0
// Address Range: [[004869a0, 00486b04] [00486b9d, 00486c8e]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_004869a0()
// Cross-references:
//   core_dracbrid.cpp_FUN_00484410 (00484410) at 004844a7 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_s_5_2f_5_2f_5_2f_00621c2e
//   undefined4 DAT_00621c42
//   CConsole* g_CConsolePtr = 0083b1a4
//   CConsole g_ConsolePtr
//   SFreaky[6] SFreaky_ARRAY_02c6d0c0
//   undefined4 DAT_02c6d110
//   undefined4 DAT_02c6d114
//   undefined4 DAT_02c6d118
//   undefined4 DAT_02c6d11c
//   undefined4 DAT_02c6d120
//   undefined4 DAT_02c6d124
//   undefined4 DAT_02c6d128
//   undefined4 DAT_02c6d12c
//   undefined4 DAT_02c6d130
//   undefined4 DAT_02c6d134
//   undefined4 DAT_02c6d138
//   undefined4 DAT_02c6d13c
//   undefined4 DAT_02c6d140
//   undefined4 DAT_02c6d144
//   undefined4 DAT_02c6d148
//   undefined4 DAT_02c6d14c
//   undefined4 DAT_02c6d150
//   undefined4 DAT_02c6d154
//   undefined4 DAT_02c6d158
//   undefined4 DAT_02c6d15c
//   undefined4 DAT_02c6d160
//   undefined4 DAT_02c6d164
//   undefined4 DAT_02c6d168
//   float g_DashAnimationAccumulator
//   undefined4 DAT_032758e8
//   undefined4 g_CDemonCameraInstance.base.position.y
//   undefined4 g_CDemonCameraInstance.base.position.z
// Function calls:
//   core_actor.cpp_getRandomFloat_FUN_0040cc10
//   core_spline.cpp_FUN_005b90a0
//   core_spline.cpp_FUN_005b92d0
//   core_spline.cpp_FUN_005b9490
//   engine_console.cpp_CConsole_printf_FUN_00441890
//   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_004869a0(undefined4 param_1, undefined4
   param_2) */

void core_dracbrid_cpp_FUN_004869a0(void)

{
  SFreaky **ppSVar1;
  SFreaky **ppSVar2;
  SFreaky **ppSVar3;
  int *piVar4;
  int iVar5;
  SFreaky **ppSVar6;
  float fVar7;
  undefined4 *puVar8;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  int in_stack_00000004;
  float in_stack_00000008;
  int local_64;
  float local_60;
  int local_5c;
  SFreaky *pSStack_58;
  float local_50;
  SFreaky *local_38;
  SFreaky *local_34;
  int *local_30;
  float *local_2c;
  undefined4 local_28;
  int *local_24;
  SFreaky *local_20;
  int *local_1c;
  SFreaky **local_18;
  int iStack_14;
  
  fVar7 = *(float *)(in_stack_00000004 + 0xbf50) - in_stack_00000008;
  *(float *)(in_stack_00000004 + 0xbf50) = fVar7;
  if (fVar7 < 0.0) {
    *(undefined4 *)(in_stack_00000004 + 0xbf50) = 0;
  }
  local_24 = &g_CDemonCameraInstance.base.position.y;
  local_28 = 0x32758f0;
  local_30 = &local_64;
  local_2c = &local_60;
  local_34 = SFreaky_ARRAY_02c6d0c0;
  local_38 = (SFreaky *)&g_DashAnimationAccumulator;
  do {
    local_20 = local_34;
    if (in_stack_00000004 == *(int *)local_34->field2_0x50) {
      iVar5 = sound_sndmain_cpp_isSfxPlaying_FUN_005a9660(*(uint *)local_34->field0_0x0);
      piVar4 = local_30;
      if (iVar5 == 0) {
        local_30[0x14] = 0;
      }
      else {
        ppSVar1 = (SFreaky **)(local_30 + 0x11);
        ppSVar2 = (SFreaky **)(local_30 + 0xe);
        ppSVar3 = (SFreaky **)(local_30 + 0xb);
        ppSVar6 = (SFreaky **)(local_30 + 8);
        local_30[7] = (int)((float)local_30[7] + in_stack_00000008);
        local_18 = ppSVar6;
        while (ppSVar6 = local_18, 1.0 < (float)local_1c[7]) {
          local_1c[7] = (int)((float)local_1c[7] + _DAT_00621c42);
          if (ppSVar3 != local_18) {
            *local_18 = *ppSVar3;
            ppSVar6[1] = (SFreaky *)piVar4[0xc];
            ppSVar6[2] = (SFreaky *)piVar4[0xd];
          }
          if (ppSVar3 != ppSVar2) {
            *ppSVar3 = *ppSVar2;
            piVar4[0xc] = piVar4[0xf];
            piVar4[0xd] = piVar4[0x10];
          }
          if (ppSVar2 != ppSVar1) {
            *ppSVar2 = *ppSVar1;
            piVar4[0xf] = piVar4[0x12];
            piVar4[0x10] = piVar4[0x13];
          }
          local_64 = g_CDemonCameraInstance.base.position.x;
          local_60 = *(float *)local_20->field0_0x0;
          local_5c = *local_24;
          fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_60 = fVar7 + local_60;
          unaff_EDI = core_actor_cpp_getRandomFloat_FUN_0040cc10(-2.0,2.0);
          pSStack_58 = (SFreaky *)(unaff_EDI + (float)pSStack_58);
          fVar7 = core_actor_cpp_getRandomFloat_FUN_0040cc10(-5.0,5.0);
          local_34 = pSStack_58;
          local_50 = fVar7 + local_50;
          local_30 = *(int **)local_20->field0_0x0;
          local_2c = (float *)*local_1c;
          if (ppSVar1 != &local_34) {
            *ppSVar1 = pSStack_58;
            piVar4[0x12] = (int)local_30;
            piVar4[0x13] = (int)local_2c;
          }
        }
        core_spline_cpp_FUN_005b90a0();
        puVar8 = (undefined4 *)core_spline_cpp_FUN_005b92d0();
        if ((undefined4 *)(iStack_14 + 4) != puVar8) {
          *(undefined4 *)(iStack_14 + 4) = *puVar8;
          *(undefined4 *)(iStack_14 + 8) = puVar8[1];
          *(undefined4 *)(iStack_14 + 0xc) = puVar8[2];
        }
        engine_console_cpp_CConsole_printf_FUN_00441890
                  (g_CConsolePtr,"%5.2f %5.2f %5.2f\n",(double)*(float *)(iStack_14 + 4),
                   (double)*(float *)(iStack_14 + 8));
        puVar8 = (undefined4 *)core_spline_cpp_FUN_005b9490();
        if ((undefined4 *)((int)unaff_EDI + 0x10) != puVar8) {
          *(undefined4 *)((int)unaff_EDI + 0x10) = *puVar8;
          *(undefined4 *)((int)unaff_EDI + 0x14) = puVar8[1];
          *(undefined4 *)((int)unaff_EDI + 0x18) = puVar8[2];
        }
      }
    }
    local_34 = local_34 + 1;
  } while (local_34 != local_38);
  return;
}


// Assembly code:
// 004869a0: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_004869a0
// 004869a1: PUSH ESI
// 004869a2: PUSH EDI
// 004869a3: PUSH EBP
// 004869a4: MOV EBP,ESP
// 004869a6: SUB ESP,0x74
// 004869a9: AND ESP,0xfffffff8
// 004869ac: MOV EAX,dword ptr [EBP + 0x14]
// 004869af: FLD float ptr [EAX + 0xbf50]
// 004869b5: FSUB float ptr [EBP + 0x18]
// 004869b8: FST float ptr [EAX + 0xbf50]
// 004869be: FLDZ
// 004869c0: FCOMPP
// 004869c2: FNSTSW AX
// 004869c4: SAHF
// 004869c5: JA 0x00486a32
//   XREF to: 00486a32 (CONDITIONAL_JUMP)
// 004869c7: MOV EAX,0x32758e8
//   Label: LAB_004869c7
//   XREF to: 032758e8 (DATA)
// 004869cc: ADD EAX,0x4
// 004869cf: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: 032758ec (DATA)
// 004869d3: MOV EAX,0x32758e8
//   XREF to: 032758e8 (DATA)
// 004869d8: ADD EAX,0x8
// 004869db: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: 032758f0 (DATA)
// 004869df: LEA EAX,[ESP + 0x20]
// 004869e3: ADD EAX,0x4
// 004869e6: MOV dword ptr [ESP + 0x58],EAX
// 004869ea: LEA EAX,[ESP + 0x20]
// 004869ee: MOV EDX,0x2c6d0c0
//   XREF to: 02c6d0c0 (DATA)
// 004869f3: ADD EAX,0x8
// 004869f6: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: 02c6d0c0 (DATA)
// 004869fa: MOV dword ptr [ESP + 0x5c],EAX
// 004869fe: LEA EAX,[EDX + 0x1f8]
//   XREF to: 02c6d2b8 (DATA)
// 00486a04: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: 02c6d2b8 (DATA)
// 00486a08: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00486a08
//   XREF to: 02c6d114 (DATA)
// 00486a0c: MOV ECX,dword ptr [EBP + 0x14]
// 00486a0f: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: 02c6d0c0 (DATA)
//   XREF to: 02c6d114 (DATA)
// 00486a13: CMP ECX,dword ptr [EAX + 0x50]
//   XREF to: 02c6d110 (READ)
//   XREF to: 02c6d164 (READ)
// 00486a16: JZ 0x00486a41
//   XREF to: 00486a41 (CONDITIONAL_JUMP)
// 00486a18: MOV EDX,dword ptr [ESP + 0x54]
//   Label: LAB_00486a18
// 00486a1c: ADD EDX,0x54
//   XREF to: 02c6d114 (PARAM)
// 00486a1f: MOV ECX,dword ptr [ESP + 0x50]
// 00486a23: MOV dword ptr [ESP + 0x54],EDX
//   XREF to: 02c6d114 (DATA)
//   XREF to: 02c6d168 (DATA)
// 00486a27: CMP EDX,ECX
// 00486a29: JNZ 0x00486a08
//   XREF to: 00486a08 (CONDITIONAL_JUMP)
// 00486a2b: MOV ESP,EBP
// 00486a2d: POP EBP
// 00486a2e: POP EDI
// 00486a2f: POP ESI
// 00486a30: POP EBX
// 00486a31: RET
// 00486a32: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_00486a32
// 00486a35: MOV dword ptr [EAX + 0xbf50],0x0
// 00486a3f: JMP 0x004869c7
//   XREF to: 004869c7 (UNCONDITIONAL_JUMP)
// 00486a41: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00486a41
//   XREF to: 02c6d114 (PARAM)
// 00486a45: MOV EBX,dword ptr [EAX]
//   XREF to: 02c6d114 (READ)
// 00486a47: PUSH EBX
// 00486a48: CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
//   XREF to: 005a9660 (UNCONDITIONAL_CALL)
// 00486a4d: ADD ESP,0x4
// 00486a50: TEST EAX,EAX
// 00486a52: JZ 0x00486b9d
//   XREF to: 00486b9d (CONDITIONAL_JUMP)
// 00486a58: MOV EAX,dword ptr [ESP + 0x54]
// 00486a5c: LEA EDI,[EAX + 0x44]
//   XREF to: 02c6d158 (DATA)
// 00486a5f: LEA ESI,[EAX + 0x38]
//   XREF to: 02c6d14c (DATA)
// 00486a62: FLD float ptr [EAX + 0x1c]
//   XREF to: 02c6d130 (READ)
// 00486a65: LEA EBX,[EAX + 0x2c]
//   XREF to: 02c6d140 (DATA)
// 00486a68: FADD float ptr [EBP + 0x18]
// 00486a6b: ADD EAX,0x20
// 00486a6e: FSTP float ptr [EAX + -0x4]
//   XREF to: 02c6d130 (WRITE)
// 00486a71: MOV dword ptr [ESP + 0x6c],EAX
//   XREF to: 02c6d134 (DATA)
// 00486a75: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_00486a75
// 00486a79: FLD float ptr [EAX + 0x1c]
//   XREF to: 02c6d130 (READ)
// 00486a7c: FLD1
// 00486a7e: FCOMPP
// 00486a80: FNSTSW AX
// 00486a82: SAHF
// 00486a83: JNC 0x00486bad
//   XREF to: 00486bad (CONDITIONAL_JUMP)
// 00486a89: MOV EAX,dword ptr [ESP + 0x68]
// 00486a8d: FLD float ptr [EAX + 0x1c]
//   XREF to: 02c6d130 (READ)
// 00486a90: FADD float ptr [0x00621c42]
//   XREF to: 00621c42 (READ)
// 00486a96: FSTP float ptr [EAX + 0x1c]
//   XREF to: 02c6d130 (WRITE)
// 00486a99: MOV EAX,dword ptr [ESP + 0x6c]
// 00486a9d: CMP EBX,EAX
// 00486a9f: JZ 0x00486ab1
//   XREF to: 00486ab1 (CONDITIONAL_JUMP)
// 00486aa1: MOV EDX,dword ptr [EBX]
//   XREF to: 02c6d140 (READ)
// 00486aa3: MOV dword ptr [EAX],EDX
//   XREF to: 02c6d134 (WRITE)
// 00486aa5: MOV EDX,dword ptr [EBX + 0x4]
//   XREF to: 02c6d144 (READ)
// 00486aa8: MOV dword ptr [EAX + 0x4],EDX
//   XREF to: 02c6d138 (WRITE)
// 00486aab: MOV EDX,dword ptr [EBX + 0x8]
//   XREF to: 02c6d148 (READ)
// 00486aae: MOV dword ptr [EAX + 0x8],EDX
//   XREF to: 02c6d13c (WRITE)
// 00486ab1: CMP EBX,ESI
//   Label: LAB_00486ab1
// 00486ab3: JZ 0x00486ac5
//   XREF to: 00486ac5 (CONDITIONAL_JUMP)
// 00486ab5: MOV EAX,dword ptr [ESI]
//   XREF to: 02c6d14c (READ)
// 00486ab7: MOV dword ptr [EBX],EAX
//   XREF to: 02c6d140 (WRITE)
// 00486ab9: MOV EAX,dword ptr [ESI + 0x4]
//   XREF to: 02c6d150 (READ)
// 00486abc: MOV dword ptr [EBX + 0x4],EAX
//   XREF to: 02c6d144 (WRITE)
// 00486abf: MOV EAX,dword ptr [ESI + 0x8]
//   XREF to: 02c6d154 (READ)
// 00486ac2: MOV dword ptr [EBX + 0x8],EAX
//   XREF to: 02c6d148 (WRITE)
// 00486ac5: CMP ESI,EDI
//   Label: LAB_00486ac5
// 00486ac7: JZ 0x00486ad9
//   XREF to: 00486ad9 (CONDITIONAL_JUMP)
// 00486ac9: MOV EAX,dword ptr [EDI]
//   XREF to: 02c6d158 (READ)
// 00486acb: MOV dword ptr [ESI],EAX
//   XREF to: 02c6d14c (WRITE)
// 00486acd: MOV EAX,dword ptr [EDI + 0x4]
//   XREF to: 02c6d15c (READ)
// 00486ad0: MOV dword ptr [ESI + 0x4],EAX
//   XREF to: 02c6d150 (WRITE)
// 00486ad3: MOV EAX,dword ptr [EDI + 0x8]
//   XREF to: 02c6d160 (READ)
// 00486ad6: MOV dword ptr [ESI + 0x8],EAX
//   XREF to: 02c6d154 (WRITE)
// 00486ad9: MOV EAX,[0x032758e8]
//   Label: LAB_00486ad9
//   XREF to: 032758e8 (READ)
// 00486ade: MOV dword ptr [ESP + 0x20],EAX
// 00486ae2: MOV EAX,dword ptr [ESP + 0x64]
// 00486ae6: MOV EAX,dword ptr [EAX]
//   XREF to: 032758ec (READ)
// 00486ae8: MOV dword ptr [ESP + 0x24],EAX
// 00486aec: MOV EAX,dword ptr [ESP + 0x60]
// 00486af0: PUSH 0x40a00000
// 00486af5: MOV EAX,dword ptr [EAX]
//   XREF to: 032758f0 (READ)
// 00486af7: PUSH 0xc0a00000
// 00486afc: MOV dword ptr [ESP + 0x30],EAX
// 00486b00: CALL core_actor.cpp_getRandomFloat_FUN_0040cc10
//   XREF to: 0040cc10 (UNCONDITIONAL_CALL)
// 00486b9d: MOV EAX,dword ptr [ESP + 0x54]
//   Label: LAB_00486b9d
// 00486ba1: MOV dword ptr [EAX + 0x50],0x0
//   XREF to: 02c6d164 (WRITE)
// 00486ba8: JMP 0x00486a18
//   XREF to: 00486a18 (UNCONDITIONAL_JUMP)
// 00486bad: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_00486bad
// 00486bb1: PUSH 0x0
// 00486bb3: PUSH dword ptr [EAX + 0x1c]
//   XREF to: 02c6d130 (READ)
// 00486bb6: LEA EAX,[ESP + 0x8]
// 00486bba: PUSH EAX
// 00486bbb: CALL core_spline.cpp_FUN_005b90a0
//   XREF to: 005b90a0 (UNCONDITIONAL_CALL)
// 00486bc0: ADD ESP,0xc
// 00486bc3: MOV EAX,dword ptr [ESP + 0x68]
// 00486bc7: ADD EAX,0x44
// 00486bca: PUSH EAX
//   XREF to: 02c6d158 (DATA)
// 00486bcb: MOV EAX,dword ptr [ESP + 0x6c]
// 00486bcf: ADD EAX,0x38
// 00486bd2: PUSH EAX
//   XREF to: 02c6d14c (DATA)
// 00486bd3: PUSH EBX
//   XREF to: 02c6d140 (DATA)
// 00486bd4: MOV ESI,dword ptr [ESP + 0x78]
// 00486bd8: PUSH ESI
//   XREF to: 02c6d134 (DATA)
// 00486bd9: LEA EAX,[ESP + 0x48]
// 00486bdd: PUSH EAX
// 00486bde: LEA EAX,[ESP + 0x14]
// 00486be2: PUSH EAX
// 00486be3: CALL core_spline.cpp_FUN_005b92d0
//   XREF to: 005b92d0 (UNCONDITIONAL_CALL)
// 00486be8: ADD ESP,0x18
// 00486beb: MOV EBX,dword ptr [ESP + 0x68]
// 00486bef: ADD EBX,0x4
//   XREF to: 02c6d118 (PARAM)
// 00486bf2: CMP EBX,EAX
// 00486bf4: JZ 0x00486c06
//   XREF to: 00486c06 (CONDITIONAL_JUMP)
// 00486bf6: MOV EDX,dword ptr [EAX]
// 00486bf8: MOV dword ptr [EBX],EDX
//   XREF to: 02c6d118 (WRITE)
// 00486bfa: MOV EDX,dword ptr [EAX + 0x4]
// 00486bfd: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 02c6d11c (WRITE)
// 00486c00: MOV EDX,dword ptr [EAX + 0x8]
// 00486c03: MOV dword ptr [EBX + 0x8],EDX
//   XREF to: 02c6d120 (WRITE)
// 00486c06: MOV EAX,dword ptr [ESP + 0x68]
//   Label: LAB_00486c06
// 00486c0a: SUB ESP,0x8
// 00486c0d: FLD float ptr [EAX + 0xc]
//   XREF to: 02c6d120 (READ)
// 00486c10: FSTP double ptr [ESP]
// 00486c13: SUB ESP,0x8
// 00486c16: FLD float ptr [EAX + 0x8]
//   XREF to: 02c6d11c (READ)
// 00486c19: FSTP double ptr [ESP]
// 00486c1c: SUB ESP,0x8
// 00486c1f: FLD float ptr [EAX + 0x4]
//   XREF to: 02c6d118 (READ)
// 00486c22: FSTP double ptr [ESP]
// 00486c25: PUSH 0x621c2e
//   XREF to: 00621c2e (DATA)
// 00486c2a: MOV EDI,dword ptr [0x0066e8e0]
//   XREF to: 0066e8e0 (READ)
// 00486c30: PUSH EDI
//   XREF to: 0083b1a4 (DATA)
// 00486c31: CALL engine_console.cpp_CConsole_printf_FUN_00441890
//   XREF to: 00441890 (UNCONDITIONAL_CALL)
// 00486c36: ADD ESP,0x20
// 00486c39: MOV EAX,dword ptr [ESP + 0x68]
// 00486c3d: ADD EAX,0x44
// 00486c40: PUSH EAX
//   XREF to: 02c6d158 (DATA)
// 00486c41: MOV EAX,dword ptr [ESP + 0x6c]
// 00486c45: ADD EAX,0x38
// 00486c48: PUSH EAX
//   XREF to: 02c6d14c (DATA)
// 00486c49: MOV EAX,dword ptr [ESP + 0x70]
// 00486c4d: ADD EAX,0x2c
// 00486c50: PUSH EAX
//   XREF to: 02c6d140 (DATA)
// 00486c51: MOV EAX,dword ptr [ESP + 0x74]
// 00486c55: ADD EAX,0x20
// 00486c58: PUSH EAX
//   XREF to: 02c6d134 (DATA)
// 00486c59: LEA EAX,[ESP + 0x3c]
// 00486c5d: PUSH EAX
// 00486c5e: LEA EAX,[ESP + 0x14]
// 00486c62: PUSH EAX
// 00486c63: CALL core_spline.cpp_FUN_005b9490
//   XREF to: 005b9490 (UNCONDITIONAL_CALL)
// 00486c68: ADD ESP,0x18
// 00486c6b: MOV EBX,dword ptr [ESP + 0x68]
// 00486c6f: ADD EBX,0x10
// 00486c72: CMP EBX,EAX
// 00486c74: JZ 0x00486a18
//   XREF to: 00486a18 (CONDITIONAL_JUMP)
// 00486c7a: MOV EDX,dword ptr [EAX]
// 00486c7c: MOV dword ptr [EBX],EDX
//   XREF to: 02c6d124 (WRITE)
// 00486c7e: MOV EDX,dword ptr [EAX + 0x4]
// 00486c81: MOV dword ptr [EBX + 0x4],EDX
//   XREF to: 02c6d128 (WRITE)
// 00486c84: MOV EDX,dword ptr [EAX + 0x8]
// 00486c87: MOV dword ptr [EBX + 0x8],EDX
//   XREF to: 02c6d12c (WRITE)
// 00486c8a: JMP 0x00486a18
//   XREF to: 00486a18 (UNCONDITIONAL_JUMP)
