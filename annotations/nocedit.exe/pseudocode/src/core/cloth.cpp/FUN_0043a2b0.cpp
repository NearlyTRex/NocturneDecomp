// Name: core_cloth.cpp_FUN_0043a2b0
// Address: 0043a2b0
// Address Range: [[0043a2b0, 0043a41c]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043a2b0()
// Cross-references:
//   core_cloth.cpp_BoneAndClothEditor_FUN_0043c880 (0043c880) at 0043d50e [UNCONDITIONAL_CALL]
//   core_cloth.cpp_FUN_0043abb0 (0043abb0) at 0043ad8d [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_inverse_FUN_005f6210
//   core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10

#include "nocturne.h"

/* Signature: undefined1 core_cloth.cpp_FUN_0043a2b0(undefined4 param_1, undefined4 param_2,
   undefined4 param_3) */

void core_cloth_cpp_FUN_0043a2b0(void)

{
  int iVar1;
  int iVar2;
  BADSPACEBASE *in_ESP;
  undefined4 *puVar3;
  undefined4 *puVar4;
  byte bVar5;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_fffffec8;
  CMatrix3x4f *in_stack_fffffecc;
  CMatrix3x4f *in_stack_fffffed0;
  float fStack_12c;
  float local_128;
  float local_120;
  float fStack_11c;
  float local_118;
  float local_110;
  float fStack_10c;
  float local_108;
  undefined4 auStack_fc [11];
  undefined4 auStack_d0 [12];
  undefined4 auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_80;
  undefined4 local_78;
  CMatrix3x4f CStack_74;
  undefined4 auStack_44 [14];
  
  bVar5 = 0;
  iVar2 = in_stack_00000008 * 0xac + in_stack_00000004 + 0x3ce90;
  core_xform_cpp_inverse_FUN_005f6210
            ((CMatrix3x4f *)(in_stack_0000000c + 0xe80 + *(int *)(iVar2 + 0x40) * 0x30),
             in_stack_fffffec8);
  puVar3 = auStack_44;
  puVar4 = &local_78;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&CStack_74,(CMatrix3x4f *)(iVar2 + 0x48),in_stack_fffffecc);
  puVar3 = auStack_d0;
  puVar4 = (undefined4 *)&stack0xfffffecc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  *(CMatrix3x4f **)(iVar2 + 0x78) = in_stack_fffffed0;
  *(float *)(iVar2 + 0x7c) = local_120;
  *(float *)(iVar2 + 0x80) = local_110;
  *(float *)(iVar2 + 0x84) = fStack_12c;
  *(float *)(iVar2 + 0x88) = fStack_11c;
  *(float *)(iVar2 + 0x8c) = fStack_10c;
  *(float *)(iVar2 + 0x90) = local_128;
  *(float *)(iVar2 + 0x94) = local_118;
  *(float *)(iVar2 + 0x98) = local_108;
  core_xform_cpp_inverse_FUN_005f6210((CMatrix3x4f *)&stack0xfffffed0,in_stack_fffffed0);
  puVar3 = auStack_fc;
  puVar4 = auStack_a0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar5 * -2 + 1;
  }
  if ((undefined4 *)(iVar2 + 0xa0) == (undefined4 *)&stack0xfffffff4) {
    return;
  }
  *(undefined4 *)(iVar2 + 0xa0) = uStack_90;
  *(undefined4 *)(iVar2 + 0xa4) = uStack_80;
  *(float *)(iVar2 + 0xa8) = CStack_74.m[0].x;
  return;
}


