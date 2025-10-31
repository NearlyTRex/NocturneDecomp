// Name: core_dracbrid.cpp_FUN_00486360
// Address: 00486360
// Address Range: [[00486360, 00486421]]
// Convention: unknown
// Signature: undefined core_dracbrid.cpp_FUN_00486360()
// Globals:
//   undefined4 DAT_02c6d0a0
//   undefined4 DAT_02c6d0b4
//   undefined4 DAT_02c6d0bc
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_draculabride.cpp_FUN_00486360(undefined4 param_1, undefined4
   param_2) */

undefined4 core_dracbrid_cpp_FUN_00486360(void)

{
  undefined4 *puVar1;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  
  if (*(int *)(in_stack_00000004 + 0xbf48) != 0) {
    return 0;
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 != puVar1) {
    *in_stack_00000008 = *puVar1;
    in_stack_00000008[1] = puVar1[1];
    in_stack_00000008[2] = puVar1[2];
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 + 3 != puVar1) {
    in_stack_00000008[3] = *puVar1;
    in_stack_00000008[4] = puVar1[1];
    in_stack_00000008[5] = puVar1[2];
  }
  puVar1 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (in_stack_00000008 + 6 != puVar1) {
    in_stack_00000008[6] = *puVar1;
    in_stack_00000008[7] = puVar1[1];
    in_stack_00000008[8] = puVar1[2];
  }
  return 3;
}


// Assembly code:
// 00486360: PUSH EBX
//   Label: core_dracbrid.cpp_FUN_00486360
// 00486361: PUSH ESI
// 00486362: PUSH EBP
// 00486363: SUB ESP,0x24
// 00486366: MOV ESI,dword ptr [ESP + 0x34]
//   XREF to: Stack[0x4] (READ)
// 0048636a: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[0x8] (READ)
// 0048636e: CMP dword ptr [ESI + 0xbf48],0x0
// 00486375: JZ 0x00486380
//   XREF to: 00486380 (CONDITIONAL_JUMP)
// 00486377: XOR EAX,EAX
// 00486379: ADD ESP,0x24
// 0048637c: POP EBP
// 0048637d: POP ESI
// 0048637e: POP EBX
// 0048637f: RET
// 00486380: PUSH EDI
//   Label: LAB_00486380
// 00486381: MOV ECX,dword ptr [0x02c6d0a0]
//   XREF to: 02c6d0a0 (READ)
// 00486387: PUSH ECX
// 00486388: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x24] (DATA)
// 0048638c: PUSH EAX
// 0048638d: LEA EAX,[ESI + 0x158]
// 00486393: PUSH EAX
// 00486394: MOV EDI,0x3
// 00486399: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 0048639e: ADD ESP,0xc
// 004863a1: CMP EBX,EAX
// 004863a3: JZ 0x004863b5
//   XREF to: 004863b5 (CONDITIONAL_JUMP)
// 004863a5: MOV EDX,dword ptr [EAX]
// 004863a7: MOV dword ptr [EBX],EDX
// 004863a9: MOV EDX,dword ptr [EAX + 0x4]
// 004863ac: MOV dword ptr [EBX + 0x4],EDX
// 004863af: MOV EDX,dword ptr [EAX + 0x8]
// 004863b2: MOV dword ptr [EBX + 0x8],EDX
// 004863b5: MOV EBP,dword ptr [0x02c6d0b4]
//   Label: LAB_004863b5
//   XREF to: 02c6d0b4 (READ)
// 004863bb: PUSH EBP
// 004863bc: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x18] (DATA)
// 004863c0: PUSH EAX
// 004863c1: LEA EAX,[ESI + 0x158]
// 004863c7: PUSH EAX
// 004863c8: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004863cd: LEA EDX,[EBX + 0xc]
// 004863d0: ADD ESP,0xc
// 004863d3: CMP EDX,EAX
// 004863d5: JZ 0x004863e7
//   XREF to: 004863e7 (CONDITIONAL_JUMP)
// 004863d7: MOV ECX,dword ptr [EAX]
// 004863d9: MOV dword ptr [EDX],ECX
// 004863db: MOV ECX,dword ptr [EAX + 0x4]
// 004863de: MOV dword ptr [EDX + 0x4],ECX
// 004863e1: MOV ECX,dword ptr [EAX + 0x8]
// 004863e4: MOV dword ptr [EDX + 0x8],ECX
// 004863e7: MOV EAX,[0x02c6d0bc]
//   Label: LAB_004863e7
//   XREF to: 02c6d0bc (READ)
// 004863ec: PUSH EAX
// 004863ed: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x30] (DATA)
// 004863f1: PUSH EAX
// 004863f2: ADD ESI,0x158
// 004863f8: PUSH ESI
// 004863f9: ADD EBX,0x18
// 004863fc: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 00486401: ADD ESP,0xc
// 00486404: CMP EBX,EAX
// 00486406: JZ 0x00486418
//   XREF to: 00486418 (CONDITIONAL_JUMP)
// 00486408: MOV EDX,dword ptr [EAX]
// 0048640a: MOV dword ptr [EBX],EDX
// 0048640c: MOV EDX,dword ptr [EAX + 0x4]
// 0048640f: MOV dword ptr [EBX + 0x4],EDX
// 00486412: MOV EDX,dword ptr [EAX + 0x8]
// 00486415: MOV dword ptr [EBX + 0x8],EDX
// 00486418: MOV EAX,EDI
//   Label: LAB_00486418
// 0048641a: POP EDI
// 0048641b: ADD ESP,0x24
// 0048641e: POP EBP
// 0048641f: POP ESI
// 00486420: POP EBX
// 00486421: RET
