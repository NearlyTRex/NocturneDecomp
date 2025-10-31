// Name: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// Address: 00442ea0
// Address Range: [[00442ea0, 0044303c]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_importMatrices_FUN_00442ea0(CCourse * this_ptr)
// Cross-references:
//   core_course.cpp_OpeningCourseFile2_FUN_00442d70 (00442d70) at 00442e45 [UNCONDITIONAL_CALL]
//   core_course.cpp_OpeningCourseFileMaybe_FUN_00442bc0 (00442bc0) at 00442cd3 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_f_f_f_00619123
//   TerminatedCString s_core_course_cpp_0061912d
//   TerminatedCString s_CCourse_importMatrices_f_00619140
//   TerminatedCString s_f_f_f_00619177
//   TerminatedCString s_f_f_f_00619181
//   TerminatedCString s_f_f_f_0061918b
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_course.cpp_CCourse_allocMemory_FUN_00442500
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   crt_stdio.c_fscanf_FUN_005fe7c0
//   shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_importMatrices_FUN_00442ea0(CCourse *this_ptr)

{
  CQuaternion4f *pCVar1;
  CCourse *pCVar2;
  FILE *file;
  int iVar3;
  CCourseFrame *pCVar4;
  float fVar5;
  float fVar6;
  BADSPACEBASE *in_ESP;
  float unaff_EDI;
  undefined4 *puVar7;
  undefined4 *puVar8;
  byte bVar9;
  CCourse *in_stack_00000008;
  float in_stack_0000000c;
  FILE *in_stack_00000010;
  FILE *in_stack_00000014;
  FILE *in_stack_00000018;
  undefined4 auStackY_17e4 [509];
  undefined4 auStackY_ff0 [993];
  CMatrix3x3f *in_stack_ffffffbc;
  undefined1 local_40 [8];
  undefined1 local_38 [8];
  CCourse *local_30 [2];
  undefined1 local_28 [8];
  CCourse *apCStack_20 [4];
  float local_10;
  
  pCVar2 = this_ptr;
  bVar9 = 0;
  core_course_cpp_CCourse_allocMemory_FUN_00442500(this_ptr);
  fVar5 = 0.0;
  if (pCVar2->len < 1) {
    return;
  }
  do {
    shape_edittool_cpp_CEditorTools_updatePercentage_FUN_004a0530
              (g_CEditorToolsPtr,(float)(int)fVar5,(float)pCVar2->len);
    iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                      (in_stack_00000010,"%f,%f,%f\n",&stack0xffffffb0,local_40,local_30,
                       unaff_EDI);
    if (iVar3 == 3) goto LAB_00442f35;
    do {
      do {
        do {
          g_CurrentFilename = "..\\core\\course.cpp";
          g_CurrentLineNumber = 0x1c2;
          core_main_c_displayErrorAndQuit_FUN_00506f10
                    ("CCourse::importMatrices - file is corrupt on frame %d!","CCourse::importMatrices - file is corrupt on frame %d!",fVar5);
LAB_00442f35:
          iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                            (in_stack_00000014,"%f,%f,%f\n",&stack0xffffffb8,local_38,local_28);
          file = in_stack_00000018;
        } while (iVar3 != 3);
        iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0
                          (in_stack_00000018,"%f,%f,%f\n",local_40,local_30,apCStack_20);
      } while (iVar3 != 3);
      iVar3 = crt_stdio_c_fscanf_FUN_005fe7c0(file,"%f,%f,%f\n",local_38,local_28);
    } while (iVar3 != 3);
    core_xform_cpp_orthonormalizeMatrix3x3_FUN_005f6690((CMatrix3x3f *)local_40,0);
    this_ptr = local_30[0];
    in_stack_00000008 = apCStack_20[0];
    in_stack_0000000c = local_10;
    pCVar4 = &pCVar2->frame_list->frame1 + (int)fVar5;
    if (pCVar4 != (CCourseFrame *)&this_ptr) {
      (pCVar4->pos).x = (float)local_30[0];
      (pCVar4->pos).y = (float)apCStack_20[0];
      (pCVar4->pos).z = local_10;
    }
    core_xform_cpp_matrixToQuaternion_FUN_005f7420
              ((CQuaternion4f *)(local_40 + 4),in_stack_ffffffbc);
    pCVar1 = &(&pCVar2->frame_list->frame1)[(int)fVar5].orient;
    fVar6 = (float)((int)fVar5 + 1);
    puVar7 = (undefined4 *)((int)pCVar1 + ((uint)bVar9 * -2 + 1) * 4);
    pCVar1->w = fVar5;
    puVar8 = puVar7 + (uint)bVar9 * -2 + 1;
    *puVar7 = *(undefined4 *)(&stack0xfffffffc + (uint)bVar9 * -8);
    *puVar8 = *(undefined4 *)(&stack0x00000000 + (uint)bVar9 * -8 + (uint)bVar9 * -8);
    puVar8[(uint)bVar9 * -2 + 1] =
         *(undefined4 *)
          ((int)(&stack0x00000000 + (uint)bVar9 * -8 + (uint)bVar9 * -8) +
          ((uint)bVar9 * -2 + 1) * 4);
    fVar5 = fVar6;
    unaff_EDI = (float)local_40._4_4_;
  } while ((int)fVar6 < pCVar2->len);
  return;
}


