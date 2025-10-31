// Name: core_fire.cpp_CFireEffect_FUN_004c7bb0
// Address: 004c7bb0
// Address Range: [[004c7bb0, 004c7cfa]]
// Convention: __cdecl
// Signature: void core_fire.cpp_CFireEffect_FUN_004c7bb0(CFireEffect * this_ptr)
// Cross-references:
//   core_crossbow.cpp_FUN_00448f20 (00448f20) at 0044952e [UNCONDITIONAL_CALL]
// Globals:
//   void* switchdataD_004c7b78 = 004c7bd1
//   TerminatedCString s_a_wood_wav_0062a053
//   CSound* g_CSoundPtr = 03f6af64
//   undefined4 DAT_02d2ddf4
//   undefined4 DAT_02d2ddf8
//   CStake[256] g_CFireEffectStakes
//   CSound g_CSoundInstance
// Function calls:
//   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   core_fire.cpp_CStake_FUN_004bfe20
//   core_fire.cpp_CStake_FUN_004bfe90
//   core_sound.cpp_CSound_FUN_005b3ae0

#include "nocturne.h"

void __cdecl core_fire_cpp_CFireEffect_FUN_004c7bb0(CFireEffect *this_ptr)

{
  bool bVar1;
  CVector3f *pCVar2;
  BADSPACEBASE *in_ESP;
  float *in_stack_00000008;
  CVector3f *in_stack_0000000c;
  undefined4 in_stack_00000014;
  CMatrix3x3f CStack_58;
  CVector3f local_30;
  CVector3f CStack_24;
  float local_14;
  
  bVar1 = false;
  switch(in_stack_00000014) {
  case 0:
  case 1:
  case 2:
  case 5:
  case 8:
    bVar1 = true;
    break;
  case 3:
  case 4:
  case 7:
  case 9:
  case 10:
    bVar1 = false;
    break;
  case 6:
    goto switchD_004c7bca_caseD_6;
  }
  core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
            ((CMatrix3x3f *)&stack0xffffffa4,in_stack_0000000c);
  local_30.x = 0.0;
  local_30.y = 0.0;
  local_30.z = 0.7;
  pCVar2 = core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0(&CStack_58,&CStack_24,&local_30)
  ;
  local_14 = *in_stack_00000008 - pCVar2->x;
  if (bVar1) {
    core_fire_cpp_CStake_FUN_004bfe90(g_CFireEffectStakes + DAT_02d2ddf8);
  }
  else {
    CStack_58.m[0].x = 0.23;
    core_sound_cpp_CSound_FUN_005b3ae0(g_CSoundPtr,(char *)in_stack_0000000c,"a-wood?.wav");
    CStack_58.m[0].x = (float)&stack0xfffffff0;
    core_fire_cpp_CStake_FUN_004bfe20(g_CFireEffectStakes + DAT_02d2ddf8);
  }
  DAT_02d2ddf8 = DAT_02d2ddf8 + 1;
  if (0xff < DAT_02d2ddf8) {
    DAT_02d2ddf8 = 0;
  }
  if (DAT_02d2ddf4 < 0x100) {
    DAT_02d2ddf4 = DAT_02d2ddf4 + 1;
    return;
  }
switchD_004c7bca_caseD_6:
  return;
}


