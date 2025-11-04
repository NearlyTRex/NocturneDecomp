// Name: core_moon.cpp_CMoon_FUN_00529d60
// Address: 00529d60
// Address Range: [[00529d60, 00529ec6]]
// Convention: unknown
// Signature: undefined core_moon.cpp_CMoon_FUN_00529d60()
// Cross-references:
//   core_menu.cpp_CustomKeySettings_FUN_00511890 (00511890) at 005118f2 [UNCONDITIONAL_CALL]
//   core_menu.cpp_GraphicsOptions_FUN_00510c80 (00510c80) at 00510d58 [UNCONDITIONAL_CALL]
//   core_menu.cpp_SettingSoundOptions_FUN_00511e50 (00511e50) at 00511eb7 [UNCONDITIONAL_CALL]
//   core_menu.cpp_ShowOptionsScreen_FUN_00512d30 (00512d30) at 00512d93 [UNCONDITIONAL_CALL]
//   core_menu.cpp_showMainGameMenu_FUN_00512f40 (00512f40) at 00513035 [UNCONDITIONAL_CALL]
// Globals:
//   double DOUBLE_00639f61 = 0.0125000000000000
//   double DOUBLE_00639f69 = 0.580000000000000
//   double DOUBLE_00639f71 = 12
//   double DOUBLE_00639f79 = 60
//   float FLOAT_00639f81 = -60
//   double DOUBLE_00639f89 = 20
//   double DOUBLE_00639f91 = 30
//   undefined4 DAT_0067d7d0
//   int g_GlobalDeltaTimeInt
//   undefined4 DAT_02f381dc
//   undefined4 DAT_02f381e0
//   undefined4 DAT_02f381e4
//   CCourse[3] DAT_02f381e8
//   SBat[30] DAT_02f3820c
//   undefined4 DAT_02f38210
//   undefined4 DAT_02f38214
//   undefined4 DAT_02f38224
//   undefined4 DAT_02f38228
//   undefined4 DAT_02f3822c
//   undefined4 DAT_02f384dc.frame_count

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 core_moon.cpp_CMoon_FUN_00529d60(CMoon* param_1, undefined4 param_2) */

void core_moon_cpp_CMoon_FUN_00529d60(void)

{
  int iVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  int in_stack_00000004;
  float in_stack_00000008;
  
  fVar2 = in_stack_00000008 * (float)DOUBLE_00639f61 + *(float *)(in_stack_00000004 + 4);
  *(float *)(in_stack_00000004 + 4) = fVar2;
  if ((float)DOUBLE_00639f69 < fVar2) {
    *(undefined4 *)(in_stack_00000004 + 4) = 0x3f147ae1;
    DAT_0067d7d0 = 1;
  }
  _DAT_02f381e4 = in_stack_00000008 * (float)DOUBLE_00639f71 + _DAT_02f381e4;
  if ((float)DOUBLE_00639f79 <= _DAT_02f381e4) {
    _DAT_02f381e4 = _DAT_02f381e4 + FLOAT_00639f81;
  }
  DAT_02f381dc = DAT_02f381dc + g_GlobalDeltaTimeInt * 0x20;
  DAT_02f381e0 = DAT_02f381e0 + g_GlobalDeltaTimeInt * 0x10;
  if (DAT_0067d7d0 != 0) {
    iVar4 = 0;
    do {
      iVar1 = *(int *)(DAT_02f3820c[0].field0_0x0 + iVar4);
      *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 4) =
           in_stack_00000008 * (float)DOUBLE_00639f89 +
           *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 4);
      if ((float)DAT_02f381e8[iVar1].len <= *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 4)) {
        *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 4) =
             *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 4) - (float)DAT_02f381e8[iVar1].len;
      }
      fVar2 = (float)DAT_02f384dc.frame_count;
      fVar3 = in_stack_00000008 * (float)DOUBLE_00639f91 +
              *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 8);
      *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 8) = fVar3;
      if (fVar2 <= fVar3) {
        *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 8) =
             *(float *)(DAT_02f3820c[0].field0_0x0 + iVar4 + 8) - fVar2;
      }
      iVar4 = iVar4 + 0x18;
    } while (iVar4 != 0x2d0);
  }
  return;
}


