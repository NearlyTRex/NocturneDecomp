// Name: core_fire.cpp_CFireEffect_FUN_004c7f80
// Address: 004c7f80
// Address Range: [[004c7f80, 004c81e9]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7f80(CFireEffect * this_ptr)
// Cross-references:
//   core_stranger.cpp_CStranger_FUN_005c3150 (005c3150) at 005c329d [UNCONDITIONAL_CALL]
// Globals:
//   float FLOAT_0062a05f = 0.05000000
//   double DOUBLE_0062a063 = 0.0500000000000000
//   double DOUBLE_0062a06b = 0.5
//   undefined4 DAT_0065dcc0
// Function calls:
//   core_fire.cpp_CFireEffect_FUN_004c7eb0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7f80(CFireEffect *this_ptr)

{
  float fVar1;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_0000001c;
  float local_88;
  float local_84;
  float local_80;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  float fStack_1c;
  float local_14;
  
  local_80 = in_stack_0000001c;
  local_88 = in_stack_0000001c * FLOAT_0062a05f;
  if (local_88 < (float)DOUBLE_0062a063) {
    local_88 = 0.05;
  }
  fVar1 = *in_stack_00000008;
  local_6c = in_stack_00000008[1];
  local_68 = in_stack_00000008[2];
  local_28 = *in_stack_0000000c;
  local_24 = in_stack_0000000c[1];
  local_20 = in_stack_0000000c[2];
  while( true ) {
    local_84 = local_80;
    if (local_88 < local_80) {
      local_84 = local_88;
    }
    local_34 = local_28 * local_84;
    local_30 = local_24 * local_84;
    local_2c = local_20 * local_84;
    local_14 = local_84 * (float)DOUBLE_0062a06b * local_84;
    local_64 = local_14 * 0.0;
    local_60 = local_14 * -32.0;
    local_5c = local_14 * 0.0;
    local_80 = local_80 - local_84;
    local_58 = fVar1 + local_34;
    local_54 = local_6c + local_30;
    local_50 = local_68 + local_2c;
    local_40 = local_58 + local_64;
    local_3c = local_54 + local_60;
    local_38 = local_50 + local_5c;
    if (local_80 <= 0.0) break;
    core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
    if (&local_6c != &local_3c) {
      local_6c = local_3c;
      local_68 = local_38;
    }
    local_48 = local_80 * -32.0;
    local_44 = local_80 * 0.0;
    local_24 = local_24 + local_48;
    local_20 = local_20 + local_44;
    fStack_1c = fStack_1c + fVar1 * local_80;
  }
  core_fire_cpp_CFireEffect_FUN_004c7eb0(this_ptr);
  return;
}


