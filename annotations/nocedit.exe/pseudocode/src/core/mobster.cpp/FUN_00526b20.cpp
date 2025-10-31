// Name: core_mobster.cpp_FUN_00526b20
// Address: 00526b20
// Address Range: [[00526b20, 00526d8b]]
// Convention: unknown
// Signature: undefined core_mobster.cpp_FUN_00526b20()
// Globals:
//   undefined4 g_CElephantGunClassInfo.name_hash
// Function calls:
//   core_actor.cpp_castToClassHash_FUN_0040c790
//   core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_mobster.cpp_FUN_00526b20(undefined4 param_1, undefined4
   param_2) */

void core_mobster_cpp_FUN_00526b20(void)

{
  CDemonActor *pCVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  undefined4 *puVar3;
  byte bVar4;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff30;
  undefined4 auStack_9c [10];
  CVector3f local_74;
  undefined4 local_60;
  CVector3f local_5c;
  CVector3f local_50;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  CVector3f local_2c;
  CVector3f local_20;
  float local_14;
  float local_10;
  
  bVar4 = 0;
  in_stack_00000004 = in_stack_00000008 * 0x44 + in_stack_00000004;
  iVar2 = *(int *)(in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 1) {
    pCVar1 = core_actor_cpp_castToClassHash_FUN_0040c790
                       (*(CDemonActor **)(in_stack_00000004 + 0x24b4),
                        g_CElephantGunClassInfo.name_hash);
    if (pCVar1 == (CDemonActor *)0x0) {
      local_74.x = 0.228082;
      local_74.y = -0.13793;
      local_74.z = -0.112196;
      if (&local_5c != &local_74) {
        local_5c.z = -0.112196;
        local_5c.y = -0.13793;
        local_5c.x = 0.228082;
      }
      local_50.x = -0.278997;
      local_50.z = 1.55012;
      local_50.y = 1.58477;
      if (&local_2c != &local_50) {
        local_2c.y = 1.58477;
        local_2c.z = 1.55012;
        local_2c.x = -0.278997;
      }
    }
    else {
      local_10 = -0.1;
      local_14 = 0.378;
      if (&local_5c != (CVector3f *)&local_14) {
        local_5c.y = -0.1;
        local_5c.z = 0.309;
        local_5c.x = 0.378;
      }
      local_20.z = 1.494;
      local_20.y = 1.588;
      local_20.x = -0.252;
      if (&local_2c != &local_20) {
        local_2c.y = 1.588;
        local_2c.x = -0.252;
        local_2c.z = 1.494;
      }
    }
  }
  else {
    local_38 = 0xbe0f5c29;
    local_34 = 0xbe333333;
    local_3c = 0xbe7df3b6;
    if (&local_60 != &local_3c) {
      local_5c.x = -0.14;
      local_5c.y = -0.175;
      local_60 = 0xbe7df3b6;
    }
    local_40 = 0xbfdac083;
    local_44 = 0xbfbbe76d;
    local_50.z = -0.456;
    if ((float *)&local_30 != &local_50.z) {
      local_2c.y = -1.468;
      local_2c.x = -0.456;
      local_2c.z = -1.709;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)&stack0xffffff2c,&local_5c,&local_2c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)&stack0xffffff30,
             (CMatrix3x4f *)(iVar2 * 0x30 + in_stack_0000000c + 0xfd8),in_stack_ffffff30);
  puVar3 = auStack_9c;
  for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}