// Assembly code:
// 004c7bb0: PUSH EBX
//   Label: core_fire.cpp_CFireEffect_FUN_004c7bb0
// 004c7bb1: PUSH ESI
// 004c7bb2: PUSH EDI
// 004c7bb3: PUSH EBP
// 004c7bb4: SUB ESP,0x4c
// 004c7bb7: MOV ESI,dword ptr [ESP + 0x64]
//   XREF to: Stack[0x8] (READ)
// 004c7bbb: MOV EDI,dword ptr [ESP + 0x68]
//   XREF to: Stack[0xc] (READ)
// 004c7bbf: MOV EAX,dword ptr [ESP + 0x70]
//   XREF to: Stack[0x14] (READ)
// 004c7bc3: XOR EBX,EBX
// 004c7bc5: CMP EAX,0xa
// 004c7bc8: JA 0x004c7bd6
//   XREF to: 004c7bd6 (CONDITIONAL_JUMP)
// 004c7bca: JMP dword ptr [EAX*0x4 + 0x4c7b78]
//   Label: switchD
//   XREF to: 004c7bd1 (COMPUTED_JUMP)
//   XREF to: 004c7c89 (COMPUTED_JUMP)
//   XREF to: 004c7c91 (COMPUTED_JUMP)
//   XREF to: 004c7b78 (DATA)
// 004c7bd1: MOV EBX,0x1
//   Label: caseD_8
// 004c7bd6: PUSH EDI
//   Label: default
// 004c7bd7: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 004c7bdb: PUSH EAX
// 004c7bdc: CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
//   XREF to: 00471d30 (UNCONDITIONAL_CALL)
// 004c7be1: ADD ESP,0x8
// 004c7be4: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x34] (DATA)
// 004c7be8: MOV EBP,0x3f333333
// 004c7bed: PUSH EAX
// 004c7bee: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0x28] (DATA)
// 004c7bf2: XOR EDX,EDX
// 004c7bf4: PUSH EAX
// 004c7bf5: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x5c] (DATA)
// 004c7bf9: MOV dword ptr [ESP + 0x30],EDX
//   XREF to: Stack[-0x34] (WRITE)
// 004c7bfd: PUSH EAX
// 004c7bfe: MOV dword ptr [ESP + 0x38],EDX
//   XREF to: Stack[-0x30] (WRITE)
// 004c7c02: MOV dword ptr [ESP + 0x3c],EBP
//   XREF to: Stack[-0x2c] (WRITE)
// 004c7c06: CALL core_dirmat.cpp_CMatrix3x3f_transformVector_FUN_00471fd0
//   XREF to: 00471fd0 (UNCONDITIONAL_CALL)
// 004c7c0b: FLD float ptr [ESI]
// 004c7c0d: FSUB float ptr [EAX]
// 004c7c0f: ADD ESP,0xc
// 004c7c12: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x1c] (WRITE)
// 004c7c16: FLD float ptr [ESI + 0x4]
// 004c7c19: FSUB float ptr [EAX + 0x4]
// 004c7c1c: FSTP float ptr [ESP + 0x44]
//   XREF to: Stack[-0x18] (WRITE)
// 004c7c20: FLD float ptr [ESI + 0x8]
// 004c7c23: FSUB float ptr [EAX + 0x8]
// 004c7c26: FSTP float ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (WRITE)
// 004c7c2a: TEST EBX,EBX
// 004c7c2c: JZ 0x004c7c98
//   XREF to: 004c7c98 (CONDITIONAL_JUMP)
// 004c7c2e: MOV ECX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x10] (READ)
// 004c7c32: PUSH ECX
// 004c7c33: PUSH EDI
// 004c7c34: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x1c] (DATA)
// 004c7c38: MOV EDX,dword ptr [0x02d2ddf8]
//   XREF to: 02d2ddf8 (READ)
// 004c7c3e: PUSH EAX
// 004c7c3f: LEA EAX,[EDX*0x4 + 0x0]
// 004c7c46: ADD EAX,EDX
// 004c7c48: SHL EAX,0x2
// 004c7c4b: SUB EAX,EDX
// 004c7c4d: SHL EAX,0x5
// 004c7c50: ADD EAX,0x2d2ddfc
//   XREF to: 02d2ddfc (DATA)
// 004c7c55: PUSH EAX
// 004c7c56: CALL core_fire.cpp_CStake_FUN_004bfe90
//   XREF to: 004bfe90 (UNCONDITIONAL_CALL)
// 004c7c5b: ADD ESP,0x10
// 004c7c5e: MOV EBX,dword ptr [0x02d2ddf8]
//   Label: LAB_004c7c5e
//   XREF to: 02d2ddf8 (READ)
// 004c7c64: INC EBX
// 004c7c65: MOV dword ptr [0x02d2ddf8],EBX
//   XREF to: 02d2ddf8 (WRITE)
// 004c7c6b: CMP EBX,0x100
// 004c7c71: JL 0x004c7c7b
//   XREF to: 004c7c7b (CONDITIONAL_JUMP)
// 004c7c73: XOR EDI,EDI
// 004c7c75: MOV dword ptr [0x02d2ddf8],EDI
//   XREF to: 02d2ddf8 (WRITE)
// 004c7c7b: MOV EBP,dword ptr [0x02d2ddf4]
//   Label: LAB_004c7c7b
//   XREF to: 02d2ddf4 (READ)
// 004c7c81: CMP EBP,0x100
// 004c7c87: JL 0x004c7ceb
//   XREF to: 004c7ceb (CONDITIONAL_JUMP)
// 004c7c89: ADD ESP,0x4c
//   Label: caseD_6
// 004c7c8c: POP EBP
// 004c7c8d: POP EDI
// 004c7c8e: POP ESI
// 004c7c8f: POP EBX
// 004c7c90: RET
// 004c7c91: XOR EBX,EBX
//   Label: caseD_a
// 004c7c93: JMP 0x004c7bd6
//   XREF to: 004c7bd6 (UNCONDITIONAL_JUMP)
// 004c7c98: LEA EAX,[ESP + 0x40]
//   Label: LAB_004c7c98
//   XREF to: Stack[-0x1c] (DATA)
// 004c7c9c: PUSH 0x3e6b851f
// 004c7ca1: PUSH EAX
// 004c7ca2: PUSH 0x62a053
//   XREF to: 0062a053 (DATA)
// 004c7ca7: MOV EAX,dword ptr [ESP + 0x6c]
//   XREF to: Stack[0x4] (READ)
// 004c7cab: PUSH EAX
// 004c7cac: MOV EDX,dword ptr [0x00681ef8]
//   XREF to: 03f6af64 (PARAM)
//   XREF to: 00681ef8 (READ)
// 004c7cb2: PUSH EDX
//   XREF to: 03f6af64 (DATA)
// 004c7cb3: CALL core_sound.cpp_CSound_FUN_005b3ae0
//   XREF to: 005b3ae0 (UNCONDITIONAL_CALL)
// 004c7cb8: ADD ESP,0x14
// 004c7cbb: PUSH EDI
// 004c7cbc: LEA EAX,[ESP + 0x44]
//   XREF to: Stack[-0x1c] (DATA)
// 004c7cc0: MOV EDX,dword ptr [0x02d2ddf8]
//   XREF to: 02d2ddf8 (READ)
// 004c7cc6: PUSH EAX
// 004c7cc7: LEA EAX,[EDX*0x4 + 0x0]
// 004c7cce: ADD EAX,EDX
// 004c7cd0: SHL EAX,0x2
// 004c7cd3: SUB EAX,EDX
// 004c7cd5: SHL EAX,0x5
// 004c7cd8: ADD EAX,0x2d2ddfc
//   XREF to: 02d2ddfc (DATA)
// 004c7cdd: PUSH EAX
// 004c7cde: CALL core_fire.cpp_CStake_FUN_004bfe20
//   XREF to: 004bfe20 (UNCONDITIONAL_CALL)
// 004c7ce3: ADD ESP,0xc
// 004c7ce6: JMP 0x004c7c5e
//   XREF to: 004c7c5e (UNCONDITIONAL_JUMP)
// 004c7ceb: LEA EAX,[EBP + 0x1]
//   Label: LAB_004c7ceb
// 004c7cee: MOV [0x02d2ddf4],EAX
//   XREF to: 02d2ddf4 (WRITE)
// 004c7cf3: ADD ESP,0x4c
// 004c7cf6: POP EBP
// 004c7cf7: POP EDI
// 004c7cf8: POP ESI
// 004c7cf9: POP EBX
// 004c7cfa: RET
