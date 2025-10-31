// Name: core_tentacle.cpp_FUN_005dbb70
// Address: 005dbb70
// Address Range: [[005dbb70, 005dbc5b]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005dbb70()
// Cross-references:
//   core_tentacle.cpp_CTentacle_process_FUN_005db050 (005db050) at 005db204 [UNCONDITIONAL_CALL]
//   core_tentacle.cpp_FUN_005db9d0 (005db9d0) at 005dba57 [UNCONDITIONAL_CALL]
// Globals:
//   undefined4 DAT_03f6cd08
//   undefined4 DAT_03f6cd0c
//   undefined4 DAT_03f6cd10
//   undefined4 DAT_03f6cd14
// Function calls:
//   core_xform.cpp_lerpMatrix3x4_FUN_005f7140

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_tentacle.cpp_FUN_005dbb70(undefined4 param_1) */

void core_tentacle_cpp_FUN_005dbb70(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  undefined4 *unaff_ESI;
  float *pfVar2;
  undefined4 *puVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  float afStack_f4 [10];
  float local_cc [2];
  CMatrix3x4f CStack_c4;
  CMatrix3x4f aCStack_94 [2];
  undefined4 auStack_30 [9];
  
  bVar5 = 0;
  in_stack_00000004 = in_stack_00000004 + 0xfd8;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd08 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd0c * 0x30 + in_stack_00000004),0.5);
  pfVar2 = &aCStack_94[0].m[2].z;
  pfVar4 = local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd10 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd14 * 0x30 + in_stack_00000004),0.5);
  pfVar2 = afStack_f4;
  pfVar4 = &CStack_c4.m[2].z;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&CStack_c4,aCStack_94,0.5);
  puVar3 = auStack_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}


// Assembly code:
// 005dbb70: PUSH EBX
//   Label: core_tentacle.cpp_FUN_005dbb70
// 005dbb71: PUSH EDI
// 005dbb72: PUSH EBP
// 005dbb73: SUB ESP,0xf0
// 005dbb79: MOV EBX,ESI
// 005dbb7b: MOV EBP,dword ptr [0x03f6cd0c]
//   XREF to: 03f6cd0c (READ)
// 005dbb81: LEA EAX,[EBP*0x4 + 0x0]
// 005dbb88: SUB EAX,EBP
// 005dbb8a: MOV EBP,dword ptr [ESP + 0x100]
//   XREF to: Stack[0x4] (READ)
// 005dbb91: SHL EAX,0x4
// 005dbb94: ADD EBP,0xfd8
// 005dbb9a: PUSH 0x3f000000
// 005dbb9f: ADD EAX,EBP
// 005dbba1: MOV ESI,dword ptr [0x03f6cd08]
//   XREF to: 03f6cd08 (READ)
// 005dbba7: PUSH EAX
// 005dbba8: LEA EAX,[ESI*0x4 + 0x0]
// 005dbbaf: SUB EAX,ESI
// 005dbbb1: SHL EAX,0x4
// 005dbbb4: ADD EAX,EBP
// 005dbbb6: PUSH EAX
// 005dbbb7: LEA ESI,[ESP + 0x9c]
//   XREF to: Stack[-0x6c] (DATA)
// 005dbbbe: LEA EDI,[ESP + 0x3c]
//   XREF to: Stack[-0xcc] (DATA)
// 005dbbc2: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005dbbc7: MOV ECX,0xc
// 005dbbcc: LEA ESI,[ESP + 0x9c]
//   XREF to: Stack[-0x6c] (DATA)
// 005dbbd3: ADD ESP,0xc
// 005dbbd6: MOVSD.REP ES:EDI,ESI
// 005dbbd8: MOV ESI,dword ptr [0x03f6cd14]
//   XREF to: 03f6cd14 (READ)
// 005dbbde: LEA EAX,[ESI*0x4 + 0x0]
// 005dbbe5: SUB EAX,ESI
// 005dbbe7: SHL EAX,0x4
// 005dbbea: PUSH 0x3f000000
// 005dbbef: ADD EAX,EBP
// 005dbbf1: MOV ESI,dword ptr [0x03f6cd10]
//   XREF to: 03f6cd10 (READ)
// 005dbbf7: PUSH EAX
// 005dbbf8: LEA EAX,[ESI*0x4 + 0x0]
// 005dbbff: SUB EAX,ESI
// 005dbc01: SHL EAX,0x4
// 005dbc04: ADD EAX,EBP
// 005dbc06: PUSH EAX
// 005dbc07: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0xfc] (DATA)
// 005dbc0b: LEA EDI,[ESP + 0x6c]
//   XREF to: Stack[-0x9c] (DATA)
// 005dbc0f: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005dbc14: ADD ESP,0xc
// 005dbc17: MOV ECX,0xc
// 005dbc1c: LEA EAX,[ESP + 0x60]
//   XREF to: Stack[-0x9c] (DATA)
// 005dbc20: PUSH 0x3f000000
// 005dbc25: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0xfc] (DATA)
// 005dbc29: PUSH EAX
// 005dbc2a: LEA EAX,[ESP + 0x38]
//   XREF to: Stack[-0xcc] (DATA)
// 005dbc2e: MOVSD.REP ES:EDI,ESI
// 005dbc30: PUSH EAX
// 005dbc31: LEA ESI,[ESP + 0xcc]
//   XREF to: Stack[-0x3c] (DATA)
// 005dbc38: MOV EDI,EBX
// 005dbc3a: CALL core_xform.cpp_lerpMatrix3x4_FUN_005f7140
//   XREF to: 005f7140 (UNCONDITIONAL_CALL)
// 005dbc3f: MOV ECX,0xc
// 005dbc44: LEA ESI,[ESP + 0xcc]
//   XREF to: Stack[-0x3c] (DATA)
// 005dbc4b: ADD ESP,0xc
// 005dbc4e: MOVSD.REP ES:EDI,ESI
// 005dbc50: MOV EAX,EBX
// 005dbc52: ADD ESP,0xf0
// 005dbc58: POP EBP
// 005dbc59: POP EDI
// 005dbc5a: POP EBX
// 005dbc5b: RET
