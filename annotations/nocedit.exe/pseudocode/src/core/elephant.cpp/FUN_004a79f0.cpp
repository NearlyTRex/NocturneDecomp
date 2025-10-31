// Name: core_elephant.cpp_FUN_004a79f0
// Address: 004a79f0
// Address Range: [[004a79f0, 004a7bd2]]
// Convention: unknown
// Signature: undefined core_elephant.cpp_FUN_004a79f0()
// Globals:
//   double DOUBLE_0062403a = 3.14159265350000
//   double DOUBLE_00624042 = 0.00555555555555555
//   CDemonRenderer* g_CDemonRendererPtr = 02c6d578
//   CFireEffect* g_CFireEffectPtr = 02d12db0
//   CDemonRenderer g_CDemonRendererInstance
//   CFireEffect g_CFireEffectInstance
// Function calls:
//   core_actor.cpp_CDemonActor_FUN_00408e80
//   core_actor.cpp_CDemonActor_FUN_00408ec0
//   core_fire.cpp_CFireEffect_FUN_004c7f20
//   engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0

#include "nocturne.h"

/* Signature: undefined1 actors_other_emitter.cpp_FUN_004a79f0(undefined4 param_1) */

void core_elephant_cpp_FUN_004a79f0(void)

{
  float fVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  CDemonActor *in_stack_00000004;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float fStack_48;
  float local_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
  if (iVar2 != 0) {
    return;
  }
  (*(in_stack_00000004->metadata).vtable[1].renderOpaque)(in_stack_00000004);
  core_actor_cpp_CDemonActor_FUN_00408ec0(in_stack_00000004);
  core_actor_cpp_CDemonActor_FUN_00408e80(in_stack_00000004);
  fStack_20 = -fStack_5c;
  fStack_1c = -fStack_58;
  fStack_18 = -fStack_54;
  fStack_14 = fStack_50 + fStack_5c;
  fStack_10 = fStack_4c + fStack_58;
  if (&fStack_38 != &fStack_20) {
    fStack_38 = fStack_20;
    fStack_34 = fStack_1c;
    fStack_30 = fStack_18;
  }
  fVar1 = SQRT(fStack_30 * fStack_30 + fStack_38 * fStack_38 + fStack_34 * fStack_34);
  if (fVar1 <= 0.0) {
    fStack_34 = 0.0;
    fStack_38 = 0.0;
    fStack_30 = 0.0;
  }
  else {
    fVar1 = 1.0 / fVar1;
    fStack_38 = fStack_38 * fVar1;
    fStack_34 = fStack_34 * fVar1;
    fStack_30 = fStack_30 * fVar1;
  }
  core_fire_cpp_CFireEffect_FUN_004c7f20(g_CFireEffectPtr);
  in_stack_00000004[4].actor_name[0x1c] = '\x01';
  in_stack_00000004[4].actor_name[0x1d] = '\0';
  in_stack_00000004[4].actor_name[0x1e] = '\0';
  in_stack_00000004[4].actor_name[0x1f] = '\0';
  fVar1 = (fStack_48 + fStack_54) - fStack_48;
  in_stack_00000004[4].location.position.x =
       SQRT((0.0 - local_44) * (0.0 - local_44) +
            (fStack_10 - fStack_4c) * (fStack_10 - fStack_4c) + fVar1 * fVar1);
  return;
}


