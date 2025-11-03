// Name: core_ghoul.cpp_FUN_004e8bc0
// Address: 004e8bc0
// Address Range: [[004e8bc0, 004e8db6]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e8bc0()
// Globals:
//   void* switchdataD_004e8ba4 = 004e8c2d
//   double DOUBLE_0062ded2 = 0.5
//   double DOUBLE_0062deda = 0.700000000000000
//   double DOUBLE_0062dee2 = 0.300000000000000
//   undefined4 DAT_02d832fc
//   undefined4 DAT_02d83310
//   undefined4 DAT_02d83314
//   undefined4 DAT_02d83320
//   undefined4 DAT_02d83324
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00

#include "nocturne.h"

/* Signature: undefined1 actors_enemy_ghoul.cpp_FUN_004e8bc0(undefined4 param_1, undefined4 param_2)
    */

int core_ghoul_cpp_FUN_004e8bc0(void)

{
  int iVar1;
  float *pfVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  BADSPACEBASE *in_ESP;
  int in_stack_00000004;
  undefined4 *in_stack_00000008;
  float local_40;
  float local_3c;
  float fStack_38;
  undefined4 local_2c;
  float local_28;
  float local_24;
  int iStack_14;
  
  core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
  if (&local_2c != in_stack_00000008) {
    *in_stack_00000008 = local_2c;
    in_stack_00000008[1] = local_28;
    in_stack_00000008[2] = local_24;
  }
  iVar5 = 1;
  iStack_14 = 0;
  do {
    switch((iStack_14 + *(int *)(in_stack_00000004 + 0x6c)) % 4) {
    case 0:
      iVar1 = *(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee0) * 4);
      goto joined_r0x004e8d11;
    case 1:
      iVar1 = *(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbee8) * 4);
joined_r0x004e8d11:
      if (iVar1 != 0) {
        pfVar2 = (float *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
        if (&local_40 != pfVar2) {
          local_40 = *pfVar2;
          local_3c = pfVar2[1];
          fStack_38 = pfVar2[2];
        }
        local_3c = local_24 * (float)DOUBLE_0062dee2 + local_3c * (float)DOUBLE_0062deda;
        local_40 = local_28 * (float)DOUBLE_0062ded2 + local_40 * (float)DOUBLE_0062ded2;
        pfVar2 = (float *)(in_stack_00000008 + iVar5 * 3);
        if (pfVar2 != &local_40) {
          *pfVar2 = local_40;
          pfVar2[1] = local_3c;
          pfVar2[2] = fStack_38;
        }
LAB_004e8cce:
        iVar5 = iVar5 + 1;
      }
      break;
    case 2:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf08) * 4) == 0)
      break;
      puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
      puVar4 = in_stack_00000008 + iVar5 * 3;
      if (puVar4 != puVar3) {
        *puVar4 = *puVar3;
        puVar4[1] = puVar3[1];
        puVar4[2] = puVar3[2];
      }
      goto LAB_004e8cce;
    case 3:
      if (*(int *)(in_stack_00000004 + 0x2298 + *(int *)(in_stack_00000004 + 0xbf04) * 4) != 0) {
        puVar3 = (undefined4 *)core_skeleton_cpp_CDeformableModelInstance_FUN_0059fb00();
        puVar4 = in_stack_00000008 + iVar5 * 3;
        if (puVar4 != puVar3) {
          *puVar4 = *puVar3;
          puVar4[1] = puVar3[1];
          puVar4[2] = puVar3[2];
        }
        goto LAB_004e8cce;
      }
    }
    iStack_14 = iStack_14 + 1;
    if (3 < iStack_14) {
      return iVar5;
    }
  } while( true );
}


