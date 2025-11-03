// Name: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// Address: 0059aa00
// Address Range: [[0059aa00, 0059ab16]]
// Convention: __cdecl
// Signature: CVector3f * core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00(CDeformableModel * this_ptr, CVector3f * output_pos, int lod_index, int vertex_index, CMatrix3x4f * bone_matrices)
// Cross-references:
//   core_skeledit.cpp_ExportModel_FUN_00595fc0 (00595fc0) at 0059623a [UNCONDITIONAL_CALL]
//   core_skeleton.cpp_CDeformableModelInstance_FUN_005a0210 (005a0210) at 005a0236 [UNCONDITIONAL_CALL]
// Function calls:
//   core_xform.cpp_transformVector3x4_FUN_005f4dc0

#include "nocturne.h"

CVector3f * __cdecl
core_skeleton_cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
          (CDeformableModel *this_ptr,CVector3f *output_pos,int lod_index,int vertex_index,
          CMatrix3x4f *bone_matrices)

{
  CVector3f *pCVar1;
  SVert *pSVar2;
  BADSPACEBASE *in_ESP;
  byte *unaff_EBP;
  CVector3f *input_vector;
  SVert *pSVar3;
  int iVar4;
  int in_stack_00000018;
  CVector3f CStack_34;
  undefined4 local_28;
  float local_24;
  float local_20;
  float local_1c;
  float local_18;
  SVert *local_14;
  
  pSVar3 = this_ptr->vertex_data_ptr[lod_index] + vertex_index;
  input_vector = &pSVar3->position;
  local_14 = pSVar3;
  if (pSVar3->num_bone_influences == '\x01') {
    core_xform_cpp_transformVector3x4_FUN_005f4dc0
              (output_pos,input_vector,bone_matrices + pSVar3->bone_indices[0]);
  }
  else {
    iVar4 = 0;
    local_28 = 0;
    local_24 = 0.0;
    CStack_34.z = 0.0;
    pSVar2 = pSVar3;
    while( true ) {
      pSVar2 = (SVert *)pSVar2->bone_weights;
      if ((int)(uint)*unaff_EBP <= iVar4) break;
      pCVar1 = core_xform_cpp_transformVector3x4_FUN_005f4dc0
                         (&CStack_34,input_vector,
                          (CMatrix3x4f *)((uint)pSVar3->bone_indices[0] * 0x30 + in_stack_00000018))
      ;
      local_18 = pCVar1->x * *(float *)pSVar2;
      local_14 = (SVert *)(pCVar1->y * *(float *)pSVar2);
      unaff_EBP = (byte *)(pCVar1->z * *(float *)pSVar2);
      pSVar3 = (SVert *)pSVar3->bone_indices;
      iVar4 = iVar4 + 1;
      input_vector = input_vector + 1;
      local_24 = local_24 + local_18;
      local_20 = local_20 + (float)local_14;
      local_1c = local_1c + (float)unaff_EBP;
    }
    *(undefined4 *)lod_index = local_28;
    *(float *)(lod_index + 4) = local_24;
    *(float *)(lod_index + 8) = local_20;
  }
  return (CVector3f *)lod_index;
}