// Assembly code:
// 004a79f0: PUSH EBX
//   Label: core_elephant.cpp_FUN_004a79f0
// 004a79f1: PUSH EDI
// 004a79f2: PUSH EBP
// 004a79f3: MOV EBP,ESP
// 004a79f5: SUB ESP,0x68
// 004a79f8: AND ESP,0xfffffff8
// 004a79fb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004a79fe: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 004a7a04: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 004a7a05: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 004a7a0a: ADD ESP,0x4
// 004a7a0d: TEST EAX,EAX
// 004a7a0f: JZ 0x004a7a17
//   XREF to: 004a7a17 (CONDITIONAL_JUMP)
// 004a7a11: MOV ESP,EBP
// 004a7a13: POP EBP
// 004a7a14: POP EDI
// 004a7a15: POP EBX
// 004a7a16: RET
// 004a7a17: LEA EAX,[ESP + 0x34]
//   Label: LAB_004a7a17
//   XREF to: Stack[-0x44] (DATA)
// 004a7a1b: PUSH EAX
// 004a7a1c: MOV EDX,dword ptr [EBX + 0x154]
// 004a7a22: PUSH EBX
// 004a7a23: CALL dword ptr [EDX + 0xf4]
// 004a7a29: ADD ESP,0x8
// 004a7a2c: PUSH EAX
// 004a7a2d: LEA EAX,[ESP + 0x14]
// 004a7a31: PUSH EAX
// 004a7a32: PUSH EBX
// 004a7a33: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 004a7a38: ADD ESP,0xc
// 004a7a3b: MOV EAX,dword ptr [EBX + 0x2e8]
// 004a7a41: MOV dword ptr [ESP + 0x60],EAX
// 004a7a45: LEA EAX,[ESP + 0x58]
// 004a7a49: PUSH EAX
// 004a7a4a: LEA EAX,[ESP + 0x8]
// 004a7a4e: PUSH EAX
// 004a7a4f: XOR ECX,ECX
// 004a7a51: PUSH EBX
// 004a7a52: MOV dword ptr [ESP + 0x64],ECX
// 004a7a56: MOV dword ptr [ESP + 0x68],ECX
// 004a7a5a: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 004a7a5f: LEA EAX,[ESP + 0x4c]
// 004a7a63: ADD ESP,0xc
// 004a7a66: LEA EDX,[ESP + 0x28]
// 004a7a6a: FLD float ptr [ESP + 0x10]
// 004a7a6e: FLD float ptr [ESP + 0x14]
// 004a7a72: FLD float ptr [ESP + 0x18]
// 004a7a76: FLD float ptr [ESP + 0x4]
// 004a7a7a: FLD float ptr [ESP + 0x8]
// 004a7a7e: FLD float ptr [ESP + 0xc]
// 004a7a82: FXCH ST2
// 004a7a84: FCHS
// 004a7a86: FXCH
// 004a7a88: FCHS
// 004a7a8a: FXCH ST2
// 004a7a8c: FCHS
// 004a7a8e: FXCH
// 004a7a90: FSTP float ptr [ESP + 0x40]
// 004a7a94: FXCH
// 004a7a96: FSTP float ptr [ESP + 0x44]
// 004a7a9a: FSTP float ptr [ESP + 0x48]
// 004a7a9e: FXCH ST2
// 004a7aa0: FADD float ptr [ESP + 0x4]
// 004a7aa4: FXCH
// 004a7aa6: FADD float ptr [ESP + 0x8]
// 004a7aaa: FXCH ST2
// 004a7aac: FADD float ptr [ESP + 0xc]
// 004a7ab0: FXCH
// 004a7ab2: FSTP float ptr [ESP + 0x4c]
// 004a7ab6: FXCH
// 004a7ab8: FSTP float ptr [ESP + 0x50]
// 004a7abc: FSTP float ptr [ESP + 0x54]
// 004a7ac0: CMP EDX,EAX
// 004a7ac2: JZ 0x004a7adc
//   XREF to: 004a7adc (CONDITIONAL_JUMP)
// 004a7ac4: MOV EAX,dword ptr [ESP + 0x40]
// 004a7ac8: MOV dword ptr [ESP + 0x28],EAX
// 004a7acc: MOV EAX,dword ptr [ESP + 0x44]
// 004a7ad0: MOV dword ptr [ESP + 0x2c],EAX
// 004a7ad4: MOV EAX,dword ptr [ESP + 0x48]
// 004a7ad8: MOV dword ptr [ESP + 0x30],EAX
// 004a7adc: FLD float ptr [ESP + 0x2c]
//   Label: LAB_004a7adc
// 004a7ae0: FMUL ST0
// 004a7ae2: FLD float ptr [ESP + 0x28]
// 004a7ae6: FMUL ST0
// 004a7ae8: FADDP
// 004a7aea: FLD float ptr [ESP + 0x30]
// 004a7aee: FMUL ST0
// 004a7af0: FADDP
// 004a7af2: FSQRT
// 004a7af4: FST float ptr [ESP]
// 004a7af7: FLDZ
// 004a7af9: FCOMPP
// 004a7afb: FNSTSW AX
// 004a7afd: SAHF
// 004a7afe: JNC 0x004a7bc0
//   XREF to: 004a7bc0 (CONDITIONAL_JUMP)
// 004a7b04: FLD1
// 004a7b06: FLD float ptr [ESP + 0x28]
// 004a7b0a: FXCH
// 004a7b0c: FDIV float ptr [ESP]
// 004a7b0f: FXCH
// 004a7b11: FMUL ST1
// 004a7b13: FLD float ptr [ESP + 0x2c]
// 004a7b17: FMUL ST2
// 004a7b19: FLD float ptr [ESP + 0x30]
// 004a7b1d: FMULP ST3
// 004a7b1f: FXCH
// 004a7b21: FSTP float ptr [ESP + 0x28]
// 004a7b25: FSTP float ptr [ESP + 0x2c]
// 004a7b29: FSTP float ptr [ESP + 0x30]
// 004a7b2d: FLD float ptr [EBX + 0x578]
//   Label: LAB_004a7b2d
// 004a7b33: FMUL double ptr [0x0062403a]
//   XREF to: 0062403a (READ)
// 004a7b39: FMUL double ptr [0x00624042]
//   XREF to: 00624042 (READ)
// 004a7b3f: SUB ESP,0x4
// 004a7b42: FSTP float ptr [ESP]
// 004a7b45: PUSH 0x0
// 004a7b47: PUSH 0xff
// 004a7b4c: PUSH 0x0
// 004a7b4e: LEA EAX,[ESP + 0x5c]
// 004a7b52: PUSH 0x3f800000
// 004a7b57: PUSH EAX
// 004a7b58: LEA EAX,[ESP + 0x28]
// 004a7b5c: PUSH EAX
// 004a7b5d: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 004a7b63: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 004a7b64: CALL core_fire.cpp_CFireEffect_FUN_004c7f20
//   XREF to: 004c7f20 (UNCONDITIONAL_CALL)
// 004a7b69: ADD ESP,0x20
// 004a7b6c: MOV dword ptr [EBX + 0x57c],0x1
// 004a7b76: FLD float ptr [ESP + 0x4c]
// 004a7b7a: FLD float ptr [ESP + 0x50]
// 004a7b7e: FSUB float ptr [ESP + 0x14]
// 004a7b82: FXCH
// 004a7b84: FSUB float ptr [ESP + 0x10]
// 004a7b88: FXCH
// 004a7b8a: FST float ptr [ESP + 0x20]
// 004a7b8e: FMUL float ptr [ESP + 0x20]
// 004a7b92: FXCH
// 004a7b94: FST float ptr [ESP + 0x1c]
// 004a7b98: FMUL float ptr [ESP + 0x1c]
// 004a7b9c: FLD float ptr [ESP + 0x54]
// 004a7ba0: FSUB float ptr [ESP + 0x18]
// 004a7ba4: FXCH
// 004a7ba6: FADDP ST2,ST0
// 004a7ba8: FST float ptr [ESP + 0x24]
// 004a7bac: FMUL float ptr [ESP + 0x24]
// 004a7bb0: FADDP
// 004a7bb2: FSQRT
// 004a7bb4: FSTP float ptr [EBX + 0x580]
// 004a7bba: MOV ESP,EBP
// 004a7bbc: POP EBP
// 004a7bbd: POP EDI
// 004a7bbe: POP EBX
// 004a7bbf: RET
// 004a7bc0: XOR EDI,EDI
//   Label: LAB_004a7bc0
// 004a7bc2: MOV dword ptr [ESP + 0x2c],EDI
// 004a7bc6: MOV dword ptr [ESP + 0x28],EDI
// 004a7bca: MOV dword ptr [ESP + 0x30],EDI
// 004a7bce: JMP 0x004a7b2d
//   XREF to: 004a7b2d (UNCONDITIONAL_JUMP)
