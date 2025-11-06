// Name: core_gabriela.cpp_CGabriella_FUN_004d7120
// Address: 004d7120
// Address Range: [[004d7120, 004d7589]]
// Convention: __cdecl
// Signature: void core_gabriela.cpp_CGabriella_FUN_004d7120(CGabriella * this_ptr)
// Globals:
//   TerminatedCString s_core_gabriela_cpp_0062b10d
//   TerminatedCString s_Don_t_know_how_to_carry__0062b122
//   float FLOAT_0062b145 = 0.5
//   double DOUBLE_0062b14d = 0.700000000000000
//   double DOUBLE_0062b155 = 0.300000000000000
//   undefined4 g_CLightActorClassInfo.name_hash
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_buildRotationY_FUN_005f6cc0
//   core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20

#include "nocturne.h"

void __cdecl core_gabriela_cpp_CGabriella_FUN_004d7120(CGabriella *this_ptr)

{
  CDemonActor *actor_ptr;
  CDemonActor *pCVar1;
  CVector3f *pCVar2;
  int iVar3;
  float unaff_EBX;
  BADSPACEBASE *in_ESP;
  float unaff_EBP;
  undefined4 *unaff_ESI;
  undefined4 *puVar4;
  float unaff_EDI;
  undefined4 *puVar5;
  byte bVar6;
  float in_stack_00000008;
  float in_stack_0000000c;
  CMatrix3x4f *matrix;
  float in_stack_fffffe88;
  undefined1 auStack_140 [20];
  float fStack_12c;
  float fStack_11c;
  undefined4 auStack_118 [3];
  float fStack_10c;
  undefined4 auStack_ec [12];
  undefined1 auStack_bc [4];
  undefined1 auStack_b8 [48];
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float local_7c;
  float local_78;
  float local_74;
  float local_70;
  float fStack_6c;
  CGabriella *pCStack_68;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  CVector3f CStack_4c;
  float local_40;
  undefined1 local_3c [8];
  undefined1 local_34 [32];
  float local_14;
  float local_10;
  
  bVar6 = 0;
  actor_ptr = (this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].carry_actor;
  local_10 = *(float *)(this_ptr->base_hero).base_character.carry_hands[(int)in_stack_00000008].
                       field0_0x0;
  local_50 = 0;
  local_54 = 0;
  local_58 = 0;
  local_14 = 0.0;
  local_34._28_4_ = 0.0;
  local_34._24_4_ = 0.0;
  pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790(actor_ptr,g_CLightActorClassInfo.name_hash);
  if (pCVar1 == (CDemonActor *)0x0) goto LAB_004d719a;
  (*actor_ptr->vtable->getBoundingBox)(actor_ptr,(CBoundingBox3D *)(auStack_b8 + 0x1c));
  local_10 = fStack_88 + local_7c;
  local_70 = local_10 * FLOAT_0062b145;
  unaff_EBP = fStack_84 + local_78;
  unaff_EDI = fStack_80 + local_74;
  fStack_6c = unaff_EBP * FLOAT_0062b145;
  pCStack_68 = (CGabriella *)(unaff_EDI * FLOAT_0062b145);
  if ((float *)&stack0xfffffffc != &local_70) {
    this_ptr = pCStack_68;
    unaff_EBX = local_70;
  }
  iVar3 = pCVar1[4].scale.y;
  if (iVar3 == 2) goto LAB_004d719a;
  if (iVar3 != 1) {
    if (iVar3 != 3) {
      g_CurrentFilename = "..\\core\\gabriela.cpp";
      g_CurrentLineNumber = 0x945;
      core_main_c_displayErrorAndQuit_FUN_00506f10("Don't know how to carry light %s");
    }
    goto LAB_004d719a;
  }
  if (in_stack_00000008 == 0.0) {
    matrix = (CMatrix3x4f *)0xbfc90fdb;
    core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0xbfc90fdb,in_stack_fffffe88);
    puVar4 = (undefined4 *)&stack0xfffffe84;
LAB_004d73e5:
    puVar5 = (undefined4 *)auStack_b8;
    for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar5 = *puVar4;
      puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
      puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
    }
  }
  else {
    if (in_stack_00000008 == 1.4013e-45) {
      matrix = (CMatrix3x4f *)0x3fc90fdb;
      core_xform_cpp_buildRotationY_FUN_005f6cc0((CMatrix3x4f *)0x3fc90fdb,in_stack_fffffe88);
      puVar4 = auStack_ec;
      goto LAB_004d73e5;
    }
    matrix = (CMatrix3x4f *)auStack_b8;
    core_xform_cpp_setIdentityMatrix3x4_FUN_005f5100(matrix);
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)auStack_bc,(CMatrix3x4f *)((int)this_ptr * 0x31 + 0xfd8),matrix);
  puVar4 = auStack_118;
  puVar5 = (undefined4 *)auStack_bc;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  pCVar2 = core_xform_cpp_matrixToEulerAngles_FUN_005f5690
                     ((CVector3f *)auStack_b8,(CMatrix3x3f *)local_34);
  if ((CVector3f *)local_3c != pCVar2) {
    local_3c._0_4_ = pCVar2->x;
    local_3c._4_4_ = pCVar2->y;
    local_34._0_4_ = pCVar2->z;
  }
  in_stack_00000008 = local_70 * (float)DOUBLE_0062b155 + local_7c * (float)DOUBLE_0062b14d;
