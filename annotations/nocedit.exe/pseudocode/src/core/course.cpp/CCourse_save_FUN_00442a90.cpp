// Name: core_course.cpp_CCourse_save_FUN_00442a90
// Address: 00442a90
// Address Range: [[00442a90, 00442bb1]]
// Convention: __cdecl
// Signature: void core_course.cpp_CCourse_save_FUN_00442a90(CCourse * this_ptr)
// Cross-references:
//   core_course.cpp_CCourse_showEditorMenu_FUN_00443040 (00443040) at 00443234 [UNCONDITIONAL_CALL]
// Globals:
//   TerminatedCString s_wt_00618fb3
//   TerminatedCString s_data_00618fb6
//   TerminatedCString s_Can_t_create_data_s_00618fbb
//   TerminatedCString s_version_00618fd0
//   TerminatedCString s_d_00618fdc
//   TerminatedCString s_len_loop_00618fe0
//   TerminatedCString s_d_d_00618fed
//   TerminatedCString s_frameList_pos_x_y_z_orie_00618ff4
//   TerminatedCString s_g_g_g_g_g_g_g_0061901f
//   TerminatedCString s_core_course_cpp_00619036
//   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
//   CEditorTools g_CEditorToolsPtr
// Function calls:
//   crt_stdio.c_fprintf_FUN_005fe6d0
//   engine_dosio.c_getFile_FUN_00481a50
//   shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_save_FUN_00442a90(CCourse *this_ptr)

{
  float *pfVar1;
  float *pfVar2;
  float *pfVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  CCourseFrameList *pCVar7;
  FILE *file;
  int iVar8;
  int iVar9;
  char *in_stack_00000008;
  
  file = engine_dosio_c_getFile_FUN_00481a50("data",in_stack_00000008,"wt");
  if (file == (FILE *)0x0) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't create data\\%s");
    return;
  }
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// version\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// len,loop\n");
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"%d,%d\n",this_ptr->len);
  iVar9 = 0;
  crt_stdio_c_fprintf_FUN_005fe6d0(file,"// frameList: pos(x,y,z), orient(w,x,y,z)\n");
  if (0 < this_ptr->len) {
    iVar8 = 0;
    do {
      pCVar7 = this_ptr->frame_list;
      pfVar2 = (float *)((int)&(pCVar7->frame1).orient.y + iVar8);
      pfVar3 = (float *)((int)&(pCVar7->frame1).orient.x + iVar8);
      pfVar4 = (float *)((int)&(pCVar7->frame1).orient.w + iVar8);
      pfVar5 = (float *)((int)&(pCVar7->frame1).pos.z + iVar8);
      pfVar6 = (float *)((int)&(pCVar7->frame1).pos.y + iVar8);
      pfVar1 = (float *)((int)&(pCVar7->frame1).pos.x + iVar8);
      iVar8 = iVar8 + 0x1c;
      iVar9 = iVar9 + 1;
      crt_stdio_c_fprintf_FUN_005fe6d0
                (file,"%g,%g,%g, %g,%g,%g,%g\n","%g,%g,%g, %g,%g,%g,%g\n",(double)*pfVar1,
                 (double)*pfVar6,(double)*pfVar5,(double)*pfVar4,(double)*pfVar3,(double)*pfVar2);
    } while (iVar9 < this_ptr->len);
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file,"..\\core\\course.cpp",0x140);
  return;
}


