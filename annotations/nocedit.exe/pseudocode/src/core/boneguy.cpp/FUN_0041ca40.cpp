// Name: core_boneguy.cpp_FUN_0041ca40
// Address: 0041ca40
// Address Range: [[0041ca40, 0041cc36]]
// Convention: unknown
// Signature: undefined core_boneguy.cpp_FUN_0041ca40()
// Globals:
//   float FLOAT_00616165 = 0.5
//   double DOUBLE_0061616d = 0.400000000000000
//   CVector3f g_ZeroVector
// Function calls:
//   core_actor.cpp_CVector_ctor_FUN_00410340
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_boneguy.cpp_FUN_0041ca40(undefined4 param_1, undefined4
   param_2) */

void core_boneguy_cpp_FUN_0041ca40(void)

{
  int iVar1;
  CVector3f *pCVar2;
  int iVar3;
  BADSPACEBASE *in_ESP;
  float *unaff_ESI;
  float *pfVar4;
  CMatrix3x4f *pCVar5;
  byte bVar6;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_fffffee0;
  CMatrix3x4f local_f0;
  float local_c0 [12];
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float local_80;
  float local_7c;
  CVector3f local_78;
  CVector3f local_6c;
  CVector3f local_60;
  CVector3f local_54;
  CVector3f local_48;
  float local_3c;
  float local_38;
  float local_34;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar6 = 0;
  iVar1 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar3 = *(int *)(iVar1 + 0x24b4);
  iVar1 = *(int *)(iVar1 + 0x24ac);
  local_60.z = 2.536;
  local_60.x = -0.771;
  local_60.y = -2.536;
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xfffffee0,&g_ZeroVector,&local_60);
  (**(code **)(*(int *)(iVar3 + 0x154) + 0x14))();
  core_actor_cpp_CVector_ctor_FUN_00410340(&local_54);
  local_54.x = local_90 + local_84;
  local_54.y = local_8c + local_80;
  local_54.z = local_88 + local_7c;
  core_actor_cpp_CVector_ctor_FUN_00410340(&local_30);
  local_30.x = local_54.x * FLOAT_00616165;
  local_30.y = local_54.y * FLOAT_00616165;
  local_30.z = local_88 + (float)DOUBLE_0061616d;
  if (&local_48 != &local_30) {
    local_48.x = local_30.x;
    local_48.y = local_30.y;
    local_48.z = local_30.z;
  }
  local_6c.z = -0.082;
  local_6c.x = 0.032;
  local_6c.y = 0.209;
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                     (&local_78,&local_6c,(CMatrix3x4f *)(in_stack_00000004 + 0xfd8 + iVar1 * 0x30))
  ;
  if (&local_18 != pCVar2) {
    local_18.x = pCVar2->x;
    local_18.y = pCVar2->y;
    local_18.z = pCVar2->z;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)&stack0xfffffee0,
             (CMatrix3x4f *)(in_stack_00000004 + 0xfd8 + iVar1 * 0x30),in_stack_fffffee0);
  pfVar4 = local_c0;
  pCVar5 = &local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    pCVar5->m[0].w = *pfVar4;
    pfVar4 = pfVar4 + (uint)bVar6 * -2 + 1;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
  }
  pCVar2 = core_xform_cpp_transformVector3x4_FUN_005f4dc0(&local_24,&local_48,&local_f0);
  local_3c = local_18.x - pCVar2->x;
  local_38 = local_18.y - pCVar2->y;
  local_34 = local_18.z - pCVar2->z;
  local_f0.m[0].z = local_f0.m[0].z + local_3c;
  local_f0.m[1].z = local_f0.m[1].z + local_38;
  local_f0.m[2].z = local_f0.m[2].z + local_34;
  pCVar5 = &local_f0;
  for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
    *unaff_ESI = pCVar5->m[0].w;
    pCVar5 = (CMatrix3x4f *)((int)pCVar5 + ((uint)bVar6 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar6 * -2 + 1;
  }
  return;
}