// Assembly code:
// 0059aa00: PUSH EBX
//   Label: core_skeleton.cpp_CDeformableModel_skinSingleVertex_FUN_0059aa00
// 0059aa01: PUSH ESI
// 0059aa02: PUSH EDI
// 0059aa03: PUSH EBP
// 0059aa04: SUB ESP,0x28
// 0059aa07: MOV EAX,dword ptr [ESP + 0x44]
//   XREF to: Stack[0xc] (READ)
// 0059aa0b: MOV ESI,dword ptr [ESP + 0x3c]
//   XREF to: Stack[0x4] (READ)
// 0059aa0f: SHL EAX,0x2
// 0059aa12: MOV EBX,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x10] (READ)
// 0059aa16: ADD ESI,EAX
// 0059aa18: LEA EAX,[EBX*0x4 + 0x0]
// 0059aa1f: SUB EAX,EBX
// 0059aa21: SHL EAX,0x2
// 0059aa24: ADD EBX,EAX
// 0059aa26: SHL EBX,0x2
// 0059aa29: MOV EAX,dword ptr [ESI + 0x40]
// 0059aa2c: ADD EAX,EBX
// 0059aa2e: MOV dword ptr [ESP + 0x24],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 0059aa32: MOV DL,byte ptr [EAX]
// 0059aa34: LEA EBP,[EAX + 0x10]
// 0059aa37: CMP DL,0x1
// 0059aa3a: JZ 0x0059aa81
//   XREF to: 0059aa81 (CONDITIONAL_JUMP)
// 0059aa3c: LEA EBX,[EAX + 0x4]
// 0059aa3f: XOR EDX,EDX
// 0059aa41: XOR EDI,EDI
// 0059aa43: MOV dword ptr [ESP + 0x10],EDX
//   XREF to: Stack[-0x28] (WRITE)
// 0059aa47: MOV dword ptr [ESP + 0x14],EDX
//   XREF to: Stack[-0x24] (WRITE)
// 0059aa4b: MOV ESI,EAX
// 0059aa4d: MOV dword ptr [ESP + 0xc],EDX
//   XREF to: Stack[-0x2c] (WRITE)
// 0059aa51: MOV EDX,dword ptr [ESP + 0x24]
//   Label: LAB_0059aa51
//   XREF to: Stack[-0x14] (READ)
// 0059aa55: XOR EAX,EAX
// 0059aa57: MOV AL,byte ptr [EDX]
// 0059aa59: CMP EDI,EAX
// 0059aa5b: JL 0x0059aaa9
//   XREF to: 0059aaa9 (CONDITIONAL_JUMP)
// 0059aa5d: MOV EDX,dword ptr [ESP + 0x40]
//   XREF to: Stack[0x8] (READ)
// 0059aa61: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0059aa65: MOV dword ptr [EDX],EAX
// 0059aa67: MOV EAX,dword ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0059aa6b: MOV dword ptr [EDX + 0x4],EAX
// 0059aa6e: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 0059aa72: MOV dword ptr [EDX + 0x8],EAX
// 0059aa75: MOV EAX,dword ptr [ESP + 0x40]
//   Label: LAB_0059aa75
//   XREF to: Stack[0x8] (READ)
// 0059aa79: ADD ESP,0x28
// 0059aa7c: POP EBP
// 0059aa7d: POP EDI
// 0059aa7e: POP ESI
// 0059aa7f: POP EBX
// 0059aa80: RET
// 0059aa81: XOR EBX,EBX
//   Label: LAB_0059aa81
// 0059aa83: MOV BL,byte ptr [EAX + 0x1]
// 0059aa86: LEA EAX,[EBX*0x4 + 0x0]
// 0059aa8d: SUB EAX,EBX
// 0059aa8f: MOV ESI,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x14] (READ)
// 0059aa93: SHL EAX,0x4
// 0059aa96: ADD EAX,ESI
// 0059aa98: PUSH EAX
// 0059aa99: PUSH EBP
// 0059aa9a: MOV EDI,dword ptr [ESP + 0x48]
//   XREF to: Stack[0x8] (READ)
// 0059aa9e: PUSH EDI
// 0059aa9f: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059aaa4: ADD ESP,0xc
// 0059aaa7: JMP 0x0059aa75
//   XREF to: 0059aa75 (UNCONDITIONAL_JUMP)
// 0059aaa9: XOR EAX,EAX
//   Label: LAB_0059aaa9
// 0059aaab: MOV AL,byte ptr [ESI + 0x1]
// 0059aaae: IMUL EAX,EAX,0x30
// 0059aab1: ADD EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[0x14] (READ)
// 0059aab5: PUSH EAX
// 0059aab6: PUSH EBP
// 0059aab7: LEA EAX,[ESP + 0x8]
//   XREF to: Stack[-0x38] (DATA)
// 0059aabb: PUSH EAX
// 0059aabc: CALL core_xform.cpp_transformVector3x4_FUN_005f4dc0
//   XREF to: 005f4dc0 (UNCONDITIONAL_CALL)
// 0059aac1: FLD float ptr [EAX]
// 0059aac3: FMUL float ptr [EBX]
// 0059aac5: ADD ESP,0xc
// 0059aac8: FSTP float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (WRITE)
// 0059aacc: FLD float ptr [EAX + 0x4]
// 0059aacf: FMUL float ptr [EBX]
// 0059aad1: FSTP float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (WRITE)
// 0059aad5: FLD float ptr [EAX + 0x8]
// 0059aad8: FMUL float ptr [EBX]
// 0059aada: INC ESI
// 0059aadb: ADD EBX,0x4
// 0059aade: INC EDI
// 0059aadf: ADD EBP,0xc
// 0059aae2: FLD float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (READ)
// 0059aae6: FLD float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (READ)
// 0059aaea: FLD float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (READ)
// 0059aaee: FXCH ST2
// 0059aaf0: FADD float ptr [ESP + 0x18]
//   XREF to: Stack[-0x20] (READ)
// 0059aaf4: FXCH
// 0059aaf6: FADD float ptr [ESP + 0x1c]
//   XREF to: Stack[-0x1c] (READ)
// 0059aafa: FXCH ST3
// 0059aafc: FSTP float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (WRITE)
// 0059ab00: FSTP float ptr [ESP + 0xc]
//   XREF to: Stack[-0x2c] (WRITE)
// 0059ab04: FADD float ptr [ESP + 0x20]
//   XREF to: Stack[-0x18] (READ)
// 0059ab08: FXCH
// 0059ab0a: FSTP float ptr [ESP + 0x10]
//   XREF to: Stack[-0x28] (WRITE)
// 0059ab0e: FSTP float ptr [ESP + 0x14]
//   XREF to: Stack[-0x24] (WRITE)
// 0059ab12: JMP 0x0059aa51
//   XREF to: 0059aa51 (UNCONDITIONAL_JUMP)