LAB_004d719a:
  if (in_stack_00000008 == 0.0) {
    CStack_4c.z = in_stack_00000008;
    CStack_4c.y = -0.4;
    local_40 = in_stack_00000008;
    if ((float *)(local_34 + 0x1c) != &CStack_4c.y) {
      local_14 = in_stack_00000008;
      local_10 = in_stack_00000008;
      local_34._28_4_ = -0.4;
    }
  }
  else if (in_stack_00000008 == 1.4013e-45) {
    local_5c = 0;
    local_58 = 0;
    local_60 = 0x3ecccccd;
    if ((undefined4 *)(local_34 + 0x1c) != &local_60) {
      local_34._28_4_ = 0.4;
      local_14 = 0.0;
      local_10 = 0.0;
    }
  }
  else {
    local_14 = 0.0;
    local_34._28_4_ = 0.0;
    local_10 = 0.0;
  }
  core_xform_cpp_transformVector3x4InPlace_FUN_005f4e20
            ((CVector3f *)(local_34 + 0x1c),
             (CMatrix3x4f *)
             (this_ptr->base_hero).base_character.model.bone_transform.bone_world_matrices
             [(int)in_stack_0000000c].m);
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_140,(CVector3f *)&local_14,(CVector3f *)(local_3c + 4));
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&CStack_4c,(CVector3f *)&stack0x00000008,(CMatrix3x4f *)(auStack_140 + 4));
  local_34._28_4_ = unaff_EBP - pCVar2->x;
  local_14 = unaff_EDI - pCVar2->y;
  local_10 = unaff_EBX - pCVar2->z;
  fStack_12c = fStack_12c + (float)local_34._28_4_;
  fStack_11c = fStack_11c + local_14;
  fStack_10c = fStack_10c + local_10;
  puVar4 = (undefined4 *)(auStack_140 + 4);
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}


