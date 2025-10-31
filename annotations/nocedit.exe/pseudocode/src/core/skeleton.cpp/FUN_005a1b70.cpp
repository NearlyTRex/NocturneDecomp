// Name: core_skeleton.cpp_FUN_005a1b70
// Address: 005a1b70
// Address Range: [[005a1b70, 005a1ce4]]
// Convention: unknown
// Signature: undefined core_skeleton.cpp_FUN_005a1b70()
// Function calls:
//   core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   core_skeleton.cpp_FUN_005a1950
//   core_xform.cpp_slerpQuaternion_FUN_005f77e0

#include "nocturne.h"

void core_skeleton_cpp_FUN_005a1b70(void)

{
  int iVar1;
  float *pfVar2;
  BADSPACEBASE *in_ESP;
  int iVar3;
  float *pfVar4;
  byte bVar5;
  float *in_stack_00000004;
  float *in_stack_00000008;
  float *in_stack_0000000c;
  float in_stack_00000010;
  CQuaternion4f *in_stack_00000014;
  undefined4 in_stack_00000018;
  float afStackY_182c [1524];
  float in_stack_ffffffb0;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;
  int local_18;
  CQuaternion4f *local_14;
  CQuaternion4f *result_out;
  
  bVar5 = 0;
  if (in_stack_00000010 < 0.0) {
    in_stack_00000010 = 0.0;
  }
  if (1.0 < in_stack_00000010) {
    in_stack_00000010 = 1.0;
  }
  local_38 = *in_stack_0000000c * in_stack_00000010;
  local_34 = in_stack_0000000c[1] * in_stack_00000010;
  local_20 = 1.0 - in_stack_00000010;
  local_30 = in_stack_0000000c[2] * in_stack_00000010;
  local_2c = *in_stack_00000008 * local_20;
  local_28 = in_stack_00000008[1] * local_20;
  local_24 = in_stack_00000008[2] * local_20;
  local_44 = local_2c + local_38;
  local_40 = local_28 + local_34;
  local_3c = local_24 + local_30;
  if (&stack0xffffffbc != in_stack_00000004) {
    *in_stack_00000004 = local_44;
    in_stack_00000004[1] = local_40;
    in_stack_00000004[2] = local_3c;
  }
  local_18 = core_skeleton_cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820();
  iVar1 = *(int *)(local_18 + 0x28558);
  iVar3 = 0;
  if (0 < iVar1) {
    result_out = (CQuaternion4f *)(in_stack_00000008 + 3);
    local_14 = (CQuaternion4f *)(in_stack_0000000c + 3);
    pfVar2 = in_stack_00000008;
    do {
      core_xform_cpp_slerpQuaternion_FUN_005f77e0
                (result_out,local_14,in_stack_00000014,in_stack_ffffffb0);
      pfVar4 = pfVar2 + (uint)bVar5 * -2 + 4;
      pfVar2[3] = in_stack_ffffffb0;
      *pfVar4 = *(float *)(&stack0xffffffb4 + (uint)bVar5 * -8);
      pfVar4[(uint)bVar5 * -2 + 1] =
           *(float *)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8);
      (pfVar4 + (uint)bVar5 * -2 + 1)[(uint)bVar5 * -2 + 1] =
           *(float *)((int)(&stack0xffffffb8 + (uint)bVar5 * -8 + (uint)bVar5 * -8) +
                     ((uint)bVar5 * -2 + 1) * 4);
      local_14 = local_14 + 1;
      iVar3 = iVar3 + 1;
      result_out = result_out + 1;
      iVar1 = *(int *)(local_18 + 0x28558);
      pfVar2 = pfVar2 + 4;
    } while (iVar3 < iVar1);
  }
  core_skeleton_cpp_FUN_005a1950
            (local_18,iVar1,in_stack_00000008,in_stack_00000018,in_stack_00000008,in_stack_00000018)
  ;
  return;
}


