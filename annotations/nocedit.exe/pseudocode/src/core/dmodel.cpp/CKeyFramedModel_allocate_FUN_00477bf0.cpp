// Name: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
// Address: 00477bf0
// Address Range: [[00477bf0, 00477e56]]
// Convention: __cdecl
// Signature: void core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0(CKeyFramedModel * this_ptr, int vertex_count, int poly_count, int texture_count, int part_count, int frame_count)
// Cross-references:
//   core_dmodel.cpp_CKeyFramedModel_importFromDSE_FUN_0047ea10 (0047ea10) at 0047ea4e [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_importFromS3D_FUN_00479330 (00479330) at 004794f3 [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readBinaryModel_FUN_00476f20 (00476f20) at 00476fdf [UNCONDITIONAL_CALL]
//   core_dmodel.cpp_CKeyFramedModel_readTextModel_FUN_00477110 (00477110) at 004771f4 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061f5c3
//   TerminatedCString s_Too_many_materials_0061f5d6
//   TerminatedCString s_core_dmodel_cpp_0061f5ea
//   TerminatedCString s_Too_many_parts_0061f5fd
//   TerminatedCString s_core_dmodel_cpp_0061f60d
//   TerminatedCString s_core_dmodel_cpp_0061f620
//   TerminatedCString s_core_dmodel_cpp_0061f633
//   TerminatedCString s_core_dmodel_cpp_0061f646
//   TerminatedCString s_core_dmodel_cpp_0061f659
//   TerminatedCString s_Out_of_memory_in_CKeyFra_0061f66c
//   TerminatedCString s_core_dmodel_cpp_0061f6c5
//   TerminatedCString s_core_dmodel_cpp_0061f6d8
//   TerminatedCString s_Out_of_memory_for_vertex_0061f6eb
//   char* g_CurrentFilename
//   int g_CurrentLineNumber
// Function calls:
//   core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   core_main.c_displayErrorAndQuit_FUN_00506f10
//   shape_memdbg.cpp_debugAlloc_FUN_0050f1f0

#include "nocturne.h"

void __cdecl
core_dmodel_cpp_CKeyFramedModel_allocate_FUN_00477bf0
          (CKeyFramedModel *this_ptr,int vertex_count,int poly_count,int texture_count,
          int part_count,int frame_count)

{
  float fVar1;
  CVector3i **ppCVar2;
  SMRGLPrimitiveQuad **ppSVar3;
  int *piVar4;
  CVector3f *pCVar5;
  CVector3f *pCVar6;
  int in_stack_0000001c;
  
  core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
  this_ptr->vertex_count = poly_count;
  this_ptr->poly_count = texture_count;
  this_ptr->texture_count = part_count;
  this_ptr->part_count = frame_count;
  this_ptr->frame_count = in_stack_0000001c;
  if (300 < this_ptr->texture_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x2c0;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many materials!");
  }
  if (0x1e < this_ptr->part_count) {
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    g_CurrentLineNumber = 0x2c1;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Too many parts!");
  }
  ppCVar2 = (CVector3i **)
            shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                      (this_ptr->frame_count * this_ptr->vertex_count * 0xc,
                       "..\\core\\dmodel.cpp",0x2c5);
  this_ptr->vertex_list = ppCVar2;
  ppSVar3 = (SMRGLPrimitiveQuad **)
            shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                      (this_ptr->poly_count * 0x48,"..\\core\\dmodel.cpp",0x2c6);
  this_ptr->poly_vert_list = ppSVar3;
  piVar4 = (int *)shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                            (this_ptr->poly_count << 2,"..\\core\\dmodel.cpp",0x2c7);
  fVar1 = (float)this_ptr->frame_count;
  this_ptr->poly_texture_index_list = piVar4;
  pCVar5 = (CVector3f *)
           shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                     ((int)fVar1 * 0x18 + 4,"..\\core\\dmodel.cpp",0x2c8);
  pCVar6 = pCVar5;
  if (pCVar5 != (CVector3f *)0x0) {
    pCVar6 = (CVector3f *)&pCVar5->y;
    pCVar5->x = fVar1;
  }
  this_ptr->frame_bounds = pCVar6;
  if ((((this_ptr->vertex_list == (CVector3i **)0x0) ||
       ((0 < this_ptr->poly_count && (this_ptr->poly_vert_list == (SMRGLPrimitiveQuad **)0x0)))) ||
      ((0 < this_ptr->poly_count && (this_ptr->poly_texture_index_list == (int *)0x0)))) ||
     (this_ptr->frame_bounds == (CVector3f *)0x0)) {
    core_dmodel_cpp_CKeyFramedModel_free_FUN_00477690(this_ptr);
    g_CurrentLineNumber = 0x2d3;
    g_CurrentFilename = "..\\core\\dmodel.cpp";
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory in CKeyFramedModel::allocate.  frameCount=%d, vertexCount=%d, polyCount=%d");
    if (this_ptr->frame_count != 1) {
      return;
    }
  }
  else if (this_ptr->frame_count != 1) {
    return;
  }
  ppCVar2 = (CVector3i **)
            shape_memdbg_cpp_debugAlloc_FUN_0050f1f0
                      (this_ptr->vertex_count * 0xc,"..\\core\\dmodel.cpp",0x2d9);
  this_ptr->vertex_normal_list = ppCVar2;
  if (ppCVar2 != (CVector3i **)0x0) {
    return;
  }
  g_CurrentFilename = "..\\core\\dmodel.cpp";
  g_CurrentLineNumber = 0x2db;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory for vertex normals in CKeyFramedModel::allocate.  vertexCount=%d");
  return;
}