// Assembly code:
// 004d7120: PUSH EBX
//   Label: core_gabriela.cpp_CGabriella_FUN_004d7120
// 004d7121: PUSH EDI
// 004d7122: PUSH EBP
// 004d7123: MOV EBP,ESP
// 004d7125: SUB ESP,0x184
// 004d712b: AND ESP,0xfffffff8
// 004d712e: MOV EBX,ESI
// 004d7130: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004d7133: MOV EAX,EDX
// 004d7135: SHL EAX,0x4
// 004d7138: ADD EAX,EDX
// 004d713a: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d713d: SHL EAX,0x2
// 004d7140: ADD EAX,EDX
// 004d7142: MOV EDI,dword ptr [EAX + 0x24b4]
// 004d7148: MOV EAX,dword ptr [EAX + 0x24ac]
// 004d714e: XOR ECX,ECX
// 004d7150: MOV dword ptr [ESP + 0x180],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 004d7157: MOV dword ptr [ESP + 0x140],ECX
//   XREF to: Stack[-0x50] (WRITE)
// 004d715e: MOV EAX,[0x00822c84]
//   XREF to: 00822c84 (READ)
// 004d7163: MOV dword ptr [ESP + 0x13c],ECX
//   XREF to: Stack[-0x54] (WRITE)
// 004d716a: PUSH EAX
// 004d716b: MOV dword ptr [ESP + 0x13c],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 004d7172: MOV dword ptr [ESP + 0x180],ECX
//   XREF to: Stack[-0x14] (WRITE)
// 004d7179: PUSH EDI
// 004d717a: MOV dword ptr [ESP + 0x180],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 004d7181: MOV dword ptr [ESP + 0x17c],ECX
//   XREF to: Stack[-0x1c] (WRITE)
// 004d7188: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 004d718d: ADD ESP,0x8
// 004d7190: MOV ESI,EAX
// 004d7192: TEST EAX,EAX
// 004d7194: JNZ 0x004d72da
//   XREF to: 004d72da (CONDITIONAL_JUMP)
// 004d719a: MOV EDI,dword ptr [EBP + 0x14]
//   Label: LAB_004d719a
//   XREF to: Stack[0x8] (READ)
// 004d719d: TEST EDI,EDI
// 004d719f: JNZ 0x004d751b
//   XREF to: 004d751b (CONDITIONAL_JUMP)
// 004d71a5: MOV EAX,0xbecccccd
// 004d71aa: LEA EDX,[ESP + 0x15c]
//   XREF to: Stack[-0x34] (DATA)
// 004d71b1: MOV dword ptr [ESP + 0x130],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 004d71b8: MOV dword ptr [ESP + 0x12c],EAX
//   XREF to: Stack[-0x64] (WRITE)
// 004d71bf: LEA EAX,[ESP + 0x12c]
//   XREF to: Stack[-0x64] (DATA)
// 004d71c6: MOV dword ptr [ESP + 0x134],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 004d71cd: CMP EDX,EAX
// 004d71cf: JZ 0x004d71eb
//   XREF to: 004d71eb (CONDITIONAL_JUMP)
// 004d71d1: MOV ESI,0xbecccccd
// 004d71d6: MOV dword ptr [ESP + 0x160],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 004d71dd: MOV dword ptr [ESP + 0x164],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 004d71e4: MOV dword ptr [ESP + 0x15c],ESI
//   XREF to: Stack[-0x34] (WRITE)
// 004d71eb: MOV EDX,dword ptr [ESP + 0x180]
//   Label: LAB_004d71eb
//   XREF to: Stack[-0x10] (READ)
// 004d71f2: LEA EAX,[EDX*0x4 + 0x0]
// 004d71f9: SUB EAX,EDX
// 004d71fb: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d71fe: SHL EAX,0x4
// 004d7201: ADD EDX,0xfd8
// 004d7207: ADD EAX,EDX
// 004d7209: PUSH EAX
// 004d720a: LEA EAX,[ESP + 0x160]
//   XREF to: Stack[-0x34] (DATA)
// 004d7211: PUSH EAX
// 004d7212: CALL core_xform.cpp_transformVector3x4InPlace_FUN_005f4e20
//   XREF to: 005f4e20 (UNCONDITIONAL_CALL)
// 004d7217: ADD ESP,0x8
// 004d721a: LEA EAX,[ESP + 0x138]
//   XREF to: Stack[-0x58] (DATA)
// 004d7221: PUSH EAX
// 004d7222: LEA EAX,[ESP + 0x160]
//   XREF to: Stack[-0x34] (DATA)
// 004d7229: PUSH EAX
// 004d722a: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x160] (DATA)
// 004d722e: PUSH EAX
// 004d722f: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 004d7234: ADD ESP,0xc
// 004d7237: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x160] (DATA)
// 004d723b: PUSH EAX
// 004d723c: LEA EAX,[ESP + 0x178]
//   XREF to: Stack[-0x1c] (DATA)
// 004d7243: PUSH EAX
// 004d7244: LEA EAX,[ESP + 0x128]
//   XREF to: Stack[-0x70] (DATA)
// 004d724b: PUSH EAX
// 004d724c: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x160] (DATA)
// 004d7250: MOV EDI,EBX
// 004d7252: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 004d7257: ADD ESP,0xc
// 004d725a: MOV ECX,0xc
// 004d725f: FLD float ptr [ESP + 0x15c]
//   XREF to: Stack[-0x34] (READ)
// 004d7266: FLD float ptr [ESP + 0x160]
//   XREF to: Stack[-0x30] (READ)
// 004d726d: FLD float ptr [ESP + 0x164]
//   XREF to: Stack[-0x2c] (READ)
// 004d7274: FLD float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x154] (READ)
// 004d7278: FLD float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x144] (READ)
// 004d727c: FXCH ST4
// 004d727e: FSUB float ptr [EAX]
// 004d7280: FLD float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x134] (READ)
// 004d7284: FXCH
// 004d7286: FSTP float ptr [ESP + 0x150]
//   XREF to: Stack[-0x40] (WRITE)
// 004d728d: FXCH ST3
// 004d728f: FSUB float ptr [EAX + 0x4]
// 004d7292: FXCH
// 004d7294: FADD float ptr [ESP + 0x150]
//   XREF to: Stack[-0x40] (READ)
// 004d729b: FXCH
// 004d729d: FSTP float ptr [ESP + 0x154]
//   XREF to: Stack[-0x3c] (WRITE)
// 004d72a4: FXCH
// 004d72a6: FSUB float ptr [EAX + 0x8]
// 004d72a9: FXCH ST3
// 004d72ab: FADD float ptr [ESP + 0x154]
//   XREF to: Stack[-0x3c] (READ)
// 004d72b2: FXCH ST3
// 004d72b4: FSTP float ptr [ESP + 0x158]
//   XREF to: Stack[-0x38] (WRITE)
// 004d72bb: FSTP float ptr [ESP + 0x3c]
//   XREF to: Stack[-0x154] (WRITE)
// 004d72bf: FADD float ptr [ESP + 0x158]
//   XREF to: Stack[-0x38] (READ)
// 004d72c6: FXCH
// 004d72c8: FSTP float ptr [ESP + 0x4c]
//   XREF to: Stack[-0x144] (WRITE)
// 004d72cc: FSTP float ptr [ESP + 0x5c]
//   XREF to: Stack[-0x134] (WRITE)
// 004d72d0: MOVSD.REP ES:EDI,ESI
// 004d72d2: MOV EAX,EBX
// 004d72d4: MOV ESP,EBP
// 004d72d6: POP EBP
// 004d72d7: POP EDI
// 004d72d8: POP EBX
// 004d72d9: RET
// 004d72da: LEA EAX,[ESP + 0xf0]
//   Label: LAB_004d72da
//   XREF to: Stack[-0xa0] (DATA)
// 004d72e1: PUSH EAX
// 004d72e2: MOV EDX,dword ptr [EDI + 0x154]
// 004d72e8: PUSH EDI
// 004d72e9: CALL dword ptr [EDX + 0x14]
// 004d72ec: ADD ESP,0x8
// 004d72ef: FLD float ptr [ESP + 0xf0]
// 004d72f6: FADD float ptr [ESP + 0xfc]
// 004d72fd: FST float ptr [ESP + 0x168]
// 004d7304: FLD float ptr [0x0062b145]
//   XREF to: 0062b145 (READ)
// 004d730a: FXCH
// 004d730c: FMUL ST1
// 004d730e: FLD float ptr [ESP + 0xf8]
// 004d7315: FLD float ptr [ESP + 0xf4]
// 004d731c: FADD float ptr [ESP + 0x100]
// 004d7323: FXCH
// 004d7325: FADD float ptr [ESP + 0x104]
// 004d732c: FXCH
// 004d732e: FST float ptr [ESP + 0x16c]
// 004d7335: FMUL ST3
// 004d7337: FXCH
// 004d7339: FST float ptr [ESP + 0x170]
// 004d7340: FMULP ST3
// 004d7342: LEA EAX,[ESP + 0x108]
// 004d7349: LEA EDX,[ESP + 0x174]
// 004d7350: FXCH
// 004d7352: FSTP float ptr [ESP + 0x108]
// 004d7359: FSTP float ptr [ESP + 0x10c]
// 004d7360: FSTP float ptr [ESP + 0x110]
// 004d7367: CMP EDX,EAX
// 004d7369: JZ 0x004d7395
//   XREF to: 004d7395 (CONDITIONAL_JUMP)
// 004d736b: MOV EAX,dword ptr [ESP + 0x108]
// 004d7372: MOV dword ptr [ESP + 0x174],EAX
// 004d7379: MOV EAX,dword ptr [ESP + 0x10c]
// 004d7380: MOV dword ptr [ESP + 0x178],EAX
// 004d7387: MOV EAX,dword ptr [ESP + 0x110]
// 004d738e: MOV dword ptr [ESP + 0x17c],EAX
// 004d7395: MOV EDX,dword ptr [ESI + 0x66c]
//   Label: LAB_004d7395
// 004d739b: CMP EDX,0x2
// 004d739e: JNZ 0x004d73b3
//   XREF to: 004d73b3 (CONDITIONAL_JUMP)
// 004d73a0: MOV EAX,dword ptr [ESP + 0x100]
// 004d73a7: MOV dword ptr [ESP + 0x178],EAX
// 004d73ae: JMP 0x004d719a
//   XREF to: 004d719a (UNCONDITIONAL_JUMP)
// 004d73b3: CMP EDX,0x1
//   Label: LAB_004d73b3
// 004d73b6: JNZ 0x004d74db
//   XREF to: 004d74db (CONDITIONAL_JUMP)
// 004d73bc: MOV ECX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x8] (READ)
// 004d73bf: TEST ECX,ECX
// 004d73c1: JNZ 0x004d7499
//   XREF to: 004d7499 (CONDITIONAL_JUMP)
// 004d73c7: PUSH 0xbfc90fdb
// 004d73cc: LEA ESI,[ESP + 0x4]
// 004d73d0: LEA EDI,[ESP + 0xc4]
// 004d73d7: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 004d73dc: MOV ECX,0xc
// 004d73e1: LEA ESI,[ESP + 0x4]
// 004d73e5: ADD ESP,0x4
//   Label: LAB_004d73e5
// 004d73e8: MOVSD.REP ES:EDI,ESI
// 004d73ea: MOV EDX,dword ptr [ESP + 0x180]
//   Label: LAB_004d73ea
// 004d73f1: LEA EAX,[EDX*0x4 + 0x0]
// 004d73f8: SUB EAX,EDX
// 004d73fa: MOV EDX,dword ptr [EBP + 0x10]
//   XREF to: Stack[0x4] (READ)
// 004d73fd: SHL EAX,0x4
// 004d7400: ADD EDX,0xfd8
// 004d7406: ADD EAX,EDX
// 004d7408: PUSH EAX
// 004d7409: LEA EAX,[ESP + 0xc4]
// 004d7410: PUSH EAX
// 004d7411: LEA ESI,[ESP + 0x68]
// 004d7415: LEA EDI,[ESP + 0xc8]
// 004d741c: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 004d7421: ADD ESP,0x8
// 004d7424: LEA EAX,[ESP + 0x144]
// 004d742b: MOV ECX,0xc
// 004d7430: PUSH EAX
// 004d7431: LEA EAX,[ESP + 0xc4]
// 004d7438: LEA ESI,[ESP + 0x64]
// 004d743c: PUSH EAX
// 004d743d: MOVSD.REP ES:EDI,ESI
// 004d743f: CALL core_xform.cpp_matrixToEulerAngles_FUN_005f5690
//   XREF to: 005f5690 (UNCONDITIONAL_CALL)
// 004d7444: MOV EDX,EAX
// 004d7446: LEA EAX,[ESP + 0x140]
// 004d744d: ADD ESP,0x8
// 004d7450: CMP EAX,EDX
// 004d7452: JZ 0x004d7471
//   XREF to: 004d7471 (CONDITIONAL_JUMP)
// 004d7454: MOV EAX,dword ptr [EDX]
// 004d7456: MOV dword ptr [ESP + 0x138],EAX
// 004d745d: MOV EAX,dword ptr [EDX + 0x4]
// 004d7460: MOV dword ptr [ESP + 0x13c],EAX
// 004d7467: MOV EAX,dword ptr [EDX + 0x8]
// 004d746a: MOV dword ptr [ESP + 0x140],EAX
// 004d7471: FLD float ptr [ESP + 0xf8]
//   Label: LAB_004d7471
// 004d7478: FMUL double ptr [0x0062b14d]
//   XREF to: 0062b14d (READ)
// 004d747e: FLD float ptr [ESP + 0x104]
// 004d7485: FMUL double ptr [0x0062b155]
//   XREF to: 0062b155 (READ)
// 004d748b: FADDP
// 004d748d: FSTP float ptr [ESP + 0x17c]
// 004d7494: JMP 0x004d719a
//   XREF to: 004d719a (UNCONDITIONAL_JUMP)
// 004d7499: CMP ECX,EDX
//   Label: LAB_004d7499
// 004d749b: JNZ 0x004d74c6
//   XREF to: 004d74c6 (CONDITIONAL_JUMP)
// 004d749d: PUSH 0x3fc90fdb
// 004d74a2: LEA ESI,[ESP + 0x94]
// 004d74a9: LEA EDI,[ESP + 0xc4]
// 004d74b0: CALL core_xform.cpp_buildRotationY_FUN_005f6cc0
//   XREF to: 005f6cc0 (UNCONDITIONAL_CALL)
// 004d74b5: MOV ECX,0xc
// 004d74ba: LEA ESI,[ESP + 0x94]
// 004d74c1: JMP 0x004d73e5
//   XREF to: 004d73e5 (UNCONDITIONAL_JUMP)
// 004d74c6: LEA EAX,[ESP + 0xc0]
//   Label: LAB_004d74c6
// 004d74cd: PUSH EAX
// 004d74ce: CALL core_xform.cpp_setIdentityMatrix3x4_FUN_005f5100
//   XREF to: 005f5100 (UNCONDITIONAL_CALL)
// 004d74d3: ADD ESP,0x4
// 004d74d6: JMP 0x004d73ea
//   XREF to: 004d73ea (UNCONDITIONAL_JUMP)
// 004d74db: CMP EDX,0x3
//   Label: LAB_004d74db
// 004d74de: JNZ 0x004d74f3
//   XREF to: 004d74f3 (CONDITIONAL_JUMP)
// 004d74e0: MOV EAX,dword ptr [ESP + 0x100]
// 004d74e7: MOV dword ptr [ESP + 0x178],EAX
// 004d74ee: JMP 0x004d719a
//   XREF to: 004d719a (UNCONDITIONAL_JUMP)
// 004d74f3: PUSH ESI
//   Label: LAB_004d74f3
// 004d74f4: MOV EAX,0x62b10d
//   XREF to: 0062b10d (PARAM)
// 004d74f9: MOV EDX,0x945
// 004d74fe: PUSH 0x62b122
//   XREF to: 0062b122 (DATA)
// 004d7503: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 004d7508: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 004d750e: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 004d7513: ADD ESP,0x8
// 004d7516: JMP 0x004d719a
//   XREF to: 004d719a (UNCONDITIONAL_JUMP)
// 004d751b: CMP EDI,0x1
//   Label: LAB_004d751b
// 004d751e: JNZ 0x004d756e
//   XREF to: 004d756e (CONDITIONAL_JUMP)
// 004d7520: MOV EDI,0x3ecccccd
// 004d7525: XOR EAX,EAX
// 004d7527: LEA EDX,[ESP + 0x15c]
//   XREF to: Stack[-0x34] (DATA)
// 004d752e: MOV dword ptr [ESP + 0x118],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 004d7535: MOV dword ptr [ESP + 0x11c],EAX
//   XREF to: Stack[-0x74] (WRITE)
// 004d753c: LEA EAX,[ESP + 0x114]
//   XREF to: Stack[-0x7c] (DATA)
// 004d7543: MOV dword ptr [ESP + 0x114],EDI
//   XREF to: Stack[-0x7c] (WRITE)
// 004d754a: CMP EDX,EAX
// 004d754c: JZ 0x004d71eb
//   XREF to: 004d71eb (CONDITIONAL_JUMP)
// 004d7552: XOR ESI,ESI
// 004d7554: MOV dword ptr [ESP + 0x15c],EDI
//   XREF to: Stack[-0x34] (WRITE)
// 004d755b: MOV dword ptr [ESP + 0x160],ESI
//   XREF to: Stack[-0x30] (WRITE)
// 004d7562: MOV dword ptr [ESP + 0x164],ESI
//   XREF to: Stack[-0x2c] (WRITE)
// 004d7569: JMP 0x004d71eb
//   XREF to: 004d71eb (UNCONDITIONAL_JUMP)
// 004d756e: XOR EDX,EDX
//   Label: LAB_004d756e
// 004d7570: MOV dword ptr [ESP + 0x160],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 004d7577: MOV dword ptr [ESP + 0x15c],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004d757e: MOV dword ptr [ESP + 0x164],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 004d7585: JMP 0x004d71eb
//   XREF to: 004d71eb (UNCONDITIONAL_JUMP)