// Assembly code:
// 005a1b70: PUSH EBX
//   Label: core_skeleton.cpp_FUN_005a1b70
// 005a1b71: PUSH ESI
// 005a1b72: PUSH EDI
// 005a1b73: PUSH EBP
// 005a1b74: SUB ESP,0x44
// 005a1b77: MOV EDI,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x8] (READ)
// 005a1b7b: MOV ESI,dword ptr [ESP + 0x60]
//   XREF to: Stack[0xc] (READ)
// 005a1b7f: FLD float ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 005a1b83: FLDZ
// 005a1b85: FCOMPP
// 005a1b87: FNSTSW AX
// 005a1b89: SAHF
// 005a1b8a: JA 0x005a1cda
//   XREF to: 005a1cda (CONDITIONAL_JUMP)
// 005a1b90: FLD float ptr [ESP + 0x64]
//   Label: LAB_005a1b90
//   XREF to: Stack[0x10] (READ)
// 005a1b94: FLD1
// 005a1b96: FCOMPP
// 005a1b98: FNSTSW AX
// 005a1b9a: SAHF
// 005a1b9b: JNC 0x005a1ba5
//   XREF to: 005a1ba5 (CONDITIONAL_JUMP)
// 005a1b9d: MOV dword ptr [ESP + 0x64],0x3f800000
//   XREF to: Stack[0x10] (WRITE)
// 005a1ba5: FLD float ptr [ESP + 0x64]
//   Label: LAB_005a1ba5
//   XREF to: Stack[0x10] (READ)
// 005a1ba9: FLD float ptr [ESI]
// 005a1bab: FMUL ST1
// 005a1bad: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (WRITE)
// 005a1bb1: FLD float ptr [ESI + 0x4]
// 005a1bb4: FMUL ST1
// 005a1bb6: FLD ST1
// 005a1bb8: FLD1
// 005a1bba: FSUBRP
// 005a1bbc: FXCH
// 005a1bbe: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (WRITE)
// 005a1bc2: FLD float ptr [ESI + 0x8]
// 005a1bc5: FMULP ST2
// 005a1bc7: FSTP float ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (WRITE)
// 005a1bcb: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (WRITE)
// 005a1bcf: FLD float ptr [EDI]
// 005a1bd1: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 005a1bd5: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a1bd9: FLD float ptr [EDI + 0x4]
// 005a1bdc: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 005a1be0: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (WRITE)
// 005a1be4: FLD float ptr [EDI + 0x8]
// 005a1be7: FMUL float ptr [ESP + 0x34]
//   XREF to: Stack[-0x20] (READ)
// 005a1beb: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 005a1bef: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 005a1bf3: FLD float ptr [ESP + 0x28]
//   XREF to: Stack[-0x2c] (READ)
// 005a1bf7: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x38] (READ)
// 005a1bfb: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x28] (READ)
// 005a1bff: FXCH
// 005a1c01: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (WRITE)
// 005a1c05: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x34] (READ)
// 005a1c09: FXCH
// 005a1c0b: FST float ptr [ESP + 0x30]
//   XREF to: Stack[-0x24] (WRITE)
// 005a1c0f: FADD float ptr [ESP + 0x24]
//   XREF to: Stack[-0x30] (READ)
// 005a1c13: FXCH
// 005a1c15: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (WRITE)
// 005a1c19: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a1c1d: CMP EAX,EBX
// 005a1c1f: JZ 0x005a1c35
//   XREF to: 005a1c35 (CONDITIONAL_JUMP)
// 005a1c21: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x44] (DATA)
// 005a1c25: MOV dword ptr [EBX],EAX
// 005a1c27: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x40] (READ)
// 005a1c2b: MOV dword ptr [EBX + 0x4],EAX
// 005a1c2e: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[-0x3c] (READ)
// 005a1c32: MOV dword ptr [EBX + 0x8],EAX
// 005a1c35: MOV EBP,dword ptr [ESP + 0x68]
//   Label: LAB_005a1c35
//   XREF to: Stack[0x14] (READ)
// 005a1c39: PUSH EBP
// 005a1c3a: CALL core_skeleton.cpp_CDeformableModelInstance_GetModelPtrAndSomething_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a1c3f: ADD ESP,0x4
// 005a1c42: MOV EDX,dword ptr [EAX + 0x28558]
// 005a1c48: XOR EBP,EBP
// 005a1c4a: MOV dword ptr [ESP + 0x38],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a1c4e: TEST EDX,EDX
// 005a1c50: JLE 0x005a1cc0
//   XREF to: 005a1cc0 (CONDITIONAL_JUMP)
// 005a1c52: MOV EBX,dword ptr [ESP + 0x58]
//   XREF to: Stack[0x4] (READ)
// 005a1c56: ADD EDI,0xc
// 005a1c59: ADD ESI,0xc
// 005a1c5c: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a1c60: MOV dword ptr [ESP + 0x3c],ESI
//   XREF to: Stack[-0x18] (WRITE)
// 005a1c64: MOV ECX,dword ptr [ESP + 0x3c]
//   Label: LAB_005a1c64
//   XREF to: Stack[-0x18] (READ)
// 005a1c68: PUSH dword ptr [ESP + 0x64]
//   XREF to: Stack[0x10] (READ)
// 005a1c6c: PUSH ECX
// 005a1c6d: MOV ESI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x14] (READ)
// 005a1c71: PUSH ESI
// 005a1c72: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005a1c76: CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0
//   XREF to: 005f77e0 (UNCONDITIONAL_CALL)
// 005a1c7b: LEA ESI,[ESP + 0xc]
//   XREF to: Stack[-0x54] (DATA)
// 005a1c7f: ADD ESP,0xc
// 005a1c82: LEA EDI,[EBX + 0xc]
// 005a1c85: ADD EBX,0x10
// 005a1c88: MOV EAX,dword ptr [ESP + 0x3c]
//   XREF to: Stack[-0x18] (READ)
// 005a1c8c: MOVSD ES:EDI,ESI
// 005a1c8d: MOVSD ES:EDI,ESI
// 005a1c8e: MOVSD ES:EDI,ESI
// 005a1c8f: MOVSD ES:EDI,ESI
// 005a1c90: ADD EAX,0x10
// 005a1c93: MOV EDI,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x14] (READ)
// 005a1c97: MOV dword ptr [ESP + 0x3c],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a1c9b: MOV EAX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x1c] (READ)
// 005a1c9f: INC EBP
// 005a1ca0: ADD EDI,0x10
// 005a1ca3: MOV EDX,dword ptr [EAX + 0x28558]
// 005a1ca9: MOV dword ptr [ESP + 0x40],EDI
//   XREF to: Stack[-0x14] (WRITE)
// 005a1cad: CMP EBP,EDX
// 005a1caf: JL 0x005a1c64
//   XREF to: 005a1c64 (CONDITIONAL_JUMP)
// 005a1cb1: LEA EAX,[EAX]
// 005a1cb7: LEA EDX,[EDX]
// 005a1cbd: LEA EAX,[EAX]
// 005a1cc0: MOV ECX,dword ptr [ESP + 0x68]
//   Label: LAB_005a1cc0
//   XREF to: Stack[0x14] (READ)
// 005a1cc4: PUSH ECX
// 005a1cc5: MOV EBX,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 005a1cc9: PUSH EBX
// 005a1cca: CALL core_skeleton.cpp_FUN_005a1950
//   XREF to: 005a1950 (UNCONDITIONAL_CALL)
// 005a1ccf: ADD ESP,0x8
// 005a1cd2: ADD ESP,0x44
// 005a1cd5: POP EBP
// 005a1cd6: POP EDI
// 005a1cd7: POP ESI
// 005a1cd8: POP EBX
// 005a1cd9: RET
// 005a1cda: XOR EDX,EDX
//   Label: LAB_005a1cda
// 005a1cdc: MOV dword ptr [ESP + 0x64],EDX
//   XREF to: Stack[0x10] (WRITE)
// 005a1ce0: JMP 0x005a1b90
//   XREF to: 005a1b90 (UNCONDITIONAL_JUMP)
