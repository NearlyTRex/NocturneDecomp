// Name: core_shotgun.cpp_FUN_005888f0
// Address: 005888f0
// Address Range: [[005888f0, 00588ad2]]
// Convention: unknown
// Signature: undefined core_shotgun.cpp_FUN_005888f0()
// Globals:
//   undefined4 DAT_00649b6f
//   double DOUBLE_00649b77 = 0.00555555555555555
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

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Signature: undefined1 actors_weapon_shotgun.cpp_FUN_005888f0(undefined4 param_1) */

void core_shotgun_cpp_FUN_005888f0(void)

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
// 005888f0: PUSH EBX
//   Label: core_shotgun.cpp_FUN_005888f0
// 005888f1: PUSH EDI
// 005888f2: PUSH EBP
// 005888f3: MOV EBP,ESP
// 005888f5: SUB ESP,0x68
// 005888f8: AND ESP,0xfffffff8
// 005888fb: MOV EBX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 005888fe: MOV EDX,dword ptr [0x006703ec]
//   XREF to: 02c6d578 (PARAM)
//   XREF to: 006703ec (READ)
// 00588904: PUSH EDX
//   XREF to: 02c6d578 (DATA)
// 00588905: CALL engine_drender.cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
//   XREF to: 0048cae0 (UNCONDITIONAL_CALL)
// 0058890a: ADD ESP,0x4
// 0058890d: TEST EAX,EAX
// 0058890f: JZ 0x00588917
//   XREF to: 00588917 (CONDITIONAL_JUMP)
// 00588911: MOV ESP,EBP
// 00588913: POP EBP
// 00588914: POP EDI
// 00588915: POP EBX
// 00588916: RET
// 00588917: LEA EAX,[ESP + 0x34]
//   Label: LAB_00588917
//   XREF to: Stack[-0x44] (DATA)
// 0058891b: PUSH EAX
// 0058891c: MOV EDX,dword ptr [EBX + 0x154]
// 00588922: PUSH EBX
// 00588923: CALL dword ptr [EDX + 0xf4]
// 00588929: ADD ESP,0x8
// 0058892c: PUSH EAX
// 0058892d: LEA EAX,[ESP + 0x14]
// 00588931: PUSH EAX
// 00588932: PUSH EBX
// 00588933: CALL core_actor.cpp_CDemonActor_FUN_00408ec0
//   XREF to: 00408ec0 (UNCONDITIONAL_CALL)
// 00588938: ADD ESP,0xc
// 0058893b: MOV EAX,dword ptr [EBX + 0x2e8]
// 00588941: MOV dword ptr [ESP + 0x60],EAX
// 00588945: LEA EAX,[ESP + 0x58]
// 00588949: PUSH EAX
// 0058894a: LEA EAX,[ESP + 0x8]
// 0058894e: PUSH EAX
// 0058894f: XOR ECX,ECX
// 00588951: PUSH EBX
// 00588952: MOV dword ptr [ESP + 0x64],ECX
// 00588956: MOV dword ptr [ESP + 0x68],ECX
// 0058895a: CALL core_actor.cpp_CDemonActor_FUN_00408e80
//   XREF to: 00408e80 (UNCONDITIONAL_CALL)
// 0058895f: LEA EAX,[ESP + 0x4c]
// 00588963: ADD ESP,0xc
// 00588966: LEA EDX,[ESP + 0x28]
// 0058896a: FLD float ptr [ESP + 0x10]
// 0058896e: FLD float ptr [ESP + 0x14]
// 00588972: FLD float ptr [ESP + 0x18]
// 00588976: FLD float ptr [ESP + 0x4]
// 0058897a: FLD float ptr [ESP + 0x8]
// 0058897e: FLD float ptr [ESP + 0xc]
// 00588982: FXCH ST2
// 00588984: FCHS
// 00588986: FXCH
// 00588988: FCHS
// 0058898a: FXCH ST2
// 0058898c: FCHS
// 0058898e: FXCH
// 00588990: FSTP float ptr [ESP + 0x40]
// 00588994: FXCH
// 00588996: FSTP float ptr [ESP + 0x44]
// 0058899a: FSTP float ptr [ESP + 0x48]
// 0058899e: FXCH ST2
// 005889a0: FADD float ptr [ESP + 0x4]
// 005889a4: FXCH
// 005889a6: FADD float ptr [ESP + 0x8]
// 005889aa: FXCH ST2
// 005889ac: FADD float ptr [ESP + 0xc]
// 005889b0: FXCH
// 005889b2: FSTP float ptr [ESP + 0x4c]
// 005889b6: FXCH
// 005889b8: FSTP float ptr [ESP + 0x50]
// 005889bc: FSTP float ptr [ESP + 0x54]
// 005889c0: CMP EDX,EAX
// 005889c2: JZ 0x005889dc
//   XREF to: 005889dc (CONDITIONAL_JUMP)
// 005889c4: MOV EAX,dword ptr [ESP + 0x40]
// 005889c8: MOV dword ptr [ESP + 0x28],EAX
// 005889cc: MOV EAX,dword ptr [ESP + 0x44]
// 005889d0: MOV dword ptr [ESP + 0x2c],EAX
// 005889d4: MOV EAX,dword ptr [ESP + 0x48]
// 005889d8: MOV dword ptr [ESP + 0x30],EAX
// 005889dc: FLD float ptr [ESP + 0x2c]
//   Label: LAB_005889dc
// 005889e0: FMUL ST0
// 005889e2: FLD float ptr [ESP + 0x28]
// 005889e6: FMUL ST0
// 005889e8: FADDP
// 005889ea: FLD float ptr [ESP + 0x30]
// 005889ee: FMUL ST0
// 005889f0: FADDP
// 005889f2: FSQRT
// 005889f4: FST float ptr [ESP]
// 005889f7: FLDZ
// 005889f9: FCOMPP
// 005889fb: FNSTSW AX
// 005889fd: SAHF
// 005889fe: JNC 0x00588ac0
//   XREF to: 00588ac0 (CONDITIONAL_JUMP)
// 00588a04: FLD1
// 00588a06: FLD float ptr [ESP + 0x28]
// 00588a0a: FXCH
// 00588a0c: FDIV float ptr [ESP]
// 00588a0f: FXCH
// 00588a11: FMUL ST1
// 00588a13: FLD float ptr [ESP + 0x2c]
// 00588a17: FMUL ST2
// 00588a19: FLD float ptr [ESP + 0x30]
// 00588a1d: FMULP ST3
// 00588a1f: FXCH
// 00588a21: FSTP float ptr [ESP + 0x28]
// 00588a25: FSTP float ptr [ESP + 0x2c]
// 00588a29: FSTP float ptr [ESP + 0x30]
// 00588a2d: FLD float ptr [EBX + 0x578]
//   Label: LAB_00588a2d
// 00588a33: FMUL double ptr [0x00649b6f]
//   XREF to: 00649b6f (READ)
// 00588a39: FMUL double ptr [0x00649b77]
//   XREF to: 00649b77 (READ)
// 00588a3f: SUB ESP,0x4
// 00588a42: FSTP float ptr [ESP]
// 00588a45: PUSH 0x0
// 00588a47: PUSH 0xff
// 00588a4c: PUSH 0x0
// 00588a4e: LEA EAX,[ESP + 0x5c]
// 00588a52: PUSH 0x3f800000
// 00588a57: PUSH EAX
// 00588a58: LEA EAX,[ESP + 0x28]
// 00588a5c: PUSH EAX
// 00588a5d: MOV ECX,dword ptr [0x0067a3d0]
//   XREF to: 02d12db0 (PARAM)
//   XREF to: 0067a3d0 (READ)
// 00588a63: PUSH ECX
//   XREF to: 02d12db0 (DATA)
// 00588a64: CALL core_fire.cpp_CFireEffect_FUN_004c7f20
//   XREF to: 004c7f20 (UNCONDITIONAL_CALL)
// 00588a69: ADD ESP,0x20
// 00588a6c: MOV dword ptr [EBX + 0x57c],0x1
// 00588a76: FLD float ptr [ESP + 0x4c]
// 00588a7a: FLD float ptr [ESP + 0x50]
// 00588a7e: FSUB float ptr [ESP + 0x14]
// 00588a82: FXCH
// 00588a84: FSUB float ptr [ESP + 0x10]
// 00588a88: FXCH
// 00588a8a: FST float ptr [ESP + 0x20]
// 00588a8e: FMUL float ptr [ESP + 0x20]
// 00588a92: FXCH
// 00588a94: FST float ptr [ESP + 0x1c]
// 00588a98: FMUL float ptr [ESP + 0x1c]
// 00588a9c: FLD float ptr [ESP + 0x54]
// 00588aa0: FSUB float ptr [ESP + 0x18]
// 00588aa4: FXCH
// 00588aa6: FADDP ST2,ST0
// 00588aa8: FST float ptr [ESP + 0x24]
// 00588aac: FMUL float ptr [ESP + 0x24]
// 00588ab0: FADDP
// 00588ab2: FSQRT
// 00588ab4: FSTP float ptr [EBX + 0x580]
// 00588aba: MOV ESP,EBP
// 00588abc: POP EBP
// 00588abd: POP EDI
// 00588abe: POP EBX
// 00588abf: RET
// 00588ac0: XOR EDI,EDI
//   Label: LAB_00588ac0
// 00588ac2: MOV dword ptr [ESP + 0x2c],EDI
// 00588ac6: MOV dword ptr [ESP + 0x28],EDI
// 00588aca: MOV dword ptr [ESP + 0x30],EDI
// 00588ace: JMP 0x00588a2d
//   XREF to: 00588a2d (UNCONDITIONAL_JUMP)