// Assembly code:
// 0041ca40: PUSH EBX
//   Label: core_boneguy.cpp_FUN_0041ca40
// 0041ca41: PUSH EDI
// 0041ca42: PUSH EBP
// 0041ca43: MOV EBP,ESP
// 0041ca45: SUB ESP,0x114
// 0041ca4b: SUB EBP,0x7a
// 0041ca4e: MOV EBX,ESI
// 0041ca50: MOV EDX,dword ptr [EBP + 0x8e]
//   XREF to: Stack[0x8] (READ)
// 0041ca56: MOV EAX,EDX
// 0041ca58: SHL EAX,0x4
// 0041ca5b: ADD EAX,EDX
// 0041ca5d: MOV EDX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 0041ca63: SHL EAX,0x2
// 0041ca66: ADD EAX,EDX
// 0041ca68: MOV ESI,dword ptr [EAX + 0x24b4]
// 0041ca6e: MOV EDI,dword ptr [EAX + 0x24ac]
// 0041ca74: MOV dword ptr [EBP + 0x2e],0x40224dd3
//   XREF to: Stack[-0x58] (WRITE)
// 0041ca7b: LEA EAX,[EBP + 0x26]
//   XREF to: Stack[-0x60] (DATA)
// 0041ca7e: PUSH EAX
// 0041ca7f: MOV ECX,0xbf456042
// 0041ca84: PUSH 0x3f87558
//   XREF to: 03f87558 (DATA)
// 0041ca89: LEA EAX,[EBP + 0xffffff66]
//   XREF to: Stack[-0x120] (DATA)
// 0041ca8f: MOV EDX,0xc0224dd3
// 0041ca94: PUSH EAX
// 0041ca95: MOV dword ptr [EBP + 0x26],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 0041ca98: MOV dword ptr [EBP + 0x2a],EDX
//   XREF to: Stack[-0x5c] (WRITE)
// 0041ca9b: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 0041caa0: ADD ESP,0xc
// 0041caa3: LEA EAX,[EBP + -0xa]
//   XREF to: Stack[-0x90] (DATA)
// 0041caa6: PUSH EAX
// 0041caa7: MOV EDX,dword ptr [ESI + 0x154]
// 0041caad: PUSH ESI
// 0041caae: CALL dword ptr [EDX + 0x14]
// 0041cab1: ADD ESP,0x8
// 0041cab4: LEA EAX,[EBP + 0x32]
//   XREF to: Stack[-0x54] (DATA)
// 0041cab7: PUSH EAX
// 0041cab8: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0041cabd: FLD float ptr [EBP + -0xa]
//   XREF to: Stack[-0x90] (READ)
// 0041cac0: FLD float ptr [EBP + -0x6]
//   XREF to: Stack[-0x8c] (READ)
// 0041cac3: FLD float ptr [EBP + -0x2]
//   XREF to: Stack[-0x88] (READ)
// 0041cac6: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 0041cac9: ADD ESP,0x4
// 0041cacc: FXCH ST2
// 0041cace: FADD float ptr [EBP + 0x2]
//   XREF to: Stack[-0x84] (READ)
// 0041cad1: FXCH
// 0041cad3: FADD float ptr [EBP + 0x6]
//   XREF to: Stack[-0x80] (READ)
// 0041cad6: FXCH ST2
// 0041cad8: FADD float ptr [EBP + 0xa]
//   XREF to: Stack[-0x7c] (READ)
// 0041cadb: PUSH EAX
// 0041cadc: FXCH
// 0041cade: FSTP float ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (WRITE)
// 0041cae1: FXCH
// 0041cae3: FSTP float ptr [EBP + 0x36]
//   XREF to: Stack[-0x50] (WRITE)
// 0041cae6: FSTP float ptr [EBP + 0x3a]
//   XREF to: Stack[-0x4c] (WRITE)
// 0041cae9: CALL core_actor.cpp_CVector_ctor_FUN_00410340
//   XREF to: 00410340 (UNCONDITIONAL_CALL)
// 0041caee: FLD float ptr [0x00616165]
//   XREF to: 00616165 (READ)
// 0041caf4: FLD float ptr [EBP + 0x32]
//   XREF to: Stack[-0x54] (READ)
// 0041caf7: FMUL ST1
// 0041caf9: FLD float ptr [EBP + 0x36]
//   XREF to: Stack[-0x50] (READ)
// 0041cafc: FMULP ST2
// 0041cafe: FLD float ptr [EBP + -0x2]
//   XREF to: Stack[-0x88] (READ)
// 0041cb01: LEA EAX,[EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 0041cb04: LEA EDX,[EBP + 0x3e]
//   XREF to: Stack[-0x48] (DATA)
// 0041cb07: ADD ESP,0x4
// 0041cb0a: FADD double ptr [0x0061616d]
//   XREF to: 0061616d (READ)
// 0041cb10: FXCH
// 0041cb12: FSTP float ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (WRITE)
// 0041cb15: FXCH
// 0041cb17: FSTP float ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (WRITE)
// 0041cb1a: FSTP float ptr [EBP + 0x5e]
//   XREF to: Stack[-0x28] (WRITE)
// 0041cb1d: CMP EDX,EAX
// 0041cb1f: JZ 0x0041cb33
//   XREF to: 0041cb33 (CONDITIONAL_JUMP)
// 0041cb21: MOV EAX,dword ptr [EBP + 0x56]
//   XREF to: Stack[-0x30] (DATA)
// 0041cb24: MOV dword ptr [EBP + 0x3e],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 0041cb27: MOV EAX,dword ptr [EBP + 0x5a]
//   XREF to: Stack[-0x2c] (READ)
// 0041cb2a: MOV dword ptr [EBP + 0x42],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 0041cb2d: MOV EAX,dword ptr [EBP + 0x5e]
//   XREF to: Stack[-0x28] (READ)
// 0041cb30: MOV dword ptr [EBP + 0x46],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 0041cb33: LEA EDX,[EDI*0x4 + 0x0]
//   Label: LAB_0041cb33
// 0041cb3a: MOV EAX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 0041cb40: SUB EDX,EDI
// 0041cb42: ADD EAX,0xfd8
// 0041cb47: SHL EDX,0x4
// 0041cb4a: ADD EAX,EDX
// 0041cb4c: PUSH EAX
// 0041cb4d: MOV dword ptr [EBP + 0x22],0xbda7ef9e
//   XREF to: Stack[-0x64] (WRITE)
// 0041cb54: LEA EAX,[EBP + 0x1a]
//   XREF to: Stack[-0x6c] (DATA)
// 0041cb57: MOV ECX,0x3d03126f
// 0041cb5c: PUSH EAX
// 0041cb5d: LEA EAX,[EBP + 0xe]
//   XREF to: Stack[-0x78] (DATA)
// 0041cb60: MOV ESI,0x3e560419
// 0041cb65: PUSH EAX
// 0041cb66: MOV dword ptr [EBP + 0x1a],ECX
//   XREF to: Stack[-0x6c] (WRITE)
// 0041cb69: MOV dword ptr [EBP + 0x1e],ESI
//   XREF to: Stack[-0x68] (WRITE)
// 0041cb6c: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0041cb71: MOV EDX,EAX
// 0041cb73: LEA EAX,[EBP + 0x6e]
//   XREF to: Stack[-0x18] (DATA)
// 0041cb76: ADD ESP,0xc
// 0041cb79: CMP EAX,EDX
// 0041cb7b: JZ 0x0041cb8e
//   XREF to: 0041cb8e (CONDITIONAL_JUMP)
// 0041cb7d: MOV EAX,dword ptr [EDX]
// 0041cb7f: MOV dword ptr [EBP + 0x6e],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0041cb82: MOV EAX,dword ptr [EDX + 0x4]
// 0041cb85: MOV dword ptr [EBP + 0x72],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0041cb88: MOV EAX,dword ptr [EDX + 0x8]
// 0041cb8b: MOV dword ptr [EBP + 0x76],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0041cb8e: LEA EDX,[EDI*0x4 + 0x0]
//   Label: LAB_0041cb8e
// 0041cb95: MOV EAX,dword ptr [EBP + 0x8a]
//   XREF to: Stack[0x4] (READ)
// 0041cb9b: SUB EDX,EDI
// 0041cb9d: ADD EAX,0xfd8
// 0041cba2: SHL EDX,0x4
// 0041cba5: ADD EAX,EDX
// 0041cba7: PUSH EAX
// 0041cba8: LEA EAX,[EBP + 0xffffff66]
//   XREF to: Stack[-0x120] (DATA)
// 0041cbae: PUSH EAX
// 0041cbaf: LEA ESI,[EBP + -0x3a]
//   XREF to: Stack[-0xc0] (DATA)
// 0041cbb2: LEA EDI,[EBP + -0x6a]
//   XREF to: Stack[-0xf0] (DATA)
// 0041cbb5: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0041cbba: ADD ESP,0x8
// 0041cbbd: LEA EAX,[EBP + -0x6a]
//   XREF to: Stack[-0xf0] (DATA)
// 0041cbc0: MOV ECX,0xc
// 0041cbc5: PUSH EAX
// 0041cbc6: LEA EAX,[EBP + 0x3e]
//   XREF to: Stack[-0x48] (DATA)
// 0041cbc9: LEA ESI,[EBP + -0x3a]
//   XREF to: Stack[-0xc0] (DATA)
// 0041cbcc: PUSH EAX
// 0041cbcd: LEA EAX,[EBP + 0x62]
//   XREF to: Stack[-0x24] (DATA)
// 0041cbd0: MOVSD.REP ES:EDI,ESI
// 0041cbd2: PUSH EAX
// 0041cbd3: LEA ESI,[EBP + -0x6a]
//   XREF to: Stack[-0xf0] (DATA)
// 0041cbd6: MOV EDI,EBX
// 0041cbd8: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0041cbdd: FLD float ptr [EBP + 0x6e]
//   XREF to: Stack[-0x18] (READ)
// 0041cbe0: FLD float ptr [EBP + 0x72]
//   XREF to: Stack[-0x14] (READ)
// 0041cbe3: FLD float ptr [EBP + 0x76]
//   XREF to: Stack[-0x10] (READ)
// 0041cbe6: FLD float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe4] (READ)
// 0041cbe9: FLD float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd4] (READ)
// 0041cbec: FLD float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (READ)
// 0041cbef: MOV ECX,0xc
// 0041cbf4: FXCH ST5
// 0041cbf6: FSUB float ptr [EAX]
// 0041cbf8: ADD ESP,0xc
// 0041cbfb: FSTP float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (WRITE)
// 0041cbfe: FXCH ST3
// 0041cc00: FSUB float ptr [EAX + 0x4]
// 0041cc03: FXCH
// 0041cc05: FADD float ptr [EBP + 0x4a]
//   XREF to: Stack[-0x3c] (READ)
// 0041cc08: FXCH
// 0041cc0a: FSTP float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x38] (WRITE)
// 0041cc0d: FXCH
// 0041cc0f: FSUB float ptr [EAX + 0x8]
// 0041cc12: FXCH ST2
// 0041cc14: FADD float ptr [EBP + 0x4e]
//   XREF to: Stack[-0x38] (READ)
// 0041cc17: FXCH ST2
// 0041cc19: FSTP float ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (WRITE)
// 0041cc1c: FSTP float ptr [EBP + -0x5e]
//   XREF to: Stack[-0xe4] (WRITE)
// 0041cc1f: FXCH
// 0041cc21: FADD float ptr [EBP + 0x52]
//   XREF to: Stack[-0x34] (READ)
// 0041cc24: FXCH
// 0041cc26: FSTP float ptr [EBP + -0x4e]
//   XREF to: Stack[-0xd4] (WRITE)
// 0041cc29: FSTP float ptr [EBP + -0x3e]
//   XREF to: Stack[-0xc4] (WRITE)
// 0041cc2c: MOVSD.REP ES:EDI,ESI
// 0041cc2e: MOV EAX,EBX
// 0041cc30: LEA ESP,[EBP + 0x7a]
//   XREF to: Stack[-0xc] (DATA)
// 0041cc33: POP EBP
// 0041cc34: POP EDI
// 0041cc35: POP EBX
// 0041cc36: RET