// Assembly code:
// 00442a90: PUSH EBX
//   Label: core_course.cpp_CCourse_save_FUN_00442a90
// 00442a91: PUSH ESI
// 00442a92: PUSH EDI
// 00442a93: PUSH EBP
// 00442a94: MOV EDI,dword ptr [ESP + 0x14]
//   XREF to: Stack[0x4] (READ)
// 00442a98: MOV ESI,dword ptr [ESP + 0x18]
//   XREF to: Stack[0x8] (READ)
// 00442a9c: PUSH 0x618fb3
//   XREF to: 00618fb3 (DATA)
// 00442aa1: PUSH ESI
// 00442aa2: PUSH 0x618fb6
//   XREF to: 00618fb6 (DATA)
// 00442aa7: CALL engine_dosio.c_getFile_FUN_00481a50
//   XREF to: 00481a50 (UNCONDITIONAL_CALL)
// 00442aac: MOV EBX,EAX
// 00442aae: ADD ESP,0xc
// 00442ab1: MOV EBP,EAX
// 00442ab3: TEST EAX,EAX
// 00442ab5: JZ 0x00442b98
//   XREF to: 00442b98 (CONDITIONAL_JUMP)
// 00442abb: PUSH 0x618fd0
//   XREF to: 00618fd0 (DATA)
// 00442ac0: PUSH EAX
// 00442ac1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442ac6: ADD ESP,0x8
// 00442ac9: PUSH 0x1
// 00442acb: PUSH 0x618fdc
//   XREF to: 00618fdc (DATA)
// 00442ad0: PUSH EBX
// 00442ad1: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442ad6: ADD ESP,0xc
// 00442ad9: PUSH 0x618fe0
//   XREF to: 00618fe0 (DATA)
// 00442ade: PUSH EBX
// 00442adf: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442ae4: ADD ESP,0x8
// 00442ae7: MOV EDX,dword ptr [EDI + 0x8]
// 00442aea: PUSH EDX
// 00442aeb: MOV ECX,dword ptr [EDI]
// 00442aed: PUSH ECX
// 00442aee: PUSH 0x618fed
//   XREF to: 00618fed (DATA)
// 00442af3: PUSH EBX
// 00442af4: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442af9: ADD ESP,0x10
// 00442afc: PUSH 0x618ff4
//   XREF to: 00618ff4 (DATA)
// 00442b01: PUSH EBX
// 00442b02: XOR ESI,ESI
// 00442b04: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442b09: MOV EBX,dword ptr [EDI]
// 00442b0b: ADD ESP,0x8
// 00442b0e: TEST EBX,EBX
// 00442b10: JLE 0x00442b80
//   XREF to: 00442b80 (CONDITIONAL_JUMP)
// 00442b12: XOR EBX,EBX
// 00442b14: MOV EAX,dword ptr [EDI + 0x4]
//   Label: LAB_00442b14
// 00442b17: SUB ESP,0x8
// 00442b1a: FLD float ptr [EBX + EAX*0x1 + 0x18]
// 00442b1e: FSTP double ptr [ESP]
//   XREF to: Stack[-0x18] (DATA)
// 00442b21: SUB ESP,0x8
// 00442b24: FLD float ptr [EBX + EAX*0x1 + 0x14]
// 00442b28: FSTP double ptr [ESP]
//   XREF to: Stack[-0x20] (DATA)
// 00442b2b: SUB ESP,0x8
// 00442b2e: FLD float ptr [EBX + EAX*0x1 + 0x10]
// 00442b32: FSTP double ptr [ESP]
//   XREF to: Stack[-0x28] (DATA)
// 00442b35: SUB ESP,0x8
// 00442b38: FLD float ptr [EBX + EAX*0x1 + 0xc]
// 00442b3c: FSTP double ptr [ESP]
//   XREF to: Stack[-0x30] (DATA)
// 00442b3f: SUB ESP,0x8
// 00442b42: FLD float ptr [EBX + EAX*0x1 + 0x8]
// 00442b46: FSTP double ptr [ESP]
//   XREF to: Stack[-0x38] (DATA)
// 00442b49: SUB ESP,0x8
// 00442b4c: FLD float ptr [EBX + EAX*0x1 + 0x4]
// 00442b50: FSTP double ptr [ESP]
//   XREF to: Stack[-0x40] (DATA)
// 00442b53: SUB ESP,0x8
// 00442b56: FLD float ptr [EBX + EAX*0x1]
// 00442b59: FSTP double ptr [ESP]
//   XREF to: Stack[-0x48] (DATA)
// 00442b5c: PUSH 0x61901f
//   XREF to: 0061901f (DATA)
// 00442b61: PUSH EBP
// 00442b62: ADD EBX,0x1c
// 00442b65: INC ESI
// 00442b66: CALL crt_stdio.c_fprintf_FUN_005fe6d0
//   XREF to: 005fe6d0 (UNCONDITIONAL_CALL)
// 00442b6b: MOV EAX,dword ptr [EDI]
// 00442b6d: ADD ESP,0x40
// 00442b70: CMP ESI,EAX
// 00442b72: JL 0x00442b14
//   XREF to: 00442b14 (CONDITIONAL_JUMP)
// 00442b74: LEA EAX,[EAX]
// 00442b7a: LEA EDX,[EDX]
// 00442b80: PUSH 0x140
//   Label: LAB_00442b80
// 00442b85: PUSH 0x619036
//   XREF to: 00619036 (DATA)
// 00442b8a: PUSH EBP
// 00442b8b: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 00442b90: ADD ESP,0xc
// 00442b93: POP EBP
// 00442b94: POP EDI
// 00442b95: POP ESI
// 00442b96: POP EBX
// 00442b97: RET
// 00442b98: PUSH ESI
//   Label: LAB_00442b98
// 00442b99: PUSH 0x618fbb
//   XREF to: 00618fbb (DATA)
// 00442b9e: MOV ESI,dword ptr [0x00678a60]
//   XREF to: 00678a60 (READ)
// 00442ba4: PUSH ESI
//   XREF to: 02cf1cd4 (DATA)
// 00442ba5: CALL shape_edittool.cpp_CEditorTools_showError_FUN_0049e740
//   XREF to: 0049e740 (UNCONDITIONAL_CALL)
// 00442baa: ADD ESP,0xc
// 00442bad: POP EBP
// 00442bae: POP EDI
// 00442baf: POP ESI
// 00442bb0: POP EBX
// 00442bb1: RET