// Assembly code:
// 00526b20: PUSH EBX
//   Label: core_mobster.cpp_FUN_00526b20
// 00526b21: PUSH EDI
// 00526b22: PUSH EBP
// 00526b23: SUB ESP,0xcc
// 00526b29: MOV ECX,dword ptr [ESP + 0xe0]
//   XREF to: Stack[0x8] (READ)
// 00526b30: MOV EBX,ESI
// 00526b32: MOV EAX,ECX
// 00526b34: SHL EAX,0x4
// 00526b37: ADD EAX,ECX
// 00526b39: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00526b40: SHL EAX,0x2
// 00526b43: ADD EAX,EDX
// 00526b45: MOV EDX,dword ptr [EAX + 0x24b4]
// 00526b4b: MOV ESI,dword ptr [EAX + 0x24ac]
// 00526b51: CMP ECX,0x1
// 00526b54: JZ 0x00526c41
//   XREF to: 00526c41 (CONDITIONAL_JUMP)
// 00526b5a: MOV EDI,0xbe0f5c29
// 00526b5f: MOV EBP,0xbe333333
// 00526b64: MOV ECX,0xbe7df3b6
// 00526b69: LEA EAX,[ESP + 0x9c]
//   XREF to: Stack[-0x3c] (DATA)
// 00526b70: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x60] (DATA)
// 00526b74: MOV dword ptr [ESP + 0xa0],EDI
//   XREF to: Stack[-0x38] (WRITE)
// 00526b7b: MOV dword ptr [ESP + 0xa4],EBP
//   XREF to: Stack[-0x34] (WRITE)
// 00526b82: MOV dword ptr [ESP + 0x9c],ECX
//   XREF to: Stack[-0x3c] (WRITE)
// 00526b89: CMP EDX,EAX
// 00526b8b: JNZ 0x00526d78
//   XREF to: 00526d78 (CONDITIONAL_JUMP)
// 00526b91: MOV EBP,0xbfdac083
//   Label: LAB_00526b91
// 00526b96: MOV EAX,0xbfbbe76d
// 00526b9b: MOV EDI,0xbee978d5
// 00526ba0: LEA EDX,[ESP + 0xa8]
//   XREF to: Stack[-0x30] (DATA)
// 00526ba7: MOV dword ptr [ESP + 0x98],EBP
//   XREF to: Stack[-0x40] (WRITE)
// 00526bae: MOV dword ptr [ESP + 0x94],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 00526bb5: LEA EAX,[ESP + 0x90]
//   XREF to: Stack[-0x48] (DATA)
// 00526bbc: MOV dword ptr [ESP + 0x90],EDI
//   XREF to: Stack[-0x48] (WRITE)
// 00526bc3: CMP EDX,EAX
// 00526bc5: JZ 0x00526be1
//   XREF to: 00526be1 (CONDITIONAL_JUMP)
// 00526bc7: MOV ECX,0xbfbbe76d
// 00526bcc: MOV dword ptr [ESP + 0xb0],EBP
//   Label: LAB_00526bcc
//   XREF to: Stack[-0x28] (WRITE)
// 00526bd3: MOV dword ptr [ESP + 0xa8],EDI
//   XREF to: Stack[-0x30] (WRITE)
// 00526bda: MOV dword ptr [ESP + 0xac],ECX
//   XREF to: Stack[-0x2c] (WRITE)
// 00526be1: LEA EAX,[ESP + 0xa8]
//   Label: LAB_00526be1
//   XREF to: Stack[-0x30] (DATA)
// 00526be8: PUSH EAX
// 00526be9: LEA EAX,[ESP + 0x7c]
//   XREF to: Stack[-0x60] (DATA)
// 00526bed: PUSH EAX
// 00526bee: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0xd8] (DATA)
// 00526bf2: PUSH EAX
// 00526bf3: CALL core_xform.cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
//   XREF to: 005f54c0 (UNCONDITIONAL_CALL)
// 00526bf8: LEA EAX,[ESI*0x4 + 0x0]
// 00526bff: ADD ESP,0xc
// 00526c02: SUB EAX,ESI
// 00526c04: MOV EDX,dword ptr [ESP + 0xdc]
//   XREF to: Stack[0x4] (READ)
// 00526c0b: SHL EAX,0x4
// 00526c0e: ADD EDX,0xfd8
// 00526c14: ADD EAX,EDX
// 00526c16: PUSH EAX
// 00526c17: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0xd8] (DATA)
// 00526c1b: PUSH EAX
// 00526c1c: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xa8] (DATA)
// 00526c20: MOV EDI,EBX
// 00526c22: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 00526c27: MOV ECX,0xc
// 00526c2c: LEA ESI,[ESP + 0x38]
//   XREF to: Stack[-0xa8] (DATA)
// 00526c30: ADD ESP,0x8
// 00526c33: MOVSD.REP ES:EDI,ESI
// 00526c35: MOV EAX,EBX
// 00526c37: ADD ESP,0xcc
// 00526c3d: POP EBP
// 00526c3e: POP EDI
// 00526c3f: POP EBX
// 00526c40: RET
// 00526c41: MOV EBP,dword ptr [0x02cf2b58]
//   Label: LAB_00526c41
//   XREF to: 02cf2b58 (READ)
// 00526c47: PUSH EBP
// 00526c48: PUSH EDX
// 00526c49: CALL core_actor.cpp_castToClassHash_FUN_0040c790
//   XREF to: 0040c790 (UNCONDITIONAL_CALL)
// 00526c4e: ADD ESP,0x8
// 00526c51: TEST EAX,EAX
// 00526c53: JZ 0x00526cdf
//   XREF to: 00526cdf (CONDITIONAL_JUMP)
// 00526c59: MOV EDI,0xbdcccccd
// 00526c5e: MOV EBP,0x3e9e353f
// 00526c63: MOV ECX,0x3ec18937
// 00526c68: LEA EAX,[ESP + 0xc0]
//   XREF to: Stack[-0x18] (DATA)
// 00526c6f: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x60] (DATA)
// 00526c73: MOV dword ptr [ESP + 0xc4],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 00526c7a: MOV dword ptr [ESP + 0xc8],EBP
//   XREF to: Stack[-0x10] (WRITE)
// 00526c81: MOV dword ptr [ESP + 0xc0],ECX
//   XREF to: Stack[-0x18] (WRITE)
// 00526c88: CMP EDX,EAX
// 00526c8a: JZ 0x00526c9b
//   XREF to: 00526c9b (CONDITIONAL_JUMP)
// 00526c8c: MOV dword ptr [ESP + 0x7c],EDI
//   XREF to: Stack[-0x5c] (WRITE)
// 00526c90: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 00526c97: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 00526c9b: MOV EBP,0x3fbf3b64
//   Label: LAB_00526c9b
// 00526ca0: MOV EAX,0x3fcb4396
// 00526ca5: MOV EDI,0xbe810625
// 00526caa: LEA EDX,[ESP + 0xb4]
//   XREF to: Stack[-0x24] (DATA)
// 00526cb1: MOV dword ptr [ESP + 0xbc],EBP
//   XREF to: Stack[-0x1c] (WRITE)
// 00526cb8: MOV dword ptr [ESP + 0xb8],EAX
//   XREF to: Stack[-0x20] (WRITE)
// 00526cbf: LEA EAX,[ESP + 0xa8]
//   XREF to: Stack[-0x30] (DATA)
// 00526cc6: MOV dword ptr [ESP + 0xb4],EDI
//   XREF to: Stack[-0x24] (WRITE)
// 00526ccd: CMP EAX,EDX
// 00526ccf: JZ 0x00526be1
//   XREF to: 00526be1 (CONDITIONAL_JUMP)
// 00526cd5: MOV ECX,0x3fcb4396
// 00526cda: JMP 0x00526bcc
//   XREF to: 00526bcc (UNCONDITIONAL_JUMP)
// 00526cdf: MOV EAX,0x3e698e54
//   Label: LAB_00526cdf
// 00526ce4: MOV EDX,0xbe0d3d86
// 00526ce9: MOV ECX,0xbde5c704
// 00526cee: MOV dword ptr [ESP + 0x60],EAX
//   XREF to: Stack[-0x78] (WRITE)
// 00526cf2: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[-0x74] (WRITE)
// 00526cf6: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x78] (DATA)
// 00526cfa: LEA EDX,[ESP + 0x78]
//   XREF to: Stack[-0x60] (DATA)
// 00526cfe: MOV dword ptr [ESP + 0x68],ECX
//   XREF to: Stack[-0x70] (WRITE)
// 00526d02: CMP EDX,EAX
// 00526d04: JZ 0x00526d1f
//   XREF to: 00526d1f (CONDITIONAL_JUMP)
// 00526d06: MOV EBP,0xbe0d3d86
// 00526d0b: MOV EDI,0x3e698e54
// 00526d10: MOV dword ptr [ESP + 0x80],ECX
//   XREF to: Stack[-0x58] (WRITE)
// 00526d17: MOV dword ptr [ESP + 0x7c],EBP
//   XREF to: Stack[-0x5c] (WRITE)
// 00526d1b: MOV dword ptr [ESP + 0x78],EDI
//   XREF to: Stack[-0x60] (WRITE)
// 00526d1f: MOV EDX,0xbe8ed8b2
//   Label: LAB_00526d1f
// 00526d24: MOV ECX,0x3fc66a55
// 00526d29: MOV EDI,0x3fcad9be
// 00526d2e: LEA EAX,[ESP + 0x84]
//   XREF to: Stack[-0x54] (DATA)
// 00526d35: MOV dword ptr [ESP + 0x84],EDX
//   XREF to: Stack[-0x54] (WRITE)
// 00526d3c: MOV dword ptr [ESP + 0x8c],ECX
//   XREF to: Stack[-0x4c] (WRITE)
// 00526d43: LEA EDX,[ESP + 0xa8]
//   XREF to: Stack[-0x30] (DATA)
// 00526d4a: MOV dword ptr [ESP + 0x88],EDI
//   XREF to: Stack[-0x50] (WRITE)
// 00526d51: CMP EDX,EAX
// 00526d53: JZ 0x00526be1
//   XREF to: 00526be1 (CONDITIONAL_JUMP)
// 00526d59: MOV EBP,0xbe8ed8b2
// 00526d5e: MOV dword ptr [ESP + 0xac],EDI
//   XREF to: Stack[-0x2c] (WRITE)
// 00526d65: MOV dword ptr [ESP + 0xb0],ECX
//   XREF to: Stack[-0x28] (WRITE)
// 00526d6c: MOV dword ptr [ESP + 0xa8],EBP
//   XREF to: Stack[-0x30] (WRITE)
// 00526d73: JMP 0x00526be1
//   XREF to: 00526be1 (UNCONDITIONAL_JUMP)
// 00526d78: MOV dword ptr [ESP + 0x7c],EDI
//   Label: LAB_00526d78
//   XREF to: Stack[-0x5c] (WRITE)
// 00526d7c: MOV dword ptr [ESP + 0x80],EBP
//   XREF to: Stack[-0x58] (WRITE)
// 00526d83: MOV dword ptr [ESP + 0x78],ECX
//   XREF to: Stack[-0x60] (WRITE)
// 00526d87: JMP 0x00526b91
//   XREF to: 00526b91 (UNCONDITIONAL_JUMP)