// Assembly code:
// 00477bf0: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_allocate_FUN_00477bf0
// 00477bf1: PUSH ESI
// 00477bf2: PUSH EDI
// 00477bf3: PUSH EBP
// 00477bf4: MOV EBX,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00477bf8: PUSH EBX
// 00477bf9: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00477bfe: ADD ESP,0x4
// 00477c01: MOV EAX,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00477c05: MOV dword ptr [EBX + 0x104],EAX
// 00477c0b: MOV EAX,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0xc] (READ)
// 00477c0f: MOV dword ptr [EBX + 0x110],EAX
// 00477c15: MOV EAX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x10] (READ)
// 00477c19: MOV dword ptr [EBX + 0x120],EAX
// 00477c1f: MOV EAX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x14] (READ)
// 00477c23: MOV dword ptr [EBX + 0x5584],EAX
// 00477c29: MOV EAX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 00477c2d: MOV EDX,dword ptr [EBX + 0x120]
// 00477c33: MOV dword ptr [EBX + 0x100],EAX
// 00477c39: CMP EDX,0x12c
// 00477c3f: JG 0x00477d86
//   XREF to: 00477d86 (CONDITIONAL_JUMP)
// 00477c45: CMP dword ptr [EBX + 0x5584],0x1e
//   Label: LAB_00477c45
// 00477c4c: JLE 0x00477c70
//   XREF to: 00477c70 (CONDITIONAL_JUMP)
// 00477c4e: MOV EBP,0x61f5ea
//   XREF to: 0061f5ea (DATA)
// 00477c53: MOV EAX,0x2c1
// 00477c58: PUSH 0x61f5fd
//   XREF to: 0061f5fd (DATA)
// 00477c5d: MOV dword ptr [0x02f0ca48],EBP
//   XREF to: 02f0ca48 (WRITE)
// 00477c63: MOV [0x02f0ca4c],EAX
//   XREF to: 02f0ca4c (WRITE)
// 00477c68: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477c6d: ADD ESP,0x4
// 00477c70: MOV EAX,dword ptr [EBX + 0x104]
//   Label: LAB_00477c70
// 00477c76: MOV EDX,dword ptr [EBX + 0x100]
// 00477c7c: IMUL EDX,EAX
// 00477c7f: LEA EAX,[EDX*0x4 + 0x0]
// 00477c86: PUSH 0x2c5
// 00477c8b: SUB EAX,EDX
// 00477c8d: PUSH 0x61f60d
//   XREF to: 0061f60d (DATA)
// 00477c92: SHL EAX,0x2
// 00477c95: PUSH EAX
// 00477c96: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00477c9b: ADD ESP,0xc
// 00477c9e: MOV EDX,dword ptr [EBX + 0x110]
// 00477ca4: MOV dword ptr [EBX + 0x10c],EAX
// 00477caa: LEA EAX,[EDX*0x8 + 0x0]
// 00477cb1: PUSH 0x2c6
// 00477cb6: ADD EAX,EDX
// 00477cb8: PUSH 0x61f620
//   XREF to: 0061f620 (DATA)
// 00477cbd: SHL EAX,0x3
// 00477cc0: PUSH EAX
// 00477cc1: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00477cc6: ADD ESP,0xc
// 00477cc9: MOV dword ptr [EBX + 0x114],EAX
// 00477ccf: PUSH 0x2c7
// 00477cd4: MOV EAX,dword ptr [EBX + 0x110]
// 00477cda: PUSH 0x61f633
//   XREF to: 0061f633 (DATA)
// 00477cdf: SHL EAX,0x2
// 00477ce2: PUSH EAX
// 00477ce3: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00477ce8: MOV ESI,dword ptr [EBX + 0x100]
// 00477cee: MOV dword ptr [EBX + 0x118],EAX
// 00477cf4: LEA EAX,[ESI*0x4 + 0x0]
// 00477cfb: ADD ESP,0xc
// 00477cfe: SUB EAX,ESI
// 00477d00: PUSH 0x2c8
// 00477d05: SHL EAX,0x3
// 00477d08: PUSH 0x61f646
//   XREF to: 0061f646 (DATA)
// 00477d0d: ADD EAX,0x4
// 00477d10: PUSH EAX
// 00477d11: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00477d16: ADD ESP,0xc
// 00477d19: TEST EAX,EAX
// 00477d1b: JZ 0x00477d23
//   XREF to: 00477d23 (CONDITIONAL_JUMP)
// 00477d1d: ADD EAX,0x4
// 00477d20: MOV dword ptr [EAX + -0x4],ESI
// 00477d23: MOV ECX,dword ptr [EBX + 0x10c]
//   Label: LAB_00477d23
// 00477d29: MOV dword ptr [EBX + 0x5690],EAX
// 00477d2f: TEST ECX,ECX
// 00477d31: JNZ 0x00477dae
//   XREF to: 00477dae (CONDITIONAL_JUMP)
// 00477d33: PUSH EBX
//   Label: LAB_00477d33
// 00477d34: CALL core_dmodel.cpp_CKeyFramedModel_free_FUN_00477690
//   XREF to: 00477690 (UNCONDITIONAL_CALL)
// 00477d39: ADD ESP,0x4
// 00477d3c: MOV EDI,dword ptr [EBX + 0x110]
// 00477d42: PUSH EDI
// 00477d43: MOV EBP,dword ptr [EBX + 0x104]
// 00477d49: PUSH EBP
// 00477d4a: MOV EAX,dword ptr [EBX + 0x100]
// 00477d50: PUSH EAX
// 00477d51: MOV ESI,0x2d3
// 00477d56: MOV ECX,0x61f659
//   XREF to: 0061f659 (PARAM)
// 00477d5b: PUSH 0x61f66c
//   XREF to: 0061f66c (DATA)
// 00477d60: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00477d66: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00477d6c: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477d71: ADD ESP,0x10
// 00477d74: CMP dword ptr [EBX + 0x100],0x1
// 00477d7b: JZ 0x00477df5
//   XREF to: 00477df5 (CONDITIONAL_JUMP)
// 00477d81: POP EBP
//   Label: LAB_00477d81
// 00477d82: POP EDI
// 00477d83: POP ESI
// 00477d84: POP EBX
// 00477d85: RET
// 00477d86: MOV ECX,0x61f5c3
//   Label: LAB_00477d86
//   XREF to: 0061f5c3 (PARAM)
// 00477d8b: MOV ESI,0x2c0
// 00477d90: PUSH 0x61f5d6
//   XREF to: 0061f5d6 (DATA)
// 00477d95: MOV dword ptr [0x02f0ca48],ECX
//   XREF to: 02f0ca48 (WRITE)
// 00477d9b: MOV dword ptr [0x02f0ca4c],ESI
//   XREF to: 02f0ca4c (WRITE)
// 00477da1: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477da6: ADD ESP,0x4
// 00477da9: JMP 0x00477c45
//   XREF to: 00477c45 (UNCONDITIONAL_JUMP)
// 00477dae: CMP dword ptr [EBX + 0x110],0x0
//   Label: LAB_00477dae
// 00477db5: JLE 0x00477dc4
//   XREF to: 00477dc4 (CONDITIONAL_JUMP)
// 00477db7: CMP dword ptr [EBX + 0x114],0x0
// 00477dbe: JZ 0x00477d33
//   XREF to: 00477d33 (CONDITIONAL_JUMP)
// 00477dc4: CMP dword ptr [EBX + 0x110],0x0
//   Label: LAB_00477dc4
// 00477dcb: JLE 0x00477dda
//   XREF to: 00477dda (CONDITIONAL_JUMP)
// 00477dcd: CMP dword ptr [EBX + 0x118],0x0
// 00477dd4: JZ 0x00477d33
//   XREF to: 00477d33 (CONDITIONAL_JUMP)
// 00477dda: CMP dword ptr [EBX + 0x5690],0x0
//   Label: LAB_00477dda
// 00477de1: JZ 0x00477d33
//   XREF to: 00477d33 (CONDITIONAL_JUMP)
// 00477de7: CMP dword ptr [EBX + 0x100],0x1
// 00477dee: JZ 0x00477df5
//   XREF to: 00477df5 (CONDITIONAL_JUMP)
// 00477df0: POP EBP
// 00477df1: POP EDI
// 00477df2: POP ESI
// 00477df3: POP EBX
// 00477df4: RET
// 00477df5: MOV EDX,dword ptr [EBX + 0x104]
//   Label: LAB_00477df5
// 00477dfb: LEA EAX,[EDX*0x4 + 0x0]
// 00477e02: PUSH 0x2d9
// 00477e07: SUB EAX,EDX
// 00477e09: PUSH 0x61f6c5
//   XREF to: 0061f6c5 (DATA)
// 00477e0e: SHL EAX,0x2
// 00477e11: PUSH EAX
// 00477e12: CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1f0
//   XREF to: 0050f1f0 (UNCONDITIONAL_CALL)
// 00477e17: ADD ESP,0xc
// 00477e1a: MOV dword ptr [EBX + 0x108],EAX
// 00477e20: TEST EAX,EAX
// 00477e22: JNZ 0x00477d81
//   XREF to: 00477d81 (CONDITIONAL_JUMP)
// 00477e28: MOV EBP,dword ptr [EBX + 0x104]
// 00477e2e: PUSH EBP
// 00477e2f: MOV ESI,0x61f6d8
//   XREF to: 0061f6d8 (DATA)
// 00477e34: MOV EDI,0x2db
// 00477e39: PUSH 0x61f6eb
//   XREF to: 0061f6eb (DATA)
// 00477e3e: MOV dword ptr [0x02f0ca48],ESI
//   XREF to: 02f0ca48 (WRITE)
// 00477e44: MOV dword ptr [0x02f0ca4c],EDI
//   XREF to: 02f0ca4c (WRITE)
// 00477e4a: CALL core_main.c_displayErrorAndQuit_FUN_00506f10
//   XREF to: 00506f10 (UNCONDITIONAL_CALL)
// 00477e4f: ADD ESP,0x8
// 00477e52: POP EBP
// 00477e53: POP EDI
// 00477e54: POP ESI
// 00477e55: POP EBX
// 00477e56: RET