// Assembly code:
// 00442ea0: PUSH EBX
//   Label: core_course.cpp_CCourse_importMatrices_FUN_00442ea0
// 00442ea1: PUSH EBP
// 00442ea2: SUB ESP,0x50
// 00442ea5: MOV EBP,dword ptr [ESP + 0x5c]
//   XREF to: Stack[0x4] (READ)
// 00442ea9: MOV EDX,dword ptr [ESP + 0x64]
//   XREF to: Stack[0xc] (READ)
// 00442ead: PUSH EDX
// 00442eae: PUSH EBP
// 00442eaf: XOR EBX,EBX
// 00442eb1: CALL core_course.cpp_CCourse_allocMemory_FUN_00442500
//   XREF to: 00442500 (UNCONDITIONAL_CALL)
// 00442eb6: ADD ESP,0x8
// 00442eb9: CMP EBX,dword ptr [EBP]
// 00442ebc: JL 0x00442ec4
//   XREF to: 00442ec4 (CONDITIONAL_JUMP)
// 00442ebe: ADD ESP,0x50
// 00442ec1: POP EBP
// 00442ec2: POP EBX
// 00442ec3: RET
// 00442ec4: PUSH EDI
//   Label: LAB_00442ec4
// 00442ec5: PUSH ESI
// 00442ec6: SUB ESP,0x4
// 00442ec9: FILD dword ptr [EBP]
// 00442ecc: MOV dword ptr [ESP + 0x58],EBX
//   XREF to: Stack[-0xc] (WRITE)
// 00442ed0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x64] (DATA)
// 00442ed3: FILD dword ptr [ESP + 0x58]
//   XREF to: Stack[-0xc] (READ)
// 00442ed7: SUB ESP,0x4
// 00442eda: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442ee0: FSTP float ptr [ESP]
//   XREF to: Stack[-0x68] (DATA)
// 00442ee3: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00442ee4: CALL shape_edittool.cpp_CEditorTools_updatePercentage_FUN_004a0530
//   XREF to: 004a0530 (UNCONDITIONAL_CALL)
// 00442ee9: ADD ESP,0xc
// 00442eec: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x38] (DATA)
// 00442ef0: PUSH EAX
// 00442ef1: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x48] (DATA)
// 00442ef5: PUSH EAX
// 00442ef6: LEA EAX,[ESP + 0x10]
//   XREF to: Stack[-0x58] (DATA)
// 00442efa: PUSH EAX
// 00442efb: PUSH 0x619123
//   XREF to: 00619123 (DATA)
// 00442f00: MOV EDI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 00442f04: PUSH EDI
// 00442f05: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442f0a: ADD ESP,0x14
// 00442f0d: CMP EAX,0x3
// 00442f10: JZ 0x00442f35
//   XREF to: 00442f35 (CONDITIONAL_JUMP)
// 00442f12: PUSH EBX
//   Label: LAB_00442f12
// 00442f13: MOV EAX,0x61912d
//   XREF to: 0061912d (PARAM)
// 00442f18: MOV EDX,0x1c2
// 00442f1d: PUSH 0x619140
//   XREF to: 00619140 (DATA)
// 00442f22: MOV [0x02f0ca48],EAX
//   XREF to: 02f0ca48 (WRITE)
// 00442f27: MOV dword ptr [0x02f0ca4c],EDX
//   XREF to: 02f0ca4c (WRITE)
// 00442f2d: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00442f32: ADD ESP,0x8
// 00442f35: LEA EAX,[ESP + 0x2c]
//   Label: LAB_00442f35
//   XREF to: Stack[-0x34] (DATA)
// 00442f39: PUSH EAX
// 00442f3a: LEA EAX,[ESP + 0x20]
//   XREF to: Stack[-0x44] (DATA)
// 00442f3e: PUSH EAX
// 00442f3f: LEA EAX,[ESP + 0x14]
//   XREF to: Stack[-0x54] (DATA)
// 00442f43: PUSH EAX
// 00442f44: PUSH 0x619177
//   XREF to: 00619177 (DATA)
// 00442f49: MOV ECX,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 00442f4d: PUSH ECX
// 00442f4e: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442f53: ADD ESP,0x14
// 00442f56: CMP EAX,0x3
// 00442f59: JNZ 0x00442f12
//   XREF to: 00442f12 (CONDITIONAL_JUMP)
// 00442f5b: LEA EAX,[ESP + 0x30]
//   XREF to: Stack[-0x30] (DATA)
// 00442f5f: PUSH EAX
// 00442f60: LEA EAX,[ESP + 0x24]
//   XREF to: Stack[-0x40] (DATA)
// 00442f64: PUSH EAX
// 00442f65: LEA EAX,[ESP + 0x18]
//   XREF to: Stack[-0x50] (DATA)
// 00442f69: PUSH EAX
// 00442f6a: PUSH 0x619181
//   XREF to: 00619181 (DATA)
// 00442f6f: MOV ESI,dword ptr [ESP + 0x78]
//   XREF to: Stack[0x8] (READ)
// 00442f73: PUSH ESI
// 00442f74: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442f79: ADD ESP,0x14
// 00442f7c: CMP EAX,0x3
// 00442f7f: JNZ 0x00442f12
//   XREF to: 00442f12 (CONDITIONAL_JUMP)
// 00442f81: LEA EAX,[ESP + 0x34]
//   XREF to: Stack[-0x2c] (DATA)
// 00442f85: PUSH EAX
// 00442f86: LEA EAX,[ESP + 0x28]
//   XREF to: Stack[-0x3c] (DATA)
// 00442f8a: PUSH EAX
// 00442f8b: LEA EAX,[ESP + 0x1c]
//   XREF to: Stack[-0x4c] (DATA)
// 00442f8f: PUSH EAX
// 00442f90: PUSH 0x61918b
//   XREF to: 0061918b (DATA)
// 00442f95: PUSH ESI
// 00442f96: CALL crt_stdio.c_fscanf_FUN_005fe7c0
//   XREF to: 005fe7c0 (UNCONDITIONAL_CALL)
// 00442f9b: ADD ESP,0x14
// 00442f9e: CMP EAX,0x3
// 00442fa1: JNZ 0x00442f12
//   XREF to: 00442f12 (CONDITIONAL_JUMP)
// 00442fa7: PUSH 0x0
// 00442fa9: LEA EAX,[ESP + 0xc]
//   XREF to: Stack[-0x58] (DATA)
// 00442fad: PUSH EAX
// 00442fae: CALL core_xform.cpp_orthonormalizeMatrix3x3_FUN_005f6690
//   XREF to: 005f6690 (UNCONDITIONAL_CALL)
// 00442fb3: ADD ESP,0x8
// 00442fb6: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00442fba: MOV dword ptr [ESP + 0x48],EAX
//   XREF to: Stack[-0x18] (WRITE)
// 00442fbe: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[-0x3c] (READ)
// 00442fc2: MOV dword ptr [ESP + 0x4c],EAX
//   XREF to: Stack[-0x14] (WRITE)
// 00442fc6: MOV EAX,dword ptr [ESP + 0x34]
//   XREF to: Stack[-0x2c] (READ)
// 00442fca: MOV dword ptr [ESP + 0x50],EAX
//   XREF to: Stack[-0x10] (WRITE)
// 00442fce: LEA EAX,[EBX*0x4 + 0x0]
// 00442fd5: MOV EDX,EAX
// 00442fd7: SHL EAX,0x3
// 00442fda: SUB EAX,EDX
// 00442fdc: MOV EDX,dword ptr [EBP + 0x4]
// 00442fdf: ADD EDX,EAX
// 00442fe1: LEA EAX,[ESP + 0x48]
//   XREF to: Stack[-0x18] (DATA)
// 00442fe5: CMP EDX,EAX
// 00442fe7: JZ 0x00442ffd
//   XREF to: 00442ffd (CONDITIONAL_JUMP)
// 00442fe9: MOV EAX,dword ptr [ESP + 0x14]
//   XREF to: Stack[-0x4c] (READ)
// 00442fed: MOV dword ptr [EDX],EAX
// 00442fef: MOV EAX,dword ptr [ESP + 0x4c]
//   XREF to: Stack[-0x14] (READ)
// 00442ff3: MOV dword ptr [EDX + 0x4],EAX
// 00442ff6: MOV EAX,dword ptr [ESP + 0x50]
//   XREF to: Stack[-0x10] (READ)
// 00442ffa: MOV dword ptr [EDX + 0x8],EAX
// 00442ffd: LEA EAX,[ESP + 0x8]
//   Label: LAB_00442ffd
//   XREF to: Stack[-0x58] (DATA)
// 00443001: PUSH EAX
// 00443002: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x28] (DATA)
// 00443006: CALL core_xform.cpp_matrixToQuaternion_FUN_005f7420
//   XREF to: 005f7420 (UNCONDITIONAL_CALL)
// 0044300b: LEA EAX,[EBX*0x4 + 0x0]
// 00443012: MOV EDX,EAX
// 00443014: SHL EAX,0x3
// 00443017: SUB EAX,EDX
// 00443019: MOV EDX,dword ptr [EBP + 0x4]
// 0044301c: LEA ESI,[ESP + 0x3c]
//   XREF to: Stack[-0x28] (DATA)
// 00443020: LEA EDI,[EDX + EAX*0x1 + 0xc]
// 00443024: ADD ESP,0x4
// 00443027: INC EBX
// 00443028: MOVSD ES:EDI,ESI
// 00443029: MOVSD ES:EDI,ESI
// 0044302a: MOVSD ES:EDI,ESI
// 0044302b: MOVSD ES:EDI,ESI
// 0044302c: POP ESI
// 0044302d: POP EDI
// 0044302e: CMP EBX,dword ptr [EBP]
// 00443031: JL 0x00442ec4
//   XREF to: 00442ec4 (CONDITIONAL_JUMP)
// 00443037: ADD ESP,0x50
// 0044303a: POP EBP
// 0044303b: POP EBX
// 0044303c: RET