// Assembly code:
// 004e8bc0: PUSH EBX
//   Label: core_ghoul.cpp_FUN_004e8bc0
// 004e8bc1: PUSH ESI
// 004e8bc2: PUSH EDI
// 004e8bc3: PUSH EBP
// 004e8bc4: MOV EBP,ESP
// 004e8bc6: SUB ESP,0x4c
// 004e8bc9: AND ESP,0xfffffff8
// 004e8bcc: MOV ESI,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 004e8bcf: MOV EDX,dword ptr [0x02d83320]
//   XREF to: 02d83320 (READ)
// 004e8bd5: PUSH EDX
// 004e8bd6: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x30] (DATA)
// 004e8bda: PUSH EAX
// 004e8bdb: LEA EAX,[ESI + 0x158]
// 004e8be1: PUSH EAX
// 004e8be2: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e8be7: ADD ESP,0xc
// 004e8bea: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 004e8bee: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e8bf1: CMP EAX,ECX
// 004e8bf3: JNZ 0x004e8cea
//   XREF to: 004e8cea (CONDITIONAL_JUMP)
// 004e8bf9: XOR EDI,EDI
//   Label: LAB_004e8bf9
// 004e8bfb: MOV EBX,0x1
// 004e8c00: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 004e8c04: LEA EDI,[ESI + 0x158]
// 004e8c0a: MOV EDX,dword ptr [ESP + 0x48]
//   Label: LAB_004e8c0a
//   XREF to: Stack[-0x18] (READ)
// 004e8c0e: ADD EDX,dword ptr [ESI + 0x6c]
// 004e8c11: MOV ECX,0x4
// 004e8c16: MOV EAX,EDX
// 004e8c18: SAR EDX,0x1f
// 004e8c1b: IDIV ECX
// 004e8c1d: CMP EDX,0x3
// 004e8c20: JA 0x004e8ccf
//   XREF to: 004e8ccf (CONDITIONAL_JUMP)
// 004e8c26: JMP dword ptr [EDX*0x4 + 0x4e8ba4]
//   Label: switchD
//   XREF to: 004e8c2d (COMPUTED_JUMP)
//   XREF to: 004e8d03 (COMPUTED_JUMP)
//   XREF to: 004e8d23 (COMPUTED_JUMP)
//   XREF to: 004e8d6b (COMPUTED_JUMP)
//   XREF to: 004e8ba4 (DATA)
// 004e8c2d: MOV EAX,dword ptr [ESI + 0xbee0]
//   Label: caseD_0
// 004e8c33: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e8c3b: JZ 0x004e8ccf
//   XREF to: 004e8ccf (CONDITIONAL_JUMP)
// 004e8c41: MOV ECX,dword ptr [0x02d83310]
//   XREF to: 02d83310 (READ)
// 004e8c47: PUSH ECX
// 004e8c48: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 004e8c4c: PUSH EAX
//   Label: LAB_004e8c4c
// 004e8c4d: PUSH EDI
// 004e8c4e: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e8c53: MOV EDX,EAX
// 004e8c55: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x48] (DATA)
// 004e8c59: ADD ESP,0xc
// 004e8c5c: CMP EAX,EDX
// 004e8c5e: JZ 0x004e8c74
//   XREF to: 004e8c74 (CONDITIONAL_JUMP)
// 004e8c60: MOV EAX,dword ptr [EDX]
// 004e8c62: MOV dword ptr [ESP + 0x18],EAX
//   XREF to: Stack[-0x48] (WRITE)
// 004e8c66: MOV EAX,dword ptr [EDX + 0x4]
// 004e8c69: MOV dword ptr [ESP + 0x1c],EAX
//   XREF to: Stack[-0x44] (WRITE)
// 004e8c6d: MOV EAX,dword ptr [EDX + 0x8]
// 004e8c70: MOV dword ptr [ESP + 0x20],EAX
//   XREF to: Stack[-0x40] (WRITE)
// 004e8c74: IMUL EDX,EBX,0xc
//   Label: LAB_004e8c74
// 004e8c77: FLD double ptr [0x0062ded2]
//   XREF to: 0062ded2 (READ)
// 004e8c7d: FLD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 004e8c81: FMUL ST1
// 004e8c83: FLD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 004e8c87: FMUL double ptr [0x0062deda]
//   XREF to: 0062deda (READ)
// 004e8c8d: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 004e8c91: FMULP ST3
// 004e8c93: FLD float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 004e8c97: FMUL double ptr [0x0062dee2]
//   XREF to: 0062dee2 (READ)
// 004e8c9d: MOV EAX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e8ca0: FADDP
// 004e8ca2: FXCH ST2
// 004e8ca4: FADDP
// 004e8ca6: FXCH
// 004e8ca8: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 004e8cac: ADD EDX,EAX
// 004e8cae: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x48] (DATA)
// 004e8cb2: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 004e8cb6: CMP EDX,EAX
// 004e8cb8: JZ 0x004e8cce
//   XREF to: 004e8cce (CONDITIONAL_JUMP)
// 004e8cba: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (DATA)
// 004e8cbe: MOV dword ptr [EDX],EAX
// 004e8cc0: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 004e8cc4: MOV dword ptr [EDX + 0x4],EAX
// 004e8cc7: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (READ)
// 004e8ccb: MOV dword ptr [EDX + 0x8],EAX
// 004e8cce: INC EBX
//   Label: LAB_004e8cce
// 004e8ccf: MOV EDX,dword ptr [ESP + 0x48]
//   Label: default
//   XREF to: Stack[-0x18] (READ)
// 004e8cd3: INC EDX
// 004e8cd4: MOV dword ptr [ESP + 0x48],EDX
//   XREF to: Stack[-0x18] (WRITE)
// 004e8cd8: CMP EDX,0x4
// 004e8cdb: JL 0x004e8c0a
//   XREF to: 004e8c0a (CONDITIONAL_JUMP)
// 004e8ce1: MOV EAX,EBX
// 004e8ce3: MOV ESP,EBP
// 004e8ce5: POP EBP
// 004e8ce6: POP EDI
// 004e8ce7: POP ESI
// 004e8ce8: POP EBX
// 004e8ce9: RET
// 004e8cea: MOV EAX,dword ptr [ESP + 0x30]
//   Label: LAB_004e8cea
//   XREF to: Stack[-0x30] (DATA)
// 004e8cee: MOV dword ptr [ECX],EAX
// 004e8cf0: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 004e8cf4: MOV dword ptr [ECX + 0x4],EAX
// 004e8cf7: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 004e8cfb: MOV dword ptr [ECX + 0x8],EAX
// 004e8cfe: JMP 0x004e8bf9
//   XREF to: 004e8bf9 (UNCONDITIONAL_JUMP)
// 004e8d03: MOV EAX,dword ptr [ESI + 0xbee8]
//   Label: caseD_1
// 004e8d09: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e8d11: JZ 0x004e8ccf
//   XREF to: 004e8ccf (CONDITIONAL_JUMP)
// 004e8d13: MOV ECX,dword ptr [0x02d83314]
//   XREF to: 02d83314 (READ)
// 004e8d19: PUSH ECX
// 004e8d1a: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x54] (DATA)
// 004e8d1e: JMP 0x004e8c4c
//   XREF to: 004e8c4c (UNCONDITIONAL_JUMP)
// 004e8d23: MOV EAX,dword ptr [ESI + 0xbf08]
//   Label: caseD_2
// 004e8d29: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e8d31: JZ 0x004e8ccf
//   XREF to: 004e8ccf (CONDITIONAL_JUMP)
// 004e8d33: MOV ECX,dword ptr [0x02d832fc]
//   XREF to: 02d832fc (READ)
// 004e8d39: PUSH ECX
// 004e8d3a: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 004e8d3e: PUSH EAX
// 004e8d3f: PUSH EDI
// 004e8d40: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e8d45: IMUL EDX,EBX,0xc
// 004e8d48: ADD ESP,0xc
// 004e8d4b: ADD EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e8d4e: CMP EDX,EAX
// 004e8d50: JZ 0x004e8cce
//   XREF to: 004e8cce (CONDITIONAL_JUMP)
// 004e8d56: MOV ECX,dword ptr [EAX]
// 004e8d58: MOV dword ptr [EDX],ECX
// 004e8d5a: MOV ECX,dword ptr [EAX + 0x4]
// 004e8d5d: MOV dword ptr [EDX + 0x4],ECX
// 004e8d60: MOV ECX,dword ptr [EAX + 0x8]
// 004e8d63: MOV dword ptr [EDX + 0x8],ECX
// 004e8d66: JMP 0x004e8cce
//   XREF to: 004e8cce (UNCONDITIONAL_JUMP)
// 004e8d6b: MOV EAX,dword ptr [ESI + 0xbf04]
//   Label: caseD_3
// 004e8d71: CMP dword ptr [ESI + EAX*0x4 + 0x2298],0x0
// 004e8d79: JZ 0x004e8ccf
//   XREF to: 004e8ccf (CONDITIONAL_JUMP)
// 004e8d7f: MOV ECX,dword ptr [0x02d83324]
//   XREF to: 02d83324 (READ)
// 004e8d85: PUSH ECX
// 004e8d86: LEA EAX,[ESP + 0x4]
//   XREF to: Stack[-0x60] (DATA)
// 004e8d8a: PUSH EAX
// 004e8d8b: PUSH EDI
// 004e8d8c: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_0059fb00
//   XREF to: 0059fb00 (UNCONDITIONAL_CALL)
// 004e8d91: IMUL EDX,EBX,0xc
// 004e8d94: ADD ESP,0xc
// 004e8d97: ADD EDX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 004e8d9a: CMP EDX,EAX
// 004e8d9c: JZ 0x004e8cce
//   XREF to: 004e8cce (CONDITIONAL_JUMP)
// 004e8da2: MOV ECX,dword ptr [EAX]
// 004e8da4: MOV dword ptr [EDX],ECX
// 004e8da6: MOV ECX,dword ptr [EAX + 0x4]
// 004e8da9: MOV dword ptr [EDX + 0x4],ECX
// 004e8dac: MOV ECX,dword ptr [EAX + 0x8]
// 004e8daf: MOV dword ptr [EDX + 0x8],ECX
// 004e8db2: JMP 0x004e8cce
//   XREF to: 004e8cce (UNCONDITIONAL_JUMP)