// Assembly code:
// 00529d60: PUSH EBX
//   Label: core_moon.cpp_CMoon_FUN_00529d60
// 00529d61: PUSH ESI
// 00529d62: PUSH EBP
// 00529d63: MOV EBP,ESP
// 00529d65: SUB ESP,0x18
// 00529d68: AND ESP,0xfffffff8
// 00529d6b: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 00529d6e: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 00529d71: MOV dword ptr [ESP],EAX
//   XREF to: Stack[-0x28] (DATA)
// 00529d74: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00529d77: FMUL double ptr [0x00639f61]
//   XREF to: 00639f61 (READ)
// 00529d7d: FADD float ptr [EDX + 0x4]
// 00529d80: FST float ptr [EDX + 0x4]
// 00529d83: FCOMP double ptr [0x00639f69]
//   XREF to: 00639f69 (READ)
// 00529d89: FNSTSW AX
// 00529d8b: SAHF
// 00529d8c: JA 0x00529e9c
//   XREF to: 00529e9c (CONDITIONAL_JUMP)
// 00529d92: FLD float ptr [ESP]
//   Label: LAB_00529d92
//   XREF to: Stack[-0x28] (DATA)
// 00529d95: FMUL double ptr [0x00639f71]
//   XREF to: 00639f71 (READ)
// 00529d9b: FADD float ptr [0x02f381e4]
//   XREF to: 02f381e4 (READ)
// 00529da1: FST float ptr [0x02f381e4]
//   XREF to: 02f381e4 (WRITE)
// 00529da7: FCOMP double ptr [0x00639f79]
//   XREF to: 00639f79 (READ)
// 00529dad: FNSTSW AX
// 00529daf: SAHF
// 00529db0: JC 0x00529dc4
//   XREF to: 00529dc4 (CONDITIONAL_JUMP)
// 00529db2: FLD float ptr [0x02f381e4]
//   XREF to: 02f381e4 (READ)
// 00529db8: FADD float ptr [0x00639f81]
//   XREF to: 00639f81 (READ)
// 00529dbe: FSTP float ptr [0x02f381e4]
//   XREF to: 02f381e4 (WRITE)
// 00529dc4: MOV EAX,[0x02cf6a80]
//   Label: LAB_00529dc4
//   XREF to: 02cf6a80 (READ)
// 00529dc9: MOV ECX,dword ptr [0x02f381dc]
//   XREF to: 02f381dc (READ)
// 00529dcf: SHL EAX,0x5
// 00529dd2: ADD ECX,EAX
// 00529dd4: MOV EAX,[0x02cf6a80]
//   XREF to: 02cf6a80 (READ)
// 00529dd9: MOV EBX,dword ptr [0x02f381e0]
//   XREF to: 02f381e0 (READ)
// 00529ddf: SHL EAX,0x4
// 00529de2: MOV ESI,dword ptr [0x0067d7d0]
//   XREF to: 0067d7d0 (READ)
// 00529de8: ADD EBX,EAX
// 00529dea: MOV dword ptr [0x02f381dc],ECX
//   XREF to: 02f381dc (WRITE)
// 00529df0: MOV dword ptr [0x02f381e0],EBX
//   XREF to: 02f381e0 (WRITE)
// 00529df6: TEST ESI,ESI
// 00529df8: JZ 0x00529e96
//   XREF to: 00529e96 (CONDITIONAL_JUMP)
// 00529dfe: XOR EDX,EDX
// 00529e00: MOV EAX,dword ptr [EDX + 0x2f3820c]
//   Label: LAB_00529e00
//   XREF to: 02f3820c (READ)
//   XREF to: 02f38224 (READ)
// 00529e06: IMUL EAX,EAX,0xc
// 00529e09: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00529e0c: FMUL double ptr [0x00639f89]
//   XREF to: 00639f89 (READ)
// 00529e12: FADD float ptr [EDX + 0x2f38210]
//   XREF to: 02f38210 (READ)
//   XREF to: 02f38228 (READ)
// 00529e18: ADD EAX,0x2f381e8
//   XREF to: 02f381e8 (DATA)
// 00529e1d: FSTP float ptr [EDX + 0x2f38210]
//   XREF to: 02f38210 (WRITE)
//   XREF to: 02f38228 (WRITE)
// 00529e23: MOV EAX,dword ptr [EAX]
//   XREF to: 02f381e8 (DATA)
// 00529e25: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00529e29: FLD float ptr [EDX + 0x2f38210]
//   XREF to: 02f38210 (READ)
//   XREF to: 02f38228 (READ)
// 00529e2f: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00529e33: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (WRITE)
// 00529e37: FCOMP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00529e3b: FNSTSW AX
// 00529e3d: SAHF
// 00529e3e: JNC 0x00529eb2
//   XREF to: 00529eb2 (CONDITIONAL_JUMP)
// 00529e40: MOV EAX,[0x02f385dc]
//   Label: LAB_00529e40
//   XREF to: 02f385dc (READ)
// 00529e45: FLD float ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00529e48: MOV dword ptr [ESP + 0x14],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00529e4c: FMUL double ptr [0x00639f91]
//   XREF to: 00639f91 (READ)
// 00529e52: FILD dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x14] (READ)
// 00529e56: FLD float ptr [EDX + 0x2f38214]
//   XREF to: 02f38214 (READ)
//   XREF to: 02f3822c (READ)
// 00529e5c: FXCH ST2
// 00529e5e: FADD ST0,ST2
// 00529e60: FXCH
// 00529e62: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (WRITE)
// 00529e66: FSTP ST1
// 00529e68: FST float ptr [EDX + 0x2f38214]
//   XREF to: 02f38214 (WRITE)
//   XREF to: 02f3822c (WRITE)
// 00529e6e: FCOMP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00529e72: FNSTSW AX
// 00529e74: SAHF
// 00529e75: JC 0x00529e87
//   XREF to: 00529e87 (CONDITIONAL_JUMP)
// 00529e77: MOV EAX,EDX
// 00529e79: LEA EAX,[EAX + 0x2f38214]
//   XREF to: 02f38214 (DATA)
// 00529e7f: FLD float ptr [EAX]
//   XREF to: 02f38214 (READ)
// 00529e81: FSUB float ptr [ESP + 0xc]
//   XREF to: Stack[-0x1c] (READ)
// 00529e85: FSTP float ptr [EAX]
//   XREF to: 02f38214 (WRITE)
// 00529e87: ADD EDX,0x18
//   Label: LAB_00529e87
// 00529e8a: CMP EDX,0x2d0
// 00529e90: JNZ 0x00529e00
//   XREF to: 00529e00 (CONDITIONAL_JUMP)
// 00529e96: MOV ESP,EBP
//   Label: LAB_00529e96
// 00529e98: POP EBP
// 00529e99: POP ESI
// 00529e9a: POP EBX
// 00529e9b: RET
// 00529e9c: MOV dword ptr [EDX + 0x4],0x3f147ae1
//   Label: LAB_00529e9c
// 00529ea3: MOV dword ptr [0x0067d7d0],0x1
//   XREF to: 0067d7d0 (WRITE)
// 00529ead: JMP 0x00529d92
//   XREF to: 00529d92 (UNCONDITIONAL_JUMP)
// 00529eb2: MOV EAX,EDX
//   Label: LAB_00529eb2
// 00529eb4: LEA EAX,[EAX + 0x2f38210]
//   XREF to: 02f38228 (DATA)
// 00529eba: FLD float ptr [EAX]
//   XREF to: 02f38228 (READ)
// 00529ebc: FSUB float ptr [ESP + 0x10]
//   XREF to: Stack[-0x18] (READ)
// 00529ec0: FSTP float ptr [EAX]
//   XREF to: 02f38228 (WRITE)
// 00529ec2: JMP 0x00529e40
//   XREF to: 00529e40 (UNCONDITIONAL_JUMP)
