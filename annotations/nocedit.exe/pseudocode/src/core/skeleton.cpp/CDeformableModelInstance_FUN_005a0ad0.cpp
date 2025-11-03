// Name: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0
// Address: 005a0ad0
// Address Range: [[005a0ad0, 005a0c8f]]
// Convention: __cdecl
// Signature: void core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0(CDeformableModelInstance * this_ptr)
// Cross-references:
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a08a0 (005a08a0) at 005a08fa [UNCONDITIONAL_CALL]
// Function calls:
//   core_motion.cpp_CMotionController_FUN_0052e4c0
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070

#include "nocturne.h"

void __cdecl
core_skeleton_cpp_CDeformableModelInstance_FUN_005a0ad0(CDeformableModelInstance *this_ptr)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  float fVar7;
  int extraout_EAX;
  int bone_index;
  BADSPACEBASE *in_ESP;
  float *pfVar8;
  byte bVar9;
  float *in_stack_00000010;
  float afStackY_1830 [1521];
  float fStack_58;
  float fStack_54;
  float local_38 [6];
  int local_20;
  int local_1c;
  CSkeleton *local_14;
  float *pfVar10;
  float *pfVar11;
  
  bVar9 = 0;
  core_skeleton_cpp_CDeformableModelInstance_FUN_005a0820(this_ptr);
  core_motion_cpp_CMotionController_FUN_0052e4c0();
  bone_index = 0;
  pfVar10 = in_stack_00000010;
  pfVar11 = in_stack_00000010;
  if (0 < *(int *)(extraout_EAX + 0x28558)) {
    do {
      core_skeleton_cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
                (local_14,bone_index,local_20,local_1c,fStack_58);
      bone_index = bone_index + 1;
      pfVar8 = pfVar10 + (uint)bVar9 * -2 + 4;
      pfVar10[3] = fStack_54;
      *pfVar8 = *(float *)(&stack0xffffffb0 + (uint)bVar9 * -8);
      pfVar8[(uint)bVar9 * -2 + 1] =
           *(float *)(&stack0xffffffb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
      (pfVar8 + (uint)bVar9 * -2 + 1)[(uint)bVar9 * -2 + 1] =
           *(float *)((int)(&stack0xffffffb4 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
                     ((uint)bVar9 * -2 + 1) * 4);
      pfVar11[0x193] = 1.0;
      pfVar10 = pfVar10 + 4;
      pfVar11 = pfVar11 + 1;
    } while (bone_index < local_14->bone_count);
  }
  pCVar5 = local_14->frame_positions_1;
  fVar1 = pCVar5[local_1c].y;
  fVar2 = pCVar5[local_1c].z;
  fVar7 = 1.0 - fStack_58;
  pCVar6 = local_14->frame_positions_1;
  fVar3 = pCVar6[local_20].y;
  fVar4 = pCVar6[local_20].z;
  if (local_38 != in_stack_00000010) {
    *in_stack_00000010 = pCVar6[local_20].x * fVar7 + pCVar5[local_1c].x * fStack_58;
    in_stack_00000010[1] = fVar3 * fVar7 + fVar1 * fStack_58;
    in_stack_00000010[2] = fVar4 * fVar7 + fVar2 * fStack_58;
  }
  *in_stack_00000010 = *(float *)this_ptr->field3_0x508 * *in_stack_00000010;
  in_stack_00000010[1] = *(float *)(this_ptr->field3_0x508 + 4) * in_stack_00000010[1];
  in_stack_00000010[2] = *(float *)(this_ptr->field3_0x508 + 8) * in_stack_00000010[2];
  return;
}


// Assembly code:
// 005a0ad0: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModelInstance_FUN_005a0ad0
// 005a0ad1: PUSH ESI
// 005a0ad2: PUSH EDI
// 005a0ad3: PUSH EBP
// 005a0ad4: MOV EBP,ESP
// 005a0ad6: SUB ESP,0x50
// 005a0ad9: AND ESP,0xfffffff8
// 005a0adc: MOV EDX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a0adf: PUSH EDX
// 005a0ae0: CALL core_skeleton.cpp_CDeformableModelInstance_FUN_005a0820
//   XREF to: 005a0820 (UNCONDITIONAL_CALL)
// 005a0ae5: ADD ESP,0x4
// 005a0ae8: MOV ESI,EAX
// 005a0aea: MOV dword ptr [ESP + 0x44],EAX
//   XREF to: Stack[-0x1c] (WRITE)
// 005a0aee: MOV EAX,ESP
// 005a0af0: PUSH EAX
// 005a0af1: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x24] (DATA)
// 005a0af5: PUSH EAX
// 005a0af6: LEA EAX,[ESP + 0x40]
//   XREF to: Stack[-0x28] (DATA)
// 005a0afa: PUSH EAX
// 005a0afb: MOV ECX,dword ptr [EBP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 005a0afe: PUSH dword ptr [EBP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 005a0b01: PUSH ECX
// 005a0b02: MOV EBX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a0b05: PUSH EBX
// 005a0b06: CALL core_motion.cpp_CMotionController_FUN_0052e4c0
//   XREF to: 0052e4c0 (UNCONDITIONAL_CALL)
// 005a0b0b: ADD ESP,0x18
// 005a0b0e: MOV EDI,dword ptr [ESI + 0x28558]
// 005a0b14: XOR EBX,EBX
// 005a0b16: TEST EDI,EDI
// 005a0b18: JLE 0x005a0b90
//   XREF to: 005a0b90 (CONDITIONAL_JUMP)
// 005a0b1a: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0b1d: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 005a0b21: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 005a0b25: MOV EAX,dword ptr [ESP + 0x3c]
//   Label: LAB_005a0b25
//   XREF to: Stack[-0x24] (READ)
// 005a0b29: PUSH dword ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005a0b2c: PUSH EAX
// 005a0b2d: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[-0x28] (READ)
// 005a0b31: PUSH EDX
// 005a0b32: PUSH EBX
// 005a0b33: MOV ECX,dword ptr [ESP + 0x54]
//   XREF to: Stack[-0x1c] (READ)
// 005a0b37: PUSH ECX
// 005a0b38: LEA ESI,[ESP + 0x18]
//   XREF to: Stack[-0x5c] (DATA)
// 005a0b3c: CALL core_skeleton.cpp_CSkeleton_getBoneAngleInterpolated_FUN_0059a070
//   XREF to: 0059a070 (UNCONDITIONAL_CALL)
// 005a0b41: ADD ESP,0x14
// 005a0b44: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005a0b48: LEA ESI,[ESP + 0x4]
//   XREF to: Stack[-0x5c] (DATA)
// 005a0b4c: LEA EDI,[EDI + 0xc]
// 005a0b4f: INC EBX
// 005a0b50: MOVSD ES:EDI,ESI
// 005a0b51: MOVSD ES:EDI,ESI
// 005a0b52: MOVSD ES:EDI,ESI
// 005a0b53: MOVSD ES:EDI,ESI
// 005a0b54: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 005a0b58: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[-0x18] (READ)
// 005a0b5c: LEA ESI,[EAX + 0x4]
// 005a0b5f: MOV dword ptr [EAX + 0x64c],0x3f800000
// 005a0b69: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005a0b6d: MOV dword ptr [ESP + 0x4c],ESI
//   XREF to: Stack[-0x14] (WRITE)
// 005a0b71: ADD EDI,0x10
// 005a0b74: MOV EDX,dword ptr [EAX + 0x28558]
// 005a0b7a: MOV dword ptr [ESP + 0x48],EDI
//   XREF to: Stack[-0x18] (WRITE)
// 005a0b7e: CMP EBX,EDX
// 005a0b80: JL 0x005a0b25
//   XREF to: 005a0b25 (CONDITIONAL_JUMP)
// 005a0b82: LEA EAX,[EAX]
// 005a0b88: LEA EDX,[EDX]
// 005a0b8e: MOV EAX,EAX
// 005a0b90: MOV EBX,dword ptr [ESP + 0x3c]
//   Label: LAB_005a0b90
//   XREF to: Stack[-0x24] (READ)
// 005a0b94: LEA EAX,[EBX*0x4 + 0x0]
// 005a0b9b: SUB EAX,EBX
// 005a0b9d: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005a0ba1: MOV EBX,dword ptr [EBX + 0x29374]
// 005a0ba7: FLD float ptr [EBX + EAX*0x4]
// 005a0baa: FMUL float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005a0bad: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (WRITE)
// 005a0bb1: FLD float ptr [EBX + EAX*0x4 + 0x4]
// 005a0bb5: FMUL float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005a0bb8: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (WRITE)
// 005a0bbc: FLD float ptr [EBX + EAX*0x4 + 0x8]
// 005a0bc0: FMUL float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005a0bc3: FLD float ptr [ESP]
//   XREF to: Stack[-0x60] (DATA)
// 005a0bc6: MOV EBX,dword ptr [ESP + 0x38]
//   XREF to: Stack[-0x28] (READ)
// 005a0bca: FLD1
// 005a0bcc: LEA EAX,[EBX*0x4 + 0x0]
// 005a0bd3: FSUBRP
// 005a0bd5: SUB EAX,EBX
// 005a0bd7: MOV EBX,dword ptr [ESP + 0x44]
//   XREF to: Stack[-0x1c] (READ)
// 005a0bdb: FXCH
// 005a0bdd: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (WRITE)
// 005a0be1: MOV EBX,dword ptr [EBX + 0x29374]
// 005a0be7: FSTP float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (WRITE)
// 005a0beb: FLD float ptr [EBX + EAX*0x4]
// 005a0bee: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 005a0bf2: FSTP float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (WRITE)
// 005a0bf6: FLD float ptr [EBX + EAX*0x4 + 0x4]
// 005a0bfa: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 005a0bfe: FSTP float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (WRITE)
// 005a0c02: FLD float ptr [EBX + EAX*0x4 + 0x8]
// 005a0c06: FMUL float ptr [ESP + 0x40]
//   XREF to: Stack[-0x20] (READ)
// 005a0c0a: MOV ECX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0c0d: FLD float ptr [ESP + 0x2c]
//   XREF to: Stack[-0x34] (READ)
// 005a0c11: FADD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 005a0c15: FLD float ptr [ESP + 0x30]
//   XREF to: Stack[-0x30] (READ)
// 005a0c19: FXCH
// 005a0c1b: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x40] (WRITE)
// 005a0c1f: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x40] (DATA)
// 005a0c23: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x48] (READ)
// 005a0c27: FXCH
// 005a0c29: FST float ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (WRITE)
// 005a0c2d: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x44] (READ)
// 005a0c31: FXCH
// 005a0c33: FSTP float ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (WRITE)
// 005a0c37: FSTP float ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (WRITE)
// 005a0c3b: CMP EAX,ECX
// 005a0c3d: JNZ 0x005a0c7a
//   XREF to: 005a0c7a (CONDITIONAL_JUMP)
// 005a0c3f: MOV EAX,dword ptr [EBP + 0x14]
//   Label: LAB_005a0c3f
//   XREF to: Stack[0x4] (READ)
// 005a0c42: FLD float ptr [EAX + 0x508]
// 005a0c48: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0c4b: FMUL float ptr [EAX]
// 005a0c4d: FSTP float ptr [EAX]
// 005a0c4f: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a0c52: FLD float ptr [EAX + 0x50c]
// 005a0c58: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0c5b: FMUL float ptr [EAX + 0x4]
// 005a0c5e: FSTP float ptr [EAX + 0x4]
// 005a0c61: MOV EAX,dword ptr [EBP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 005a0c64: FLD float ptr [EAX + 0x510]
// 005a0c6a: MOV EAX,dword ptr [EBP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 005a0c6d: FMUL float ptr [EAX + 0x8]
// 005a0c70: FSTP float ptr [EAX + 0x8]
// 005a0c73: MOV ESP,EBP
// 005a0c75: POP EBP
// 005a0c76: POP EDI
// 005a0c77: POP ESI
// 005a0c78: POP EBX
// 005a0c79: RET
// 005a0c7a: MOV EAX,dword ptr [ESP + 0x20]
//   Label: LAB_005a0c7a
//   XREF to: Stack[-0x40] (DATA)
// 005a0c7e: MOV dword ptr [ECX],EAX
// 005a0c80: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 005a0c84: MOV dword ptr [ECX + 0x4],EAX
// 005a0c87: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[-0x38] (READ)
// 005a0c8b: MOV dword ptr [ECX + 0x8],EAX
// 005a0c8e: JMP 0x005a0c3f
//   XREF to: 005a0c3f (UNCONDITIONAL_JUMP)