// Assembly code:
// 0043a2b0: PUSH EBX
//   Label: core_cloth.cpp_FUN_0043a2b0
// 0043a2b1: PUSH ESI
// 0043a2b2: PUSH EDI
// 0043a2b3: SUB ESP,0x12c
// 0043a2b9: IMUL EBX,dword ptr [ESP + 0x140],0xac
//   XREF to: Stack[0x8] (READ)
// 0043a2c4: MOV EAX,dword ptr [ESP + 0x13c]
//   XREF to: Stack[0x4] (READ)
// 0043a2cb: ADD EAX,0x3ce90
// 0043a2d0: ADD EBX,EAX
// 0043a2d2: MOV ESI,dword ptr [EBX + 0x40]
// 0043a2d5: LEA EAX,[ESI*0x4 + 0x0]
// 0043a2dc: SUB EAX,ESI
// 0043a2de: MOV ESI,EAX
// 0043a2e0: MOV EAX,dword ptr [ESP + 0x144]
//   XREF to: Stack[0xc] (READ)
// 0043a2e7: SHL ESI,0x4
// 0043a2ea: ADD EAX,0xe80
// 0043a2ef: ADD EAX,ESI
// 0043a2f1: PUSH EAX
// 0043a2f2: LEA ESI,[ESP + 0xf4]
//   XREF to: Stack[-0x48] (DATA)
// 0043a2f9: LEA EDI,[ESP + 0xc4]
//   XREF to: Stack[-0x78] (DATA)
// 0043a300: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0043a305: MOV ECX,0xc
// 0043a30a: ADD ESP,0x4
// 0043a30d: LEA EAX,[EBX + 0x48]
// 0043a310: LEA ESI,[ESP + 0xf0]
//   XREF to: Stack[-0x48] (DATA)
// 0043a317: PUSH EAX
// 0043a318: LEA EAX,[ESP + 0xc4]
//   XREF to: Stack[-0x78] (DATA)
// 0043a31f: MOVSD.REP ES:EDI,ESI
// 0043a321: PUSH EAX
// 0043a322: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xd8] (DATA)
// 0043a326: LEA EDI,[ESP + 0x8]
//   XREF to: Stack[-0x138] (DATA)
// 0043a32a: CALL core_xform.cpp_multiplyMatrix3x4_FUN_005f4f10
//   XREF to: 005f4f10 (UNCONDITIONAL_CALL)
// 0043a32f: MOV ECX,0xc
// 0043a334: LEA ESI,[ESP + 0x68]
//   XREF to: Stack[-0xd8] (DATA)
// 0043a338: ADD ESP,0x8
// 0043a33b: MOVSD.REP ES:EDI,ESI
// 0043a33d: MOV EAX,dword ptr [ESP]
//   XREF to: Stack[-0x138] (DATA)
// 0043a340: MOV dword ptr [EBX + 0x78],EAX
// 0043a343: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x128] (READ)
// 0043a347: MOV dword ptr [EBX + 0x7c],EAX
// 0043a34a: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x118] (READ)
// 0043a34e: MOV dword ptr [EBX + 0x80],EAX
// 0043a354: MOV EAX,dword ptr [ESP + 0x4]
//   XREF to: Stack[-0x134] (READ)
// 0043a358: MOV dword ptr [EBX + 0x84],EAX
// 0043a35e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x124] (READ)
// 0043a362: MOV dword ptr [EBX + 0x88],EAX
// 0043a368: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x114] (READ)
// 0043a36c: MOV dword ptr [EBX + 0x8c],EAX
// 0043a372: MOV EAX,dword ptr [ESP + 0x8]
//   XREF to: Stack[-0x130] (READ)
// 0043a376: MOV dword ptr [EBX + 0x90],EAX
// 0043a37c: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x120] (READ)
// 0043a380: MOV dword ptr [EBX + 0x94],EAX
// 0043a386: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x110] (READ)
// 0043a38a: MOV dword ptr [EBX + 0x98],EAX
// 0043a390: MOV EAX,ESP
// 0043a392: PUSH EAX
// 0043a393: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x108] (DATA)
// 0043a397: LEA EDI,[ESP + 0x94]
//   XREF to: Stack[-0xa8] (DATA)
// 0043a39e: CALL core_xform.cpp_inverse_FUN_005f6210
//   XREF to: 005f6210 (UNCONDITIONAL_CALL)
// 0043a3a3: MOV ECX,0xc
// 0043a3a8: LEA ESI,[ESP + 0x34]
//   XREF to: Stack[-0x108] (DATA)
// 0043a3ac: ADD ESP,0x4
// 0043a3af: MOVSD.REP ES:EDI,ESI
// 0043a3b1: MOV EAX,dword ptr [ESP + 0x9c]
//   XREF to: Stack[-0x9c] (READ)
// 0043a3b8: MOV dword ptr [ESP + 0x120],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 0043a3bf: MOV EAX,dword ptr [ESP + 0xac]
//   XREF to: Stack[-0x8c] (READ)
// 0043a3c6: MOV dword ptr [ESP + 0x124],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0043a3cd: MOV EAX,dword ptr [ESP + 0xbc]
//   XREF to: Stack[-0x7c] (READ)
// 0043a3d4: ADD EBX,0xa0
// 0043a3da: MOV dword ptr [ESP + 0x128],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 0043a3e1: LEA EAX,[ESP + 0x120]
//   XREF to: Stack[-0x18] (DATA)
// 0043a3e8: CMP EBX,EAX
// 0043a3ea: JNZ 0x0043a3f6
//   XREF to: 0043a3f6 (CONDITIONAL_JUMP)
// 0043a3ec: ADD ESP,0x12c
// 0043a3f2: POP EDI
// 0043a3f3: POP ESI
// 0043a3f4: POP EBX
// 0043a3f5: RET
// 0043a3f6: MOV EAX,dword ptr [ESP + 0x9c]
//   Label: LAB_0043a3f6
//   XREF to: Stack[-0x9c] (READ)
// 0043a3fd: MOV dword ptr [EBX],EAX
// 0043a3ff: MOV EAX,dword ptr [ESP + 0x124]
//   XREF to: Stack[-0x14] (READ)
// 0043a406: MOV dword ptr [EBX + 0x4],EAX
// 0043a409: MOV EAX,dword ptr [ESP + 0x128]
//   XREF to: Stack[-0x10] (READ)
// 0043a410: MOV dword ptr [EBX + 0x8],EAX
// 0043a413: ADD ESP,0x12c
// 0043a419: POP EDI
// 0043a41a: POP ESI
// 0043a41b: POP EBX
// 0043a41c: RET