// Assembly code:
// 004c7f80: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c7f80
// 004c7f81: PUSH ESI
// 004c7f82: PUSH EDI
// 004c7f83: PUSH EBP
// 004c7f84: MOV EBP,ESP
// 004c7f86: SUB ESP,0x78
// 004c7f89: AND ESP,0xfffffff8
// 004c7f8c: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004c7f8f: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004c7f92: MOV EDX,dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 004c7f95: MOV EAX,dword ptr [EBP + 0x2c]
//   XREF to: Stack[0x1c] (READ)
// 004c7f98: MOV EDI,dword ptr [EBP + 0x30]
//   XREF to: Stack[0x20] (READ)
// 004c7f9b: MOV EBX,dword ptr [EBP + 0x34]
//   XREF to: Stack[0x24] (READ)
// 004c7f9e: MOV dword ptr [ESP + 0x8],EAX
//   XREF to: Stack[-0x80] (WRITE)
// 004c7fa2: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004c7fa6: FMUL float ptr [0x0062a05f]
//   XREF to: 0062a05f (READ)
// 004c7fac: FST float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 004c7faf: FCOMP double ptr [0x0062a063]
//   XREF to: 0062a063 (READ)
// 004c7fb5: FNSTSW AX
// 004c7fb7: SAHF
// 004c7fb8: JC 0x004c8194
//   XREF to: 004c8194 (CONDITIONAL_JUMP)
// 004c7fbe: MOV EAX,dword ptr [ECX]
//   Label: LAB_004c7fbe
// 004c7fc0: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004c7fc4: LEA EAX,[ECX + 0x4]
// 004c7fc7: MOV EAX,dword ptr [EAX]
// 004c7fc9: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004c7fcd: MOV EAX,dword ptr [ECX + 0x8]
// 004c7fd0: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004c7fd4: MOV EAX,dword ptr [EDX]
// 004c7fd6: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x28] (WRITE)
// 004c7fda: LEA EAX,[EDX + 0x4]
// 004c7fdd: MOV EAX,dword ptr [EAX]
// 004c7fdf: MOV dword ptr [ESP + 0x64],EAX
//   XREF to: Stack[-0x24] (WRITE)
// 004c7fe3: LEA EAX,[EDX + 0x8]
// 004c7fe6: MOV ECX,0xc2000000
// 004c7feb: MOV EAX,dword ptr [EAX]
// 004c7fed: XOR EDX,EDX
// 004c7fef: MOV dword ptr [ESP + 0x68],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 004c7ff3: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x7c] (WRITE)
// 004c7ff7: MOV dword ptr [ESP + 0x10],ECX
//   XREF to: Stack[-0x78] (WRITE)
// 004c7ffb: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 004c7fff: MOV EAX,dword ptr [ESP + 0x8]
//   Label: LAB_004c7fff
//   XREF to: Stack[-0x80] (READ)
// 004c8003: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004c8007: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 004c800b: FCOMP float ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 004c800e: FNSTSW AX
// 004c8010: SAHF
// 004c8011: JBE 0x004c801a
//   XREF to: 004c801a (CONDITIONAL_JUMP)
// 004c8013: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x88] (DATA)
// 004c8016: MOV dword ptr [ESP + 0x4],EAX
//   XREF to: Stack[-0x84] (WRITE)
// 004c801a: FLD float ptr [ESP + 0x60]
//   Label: LAB_004c801a
//   XREF to: Stack[-0x28] (READ)
// 004c801e: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 004c8022: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 004c8026: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 004c802a: FLD float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 004c802e: FLD ST0
// 004c8030: FMUL double ptr [0x0062a06b]
//   XREF to: 0062a06b (READ)
// 004c8036: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 004c803a: FMUL float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 004c803e: FXCH
// 004c8040: FMULP ST2
// 004c8042: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 004c8046: FXCH ST2
// 004c8048: FSTP float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (WRITE)
// 004c804c: FXCH
// 004c804e: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 004c8052: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 004c8056: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 004c805a: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 004c805e: FMUL float ptr [ESP + 0x74]
//   XREF to: Stack[-0x14] (READ)
// 004c8062: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x70] (READ)
// 004c8066: FXCH ST6
// 004c8068: FSTP float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (WRITE)
// 004c806c: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x6c] (READ)
// 004c8070: FXCH ST5
// 004c8072: FSTP float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (WRITE)
// 004c8076: FLD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x68] (READ)
// 004c807a: FXCH ST4
// 004c807c: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (WRITE)
// 004c8080: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004c8084: FSUB float ptr [ESP + 0x4]
//   XREF to: Stack[-0x84] (READ)
// 004c8088: FXCH ST6
// 004c808a: FADD float ptr [ESP + 0x54]
//   XREF to: Stack[-0x34] (READ)
// 004c808e: FXCH ST6
// 004c8090: FSTP float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (WRITE)
// 004c8094: FXCH ST5
// 004c8096: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (WRITE)
// 004c809a: FLD float ptr [ESP + 0x8]
//   XREF to: Stack[-0x80] (READ)
// 004c809e: FXCH ST4
// 004c80a0: FADD float ptr [ESP + 0x58]
//   XREF to: Stack[-0x30] (READ)
// 004c80a4: FXCH ST3
// 004c80a6: FADD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x2c] (READ)
// 004c80aa: FXCH ST3
// 004c80ac: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (WRITE)
// 004c80b0: FLDZ
// 004c80b2: FXCH ST3
// 004c80b4: FSTP float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (WRITE)
// 004c80b8: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x58] (READ)
// 004c80bc: FXCH ST2
// 004c80be: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (WRITE)
// 004c80c2: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x54] (READ)
// 004c80c6: FXCH
// 004c80c8: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (WRITE)
// 004c80cc: FLD float ptr [ESP + 0x38]
//   XREF to: Stack[-0x50] (READ)
// 004c80d0: FXCH ST5
// 004c80d2: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (WRITE)
// 004c80d6: FXCH
// 004c80d8: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x64] (READ)
// 004c80dc: FXCH
// 004c80de: FADD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x60] (READ)
// 004c80e2: FXCH ST4
// 004c80e4: FADD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x5c] (READ)
// 004c80e8: FXCH
// 004c80ea: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x40] (WRITE)
// 004c80ee: FXCH ST3
// 004c80f0: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (WRITE)
// 004c80f4: FXCH ST2
// 004c80f6: FSTP float ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (WRITE)
// 004c80fa: FXCH
// 004c80fc: FCOMPP
// 004c80fe: FNSTSW AX
// 004c8100: SAHF
// 004c8101: JNC 0x004c81ba
//   XREF to: 004c81ba (CONDITIONAL_JUMP)
// 004c8107: MOV EDX,dword ptr [EBP + 0x38]
//   XREF to: Stack[0x28] (READ)
// 004c810a: PUSH dword ptr [0x0065dcc0]
//   XREF to: 0065dcc0 (READ)
// 004c8110: PUSH EDX
// 004c8111: PUSH EBX
// 004c8112: PUSH EDI
// 004c8113: MOV ECX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004c8116: PUSH ECX
// 004c8117: PUSH 0x0
// 004c8119: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 004c811d: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c8120: PUSH EAX
// 004c8121: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x70] (DATA)
// 004c8125: PUSH EAX
// 004c8126: PUSH ESI
// 004c8127: CALL core_fire.cpp_CFireEffect_FUN_004c7eb0
//   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)
// 004c812c: LEA EDX,[ESP + 0x70]
//   XREF to: Stack[-0x40] (DATA)
// 004c8130: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x70] (DATA)
// 004c8134: ADD ESP,0x28
// 004c8137: CMP EAX,EDX
// 004c8139: JNZ 0x004c81a0
//   XREF to: 004c81a0 (CONDITIONAL_JUMP)
// 004c813b: FLD float ptr [ESP + 0x4]
//   Label: LAB_004c813b
//   XREF to: Stack[-0x84] (READ)
// 004c813f: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x7c] (READ)
// 004c8143: FMUL ST1
// 004c8145: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x78] (READ)
// 004c8149: FMUL ST2
// 004c814b: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x74] (READ)
// 004c814f: FMULP ST3
// 004c8151: FLD float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (READ)
// 004c8155: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (READ)
// 004c8159: FLD float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (READ)
// 004c815d: FXCH ST4
// 004c815f: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (WRITE)
// 004c8163: FXCH ST2
// 004c8165: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (WRITE)
// 004c8169: FXCH ST3
// 004c816b: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (WRITE)
// 004c816f: FXCH ST2
// 004c8171: FADD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x4c] (READ)
// 004c8175: FXCH ST2
// 004c8177: FADD float ptr [ESP + 0x40]
//   XREF to: Stack[-0x48] (READ)
// 004c817b: FXCH
// 004c817d: FADD float ptr [ESP + 0x44]
//   XREF to: Stack[-0x44] (READ)
// 004c8181: FXCH ST2
// 004c8183: FSTP float ptr [ESP + 0x60]
//   XREF to: Stack[-0x28] (WRITE)
// 004c8187: FSTP float ptr [ESP + 0x64]
//   XREF to: Stack[-0x24] (WRITE)
// 004c818b: FSTP float ptr [ESP + 0x68]
//   XREF to: Stack[-0x20] (WRITE)
// 004c818f: JMP 0x004c7fff
//   XREF to: 004c7fff (UNCONDITIONAL_JUMP)
// 004c8194: MOV dword ptr [ESP],0x3d4ccccd
//   Label: LAB_004c8194
//   XREF to: Stack[-0x88] (DATA)
// 004c819b: JMP 0x004c7fbe
//   XREF to: 004c7fbe (UNCONDITIONAL_JUMP)
// 004c81a0: MOV EAX,dword ptr [ESP + 0x48]
//   Label: LAB_004c81a0
//   XREF to: Stack[-0x40] (READ)
// 004c81a4: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x70] (WRITE)
// 004c81a8: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x3c] (READ)
// 004c81ac: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x6c] (WRITE)
// 004c81b0: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x38] (READ)
// 004c81b4: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x68] (WRITE)
// 004c81b8: JMP 0x004c813b
//   XREF to: 004c813b (UNCONDITIONAL_JUMP)
// 004c81ba: MOV EAX,dword ptr [EBP + 0x38]
//   Label: LAB_004c81ba
//   XREF to: Stack[0x28] (READ)
// 004c81bd: PUSH dword ptr [0x0065dcc0]
//   XREF to: 0065dcc0 (READ)
// 004c81c3: PUSH EAX
// 004c81c4: PUSH EBX
// 004c81c5: PUSH EDI
// 004c81c6: MOV EDX,dword ptr [EBP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 004c81c9: PUSH EDX
// 004c81ca: PUSH dword ptr [EBP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 004c81cd: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x40] (DATA)
// 004c81d1: PUSH dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 004c81d4: PUSH EAX
// 004c81d5: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x70] (DATA)
// 004c81d9: PUSH EAX
// 004c81da: PUSH ESI
// 004c81db: CALL core_fire.cpp_CFireEffect_FUN_004c7eb0
//   XREF to: 004c7eb0 (UNCONDITIONAL_CALL)
// 004c81e0: ADD ESP,0x28
// 004c81e3: MOV ESP,EBP
// 004c81e5: POP EBP
// 004c81e6: POP EDI
// 004c81e7: POP ESI
// 004c81e8: POP EBX
// 004c81e9: RET
