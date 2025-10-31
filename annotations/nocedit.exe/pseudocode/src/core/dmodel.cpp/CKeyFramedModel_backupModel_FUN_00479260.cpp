// Name: core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260
// Address: 00479260
// Address Range: [[00479260, 00479323]]
// Convention: __cdecl
// Signature: int core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel * this_ptr, char * filename)
// Globals:
//   TerminatedCString s_core_dmodel_cpp_0061fc20
//   TerminatedCString s_rb_0061fc33
//   TerminatedCString s_core_dmodel_cpp_0061fc36
//   TerminatedCString s_wb_0061fc49
//   TerminatedCString s_core_dmodel_cpp_0061fc4c
//   TerminatedCString s_core_dmodel_cpp_0061fc5f
//   TerminatedCString s_core_dmodel_cpp_0061fc72
// Function calls:
//   crt_stdio.c_fgetc_FUN_005fe840
//   crt_stdio.c_fputc_FUN_006007a0
//   shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   shape_memdbg.cpp_openFile_FUN_0050f7a0

#include "nocturne.h"

int __cdecl
core_dmodel_cpp_CKeyFramedModel_backupModel_FUN_00479260(CKeyFramedModel *this_ptr,char *filename)

{
  FILE *file_ptr;
  FILE *file_ptr_00;
  int iVar1;
  char *in_stack_0000000c;
  
  file_ptr = shape_memdbg_cpp_openFile_FUN_0050f7a0
                       (this_ptr->model_filename,(char *)0x0,"rb",
                        "..\\core\\dmodel.cpp",0x5ef);
  if (file_ptr == (FILE *)0x0) {
    return 0;
  }
  file_ptr_00 = shape_memdbg_cpp_openFile_FUN_0050f7a0
                          (in_stack_0000000c,(char *)0x0,"wb","..\\core\\dmodel.cpp",
                           0x5f2);
  if (file_ptr_00 != (FILE *)0x0) {
    while( true ) {
      iVar1 = crt_stdio_c_fgetc_FUN_005fe840(file_ptr);
      if (iVar1 < 0) break;
      crt_stdio_c_fputc_FUN_006007a0(iVar1,file_ptr_00);
    }
    if (((file_ptr->_flag & 0x20) == 0) && ((file_ptr_00->_flag & 0x20) == 0)) {
      iVar1 = 1;
    }
    else {
      iVar1 = 0;
    }
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0x600);
    shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr_00,"..\\core\\dmodel.cpp",0x601);
    return iVar1;
  }
  shape_memdbg_cpp_closeFile_FUN_0050f9b0(file_ptr,"..\\core\\dmodel.cpp",0x5f4);
  return 0;
}


// Assembly code:
// 00479260: PUSH EBX
//   Label: core_dmodel.cpp_CKeyFramedModel_backupModel_FUN_00479260
// 00479261: PUSH ESI
// 00479262: PUSH EDI
// 00479263: PUSH 0x5ef
// 00479268: PUSH 0x61fc20
//   XREF to: 0061fc20 (DATA)
// 0047926d: PUSH 0x61fc33
//   XREF to: 0061fc33 (DATA)
// 00479272: PUSH 0x0
// 00479274: MOV EDX,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x4] (READ)
// 00479278: PUSH EDX
// 00479279: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 0047927e: MOV EDI,EAX
// 00479280: ADD ESP,0x14
// 00479283: MOV ESI,EAX
// 00479285: TEST EAX,EAX
// 00479287: JNZ 0x0047928d
//   XREF to: 0047928d (CONDITIONAL_JUMP)
// 00479289: POP EDI
// 0047928a: POP ESI
// 0047928b: POP EBX
// 0047928c: RET
// 0047928d: PUSH 0x5f2
//   Label: LAB_0047928d
// 00479292: PUSH 0x61fc36
//   XREF to: 0061fc36 (DATA)
// 00479297: PUSH 0x61fc49
//   XREF to: 0061fc49 (DATA)
// 0047929c: PUSH 0x0
// 0047929e: MOV ECX,dword ptr [ESP + 0x24]
//   XREF to: Stack[0x8] (READ)
// 004792a2: PUSH ECX
// 004792a3: CALL shape_memdbg.cpp_openFile_FUN_0050f7a0
//   XREF to: 0050f7a0 (UNCONDITIONAL_CALL)
// 004792a8: ADD ESP,0x14
// 004792ab: MOV EBX,EAX
// 004792ad: TEST EAX,EAX
// 004792af: JZ 0x004792ca
//   XREF to: 004792ca (CONDITIONAL_JUMP)
// 004792b1: PUSH ESI
//   Label: LAB_004792b1
// 004792b2: CALL crt_stdio.c_fgetc_FUN_005fe840
//   XREF to: 005fe840 (UNCONDITIONAL_CALL)
// 004792b7: ADD ESP,0x4
// 004792ba: TEST EAX,EAX
// 004792bc: JL 0x004792e3
//   XREF to: 004792e3 (CONDITIONAL_JUMP)
// 004792be: PUSH EBX
// 004792bf: PUSH EAX
// 004792c0: CALL crt_stdio.c_fputc_FUN_006007a0
//   XREF to: 006007a0 (UNCONDITIONAL_CALL)
// 004792c5: ADD ESP,0x8
// 004792c8: JMP 0x004792b1
//   XREF to: 004792b1 (UNCONDITIONAL_JUMP)
// 004792ca: PUSH 0x5f4
//   Label: LAB_004792ca
// 004792cf: PUSH 0x61fc4c
//   XREF to: 0061fc4c (DATA)
// 004792d4: PUSH EDI
// 004792d5: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004792da: ADD ESP,0xc
// 004792dd: XOR EAX,EAX
// 004792df: POP EDI
// 004792e0: POP ESI
// 004792e1: POP EBX
// 004792e2: RET
// 004792e3: TEST byte ptr [ESI + 0xc],0x20
//   Label: LAB_004792e3
// 004792e7: JZ 0x00479317
//   XREF to: 00479317 (CONDITIONAL_JUMP)
// 004792e9: XOR EDI,EDI
//   Label: LAB_004792e9
// 004792eb: PUSH 0x600
//   Label: LAB_004792eb
// 004792f0: PUSH 0x61fc5f
//   XREF to: 0061fc5f (DATA)
// 004792f5: PUSH ESI
// 004792f6: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 004792fb: ADD ESP,0xc
// 004792fe: PUSH 0x601
// 00479303: PUSH 0x61fc72
//   XREF to: 0061fc72 (DATA)
// 00479308: PUSH EBX
// 00479309: CALL shape_memdbg.cpp_closeFile_FUN_0050f9b0
//   XREF to: 0050f9b0 (UNCONDITIONAL_CALL)
// 0047930e: ADD ESP,0xc
// 00479311: MOV EAX,EDI
// 00479313: POP EDI
// 00479314: POP ESI
// 00479315: POP EBX
// 00479316: RET
// 00479317: TEST byte ptr [EBX + 0xc],0x20
//   Label: LAB_00479317
// 0047931b: JNZ 0x004792e9
//   XREF to: 004792e9 (CONDITIONAL_JUMP)
// 0047931d: MOV EDI,0x1
// 00479322: JMP 0x004792eb
//   XREF to: 004792eb (UNCONDITIONAL_JUMP)
